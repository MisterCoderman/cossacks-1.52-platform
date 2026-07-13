#include "recomp.h"

/* FUN_100125a0 @ 0x115b25a0 (393 bytes, 123 insns) */
void f_115b25a0(void) {
  FTRACE(0x115b25a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b25a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b25a1 mov ebp, esp */
  EBP = (ESP);
  /* 115b25a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b25a6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b25aa jne 0x115b25b6 */
  if (!C.zf) goto L_115b25b6;
  /* 115b25ac mov eax, dword ptr [0x115d0c98] */
  EAX = (r32((uint32_t)(0x115d0c98)));
  /* 115b25b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115b25b4 jmp 0x115b25bc */
  goto L_115b25bc;
L_115b25b6:;
  /* 115b25b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b25b9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_115b25bc:;
  /* 115b25bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b25bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115b25c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b25c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b25c8 push 0x115d19ac */
  push32((uint32_t)(0x115d19acu));
  /* 115b25cd call dword ptr [0x115d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43ac))), 0x115b25d3u);
  /* 115b25d3 cmp dword ptr [0x115d199c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d199c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b25da je 0x115b25fa */
  if (C.zf) goto L_115b25fa;
  /* 115b25dc push 0x115d19ac */
  push32((uint32_t)(0x115d19acu));
  /* 115b25e1 call dword ptr [0x115d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d439c))), 0x115b25e7u);
  /* 115b25e7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115b25e9 call 0x115a8c60 */
  push32(0x115b25eeu); f_115a8c60();
  /* 115b25ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b25f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 115b25f8 jmp 0x115b2601 */
  goto L_115b2601;
L_115b25fa:;
  /* 115b25fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115b2601:;
  /* 115b2601 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2605 jbe 0x115b26f2 */
  if ((C.cf||C.zf)) goto L_115b26f2;
  /* 115b260b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b260e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b2610 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 115b2613 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b2617 je 0x115b2621 */
  if (C.zf) goto L_115b2621;
  /* 115b2619 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b261d je 0x115b2626 */
  if (C.zf) goto L_115b2626;
  /* 115b261f jmp 0x115b2680 */
  goto L_115b2680;
L_115b2621:;
  /* 115b2621 jmp 0x115b26f2 */
  goto L_115b26f2;
L_115b2626:;
  /* 115b2626 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2629 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b262c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 115b262f mov dword ptr [0x115d1988], 0 */
  w32((uint32_t)(0x115d1988), (0x0u));
  /* 115b2639 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b263c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b263f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2642 jne 0x115b2657 */
  if (!C.zf) goto L_115b2657;
  /* 115b2644 mov dword ptr [0x115d1988], 1 */
  w32((uint32_t)(0x115d1988), (0x1u));
  /* 115b264e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2651 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2654 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_115b2657:;
  /* 115b2657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b265a push ecx */
  push32((uint32_t)(ECX));
  /* 115b265b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 115b265e push edx */
  push32((uint32_t)(EDX));
  /* 115b265f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 115b2662 push eax */
  push32((uint32_t)(EAX));
  /* 115b2663 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2666 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2667 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b266a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b266c push eax */
  push32((uint32_t)(EAX));
  /* 115b266d call 0x115b2730 */
  push32(0x115b2672u); f_115b2730();
  /* 115b2672 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2675 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2678 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b267b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 115b267e jmp 0x115b26ed */
  goto L_115b26ed;
L_115b2680:;
  /* 115b2680 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b2685 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b2687 mov ecx, dword ptr [0x115cfc98] */
  ECX = (r32((uint32_t)(0x115cfc98)));
  /* 115b268d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b268f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115b2693 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 115b2699 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b269b je 0x115b26c8 */
  if (C.zf) goto L_115b26c8;
  /* 115b269d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b26a1 jbe 0x115b26c8 */
  if ((C.cf||C.zf)) goto L_115b26c8;
  /* 115b26a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b26a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b26a9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b26ab mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115b26ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b26b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b26b3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b26b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b26b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b26bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 115b26bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b26c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b26c5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_115b26c8:;
  /* 115b26c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b26cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b26ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b26d0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115b26d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b26d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b26d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b26db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b26de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b26e1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 115b26e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b26e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b26ea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_115b26ed:;
  /* 115b26ed jmp 0x115b2601 */
  goto L_115b2601;
L_115b26f2:;
  /* 115b26f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b26f6 je 0x115b2704 */
  if (C.zf) goto L_115b2704;
  /* 115b26f8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115b26fa call 0x115a8d00 */
  push32(0x115b26ffu); f_115a8d00();
  /* 115b26ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2702 jmp 0x115b270f */
  goto L_115b270f;
L_115b2704:;
  /* 115b2704 push 0x115d19ac */
  push32((uint32_t)(0x115d19acu));
  /* 115b2709 call dword ptr [0x115d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d439c))), 0x115b270fu);
L_115b270f:;
  /* 115b270f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2713 jbe 0x115b2723 */
  if ((C.cf||C.zf)) goto L_115b2723;
  /* 115b2715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2718 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 115b271b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b271e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2721 jmp 0x115b2725 */
  goto L_115b2725;
L_115b2723:;
  /* 115b2723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b2725:;
  /* 115b2725 mov esp, ebp */
  ESP = (EBP);
  /* 115b2727 pop ebp */
  EBP = (pop32());
  /* 115b2728 ret  */
  ESPCHK(0x115b25a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012730 @ 0x115b2730 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_115b2730(void) {
  FTRACE(0x115b2730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b2730 push ebp */
  push32((uint32_t)(EBP));
  /* 115b2731 mov ebp, esp */
  EBP = (ESP);
  /* 115b2733 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2736 push esi */
  push32((uint32_t)(ESI));
  /* 115b2737 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 115b273b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b273e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2741 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2744 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b2747 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b274b ja 0x115b2c98 */
  if ((!C.cf&&!C.zf)) goto L_115b2c98;
  /* 115b2751 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2754 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b2756 mov dl, byte ptr [eax + 0x115b2cf9] */
  DL = (r8((uint32_t)(EAX + 0x115b2cf9)));
  /* 115b275c jmp dword ptr [edx*4 + 0x115b2c9d] */
  switch (EDX) {
    case 0: goto L_115b2c76;
    case 1: goto L_115b2785;
    case 2: goto L_115b27cb;
    case 3: goto L_115b2918;
    case 4: goto L_115b2940;
    case 5: goto L_115b29df;
    case 6: goto L_115b2a4b;
    case 7: goto L_115b2a74;
    case 8: goto L_115b2ab5;
    case 9: goto L_115b2b97;
    case 10: goto L_115b2bfe;
    case 11: goto L_115b2c4b;
    case 12: goto L_115b2763;
    case 13: goto L_115b27a8;
    case 14: goto L_115b27ee;
    case 15: goto L_115b28ee;
    case 16: goto L_115b2985;
    case 17: goto L_115b29b2;
    case 18: goto L_115b2a07;
    case 19: goto L_115b2a8b;
    case 20: goto L_115b2b39;
    case 21: goto L_115b2bc8;
    case 22: goto L_115b2c98;
    default: x86_unimpl("switch@0x115b275c out of table"); return;
  }
L_115b2763:;
  /* 115b2763 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2766 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2767 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b276a push edx */
  push32((uint32_t)(EDX));
  /* 115b276b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b276e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 115b2771 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2774 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 115b2777 push eax */
  push32((uint32_t)(EAX));
  /* 115b2778 call 0x115b2d50 */
  push32(0x115b277du); f_115b2d50();
  /* 115b277d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2780 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2785:;
  /* 115b2785 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2788 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2789 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b278c push edx */
  push32((uint32_t)(EDX));
  /* 115b278d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2790 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 115b2793 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2796 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 115b279a push eax */
  push32((uint32_t)(EAX));
  /* 115b279b call 0x115b2d50 */
  push32(0x115b27a0u); f_115b2d50();
  /* 115b27a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b27a3 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b27a8:;
  /* 115b27a8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b27ab push ecx */
  push32((uint32_t)(ECX));
  /* 115b27ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b27af push edx */
  push32((uint32_t)(EDX));
  /* 115b27b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b27b3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115b27b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b27b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 115b27bd push eax */
  push32((uint32_t)(EAX));
  /* 115b27be call 0x115b2d50 */
  push32(0x115b27c3u); f_115b2d50();
  /* 115b27c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b27c6 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b27cb:;
  /* 115b27cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b27ce push ecx */
  push32((uint32_t)(ECX));
  /* 115b27cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b27d2 push edx */
  push32((uint32_t)(EDX));
  /* 115b27d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b27d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115b27d9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b27dc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 115b27e0 push eax */
  push32((uint32_t)(EAX));
  /* 115b27e1 call 0x115b2d50 */
  push32(0x115b27e6u); f_115b2d50();
  /* 115b27e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b27e9 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b27ee:;
  /* 115b27ee cmp dword ptr [0x115d1988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b27f5 je 0x115b2876 */
  if (C.zf) goto L_115b2876;
  /* 115b27f7 mov dword ptr [0x115d1988], 0 */
  w32((uint32_t)(0x115d1988), (0x0u));
  /* 115b2801 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2804 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2805 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2808 push edx */
  push32((uint32_t)(EDX));
  /* 115b2809 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b280c push eax */
  push32((uint32_t)(EAX));
  /* 115b280d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2810 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2811 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2814 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 115b281a push eax */
  push32((uint32_t)(EAX));
  /* 115b281b call 0x115b2f00 */
  push32(0x115b2820u); f_115b2f00();
  /* 115b2820 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2823 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2826 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2829 jne 0x115b2830 */
  if (!C.zf) goto L_115b2830;
  /* 115b282b jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2830:;
  /* 115b2830 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2833 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b2835 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 115b2838 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b283b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b283d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2840 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2843 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115b2845 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2848 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b284a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b284d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2850 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115b2852 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2855 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2856 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2859 push edx */
  push32((uint32_t)(EDX));
  /* 115b285a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b285d push eax */
  push32((uint32_t)(EAX));
  /* 115b285e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2861 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2862 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2865 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 115b286b push eax */
  push32((uint32_t)(EAX));
  /* 115b286c call 0x115b2f00 */
  push32(0x115b2871u); f_115b2f00();
  /* 115b2871 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2874 jmp 0x115b28e9 */
  goto L_115b28e9;
L_115b2876:;
  /* 115b2876 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2879 push ecx */
  push32((uint32_t)(ECX));
  /* 115b287a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b287d push edx */
  push32((uint32_t)(EDX));
  /* 115b287e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2881 push eax */
  push32((uint32_t)(EAX));
  /* 115b2882 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2885 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2886 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2889 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 115b288f push eax */
  push32((uint32_t)(EAX));
  /* 115b2890 call 0x115b2f00 */
  push32(0x115b2895u); f_115b2f00();
  /* 115b2895 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2898 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b289b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b289e jne 0x115b28a5 */
  if (!C.zf) goto L_115b28a5;
  /* 115b28a0 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b28a5:;
  /* 115b28a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b28a8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b28aa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 115b28ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b28b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b28b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b28b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b28b8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115b28ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b28bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b28bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b28c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b28c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115b28c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b28ca push ecx */
  push32((uint32_t)(ECX));
  /* 115b28cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b28ce push edx */
  push32((uint32_t)(EDX));
  /* 115b28cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b28d2 push eax */
  push32((uint32_t)(EAX));
  /* 115b28d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b28d6 push ecx */
  push32((uint32_t)(ECX));
  /* 115b28d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b28da mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 115b28e0 push eax */
  push32((uint32_t)(EAX));
  /* 115b28e1 call 0x115b2f00 */
  push32(0x115b28e6u); f_115b2f00();
  /* 115b28e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b28e9:;
  /* 115b28e9 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b28ee:;
  /* 115b28ee mov ecx, dword ptr [0x115d1988] */
  ECX = (r32((uint32_t)(0x115d1988)));
  /* 115b28f4 mov dword ptr [0x115d1998], ecx */
  w32((uint32_t)(0x115d1998), (ECX));
  /* 115b28fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b28fd push edx */
  push32((uint32_t)(EDX));
  /* 115b28fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2901 push eax */
  push32((uint32_t)(EAX));
  /* 115b2902 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b2904 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2907 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115b290a push edx */
  push32((uint32_t)(EDX));
  /* 115b290b call 0x115b2da0 */
  push32(0x115b2910u); f_115b2da0();
  /* 115b2910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2913 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2918:;
  /* 115b2918 mov eax, dword ptr [0x115d1988] */
  EAX = (r32((uint32_t)(0x115d1988)));
  /* 115b291d mov dword ptr [0x115d1998], eax */
  w32((uint32_t)(0x115d1998), (EAX));
  /* 115b2922 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2925 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2926 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2929 push edx */
  push32((uint32_t)(EDX));
  /* 115b292a push 2 */
  push32((uint32_t)(0x2u));
  /* 115b292c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b292f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115b2932 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2933 call 0x115b2da0 */
  push32(0x115b2938u); f_115b2da0();
  /* 115b2938 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b293b jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2940:;
  /* 115b2940 mov edx, dword ptr [0x115d1988] */
  EDX = (r32((uint32_t)(0x115d1988)));
  /* 115b2946 mov dword ptr [0x115d1998], edx */
  w32((uint32_t)(0x115d1998), (EDX));
  /* 115b294c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b294f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 115b2952 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b2953 mov ecx, 0xc */
  ECX = (0xcu);
  /* 115b2958 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b295a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115b295d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2961 jne 0x115b296a */
  if (!C.zf) goto L_115b296a;
  /* 115b2963 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_115b296a:;
  /* 115b296a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b296d push edx */
  push32((uint32_t)(EDX));
  /* 115b296e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2971 push eax */
  push32((uint32_t)(EAX));
  /* 115b2972 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b2974 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2977 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2978 call 0x115b2da0 */
  push32(0x115b297du); f_115b2da0();
  /* 115b297d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2980 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2985:;
  /* 115b2985 mov edx, dword ptr [0x115d1988] */
  EDX = (r32((uint32_t)(0x115d1988)));
  /* 115b298b mov dword ptr [0x115d1998], edx */
  w32((uint32_t)(0x115d1998), (EDX));
  /* 115b2991 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2994 push eax */
  push32((uint32_t)(EAX));
  /* 115b2995 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2998 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2999 push 3 */
  push32((uint32_t)(0x3u));
  /* 115b299b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b299e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 115b29a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b29a4 push eax */
  push32((uint32_t)(EAX));
  /* 115b29a5 call 0x115b2da0 */
  push32(0x115b29aau); f_115b2da0();
  /* 115b29aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b29ad jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b29b2:;
  /* 115b29b2 mov ecx, dword ptr [0x115d1988] */
  ECX = (r32((uint32_t)(0x115d1988)));
  /* 115b29b8 mov dword ptr [0x115d1998], ecx */
  w32((uint32_t)(0x115d1998), (ECX));
  /* 115b29be mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b29c1 push edx */
  push32((uint32_t)(EDX));
  /* 115b29c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b29c5 push eax */
  push32((uint32_t)(EAX));
  /* 115b29c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b29c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b29cb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 115b29ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b29d1 push edx */
  push32((uint32_t)(EDX));
  /* 115b29d2 call 0x115b2da0 */
  push32(0x115b29d7u); f_115b2da0();
  /* 115b29d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b29da jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b29df:;
  /* 115b29df mov eax, dword ptr [0x115d1988] */
  EAX = (r32((uint32_t)(0x115d1988)));
  /* 115b29e4 mov dword ptr [0x115d1998], eax */
  w32((uint32_t)(0x115d1998), (EAX));
  /* 115b29e9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b29ec push ecx */
  push32((uint32_t)(ECX));
  /* 115b29ed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b29f0 push edx */
  push32((uint32_t)(EDX));
  /* 115b29f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b29f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b29f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115b29f9 push ecx */
  push32((uint32_t)(ECX));
  /* 115b29fa call 0x115b2da0 */
  push32(0x115b29ffu); f_115b2da0();
  /* 115b29ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2a02 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2a07:;
  /* 115b2a07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2a0a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2a0e jg 0x115b2a2c */
  if ((!C.zf&&C.sf==C.of)) goto L_115b2a2c;
  /* 115b2a10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2a13 push eax */
  push32((uint32_t)(EAX));
  /* 115b2a14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2a17 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2a18 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2a1b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 115b2a21 push eax */
  push32((uint32_t)(EAX));
  /* 115b2a22 call 0x115b2d50 */
  push32(0x115b2a27u); f_115b2d50();
  /* 115b2a27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2a2a jmp 0x115b2a46 */
  goto L_115b2a46;
L_115b2a2c:;
  /* 115b2a2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2a2f push ecx */
  push32((uint32_t)(ECX));
  /* 115b2a30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2a33 push edx */
  push32((uint32_t)(EDX));
  /* 115b2a34 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2a37 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 115b2a3d push ecx */
  push32((uint32_t)(ECX));
  /* 115b2a3e call 0x115b2d50 */
  push32(0x115b2a43u); f_115b2d50();
  /* 115b2a43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b2a46:;
  /* 115b2a46 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2a4b:;
  /* 115b2a4b mov edx, dword ptr [0x115d1988] */
  EDX = (r32((uint32_t)(0x115d1988)));
  /* 115b2a51 mov dword ptr [0x115d1998], edx */
  w32((uint32_t)(0x115d1998), (EDX));
  /* 115b2a57 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2a5a push eax */
  push32((uint32_t)(EAX));
  /* 115b2a5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2a5e push ecx */
  push32((uint32_t)(ECX));
  /* 115b2a5f push 2 */
  push32((uint32_t)(0x2u));
  /* 115b2a61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2a64 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b2a66 push eax */
  push32((uint32_t)(EAX));
  /* 115b2a67 call 0x115b2da0 */
  push32(0x115b2a6cu); f_115b2da0();
  /* 115b2a6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2a6f jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2a74:;
  /* 115b2a74 mov ecx, dword ptr [0x115d1988] */
  ECX = (r32((uint32_t)(0x115d1988)));
  /* 115b2a7a mov dword ptr [0x115d1998], ecx */
  w32((uint32_t)(0x115d1998), (ECX));
  /* 115b2a80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2a83 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 115b2a86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b2a89 jmp 0x115b2add */
  goto L_115b2add;
L_115b2a8b:;
  /* 115b2a8b mov ecx, dword ptr [0x115d1988] */
  ECX = (r32((uint32_t)(0x115d1988)));
  /* 115b2a91 mov dword ptr [0x115d1998], ecx */
  w32((uint32_t)(0x115d1998), (ECX));
  /* 115b2a97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2a9a push edx */
  push32((uint32_t)(EDX));
  /* 115b2a9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2a9e push eax */
  push32((uint32_t)(EAX));
  /* 115b2a9f push 1 */
  push32((uint32_t)(0x1u));
  /* 115b2aa1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2aa4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 115b2aa7 push edx */
  push32((uint32_t)(EDX));
  /* 115b2aa8 call 0x115b2da0 */
  push32(0x115b2aadu); f_115b2da0();
  /* 115b2aad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2ab0 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2ab5:;
  /* 115b2ab5 mov eax, dword ptr [0x115d1988] */
  EAX = (r32((uint32_t)(0x115d1988)));
  /* 115b2aba mov dword ptr [0x115d1998], eax */
  w32((uint32_t)(0x115d1998), (EAX));
  /* 115b2abf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2ac2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2ac6 jne 0x115b2ad1 */
  if (!C.zf) goto L_115b2ad1;
  /* 115b2ac8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 115b2acf jmp 0x115b2add */
  goto L_115b2add;
L_115b2ad1:;
  /* 115b2ad1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2ad4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 115b2ad7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2ada mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115b2add:;
  /* 115b2add mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2ae0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 115b2ae3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2ae6 jge 0x115b2af1 */
  if ((C.sf==C.of)) goto L_115b2af1;
  /* 115b2ae8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115b2aef jmp 0x115b2b1e */
  goto L_115b2b1e;
L_115b2af1:;
  /* 115b2af1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2af4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 115b2af7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b2af8 mov ecx, 7 */
  ECX = (0x7u);
  /* 115b2afd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b2aff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b2b02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2b05 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 115b2b08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b2b09 mov ecx, 7 */
  ECX = (0x7u);
  /* 115b2b0e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b2b10 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2b13 jl 0x115b2b1e */
  if ((C.sf!=C.of)) goto L_115b2b1e;
  /* 115b2b15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2b18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2b1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115b2b1e:;
  /* 115b2b1e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2b21 push eax */
  push32((uint32_t)(EAX));
  /* 115b2b22 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2b25 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2b26 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b2b28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2b2b push edx */
  push32((uint32_t)(EDX));
  /* 115b2b2c call 0x115b2da0 */
  push32(0x115b2b31u); f_115b2da0();
  /* 115b2b31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2b34 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2b39:;
  /* 115b2b39 cmp dword ptr [0x115d1988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2b40 je 0x115b2b70 */
  if (C.zf) goto L_115b2b70;
  /* 115b2b42 mov dword ptr [0x115d1988], 0 */
  w32((uint32_t)(0x115d1988), (0x0u));
  /* 115b2b4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2b4f push eax */
  push32((uint32_t)(EAX));
  /* 115b2b50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2b53 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2b54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2b57 push edx */
  push32((uint32_t)(EDX));
  /* 115b2b58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2b5b push eax */
  push32((uint32_t)(EAX));
  /* 115b2b5c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2b5f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 115b2b65 push edx */
  push32((uint32_t)(EDX));
  /* 115b2b66 call 0x115b2f00 */
  push32(0x115b2b6bu); f_115b2f00();
  /* 115b2b6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2b6e jmp 0x115b2b92 */
  goto L_115b2b92;
L_115b2b70:;
  /* 115b2b70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2b73 push eax */
  push32((uint32_t)(EAX));
  /* 115b2b74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2b77 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2b78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2b7b push edx */
  push32((uint32_t)(EDX));
  /* 115b2b7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2b7f push eax */
  push32((uint32_t)(EAX));
  /* 115b2b80 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2b83 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 115b2b89 push edx */
  push32((uint32_t)(EDX));
  /* 115b2b8a call 0x115b2f00 */
  push32(0x115b2b8fu); f_115b2f00();
  /* 115b2b8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b2b92:;
  /* 115b2b92 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2b97:;
  /* 115b2b97 mov dword ptr [0x115d1988], 0 */
  w32((uint32_t)(0x115d1988), (0x0u));
  /* 115b2ba1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2ba4 push eax */
  push32((uint32_t)(EAX));
  /* 115b2ba5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2ba9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2bac push edx */
  push32((uint32_t)(EDX));
  /* 115b2bad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2bb0 push eax */
  push32((uint32_t)(EAX));
  /* 115b2bb1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b2bb4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 115b2bba push edx */
  push32((uint32_t)(EDX));
  /* 115b2bbb call 0x115b2f00 */
  push32(0x115b2bc0u); f_115b2f00();
  /* 115b2bc0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2bc3 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2bc8:;
  /* 115b2bc8 mov eax, dword ptr [0x115d1988] */
  EAX = (r32((uint32_t)(0x115d1988)));
  /* 115b2bcd mov dword ptr [0x115d1998], eax */
  w32((uint32_t)(0x115d1998), (EAX));
  /* 115b2bd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2bd5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 115b2bd8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b2bd9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 115b2bde idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b2be0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115b2be3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2be6 push edx */
  push32((uint32_t)(EDX));
  /* 115b2be7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2bea push eax */
  push32((uint32_t)(EAX));
  /* 115b2beb push 2 */
  push32((uint32_t)(0x2u));
  /* 115b2bed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2bf1 call 0x115b2da0 */
  push32(0x115b2bf6u); f_115b2da0();
  /* 115b2bf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2bf9 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2bfe:;
  /* 115b2bfe mov edx, dword ptr [0x115d1988] */
  EDX = (r32((uint32_t)(0x115d1988)));
  /* 115b2c04 mov dword ptr [0x115d1998], edx */
  w32((uint32_t)(0x115d1998), (EDX));
  /* 115b2c0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2c0d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 115b2c10 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b2c11 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 115b2c16 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b2c18 mov ecx, eax */
  ECX = (EAX);
  /* 115b2c1a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2c1d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b2c20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2c23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115b2c26 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b2c27 mov esi, 0x64 */
  ESI = (0x64u);
  /* 115b2c2c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b2c2e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2c30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b2c33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2c36 push eax */
  push32((uint32_t)(EAX));
  /* 115b2c37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2c3a push ecx */
  push32((uint32_t)(ECX));
  /* 115b2c3b push 4 */
  push32((uint32_t)(0x4u));
  /* 115b2c3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2c40 push edx */
  push32((uint32_t)(EDX));
  /* 115b2c41 call 0x115b2da0 */
  push32(0x115b2c46u); f_115b2da0();
  /* 115b2c46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2c49 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2c4b:;
  /* 115b2c4b call 0x115b3d60 */
  push32(0x115b2c50u); f_115b3d60();
  /* 115b2c50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2c53 push eax */
  push32((uint32_t)(EAX));
  /* 115b2c54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2c57 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2c58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2c5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b2c5d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2c61 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 115b2c64 mov ecx, dword ptr [eax*4 + 0x115d0e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x115d0e1c)));
  /* 115b2c6b push ecx */
  push32((uint32_t)(ECX));
  /* 115b2c6c call 0x115b2d50 */
  push32(0x115b2c71u); f_115b2d50();
  /* 115b2c71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2c74 jmp 0x115b2c98 */
  goto L_115b2c98;
L_115b2c76:;
  /* 115b2c76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2c79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b2c7b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 115b2c7e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2c81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b2c83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2c86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2c89 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115b2c8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2c8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b2c90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2c93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2c96 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115b2c98:;
  /* 115b2c98 pop esi */
  ESI = (pop32());
  /* 115b2c99 mov esp, ebp */
  ESP = (EBP);
  /* 115b2c9b pop ebp */
  EBP = (pop32());
  /* 115b2c9c ret  */
  ESPCHK(0x115b2730u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x115b2d50 (72 bytes, 30 insns) */
void f_115b2d50(void) {
  FTRACE(0x115b2d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b2d50 push ebp */
  push32((uint32_t)(EBP));
  /* 115b2d51 mov ebp, esp */
  EBP = (ESP);
L_115b2d53:;
  /* 115b2d53 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2d56 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2d59 je 0x115b2d96 */
  if (C.zf) goto L_115b2d96;
  /* 115b2d5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2d5e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b2d61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b2d63 je 0x115b2d96 */
  if (C.zf) goto L_115b2d96;
  /* 115b2d65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2d68 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b2d6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2d6d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b2d6f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115b2d71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2d74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b2d76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2d79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2d7c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115b2d7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2d81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2d84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 115b2d87 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2d8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b2d8c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2d8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2d92 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115b2d94 jmp 0x115b2d53 */
  goto L_115b2d53;
L_115b2d96:;
  /* 115b2d96 pop ebp */
  EBP = (pop32());
  /* 115b2d97 ret  */
  ESPCHK(0x115b2d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012da0 @ 0x115b2da0 (173 bytes, 64 insns) */
void f_115b2da0(void) {
  FTRACE(0x115b2da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b2da0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b2da1 mov ebp, esp */
  EBP = (ESP);
  /* 115b2da3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2da4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115b2dab cmp dword ptr [0x115d1998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2db2 je 0x115b2dca */
  if (C.zf) goto L_115b2dca;
  /* 115b2db4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2db7 push eax */
  push32((uint32_t)(EAX));
  /* 115b2db8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2dbb push ecx */
  push32((uint32_t)(ECX));
  /* 115b2dbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2dbf push edx */
  push32((uint32_t)(EDX));
  /* 115b2dc0 call 0x115b2e50 */
  push32(0x115b2dc5u); f_115b2e50();
  /* 115b2dc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2dc8 jmp 0x115b2e49 */
  goto L_115b2e49;
L_115b2dca:;
  /* 115b2dca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2dcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2dd0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2dd2 jae 0x115b2e40 */
  if (!C.cf) goto L_115b2e40;
  /* 115b2dd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2dd7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2dda mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 115b2ddd jmp 0x115b2de8 */
  goto L_115b2de8;
L_115b2ddf:;
  /* 115b2ddf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2de2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2de5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_115b2de8:;
  /* 115b2de8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2deb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2dee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b2df0 je 0x115b2e24 */
  if (C.zf) goto L_115b2e24;
  /* 115b2df2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2df5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b2df6 mov ecx, 0xa */
  ECX = (0xau);
  /* 115b2dfb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b2dfd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2e00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2e03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b2e05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2e08 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 115b2e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2e0e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b2e0f mov ecx, 0xa */
  ECX = (0xau);
  /* 115b2e14 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b2e16 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b2e19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2e1c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2e1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115b2e22 jmp 0x115b2ddf */
  goto L_115b2ddf;
L_115b2e24:;
  /* 115b2e24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2e27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b2e29 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2e2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2e2f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115b2e31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2e34 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b2e36 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2e39 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2e3c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115b2e3e jmp 0x115b2e49 */
  goto L_115b2e49;
L_115b2e40:;
  /* 115b2e40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2e43 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_115b2e49:;
  /* 115b2e49 mov esp, ebp */
  ESP = (EBP);
  /* 115b2e4b pop ebp */
  EBP = (pop32());
  /* 115b2e4c ret  */
  ESPCHK(0x115b2da0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x115b2e50 (172 bytes, 65 insns) */
void f_115b2e50(void) {
  FTRACE(0x115b2e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b2e50 push ebp */
  push32((uint32_t)(EBP));
  /* 115b2e51 mov ebp, esp */
  EBP = (ESP);
  /* 115b2e53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2e56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2e59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b2e5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b2e5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2e61 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2e64 jbe 0x115b2eab */
  if ((C.cf||C.zf)) goto L_115b2eab;
L_115b2e66:;
  /* 115b2e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2e69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b2e6a mov ecx, 0xa */
  ECX = (0xau);
  /* 115b2e6f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b2e71 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2e74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2e77 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115b2e79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2e7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2e7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b2e82 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2e85 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b2e87 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2e8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2e8d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115b2e8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2e92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b2e93 mov ecx, 0xa */
  ECX = (0xau);
  /* 115b2e98 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b2e9a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b2e9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2ea1 jle 0x115b2eab */
  if ((C.zf||C.sf!=C.of)) goto L_115b2eab;
  /* 115b2ea3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b2ea6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2ea9 ja 0x115b2e66 */
  if ((!C.cf&&!C.zf)) goto L_115b2e66;
L_115b2eab:;
  /* 115b2eab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2eae mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b2eb0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b2eb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2eb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2eb9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 115b2ebb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2ebe sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2ec1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115b2ec4:;
  /* 115b2ec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2ec7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b2ec9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 115b2ecc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2ecf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b2ed2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b2ed4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115b2ed6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2ed9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2edc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b2edf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b2ee2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 115b2ee5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 115b2ee7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b2eea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2eed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b2ef0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b2ef3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2ef6 jb 0x115b2ec4 */
  if (C.cf) goto L_115b2ec4;
  /* 115b2ef8 mov esp, ebp */
  ESP = (EBP);
  /* 115b2efa pop ebp */
  EBP = (pop32());
  /* 115b2efb ret  */
  ESPCHK(0x115b2e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f00 @ 0x115b2f00 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_115b2f00(void) {
  FTRACE(0x115b2f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b2f00 push ebp */
  push32((uint32_t)(EBP));
  /* 115b2f01 mov ebp, esp */
  EBP = (ESP);
  /* 115b2f03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_115b2f06:;
  /* 115b2f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2f09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b2f0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b2f0e je 0x115b337c */
  if (C.zf) goto L_115b337c;
  /* 115b2f14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2f17 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2f1a je 0x115b337c */
  if (C.zf) goto L_115b337c;
  /* 115b2f20 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 115b2f24 mov dword ptr [0x115d1998], 0 */
  w32((uint32_t)(0x115d1998), (0x0u));
  /* 115b2f2e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115b2f35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2f38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b2f3b jmp 0x115b2f46 */
  goto L_115b2f46;
L_115b2f3d:;
  /* 115b2f3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2f40 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2f43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_115b2f46:;
  /* 115b2f46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2f49 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b2f4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2f4f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b2f52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2f55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2f58 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b2f5b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2f5d jne 0x115b2f61 */
  if (!C.zf) goto L_115b2f61;
  /* 115b2f5f jmp 0x115b2f3d */
  goto L_115b2f3d;
L_115b2f61:;
  /* 115b2f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2f64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2f67 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115b2f6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2f6d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b2f70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115b2f73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2f76 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2f79 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115b2f7c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2f80 ja 0x115b32d0 */
  if ((!C.cf&&!C.zf)) goto L_115b32d0;
  /* 115b2f86 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2f89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b2f8b mov al, byte ptr [ecx + 0x115b33ac] */
  AL = (r8((uint32_t)(ECX + 0x115b33ac)));
  /* 115b2f91 jmp dword ptr [eax*4 + 0x115b3380] */
  switch (EAX) {
    case 0: goto L_115b31ef;
    case 1: goto L_115b30d3;
    case 2: goto L_115b305e;
    case 3: goto L_115b2f98;
    case 4: goto L_115b2fd6;
    case 5: goto L_115b3037;
    case 6: goto L_115b3085;
    case 7: goto L_115b30ac;
    case 8: goto L_115b311a;
    case 9: goto L_115b3014;
    case 10: goto L_115b32d0;
    default: x86_unimpl("switch@0x115b2f91 out of table"); return;
  }
L_115b2f98:;
  /* 115b2f98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2f9b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 115b2f9e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b2fa1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2fa4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115b2fa7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2fab ja 0x115b2fd1 */
  if ((!C.cf&&!C.zf)) goto L_115b2fd1;
  /* 115b2fad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b2fb0 jmp dword ptr [ecx*4 + 0x115b33ff] */
  switch (ECX) {
    case 0: goto L_115b2fb7;
    case 1: goto L_115b2fc1;
    case 2: goto L_115b2fc7;
    case 3: goto L_115b2fcd;
    case 4: goto L_115b2ff5;
    case 5: goto L_115b2fff;
    case 6: goto L_115b3005;
    case 7: goto L_115b300b;
    default: x86_unimpl("switch@0x115b2fb0 out of table"); return;
  }
L_115b2fb7:;
  /* 115b2fb7 mov dword ptr [0x115d1998], 1 */
  w32((uint32_t)(0x115d1998), (0x1u));
L_115b2fc1:;
  /* 115b2fc1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 115b2fc5 jmp 0x115b2fd1 */
  goto L_115b2fd1;
L_115b2fc7:;
  /* 115b2fc7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 115b2fcb jmp 0x115b2fd1 */
  goto L_115b2fd1;
L_115b2fcd:;
  /* 115b2fcd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_115b2fd1:;
  /* 115b2fd1 jmp 0x115b32d0 */
  goto L_115b32d0;
L_115b2fd6:;
  /* 115b2fd6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2fd9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 115b2fdc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b2fdf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2fe2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115b2fe5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2fe9 ja 0x115b300f */
  if ((!C.cf&&!C.zf)) goto L_115b300f;
  /* 115b2feb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b2fee jmp dword ptr [ecx*4 + 0x115b340f] */
  switch (ECX) {
    case 0: goto L_115b2ff5;
    case 1: goto L_115b2fff;
    case 2: goto L_115b3005;
    case 3: goto L_115b300b;
    default: x86_unimpl("switch@0x115b2fee out of table"); return;
  }
L_115b2ff5:;
  /* 115b2ff5 mov dword ptr [0x115d1998], 1 */
  w32((uint32_t)(0x115d1998), (0x1u));
L_115b2fff:;
  /* 115b2fff mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 115b3003 jmp 0x115b300f */
  goto L_115b300f;
L_115b3005:;
  /* 115b3005 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 115b3009 jmp 0x115b300f */
  goto L_115b300f;
L_115b300b:;
  /* 115b300b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_115b300f:;
  /* 115b300f jmp 0x115b32d0 */
  goto L_115b32d0;
L_115b3014:;
  /* 115b3014 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3017 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 115b301a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b301e je 0x115b3028 */
  if (C.zf) goto L_115b3028;
  /* 115b3020 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3024 je 0x115b302e */
  if (C.zf) goto L_115b302e;
  /* 115b3026 jmp 0x115b3032 */
  goto L_115b3032;
L_115b3028:;
  /* 115b3028 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 115b302c jmp 0x115b3032 */
  goto L_115b3032;
L_115b302e:;
  /* 115b302e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_115b3032:;
  /* 115b3032 jmp 0x115b32d0 */
  goto L_115b32d0;
L_115b3037:;
  /* 115b3037 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b303a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115b303d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3041 je 0x115b304b */
  if (C.zf) goto L_115b304b;
  /* 115b3043 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3047 je 0x115b3055 */
  if (C.zf) goto L_115b3055;
  /* 115b3049 jmp 0x115b3059 */
  goto L_115b3059;
L_115b304b:;
  /* 115b304b mov dword ptr [0x115d1998], 1 */
  w32((uint32_t)(0x115d1998), (0x1u));
L_115b3055:;
  /* 115b3055 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_115b3059:;
  /* 115b3059 jmp 0x115b32d0 */
  goto L_115b32d0;
L_115b305e:;
  /* 115b305e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3061 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 115b3064 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3068 je 0x115b3072 */
  if (C.zf) goto L_115b3072;
  /* 115b306a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b306e je 0x115b307c */
  if (C.zf) goto L_115b307c;
  /* 115b3070 jmp 0x115b3080 */
  goto L_115b3080;
L_115b3072:;
  /* 115b3072 mov dword ptr [0x115d1998], 1 */
  w32((uint32_t)(0x115d1998), (0x1u));
L_115b307c:;
  /* 115b307c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_115b3080:;
  /* 115b3080 jmp 0x115b32d0 */
  goto L_115b32d0;
L_115b3085:;
  /* 115b3085 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3088 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 115b308b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b308f je 0x115b3099 */
  if (C.zf) goto L_115b3099;
  /* 115b3091 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3095 je 0x115b30a3 */
  if (C.zf) goto L_115b30a3;
  /* 115b3097 jmp 0x115b30a7 */
  goto L_115b30a7;
L_115b3099:;
  /* 115b3099 mov dword ptr [0x115d1998], 1 */
  w32((uint32_t)(0x115d1998), (0x1u));
L_115b30a3:;
  /* 115b30a3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_115b30a7:;
  /* 115b30a7 jmp 0x115b32d0 */
  goto L_115b32d0;
L_115b30ac:;
  /* 115b30ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b30af mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 115b30b2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b30b6 je 0x115b30c0 */
  if (C.zf) goto L_115b30c0;
  /* 115b30b8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b30bc je 0x115b30ca */
  if (C.zf) goto L_115b30ca;
  /* 115b30be jmp 0x115b30ce */
  goto L_115b30ce;
L_115b30c0:;
  /* 115b30c0 mov dword ptr [0x115d1998], 1 */
  w32((uint32_t)(0x115d1998), (0x1u));
L_115b30ca:;
  /* 115b30ca mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_115b30ce:;
  /* 115b30ce jmp 0x115b32d0 */
  goto L_115b32d0;
L_115b30d3:;
  /* 115b30d3 push 0x115cdaa4 */
  push32((uint32_t)(0x115cdaa4u));
  /* 115b30d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b30db push ecx */
  push32((uint32_t)(ECX));
  /* 115b30dc call 0x115b3930 */
  push32(0x115b30e1u); f_115b3930();
  /* 115b30e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b30e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b30e6 jne 0x115b30f3 */
  if (!C.zf) goto L_115b30f3;
  /* 115b30e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b30eb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b30ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115b30f1 jmp 0x115b3111 */
  goto L_115b3111;
L_115b30f3:;
  /* 115b30f3 push 0x115cdaa0 */
  push32((uint32_t)(0x115cdaa0u));
  /* 115b30f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b30fb push eax */
  push32((uint32_t)(EAX));
  /* 115b30fc call 0x115b3930 */
  push32(0x115b3101u); f_115b3930();
  /* 115b3101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b3106 jne 0x115b3111 */
  if (!C.zf) goto L_115b3111;
  /* 115b3108 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b310b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b310e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115b3111:;
  /* 115b3111 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 115b3115 jmp 0x115b32d0 */
  goto L_115b32d0;
L_115b311a:;
  /* 115b311a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b311d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3121 jg 0x115b3131 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b3131;
  /* 115b3123 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b3126 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 115b312c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115b312f jmp 0x115b313d */
  goto L_115b313d;
L_115b3131:;
  /* 115b3131 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b3134 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 115b313a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_115b313d:;
  /* 115b313d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3141 jle 0x115b31e4 */
  if ((C.zf||C.sf!=C.of)) goto L_115b31e4;
  /* 115b3147 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b314a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b314d jbe 0x115b31e4 */
  if ((C.cf||C.zf)) goto L_115b31e4;
  /* 115b3153 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b3156 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3158 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b315a mov ecx, dword ptr [0x115cfc98] */
  ECX = (r32((uint32_t)(0x115cfc98)));
  /* 115b3160 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b3162 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115b3166 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 115b316c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b316e je 0x115b31a7 */
  if (C.zf) goto L_115b31a7;
  /* 115b3170 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b3173 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3176 jbe 0x115b31a7 */
  if ((C.cf||C.zf)) goto L_115b31a7;
  /* 115b3178 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b317b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b317d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b3180 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b3182 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 115b3184 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b3187 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b3189 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b318c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b318f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115b3191 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b3194 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3197 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 115b319a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b319d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b319f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b31a2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b31a5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115b31a7:;
  /* 115b31a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b31aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b31ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b31af mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b31b1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115b31b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b31b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b31b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b31bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b31be mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115b31c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b31c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b31c6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115b31c9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b31cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b31ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b31d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b31d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115b31d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b31d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b31dc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115b31df jmp 0x115b313d */
  goto L_115b313d;
L_115b31e4:;
  /* 115b31e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b31e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b31ea jmp 0x115b2f06 */
  goto L_115b2f06;
L_115b31ef:;
  /* 115b31ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b31f2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115b31f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b31f7 je 0x115b32c2 */
  if (C.zf) goto L_115b32c2;
  /* 115b31fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3200 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3203 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_115b3206:;
  /* 115b3206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3209 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b320c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b320e je 0x115b32c0 */
  if (C.zf) goto L_115b32c0;
  /* 115b3214 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b3217 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b321a je 0x115b32c0 */
  if (C.zf) goto L_115b32c0;
  /* 115b3220 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3223 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b3226 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3229 jne 0x115b3239 */
  if (!C.zf) goto L_115b3239;
  /* 115b322b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b322e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3231 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115b3234 jmp 0x115b32c0 */
  goto L_115b32c0;
L_115b3239:;
  /* 115b3239 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b323c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b323e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b3240 mov edx, dword ptr [0x115cfc98] */
  EDX = (r32((uint32_t)(0x115cfc98)));
  /* 115b3246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3248 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 115b324c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 115b3251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b3253 je 0x115b328c */
  if (C.zf) goto L_115b328c;
  /* 115b3255 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b3258 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b325b jbe 0x115b328c */
  if ((C.cf||C.zf)) goto L_115b328c;
  /* 115b325d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b3260 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b3262 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3265 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b3267 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115b3269 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b326c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b326e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3271 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b3274 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115b3276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3279 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b327c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b327f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b3282 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b3284 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b3287 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b328a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115b328c:;
  /* 115b328c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b328f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b3291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3294 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b3296 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 115b3298 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b329b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b329d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b32a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b32a3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115b32a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b32a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b32ab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115b32ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b32b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b32b3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b32b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b32b9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115b32bb jmp 0x115b3206 */
  goto L_115b3206;
L_115b32c0:;
  /* 115b32c0 jmp 0x115b32cb */
  goto L_115b32cb;
L_115b32c2:;
  /* 115b32c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b32c5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b32c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_115b32cb:;
  /* 115b32cb jmp 0x115b2f06 */
  goto L_115b2f06;
L_115b32d0:;
  /* 115b32d0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115b32d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b32d6 je 0x115b32fc */
  if (C.zf) goto L_115b32fc;
  /* 115b32d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b32db push edx */
  push32((uint32_t)(EDX));
  /* 115b32dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b32df push eax */
  push32((uint32_t)(EAX));
  /* 115b32e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b32e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b32e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b32e7 push edx */
  push32((uint32_t)(EDX));
  /* 115b32e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 115b32eb push eax */
  push32((uint32_t)(EAX));
  /* 115b32ec call 0x115b2730 */
  push32(0x115b32f1u); f_115b2730();
  /* 115b32f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b32f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b32f7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 115b32fa jmp 0x115b3377 */
  goto L_115b3377;
L_115b32fc:;
  /* 115b32fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b32ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3301 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b3303 mov ecx, dword ptr [0x115cfc98] */
  ECX = (r32((uint32_t)(0x115cfc98)));
  /* 115b3309 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b330b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115b330f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 115b3315 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b3317 je 0x115b3348 */
  if (C.zf) goto L_115b3348;
  /* 115b3319 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b331c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b331e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3321 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b3323 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115b3325 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b3328 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b332a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b332d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b3330 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115b3332 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3335 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3338 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 115b333b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b333e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b3340 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b3343 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b3346 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_115b3348:;
  /* 115b3348 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b334b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b334d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3350 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b3352 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115b3354 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b3357 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b3359 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b335c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b335f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115b3361 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3364 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3367 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b336a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b336d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b336f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b3372 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b3375 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115b3377:;
  /* 115b3377 jmp 0x115b2f06 */
  goto L_115b2f06;
L_115b337c:;
  /* 115b337c mov esp, ebp */
  ESP = (EBP);
  /* 115b337e pop ebp */
  EBP = (pop32());
  /* 115b337f ret  */
  ESPCHK(0x115b2f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013420 @ 0x115b3420 (650 bytes, 178 insns) */
void f_115b3420(void) {
  FTRACE(0x115b3420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b3420 push ebp */
  push32((uint32_t)(EBP));
  /* 115b3421 mov ebp, esp */
  EBP = (ESP);
  /* 115b3423 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b3429 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b342d jne 0x115b3589 */
  if (!C.zf) goto L_115b3589;
  /* 115b3433 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b3436 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 115b343c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 115b3442 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b3445 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115b344c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 115b3456 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3458 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 115b345e push edx */
  push32((uint32_t)(EDX));
  /* 115b345f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3462 push eax */
  push32((uint32_t)(EAX));
  /* 115b3463 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b3466 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3467 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b346a push edx */
  push32((uint32_t)(EDX));
  /* 115b346b call 0x115b4840 */
  push32(0x115b3470u); f_115b4840();
  /* 115b3470 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3473 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b3476 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b347a jne 0x115b350f */
  if (!C.zf) goto L_115b350f;
  /* 115b3480 call dword ptr [0x115d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d8))), 0x115b3486u);
  /* 115b3486 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3489 je 0x115b3490 */
  if (C.zf) goto L_115b3490;
  /* 115b348b jmp 0x115b356d */
  goto L_115b356d;
L_115b3490:;
  /* 115b3490 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3492 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3494 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3496 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b3499 push eax */
  push32((uint32_t)(EAX));
  /* 115b349a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b349d push ecx */
  push32((uint32_t)(ECX));
  /* 115b349e call 0x115b4840 */
  push32(0x115b34a3u); f_115b4840();
  /* 115b34a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b34a6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 115b34ac cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b34b3 jne 0x115b34ba */
  if (!C.zf) goto L_115b34ba;
  /* 115b34b5 jmp 0x115b356d */
  goto L_115b356d;
L_115b34ba:;
  /* 115b34ba push 0x58 */
  push32((uint32_t)(0x58u));
  /* 115b34bc push 0x115cdaac */
  push32((uint32_t)(0x115cdaacu));
  /* 115b34c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b34c3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 115b34c9 push edx */
  push32((uint32_t)(EDX));
  /* 115b34ca call 0x115a5260 */
  push32(0x115b34cfu); f_115a5260();
  /* 115b34cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b34d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b34d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b34d9 jne 0x115b34e0 */
  if (!C.zf) goto L_115b34e0;
  /* 115b34db jmp 0x115b356d */
  goto L_115b356d;
L_115b34e0:;
  /* 115b34e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115b34e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b34e9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 115b34ef push eax */
  push32((uint32_t)(EAX));
  /* 115b34f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b34f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b34f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b34f7 push edx */
  push32((uint32_t)(EDX));
  /* 115b34f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b34fb push eax */
  push32((uint32_t)(EAX));
  /* 115b34fc call 0x115b4840 */
  push32(0x115b3501u); f_115b4840();
  /* 115b3501 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3504 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b3507 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b350b jne 0x115b350f */
  if (!C.zf) goto L_115b350f;
  /* 115b350d jmp 0x115b356d */
  goto L_115b356d;
L_115b350f:;
  /* 115b350f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115b3511 push 0x115cdaac */
  push32((uint32_t)(0x115cdaacu));
  /* 115b3516 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b3518 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b351b push ecx */
  push32((uint32_t)(ECX));
  /* 115b351c call 0x115a5260 */
  push32(0x115b3521u); f_115a5260();
  /* 115b3521 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3524 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 115b352a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 115b352c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 115b3532 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3535 jne 0x115b3539 */
  if (!C.zf) goto L_115b3539;
  /* 115b3537 jmp 0x115b356d */
  goto L_115b356d;
L_115b3539:;
  /* 115b3539 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b353c push ecx */
  push32((uint32_t)(ECX));
  /* 115b353d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3540 push edx */
  push32((uint32_t)(EDX));
  /* 115b3541 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 115b3547 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b3549 push ecx */
  push32((uint32_t)(ECX));
  /* 115b354a call 0x115a8a80 */
  push32(0x115b354fu); f_115a8a80();
  /* 115b354f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3552 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3556 je 0x115b3566 */
  if (C.zf) goto L_115b3566;
  /* 115b3558 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b355a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b355d push edx */
  push32((uint32_t)(EDX));
  /* 115b355e call 0x115a5cf0 */
  push32(0x115b3563u); f_115a5cf0();
  /* 115b3563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b3566:;
  /* 115b3566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3568 jmp 0x115b36a6 */
  goto L_115b36a6;
L_115b356d:;
  /* 115b356d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3571 je 0x115b3581 */
  if (C.zf) goto L_115b3581;
  /* 115b3573 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b3575 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3578 push eax */
  push32((uint32_t)(EAX));
  /* 115b3579 call 0x115a5cf0 */
  push32(0x115b357eu); f_115a5cf0();
  /* 115b357e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b3581:;
  /* 115b3581 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b3584 jmp 0x115b36a6 */
  goto L_115b36a6;
L_115b3589:;
  /* 115b3589 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b358d jne 0x115b36a3 */
  if (!C.zf) goto L_115b36a3;
  /* 115b3593 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 115b359d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b35a0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 115b35a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b35a8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 115b35ae push edx */
  push32((uint32_t)(EDX));
  /* 115b35af push 0x115d18b0 */
  push32((uint32_t)(0x115d18b0u));
  /* 115b35b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b35b7 push eax */
  push32((uint32_t)(EAX));
  /* 115b35b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b35bb push ecx */
  push32((uint32_t)(ECX));
  /* 115b35bc call 0x115b46a0 */
  push32(0x115b35c1u); f_115b46a0();
  /* 115b35c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b35c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b35c6 jne 0x115b35d0 */
  if (!C.zf) goto L_115b35d0;
  /* 115b35c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b35cb jmp 0x115b36a6 */
  goto L_115b36a6;
L_115b35d0:;
  /* 115b35d0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115b35d6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 115b35d9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 115b35e3 jmp 0x115b35f4 */
  goto L_115b35f4;
L_115b35e5:;
  /* 115b35e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115b35eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b35ee mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_115b35f4:;
  /* 115b35f4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b35fb jge 0x115b369f */
  if ((C.sf==C.of)) goto L_115b369f;
  /* 115b3601 cmp dword ptr [0x115cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3608 jle 0x115b363b */
  if ((C.zf||C.sf!=C.of)) goto L_115b363b;
  /* 115b360a push 4 */
  push32((uint32_t)(0x4u));
  /* 115b360c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115b3612 mov dl, byte ptr [ecx*2 + 0x115d18b0] */
  DL = (r8((uint32_t)(ECX*2 + 0x115d18b0)));
  /* 115b3619 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 115b361f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 115b3625 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b362a push eax */
  push32((uint32_t)(EAX));
  /* 115b362b call 0x115ab270 */
  push32(0x115b3630u); f_115ab270();
  /* 115b3630 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3633 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 115b3639 jmp 0x115b366e */
  goto L_115b366e;
L_115b363b:;
  /* 115b363b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115b3641 mov dl, byte ptr [ecx*2 + 0x115d18b0] */
  DL = (r8((uint32_t)(ECX*2 + 0x115d18b0)));
  /* 115b3648 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 115b364e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 115b3654 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b3659 mov ecx, dword ptr [0x115cfc98] */
  ECX = (r32((uint32_t)(0x115cfc98)));
  /* 115b365f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b3661 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115b3665 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115b3668 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_115b366e:;
  /* 115b366e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3675 je 0x115b3698 */
  if (C.zf) goto L_115b3698;
  /* 115b3677 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115b367d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b3680 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b3683 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 115b368a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 115b368e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115b3694 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115b3696 jmp 0x115b369a */
  goto L_115b369a;
L_115b3698:;
  /* 115b3698 jmp 0x115b369f */
  goto L_115b369f;
L_115b369a:;
  /* 115b369a jmp 0x115b35e5 */
  goto L_115b35e5;
L_115b369f:;
  /* 115b369f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b36a1 jmp 0x115b36a6 */
  goto L_115b36a6;
L_115b36a3:;
  /* 115b36a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_115b36a6:;
  /* 115b36a6 mov esp, ebp */
  ESP = (EBP);
  /* 115b36a8 pop ebp */
  EBP = (pop32());
  /* 115b36a9 ret  */
  ESPCHK(0x115b3420u, _esp0);
  ESP += 4; return;
}

/* FUN_100136b0 @ 0x115b36b0 (10 bytes, 5 insns) */
void f_115b36b0(void) {
  FTRACE(0x115b36b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b36b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b36b1 mov ebp, esp */
  EBP = (ESP);
  /* 115b36b3 mov eax, dword ptr [0x115d0d88] */
  EAX = (r32((uint32_t)(0x115d0d88)));
  /* 115b36b8 pop ebp */
  EBP = (pop32());
  /* 115b36b9 ret  */
  ESPCHK(0x115b36b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136c0 @ 0x115b36c0 (575 bytes, 196 insns) */
void f_115b36c0(void) {
  FTRACE(0x115b36c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b36c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b36c1 mov ebp, esp */
  EBP = (ESP);
  /* 115b36c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b36c5 push 0x115cdab8 */
  push32((uint32_t)(0x115cdab8u));
  /* 115b36ca push 0x115ae368 */
  push32((uint32_t)(0x115ae368u));
  /* 115b36cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115b36d5 push eax */
  push32((uint32_t)(EAX));
  /* 115b36d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115b36dd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b36e0 push ebx */
  push32((uint32_t)(EBX));
  /* 115b36e1 push esi */
  push32((uint32_t)(ESI));
  /* 115b36e2 push edi */
  push32((uint32_t)(EDI));
  /* 115b36e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115b36e6 cmp dword ptr [0x115d18bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d18bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b36ed jne 0x115b373e */
  if (!C.zf) goto L_115b373e;
  /* 115b36ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 115b36f2 push eax */
  push32((uint32_t)(EAX));
  /* 115b36f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b36f5 push 0x115cd1ec */
  push32((uint32_t)(0x115cd1ecu));
  /* 115b36fa push 1 */
  push32((uint32_t)(0x1u));
  /* 115b36fc call dword ptr [0x115d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d431c))), 0x115b3702u);
  /* 115b3702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b3704 je 0x115b3712 */
  if (C.zf) goto L_115b3712;
  /* 115b3706 mov dword ptr [0x115d18bc], 1 */
  w32((uint32_t)(0x115d18bc), (0x1u));
  /* 115b3710 jmp 0x115b373e */
  goto L_115b373e;
L_115b3712:;
  /* 115b3712 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 115b3715 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3716 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b3718 push 0x115cd1e8 */
  push32((uint32_t)(0x115cd1e8u));
  /* 115b371d push 1 */
  push32((uint32_t)(0x1u));
  /* 115b371f push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3721 call dword ptr [0x115d432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d432c))), 0x115b3727u);
  /* 115b3727 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b3729 je 0x115b3737 */
  if (C.zf) goto L_115b3737;
  /* 115b372b mov dword ptr [0x115d18bc], 2 */
  w32((uint32_t)(0x115d18bc), (0x2u));
  /* 115b3735 jmp 0x115b373e */
  goto L_115b373e;
L_115b3737:;
  /* 115b3737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3739 jmp 0x115b3919 */
  goto L_115b3919;
L_115b373e:;
  /* 115b373e cmp dword ptr [0x115d18bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d18bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3745 jne 0x115b3762 */
  if (!C.zf) goto L_115b3762;
  /* 115b3747 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b374a push edx */
  push32((uint32_t)(EDX));
  /* 115b374b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b374e push eax */
  push32((uint32_t)(EAX));
  /* 115b374f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b3752 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3756 push edx */
  push32((uint32_t)(EDX));
  /* 115b3757 call dword ptr [0x115d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d431c))), 0x115b375du);
  /* 115b375d jmp 0x115b3919 */
  goto L_115b3919;
L_115b3762:;
  /* 115b3762 cmp dword ptr [0x115d18bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115d18bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3769 jne 0x115b3917 */
  if (!C.zf) goto L_115b3917;
  /* 115b376f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3773 jne 0x115b377d */
  if (!C.zf) goto L_115b377d;
  /* 115b3775 mov eax, dword ptr [0x115d1830] */
  EAX = (r32((uint32_t)(0x115d1830)));
  /* 115b377a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_115b377d:;
  /* 115b377d push 0 */
  push32((uint32_t)(0x0u));
  /* 115b377f push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3781 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3783 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3785 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b3788 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3789 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b378c push edx */
  push32((uint32_t)(EDX));
  /* 115b378d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115b3792 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b3795 push eax */
  push32((uint32_t)(EAX));
  /* 115b3796 call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115b379cu);
  /* 115b379c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115b379f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b37a3 jne 0x115b37ac */
  if (!C.zf) goto L_115b37ac;
  /* 115b37a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b37a7 jmp 0x115b3919 */
  goto L_115b3919;
L_115b37ac:;
  /* 115b37ac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115b37b3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b37b6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b37b9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115b37bb call 0x115a8400 */
  push32(0x115b37c0u); f_115a8400();
  /* 115b37c0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 115b37c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115b37c6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115b37c9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 115b37cc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b37cf push edx */
  push32((uint32_t)(EDX));
  /* 115b37d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b37d2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115b37d5 push eax */
  push32((uint32_t)(EAX));
  /* 115b37d6 call 0x115a8fd0 */
  push32(0x115b37dbu); f_115a8fd0();
  /* 115b37db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b37de mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115b37e5 jmp 0x115b37fe */
  goto L_115b37fe;
  /* 115b37e7 mov eax, 1 */
  EAX = (0x1u);
  /* 115b37ec ret  */
  ESPCHK(0x115b36c0u, _esp0);
  ESP += 4; return;
  /* 115b37ed mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115b37f0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 115b37f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115b37fe:;
  /* 115b37fe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3802 jne 0x115b380b */
  if (!C.zf) goto L_115b380b;
  /* 115b3804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3806 jmp 0x115b3919 */
  goto L_115b3919;
L_115b380b:;
  /* 115b380b push 0 */
  push32((uint32_t)(0x0u));
  /* 115b380d push 0 */
  push32((uint32_t)(0x0u));
  /* 115b380f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b3812 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3813 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115b3816 push edx */
  push32((uint32_t)(EDX));
  /* 115b3817 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b381a push eax */
  push32((uint32_t)(EAX));
  /* 115b381b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b381e push ecx */
  push32((uint32_t)(ECX));
  /* 115b381f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115b3824 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b3827 push edx */
  push32((uint32_t)(EDX));
  /* 115b3828 call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115b382eu);
  /* 115b382e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b3830 jne 0x115b3839 */
  if (!C.zf) goto L_115b3839;
  /* 115b3832 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3834 jmp 0x115b3919 */
  goto L_115b3919;
L_115b3839:;
  /* 115b3839 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115b3840 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b3843 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 115b3847 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b384a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115b384c call 0x115a8400 */
  push32(0x115b3851u); f_115a8400();
  /* 115b3851 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 115b3854 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115b3857 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 115b385a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 115b385d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115b3864 jmp 0x115b387d */
  goto L_115b387d;
  /* 115b3866 mov eax, 1 */
  EAX = (0x1u);
  /* 115b386b ret  */
  ESPCHK(0x115b36c0u, _esp0);
  ESP += 4; return;
  /* 115b386c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115b386f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 115b3876 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115b387d:;
  /* 115b387d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3881 jne 0x115b388a */
  if (!C.zf) goto L_115b388a;
  /* 115b3883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3885 jmp 0x115b3919 */
  goto L_115b3919;
L_115b388a:;
  /* 115b388a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b388e jne 0x115b3899 */
  if (!C.zf) goto L_115b3899;
  /* 115b3890 mov edx, dword ptr [0x115d1820] */
  EDX = (r32((uint32_t)(0x115d1820)));
  /* 115b3896 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_115b3899:;
  /* 115b3899 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b389c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b389f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 115b38a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b38a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b38ab mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 115b38b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b38b5 push ecx */
  push32((uint32_t)(ECX));
  /* 115b38b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b38b9 push edx */
  push32((uint32_t)(EDX));
  /* 115b38ba mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115b38bd push eax */
  push32((uint32_t)(EAX));
  /* 115b38be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b38c1 push ecx */
  push32((uint32_t)(ECX));
  /* 115b38c2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115b38c5 push edx */
  push32((uint32_t)(EDX));
  /* 115b38c6 call dword ptr [0x115d432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d432c))), 0x115b38ccu);
  /* 115b38cc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115b38cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b38d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b38d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b38d7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 115b38dc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b38e2 je 0x115b38f8 */
  if (C.zf) goto L_115b38f8;
  /* 115b38e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b38e7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b38ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b38ec mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115b38f0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b38f6 je 0x115b38fc */
  if (C.zf) goto L_115b38fc;
L_115b38f8:;
  /* 115b38f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b38fa jmp 0x115b3919 */
  goto L_115b3919;
L_115b38fc:;
  /* 115b38fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b38ff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115b3901 push eax */
  push32((uint32_t)(EAX));
  /* 115b3902 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b3905 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3906 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b3909 push edx */
  push32((uint32_t)(EDX));
  /* 115b390a call 0x115ad150 */
  push32(0x115b390fu); f_115ad150();
  /* 115b390f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3912 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b3915 jmp 0x115b3919 */
  goto L_115b3919;
L_115b3917:;
  /* 115b3917 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b3919:;
  /* 115b3919 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 115b391c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b391f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115b3926 pop edi */
  EDI = (pop32());
  /* 115b3927 pop esi */
  ESI = (pop32());
  /* 115b3928 pop ebx */
  EBX = (pop32());
  /* 115b3929 mov esp, ebp */
  ESP = (EBP);
  /* 115b392b pop ebp */
  EBP = (pop32());
  /* 115b392c ret  */
  ESPCHK(0x115b36c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013930 @ 0x115b3930 (208 bytes, 85 insns) */
void f_115b3930(void) {
  FTRACE(0x115b3930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b3930 push ebp */
  push32((uint32_t)(EBP));
  /* 115b3931 mov ebp, esp */
  EBP = (ESP);
  /* 115b3933 push edi */
  push32((uint32_t)(EDI));
  /* 115b3934 push esi */
  push32((uint32_t)(ESI));
  /* 115b3935 push ebx */
  push32((uint32_t)(EBX));
  /* 115b3936 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115b3939 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 115b393c lea eax, [0x115d1818] */
  EAX = ((uint32_t)(0x115d1818));
  /* 115b3942 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3946 jne 0x115b3983 */
  if (!C.zf) goto L_115b3983;
  /* 115b3948 mov al, 0xff */
  AL = (0xffu);
  /* 115b394a mov edi, edi */
  EDI = (EDI);
L_115b394c:;
  /* 115b394c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b394e je 0x115b397e */
  if (C.zf) goto L_115b397e;
  /* 115b3950 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115b3952 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115b3953 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 115b3955 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115b3956 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b3958 je 0x115b394c */
  if (C.zf) goto L_115b394c;
  /* 115b395a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115b395c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b395e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115b3960 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 115b3963 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115b3965 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115b3967 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 115b3969 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115b396b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b396d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115b396f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 115b3972 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115b3974 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115b3976 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b3978 je 0x115b394c */
  if (C.zf) goto L_115b394c;
  /* 115b397a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115b397c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_115b397e:;
  /* 115b397e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 115b3981 jmp 0x115b39fb */
  goto L_115b39fb;
L_115b3983:;
  /* 115b3983 lock inc dword ptr [0x115d19ac] */
  x86_unimpl("lock inc @ 0x115b3983");
  /* 115b398a cmp dword ptr [0x115d199c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d199c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3991 jg 0x115b3997 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b3997;
  /* 115b3993 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3995 jmp 0x115b39ac */
  goto L_115b39ac;
L_115b3997:;
  /* 115b3997 lock dec dword ptr [0x115d19ac] */
  x86_unimpl("lock dec @ 0x115b3997");
  /* 115b399e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115b39a0 call 0x115a8c60 */
  push32(0x115b39a5u); f_115a8c60();
  /* 115b39a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_115b39ac:;
  /* 115b39ac mov eax, 0xff */
  EAX = (0xffu);
  /* 115b39b1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115b39b3 nop  */
  /* nop */
L_115b39b4:;
  /* 115b39b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b39b6 je 0x115b39df */
  if (C.zf) goto L_115b39df;
  /* 115b39b8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115b39ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115b39bb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 115b39bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115b39be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b39c0 je 0x115b39b4 */
  if (C.zf) goto L_115b39b4;
  /* 115b39c2 push eax */
  push32((uint32_t)(EAX));
  /* 115b39c3 push ebx */
  push32((uint32_t)(EBX));
  /* 115b39c4 call 0x115b4aa0 */
  push32(0x115b39c9u); f_115b4aa0();
  /* 115b39c9 mov ebx, eax */
  EBX = (EAX);
  /* 115b39cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b39ce call 0x115b4aa0 */
  push32(0x115b39d3u); f_115b4aa0();
  /* 115b39d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b39d6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b39d8 je 0x115b39b4 */
  if (C.zf) goto L_115b39b4;
  /* 115b39da sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b39dc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_115b39df:;
  /* 115b39df mov ebx, eax */
  EBX = (EAX);
  /* 115b39e1 pop eax */
  EAX = (pop32());
  /* 115b39e2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b39e4 jne 0x115b39ef */
  if (!C.zf) goto L_115b39ef;
  /* 115b39e6 lock dec dword ptr [0x115d19ac] */
  x86_unimpl("lock dec @ 0x115b39e6");
  /* 115b39ed jmp 0x115b39f9 */
  goto L_115b39f9;
L_115b39ef:;
  /* 115b39ef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115b39f1 call 0x115a8d00 */
  push32(0x115b39f6u); f_115a8d00();
  /* 115b39f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b39f9:;
  /* 115b39f9 mov eax, ebx */
  EAX = (EBX);
L_115b39fb:;
  /* 115b39fb pop ebx */
  EBX = (pop32());
  /* 115b39fc pop esi */
  ESI = (pop32());
  /* 115b39fd pop edi */
  EDI = (pop32());
  /* 115b39fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115b39ff ret  */
  ESPCHK(0x115b3930u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a00 @ 0x115b3a00 (257 bytes, 103 insns) */
void f_115b3a00(void) {
  FTRACE(0x115b3a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b3a00 push ebp */
  push32((uint32_t)(EBP));
  /* 115b3a01 mov ebp, esp */
  EBP = (ESP);
  /* 115b3a03 push edi */
  push32((uint32_t)(EDI));
  /* 115b3a04 push esi */
  push32((uint32_t)(ESI));
  /* 115b3a05 push ebx */
  push32((uint32_t)(EBX));
  /* 115b3a06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b3a09 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b3a0b je 0x115b3afa */
  if (C.zf) goto L_115b3afa;
  /* 115b3a11 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3a14 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 115b3a17 lea eax, [0x115d1818] */
  EAX = ((uint32_t)(0x115d1818));
  /* 115b3a1d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3a21 jne 0x115b3a71 */
  if (!C.zf) goto L_115b3a71;
  /* 115b3a23 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 115b3a25 mov bl, 0x5a */
  BL = (0x5au);
  /* 115b3a27 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 115b3a29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115b3a2c:;
  /* 115b3a2c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 115b3a2e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 115b3a30 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 115b3a32 je 0x115b3a55 */
  if (C.zf) goto L_115b3a55;
  /* 115b3a34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b3a36 je 0x115b3a55 */
  if (C.zf) goto L_115b3a55;
  /* 115b3a38 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115b3a39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115b3a3a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b3a3c jb 0x115b3a44 */
  if (C.cf) goto L_115b3a44;
  /* 115b3a3e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b3a40 ja 0x115b3a44 */
  if ((!C.cf&&!C.zf)) goto L_115b3a44;
  /* 115b3a42 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_115b3a44:;
  /* 115b3a44 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b3a46 jb 0x115b3a4e */
  if (C.cf) goto L_115b3a4e;
  /* 115b3a48 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b3a4a ja 0x115b3a4e */
  if ((!C.cf&&!C.zf)) goto L_115b3a4e;
  /* 115b3a4c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_115b3a4e:;
  /* 115b3a4e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b3a50 jne 0x115b3a5f */
  if (!C.zf) goto L_115b3a5f;
  /* 115b3a52 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115b3a53 jne 0x115b3a2c */
  if (!C.zf) goto L_115b3a2c;
L_115b3a55:;
  /* 115b3a55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b3a57 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b3a59 je 0x115b3afa */
  if (C.zf) goto L_115b3afa;
L_115b3a5f:;
  /* 115b3a5f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 115b3a64 jb 0x115b3afa */
  if (C.cf) goto L_115b3afa;
  /* 115b3a6a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b3a6c jmp 0x115b3afa */
  goto L_115b3afa;
L_115b3a71:;
  /* 115b3a71 lock inc dword ptr [0x115d19ac] */
  x86_unimpl("lock inc @ 0x115b3a71");
  /* 115b3a78 cmp dword ptr [0x115d199c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d199c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3a7f jg 0x115b3a85 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b3a85;
  /* 115b3a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3a83 jmp 0x115b3a9e */
  goto L_115b3a9e;
L_115b3a85:;
  /* 115b3a85 lock dec dword ptr [0x115d19ac] */
  x86_unimpl("lock dec @ 0x115b3a85");
  /* 115b3a8c mov ebx, ecx */
  EBX = (ECX);
  /* 115b3a8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115b3a90 call 0x115a8c60 */
  push32(0x115b3a95u); f_115a8c60();
  /* 115b3a95 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 115b3a9c mov ecx, ebx */
  ECX = (EBX);
L_115b3a9e:;
  /* 115b3a9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3aa0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115b3aa2 mov edi, edi */
  EDI = (EDI);
L_115b3aa4:;
  /* 115b3aa4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115b3aa6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3aa8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 115b3aaa je 0x115b3acf */
  if (C.zf) goto L_115b3acf;
  /* 115b3aac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115b3aae je 0x115b3acf */
  if (C.zf) goto L_115b3acf;
  /* 115b3ab0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115b3ab1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115b3ab2 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3ab3 push eax */
  push32((uint32_t)(EAX));
  /* 115b3ab4 push ebx */
  push32((uint32_t)(EBX));
  /* 115b3ab5 call 0x115b4aa0 */
  push32(0x115b3abau); f_115b4aa0();
  /* 115b3aba mov ebx, eax */
  EBX = (EAX);
  /* 115b3abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3abf call 0x115b4aa0 */
  push32(0x115b3ac4u); f_115b4aa0();
  /* 115b3ac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3ac7 pop ecx */
  ECX = (pop32());
  /* 115b3ac8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3aca jne 0x115b3ad5 */
  if (!C.zf) goto L_115b3ad5;
  /* 115b3acc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115b3acd jne 0x115b3aa4 */
  if (!C.zf) goto L_115b3aa4;
L_115b3acf:;
  /* 115b3acf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b3ad1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3ad3 je 0x115b3ade */
  if (C.zf) goto L_115b3ade;
L_115b3ad5:;
  /* 115b3ad5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 115b3ada jb 0x115b3ade */
  if (C.cf) goto L_115b3ade;
  /* 115b3adc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_115b3ade:;
  /* 115b3ade pop eax */
  EAX = (pop32());
  /* 115b3adf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3ae1 jne 0x115b3aec */
  if (!C.zf) goto L_115b3aec;
  /* 115b3ae3 lock dec dword ptr [0x115d19ac] */
  x86_unimpl("lock dec @ 0x115b3ae3");
  /* 115b3aea jmp 0x115b3afa */
  goto L_115b3afa;
L_115b3aec:;
  /* 115b3aec mov ebx, ecx */
  EBX = (ECX);
  /* 115b3aee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115b3af0 call 0x115a8d00 */
  push32(0x115b3af5u); f_115a8d00();
  /* 115b3af5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3af8 mov ecx, ebx */
  ECX = (EBX);
L_115b3afa:;
  /* 115b3afa mov eax, ecx */
  EAX = (ECX);
  /* 115b3afc pop ebx */
  EBX = (pop32());
  /* 115b3afd pop esi */
  ESI = (pop32());
  /* 115b3afe pop edi */
  EDI = (pop32());
  /* 115b3aff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115b3b00 ret  */
  ESPCHK(0x115b3a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b10 @ 0x115b3b10 (255 bytes, 88 insns) */
void f_115b3b10(void) {
  FTRACE(0x115b3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 115b3b11 mov ebp, esp */
  EBP = (ESP);
  /* 115b3b13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_115b3b16:;
  /* 115b3b16 cmp dword ptr [0x115cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3b1d jle 0x115b3b36 */
  if ((C.zf||C.sf!=C.of)) goto L_115b3b36;
  /* 115b3b1f push 8 */
  push32((uint32_t)(0x8u));
  /* 115b3b21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3b24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b3b26 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b3b28 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3b29 call 0x115ab270 */
  push32(0x115b3b2eu); f_115ab270();
  /* 115b3b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3b31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115b3b34 jmp 0x115b3b4f */
  goto L_115b3b4f;
L_115b3b36:;
  /* 115b3b36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3b39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3b3b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b3b3d mov ecx, dword ptr [0x115cfc98] */
  ECX = (r32((uint32_t)(0x115cfc98)));
  /* 115b3b43 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b3b45 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115b3b49 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 115b3b4c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115b3b4f:;
  /* 115b3b4f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3b53 je 0x115b3b60 */
  if (C.zf) goto L_115b3b60;
  /* 115b3b55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3b58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3b5b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b3b5e jmp 0x115b3b16 */
  goto L_115b3b16;
L_115b3b60:;
  /* 115b3b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3b63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b3b65 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b3b67 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115b3b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3b6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3b70 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b3b73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b3b76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b3b79 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3b7d je 0x115b3b85 */
  if (C.zf) goto L_115b3b85;
  /* 115b3b7f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3b83 jne 0x115b3b98 */
  if (!C.zf) goto L_115b3b98;
L_115b3b85:;
  /* 115b3b85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3b88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3b8a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b3b8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b3b8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3b92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3b95 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_115b3b98:;
  /* 115b3b98 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115b3b9f:;
  /* 115b3b9f cmp dword ptr [0x115cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3ba6 jle 0x115b3bbb */
  if ((C.zf||C.sf!=C.of)) goto L_115b3bbb;
  /* 115b3ba8 push 4 */
  push32((uint32_t)(0x4u));
  /* 115b3baa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b3bad push edx */
  push32((uint32_t)(EDX));
  /* 115b3bae call 0x115ab270 */
  push32(0x115b3bb3u); f_115ab270();
  /* 115b3bb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3bb6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115b3bb9 jmp 0x115b3bd0 */
  goto L_115b3bd0;
L_115b3bbb:;
  /* 115b3bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b3bbe mov ecx, dword ptr [0x115cfc98] */
  ECX = (r32((uint32_t)(0x115cfc98)));
  /* 115b3bc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b3bc6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115b3bca and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115b3bcd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_115b3bd0:;
  /* 115b3bd0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3bd4 je 0x115b3bfb */
  if (C.zf) goto L_115b3bfb;
  /* 115b3bd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b3bd9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b3bdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b3bdf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 115b3be3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b3be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3be9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b3beb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b3bed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b3bf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3bf3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3bf6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115b3bf9 jmp 0x115b3b9f */
  goto L_115b3b9f;
L_115b3bfb:;
  /* 115b3bfb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3bff jne 0x115b3c08 */
  if (!C.zf) goto L_115b3c08;
  /* 115b3c01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b3c04 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b3c06 jmp 0x115b3c0b */
  goto L_115b3c0b;
L_115b3c08:;
  /* 115b3c08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_115b3c0b:;
  /* 115b3c0b mov esp, ebp */
  ESP = (EBP);
  /* 115b3c0d pop ebp */
  EBP = (pop32());
  /* 115b3c0e ret  */
  ESPCHK(0x115b3b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c10 @ 0x115b3c10 (17 bytes, 8 insns) */
void f_115b3c10(void) {
  FTRACE(0x115b3c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b3c10 push ebp */
  push32((uint32_t)(EBP));
  /* 115b3c11 mov ebp, esp */
  EBP = (ESP);
  /* 115b3c13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3c16 push eax */
  push32((uint32_t)(EAX));
  /* 115b3c17 call 0x115b3b10 */
  push32(0x115b3c1cu); f_115b3b10();
  /* 115b3c1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3c1f pop ebp */
  EBP = (pop32());
  /* 115b3c20 ret  */
  ESPCHK(0x115b3c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c30 @ 0x115b3c30 (297 bytes, 106 insns) */
void f_115b3c30(void) {
  FTRACE(0x115b3c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b3c30 push ebp */
  push32((uint32_t)(EBP));
  /* 115b3c31 mov ebp, esp */
  EBP = (ESP);
  /* 115b3c33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b3c36 push esi */
  push32((uint32_t)(ESI));
L_115b3c37:;
  /* 115b3c37 cmp dword ptr [0x115cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3c3e jle 0x115b3c57 */
  if ((C.zf||C.sf!=C.of)) goto L_115b3c57;
  /* 115b3c40 push 8 */
  push32((uint32_t)(0x8u));
  /* 115b3c42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3c45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b3c47 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b3c49 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3c4a call 0x115ab270 */
  push32(0x115b3c4fu); f_115ab270();
  /* 115b3c4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3c52 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115b3c55 jmp 0x115b3c70 */
  goto L_115b3c70;
L_115b3c57:;
  /* 115b3c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3c5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3c5c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b3c5e mov ecx, dword ptr [0x115cfc98] */
  ECX = (r32((uint32_t)(0x115cfc98)));
  /* 115b3c64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b3c66 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115b3c6a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 115b3c6d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_115b3c70:;
  /* 115b3c70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3c74 je 0x115b3c81 */
  if (C.zf) goto L_115b3c81;
  /* 115b3c76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3c79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3c7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b3c7f jmp 0x115b3c37 */
  goto L_115b3c37;
L_115b3c81:;
  /* 115b3c81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3c84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b3c86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b3c88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115b3c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3c8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3c91 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b3c94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b3c97 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115b3c9a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3c9e je 0x115b3ca6 */
  if (C.zf) goto L_115b3ca6;
  /* 115b3ca0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3ca4 jne 0x115b3cb9 */
  if (!C.zf) goto L_115b3cb9;
L_115b3ca6:;
  /* 115b3ca6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3ca9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3cab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b3cad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b3cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3cb3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3cb6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_115b3cb9:;
  /* 115b3cb9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115b3cc0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115b3cc7:;
  /* 115b3cc7 cmp dword ptr [0x115cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3cce jle 0x115b3ce3 */
  if ((C.zf||C.sf!=C.of)) goto L_115b3ce3;
  /* 115b3cd0 push 4 */
  push32((uint32_t)(0x4u));
  /* 115b3cd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b3cd5 push edx */
  push32((uint32_t)(EDX));
  /* 115b3cd6 call 0x115ab270 */
  push32(0x115b3cdbu); f_115ab270();
  /* 115b3cdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3cde mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115b3ce1 jmp 0x115b3cf8 */
  goto L_115b3cf8;
L_115b3ce3:;
  /* 115b3ce3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b3ce6 mov ecx, dword ptr [0x115cfc98] */
  ECX = (r32((uint32_t)(0x115cfc98)));
  /* 115b3cec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b3cee mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115b3cf2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115b3cf5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_115b3cf8:;
  /* 115b3cf8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3cfc je 0x115b3d39 */
  if (C.zf) goto L_115b3d39;
  /* 115b3cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3d00 push 0xa */
  push32((uint32_t)(0xau));
  /* 115b3d02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b3d05 push eax */
  push32((uint32_t)(EAX));
  /* 115b3d06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3d09 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3d0a call 0x115b4bd0 */
  push32(0x115b3d0fu); f_115b4bd0();
  /* 115b3d0f mov ecx, eax */
  ECX = (EAX);
  /* 115b3d11 mov esi, edx */
  ESI = (EDX);
  /* 115b3d13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b3d16 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b3d19 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b3d1a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3d1c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3d1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b3d21 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 115b3d24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b3d29 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b3d2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b3d2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b3d31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3d34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 115b3d37 jmp 0x115b3cc7 */
  goto L_115b3cc7;
L_115b3d39:;
  /* 115b3d39 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3d3d jne 0x115b3d4e */
  if (!C.zf) goto L_115b3d4e;
  /* 115b3d3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3d42 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b3d44 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b3d47 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3d4a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b3d4c jmp 0x115b3d54 */
  goto L_115b3d54;
L_115b3d4e:;
  /* 115b3d4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3d51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_115b3d54:;
  /* 115b3d54 pop esi */
  ESI = (pop32());
  /* 115b3d55 mov esp, ebp */
  ESP = (EBP);
  /* 115b3d57 pop ebp */
  EBP = (pop32());
  /* 115b3d58 ret  */
  ESPCHK(0x115b3c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d60 @ 0x115b3d60 (61 bytes, 18 insns) */
void f_115b3d60(void) {
  FTRACE(0x115b3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 115b3d61 mov ebp, esp */
  EBP = (ESP);
  /* 115b3d63 cmp dword ptr [0x115d1978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3d6a jne 0x115b3d9b */
  if (!C.zf) goto L_115b3d9b;
  /* 115b3d6c push 0xb */
  push32((uint32_t)(0xbu));
  /* 115b3d6e call 0x115a8c60 */
  push32(0x115b3d73u); f_115a8c60();
  /* 115b3d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3d76 cmp dword ptr [0x115d1978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3d7d jne 0x115b3d91 */
  if (!C.zf) goto L_115b3d91;
  /* 115b3d7f call 0x115b3dc0 */
  push32(0x115b3d84u); f_115b3dc0();
  /* 115b3d84 mov eax, dword ptr [0x115d1978] */
  EAX = (r32((uint32_t)(0x115d1978)));
  /* 115b3d89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3d8c mov dword ptr [0x115d1978], eax */
  w32((uint32_t)(0x115d1978), (EAX));
L_115b3d91:;
  /* 115b3d91 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115b3d93 call 0x115a8d00 */
  push32(0x115b3d98u); f_115a8d00();
  /* 115b3d98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b3d9b:;
  /* 115b3d9b pop ebp */
  EBP = (pop32());
  /* 115b3d9c ret  */
  ESPCHK(0x115b3d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013da0 @ 0x115b3da0 (30 bytes, 11 insns) */
void f_115b3da0(void) {
  FTRACE(0x115b3da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b3da0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b3da1 mov ebp, esp */
  EBP = (ESP);
  /* 115b3da3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115b3da5 call 0x115a8c60 */
  push32(0x115b3daau); f_115a8c60();
  /* 115b3daa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3dad call 0x115b3dc0 */
  push32(0x115b3db2u); f_115b3dc0();
  /* 115b3db2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115b3db4 call 0x115a8d00 */
  push32(0x115b3db9u); f_115a8d00();
  /* 115b3db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3dbc pop ebp */
  EBP = (pop32());
  /* 115b3dbd ret  */
  ESPCHK(0x115b3da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013dc0 @ 0x115b3dc0 (939 bytes, 266 insns) */
void f_115b3dc0(void) {
  FTRACE(0x115b3dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b3dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b3dc1 mov ebp, esp */
  EBP = (ESP);
  /* 115b3dc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b3dc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115b3dcd push 0xc */
  push32((uint32_t)(0xcu));
  /* 115b3dcf call 0x115a8c60 */
  push32(0x115b3dd4u); f_115a8c60();
  /* 115b3dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3dd7 mov dword ptr [0x115d18c0], 0 */
  w32((uint32_t)(0x115d18c0), (0x0u));
  /* 115b3de1 mov dword ptr [0x115d0e38], 0xffffffff */
  w32((uint32_t)(0x115d0e38), (0xffffffffu));
  /* 115b3deb mov eax, dword ptr [0x115d0e38] */
  EAX = (r32((uint32_t)(0x115d0e38)));
  /* 115b3df0 mov dword ptr [0x115d0e28], eax */
  w32((uint32_t)(0x115d0e28), (EAX));
  /* 115b3df5 push 0x115cdb18 */
  push32((uint32_t)(0x115cdb18u));
  /* 115b3dfa call 0x115b4c40 */
  push32(0x115b3dffu); f_115b4c40();
  /* 115b3dff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3e02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b3e05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3e09 jne 0x115b3f43 */
  if (!C.zf) goto L_115b3f43;
  /* 115b3e0f push 0xc */
  push32((uint32_t)(0xcu));
  /* 115b3e11 call 0x115a8d00 */
  push32(0x115b3e16u); f_115a8d00();
  /* 115b3e16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3e19 push 0x115d18c8 */
  push32((uint32_t)(0x115d18c8u));
  /* 115b3e1e call dword ptr [0x115d42e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42e0))), 0x115b3e24u);
  /* 115b3e24 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3e27 je 0x115b3f3e */
  if (C.zf) goto L_115b3f3e;
  /* 115b3e2d mov dword ptr [0x115d18c0], 1 */
  w32((uint32_t)(0x115d18c0), (0x1u));
  /* 115b3e37 mov ecx, dword ptr [0x115d18c8] */
  ECX = (r32((uint32_t)(0x115d18c8)));
  /* 115b3e3d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b3e40 mov dword ptr [0x115d0d90], ecx */
  w32((uint32_t)(0x115d0d90), (ECX));
  /* 115b3e46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b3e48 mov dx, word ptr [0x115d190e] */
  DX = (r16((uint32_t)(0x115d190e)));
  /* 115b3e4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b3e51 je 0x115b3e69 */
  if (C.zf) goto L_115b3e69;
  /* 115b3e53 mov eax, dword ptr [0x115d191c] */
  EAX = (r32((uint32_t)(0x115d191c)));
  /* 115b3e58 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b3e5b mov ecx, dword ptr [0x115d0d90] */
  ECX = (r32((uint32_t)(0x115d0d90)));
  /* 115b3e61 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3e63 mov dword ptr [0x115d0d90], ecx */
  w32((uint32_t)(0x115d0d90), (ECX));
L_115b3e69:;
  /* 115b3e69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b3e6b mov dx, word ptr [0x115d1962] */
  DX = (r16((uint32_t)(0x115d1962)));
  /* 115b3e72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b3e74 je 0x115b3e9e */
  if (C.zf) goto L_115b3e9e;
  /* 115b3e76 cmp dword ptr [0x115d1970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3e7d je 0x115b3e9e */
  if (C.zf) goto L_115b3e9e;
  /* 115b3e7f mov dword ptr [0x115d0d94], 1 */
  w32((uint32_t)(0x115d0d94), (0x1u));
  /* 115b3e89 mov eax, dword ptr [0x115d1970] */
  EAX = (r32((uint32_t)(0x115d1970)));
  /* 115b3e8e sub eax, dword ptr [0x115d191c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d191c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b3e94 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b3e97 mov dword ptr [0x115d0d98], eax */
  w32((uint32_t)(0x115d0d98), (EAX));
  /* 115b3e9c jmp 0x115b3eb2 */
  goto L_115b3eb2;
L_115b3e9e:;
  /* 115b3e9e mov dword ptr [0x115d0d94], 0 */
  w32((uint32_t)(0x115d0d94), (0x0u));
  /* 115b3ea8 mov dword ptr [0x115d0d98], 0 */
  w32((uint32_t)(0x115d0d98), (0x0u));
L_115b3eb2:;
  /* 115b3eb2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 115b3eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3eb8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115b3eba mov edx, dword ptr [0x115d0e1c] */
  EDX = (r32((uint32_t)(0x115d0e1c)));
  /* 115b3ec0 push edx */
  push32((uint32_t)(EDX));
  /* 115b3ec1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b3ec3 push 0x115d18cc */
  push32((uint32_t)(0x115d18ccu));
  /* 115b3ec8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115b3ecd mov eax, dword ptr [0x115d1830] */
  EAX = (r32((uint32_t)(0x115d1830)));
  /* 115b3ed2 push eax */
  push32((uint32_t)(EAX));
  /* 115b3ed3 call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115b3ed9u);
  /* 115b3ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b3edb je 0x115b3eef */
  if (C.zf) goto L_115b3eef;
  /* 115b3edd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3ee1 jne 0x115b3eef */
  if (!C.zf) goto L_115b3eef;
  /* 115b3ee3 mov ecx, dword ptr [0x115d0e1c] */
  ECX = (r32((uint32_t)(0x115d0e1c)));
  /* 115b3ee9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 115b3eed jmp 0x115b3ef8 */
  goto L_115b3ef8;
L_115b3eef:;
  /* 115b3eef mov edx, dword ptr [0x115d0e1c] */
  EDX = (r32((uint32_t)(0x115d0e1c)));
  /* 115b3ef5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_115b3ef8:;
  /* 115b3ef8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115b3efb push eax */
  push32((uint32_t)(EAX));
  /* 115b3efc push 0 */
  push32((uint32_t)(0x0u));
  /* 115b3efe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115b3f00 mov ecx, dword ptr [0x115d0e20] */
  ECX = (r32((uint32_t)(0x115d0e20)));
  /* 115b3f06 push ecx */
  push32((uint32_t)(ECX));
  /* 115b3f07 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b3f09 push 0x115d1920 */
  push32((uint32_t)(0x115d1920u));
  /* 115b3f0e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115b3f13 mov edx, dword ptr [0x115d1830] */
  EDX = (r32((uint32_t)(0x115d1830)));
  /* 115b3f19 push edx */
  push32((uint32_t)(EDX));
  /* 115b3f1a call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115b3f20u);
  /* 115b3f20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b3f22 je 0x115b3f35 */
  if (C.zf) goto L_115b3f35;
  /* 115b3f24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3f28 jne 0x115b3f35 */
  if (!C.zf) goto L_115b3f35;
  /* 115b3f2a mov eax, dword ptr [0x115d0e20] */
  EAX = (r32((uint32_t)(0x115d0e20)));
  /* 115b3f2f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 115b3f33 jmp 0x115b3f3e */
  goto L_115b3f3e;
L_115b3f35:;
  /* 115b3f35 mov ecx, dword ptr [0x115d0e20] */
  ECX = (r32((uint32_t)(0x115d0e20)));
  /* 115b3f3b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_115b3f3e:;
  /* 115b3f3e jmp 0x115b4167 */
  goto L_115b4167;
L_115b3f43:;
  /* 115b3f43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3f46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b3f49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b3f4b je 0x115b3f6d */
  if (C.zf) goto L_115b3f6d;
  /* 115b3f4d cmp dword ptr [0x115d1974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3f54 je 0x115b3f7c */
  if (C.zf) goto L_115b3f7c;
  /* 115b3f56 mov ecx, dword ptr [0x115d1974] */
  ECX = (r32((uint32_t)(0x115d1974)));
  /* 115b3f5c push ecx */
  push32((uint32_t)(ECX));
  /* 115b3f5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3f60 push edx */
  push32((uint32_t)(EDX));
  /* 115b3f61 call 0x115b0ef0 */
  push32(0x115b3f66u); f_115b0ef0();
  /* 115b3f66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b3f6b jne 0x115b3f7c */
  if (!C.zf) goto L_115b3f7c;
L_115b3f6d:;
  /* 115b3f6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 115b3f6f call 0x115a8d00 */
  push32(0x115b3f74u); f_115a8d00();
  /* 115b3f74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3f77 jmp 0x115b4167 */
  goto L_115b4167;
L_115b3f7c:;
  /* 115b3f7c push 2 */
  push32((uint32_t)(0x2u));
  /* 115b3f7e mov eax, dword ptr [0x115d1974] */
  EAX = (r32((uint32_t)(0x115d1974)));
  /* 115b3f83 push eax */
  push32((uint32_t)(EAX));
  /* 115b3f84 call 0x115a5cf0 */
  push32(0x115b3f89u); f_115a5cf0();
  /* 115b3f89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3f8c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 115b3f91 push 0x115cdb10 */
  push32((uint32_t)(0x115cdb10u));
  /* 115b3f96 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b3f98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3f9b push ecx */
  push32((uint32_t)(ECX));
  /* 115b3f9c call 0x115a8090 */
  push32(0x115b3fa1u); f_115a8090();
  /* 115b3fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3fa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3fa7 push eax */
  push32((uint32_t)(EAX));
  /* 115b3fa8 call 0x115a5260 */
  push32(0x115b3fadu); f_115a5260();
  /* 115b3fad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3fb0 mov dword ptr [0x115d1974], eax */
  w32((uint32_t)(0x115d1974), (EAX));
  /* 115b3fb5 cmp dword ptr [0x115d1974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b3fbc jne 0x115b3fcd */
  if (!C.zf) goto L_115b3fcd;
  /* 115b3fbe push 0xc */
  push32((uint32_t)(0xcu));
  /* 115b3fc0 call 0x115a8d00 */
  push32(0x115b3fc5u); f_115a8d00();
  /* 115b3fc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3fc8 jmp 0x115b4167 */
  goto L_115b4167;
L_115b3fcd:;
  /* 115b3fcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3fd0 push edx */
  push32((uint32_t)(EDX));
  /* 115b3fd1 mov eax, dword ptr [0x115d1974] */
  EAX = (r32((uint32_t)(0x115d1974)));
  /* 115b3fd6 push eax */
  push32((uint32_t)(EAX));
  /* 115b3fd7 call 0x115a8210 */
  push32(0x115b3fdcu); f_115a8210();
  /* 115b3fdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3fdf push 0xc */
  push32((uint32_t)(0xcu));
  /* 115b3fe1 call 0x115a8d00 */
  push32(0x115b3fe6u); f_115a8d00();
  /* 115b3fe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3fe9 push 3 */
  push32((uint32_t)(0x3u));
  /* 115b3feb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b3fee push ecx */
  push32((uint32_t)(ECX));
  /* 115b3fef mov edx, dword ptr [0x115d0e1c] */
  EDX = (r32((uint32_t)(0x115d0e1c)));
  /* 115b3ff5 push edx */
  push32((uint32_t)(EDX));
  /* 115b3ff6 call 0x115a8a80 */
  push32(0x115b3ffbu); f_115a8a80();
  /* 115b3ffb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b3ffe mov eax, dword ptr [0x115d0e1c] */
  EAX = (r32((uint32_t)(0x115d0e1c)));
  /* 115b4003 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 115b4007 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b400a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b400d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b4010 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4013 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b4016 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4019 jne 0x115b402d */
  if (!C.zf) goto L_115b402d;
  /* 115b401b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b401e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4021 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b4024 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4027 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b402a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_115b402d:;
  /* 115b402d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4030 push eax */
  push32((uint32_t)(EAX));
  /* 115b4031 call 0x115b3b10 */
  push32(0x115b4036u); f_115b3b10();
  /* 115b4036 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4039 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b403f mov dword ptr [0x115d0d90], eax */
  w32((uint32_t)(0x115d0d90), (EAX));
L_115b4044:;
  /* 115b4044 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4047 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b404a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b404d je 0x115b4065 */
  if (C.zf) goto L_115b4065;
  /* 115b404f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4052 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b4055 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4058 jl 0x115b4070 */
  if ((C.sf!=C.of)) goto L_115b4070;
  /* 115b405a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b405d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b4060 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4063 jg 0x115b4070 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b4070;
L_115b4065:;
  /* 115b4065 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4068 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b406b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b406e jmp 0x115b4044 */
  goto L_115b4044;
L_115b4070:;
  /* 115b4070 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4073 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b4076 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4079 jne 0x115b4115 */
  if (!C.zf) goto L_115b4115;
  /* 115b407f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4082 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4085 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b4088 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b408b push edx */
  push32((uint32_t)(EDX));
  /* 115b408c call 0x115b3b10 */
  push32(0x115b4091u); f_115b3b10();
  /* 115b4091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4094 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b4097 mov ecx, dword ptr [0x115d0d90] */
  ECX = (r32((uint32_t)(0x115d0d90)));
  /* 115b409d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b409f mov dword ptr [0x115d0d90], ecx */
  w32((uint32_t)(0x115d0d90), (ECX));
L_115b40a5:;
  /* 115b40a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b40a8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b40ab cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b40ae jl 0x115b40c6 */
  if ((C.sf!=C.of)) goto L_115b40c6;
  /* 115b40b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b40b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b40b6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b40b9 jg 0x115b40c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b40c6;
  /* 115b40bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b40be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b40c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b40c4 jmp 0x115b40a5 */
  goto L_115b40a5;
L_115b40c6:;
  /* 115b40c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b40c9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b40cc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b40cf jne 0x115b4115 */
  if (!C.zf) goto L_115b4115;
  /* 115b40d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b40d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b40d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b40da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b40dd push ecx */
  push32((uint32_t)(ECX));
  /* 115b40de call 0x115b3b10 */
  push32(0x115b40e3u); f_115b3b10();
  /* 115b40e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b40e6 mov edx, dword ptr [0x115d0d90] */
  EDX = (r32((uint32_t)(0x115d0d90)));
  /* 115b40ec add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b40ee mov dword ptr [0x115d0d90], edx */
  w32((uint32_t)(0x115d0d90), (EDX));
L_115b40f4:;
  /* 115b40f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b40f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b40fa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b40fd jl 0x115b4115 */
  if ((C.sf!=C.of)) goto L_115b4115;
  /* 115b40ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4102 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b4105 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4108 jg 0x115b4115 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b4115;
  /* 115b410a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b410d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4110 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b4113 jmp 0x115b40f4 */
  goto L_115b40f4;
L_115b4115:;
  /* 115b4115 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4119 je 0x115b4129 */
  if (C.zf) goto L_115b4129;
  /* 115b411b mov edx, dword ptr [0x115d0d90] */
  EDX = (r32((uint32_t)(0x115d0d90)));
  /* 115b4121 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b4123 mov dword ptr [0x115d0d90], edx */
  w32((uint32_t)(0x115d0d90), (EDX));
L_115b4129:;
  /* 115b4129 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b412c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b412f mov dword ptr [0x115d0d94], ecx */
  w32((uint32_t)(0x115d0d94), (ECX));
  /* 115b4135 cmp dword ptr [0x115d0d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d0d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b413c je 0x115b415e */
  if (C.zf) goto L_115b415e;
  /* 115b413e push 3 */
  push32((uint32_t)(0x3u));
  /* 115b4140 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4143 push edx */
  push32((uint32_t)(EDX));
  /* 115b4144 mov eax, dword ptr [0x115d0e20] */
  EAX = (r32((uint32_t)(0x115d0e20)));
  /* 115b4149 push eax */
  push32((uint32_t)(EAX));
  /* 115b414a call 0x115a8a80 */
  push32(0x115b414fu); f_115a8a80();
  /* 115b414f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4152 mov ecx, dword ptr [0x115d0e20] */
  ECX = (r32((uint32_t)(0x115d0e20)));
  /* 115b4158 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 115b415c jmp 0x115b4167 */
  goto L_115b4167;
L_115b415e:;
  /* 115b415e mov edx, dword ptr [0x115d0e20] */
  EDX = (r32((uint32_t)(0x115d0e20)));
  /* 115b4164 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_115b4167:;
  /* 115b4167 mov esp, ebp */
  ESP = (EBP);
  /* 115b4169 pop ebp */
  EBP = (pop32());
  /* 115b416a ret  */
  ESPCHK(0x115b3dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014170 @ 0x115b4170 (46 bytes, 18 insns) */
void f_115b4170(void) {
  FTRACE(0x115b4170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b4170 push ebp */
  push32((uint32_t)(EBP));
  /* 115b4171 mov ebp, esp */
  EBP = (ESP);
  /* 115b4173 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4174 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115b4176 call 0x115a8c60 */
  push32(0x115b417bu); f_115a8c60();
  /* 115b417b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b417e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4181 push eax */
  push32((uint32_t)(EAX));
  /* 115b4182 call 0x115b41a0 */
  push32(0x115b4187u); f_115b41a0();
  /* 115b4187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b418a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b418d push 0xb */
  push32((uint32_t)(0xbu));
  /* 115b418f call 0x115a8d00 */
  push32(0x115b4194u); f_115a8d00();
  /* 115b4194 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4197 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b419a mov esp, ebp */
  ESP = (EBP);
  /* 115b419c pop ebp */
  EBP = (pop32());
  /* 115b419d ret  */
  ESPCHK(0x115b4170u, _esp0);
  ESP += 4; return;
}

/* FUN_100141a0 @ 0x115b41a0 (762 bytes, 246 insns) */
void f_115b41a0(void) {
  FTRACE(0x115b41a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b41a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b41a1 mov ebp, esp */
  EBP = (ESP);
  /* 115b41a3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b41a4 cmp dword ptr [0x115d0d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d0d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b41ab jne 0x115b41b4 */
  if (!C.zf) goto L_115b41b4;
  /* 115b41ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b41af jmp 0x115b4496 */
  goto L_115b4496;
L_115b41b4:;
  /* 115b41b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b41b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115b41ba cmp ecx, dword ptr [0x115d0e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d0e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b41c0 jne 0x115b41d4 */
  if (!C.zf) goto L_115b41d4;
  /* 115b41c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b41c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115b41c8 cmp eax, dword ptr [0x115d0e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d0e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b41ce je 0x115b439b */
  if (C.zf) goto L_115b439b;
L_115b41d4:;
  /* 115b41d4 cmp dword ptr [0x115d18c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d18c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b41db je 0x115b4355 */
  if (C.zf) goto L_115b4355;
  /* 115b41e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b41e3 mov cx, word ptr [0x115d1960] */
  CX = (r16((uint32_t)(0x115d1960)));
  /* 115b41ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b41ec jne 0x115b4249 */
  if (!C.zf) goto L_115b4249;
  /* 115b41ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b41f0 mov dx, word ptr [0x115d196e] */
  DX = (r16((uint32_t)(0x115d196e)));
  /* 115b41f7 push edx */
  push32((uint32_t)(EDX));
  /* 115b41f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b41fa mov ax, word ptr [0x115d196c] */
  AX = (r16((uint32_t)(0x115d196c)));
  /* 115b4200 push eax */
  push32((uint32_t)(EAX));
  /* 115b4201 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b4203 mov cx, word ptr [0x115d196a] */
  CX = (r16((uint32_t)(0x115d196a)));
  /* 115b420a push ecx */
  push32((uint32_t)(ECX));
  /* 115b420b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b420d mov dx, word ptr [0x115d1968] */
  DX = (r16((uint32_t)(0x115d1968)));
  /* 115b4214 push edx */
  push32((uint32_t)(EDX));
  /* 115b4215 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4219 mov ax, word ptr [0x115d1964] */
  AX = (r16((uint32_t)(0x115d1964)));
  /* 115b421f push eax */
  push32((uint32_t)(EAX));
  /* 115b4220 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b4222 mov cx, word ptr [0x115d1966] */
  CX = (r16((uint32_t)(0x115d1966)));
  /* 115b4229 push ecx */
  push32((uint32_t)(ECX));
  /* 115b422a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b422c mov dx, word ptr [0x115d1962] */
  DX = (r16((uint32_t)(0x115d1962)));
  /* 115b4233 push edx */
  push32((uint32_t)(EDX));
  /* 115b4234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4237 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115b423a push ecx */
  push32((uint32_t)(ECX));
  /* 115b423b push 1 */
  push32((uint32_t)(0x1u));
  /* 115b423d push 1 */
  push32((uint32_t)(0x1u));
  /* 115b423f call 0x115b44a0 */
  push32(0x115b4244u); f_115b44a0();
  /* 115b4244 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4247 jmp 0x115b429a */
  goto L_115b429a;
L_115b4249:;
  /* 115b4249 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b424b mov dx, word ptr [0x115d196e] */
  DX = (r16((uint32_t)(0x115d196e)));
  /* 115b4252 push edx */
  push32((uint32_t)(EDX));
  /* 115b4253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4255 mov ax, word ptr [0x115d196c] */
  AX = (r16((uint32_t)(0x115d196c)));
  /* 115b425b push eax */
  push32((uint32_t)(EAX));
  /* 115b425c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b425e mov cx, word ptr [0x115d196a] */
  CX = (r16((uint32_t)(0x115d196a)));
  /* 115b4265 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4266 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b4268 mov dx, word ptr [0x115d1968] */
  DX = (r16((uint32_t)(0x115d1968)));
  /* 115b426f push edx */
  push32((uint32_t)(EDX));
  /* 115b4270 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4272 mov ax, word ptr [0x115d1966] */
  AX = (r16((uint32_t)(0x115d1966)));
  /* 115b4278 push eax */
  push32((uint32_t)(EAX));
  /* 115b4279 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b427b push 0 */
  push32((uint32_t)(0x0u));
  /* 115b427d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b427f mov cx, word ptr [0x115d1962] */
  CX = (r16((uint32_t)(0x115d1962)));
  /* 115b4286 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4287 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b428a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115b428d push eax */
  push32((uint32_t)(EAX));
  /* 115b428e push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4290 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4292 call 0x115b44a0 */
  push32(0x115b4297u); f_115b44a0();
  /* 115b4297 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b429a:;
  /* 115b429a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b429c mov cx, word ptr [0x115d190c] */
  CX = (r16((uint32_t)(0x115d190c)));
  /* 115b42a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b42a5 jne 0x115b4302 */
  if (!C.zf) goto L_115b4302;
  /* 115b42a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b42a9 mov dx, word ptr [0x115d191a] */
  DX = (r16((uint32_t)(0x115d191a)));
  /* 115b42b0 push edx */
  push32((uint32_t)(EDX));
  /* 115b42b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b42b3 mov ax, word ptr [0x115d1918] */
  AX = (r16((uint32_t)(0x115d1918)));
  /* 115b42b9 push eax */
  push32((uint32_t)(EAX));
  /* 115b42ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b42bc mov cx, word ptr [0x115d1916] */
  CX = (r16((uint32_t)(0x115d1916)));
  /* 115b42c3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b42c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b42c6 mov dx, word ptr [0x115d1914] */
  DX = (r16((uint32_t)(0x115d1914)));
  /* 115b42cd push edx */
  push32((uint32_t)(EDX));
  /* 115b42ce push 0 */
  push32((uint32_t)(0x0u));
  /* 115b42d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b42d2 mov ax, word ptr [0x115d1910] */
  AX = (r16((uint32_t)(0x115d1910)));
  /* 115b42d8 push eax */
  push32((uint32_t)(EAX));
  /* 115b42d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b42db mov cx, word ptr [0x115d1912] */
  CX = (r16((uint32_t)(0x115d1912)));
  /* 115b42e2 push ecx */
  push32((uint32_t)(ECX));
  /* 115b42e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b42e5 mov dx, word ptr [0x115d190e] */
  DX = (r16((uint32_t)(0x115d190e)));
  /* 115b42ec push edx */
  push32((uint32_t)(EDX));
  /* 115b42ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b42f0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115b42f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b42f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b42f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b42f8 call 0x115b44a0 */
  push32(0x115b42fdu); f_115b44a0();
  /* 115b42fd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4300 jmp 0x115b4353 */
  goto L_115b4353;
L_115b4302:;
  /* 115b4302 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b4304 mov dx, word ptr [0x115d191a] */
  DX = (r16((uint32_t)(0x115d191a)));
  /* 115b430b push edx */
  push32((uint32_t)(EDX));
  /* 115b430c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b430e mov ax, word ptr [0x115d1918] */
  AX = (r16((uint32_t)(0x115d1918)));
  /* 115b4314 push eax */
  push32((uint32_t)(EAX));
  /* 115b4315 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b4317 mov cx, word ptr [0x115d1916] */
  CX = (r16((uint32_t)(0x115d1916)));
  /* 115b431e push ecx */
  push32((uint32_t)(ECX));
  /* 115b431f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b4321 mov dx, word ptr [0x115d1914] */
  DX = (r16((uint32_t)(0x115d1914)));
  /* 115b4328 push edx */
  push32((uint32_t)(EDX));
  /* 115b4329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b432b mov ax, word ptr [0x115d1912] */
  AX = (r16((uint32_t)(0x115d1912)));
  /* 115b4331 push eax */
  push32((uint32_t)(EAX));
  /* 115b4332 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4334 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4336 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b4338 mov cx, word ptr [0x115d190e] */
  CX = (r16((uint32_t)(0x115d190e)));
  /* 115b433f push ecx */
  push32((uint32_t)(ECX));
  /* 115b4340 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4343 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115b4346 push eax */
  push32((uint32_t)(EAX));
  /* 115b4347 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4349 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b434b call 0x115b44a0 */
  push32(0x115b4350u); f_115b44a0();
  /* 115b4350 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b4353:;
  /* 115b4353 jmp 0x115b439b */
  goto L_115b439b;
L_115b4355:;
  /* 115b4355 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4357 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4359 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b435b push 2 */
  push32((uint32_t)(0x2u));
  /* 115b435d push 0 */
  push32((uint32_t)(0x0u));
  /* 115b435f push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4361 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4363 push 4 */
  push32((uint32_t)(0x4u));
  /* 115b4365 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4368 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115b436b push edx */
  push32((uint32_t)(EDX));
  /* 115b436c push 1 */
  push32((uint32_t)(0x1u));
  /* 115b436e push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4370 call 0x115b44a0 */
  push32(0x115b4375u); f_115b44a0();
  /* 115b4375 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4378 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b437a push 0 */
  push32((uint32_t)(0x0u));
  /* 115b437c push 0 */
  push32((uint32_t)(0x0u));
  /* 115b437e push 2 */
  push32((uint32_t)(0x2u));
  /* 115b4380 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4382 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4384 push 5 */
  push32((uint32_t)(0x5u));
  /* 115b4386 push 0xa */
  push32((uint32_t)(0xau));
  /* 115b4388 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b438b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115b438e push ecx */
  push32((uint32_t)(ECX));
  /* 115b438f push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4391 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4393 call 0x115b44a0 */
  push32(0x115b4398u); f_115b44a0();
  /* 115b4398 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b439b:;
  /* 115b439b mov edx, dword ptr [0x115d0e2c] */
  EDX = (r32((uint32_t)(0x115d0e2c)));
  /* 115b43a1 cmp edx, dword ptr [0x115d0e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115d0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b43a7 jge 0x115b43f4 */
  if ((C.sf==C.of)) goto L_115b43f4;
  /* 115b43a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b43ac mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 115b43af cmp ecx, dword ptr [0x115d0e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b43b5 jl 0x115b43c5 */
  if ((C.sf!=C.of)) goto L_115b43c5;
  /* 115b43b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b43ba mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 115b43bd cmp eax, dword ptr [0x115d0e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b43c3 jle 0x115b43cc */
  if ((C.zf||C.sf!=C.of)) goto L_115b43cc;
L_115b43c5:;
  /* 115b43c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b43c7 jmp 0x115b4496 */
  goto L_115b4496;
L_115b43cc:;
  /* 115b43cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b43cf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 115b43d2 cmp edx, dword ptr [0x115d0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115d0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b43d8 jle 0x115b43f2 */
  if ((C.zf||C.sf!=C.of)) goto L_115b43f2;
  /* 115b43da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b43dd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 115b43e0 cmp ecx, dword ptr [0x115d0e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b43e6 jge 0x115b43f2 */
  if ((C.sf==C.of)) goto L_115b43f2;
  /* 115b43e8 mov eax, 1 */
  EAX = (0x1u);
  /* 115b43ed jmp 0x115b4496 */
  goto L_115b4496;
L_115b43f2:;
  /* 115b43f2 jmp 0x115b4437 */
  goto L_115b4437;
L_115b43f4:;
  /* 115b43f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b43f7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 115b43fa cmp eax, dword ptr [0x115d0e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4400 jl 0x115b4410 */
  if ((C.sf!=C.of)) goto L_115b4410;
  /* 115b4402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4405 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 115b4408 cmp edx, dword ptr [0x115d0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115d0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b440e jle 0x115b4417 */
  if ((C.zf||C.sf!=C.of)) goto L_115b4417;
L_115b4410:;
  /* 115b4410 mov eax, 1 */
  EAX = (0x1u);
  /* 115b4415 jmp 0x115b4496 */
  goto L_115b4496;
L_115b4417:;
  /* 115b4417 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b441a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 115b441d cmp ecx, dword ptr [0x115d0e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4423 jle 0x115b4437 */
  if ((C.zf||C.sf!=C.of)) goto L_115b4437;
  /* 115b4425 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4428 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 115b442b cmp eax, dword ptr [0x115d0e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4431 jge 0x115b4437 */
  if ((C.sf==C.of)) goto L_115b4437;
  /* 115b4433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4435 jmp 0x115b4496 */
  goto L_115b4496;
L_115b4437:;
  /* 115b4437 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b443a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115b443d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b4440 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4443 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b4445 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4447 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b444a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115b444d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b4453 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4455 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b445b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b445e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4461 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 115b4464 cmp edx, dword ptr [0x115d0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115d0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b446a jne 0x115b4482 */
  if (!C.zf) goto L_115b4482;
  /* 115b446c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b446f cmp eax, dword ptr [0x115d0e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d0e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4475 jl 0x115b447e */
  if ((C.sf!=C.of)) goto L_115b447e;
  /* 115b4477 mov eax, 1 */
  EAX = (0x1u);
  /* 115b447c jmp 0x115b4496 */
  goto L_115b4496;
L_115b447e:;
  /* 115b447e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4480 jmp 0x115b4496 */
  goto L_115b4496;
L_115b4482:;
  /* 115b4482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4485 cmp ecx, dword ptr [0x115d0e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d0e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b448b jge 0x115b4494 */
  if ((C.sf==C.of)) goto L_115b4494;
  /* 115b448d mov eax, 1 */
  EAX = (0x1u);
  /* 115b4492 jmp 0x115b4496 */
  goto L_115b4496;
L_115b4494:;
  /* 115b4494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b4496:;
  /* 115b4496 mov esp, ebp */
  ESP = (EBP);
  /* 115b4498 pop ebp */
  EBP = (pop32());
  /* 115b4499 ret  */
  ESPCHK(0x115b41a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100144a0 @ 0x115b44a0 (504 bytes, 145 insns) */
void f_115b44a0(void) {
  FTRACE(0x115b44a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b44a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b44a1 mov ebp, esp */
  EBP = (ESP);
  /* 115b44a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b44a6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b44aa jne 0x115b457c */
  if (!C.zf) goto L_115b457c;
  /* 115b44b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b44b3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115b44b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b44b8 jne 0x115b44c9 */
  if (!C.zf) goto L_115b44c9;
  /* 115b44ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b44bd mov edx, dword ptr [ecx*4 + 0x115d0e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115d0e4c)));
  /* 115b44c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115b44c7 jmp 0x115b44d6 */
  goto L_115b44d6;
L_115b44c9:;
  /* 115b44c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b44cc mov ecx, dword ptr [eax*4 + 0x115d0e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x115d0e80)));
  /* 115b44d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_115b44d6:;
  /* 115b44d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b44d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b44dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b44df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b44e2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b44e5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b44eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b44ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b44f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b44f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b44f6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 115b44f9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 115b44fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b44fe mov ecx, 7 */
  ECX = (0x7u);
  /* 115b4503 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115b4505 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115b4508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b450b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b450e jge 0x115b4529 */
  if ((C.sf==C.of)) goto L_115b4529;
  /* 115b4510 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115b4513 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b4516 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b4519 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b451c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b451f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4522 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4524 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b4527 jmp 0x115b453d */
  goto L_115b453d;
L_115b4529:;
  /* 115b4529 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115b452c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b452f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b4532 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b4535 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4538 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b453a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115b453d:;
  /* 115b453d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4541 jne 0x115b457a */
  if (!C.zf) goto L_115b457a;
  /* 115b4543 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b4546 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 115b4549 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b454b jne 0x115b455c */
  if (!C.zf) goto L_115b455c;
  /* 115b454d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b4550 mov eax, dword ptr [edx*4 + 0x115d0e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x115d0e50)));
  /* 115b4557 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115b455a jmp 0x115b4569 */
  goto L_115b4569;
L_115b455c:;
  /* 115b455c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b455f mov edx, dword ptr [ecx*4 + 0x115d0e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115d0e84)));
  /* 115b4566 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115b4569:;
  /* 115b4569 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b456c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b456f jle 0x115b457a */
  if ((C.zf||C.sf!=C.of)) goto L_115b457a;
  /* 115b4571 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b4574 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b4577 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115b457a:;
  /* 115b457a jmp 0x115b45b1 */
  goto L_115b45b1;
L_115b457c:;
  /* 115b457c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b457f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115b4582 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b4584 jne 0x115b4595 */
  if (!C.zf) goto L_115b4595;
  /* 115b4586 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b4589 mov ecx, dword ptr [eax*4 + 0x115d0e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x115d0e4c)));
  /* 115b4590 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115b4593 jmp 0x115b45a2 */
  goto L_115b45a2;
L_115b4595:;
  /* 115b4595 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b4598 mov eax, dword ptr [edx*4 + 0x115d0e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x115d0e80)));
  /* 115b459f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_115b45a2:;
  /* 115b45a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b45a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b45a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b45ab add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b45ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_115b45b1:;
  /* 115b45b1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b45b5 jne 0x115b45f1 */
  if (!C.zf) goto L_115b45f1;
  /* 115b45b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b45ba mov dword ptr [0x115d0e2c], eax */
  w32((uint32_t)(0x115d0e2c), (EAX));
  /* 115b45bf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 115b45c2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b45c5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 115b45c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b45ca imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b45cd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 115b45d0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b45d2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b45d8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 115b45db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b45dd mov dword ptr [0x115d0e30], ecx */
  w32((uint32_t)(0x115d0e30), (ECX));
  /* 115b45e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b45e6 mov dword ptr [0x115d0e28], edx */
  w32((uint32_t)(0x115d0e28), (EDX));
  /* 115b45ec jmp 0x115b4694 */
  goto L_115b4694;
L_115b45f1:;
  /* 115b45f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b45f4 mov dword ptr [0x115d0e3c], eax */
  w32((uint32_t)(0x115d0e3c), (EAX));
  /* 115b45f9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 115b45fc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b45ff mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 115b4602 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4604 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b4607 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 115b460a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b460c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b4612 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 115b4615 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4617 mov dword ptr [0x115d0e40], ecx */
  w32((uint32_t)(0x115d0e40), (ECX));
  /* 115b461d mov edx, dword ptr [0x115d0d98] */
  EDX = (r32((uint32_t)(0x115d0d98)));
  /* 115b4623 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b4629 mov eax, dword ptr [0x115d0e40] */
  EAX = (r32((uint32_t)(0x115d0e40)));
  /* 115b462e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4630 mov dword ptr [0x115d0e40], eax */
  w32((uint32_t)(0x115d0e40), (EAX));
  /* 115b4635 cmp dword ptr [0x115d0e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d0e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b463c jge 0x115b4661 */
  if ((C.sf==C.of)) goto L_115b4661;
  /* 115b463e mov ecx, dword ptr [0x115d0e40] */
  ECX = (r32((uint32_t)(0x115d0e40)));
  /* 115b4644 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b464a mov dword ptr [0x115d0e40], ecx */
  w32((uint32_t)(0x115d0e40), (ECX));
  /* 115b4650 mov edx, dword ptr [0x115d0e3c] */
  EDX = (r32((uint32_t)(0x115d0e3c)));
  /* 115b4656 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b4659 mov dword ptr [0x115d0e3c], edx */
  w32((uint32_t)(0x115d0e3c), (EDX));
  /* 115b465f jmp 0x115b468b */
  goto L_115b468b;
L_115b4661:;
  /* 115b4661 cmp dword ptr [0x115d0e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x115d0e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b466b jl 0x115b468b */
  if ((C.sf!=C.of)) goto L_115b468b;
  /* 115b466d mov eax, dword ptr [0x115d0e40] */
  EAX = (r32((uint32_t)(0x115d0e40)));
  /* 115b4672 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b4677 mov dword ptr [0x115d0e40], eax */
  w32((uint32_t)(0x115d0e40), (EAX));
  /* 115b467c mov ecx, dword ptr [0x115d0e3c] */
  ECX = (r32((uint32_t)(0x115d0e3c)));
  /* 115b4682 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4685 mov dword ptr [0x115d0e3c], ecx */
  w32((uint32_t)(0x115d0e3c), (ECX));
L_115b468b:;
  /* 115b468b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b468e mov dword ptr [0x115d0e38], edx */
  w32((uint32_t)(0x115d0e38), (EDX));
L_115b4694:;
  /* 115b4694 mov esp, ebp */
  ESP = (EBP);
  /* 115b4696 pop ebp */
  EBP = (pop32());
  /* 115b4697 ret  */
  ESPCHK(0x115b44a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100146a0 @ 0x115b46a0 (382 bytes, 135 insns) */
void f_115b46a0(void) {
  FTRACE(0x115b46a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b46a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b46a1 mov ebp, esp */
  EBP = (ESP);
  /* 115b46a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b46a5 push 0x115cdb20 */
  push32((uint32_t)(0x115cdb20u));
  /* 115b46aa push 0x115ae368 */
  push32((uint32_t)(0x115ae368u));
  /* 115b46af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115b46b5 push eax */
  push32((uint32_t)(EAX));
  /* 115b46b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115b46bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b46c0 push ebx */
  push32((uint32_t)(EBX));
  /* 115b46c1 push esi */
  push32((uint32_t)(ESI));
  /* 115b46c2 push edi */
  push32((uint32_t)(EDI));
  /* 115b46c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115b46c6 cmp dword ptr [0x115d197c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d197c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b46cd jne 0x115b4712 */
  if (!C.zf) goto L_115b4712;
  /* 115b46cf push 0 */
  push32((uint32_t)(0x0u));
  /* 115b46d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b46d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b46d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b46d7 call dword ptr [0x115d42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42dc))), 0x115b46ddu);
  /* 115b46dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b46df je 0x115b46ed */
  if (C.zf) goto L_115b46ed;
  /* 115b46e1 mov dword ptr [0x115d197c], 1 */
  w32((uint32_t)(0x115d197c), (0x1u));
  /* 115b46eb jmp 0x115b4712 */
  goto L_115b4712;
L_115b46ed:;
  /* 115b46ed push 0 */
  push32((uint32_t)(0x0u));
  /* 115b46ef push 0 */
  push32((uint32_t)(0x0u));
  /* 115b46f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b46f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b46f5 call dword ptr [0x115d42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42f4))), 0x115b46fbu);
  /* 115b46fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b46fd je 0x115b470b */
  if (C.zf) goto L_115b470b;
  /* 115b46ff mov dword ptr [0x115d197c], 2 */
  w32((uint32_t)(0x115d197c), (0x2u));
  /* 115b4709 jmp 0x115b4712 */
  goto L_115b4712;
L_115b470b:;
  /* 115b470b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b470d jmp 0x115b4821 */
  goto L_115b4821;
L_115b4712:;
  /* 115b4712 cmp dword ptr [0x115d197c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d197c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4719 jne 0x115b4736 */
  if (!C.zf) goto L_115b4736;
  /* 115b471b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b471e push eax */
  push32((uint32_t)(EAX));
  /* 115b471f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b4722 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4723 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b4726 push edx */
  push32((uint32_t)(EDX));
  /* 115b4727 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b472a push eax */
  push32((uint32_t)(EAX));
  /* 115b472b call dword ptr [0x115d42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42dc))), 0x115b4731u);
  /* 115b4731 jmp 0x115b4821 */
  goto L_115b4821;
L_115b4736:;
  /* 115b4736 cmp dword ptr [0x115d197c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115d197c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b473d jne 0x115b481f */
  if (!C.zf) goto L_115b481f;
  /* 115b4743 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4747 jne 0x115b4752 */
  if (!C.zf) goto L_115b4752;
  /* 115b4749 mov ecx, dword ptr [0x115d1830] */
  ECX = (r32((uint32_t)(0x115d1830)));
  /* 115b474f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_115b4752:;
  /* 115b4752 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4754 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4756 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b4759 push edx */
  push32((uint32_t)(EDX));
  /* 115b475a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b475d push eax */
  push32((uint32_t)(EAX));
  /* 115b475e call dword ptr [0x115d42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42f4))), 0x115b4764u);
  /* 115b4764 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115b4767 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b476b jne 0x115b4774 */
  if (!C.zf) goto L_115b4774;
  /* 115b476d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b476f jmp 0x115b4821 */
  goto L_115b4821;
L_115b4774:;
  /* 115b4774 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115b477b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b477e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4781 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115b4783 call 0x115a8400 */
  push32(0x115b4788u); f_115a8400();
  /* 115b4788 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 115b478b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115b478e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b4791 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 115b4794 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115b479b jmp 0x115b47b4 */
  goto L_115b47b4;
  /* 115b479d mov eax, 1 */
  EAX = (0x1u);
  /* 115b47a2 ret  */
  ESPCHK(0x115b46a0u, _esp0);
  ESP += 4; return;
  /* 115b47a3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115b47a6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 115b47ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115b47b4:;
  /* 115b47b4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b47b8 jne 0x115b47be */
  if (!C.zf) goto L_115b47be;
  /* 115b47ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b47bc jmp 0x115b4821 */
  goto L_115b4821;
L_115b47be:;
  /* 115b47be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b47c1 push edx */
  push32((uint32_t)(EDX));
  /* 115b47c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b47c5 push eax */
  push32((uint32_t)(EAX));
  /* 115b47c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b47c9 push ecx */
  push32((uint32_t)(ECX));
  /* 115b47ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b47cd push edx */
  push32((uint32_t)(EDX));
  /* 115b47ce call dword ptr [0x115d42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42f4))), 0x115b47d4u);
  /* 115b47d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b47d6 jne 0x115b47dc */
  if (!C.zf) goto L_115b47dc;
  /* 115b47d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b47da jmp 0x115b4821 */
  goto L_115b4821;
L_115b47dc:;
  /* 115b47dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b47e0 jne 0x115b47fd */
  if (!C.zf) goto L_115b47fd;
  /* 115b47e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b47e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b47e6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b47e8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b47eb push eax */
  push32((uint32_t)(EAX));
  /* 115b47ec push 1 */
  push32((uint32_t)(0x1u));
  /* 115b47ee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b47f1 push ecx */
  push32((uint32_t)(ECX));
  /* 115b47f2 call dword ptr [0x115d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4324))), 0x115b47f8u);
  /* 115b47f8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115b47fb jmp 0x115b481a */
  goto L_115b481a;
L_115b47fd:;
  /* 115b47fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b4800 push edx */
  push32((uint32_t)(EDX));
  /* 115b4801 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b4804 push eax */
  push32((uint32_t)(EAX));
  /* 115b4805 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b4807 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b480a push ecx */
  push32((uint32_t)(ECX));
  /* 115b480b push 1 */
  push32((uint32_t)(0x1u));
  /* 115b480d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b4810 push edx */
  push32((uint32_t)(EDX));
  /* 115b4811 call dword ptr [0x115d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4324))), 0x115b4817u);
  /* 115b4817 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_115b481a:;
  /* 115b481a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b481d jmp 0x115b4821 */
  goto L_115b4821;
L_115b481f:;
  /* 115b481f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b4821:;
  /* 115b4821 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 115b4824 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b4827 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115b482e pop edi */
  EDI = (pop32());
  /* 115b482f pop esi */
  ESI = (pop32());
  /* 115b4830 pop ebx */
  EBX = (pop32());
  /* 115b4831 mov esp, ebp */
  ESP = (EBP);
  /* 115b4833 pop ebp */
  EBP = (pop32());
  /* 115b4834 ret  */
  ESPCHK(0x115b46a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014840 @ 0x115b4840 (398 bytes, 140 insns) */
void f_115b4840(void) {
  FTRACE(0x115b4840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b4840 push ebp */
  push32((uint32_t)(EBP));
  /* 115b4841 mov ebp, esp */
  EBP = (ESP);
  /* 115b4843 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b4845 push 0x115cdb30 */
  push32((uint32_t)(0x115cdb30u));
  /* 115b484a push 0x115ae368 */
  push32((uint32_t)(0x115ae368u));
  /* 115b484f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115b4855 push eax */
  push32((uint32_t)(EAX));
  /* 115b4856 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115b485d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4860 push ebx */
  push32((uint32_t)(EBX));
  /* 115b4861 push esi */
  push32((uint32_t)(ESI));
  /* 115b4862 push edi */
  push32((uint32_t)(EDI));
  /* 115b4863 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115b4866 cmp dword ptr [0x115d1980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b486d jne 0x115b48b2 */
  if (!C.zf) goto L_115b48b2;
  /* 115b486f push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4871 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4873 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4875 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4877 call dword ptr [0x115d42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42dc))), 0x115b487du);
  /* 115b487d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b487f je 0x115b488d */
  if (C.zf) goto L_115b488d;
  /* 115b4881 mov dword ptr [0x115d1980], 1 */
  w32((uint32_t)(0x115d1980), (0x1u));
  /* 115b488b jmp 0x115b48b2 */
  goto L_115b48b2;
L_115b488d:;
  /* 115b488d push 0 */
  push32((uint32_t)(0x0u));
  /* 115b488f push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4891 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4893 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4895 call dword ptr [0x115d42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42f4))), 0x115b489bu);
  /* 115b489b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b489d je 0x115b48ab */
  if (C.zf) goto L_115b48ab;
  /* 115b489f mov dword ptr [0x115d1980], 2 */
  w32((uint32_t)(0x115d1980), (0x2u));
  /* 115b48a9 jmp 0x115b48b2 */
  goto L_115b48b2;
L_115b48ab:;
  /* 115b48ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b48ad jmp 0x115b49d1 */
  goto L_115b49d1;
L_115b48b2:;
  /* 115b48b2 cmp dword ptr [0x115d1980], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115d1980))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b48b9 jne 0x115b48d6 */
  if (!C.zf) goto L_115b48d6;
  /* 115b48bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b48be push eax */
  push32((uint32_t)(EAX));
  /* 115b48bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b48c2 push ecx */
  push32((uint32_t)(ECX));
  /* 115b48c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b48c6 push edx */
  push32((uint32_t)(EDX));
  /* 115b48c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b48ca push eax */
  push32((uint32_t)(EAX));
  /* 115b48cb call dword ptr [0x115d42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42f4))), 0x115b48d1u);
  /* 115b48d1 jmp 0x115b49d1 */
  goto L_115b49d1;
L_115b48d6:;
  /* 115b48d6 cmp dword ptr [0x115d1980], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1980))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b48dd jne 0x115b49cf */
  if (!C.zf) goto L_115b49cf;
  /* 115b48e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b48e7 jne 0x115b48f2 */
  if (!C.zf) goto L_115b48f2;
  /* 115b48e9 mov ecx, dword ptr [0x115d1830] */
  ECX = (r32((uint32_t)(0x115d1830)));
  /* 115b48ef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_115b48f2:;
  /* 115b48f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b48f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b48f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b48f9 push edx */
  push32((uint32_t)(EDX));
  /* 115b48fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b48fd push eax */
  push32((uint32_t)(EAX));
  /* 115b48fe call dword ptr [0x115d42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42dc))), 0x115b4904u);
  /* 115b4904 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115b4907 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b490b jne 0x115b4914 */
  if (!C.zf) goto L_115b4914;
  /* 115b490d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b490f jmp 0x115b49d1 */
  goto L_115b49d1;
L_115b4914:;
  /* 115b4914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115b491b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b491e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115b4920 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4923 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115b4925 call 0x115a8400 */
  push32(0x115b492au); f_115a8400();
  /* 115b492a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 115b492d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115b4930 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b4933 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 115b4936 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115b493d jmp 0x115b4956 */
  goto L_115b4956;
  /* 115b493f mov eax, 1 */
  EAX = (0x1u);
  /* 115b4944 ret  */
  ESPCHK(0x115b4840u, _esp0);
  ESP += 4; return;
  /* 115b4945 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115b4948 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 115b494f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115b4956:;
  /* 115b4956 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b495a jne 0x115b4960 */
  if (!C.zf) goto L_115b4960;
  /* 115b495c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b495e jmp 0x115b49d1 */
  goto L_115b49d1;
L_115b4960:;
  /* 115b4960 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b4963 push edx */
  push32((uint32_t)(EDX));
  /* 115b4964 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b4967 push eax */
  push32((uint32_t)(EAX));
  /* 115b4968 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b496b push ecx */
  push32((uint32_t)(ECX));
  /* 115b496c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b496f push edx */
  push32((uint32_t)(EDX));
  /* 115b4970 call dword ptr [0x115d42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42dc))), 0x115b4976u);
  /* 115b4976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b4978 jne 0x115b497e */
  if (!C.zf) goto L_115b497e;
  /* 115b497a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b497c jmp 0x115b49d1 */
  goto L_115b49d1;
L_115b497e:;
  /* 115b497e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4982 jne 0x115b49a6 */
  if (!C.zf) goto L_115b49a6;
  /* 115b4984 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4986 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4988 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b498a push 0 */
  push32((uint32_t)(0x0u));
  /* 115b498c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b498e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b4991 push eax */
  push32((uint32_t)(EAX));
  /* 115b4992 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115b4997 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b499a push ecx */
  push32((uint32_t)(ECX));
  /* 115b499b call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115b49a1u);
  /* 115b49a1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115b49a4 jmp 0x115b49ca */
  goto L_115b49ca;
L_115b49a6:;
  /* 115b49a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b49a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b49aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b49ad push edx */
  push32((uint32_t)(EDX));
  /* 115b49ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b49b1 push eax */
  push32((uint32_t)(EAX));
  /* 115b49b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b49b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b49b7 push ecx */
  push32((uint32_t)(ECX));
  /* 115b49b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115b49bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b49c0 push edx */
  push32((uint32_t)(EDX));
  /* 115b49c1 call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115b49c7u);
  /* 115b49c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_115b49ca:;
  /* 115b49ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b49cd jmp 0x115b49d1 */
  goto L_115b49d1;
L_115b49cf:;
  /* 115b49cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b49d1:;
  /* 115b49d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 115b49d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b49d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115b49de pop edi */
  EDI = (pop32());
  /* 115b49df pop esi */
  ESI = (pop32());
  /* 115b49e0 pop ebx */
  EBX = (pop32());
  /* 115b49e1 mov esp, ebp */
  ESP = (EBP);
  /* 115b49e3 pop ebp */
  EBP = (pop32());
  /* 115b49e4 ret  */
  ESPCHK(0x115b4840u, _esp0);
  ESP += 4; return;
}

/* FUN_100149f0 @ 0x115b49f0 (11 bytes, 6 insns) */
void f_115b49f0(void) {
  FTRACE(0x115b49f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b49f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b49f1 mov ebp, esp */
  EBP = (ESP);
  /* 115b49f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b49f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b49f9 pop ebp */
  EBP = (pop32());
  /* 115b49fa ret  */
  ESPCHK(0x115b49f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a00 @ 0x115b4a00 (147 bytes, 43 insns) */
void f_115b4a00(void) {
  FTRACE(0x115b4a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b4a00 push ebp */
  push32((uint32_t)(EBP));
  /* 115b4a01 mov ebp, esp */
  EBP = (ESP);
  /* 115b4a03 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4a04 cmp dword ptr [0x115d1820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4a0b jne 0x115b4a27 */
  if (!C.zf) goto L_115b4a27;
  /* 115b4a0d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4a11 jl 0x115b4a22 */
  if ((C.sf!=C.of)) goto L_115b4a22;
  /* 115b4a13 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4a17 jg 0x115b4a22 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b4a22;
  /* 115b4a19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4a1c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4a1f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_115b4a22:;
  /* 115b4a22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4a25 jmp 0x115b4a8f */
  goto L_115b4a8f;
L_115b4a27:;
  /* 115b4a27 push 0x115d19ac */
  push32((uint32_t)(0x115d19acu));
  /* 115b4a2c call dword ptr [0x115d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43ac))), 0x115b4a32u);
  /* 115b4a32 cmp dword ptr [0x115d199c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d199c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4a39 je 0x115b4a59 */
  if (C.zf) goto L_115b4a59;
  /* 115b4a3b push 0x115d19ac */
  push32((uint32_t)(0x115d19acu));
  /* 115b4a40 call dword ptr [0x115d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d439c))), 0x115b4a46u);
  /* 115b4a46 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115b4a48 call 0x115a8c60 */
  push32(0x115b4a4du); f_115a8c60();
  /* 115b4a4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4a50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115b4a57 jmp 0x115b4a60 */
  goto L_115b4a60;
L_115b4a59:;
  /* 115b4a59 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115b4a60:;
  /* 115b4a60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4a63 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4a64 call 0x115b4aa0 */
  push32(0x115b4a69u); f_115b4aa0();
  /* 115b4a69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4a6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b4a6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4a73 je 0x115b4a81 */
  if (C.zf) goto L_115b4a81;
  /* 115b4a75 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115b4a77 call 0x115a8d00 */
  push32(0x115b4a7cu); f_115a8d00();
  /* 115b4a7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4a7f jmp 0x115b4a8c */
  goto L_115b4a8c;
L_115b4a81:;
  /* 115b4a81 push 0x115d19ac */
  push32((uint32_t)(0x115d19acu));
  /* 115b4a86 call dword ptr [0x115d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d439c))), 0x115b4a8cu);
L_115b4a8c:;
  /* 115b4a8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_115b4a8f:;
  /* 115b4a8f mov esp, ebp */
  ESP = (EBP);
  /* 115b4a91 pop ebp */
  EBP = (pop32());
  /* 115b4a92 ret  */
  ESPCHK(0x115b4a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014aa0 @ 0x115b4aa0 (299 bytes, 91 insns) */
void f_115b4aa0(void) {
  FTRACE(0x115b4aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b4aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b4aa1 mov ebp, esp */
  EBP = (ESP);
  /* 115b4aa3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b4aa6 cmp dword ptr [0x115d1820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4aad jne 0x115b4acc */
  if (!C.zf) goto L_115b4acc;
  /* 115b4aaf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4ab3 jl 0x115b4ac4 */
  if ((C.sf!=C.of)) goto L_115b4ac4;
  /* 115b4ab5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4ab9 jg 0x115b4ac4 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b4ac4;
  /* 115b4abb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4abe add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4ac1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_115b4ac4:;
  /* 115b4ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4ac7 jmp 0x115b4bc7 */
  goto L_115b4bc7;
L_115b4acc:;
  /* 115b4acc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4ad3 jge 0x115b4b13 */
  if ((C.sf==C.of)) goto L_115b4b13;
  /* 115b4ad5 cmp dword ptr [0x115cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4adc jle 0x115b4af1 */
  if ((C.zf||C.sf!=C.of)) goto L_115b4af1;
  /* 115b4ade push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4ae0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4ae4 call 0x115ab270 */
  push32(0x115b4ae9u); f_115ab270();
  /* 115b4ae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4aec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115b4aef jmp 0x115b4b05 */
  goto L_115b4b05;
L_115b4af1:;
  /* 115b4af1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4af4 mov eax, dword ptr [0x115cfc98] */
  EAX = (r32((uint32_t)(0x115cfc98)));
  /* 115b4af9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b4afb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 115b4aff and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115b4b02 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_115b4b05:;
  /* 115b4b05 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4b09 jne 0x115b4b13 */
  if (!C.zf) goto L_115b4b13;
  /* 115b4b0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4b0e jmp 0x115b4bc7 */
  goto L_115b4bc7;
L_115b4b13:;
  /* 115b4b13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4b16 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 115b4b19 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115b4b1f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115b4b25 mov eax, dword ptr [0x115cfc98] */
  EAX = (r32((uint32_t)(0x115cfc98)));
  /* 115b4b2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b4b2c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 115b4b30 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 115b4b36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b4b38 je 0x115b4b5c */
  if (C.zf) goto L_115b4b5c;
  /* 115b4b3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4b3d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 115b4b40 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115b4b46 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 115b4b49 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 115b4b4c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 115b4b4f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 115b4b53 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 115b4b5a jmp 0x115b4b6d */
  goto L_115b4b6d;
L_115b4b5c:;
  /* 115b4b5c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 115b4b5f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 115b4b62 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 115b4b66 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_115b4b6d:;
  /* 115b4b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4b71 push 3 */
  push32((uint32_t)(0x3u));
  /* 115b4b73 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 115b4b76 push edx */
  push32((uint32_t)(EDX));
  /* 115b4b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4b7a push eax */
  push32((uint32_t)(EAX));
  /* 115b4b7b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 115b4b7e push ecx */
  push32((uint32_t)(ECX));
  /* 115b4b7f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115b4b84 mov edx, dword ptr [0x115d1820] */
  EDX = (r32((uint32_t)(0x115d1820)));
  /* 115b4b8a push edx */
  push32((uint32_t)(EDX));
  /* 115b4b8b call 0x115ad650 */
  push32(0x115b4b90u); f_115ad650();
  /* 115b4b90 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4b93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b4b96 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4b9a jne 0x115b4ba1 */
  if (!C.zf) goto L_115b4ba1;
  /* 115b4b9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4b9f jmp 0x115b4bc7 */
  goto L_115b4bc7;
L_115b4ba1:;
  /* 115b4ba1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4ba5 jne 0x115b4bb1 */
  if (!C.zf) goto L_115b4bb1;
  /* 115b4ba7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4baa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b4baf jmp 0x115b4bc7 */
  goto L_115b4bc7;
L_115b4bb1:;
  /* 115b4bb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4bb4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b4bb9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 115b4bbc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115b4bc2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 115b4bc5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_115b4bc7:;
  /* 115b4bc7 mov esp, ebp */
  ESP = (EBP);
  /* 115b4bc9 pop ebp */
  EBP = (pop32());
  /* 115b4bca ret  */
  ESPCHK(0x115b4aa0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x115b4bd0 (52 bytes, 19 insns) */
void f_115b4bd0(void) {
  FTRACE(0x115b4bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b4bd0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115b4bd4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 115b4bd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b4bda mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 115b4bde jne 0x115b4be9 */
  if (!C.zf) goto L_115b4be9;
  /* 115b4be0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115b4be4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115b4be6 ret 0x10 */
  ESPCHK(0x115b4bd0u, _esp0);
  ESP += 20; return;
L_115b4be9:;
  /* 115b4be9 push ebx */
  push32((uint32_t)(EBX));
  /* 115b4bea mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115b4bec mov ebx, eax */
  EBX = (EAX);
  /* 115b4bee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115b4bf2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115b4bf6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4bf8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115b4bfc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115b4bfe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4c00 pop ebx */
  EBX = (pop32());
  /* 115b4c01 ret 0x10 */
  ESPCHK(0x115b4bd0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014c10 @ 0x115b4c10 (46 bytes, 18 insns) */
void f_115b4c10(void) {
  FTRACE(0x115b4c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b4c10 push ebp */
  push32((uint32_t)(EBP));
  /* 115b4c11 mov ebp, esp */
  EBP = (ESP);
  /* 115b4c13 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4c14 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115b4c16 call 0x115a8c60 */
  push32(0x115b4c1bu); f_115a8c60();
  /* 115b4c1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4c1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4c21 push eax */
  push32((uint32_t)(EAX));
  /* 115b4c22 call 0x115b4c40 */
  push32(0x115b4c27u); f_115b4c40();
  /* 115b4c27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4c2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b4c2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 115b4c2f call 0x115a8d00 */
  push32(0x115b4c34u); f_115a8d00();
  /* 115b4c34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4c37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4c3a mov esp, ebp */
  ESP = (EBP);
  /* 115b4c3c pop ebp */
  EBP = (pop32());
  /* 115b4c3d ret  */
  ESPCHK(0x115b4c10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x115b4c40 (198 bytes, 69 insns) */
void f_115b4c40(void) {
  FTRACE(0x115b4c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b4c40 push ebp */
  push32((uint32_t)(EBP));
  /* 115b4c41 mov ebp, esp */
  EBP = (ESP);
  /* 115b4c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b4c46 mov eax, dword ptr [0x115d1640] */
  EAX = (r32((uint32_t)(0x115d1640)));
  /* 115b4c4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b4c4e cmp dword ptr [0x115d3140], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d3140))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4c55 jne 0x115b4c5e */
  if (!C.zf) goto L_115b4c5e;
  /* 115b4c57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4c59 jmp 0x115b4d02 */
  goto L_115b4d02;
L_115b4c5e:;
  /* 115b4c5e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4c62 jne 0x115b4c86 */
  if (!C.zf) goto L_115b4c86;
  /* 115b4c64 cmp dword ptr [0x115d1648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4c6b je 0x115b4c86 */
  if (C.zf) goto L_115b4c86;
  /* 115b4c6d call 0x115b4d60 */
  push32(0x115b4c72u); f_115b4d60();
  /* 115b4c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b4c74 je 0x115b4c7d */
  if (C.zf) goto L_115b4c7d;
  /* 115b4c76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4c78 jmp 0x115b4d02 */
  goto L_115b4d02;
L_115b4c7d:;
  /* 115b4c7d mov ecx, dword ptr [0x115d1640] */
  ECX = (r32((uint32_t)(0x115d1640)));
  /* 115b4c83 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115b4c86:;
  /* 115b4c86 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4c8a je 0x115b4d00 */
  if (C.zf) goto L_115b4d00;
  /* 115b4c8c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4c90 je 0x115b4d00 */
  if (C.zf) goto L_115b4d00;
  /* 115b4c92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4c95 push edx */
  push32((uint32_t)(EDX));
  /* 115b4c96 call 0x115a8090 */
  push32(0x115b4c9bu); f_115a8090();
  /* 115b4c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4c9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115b4ca1:;
  /* 115b4ca1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b4ca4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4ca7 je 0x115b4d00 */
  if (C.zf) goto L_115b4d00;
  /* 115b4ca9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b4cac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b4cae push edx */
  push32((uint32_t)(EDX));
  /* 115b4caf call 0x115a8090 */
  push32(0x115b4cb4u); f_115a8090();
  /* 115b4cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4cb7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4cba jbe 0x115b4cf5 */
  if ((C.cf||C.zf)) goto L_115b4cf5;
  /* 115b4cbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b4cbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b4cc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4cc4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 115b4cc8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4ccb jne 0x115b4cf5 */
  if (!C.zf) goto L_115b4cf5;
  /* 115b4ccd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4cd0 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4cd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4cd4 push edx */
  push32((uint32_t)(EDX));
  /* 115b4cd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b4cd8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b4cda push ecx */
  push32((uint32_t)(ECX));
  /* 115b4cdb call 0x115b4d10 */
  push32(0x115b4ce0u); f_115b4d10();
  /* 115b4ce0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b4ce5 jne 0x115b4cf5 */
  if (!C.zf) goto L_115b4cf5;
  /* 115b4ce7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b4cea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b4cec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4cef lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 115b4cf3 jmp 0x115b4d02 */
  goto L_115b4d02;
L_115b4cf5:;
  /* 115b4cf5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b4cf8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4cfb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b4cfe jmp 0x115b4ca1 */
  goto L_115b4ca1;
L_115b4d00:;
  /* 115b4d00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b4d02:;
  /* 115b4d02 mov esp, ebp */
  ESP = (EBP);
  /* 115b4d04 pop ebp */
  EBP = (pop32());
  /* 115b4d05 ret  */
  ESPCHK(0x115b4c40u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x115b4d10 (79 bytes, 32 insns) */
void f_115b4d10(void) {
  FTRACE(0x115b4d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b4d10 push ebp */
  push32((uint32_t)(EBP));
  /* 115b4d11 mov ebp, esp */
  EBP = (ESP);
  /* 115b4d13 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4d14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4d18 jne 0x115b4d1e */
  if (!C.zf) goto L_115b4d1e;
  /* 115b4d1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4d1c jmp 0x115b4d5b */
  goto L_115b4d5b;
L_115b4d1e:;
  /* 115b4d1e mov eax, dword ptr [0x115d2d04] */
  EAX = (r32((uint32_t)(0x115d2d04)));
  /* 115b4d23 push eax */
  push32((uint32_t)(EAX));
  /* 115b4d24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b4d27 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4d28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b4d2b push edx */
  push32((uint32_t)(EDX));
  /* 115b4d2c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b4d2f push eax */
  push32((uint32_t)(EAX));
  /* 115b4d30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4d33 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4d34 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4d36 mov edx, dword ptr [0x115d2fa4] */
  EDX = (r32((uint32_t)(0x115d2fa4)));
  /* 115b4d3c push edx */
  push32((uint32_t)(EDX));
  /* 115b4d3d call 0x115b4e10 */
  push32(0x115b4d42u); f_115b4e10();
  /* 115b4d42 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4d45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b4d48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4d4c jne 0x115b4d55 */
  if (!C.zf) goto L_115b4d55;
  /* 115b4d4e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 115b4d53 jmp 0x115b4d5b */
  goto L_115b4d5b;
L_115b4d55:;
  /* 115b4d55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4d58 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_115b4d5b:;
  /* 115b4d5b mov esp, ebp */
  ESP = (EBP);
  /* 115b4d5d pop ebp */
  EBP = (pop32());
  /* 115b4d5e ret  */
  ESPCHK(0x115b4d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d60 @ 0x115b4d60 (174 bytes, 66 insns) */
void f_115b4d60(void) {
  FTRACE(0x115b4d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b4d60 push ebp */
  push32((uint32_t)(EBP));
  /* 115b4d61 mov ebp, esp */
  EBP = (ESP);
  /* 115b4d63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b4d66 mov eax, dword ptr [0x115d1648] */
  EAX = (r32((uint32_t)(0x115d1648)));
  /* 115b4d6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115b4d6e:;
  /* 115b4d6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4d71 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4d74 je 0x115b4e08 */
  if (C.zf) goto L_115b4e08;
  /* 115b4d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4d82 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b4d84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4d87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b4d89 push eax */
  push32((uint32_t)(EAX));
  /* 115b4d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4d8c push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4d8e call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115b4d94u);
  /* 115b4d94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b4d97 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4d9b jne 0x115b4da2 */
  if (!C.zf) goto L_115b4da2;
  /* 115b4d9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b4da0 jmp 0x115b4e0a */
  goto L_115b4e0a;
L_115b4da2:;
  /* 115b4da2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 115b4da4 push 0x115cdb3c */
  push32((uint32_t)(0x115cdb3cu));
  /* 115b4da9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b4dab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4dae push ecx */
  push32((uint32_t)(ECX));
  /* 115b4daf call 0x115a5260 */
  push32(0x115b4db4u); f_115a5260();
  /* 115b4db4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4db7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b4dba cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4dbe jne 0x115b4dc5 */
  if (!C.zf) goto L_115b4dc5;
  /* 115b4dc0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b4dc3 jmp 0x115b4e0a */
  goto L_115b4e0a;
L_115b4dc5:;
  /* 115b4dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4dc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b4dcc push edx */
  push32((uint32_t)(EDX));
  /* 115b4dcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b4dd0 push eax */
  push32((uint32_t)(EAX));
  /* 115b4dd1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b4dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4dd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b4dd8 push edx */
  push32((uint32_t)(EDX));
  /* 115b4dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4ddb push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4ddd call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115b4de3u);
  /* 115b4de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b4de5 jne 0x115b4dec */
  if (!C.zf) goto L_115b4dec;
  /* 115b4de7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b4dea jmp 0x115b4e0a */
  goto L_115b4e0a;
L_115b4dec:;
  /* 115b4dec push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4dee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b4df1 push eax */
  push32((uint32_t)(EAX));
  /* 115b4df2 call 0x115b5260 */
  push32(0x115b4df7u); f_115b5260();
  /* 115b4df7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4dfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b4dfd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4e00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b4e03 jmp 0x115b4d6e */
  goto L_115b4d6e;
L_115b4e08:;
  /* 115b4e08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b4e0a:;
  /* 115b4e0a mov esp, ebp */
  ESP = (EBP);
  /* 115b4e0c pop ebp */
  EBP = (pop32());
  /* 115b4e0d ret  */
  ESPCHK(0x115b4d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e10 @ 0x115b4e10 (970 bytes, 340 insns) */
void f_115b4e10(void) {
  FTRACE(0x115b4e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b4e10 push ebp */
  push32((uint32_t)(EBP));
  /* 115b4e11 mov ebp, esp */
  EBP = (ESP);
  /* 115b4e13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115b4e15 push 0x115cdb90 */
  push32((uint32_t)(0x115cdb90u));
  /* 115b4e1a push 0x115ae368 */
  push32((uint32_t)(0x115ae368u));
  /* 115b4e1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115b4e25 push eax */
  push32((uint32_t)(EAX));
  /* 115b4e26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115b4e2d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4e30 push ebx */
  push32((uint32_t)(EBX));
  /* 115b4e31 push esi */
  push32((uint32_t)(ESI));
  /* 115b4e32 push edi */
  push32((uint32_t)(EDI));
  /* 115b4e33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115b4e36 cmp dword ptr [0x115d1984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4e3d jne 0x115b4e96 */
  if (!C.zf) goto L_115b4e96;
  /* 115b4e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4e41 push 0x115cd1ec */
  push32((uint32_t)(0x115cd1ecu));
  /* 115b4e46 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4e48 push 0x115cd1ec */
  push32((uint32_t)(0x115cd1ecu));
  /* 115b4e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4e51 call dword ptr [0x115d42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42d8))), 0x115b4e57u);
  /* 115b4e57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b4e59 je 0x115b4e67 */
  if (C.zf) goto L_115b4e67;
  /* 115b4e5b mov dword ptr [0x115d1984], 1 */
  w32((uint32_t)(0x115d1984), (0x1u));
  /* 115b4e65 jmp 0x115b4e96 */
  goto L_115b4e96;
L_115b4e67:;
  /* 115b4e67 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4e69 push 0x115cd1e8 */
  push32((uint32_t)(0x115cd1e8u));
  /* 115b4e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 115b4e70 push 0x115cd1e8 */
  push32((uint32_t)(0x115cd1e8u));
  /* 115b4e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4e79 call dword ptr [0x115d42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42e4))), 0x115b4e7fu);
  /* 115b4e7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b4e81 je 0x115b4e8f */
  if (C.zf) goto L_115b4e8f;
  /* 115b4e83 mov dword ptr [0x115d1984], 2 */
  w32((uint32_t)(0x115d1984), (0x2u));
  /* 115b4e8d jmp 0x115b4e96 */
  goto L_115b4e96;
L_115b4e8f:;
  /* 115b4e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4e91 jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b4e96:;
  /* 115b4e96 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4e9a jle 0x115b4eaf */
  if ((C.zf||C.sf!=C.of)) goto L_115b4eaf;
  /* 115b4e9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b4e9f push eax */
  push32((uint32_t)(EAX));
  /* 115b4ea0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b4ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4ea4 call 0x115b5210 */
  push32(0x115b4ea9u); f_115b5210();
  /* 115b4ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4eac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_115b4eaf:;
  /* 115b4eaf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4eb3 jle 0x115b4ec8 */
  if ((C.zf||C.sf!=C.of)) goto L_115b4ec8;
  /* 115b4eb5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115b4eb8 push edx */
  push32((uint32_t)(EDX));
  /* 115b4eb9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b4ebc push eax */
  push32((uint32_t)(EAX));
  /* 115b4ebd call 0x115b5210 */
  push32(0x115b4ec2u); f_115b5210();
  /* 115b4ec2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4ec5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_115b4ec8:;
  /* 115b4ec8 cmp dword ptr [0x115d1984], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115d1984))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4ecf jne 0x115b4ef4 */
  if (!C.zf) goto L_115b4ef4;
  /* 115b4ed1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115b4ed4 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4ed5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b4ed8 push edx */
  push32((uint32_t)(EDX));
  /* 115b4ed9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b4edc push eax */
  push32((uint32_t)(EAX));
  /* 115b4edd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b4ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4ee1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b4ee4 push edx */
  push32((uint32_t)(EDX));
  /* 115b4ee5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b4ee8 push eax */
  push32((uint32_t)(EAX));
  /* 115b4ee9 call dword ptr [0x115d42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42e4))), 0x115b4eefu);
  /* 115b4eef jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b4ef4:;
  /* 115b4ef4 cmp dword ptr [0x115d1984], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1984))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4efb jne 0x115b51f2 */
  if (!C.zf) goto L_115b51f2;
  /* 115b4f01 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4f05 jne 0x115b4f10 */
  if (!C.zf) goto L_115b4f10;
  /* 115b4f07 mov ecx, dword ptr [0x115d1830] */
  ECX = (r32((uint32_t)(0x115d1830)));
  /* 115b4f0d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_115b4f10:;
  /* 115b4f10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4f14 je 0x115b4f20 */
  if (C.zf) goto L_115b4f20;
  /* 115b4f16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4f1a jne 0x115b509c */
  if (!C.zf) goto L_115b509c;
L_115b4f20:;
  /* 115b4f20 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b4f23 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4f26 jne 0x115b4f32 */
  if (!C.zf) goto L_115b4f32;
  /* 115b4f28 mov eax, 2 */
  EAX = (0x2u);
  /* 115b4f2d jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b4f32:;
  /* 115b4f32 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4f36 jle 0x115b4f42 */
  if ((C.zf||C.sf!=C.of)) goto L_115b4f42;
  /* 115b4f38 mov eax, 1 */
  EAX = (0x1u);
  /* 115b4f3d jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b4f42:;
  /* 115b4f42 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4f46 jle 0x115b4f52 */
  if ((C.zf||C.sf!=C.of)) goto L_115b4f52;
  /* 115b4f48 mov eax, 3 */
  EAX = (0x3u);
  /* 115b4f4d jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b4f52:;
  /* 115b4f52 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 115b4f55 push eax */
  push32((uint32_t)(EAX));
  /* 115b4f56 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 115b4f59 push ecx */
  push32((uint32_t)(ECX));
  /* 115b4f5a call dword ptr [0x115d4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4330))), 0x115b4f60u);
  /* 115b4f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b4f62 jne 0x115b4f6b */
  if (!C.zf) goto L_115b4f6b;
  /* 115b4f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4f66 jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b4f6b:;
  /* 115b4f6b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4f6f jne 0x115b4f77 */
  if (!C.zf) goto L_115b4f77;
  /* 115b4f71 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4f75 je 0x115b4fa4 */
  if (C.zf) goto L_115b4fa4;
L_115b4f77:;
  /* 115b4f77 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4f7b jne 0x115b4f83 */
  if (!C.zf) goto L_115b4f83;
  /* 115b4f7d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4f81 je 0x115b4fa4 */
  if (C.zf) goto L_115b4fa4;
L_115b4f83:;
  /* 115b4f83 push 0x115cdb50 */
  push32((uint32_t)(0x115cdb50u));
  /* 115b4f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b4f8a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 115b4f8f push 0x115cdb48 */
  push32((uint32_t)(0x115cdb48u));
  /* 115b4f94 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b4f96 call 0x115a4320 */
  push32(0x115b4f9bu); f_115a4320();
  /* 115b4f9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4f9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4fa1 jne 0x115b4fa4 */
  if (!C.zf) goto L_115b4fa4;
  /* 115b4fa3 int3  */
  x86_unimpl("int3 @ 0x115b4fa3");
L_115b4fa4:;
  /* 115b4fa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b4fa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b4fa8 jne 0x115b4f6b */
  if (!C.zf) goto L_115b4f6b;
  /* 115b4faa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4fae jle 0x115b5023 */
  if ((C.zf||C.sf!=C.of)) goto L_115b5023;
  /* 115b4fb0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4fb4 jae 0x115b4fc0 */
  if (!C.cf) goto L_115b4fc0;
  /* 115b4fb6 mov eax, 3 */
  EAX = (0x3u);
  /* 115b4fbb jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b4fc0:;
  /* 115b4fc0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 115b4fc3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 115b4fc6 jmp 0x115b4fd1 */
  goto L_115b4fd1;
L_115b4fc8:;
  /* 115b4fc8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 115b4fcb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b4fce mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_115b4fd1:;
  /* 115b4fd1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 115b4fd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4fd6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b4fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b4fda je 0x115b5019 */
  if (C.zf) goto L_115b5019;
  /* 115b4fdc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 115b4fdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b4fe1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 115b4fe4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b4fe6 je 0x115b5019 */
  if (C.zf) goto L_115b5019;
  /* 115b4fe8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b4feb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b4fed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b4fef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 115b4ff2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b4ff4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b4ff6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b4ff8 jl 0x115b5017 */
  if ((C.sf!=C.of)) goto L_115b5017;
  /* 115b4ffa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b4ffd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b4fff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b5001 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 115b5004 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b5006 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 115b5009 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b500b jg 0x115b5017 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b5017;
  /* 115b500d mov eax, 2 */
  EAX = (0x2u);
  /* 115b5012 jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b5017:;
  /* 115b5017 jmp 0x115b4fc8 */
  goto L_115b4fc8;
L_115b5019:;
  /* 115b5019 mov eax, 3 */
  EAX = (0x3u);
  /* 115b501e jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b5023:;
  /* 115b5023 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5027 jle 0x115b509c */
  if ((C.zf||C.sf!=C.of)) goto L_115b509c;
  /* 115b5029 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b502d jae 0x115b5039 */
  if (!C.cf) goto L_115b5039;
  /* 115b502f mov eax, 1 */
  EAX = (0x1u);
  /* 115b5034 jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b5039:;
  /* 115b5039 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 115b503c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 115b503f jmp 0x115b504a */
  goto L_115b504a;
L_115b5041:;
  /* 115b5041 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 115b5044 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5047 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_115b504a:;
  /* 115b504a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 115b504d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b504f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b5051 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b5053 je 0x115b5092 */
  if (C.zf) goto L_115b5092;
  /* 115b5055 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 115b5058 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b505a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 115b505d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b505f je 0x115b5092 */
  if (C.zf) goto L_115b5092;
  /* 115b5061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b5064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b5066 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b5068 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 115b506b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b506d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b506f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5071 jl 0x115b5090 */
  if ((C.sf!=C.of)) goto L_115b5090;
  /* 115b5073 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b5076 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b5078 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b507a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 115b507d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b507f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 115b5082 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5084 jg 0x115b5090 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b5090;
  /* 115b5086 mov eax, 2 */
  EAX = (0x2u);
  /* 115b508b jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b5090:;
  /* 115b5090 jmp 0x115b5041 */
  goto L_115b5041;
L_115b5092:;
  /* 115b5092 mov eax, 1 */
  EAX = (0x1u);
  /* 115b5097 jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b509c:;
  /* 115b509c push 0 */
  push32((uint32_t)(0x0u));
  /* 115b509e push 0 */
  push32((uint32_t)(0x0u));
  /* 115b50a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b50a3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b50a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b50a7 push edx */
  push32((uint32_t)(EDX));
  /* 115b50a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 115b50aa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 115b50ad push eax */
  push32((uint32_t)(EAX));
  /* 115b50ae call dword ptr [0x115d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4324))), 0x115b50b4u);
  /* 115b50b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115b50b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b50bb jne 0x115b50c4 */
  if (!C.zf) goto L_115b50c4;
  /* 115b50bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b50bf jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b50c4:;
  /* 115b50c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115b50cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b50ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115b50d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b50d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115b50d5 call 0x115a8400 */
  push32(0x115b50dau); f_115a8400();
  /* 115b50da mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 115b50dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115b50e0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 115b50e3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 115b50e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115b50ed jmp 0x115b5106 */
  goto L_115b5106;
  /* 115b50ef mov eax, 1 */
  EAX = (0x1u);
  /* 115b50f4 ret  */
  ESPCHK(0x115b4e10u, _esp0);
  ESP += 4; return;
  /* 115b50f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115b50f8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 115b50ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115b5106:;
  /* 115b5106 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b510a jne 0x115b5113 */
  if (!C.zf) goto L_115b5113;
  /* 115b510c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b510e jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b5113:;
  /* 115b5113 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b5116 push edx */
  push32((uint32_t)(EDX));
  /* 115b5117 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b511a push eax */
  push32((uint32_t)(EAX));
  /* 115b511b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b511e push ecx */
  push32((uint32_t)(ECX));
  /* 115b511f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b5122 push edx */
  push32((uint32_t)(EDX));
  /* 115b5123 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b5125 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 115b5128 push eax */
  push32((uint32_t)(EAX));
  /* 115b5129 call dword ptr [0x115d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4324))), 0x115b512fu);
  /* 115b512f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b5131 jne 0x115b513a */
  if (!C.zf) goto L_115b513a;
  /* 115b5133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b5135 jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b513a:;
  /* 115b513a push 0 */
  push32((uint32_t)(0x0u));
  /* 115b513c push 0 */
  push32((uint32_t)(0x0u));
  /* 115b513e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115b5141 push ecx */
  push32((uint32_t)(ECX));
  /* 115b5142 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b5145 push edx */
  push32((uint32_t)(EDX));
  /* 115b5146 push 9 */
  push32((uint32_t)(0x9u));
  /* 115b5148 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 115b514b push eax */
  push32((uint32_t)(EAX));
  /* 115b514c call dword ptr [0x115d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4324))), 0x115b5152u);
  /* 115b5152 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115b5155 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5159 jne 0x115b5162 */
  if (!C.zf) goto L_115b5162;
  /* 115b515b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b515d jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b5162:;
  /* 115b5162 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115b5169 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b516c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115b516e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5171 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115b5173 call 0x115a8400 */
  push32(0x115b5178u); f_115a8400();
  /* 115b5178 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 115b517b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115b517e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 115b5181 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 115b5184 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115b518b jmp 0x115b51a4 */
  goto L_115b51a4;
  /* 115b518d mov eax, 1 */
  EAX = (0x1u);
  /* 115b5192 ret  */
  ESPCHK(0x115b4e10u, _esp0);
  ESP += 4; return;
  /* 115b5193 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115b5196 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 115b519d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115b51a4:;
  /* 115b51a4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b51a8 jne 0x115b51ae */
  if (!C.zf) goto L_115b51ae;
  /* 115b51aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b51ac jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b51ae:;
  /* 115b51ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b51b1 push edx */
  push32((uint32_t)(EDX));
  /* 115b51b2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b51b5 push eax */
  push32((uint32_t)(EAX));
  /* 115b51b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115b51b9 push ecx */
  push32((uint32_t)(ECX));
  /* 115b51ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115b51bd push edx */
  push32((uint32_t)(EDX));
  /* 115b51be push 1 */
  push32((uint32_t)(0x1u));
  /* 115b51c0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 115b51c3 push eax */
  push32((uint32_t)(EAX));
  /* 115b51c4 call dword ptr [0x115d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4324))), 0x115b51cau);
  /* 115b51ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b51cc jne 0x115b51d2 */
  if (!C.zf) goto L_115b51d2;
  /* 115b51ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b51d0 jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b51d2:;
  /* 115b51d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b51d5 push ecx */
  push32((uint32_t)(ECX));
  /* 115b51d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b51d9 push edx */
  push32((uint32_t)(EDX));
  /* 115b51da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b51dd push eax */
  push32((uint32_t)(EAX));
  /* 115b51de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b51e1 push ecx */
  push32((uint32_t)(ECX));
  /* 115b51e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b51e5 push edx */
  push32((uint32_t)(EDX));
  /* 115b51e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b51e9 push eax */
  push32((uint32_t)(EAX));
  /* 115b51ea call dword ptr [0x115d42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42d8))), 0x115b51f0u);
  /* 115b51f0 jmp 0x115b51f4 */
  goto L_115b51f4;
L_115b51f2:;
  /* 115b51f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b51f4:;
  /* 115b51f4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 115b51f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b51fa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115b5201 pop edi */
  EDI = (pop32());
  /* 115b5202 pop esi */
  ESI = (pop32());
  /* 115b5203 pop ebx */
  EBX = (pop32());
  /* 115b5204 mov esp, ebp */
  ESP = (EBP);
  /* 115b5206 pop ebp */
  EBP = (pop32());
  /* 115b5207 ret  */
  ESPCHK(0x115b4e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015210 @ 0x115b5210 (80 bytes, 32 insns) */
void f_115b5210(void) {
  FTRACE(0x115b5210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b5210 push ebp */
  push32((uint32_t)(EBP));
  /* 115b5211 mov ebp, esp */
  EBP = (ESP);
  /* 115b5213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b5216 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b5219 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b521c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b521f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115b5222:;
  /* 115b5222 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b5225 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b5228 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b522b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b522e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b5230 je 0x115b5247 */
  if (C.zf) goto L_115b5247;
  /* 115b5232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b5235 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b5238 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b523a je 0x115b5247 */
  if (C.zf) goto L_115b5247;
  /* 115b523c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b523f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5242 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b5245 jmp 0x115b5222 */
  goto L_115b5222;
L_115b5247:;
  /* 115b5247 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b524a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b524d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b524f jne 0x115b5259 */
  if (!C.zf) goto L_115b5259;
  /* 115b5251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b5254 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b5257 jmp 0x115b525c */
  goto L_115b525c;
L_115b5259:;
  /* 115b5259 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_115b525c:;
  /* 115b525c mov esp, ebp */
  ESP = (EBP);
  /* 115b525e pop ebp */
  EBP = (pop32());
  /* 115b525f ret  */
  ESPCHK(0x115b5210u, _esp0);
  ESP += 4; return;
}

/* FUN_10015260 @ 0x115b5260 (736 bytes, 224 insns) */
void f_115b5260(void) {
  FTRACE(0x115b5260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b5260 push ebp */
  push32((uint32_t)(EBP));
  /* 115b5261 mov ebp, esp */
  EBP = (ESP);
  /* 115b5263 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b5266 push esi */
  push32((uint32_t)(ESI));
  /* 115b5267 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b526b je 0x115b528c */
  if (C.zf) goto L_115b528c;
  /* 115b526d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 115b526f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b5272 push eax */
  push32((uint32_t)(EAX));
  /* 115b5273 call 0x115b56b0 */
  push32(0x115b5278u); f_115b56b0();
  /* 115b5278 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b527b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115b527e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5282 je 0x115b528c */
  if (C.zf) goto L_115b528c;
  /* 115b5284 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b5287 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b528a jne 0x115b5294 */
  if (!C.zf) goto L_115b5294;
L_115b528c:;
  /* 115b528c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b528f jmp 0x115b553b */
  goto L_115b553b;
L_115b5294:;
  /* 115b5294 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b5297 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 115b529b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b529d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b529f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115b52a0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115b52a3 mov ecx, dword ptr [0x115d1640] */
  ECX = (r32((uint32_t)(0x115d1640)));
  /* 115b52a9 cmp ecx, dword ptr [0x115d1644] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d1644))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b52af jne 0x115b52c5 */
  if (!C.zf) goto L_115b52c5;
  /* 115b52b1 mov edx, dword ptr [0x115d1640] */
  EDX = (r32((uint32_t)(0x115d1640)));
  /* 115b52b7 push edx */
  push32((uint32_t)(EDX));
  /* 115b52b8 call 0x115b55c0 */
  push32(0x115b52bdu); f_115b55c0();
  /* 115b52bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b52c0 mov dword ptr [0x115d1640], eax */
  w32((uint32_t)(0x115d1640), (EAX));
L_115b52c5:;
  /* 115b52c5 cmp dword ptr [0x115d1640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b52cc jne 0x115b5385 */
  if (!C.zf) goto L_115b5385;
  /* 115b52d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b52d6 je 0x115b52f7 */
  if (C.zf) goto L_115b52f7;
  /* 115b52d8 cmp dword ptr [0x115d1648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b52df je 0x115b52f7 */
  if (C.zf) goto L_115b52f7;
  /* 115b52e1 call 0x115b4d60 */
  push32(0x115b52e6u); f_115b4d60();
  /* 115b52e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b52e8 je 0x115b52f2 */
  if (C.zf) goto L_115b52f2;
  /* 115b52ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b52ed jmp 0x115b553b */
  goto L_115b553b;
L_115b52f2:;
  /* 115b52f2 jmp 0x115b5385 */
  goto L_115b5385;
L_115b52f7:;
  /* 115b52f7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b52fb je 0x115b5304 */
  if (C.zf) goto L_115b5304;
  /* 115b52fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b52ff jmp 0x115b553b */
  goto L_115b553b;
L_115b5304:;
  /* 115b5304 cmp dword ptr [0x115d1640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b530b jne 0x115b5344 */
  if (!C.zf) goto L_115b5344;
  /* 115b530d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 115b5312 push 0x115cdba8 */
  push32((uint32_t)(0x115cdba8u));
  /* 115b5317 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b5319 push 4 */
  push32((uint32_t)(0x4u));
  /* 115b531b call 0x115a5260 */
  push32(0x115b5320u); f_115a5260();
  /* 115b5320 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5323 mov dword ptr [0x115d1640], eax */
  w32((uint32_t)(0x115d1640), (EAX));
  /* 115b5328 cmp dword ptr [0x115d1640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b532f jne 0x115b5339 */
  if (!C.zf) goto L_115b5339;
  /* 115b5331 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b5334 jmp 0x115b553b */
  goto L_115b553b;
L_115b5339:;
  /* 115b5339 mov eax, dword ptr [0x115d1640] */
  EAX = (r32((uint32_t)(0x115d1640)));
  /* 115b533e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_115b5344:;
  /* 115b5344 cmp dword ptr [0x115d1648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b534b jne 0x115b5385 */
  if (!C.zf) goto L_115b5385;
  /* 115b534d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 115b5352 push 0x115cdba8 */
  push32((uint32_t)(0x115cdba8u));
  /* 115b5357 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b5359 push 4 */
  push32((uint32_t)(0x4u));
  /* 115b535b call 0x115a5260 */
  push32(0x115b5360u); f_115a5260();
  /* 115b5360 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5363 mov dword ptr [0x115d1648], eax */
  w32((uint32_t)(0x115d1648), (EAX));
  /* 115b5368 cmp dword ptr [0x115d1648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b536f jne 0x115b5379 */
  if (!C.zf) goto L_115b5379;
  /* 115b5371 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b5374 jmp 0x115b553b */
  goto L_115b553b;
L_115b5379:;
  /* 115b5379 mov ecx, dword ptr [0x115d1648] */
  ECX = (r32((uint32_t)(0x115d1648)));
  /* 115b537f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_115b5385:;
  /* 115b5385 mov edx, dword ptr [0x115d1640] */
  EDX = (r32((uint32_t)(0x115d1640)));
  /* 115b538b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115b538e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b5391 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b5394 push eax */
  push32((uint32_t)(EAX));
  /* 115b5395 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b5398 push ecx */
  push32((uint32_t)(ECX));
  /* 115b5399 call 0x115b5540 */
  push32(0x115b539eu); f_115b5540();
  /* 115b539e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b53a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b53a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b53a8 jl 0x115b5441 */
  if ((C.sf!=C.of)) goto L_115b5441;
  /* 115b53ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b53b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b53b4 je 0x115b5441 */
  if (C.zf) goto L_115b5441;
  /* 115b53ba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b53be je 0x115b5433 */
  if (C.zf) goto L_115b5433;
  /* 115b53c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b53c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b53c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b53c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 115b53cb push edx */
  push32((uint32_t)(EDX));
  /* 115b53cc call 0x115a5cf0 */
  push32(0x115b53d1u); f_115a5cf0();
  /* 115b53d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b53d4 jmp 0x115b53df */
  goto L_115b53df;
L_115b53d6:;
  /* 115b53d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b53d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b53dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115b53df:;
  /* 115b53df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b53e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b53e5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b53e9 je 0x115b5400 */
  if (C.zf) goto L_115b5400;
  /* 115b53eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b53ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b53f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b53f4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 115b53f7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 115b53fb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 115b53fe jmp 0x115b53d6 */
  goto L_115b53d6;
L_115b5400:;
  /* 115b5400 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 115b5405 push 0x115cdba8 */
  push32((uint32_t)(0x115cdba8u));
  /* 115b540a push 2 */
  push32((uint32_t)(0x2u));
  /* 115b540c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b540f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 115b5412 push eax */
  push32((uint32_t)(EAX));
  /* 115b5413 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b5416 push ecx */
  push32((uint32_t)(ECX));
  /* 115b5417 call 0x115a56f0 */
  push32(0x115b541cu); f_115a56f0();
  /* 115b541c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b541f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b5422 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5426 je 0x115b5431 */
  if (C.zf) goto L_115b5431;
  /* 115b5428 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b542b mov dword ptr [0x115d1640], edx */
  w32((uint32_t)(0x115d1640), (EDX));
L_115b5431:;
  /* 115b5431 jmp 0x115b543f */
  goto L_115b543f;
L_115b5433:;
  /* 115b5433 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b5436 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b5439 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b543c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_115b543f:;
  /* 115b543f jmp 0x115b54b4 */
  goto L_115b54b4;
L_115b5441:;
  /* 115b5441 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5445 jne 0x115b54ad */
  if (!C.zf) goto L_115b54ad;
  /* 115b5447 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b544b jge 0x115b5455 */
  if ((C.sf==C.of)) goto L_115b5455;
  /* 115b544d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b5450 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b5452 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115b5455:;
  /* 115b5455 push 0xce */
  push32((uint32_t)(0xceu));
  /* 115b545a push 0x115cdba8 */
  push32((uint32_t)(0x115cdba8u));
  /* 115b545f push 2 */
  push32((uint32_t)(0x2u));
  /* 115b5461 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b5464 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 115b546b push edx */
  push32((uint32_t)(EDX));
  /* 115b546c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b546f push eax */
  push32((uint32_t)(EAX));
  /* 115b5470 call 0x115a56f0 */
  push32(0x115b5475u); f_115a56f0();
  /* 115b5475 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5478 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b547b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b547f jne 0x115b5489 */
  if (!C.zf) goto L_115b5489;
  /* 115b5481 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b5484 jmp 0x115b553b */
  goto L_115b553b;
L_115b5489:;
  /* 115b5489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b548c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b548f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b5492 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 115b5495 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b5498 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b549b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 115b54a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b54a6 mov dword ptr [0x115d1640], eax */
  w32((uint32_t)(0x115d1640), (EAX));
  /* 115b54ab jmp 0x115b54b4 */
  goto L_115b54b4;
L_115b54ad:;
  /* 115b54ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b54af jmp 0x115b553b */
  goto L_115b553b;
L_115b54b4:;
  /* 115b54b4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b54b8 je 0x115b5539 */
  if (C.zf) goto L_115b5539;
  /* 115b54ba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 115b54bf push 0x115cdba8 */
  push32((uint32_t)(0x115cdba8u));
  /* 115b54c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b54c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b54c9 push ecx */
  push32((uint32_t)(ECX));
  /* 115b54ca call 0x115a8090 */
  push32(0x115b54cfu); f_115a8090();
  /* 115b54cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b54d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b54d5 push eax */
  push32((uint32_t)(EAX));
  /* 115b54d6 call 0x115a5260 */
  push32(0x115b54dbu); f_115a5260();
  /* 115b54db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b54de mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115b54e1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b54e5 je 0x115b5539 */
  if (C.zf) goto L_115b5539;
  /* 115b54e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b54ea push edx */
  push32((uint32_t)(EDX));
  /* 115b54eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b54ee push eax */
  push32((uint32_t)(EAX));
  /* 115b54ef call 0x115a8210 */
  push32(0x115b54f4u); f_115a8210();
  /* 115b54f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b54f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b54fa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b54fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b5500 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5502 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115b5505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b5508 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 115b550b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b550e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5511 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b5514 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b5517 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b5519 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b551b not edx */
  EDX = (~(EDX));
  /* 115b551d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 115b5520 push edx */
  push32((uint32_t)(EDX));
  /* 115b5521 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b5524 push eax */
  push32((uint32_t)(EAX));
  /* 115b5525 call dword ptr [0x115d42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42d4))), 0x115b552bu);
  /* 115b552b push 2 */
  push32((uint32_t)(0x2u));
  /* 115b552d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b5530 push ecx */
  push32((uint32_t)(ECX));
  /* 115b5531 call 0x115a5cf0 */
  push32(0x115b5536u); f_115a5cf0();
  /* 115b5536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b5539:;
  /* 115b5539 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b553b:;
  /* 115b553b pop esi */
  ESI = (pop32());
  /* 115b553c mov esp, ebp */
  ESP = (EBP);
  /* 115b553e pop ebp */
  EBP = (pop32());
  /* 115b553f ret  */
  ESPCHK(0x115b5260u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x115b5540 (124 bytes, 47 insns) */
void f_115b5540(void) {
  FTRACE(0x115b5540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b5540 push ebp */
  push32((uint32_t)(EBP));
  /* 115b5541 mov ebp, esp */
  EBP = (ESP);
  /* 115b5543 push ecx */
  push32((uint32_t)(ECX));
  /* 115b5544 mov eax, dword ptr [0x115d1640] */
  EAX = (r32((uint32_t)(0x115d1640)));
  /* 115b5549 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b554c jmp 0x115b5557 */
  goto L_115b5557;
L_115b554e:;
  /* 115b554e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b5551 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5554 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115b5557:;
  /* 115b5557 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b555a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b555d je 0x115b55aa */
  if (C.zf) goto L_115b55aa;
  /* 115b555f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b5562 push eax */
  push32((uint32_t)(EAX));
  /* 115b5563 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b5566 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b5568 push edx */
  push32((uint32_t)(EDX));
  /* 115b5569 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b556c push eax */
  push32((uint32_t)(EAX));
  /* 115b556d call 0x115b4d10 */
  push32(0x115b5572u); f_115b4d10();
  /* 115b5572 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b5577 jne 0x115b55a8 */
  if (!C.zf) goto L_115b55a8;
  /* 115b5579 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b557c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b557e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b5581 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 115b5585 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5588 je 0x115b559a */
  if (C.zf) goto L_115b559a;
  /* 115b558a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b558d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b558f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b5592 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 115b5596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b5598 jne 0x115b55a8 */
  if (!C.zf) goto L_115b55a8;
L_115b559a:;
  /* 115b559a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b559d sub eax, dword ptr [0x115d1640] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d1640))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b55a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 115b55a6 jmp 0x115b55b8 */
  goto L_115b55b8;
L_115b55a8:;
  /* 115b55a8 jmp 0x115b554e */
  goto L_115b554e;
L_115b55aa:;
  /* 115b55aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b55ad sub eax, dword ptr [0x115d1640] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d1640))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b55b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 115b55b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_115b55b8:;
  /* 115b55b8 mov esp, ebp */
  ESP = (EBP);
  /* 115b55ba pop ebp */
  EBP = (pop32());
  /* 115b55bb ret  */
  ESPCHK(0x115b5540u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x115b55c0 (238 bytes, 80 insns) */
void f_115b55c0(void) {
  FTRACE(0x115b55c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b55c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b55c1 mov ebp, esp */
  EBP = (ESP);
  /* 115b55c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b55c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115b55cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b55d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b55d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b55d7 jne 0x115b55e0 */
  if (!C.zf) goto L_115b55e0;
  /* 115b55d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b55db jmp 0x115b56aa */
  goto L_115b56aa;
L_115b55e0:;
  /* 115b55e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b55e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b55e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b55e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b55eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b55ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b55f0 je 0x115b55fd */
  if (C.zf) goto L_115b55fd;
  /* 115b55f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b55f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b55f8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115b55fb jmp 0x115b55e0 */
  goto L_115b55e0;
L_115b55fd:;
  /* 115b55fd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 115b5602 push 0x115cdba8 */
  push32((uint32_t)(0x115cdba8u));
  /* 115b5607 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b5609 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b560c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 115b5613 push eax */
  push32((uint32_t)(EAX));
  /* 115b5614 call 0x115a5260 */
  push32(0x115b5619u); f_115a5260();
  /* 115b5619 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b561c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b561f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b5622 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b5625 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5629 jne 0x115b5635 */
  if (!C.zf) goto L_115b5635;
  /* 115b562b push 9 */
  push32((uint32_t)(0x9u));
  /* 115b562d call 0x115a41d0 */
  push32(0x115b5632u); f_115a41d0();
  /* 115b5632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b5635:;
  /* 115b5635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b5638 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_115b563b:;
  /* 115b563b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b563e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5641 je 0x115b569e */
  if (C.zf) goto L_115b569e;
  /* 115b5643 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 115b5648 push 0x115cdba8 */
  push32((uint32_t)(0x115cdba8u));
  /* 115b564d push 2 */
  push32((uint32_t)(0x2u));
  /* 115b564f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b5652 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b5654 push edx */
  push32((uint32_t)(EDX));
  /* 115b5655 call 0x115a8090 */
  push32(0x115b565au); f_115a8090();
  /* 115b565a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b565d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5660 push eax */
  push32((uint32_t)(EAX));
  /* 115b5661 call 0x115a5260 */
  push32(0x115b5666u); f_115a5260();
  /* 115b5666 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5669 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b566c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115b566e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b5671 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5674 je 0x115b568a */
  if (C.zf) goto L_115b568a;
  /* 115b5676 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b5679 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b567b push ecx */
  push32((uint32_t)(ECX));
  /* 115b567c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b567f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b5681 push eax */
  push32((uint32_t)(EAX));
  /* 115b5682 call 0x115a8210 */
  push32(0x115b5687u); f_115a8210();
  /* 115b5687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b568a:;
  /* 115b568a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b568d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5690 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b5693 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b5696 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5699 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b569c jmp 0x115b563b */
  goto L_115b563b;
L_115b569e:;
  /* 115b569e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b56a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115b56a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115b56aa:;
  /* 115b56aa mov esp, ebp */
  ESP = (EBP);
  /* 115b56ac pop ebp */
  EBP = (pop32());
  /* 115b56ad ret  */
  ESPCHK(0x115b55c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100156b0 @ 0x115b56b0 (237 bytes, 81 insns) */
void f_115b56b0(void) {
  FTRACE(0x115b56b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b56b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b56b1 mov ebp, esp */
  EBP = (ESP);
  /* 115b56b3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b56b4 cmp dword ptr [0x115d2d8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d2d8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b56bb jne 0x115b56d2 */
  if (!C.zf) goto L_115b56d2;
  /* 115b56bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b56c0 push eax */
  push32((uint32_t)(EAX));
  /* 115b56c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b56c4 push ecx */
  push32((uint32_t)(ECX));
  /* 115b56c5 call 0x115b57b0 */
  push32(0x115b56cau); f_115b57b0();
  /* 115b56ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b56cd jmp 0x115b5799 */
  goto L_115b5799;
L_115b56d2:;
  /* 115b56d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115b56d4 call 0x115a8c60 */
  push32(0x115b56d9u); f_115a8c60();
  /* 115b56d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b56dc jmp 0x115b56e7 */
  goto L_115b56e7;
L_115b56de:;
  /* 115b56de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b56e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b56e4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_115b56e7:;
  /* 115b56e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b56ea movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 115b56ee mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 115b56f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b56f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115b56fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b56fd je 0x115b577b */
  if (C.zf) goto L_115b577b;
  /* 115b56ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b5702 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b5707 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b5709 mov cl, byte ptr [eax + 0x115d2ea1] */
  CL = (r8((uint32_t)(EAX + 0x115d2ea1)));
  /* 115b570f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 115b5712 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b5714 je 0x115b5766 */
  if (C.zf) goto L_115b5766;
  /* 115b5716 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b5719 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b571c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115b571f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b5722 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b5724 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b5726 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b5728 jne 0x115b5738 */
  if (!C.zf) goto L_115b5738;
  /* 115b572a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115b572c call 0x115a8d00 */
  push32(0x115b5731u); f_115a8d00();
  /* 115b5731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b5736 jmp 0x115b5799 */
  goto L_115b5799;
L_115b5738:;
  /* 115b5738 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b573b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115b5741 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 115b5744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b5747 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b5749 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b574b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115b574d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5750 jne 0x115b5764 */
  if (!C.zf) goto L_115b5764;
  /* 115b5752 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115b5754 call 0x115a8d00 */
  push32(0x115b5759u); f_115a8d00();
  /* 115b5759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b575c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b575f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b5762 jmp 0x115b5799 */
  goto L_115b5799;
L_115b5764:;
  /* 115b5764 jmp 0x115b5776 */
  goto L_115b5776;
L_115b5766:;
  /* 115b5766 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b5769 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115b576f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5772 jne 0x115b5776 */
  if (!C.zf) goto L_115b5776;
  /* 115b5774 jmp 0x115b577b */
  goto L_115b577b;
L_115b5776:;
  /* 115b5776 jmp 0x115b56de */
  goto L_115b56de;
L_115b577b:;
  /* 115b577b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115b577d call 0x115a8d00 */
  push32(0x115b5782u); f_115a8d00();
  /* 115b5782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5785 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b5788 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b578d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b5790 jne 0x115b5797 */
  if (!C.zf) goto L_115b5797;
  /* 115b5792 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b5795 jmp 0x115b5799 */
  goto L_115b5799;
L_115b5797:;
  /* 115b5797 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b5799:;
  /* 115b5799 mov esp, ebp */
  ESP = (EBP);
  /* 115b579b pop ebp */
  EBP = (pop32());
  /* 115b579c ret  */
  ESPCHK(0x115b56b0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x115b57b0 (193 bytes, 87 insns) */
void f_115b57b0(void) {
  FTRACE(0x115b57b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b57b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b57b2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 115b57b6 push ebx */
  push32((uint32_t)(EBX));
  /* 115b57b7 mov ebx, eax */
  EBX = (EAX);
  /* 115b57b9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 115b57bc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 115b57c0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 115b57c6 je 0x115b57db */
  if (C.zf) goto L_115b57db;
L_115b57c8:;
  /* 115b57c8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 115b57ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115b57cb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b57cd je 0x115b57a0 */
  if (C.zf) { jmp_ind(0x115b57a0u); return; }
  /* 115b57cf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 115b57d1 je 0x115b5824 */
  if (C.zf) goto L_115b5824;
  /* 115b57d3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 115b57d9 jne 0x115b57c8 */
  if (!C.zf) goto L_115b57c8;
L_115b57db:;
  /* 115b57db or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 115b57dd push edi */
  push32((uint32_t)(EDI));
  /* 115b57de mov eax, ebx */
  EAX = (EBX);
  /* 115b57e0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 115b57e3 push esi */
  push32((uint32_t)(ESI));
  /* 115b57e4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_115b57e6:;
  /* 115b57e6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 115b57e8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 115b57ed mov eax, ecx */
  EAX = (ECX);
  /* 115b57ef mov esi, edi */
  ESI = (EDI);
  /* 115b57f1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 115b57f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115b57f5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115b57f7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115b57fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b57fd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 115b57ff xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 115b5801 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b5804 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 115b580a jne 0x115b5828 */
  if (!C.zf) goto L_115b5828;
  /* 115b580c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 115b5811 je 0x115b57e6 */
  if (C.zf) goto L_115b57e6;
  /* 115b5813 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 115b5818 jne 0x115b5822 */
  if (!C.zf) goto L_115b5822;
  /* 115b581a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 115b5820 jne 0x115b57e6 */
  if (!C.zf) goto L_115b57e6;
L_115b5822:;
  /* 115b5822 pop esi */
  ESI = (pop32());
  /* 115b5823 pop edi */
  EDI = (pop32());
L_115b5824:;
  /* 115b5824 pop ebx */
  EBX = (pop32());
  /* 115b5825 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b5827 ret  */
  ESPCHK(0x115b57b0u, _esp0);
  ESP += 4; return;
L_115b5828:;
  /* 115b5828 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 115b582b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b582d je 0x115b5865 */
  if (C.zf) goto L_115b5865;
  /* 115b582f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115b5831 je 0x115b5822 */
  if (C.zf) goto L_115b5822;
  /* 115b5833 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b5835 je 0x115b585e */
  if (C.zf) goto L_115b585e;
  /* 115b5837 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 115b5839 je 0x115b5822 */
  if (C.zf) goto L_115b5822;
  /* 115b583b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 115b583e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b5840 je 0x115b5857 */
  if (C.zf) goto L_115b5857;
  /* 115b5842 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115b5844 je 0x115b5822 */
  if (C.zf) goto L_115b5822;
  /* 115b5846 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b5848 je 0x115b5850 */
  if (C.zf) goto L_115b5850;
  /* 115b584a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 115b584c je 0x115b5822 */
  if (C.zf) goto L_115b5822;
  /* 115b584e jmp 0x115b57e6 */
  goto L_115b57e6;
L_115b5850:;
  /* 115b5850 pop esi */
  ESI = (pop32());
  /* 115b5851 pop edi */
  EDI = (pop32());
  /* 115b5852 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 115b5855 pop ebx */
  EBX = (pop32());
  /* 115b5856 ret  */
  ESPCHK(0x115b57b0u, _esp0);
  ESP += 4; return;
L_115b5857:;
  /* 115b5857 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 115b585a pop esi */
  ESI = (pop32());
  /* 115b585b pop edi */
  EDI = (pop32());
  /* 115b585c pop ebx */
  EBX = (pop32());
  /* 115b585d ret  */
  ESPCHK(0x115b57b0u, _esp0);
  ESP += 4; return;
L_115b585e:;
  /* 115b585e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 115b5861 pop esi */
  ESI = (pop32());
  /* 115b5862 pop edi */
  EDI = (pop32());
  /* 115b5863 pop ebx */
  EBX = (pop32());
  /* 115b5864 ret  */
  ESPCHK(0x115b57b0u, _esp0);
  ESP += 4; return;
L_115b5865:;
  /* 115b5865 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 115b5868 pop esi */
  ESI = (pop32());
  /* 115b5869 pop edi */
  EDI = (pop32());
  /* 115b586a pop ebx */
  EBX = (pop32());
  /* 115b586b ret  */
  ESPCHK(0x115b57b0u, _esp0);
  ESP += 4; return;
  /* 115b586c jmp dword ptr [0x115d4388] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x115d4388)))); return;
}

/* RtlUnwind @ 0x115b59bc (6 bytes, 1 insns) */
void f_115b59bc(void) {
  FTRACE(0x115b59bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b59bc jmp dword ptr [0x115d430c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x115d430c)))); return;
}

