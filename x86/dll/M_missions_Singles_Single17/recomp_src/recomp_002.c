#include "recomp.h"

/* FUN_100126f0 @ 0x111b26f0 (393 bytes, 123 insns) */
void f_111b26f0(void) {
  FTRACE(0x111b26f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b26f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b26f1 mov ebp, esp */
  EBP = (ESP);
  /* 111b26f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b26f6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b26fa jne 0x111b2706 */
  if (!C.zf) goto L_111b2706;
  /* 111b26fc mov eax, dword ptr [0x111d0c98] */
  EAX = (r32((uint32_t)(0x111d0c98)));
  /* 111b2701 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111b2704 jmp 0x111b270c */
  goto L_111b270c;
L_111b2706:;
  /* 111b2706 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2709 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111b270c:;
  /* 111b270c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b270f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111b2712 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2715 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b2718 push 0x111d19ec */
  push32((uint32_t)(0x111d19ecu));
  /* 111b271d call dword ptr [0x111d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d439c))), 0x111b2723u);
  /* 111b2723 cmp dword ptr [0x111d19dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b272a je 0x111b274a */
  if (C.zf) goto L_111b274a;
  /* 111b272c push 0x111d19ec */
  push32((uint32_t)(0x111d19ecu));
  /* 111b2731 call dword ptr [0x111d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d438c))), 0x111b2737u);
  /* 111b2737 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111b2739 call 0x111a8db0 */
  push32(0x111b273eu); f_111a8db0();
  /* 111b273e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2741 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 111b2748 jmp 0x111b2751 */
  goto L_111b2751;
L_111b274a:;
  /* 111b274a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_111b2751:;
  /* 111b2751 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2755 jbe 0x111b2842 */
  if ((C.cf||C.zf)) goto L_111b2842;
  /* 111b275b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b275e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b2760 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 111b2763 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b2767 je 0x111b2771 */
  if (C.zf) goto L_111b2771;
  /* 111b2769 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b276d je 0x111b2776 */
  if (C.zf) goto L_111b2776;
  /* 111b276f jmp 0x111b27d0 */
  goto L_111b27d0;
L_111b2771:;
  /* 111b2771 jmp 0x111b2842 */
  goto L_111b2842;
L_111b2776:;
  /* 111b2776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2779 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b277c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 111b277f mov dword ptr [0x111d19c8], 0 */
  w32((uint32_t)(0x111d19c8), (0x0u));
  /* 111b2789 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b278c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b278f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2792 jne 0x111b27a7 */
  if (!C.zf) goto L_111b27a7;
  /* 111b2794 mov dword ptr [0x111d19c8], 1 */
  w32((uint32_t)(0x111d19c8), (0x1u));
  /* 111b279e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b27a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b27a4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_111b27a7:;
  /* 111b27a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b27aa push ecx */
  push32((uint32_t)(ECX));
  /* 111b27ab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 111b27ae push edx */
  push32((uint32_t)(EDX));
  /* 111b27af lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 111b27b2 push eax */
  push32((uint32_t)(EAX));
  /* 111b27b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b27b6 push ecx */
  push32((uint32_t)(ECX));
  /* 111b27b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b27ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b27bc push eax */
  push32((uint32_t)(EAX));
  /* 111b27bd call 0x111b2880 */
  push32(0x111b27c2u); f_111b2880();
  /* 111b27c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b27c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b27c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b27cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 111b27ce jmp 0x111b283d */
  goto L_111b283d;
L_111b27d0:;
  /* 111b27d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b27d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b27d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b27d7 mov ecx, dword ptr [0x111cfc98] */
  ECX = (r32((uint32_t)(0x111cfc98)));
  /* 111b27dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b27df mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 111b27e3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 111b27e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b27eb je 0x111b2818 */
  if (C.zf) goto L_111b2818;
  /* 111b27ed cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b27f1 jbe 0x111b2818 */
  if ((C.cf||C.zf)) goto L_111b2818;
  /* 111b27f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b27f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b27f9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b27fb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111b27fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2800 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2803 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b2806 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2809 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b280c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 111b280f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2812 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2815 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111b2818:;
  /* 111b2818 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b281b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b281e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b2820 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111b2822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2825 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2828 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b282b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b282e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2831 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 111b2834 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2837 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b283a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111b283d:;
  /* 111b283d jmp 0x111b2751 */
  goto L_111b2751;
L_111b2842:;
  /* 111b2842 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2846 je 0x111b2854 */
  if (C.zf) goto L_111b2854;
  /* 111b2848 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111b284a call 0x111a8e50 */
  push32(0x111b284fu); f_111a8e50();
  /* 111b284f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2852 jmp 0x111b285f */
  goto L_111b285f;
L_111b2854:;
  /* 111b2854 push 0x111d19ec */
  push32((uint32_t)(0x111d19ecu));
  /* 111b2859 call dword ptr [0x111d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d438c))), 0x111b285fu);
L_111b285f:;
  /* 111b285f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2863 jbe 0x111b2873 */
  if ((C.cf||C.zf)) goto L_111b2873;
  /* 111b2865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2868 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111b286b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b286e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2871 jmp 0x111b2875 */
  goto L_111b2875;
L_111b2873:;
  /* 111b2873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b2875:;
  /* 111b2875 mov esp, ebp */
  ESP = (EBP);
  /* 111b2877 pop ebp */
  EBP = (pop32());
  /* 111b2878 ret  */
  ESPCHK(0x111b26f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012880 @ 0x111b2880 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_111b2880(void) {
  FTRACE(0x111b2880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b2880 push ebp */
  push32((uint32_t)(EBP));
  /* 111b2881 mov ebp, esp */
  EBP = (ESP);
  /* 111b2883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2886 push esi */
  push32((uint32_t)(ESI));
  /* 111b2887 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 111b288b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b288e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b2891 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2894 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b2897 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b289b ja 0x111b2de8 */
  if ((!C.cf&&!C.zf)) goto L_111b2de8;
  /* 111b28a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b28a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b28a6 mov dl, byte ptr [eax + 0x111b2e49] */
  DL = (r8((uint32_t)(EAX + 0x111b2e49)));
  /* 111b28ac jmp dword ptr [edx*4 + 0x111b2ded] */
  switch (EDX) {
    case 0: goto L_111b2dc6;
    case 1: goto L_111b28d5;
    case 2: goto L_111b291b;
    case 3: goto L_111b2a68;
    case 4: goto L_111b2a90;
    case 5: goto L_111b2b2f;
    case 6: goto L_111b2b9b;
    case 7: goto L_111b2bc4;
    case 8: goto L_111b2c05;
    case 9: goto L_111b2ce7;
    case 10: goto L_111b2d4e;
    case 11: goto L_111b2d9b;
    case 12: goto L_111b28b3;
    case 13: goto L_111b28f8;
    case 14: goto L_111b293e;
    case 15: goto L_111b2a3e;
    case 16: goto L_111b2ad5;
    case 17: goto L_111b2b02;
    case 18: goto L_111b2b57;
    case 19: goto L_111b2bdb;
    case 20: goto L_111b2c89;
    case 21: goto L_111b2d18;
    case 22: goto L_111b2de8;
    default: x86_unimpl("switch@0x111b28ac out of table"); return;
  }
L_111b28b3:;
  /* 111b28b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b28b6 push ecx */
  push32((uint32_t)(ECX));
  /* 111b28b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b28ba push edx */
  push32((uint32_t)(EDX));
  /* 111b28bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b28be mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 111b28c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b28c4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 111b28c7 push eax */
  push32((uint32_t)(EAX));
  /* 111b28c8 call 0x111b2ea0 */
  push32(0x111b28cdu); f_111b2ea0();
  /* 111b28cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b28d0 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b28d5:;
  /* 111b28d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b28d8 push ecx */
  push32((uint32_t)(ECX));
  /* 111b28d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b28dc push edx */
  push32((uint32_t)(EDX));
  /* 111b28dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b28e0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 111b28e3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b28e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 111b28ea push eax */
  push32((uint32_t)(EAX));
  /* 111b28eb call 0x111b2ea0 */
  push32(0x111b28f0u); f_111b2ea0();
  /* 111b28f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b28f3 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b28f8:;
  /* 111b28f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b28fb push ecx */
  push32((uint32_t)(ECX));
  /* 111b28fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b28ff push edx */
  push32((uint32_t)(EDX));
  /* 111b2900 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2903 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111b2906 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2909 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 111b290d push eax */
  push32((uint32_t)(EAX));
  /* 111b290e call 0x111b2ea0 */
  push32(0x111b2913u); f_111b2ea0();
  /* 111b2913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2916 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b291b:;
  /* 111b291b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b291e push ecx */
  push32((uint32_t)(ECX));
  /* 111b291f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2922 push edx */
  push32((uint32_t)(EDX));
  /* 111b2923 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2926 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111b2929 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b292c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 111b2930 push eax */
  push32((uint32_t)(EAX));
  /* 111b2931 call 0x111b2ea0 */
  push32(0x111b2936u); f_111b2ea0();
  /* 111b2936 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2939 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b293e:;
  /* 111b293e cmp dword ptr [0x111d19c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2945 je 0x111b29c6 */
  if (C.zf) goto L_111b29c6;
  /* 111b2947 mov dword ptr [0x111d19c8], 0 */
  w32((uint32_t)(0x111d19c8), (0x0u));
  /* 111b2951 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2954 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2955 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2958 push edx */
  push32((uint32_t)(EDX));
  /* 111b2959 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b295c push eax */
  push32((uint32_t)(EAX));
  /* 111b295d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2960 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2961 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2964 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 111b296a push eax */
  push32((uint32_t)(EAX));
  /* 111b296b call 0x111b3050 */
  push32(0x111b2970u); f_111b3050();
  /* 111b2970 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2973 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2976 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2979 jne 0x111b2980 */
  if (!C.zf) goto L_111b2980;
  /* 111b297b jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2980:;
  /* 111b2980 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2983 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b2985 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 111b2988 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b298b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b298d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2990 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2993 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111b2995 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2998 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b299a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b299d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b29a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111b29a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b29a5 push ecx */
  push32((uint32_t)(ECX));
  /* 111b29a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b29a9 push edx */
  push32((uint32_t)(EDX));
  /* 111b29aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b29ad push eax */
  push32((uint32_t)(EAX));
  /* 111b29ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b29b1 push ecx */
  push32((uint32_t)(ECX));
  /* 111b29b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b29b5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 111b29bb push eax */
  push32((uint32_t)(EAX));
  /* 111b29bc call 0x111b3050 */
  push32(0x111b29c1u); f_111b3050();
  /* 111b29c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b29c4 jmp 0x111b2a39 */
  goto L_111b2a39;
L_111b29c6:;
  /* 111b29c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b29c9 push ecx */
  push32((uint32_t)(ECX));
  /* 111b29ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b29cd push edx */
  push32((uint32_t)(EDX));
  /* 111b29ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b29d1 push eax */
  push32((uint32_t)(EAX));
  /* 111b29d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b29d5 push ecx */
  push32((uint32_t)(ECX));
  /* 111b29d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b29d9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 111b29df push eax */
  push32((uint32_t)(EAX));
  /* 111b29e0 call 0x111b3050 */
  push32(0x111b29e5u); f_111b3050();
  /* 111b29e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b29e8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b29eb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b29ee jne 0x111b29f5 */
  if (!C.zf) goto L_111b29f5;
  /* 111b29f0 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b29f5:;
  /* 111b29f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b29f8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b29fa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 111b29fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2a00 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b2a02 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2a05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2a08 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111b2a0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2a0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b2a0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2a12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2a15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111b2a17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2a1a push ecx */
  push32((uint32_t)(ECX));
  /* 111b2a1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2a1e push edx */
  push32((uint32_t)(EDX));
  /* 111b2a1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2a22 push eax */
  push32((uint32_t)(EAX));
  /* 111b2a23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2a26 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2a27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2a2a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 111b2a30 push eax */
  push32((uint32_t)(EAX));
  /* 111b2a31 call 0x111b3050 */
  push32(0x111b2a36u); f_111b3050();
  /* 111b2a36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b2a39:;
  /* 111b2a39 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2a3e:;
  /* 111b2a3e mov ecx, dword ptr [0x111d19c8] */
  ECX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2a44 mov dword ptr [0x111d19d8], ecx */
  w32((uint32_t)(0x111d19d8), (ECX));
  /* 111b2a4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2a4d push edx */
  push32((uint32_t)(EDX));
  /* 111b2a4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2a51 push eax */
  push32((uint32_t)(EAX));
  /* 111b2a52 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b2a54 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2a57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111b2a5a push edx */
  push32((uint32_t)(EDX));
  /* 111b2a5b call 0x111b2ef0 */
  push32(0x111b2a60u); f_111b2ef0();
  /* 111b2a60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2a63 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2a68:;
  /* 111b2a68 mov eax, dword ptr [0x111d19c8] */
  EAX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2a6d mov dword ptr [0x111d19d8], eax */
  w32((uint32_t)(0x111d19d8), (EAX));
  /* 111b2a72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2a75 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2a76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2a79 push edx */
  push32((uint32_t)(EDX));
  /* 111b2a7a push 2 */
  push32((uint32_t)(0x2u));
  /* 111b2a7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2a7f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111b2a82 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2a83 call 0x111b2ef0 */
  push32(0x111b2a88u); f_111b2ef0();
  /* 111b2a88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2a8b jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2a90:;
  /* 111b2a90 mov edx, dword ptr [0x111d19c8] */
  EDX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2a96 mov dword ptr [0x111d19d8], edx */
  w32((uint32_t)(0x111d19d8), (EDX));
  /* 111b2a9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2a9f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 111b2aa2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b2aa3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 111b2aa8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b2aaa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111b2aad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2ab1 jne 0x111b2aba */
  if (!C.zf) goto L_111b2aba;
  /* 111b2ab3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_111b2aba:;
  /* 111b2aba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2abd push edx */
  push32((uint32_t)(EDX));
  /* 111b2abe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2ac1 push eax */
  push32((uint32_t)(EAX));
  /* 111b2ac2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b2ac4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b2ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2ac8 call 0x111b2ef0 */
  push32(0x111b2acdu); f_111b2ef0();
  /* 111b2acd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2ad0 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2ad5:;
  /* 111b2ad5 mov edx, dword ptr [0x111d19c8] */
  EDX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2adb mov dword ptr [0x111d19d8], edx */
  w32((uint32_t)(0x111d19d8), (EDX));
  /* 111b2ae1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2ae4 push eax */
  push32((uint32_t)(EAX));
  /* 111b2ae5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2ae8 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2ae9 push 3 */
  push32((uint32_t)(0x3u));
  /* 111b2aeb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2aee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 111b2af1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2af4 push eax */
  push32((uint32_t)(EAX));
  /* 111b2af5 call 0x111b2ef0 */
  push32(0x111b2afau); f_111b2ef0();
  /* 111b2afa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2afd jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2b02:;
  /* 111b2b02 mov ecx, dword ptr [0x111d19c8] */
  ECX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2b08 mov dword ptr [0x111d19d8], ecx */
  w32((uint32_t)(0x111d19d8), (ECX));
  /* 111b2b0e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2b11 push edx */
  push32((uint32_t)(EDX));
  /* 111b2b12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2b15 push eax */
  push32((uint32_t)(EAX));
  /* 111b2b16 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b2b18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2b1b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 111b2b1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2b21 push edx */
  push32((uint32_t)(EDX));
  /* 111b2b22 call 0x111b2ef0 */
  push32(0x111b2b27u); f_111b2ef0();
  /* 111b2b27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2b2a jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2b2f:;
  /* 111b2b2f mov eax, dword ptr [0x111d19c8] */
  EAX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2b34 mov dword ptr [0x111d19d8], eax */
  w32((uint32_t)(0x111d19d8), (EAX));
  /* 111b2b39 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2b3c push ecx */
  push32((uint32_t)(ECX));
  /* 111b2b3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2b40 push edx */
  push32((uint32_t)(EDX));
  /* 111b2b41 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b2b43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2b46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111b2b49 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2b4a call 0x111b2ef0 */
  push32(0x111b2b4fu); f_111b2ef0();
  /* 111b2b4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2b52 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2b57:;
  /* 111b2b57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2b5a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2b5e jg 0x111b2b7c */
  if ((!C.zf&&C.sf==C.of)) goto L_111b2b7c;
  /* 111b2b60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2b63 push eax */
  push32((uint32_t)(EAX));
  /* 111b2b64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2b67 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2b68 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2b6b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 111b2b71 push eax */
  push32((uint32_t)(EAX));
  /* 111b2b72 call 0x111b2ea0 */
  push32(0x111b2b77u); f_111b2ea0();
  /* 111b2b77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2b7a jmp 0x111b2b96 */
  goto L_111b2b96;
L_111b2b7c:;
  /* 111b2b7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2b7f push ecx */
  push32((uint32_t)(ECX));
  /* 111b2b80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2b83 push edx */
  push32((uint32_t)(EDX));
  /* 111b2b84 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2b87 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 111b2b8d push ecx */
  push32((uint32_t)(ECX));
  /* 111b2b8e call 0x111b2ea0 */
  push32(0x111b2b93u); f_111b2ea0();
  /* 111b2b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b2b96:;
  /* 111b2b96 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2b9b:;
  /* 111b2b9b mov edx, dword ptr [0x111d19c8] */
  EDX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2ba1 mov dword ptr [0x111d19d8], edx */
  w32((uint32_t)(0x111d19d8), (EDX));
  /* 111b2ba7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2baa push eax */
  push32((uint32_t)(EAX));
  /* 111b2bab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2bae push ecx */
  push32((uint32_t)(ECX));
  /* 111b2baf push 2 */
  push32((uint32_t)(0x2u));
  /* 111b2bb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2bb4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b2bb6 push eax */
  push32((uint32_t)(EAX));
  /* 111b2bb7 call 0x111b2ef0 */
  push32(0x111b2bbcu); f_111b2ef0();
  /* 111b2bbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2bbf jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2bc4:;
  /* 111b2bc4 mov ecx, dword ptr [0x111d19c8] */
  ECX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2bca mov dword ptr [0x111d19d8], ecx */
  w32((uint32_t)(0x111d19d8), (ECX));
  /* 111b2bd0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2bd3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 111b2bd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b2bd9 jmp 0x111b2c2d */
  goto L_111b2c2d;
L_111b2bdb:;
  /* 111b2bdb mov ecx, dword ptr [0x111d19c8] */
  ECX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2be1 mov dword ptr [0x111d19d8], ecx */
  w32((uint32_t)(0x111d19d8), (ECX));
  /* 111b2be7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2bea push edx */
  push32((uint32_t)(EDX));
  /* 111b2beb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2bee push eax */
  push32((uint32_t)(EAX));
  /* 111b2bef push 1 */
  push32((uint32_t)(0x1u));
  /* 111b2bf1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2bf4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111b2bf7 push edx */
  push32((uint32_t)(EDX));
  /* 111b2bf8 call 0x111b2ef0 */
  push32(0x111b2bfdu); f_111b2ef0();
  /* 111b2bfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2c00 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2c05:;
  /* 111b2c05 mov eax, dword ptr [0x111d19c8] */
  EAX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2c0a mov dword ptr [0x111d19d8], eax */
  w32((uint32_t)(0x111d19d8), (EAX));
  /* 111b2c0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2c12 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2c16 jne 0x111b2c21 */
  if (!C.zf) goto L_111b2c21;
  /* 111b2c18 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 111b2c1f jmp 0x111b2c2d */
  goto L_111b2c2d;
L_111b2c21:;
  /* 111b2c21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2c24 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 111b2c27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2c2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111b2c2d:;
  /* 111b2c2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2c30 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 111b2c33 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2c36 jge 0x111b2c41 */
  if ((C.sf==C.of)) goto L_111b2c41;
  /* 111b2c38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111b2c3f jmp 0x111b2c6e */
  goto L_111b2c6e;
L_111b2c41:;
  /* 111b2c41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2c44 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 111b2c47 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b2c48 mov ecx, 7 */
  ECX = (0x7u);
  /* 111b2c4d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b2c4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b2c52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2c55 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 111b2c58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b2c59 mov ecx, 7 */
  ECX = (0x7u);
  /* 111b2c5e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b2c60 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2c63 jl 0x111b2c6e */
  if ((C.sf!=C.of)) goto L_111b2c6e;
  /* 111b2c65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b2c68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2c6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111b2c6e:;
  /* 111b2c6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2c71 push eax */
  push32((uint32_t)(EAX));
  /* 111b2c72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2c75 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2c76 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b2c78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b2c7b push edx */
  push32((uint32_t)(EDX));
  /* 111b2c7c call 0x111b2ef0 */
  push32(0x111b2c81u); f_111b2ef0();
  /* 111b2c81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2c84 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2c89:;
  /* 111b2c89 cmp dword ptr [0x111d19c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2c90 je 0x111b2cc0 */
  if (C.zf) goto L_111b2cc0;
  /* 111b2c92 mov dword ptr [0x111d19c8], 0 */
  w32((uint32_t)(0x111d19c8), (0x0u));
  /* 111b2c9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2c9f push eax */
  push32((uint32_t)(EAX));
  /* 111b2ca0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2ca4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2ca7 push edx */
  push32((uint32_t)(EDX));
  /* 111b2ca8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2cab push eax */
  push32((uint32_t)(EAX));
  /* 111b2cac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2caf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 111b2cb5 push edx */
  push32((uint32_t)(EDX));
  /* 111b2cb6 call 0x111b3050 */
  push32(0x111b2cbbu); f_111b3050();
  /* 111b2cbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2cbe jmp 0x111b2ce2 */
  goto L_111b2ce2;
L_111b2cc0:;
  /* 111b2cc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2cc3 push eax */
  push32((uint32_t)(EAX));
  /* 111b2cc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2cc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2ccb push edx */
  push32((uint32_t)(EDX));
  /* 111b2ccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2ccf push eax */
  push32((uint32_t)(EAX));
  /* 111b2cd0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2cd3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 111b2cd9 push edx */
  push32((uint32_t)(EDX));
  /* 111b2cda call 0x111b3050 */
  push32(0x111b2cdfu); f_111b3050();
  /* 111b2cdf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b2ce2:;
  /* 111b2ce2 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2ce7:;
  /* 111b2ce7 mov dword ptr [0x111d19c8], 0 */
  w32((uint32_t)(0x111d19c8), (0x0u));
  /* 111b2cf1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2cf4 push eax */
  push32((uint32_t)(EAX));
  /* 111b2cf5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2cf9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2cfc push edx */
  push32((uint32_t)(EDX));
  /* 111b2cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2d00 push eax */
  push32((uint32_t)(EAX));
  /* 111b2d01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b2d04 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 111b2d0a push edx */
  push32((uint32_t)(EDX));
  /* 111b2d0b call 0x111b3050 */
  push32(0x111b2d10u); f_111b3050();
  /* 111b2d10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2d13 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2d18:;
  /* 111b2d18 mov eax, dword ptr [0x111d19c8] */
  EAX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2d1d mov dword ptr [0x111d19d8], eax */
  w32((uint32_t)(0x111d19d8), (EAX));
  /* 111b2d22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2d25 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 111b2d28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b2d29 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 111b2d2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b2d30 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111b2d33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2d36 push edx */
  push32((uint32_t)(EDX));
  /* 111b2d37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2d3a push eax */
  push32((uint32_t)(EAX));
  /* 111b2d3b push 2 */
  push32((uint32_t)(0x2u));
  /* 111b2d3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b2d40 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2d41 call 0x111b2ef0 */
  push32(0x111b2d46u); f_111b2ef0();
  /* 111b2d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2d49 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2d4e:;
  /* 111b2d4e mov edx, dword ptr [0x111d19c8] */
  EDX = (r32((uint32_t)(0x111d19c8)));
  /* 111b2d54 mov dword ptr [0x111d19d8], edx */
  w32((uint32_t)(0x111d19d8), (EDX));
  /* 111b2d5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2d5d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 111b2d60 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b2d61 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 111b2d66 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b2d68 mov ecx, eax */
  ECX = (EAX);
  /* 111b2d6a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2d6d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b2d70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2d73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111b2d76 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b2d77 mov esi, 0x64 */
  ESI = (0x64u);
  /* 111b2d7c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b2d7e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2d80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b2d83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2d86 push eax */
  push32((uint32_t)(EAX));
  /* 111b2d87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2d8a push ecx */
  push32((uint32_t)(ECX));
  /* 111b2d8b push 4 */
  push32((uint32_t)(0x4u));
  /* 111b2d8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b2d90 push edx */
  push32((uint32_t)(EDX));
  /* 111b2d91 call 0x111b2ef0 */
  push32(0x111b2d96u); f_111b2ef0();
  /* 111b2d96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2d99 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2d9b:;
  /* 111b2d9b call 0x111b3eb0 */
  push32(0x111b2da0u); f_111b3eb0();
  /* 111b2da0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2da3 push eax */
  push32((uint32_t)(EAX));
  /* 111b2da4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2da7 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2da8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2dab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b2dad cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2db1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 111b2db4 mov ecx, dword ptr [eax*4 + 0x111d0e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x111d0e1c)));
  /* 111b2dbb push ecx */
  push32((uint32_t)(ECX));
  /* 111b2dbc call 0x111b2ea0 */
  push32(0x111b2dc1u); f_111b2ea0();
  /* 111b2dc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2dc4 jmp 0x111b2de8 */
  goto L_111b2de8;
L_111b2dc6:;
  /* 111b2dc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2dc9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b2dcb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 111b2dce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2dd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b2dd3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2dd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2dd9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111b2ddb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2dde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b2de0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2de3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2de6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111b2de8:;
  /* 111b2de8 pop esi */
  ESI = (pop32());
  /* 111b2de9 mov esp, ebp */
  ESP = (EBP);
  /* 111b2deb pop ebp */
  EBP = (pop32());
  /* 111b2dec ret  */
  ESPCHK(0x111b2880u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x111b2ea0 (72 bytes, 30 insns) */
void f_111b2ea0(void) {
  FTRACE(0x111b2ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b2ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b2ea1 mov ebp, esp */
  EBP = (ESP);
L_111b2ea3:;
  /* 111b2ea3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2ea6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2ea9 je 0x111b2ee6 */
  if (C.zf) goto L_111b2ee6;
  /* 111b2eab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2eae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b2eb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b2eb3 je 0x111b2ee6 */
  if (C.zf) goto L_111b2ee6;
  /* 111b2eb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2eb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b2eba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2ebd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b2ebf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111b2ec1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2ec4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b2ec6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2ec9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2ecc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111b2ece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2ed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2ed4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111b2ed7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2eda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b2edc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2edf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2ee2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111b2ee4 jmp 0x111b2ea3 */
  goto L_111b2ea3;
L_111b2ee6:;
  /* 111b2ee6 pop ebp */
  EBP = (pop32());
  /* 111b2ee7 ret  */
  ESPCHK(0x111b2ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ef0 @ 0x111b2ef0 (173 bytes, 64 insns) */
void f_111b2ef0(void) {
  FTRACE(0x111b2ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b2ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b2ef1 mov ebp, esp */
  EBP = (ESP);
  /* 111b2ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b2ef4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111b2efb cmp dword ptr [0x111d19d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2f02 je 0x111b2f1a */
  if (C.zf) goto L_111b2f1a;
  /* 111b2f04 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2f07 push eax */
  push32((uint32_t)(EAX));
  /* 111b2f08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2f0b push ecx */
  push32((uint32_t)(ECX));
  /* 111b2f0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2f0f push edx */
  push32((uint32_t)(EDX));
  /* 111b2f10 call 0x111b2fa0 */
  push32(0x111b2f15u); f_111b2fa0();
  /* 111b2f15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2f18 jmp 0x111b2f99 */
  goto L_111b2f99;
L_111b2f1a:;
  /* 111b2f1a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2f1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2f20 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2f22 jae 0x111b2f90 */
  if (!C.cf) goto L_111b2f90;
  /* 111b2f24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2f27 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2f2a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 111b2f2d jmp 0x111b2f38 */
  goto L_111b2f38;
L_111b2f2f:;
  /* 111b2f2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2f32 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2f35 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_111b2f38:;
  /* 111b2f38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2f3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2f3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b2f40 je 0x111b2f74 */
  if (C.zf) goto L_111b2f74;
  /* 111b2f42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2f45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b2f46 mov ecx, 0xa */
  ECX = (0xau);
  /* 111b2f4b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b2f4d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2f50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2f53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b2f55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2f58 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 111b2f5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2f5e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b2f5f mov ecx, 0xa */
  ECX = (0xau);
  /* 111b2f64 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b2f66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b2f69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b2f6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2f6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111b2f72 jmp 0x111b2f2f */
  goto L_111b2f2f;
L_111b2f74:;
  /* 111b2f74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2f77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b2f79 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2f7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2f7f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111b2f81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2f84 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b2f86 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2f89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2f8c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111b2f8e jmp 0x111b2f99 */
  goto L_111b2f99;
L_111b2f90:;
  /* 111b2f90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b2f93 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_111b2f99:;
  /* 111b2f99 mov esp, ebp */
  ESP = (EBP);
  /* 111b2f9b pop ebp */
  EBP = (pop32());
  /* 111b2f9c ret  */
  ESPCHK(0x111b2ef0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x111b2fa0 (172 bytes, 65 insns) */
void f_111b2fa0(void) {
  FTRACE(0x111b2fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b2fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b2fa1 mov ebp, esp */
  EBP = (ESP);
  /* 111b2fa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2fa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2fa9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b2fab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b2fae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2fb1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2fb4 jbe 0x111b2ffb */
  if ((C.cf||C.zf)) goto L_111b2ffb;
L_111b2fb6:;
  /* 111b2fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2fb9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b2fba mov ecx, 0xa */
  ECX = (0xau);
  /* 111b2fbf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b2fc1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2fc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b2fc7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111b2fc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b2fcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b2fcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b2fd2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2fd5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b2fd7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b2fda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2fdd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111b2fdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b2fe2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b2fe3 mov ecx, 0xa */
  ECX = (0xau);
  /* 111b2fe8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b2fea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b2fed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2ff1 jle 0x111b2ffb */
  if ((C.zf||C.sf!=C.of)) goto L_111b2ffb;
  /* 111b2ff3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b2ff6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b2ff9 ja 0x111b2fb6 */
  if ((!C.cf&&!C.zf)) goto L_111b2fb6;
L_111b2ffb:;
  /* 111b2ffb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b2ffe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b3000 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b3003 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b3006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3009 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111b300b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b300e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3011 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111b3014:;
  /* 111b3014 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3017 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b3019 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 111b301c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b301f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b3022 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b3024 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111b3026 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3029 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b302c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b302f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b3032 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 111b3035 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 111b3037 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b303a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b303d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b3040 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b3043 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3046 jb 0x111b3014 */
  if (C.cf) goto L_111b3014;
  /* 111b3048 mov esp, ebp */
  ESP = (EBP);
  /* 111b304a pop ebp */
  EBP = (pop32());
  /* 111b304b ret  */
  ESPCHK(0x111b2fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013050 @ 0x111b3050 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_111b3050(void) {
  FTRACE(0x111b3050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3050 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3051 mov ebp, esp */
  EBP = (ESP);
  /* 111b3053 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_111b3056:;
  /* 111b3056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3059 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b305c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b305e je 0x111b34cc */
  if (C.zf) goto L_111b34cc;
  /* 111b3064 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b3067 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b306a je 0x111b34cc */
  if (C.zf) goto L_111b34cc;
  /* 111b3070 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 111b3074 mov dword ptr [0x111d19d8], 0 */
  w32((uint32_t)(0x111d19d8), (0x0u));
  /* 111b307e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111b3085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3088 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b308b jmp 0x111b3096 */
  goto L_111b3096;
L_111b308d:;
  /* 111b308d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b3090 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_111b3096:;
  /* 111b3096 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3099 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b309c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b309f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b30a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b30a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b30a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b30ab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b30ad jne 0x111b30b1 */
  if (!C.zf) goto L_111b30b1;
  /* 111b30af jmp 0x111b308d */
  goto L_111b308d;
L_111b30b1:;
  /* 111b30b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b30b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b30b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111b30ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b30bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b30c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111b30c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b30c6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b30c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111b30cc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b30d0 ja 0x111b3420 */
  if ((!C.cf&&!C.zf)) goto L_111b3420;
  /* 111b30d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b30d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b30db mov al, byte ptr [ecx + 0x111b34fc] */
  AL = (r8((uint32_t)(ECX + 0x111b34fc)));
  /* 111b30e1 jmp dword ptr [eax*4 + 0x111b34d0] */
  switch (EAX) {
    case 0: goto L_111b333f;
    case 1: goto L_111b3223;
    case 2: goto L_111b31ae;
    case 3: goto L_111b30e8;
    case 4: goto L_111b3126;
    case 5: goto L_111b3187;
    case 6: goto L_111b31d5;
    case 7: goto L_111b31fc;
    case 8: goto L_111b326a;
    case 9: goto L_111b3164;
    case 10: goto L_111b3420;
    default: x86_unimpl("switch@0x111b30e1 out of table"); return;
  }
L_111b30e8:;
  /* 111b30e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b30eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 111b30ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b30f1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b30f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111b30f7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b30fb ja 0x111b3121 */
  if ((!C.cf&&!C.zf)) goto L_111b3121;
  /* 111b30fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b3100 jmp dword ptr [ecx*4 + 0x111b354f] */
  switch (ECX) {
    case 0: goto L_111b3107;
    case 1: goto L_111b3111;
    case 2: goto L_111b3117;
    case 3: goto L_111b311d;
    case 4: goto L_111b3145;
    case 5: goto L_111b314f;
    case 6: goto L_111b3155;
    case 7: goto L_111b315b;
    default: x86_unimpl("switch@0x111b3100 out of table"); return;
  }
L_111b3107:;
  /* 111b3107 mov dword ptr [0x111d19d8], 1 */
  w32((uint32_t)(0x111d19d8), (0x1u));
L_111b3111:;
  /* 111b3111 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 111b3115 jmp 0x111b3121 */
  goto L_111b3121;
L_111b3117:;
  /* 111b3117 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 111b311b jmp 0x111b3121 */
  goto L_111b3121;
L_111b311d:;
  /* 111b311d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_111b3121:;
  /* 111b3121 jmp 0x111b3420 */
  goto L_111b3420;
L_111b3126:;
  /* 111b3126 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b3129 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111b312c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b312f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3132 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111b3135 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3139 ja 0x111b315f */
  if ((!C.cf&&!C.zf)) goto L_111b315f;
  /* 111b313b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b313e jmp dword ptr [ecx*4 + 0x111b355f] */
  switch (ECX) {
    case 0: goto L_111b3145;
    case 1: goto L_111b314f;
    case 2: goto L_111b3155;
    case 3: goto L_111b315b;
    default: x86_unimpl("switch@0x111b313e out of table"); return;
  }
L_111b3145:;
  /* 111b3145 mov dword ptr [0x111d19d8], 1 */
  w32((uint32_t)(0x111d19d8), (0x1u));
L_111b314f:;
  /* 111b314f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 111b3153 jmp 0x111b315f */
  goto L_111b315f;
L_111b3155:;
  /* 111b3155 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 111b3159 jmp 0x111b315f */
  goto L_111b315f;
L_111b315b:;
  /* 111b315b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_111b315f:;
  /* 111b315f jmp 0x111b3420 */
  goto L_111b3420;
L_111b3164:;
  /* 111b3164 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b3167 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 111b316a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b316e je 0x111b3178 */
  if (C.zf) goto L_111b3178;
  /* 111b3170 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3174 je 0x111b317e */
  if (C.zf) goto L_111b317e;
  /* 111b3176 jmp 0x111b3182 */
  goto L_111b3182;
L_111b3178:;
  /* 111b3178 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 111b317c jmp 0x111b3182 */
  goto L_111b3182;
L_111b317e:;
  /* 111b317e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_111b3182:;
  /* 111b3182 jmp 0x111b3420 */
  goto L_111b3420;
L_111b3187:;
  /* 111b3187 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b318a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111b318d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3191 je 0x111b319b */
  if (C.zf) goto L_111b319b;
  /* 111b3193 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3197 je 0x111b31a5 */
  if (C.zf) goto L_111b31a5;
  /* 111b3199 jmp 0x111b31a9 */
  goto L_111b31a9;
L_111b319b:;
  /* 111b319b mov dword ptr [0x111d19d8], 1 */
  w32((uint32_t)(0x111d19d8), (0x1u));
L_111b31a5:;
  /* 111b31a5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_111b31a9:;
  /* 111b31a9 jmp 0x111b3420 */
  goto L_111b3420;
L_111b31ae:;
  /* 111b31ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b31b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 111b31b4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b31b8 je 0x111b31c2 */
  if (C.zf) goto L_111b31c2;
  /* 111b31ba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b31be je 0x111b31cc */
  if (C.zf) goto L_111b31cc;
  /* 111b31c0 jmp 0x111b31d0 */
  goto L_111b31d0;
L_111b31c2:;
  /* 111b31c2 mov dword ptr [0x111d19d8], 1 */
  w32((uint32_t)(0x111d19d8), (0x1u));
L_111b31cc:;
  /* 111b31cc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_111b31d0:;
  /* 111b31d0 jmp 0x111b3420 */
  goto L_111b3420;
L_111b31d5:;
  /* 111b31d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b31d8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 111b31db cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b31df je 0x111b31e9 */
  if (C.zf) goto L_111b31e9;
  /* 111b31e1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b31e5 je 0x111b31f3 */
  if (C.zf) goto L_111b31f3;
  /* 111b31e7 jmp 0x111b31f7 */
  goto L_111b31f7;
L_111b31e9:;
  /* 111b31e9 mov dword ptr [0x111d19d8], 1 */
  w32((uint32_t)(0x111d19d8), (0x1u));
L_111b31f3:;
  /* 111b31f3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_111b31f7:;
  /* 111b31f7 jmp 0x111b3420 */
  goto L_111b3420;
L_111b31fc:;
  /* 111b31fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b31ff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 111b3202 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3206 je 0x111b3210 */
  if (C.zf) goto L_111b3210;
  /* 111b3208 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b320c je 0x111b321a */
  if (C.zf) goto L_111b321a;
  /* 111b320e jmp 0x111b321e */
  goto L_111b321e;
L_111b3210:;
  /* 111b3210 mov dword ptr [0x111d19d8], 1 */
  w32((uint32_t)(0x111d19d8), (0x1u));
L_111b321a:;
  /* 111b321a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_111b321e:;
  /* 111b321e jmp 0x111b3420 */
  goto L_111b3420;
L_111b3223:;
  /* 111b3223 push 0x111cdaf4 */
  push32((uint32_t)(0x111cdaf4u));
  /* 111b3228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b322b push ecx */
  push32((uint32_t)(ECX));
  /* 111b322c call 0x111b3a80 */
  push32(0x111b3231u); f_111b3a80();
  /* 111b3231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b3236 jne 0x111b3243 */
  if (!C.zf) goto L_111b3243;
  /* 111b3238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b323b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b323e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111b3241 jmp 0x111b3261 */
  goto L_111b3261;
L_111b3243:;
  /* 111b3243 push 0x111cdaf0 */
  push32((uint32_t)(0x111cdaf0u));
  /* 111b3248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b324b push eax */
  push32((uint32_t)(EAX));
  /* 111b324c call 0x111b3a80 */
  push32(0x111b3251u); f_111b3a80();
  /* 111b3251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b3256 jne 0x111b3261 */
  if (!C.zf) goto L_111b3261;
  /* 111b3258 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b325b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b325e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111b3261:;
  /* 111b3261 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 111b3265 jmp 0x111b3420 */
  goto L_111b3420;
L_111b326a:;
  /* 111b326a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b326d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3271 jg 0x111b3281 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b3281;
  /* 111b3273 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b3276 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 111b327c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111b327f jmp 0x111b328d */
  goto L_111b328d;
L_111b3281:;
  /* 111b3281 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b3284 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 111b328a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_111b328d:;
  /* 111b328d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3291 jle 0x111b3334 */
  if ((C.zf||C.sf!=C.of)) goto L_111b3334;
  /* 111b3297 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b329a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b329d jbe 0x111b3334 */
  if ((C.cf||C.zf)) goto L_111b3334;
  /* 111b32a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b32a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b32a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b32aa mov ecx, dword ptr [0x111cfc98] */
  ECX = (r32((uint32_t)(0x111cfc98)));
  /* 111b32b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b32b2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 111b32b6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 111b32bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b32be je 0x111b32f7 */
  if (C.zf) goto L_111b32f7;
  /* 111b32c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b32c3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b32c6 jbe 0x111b32f7 */
  if ((C.cf||C.zf)) goto L_111b32f7;
  /* 111b32c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b32cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b32cd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b32d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b32d2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 111b32d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b32d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b32d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b32dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b32df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111b32e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b32e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b32e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 111b32ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b32ed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b32ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b32f2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b32f5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111b32f7:;
  /* 111b32f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b32fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b32fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b32ff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b3301 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111b3303 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b3306 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b3308 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b330b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b330e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111b3310 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b3313 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3316 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111b3319 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b331c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b331e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3321 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b3324 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111b3326 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b3329 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b332c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111b332f jmp 0x111b328d */
  goto L_111b328d;
L_111b3334:;
  /* 111b3334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3337 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b333a jmp 0x111b3056 */
  goto L_111b3056;
L_111b333f:;
  /* 111b333f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b3342 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111b3345 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b3347 je 0x111b3412 */
  if (C.zf) goto L_111b3412;
  /* 111b334d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3350 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3353 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_111b3356:;
  /* 111b3356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3359 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b335c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b335e je 0x111b3410 */
  if (C.zf) goto L_111b3410;
  /* 111b3364 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b3367 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b336a je 0x111b3410 */
  if (C.zf) goto L_111b3410;
  /* 111b3370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3373 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b3376 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3379 jne 0x111b3389 */
  if (!C.zf) goto L_111b3389;
  /* 111b337b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b337e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3381 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111b3384 jmp 0x111b3410 */
  goto L_111b3410;
L_111b3389:;
  /* 111b3389 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b338c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b338e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b3390 mov edx, dword ptr [0x111cfc98] */
  EDX = (r32((uint32_t)(0x111cfc98)));
  /* 111b3396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3398 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 111b339c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 111b33a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b33a3 je 0x111b33dc */
  if (C.zf) goto L_111b33dc;
  /* 111b33a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b33a8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b33ab jbe 0x111b33dc */
  if ((C.cf||C.zf)) goto L_111b33dc;
  /* 111b33ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b33b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b33b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b33b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b33b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111b33b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b33bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b33be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b33c1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b33c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111b33c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b33c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b33cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b33cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b33d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b33d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b33d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b33da mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111b33dc:;
  /* 111b33dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b33df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b33e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b33e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b33e6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 111b33e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b33eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b33ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b33f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b33f3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111b33f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b33f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b33fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111b33fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b3401 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b3403 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3406 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b3409 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111b340b jmp 0x111b3356 */
  goto L_111b3356;
L_111b3410:;
  /* 111b3410 jmp 0x111b341b */
  goto L_111b341b;
L_111b3412:;
  /* 111b3412 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3415 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3418 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_111b341b:;
  /* 111b341b jmp 0x111b3056 */
  goto L_111b3056;
L_111b3420:;
  /* 111b3420 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111b3424 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b3426 je 0x111b344c */
  if (C.zf) goto L_111b344c;
  /* 111b3428 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b342b push edx */
  push32((uint32_t)(EDX));
  /* 111b342c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b342f push eax */
  push32((uint32_t)(EAX));
  /* 111b3430 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b3433 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3434 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b3437 push edx */
  push32((uint32_t)(EDX));
  /* 111b3438 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 111b343b push eax */
  push32((uint32_t)(EAX));
  /* 111b343c call 0x111b2880 */
  push32(0x111b3441u); f_111b2880();
  /* 111b3441 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3447 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111b344a jmp 0x111b34c7 */
  goto L_111b34c7;
L_111b344c:;
  /* 111b344c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b344f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3451 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b3453 mov ecx, dword ptr [0x111cfc98] */
  ECX = (r32((uint32_t)(0x111cfc98)));
  /* 111b3459 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b345b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 111b345f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 111b3465 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b3467 je 0x111b3498 */
  if (C.zf) goto L_111b3498;
  /* 111b3469 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b346c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b346e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3471 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b3473 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111b3475 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b3478 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b347a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b347d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b3480 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111b3482 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3485 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3488 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111b348b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b348e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b3490 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3493 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b3496 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_111b3498:;
  /* 111b3498 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b349b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b349d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b34a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b34a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111b34a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b34a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b34a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b34ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b34af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111b34b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b34b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b34b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b34ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b34bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b34bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b34c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b34c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111b34c7:;
  /* 111b34c7 jmp 0x111b3056 */
  goto L_111b3056;
L_111b34cc:;
  /* 111b34cc mov esp, ebp */
  ESP = (EBP);
  /* 111b34ce pop ebp */
  EBP = (pop32());
  /* 111b34cf ret  */
  ESPCHK(0x111b3050u, _esp0);
  ESP += 4; return;
}

/* FUN_10013570 @ 0x111b3570 (650 bytes, 178 insns) */
void f_111b3570(void) {
  FTRACE(0x111b3570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3570 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3571 mov ebp, esp */
  EBP = (ESP);
  /* 111b3573 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3579 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b357d jne 0x111b36d9 */
  if (!C.zf) goto L_111b36d9;
  /* 111b3583 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b3586 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 111b358c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 111b3592 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b3595 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111b359c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 111b35a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b35a8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 111b35ae push edx */
  push32((uint32_t)(EDX));
  /* 111b35af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b35b2 push eax */
  push32((uint32_t)(EAX));
  /* 111b35b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b35b6 push ecx */
  push32((uint32_t)(ECX));
  /* 111b35b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b35ba push edx */
  push32((uint32_t)(EDX));
  /* 111b35bb call 0x111b4990 */
  push32(0x111b35c0u); f_111b4990();
  /* 111b35c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b35c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b35c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b35ca jne 0x111b365f */
  if (!C.zf) goto L_111b365f;
  /* 111b35d0 call dword ptr [0x111d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43ac))), 0x111b35d6u);
  /* 111b35d6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b35d9 je 0x111b35e0 */
  if (C.zf) goto L_111b35e0;
  /* 111b35db jmp 0x111b36bd */
  goto L_111b36bd;
L_111b35e0:;
  /* 111b35e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b35e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b35e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b35e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b35e9 push eax */
  push32((uint32_t)(EAX));
  /* 111b35ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b35ed push ecx */
  push32((uint32_t)(ECX));
  /* 111b35ee call 0x111b4990 */
  push32(0x111b35f3u); f_111b4990();
  /* 111b35f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b35f6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 111b35fc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3603 jne 0x111b360a */
  if (!C.zf) goto L_111b360a;
  /* 111b3605 jmp 0x111b36bd */
  goto L_111b36bd;
L_111b360a:;
  /* 111b360a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 111b360c push 0x111cdafc */
  push32((uint32_t)(0x111cdafcu));
  /* 111b3611 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b3613 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 111b3619 push edx */
  push32((uint32_t)(EDX));
  /* 111b361a call 0x111a53b0 */
  push32(0x111b361fu); f_111a53b0();
  /* 111b361f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3622 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b3625 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3629 jne 0x111b3630 */
  if (!C.zf) goto L_111b3630;
  /* 111b362b jmp 0x111b36bd */
  goto L_111b36bd;
L_111b3630:;
  /* 111b3630 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111b3637 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b3639 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 111b363f push eax */
  push32((uint32_t)(EAX));
  /* 111b3640 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b3643 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3644 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b3647 push edx */
  push32((uint32_t)(EDX));
  /* 111b3648 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b364b push eax */
  push32((uint32_t)(EAX));
  /* 111b364c call 0x111b4990 */
  push32(0x111b3651u); f_111b4990();
  /* 111b3651 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3654 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b3657 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b365b jne 0x111b365f */
  if (!C.zf) goto L_111b365f;
  /* 111b365d jmp 0x111b36bd */
  goto L_111b36bd;
L_111b365f:;
  /* 111b365f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 111b3661 push 0x111cdafc */
  push32((uint32_t)(0x111cdafcu));
  /* 111b3666 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b3668 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b366b push ecx */
  push32((uint32_t)(ECX));
  /* 111b366c call 0x111a53b0 */
  push32(0x111b3671u); f_111a53b0();
  /* 111b3671 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3674 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 111b367a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111b367c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 111b3682 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3685 jne 0x111b3689 */
  if (!C.zf) goto L_111b3689;
  /* 111b3687 jmp 0x111b36bd */
  goto L_111b36bd;
L_111b3689:;
  /* 111b3689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b368c push ecx */
  push32((uint32_t)(ECX));
  /* 111b368d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b3690 push edx */
  push32((uint32_t)(EDX));
  /* 111b3691 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 111b3697 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b3699 push ecx */
  push32((uint32_t)(ECX));
  /* 111b369a call 0x111a8bd0 */
  push32(0x111b369fu); f_111a8bd0();
  /* 111b369f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b36a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b36a6 je 0x111b36b6 */
  if (C.zf) goto L_111b36b6;
  /* 111b36a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b36aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b36ad push edx */
  push32((uint32_t)(EDX));
  /* 111b36ae call 0x111a5e40 */
  push32(0x111b36b3u); f_111a5e40();
  /* 111b36b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b36b6:;
  /* 111b36b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b36b8 jmp 0x111b37f6 */
  goto L_111b37f6;
L_111b36bd:;
  /* 111b36bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b36c1 je 0x111b36d1 */
  if (C.zf) goto L_111b36d1;
  /* 111b36c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b36c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b36c8 push eax */
  push32((uint32_t)(EAX));
  /* 111b36c9 call 0x111a5e40 */
  push32(0x111b36ceu); f_111a5e40();
  /* 111b36ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b36d1:;
  /* 111b36d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b36d4 jmp 0x111b37f6 */
  goto L_111b37f6;
L_111b36d9:;
  /* 111b36d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b36dd jne 0x111b37f3 */
  if (!C.zf) goto L_111b37f3;
  /* 111b36e3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 111b36ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b36f0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 111b36f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b36f8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 111b36fe push edx */
  push32((uint32_t)(EDX));
  /* 111b36ff push 0x111d18f0 */
  push32((uint32_t)(0x111d18f0u));
  /* 111b3704 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b3707 push eax */
  push32((uint32_t)(EAX));
  /* 111b3708 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b370b push ecx */
  push32((uint32_t)(ECX));
  /* 111b370c call 0x111b47f0 */
  push32(0x111b3711u); f_111b47f0();
  /* 111b3711 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b3716 jne 0x111b3720 */
  if (!C.zf) goto L_111b3720;
  /* 111b3718 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b371b jmp 0x111b37f6 */
  goto L_111b37f6;
L_111b3720:;
  /* 111b3720 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 111b3726 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111b3729 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 111b3733 jmp 0x111b3744 */
  goto L_111b3744;
L_111b3735:;
  /* 111b3735 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111b373b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b373e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_111b3744:;
  /* 111b3744 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b374b jge 0x111b37ef */
  if ((C.sf==C.of)) goto L_111b37ef;
  /* 111b3751 cmp dword ptr [0x111cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3758 jle 0x111b378b */
  if ((C.zf||C.sf!=C.of)) goto L_111b378b;
  /* 111b375a push 4 */
  push32((uint32_t)(0x4u));
  /* 111b375c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111b3762 mov dl, byte ptr [ecx*2 + 0x111d18f0] */
  DL = (r8((uint32_t)(ECX*2 + 0x111d18f0)));
  /* 111b3769 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 111b376f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 111b3775 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b377a push eax */
  push32((uint32_t)(EAX));
  /* 111b377b call 0x111ab3c0 */
  push32(0x111b3780u); f_111ab3c0();
  /* 111b3780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3783 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 111b3789 jmp 0x111b37be */
  goto L_111b37be;
L_111b378b:;
  /* 111b378b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111b3791 mov dl, byte ptr [ecx*2 + 0x111d18f0] */
  DL = (r8((uint32_t)(ECX*2 + 0x111d18f0)));
  /* 111b3798 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 111b379e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 111b37a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b37a9 mov ecx, dword ptr [0x111cfc98] */
  ECX = (r32((uint32_t)(0x111cfc98)));
  /* 111b37af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b37b1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 111b37b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 111b37b8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_111b37be:;
  /* 111b37be cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b37c5 je 0x111b37e8 */
  if (C.zf) goto L_111b37e8;
  /* 111b37c7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 111b37cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b37d0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b37d3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 111b37da lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 111b37de mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 111b37e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111b37e6 jmp 0x111b37ea */
  goto L_111b37ea;
L_111b37e8:;
  /* 111b37e8 jmp 0x111b37ef */
  goto L_111b37ef;
L_111b37ea:;
  /* 111b37ea jmp 0x111b3735 */
  goto L_111b3735;
L_111b37ef:;
  /* 111b37ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b37f1 jmp 0x111b37f6 */
  goto L_111b37f6;
L_111b37f3:;
  /* 111b37f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111b37f6:;
  /* 111b37f6 mov esp, ebp */
  ESP = (EBP);
  /* 111b37f8 pop ebp */
  EBP = (pop32());
  /* 111b37f9 ret  */
  ESPCHK(0x111b3570u, _esp0);
  ESP += 4; return;
}

/* FUN_10013800 @ 0x111b3800 (10 bytes, 5 insns) */
void f_111b3800(void) {
  FTRACE(0x111b3800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3800 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3801 mov ebp, esp */
  EBP = (ESP);
  /* 111b3803 mov eax, dword ptr [0x111d0d88] */
  EAX = (r32((uint32_t)(0x111d0d88)));
  /* 111b3808 pop ebp */
  EBP = (pop32());
  /* 111b3809 ret  */
  ESPCHK(0x111b3800u, _esp0);
  ESP += 4; return;
}

/* FUN_10013810 @ 0x111b3810 (575 bytes, 196 insns) */
void f_111b3810(void) {
  FTRACE(0x111b3810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3810 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3811 mov ebp, esp */
  EBP = (ESP);
  /* 111b3813 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b3815 push 0x111cdb08 */
  push32((uint32_t)(0x111cdb08u));
  /* 111b381a push 0x111ae4b8 */
  push32((uint32_t)(0x111ae4b8u));
  /* 111b381f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111b3825 push eax */
  push32((uint32_t)(EAX));
  /* 111b3826 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111b382d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3830 push ebx */
  push32((uint32_t)(EBX));
  /* 111b3831 push esi */
  push32((uint32_t)(ESI));
  /* 111b3832 push edi */
  push32((uint32_t)(EDI));
  /* 111b3833 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111b3836 cmp dword ptr [0x111d18fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d18fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b383d jne 0x111b388e */
  if (!C.zf) goto L_111b388e;
  /* 111b383f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 111b3842 push eax */
  push32((uint32_t)(EAX));
  /* 111b3843 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b3845 push 0x111cd23c */
  push32((uint32_t)(0x111cd23cu));
  /* 111b384a push 1 */
  push32((uint32_t)(0x1u));
  /* 111b384c call dword ptr [0x111d4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4314))), 0x111b3852u);
  /* 111b3852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b3854 je 0x111b3862 */
  if (C.zf) goto L_111b3862;
  /* 111b3856 mov dword ptr [0x111d18fc], 1 */
  w32((uint32_t)(0x111d18fc), (0x1u));
  /* 111b3860 jmp 0x111b388e */
  goto L_111b388e;
L_111b3862:;
  /* 111b3862 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 111b3865 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3866 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b3868 push 0x111cd238 */
  push32((uint32_t)(0x111cd238u));
  /* 111b386d push 1 */
  push32((uint32_t)(0x1u));
  /* 111b386f push 0 */
  push32((uint32_t)(0x0u));
  /* 111b3871 call dword ptr [0x111d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4324))), 0x111b3877u);
  /* 111b3877 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b3879 je 0x111b3887 */
  if (C.zf) goto L_111b3887;
  /* 111b387b mov dword ptr [0x111d18fc], 2 */
  w32((uint32_t)(0x111d18fc), (0x2u));
  /* 111b3885 jmp 0x111b388e */
  goto L_111b388e;
L_111b3887:;
  /* 111b3887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3889 jmp 0x111b3a69 */
  goto L_111b3a69;
L_111b388e:;
  /* 111b388e cmp dword ptr [0x111d18fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d18fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3895 jne 0x111b38b2 */
  if (!C.zf) goto L_111b38b2;
  /* 111b3897 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b389a push edx */
  push32((uint32_t)(EDX));
  /* 111b389b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b389e push eax */
  push32((uint32_t)(EAX));
  /* 111b389f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b38a2 push ecx */
  push32((uint32_t)(ECX));
  /* 111b38a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b38a6 push edx */
  push32((uint32_t)(EDX));
  /* 111b38a7 call dword ptr [0x111d4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4314))), 0x111b38adu);
  /* 111b38ad jmp 0x111b3a69 */
  goto L_111b3a69;
L_111b38b2:;
  /* 111b38b2 cmp dword ptr [0x111d18fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x111d18fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b38b9 jne 0x111b3a67 */
  if (!C.zf) goto L_111b3a67;
  /* 111b38bf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b38c3 jne 0x111b38cd */
  if (!C.zf) goto L_111b38cd;
  /* 111b38c5 mov eax, dword ptr [0x111d1870] */
  EAX = (r32((uint32_t)(0x111d1870)));
  /* 111b38ca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_111b38cd:;
  /* 111b38cd push 0 */
  push32((uint32_t)(0x0u));
  /* 111b38cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111b38d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b38d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b38d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b38d8 push ecx */
  push32((uint32_t)(ECX));
  /* 111b38d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b38dc push edx */
  push32((uint32_t)(EDX));
  /* 111b38dd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111b38e2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b38e5 push eax */
  push32((uint32_t)(EAX));
  /* 111b38e6 call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111b38ecu);
  /* 111b38ec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111b38ef cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b38f3 jne 0x111b38fc */
  if (!C.zf) goto L_111b38fc;
  /* 111b38f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b38f7 jmp 0x111b3a69 */
  goto L_111b3a69;
L_111b38fc:;
  /* 111b38fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111b3903 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b3906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3909 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111b390b call 0x111a8550 */
  push32(0x111b3910u); f_111a8550();
  /* 111b3910 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 111b3913 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111b3916 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111b3919 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 111b391c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b391f push edx */
  push32((uint32_t)(EDX));
  /* 111b3920 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b3922 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111b3925 push eax */
  push32((uint32_t)(EAX));
  /* 111b3926 call 0x111a9120 */
  push32(0x111b392bu); f_111a9120();
  /* 111b392b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b392e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111b3935 jmp 0x111b394e */
  goto L_111b394e;
  /* 111b3937 mov eax, 1 */
  EAX = (0x1u);
  /* 111b393c ret  */
  ESPCHK(0x111b3810u, _esp0);
  ESP += 4; return;
  /* 111b393d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111b3940 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 111b3947 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111b394e:;
  /* 111b394e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3952 jne 0x111b395b */
  if (!C.zf) goto L_111b395b;
  /* 111b3954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3956 jmp 0x111b3a69 */
  goto L_111b3a69;
L_111b395b:;
  /* 111b395b push 0 */
  push32((uint32_t)(0x0u));
  /* 111b395d push 0 */
  push32((uint32_t)(0x0u));
  /* 111b395f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b3962 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3963 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111b3966 push edx */
  push32((uint32_t)(EDX));
  /* 111b3967 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b396a push eax */
  push32((uint32_t)(EAX));
  /* 111b396b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b396e push ecx */
  push32((uint32_t)(ECX));
  /* 111b396f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111b3974 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b3977 push edx */
  push32((uint32_t)(EDX));
  /* 111b3978 call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111b397eu);
  /* 111b397e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b3980 jne 0x111b3989 */
  if (!C.zf) goto L_111b3989;
  /* 111b3982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3984 jmp 0x111b3a69 */
  goto L_111b3a69;
L_111b3989:;
  /* 111b3989 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111b3990 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b3993 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 111b3997 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b399a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111b399c call 0x111a8550 */
  push32(0x111b39a1u); f_111a8550();
  /* 111b39a1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 111b39a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111b39a7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 111b39aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 111b39ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111b39b4 jmp 0x111b39cd */
  goto L_111b39cd;
  /* 111b39b6 mov eax, 1 */
  EAX = (0x1u);
  /* 111b39bb ret  */
  ESPCHK(0x111b3810u, _esp0);
  ESP += 4; return;
  /* 111b39bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111b39bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111b39c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111b39cd:;
  /* 111b39cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b39d1 jne 0x111b39da */
  if (!C.zf) goto L_111b39da;
  /* 111b39d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b39d5 jmp 0x111b3a69 */
  goto L_111b3a69;
L_111b39da:;
  /* 111b39da cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b39de jne 0x111b39e9 */
  if (!C.zf) goto L_111b39e9;
  /* 111b39e0 mov edx, dword ptr [0x111d1860] */
  EDX = (r32((uint32_t)(0x111d1860)));
  /* 111b39e6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_111b39e9:;
  /* 111b39e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b39ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b39ef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 111b39f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b39f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b39fb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 111b3a02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b3a05 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3a06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b3a09 push edx */
  push32((uint32_t)(EDX));
  /* 111b3a0a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111b3a0d push eax */
  push32((uint32_t)(EAX));
  /* 111b3a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3a11 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3a12 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111b3a15 push edx */
  push32((uint32_t)(EDX));
  /* 111b3a16 call dword ptr [0x111d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4324))), 0x111b3a1cu);
  /* 111b3a1c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111b3a1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b3a22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b3a25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b3a27 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 111b3a2c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3a32 je 0x111b3a48 */
  if (C.zf) goto L_111b3a48;
  /* 111b3a34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b3a37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b3a3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b3a3c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 111b3a40 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3a46 je 0x111b3a4c */
  if (C.zf) goto L_111b3a4c;
L_111b3a48:;
  /* 111b3a48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3a4a jmp 0x111b3a69 */
  goto L_111b3a69;
L_111b3a4c:;
  /* 111b3a4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b3a4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111b3a51 push eax */
  push32((uint32_t)(EAX));
  /* 111b3a52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b3a55 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3a56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b3a59 push edx */
  push32((uint32_t)(EDX));
  /* 111b3a5a call 0x111ad2a0 */
  push32(0x111b3a5fu); f_111ad2a0();
  /* 111b3a5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3a62 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b3a65 jmp 0x111b3a69 */
  goto L_111b3a69;
L_111b3a67:;
  /* 111b3a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b3a69:;
  /* 111b3a69 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 111b3a6c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b3a6f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111b3a76 pop edi */
  EDI = (pop32());
  /* 111b3a77 pop esi */
  ESI = (pop32());
  /* 111b3a78 pop ebx */
  EBX = (pop32());
  /* 111b3a79 mov esp, ebp */
  ESP = (EBP);
  /* 111b3a7b pop ebp */
  EBP = (pop32());
  /* 111b3a7c ret  */
  ESPCHK(0x111b3810u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a80 @ 0x111b3a80 (208 bytes, 85 insns) */
void f_111b3a80(void) {
  FTRACE(0x111b3a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3a80 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3a81 mov ebp, esp */
  EBP = (ESP);
  /* 111b3a83 push edi */
  push32((uint32_t)(EDI));
  /* 111b3a84 push esi */
  push32((uint32_t)(ESI));
  /* 111b3a85 push ebx */
  push32((uint32_t)(EBX));
  /* 111b3a86 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111b3a89 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3a8c lea eax, [0x111d1858] */
  EAX = ((uint32_t)(0x111d1858));
  /* 111b3a92 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3a96 jne 0x111b3ad3 */
  if (!C.zf) goto L_111b3ad3;
  /* 111b3a98 mov al, 0xff */
  AL = (0xffu);
  /* 111b3a9a mov edi, edi */
  EDI = (EDI);
L_111b3a9c:;
  /* 111b3a9c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b3a9e je 0x111b3ace */
  if (C.zf) goto L_111b3ace;
  /* 111b3aa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111b3aa2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111b3aa3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 111b3aa5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111b3aa6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3aa8 je 0x111b3a9c */
  if (C.zf) goto L_111b3a9c;
  /* 111b3aaa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111b3aac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3aae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111b3ab0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 111b3ab3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111b3ab5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111b3ab7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 111b3ab9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111b3abb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3abd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111b3abf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 111b3ac2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111b3ac4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111b3ac6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3ac8 je 0x111b3a9c */
  if (C.zf) goto L_111b3a9c;
  /* 111b3aca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111b3acc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_111b3ace:;
  /* 111b3ace movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 111b3ad1 jmp 0x111b3b4b */
  goto L_111b3b4b;
L_111b3ad3:;
  /* 111b3ad3 lock inc dword ptr [0x111d19ec] */
  x86_unimpl("lock inc @ 0x111b3ad3");
  /* 111b3ada cmp dword ptr [0x111d19dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3ae1 jg 0x111b3ae7 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b3ae7;
  /* 111b3ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b3ae5 jmp 0x111b3afc */
  goto L_111b3afc;
L_111b3ae7:;
  /* 111b3ae7 lock dec dword ptr [0x111d19ec] */
  x86_unimpl("lock dec @ 0x111b3ae7");
  /* 111b3aee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111b3af0 call 0x111a8db0 */
  push32(0x111b3af5u); f_111a8db0();
  /* 111b3af5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_111b3afc:;
  /* 111b3afc mov eax, 0xff */
  EAX = (0xffu);
  /* 111b3b01 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111b3b03 nop  */
  /* nop */
L_111b3b04:;
  /* 111b3b04 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b3b06 je 0x111b3b2f */
  if (C.zf) goto L_111b3b2f;
  /* 111b3b08 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111b3b0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111b3b0b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 111b3b0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111b3b0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3b10 je 0x111b3b04 */
  if (C.zf) goto L_111b3b04;
  /* 111b3b12 push eax */
  push32((uint32_t)(EAX));
  /* 111b3b13 push ebx */
  push32((uint32_t)(EBX));
  /* 111b3b14 call 0x111b4bf0 */
  push32(0x111b3b19u); f_111b4bf0();
  /* 111b3b19 mov ebx, eax */
  EBX = (EAX);
  /* 111b3b1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3b1e call 0x111b4bf0 */
  push32(0x111b3b23u); f_111b4bf0();
  /* 111b3b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3b26 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3b28 je 0x111b3b04 */
  if (C.zf) goto L_111b3b04;
  /* 111b3b2a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3b2c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_111b3b2f:;
  /* 111b3b2f mov ebx, eax */
  EBX = (EAX);
  /* 111b3b31 pop eax */
  EAX = (pop32());
  /* 111b3b32 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3b34 jne 0x111b3b3f */
  if (!C.zf) goto L_111b3b3f;
  /* 111b3b36 lock dec dword ptr [0x111d19ec] */
  x86_unimpl("lock dec @ 0x111b3b36");
  /* 111b3b3d jmp 0x111b3b49 */
  goto L_111b3b49;
L_111b3b3f:;
  /* 111b3b3f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111b3b41 call 0x111a8e50 */
  push32(0x111b3b46u); f_111a8e50();
  /* 111b3b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b3b49:;
  /* 111b3b49 mov eax, ebx */
  EAX = (EBX);
L_111b3b4b:;
  /* 111b3b4b pop ebx */
  EBX = (pop32());
  /* 111b3b4c pop esi */
  ESI = (pop32());
  /* 111b3b4d pop edi */
  EDI = (pop32());
  /* 111b3b4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111b3b4f ret  */
  ESPCHK(0x111b3a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b50 @ 0x111b3b50 (257 bytes, 103 insns) */
void f_111b3b50(void) {
  FTRACE(0x111b3b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3b50 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3b51 mov ebp, esp */
  EBP = (ESP);
  /* 111b3b53 push edi */
  push32((uint32_t)(EDI));
  /* 111b3b54 push esi */
  push32((uint32_t)(ESI));
  /* 111b3b55 push ebx */
  push32((uint32_t)(EBX));
  /* 111b3b56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b3b59 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b3b5b je 0x111b3c4a */
  if (C.zf) goto L_111b3c4a;
  /* 111b3b61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3b64 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 111b3b67 lea eax, [0x111d1858] */
  EAX = ((uint32_t)(0x111d1858));
  /* 111b3b6d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3b71 jne 0x111b3bc1 */
  if (!C.zf) goto L_111b3bc1;
  /* 111b3b73 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 111b3b75 mov bl, 0x5a */
  BL = (0x5au);
  /* 111b3b77 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 111b3b79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111b3b7c:;
  /* 111b3b7c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 111b3b7e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 111b3b80 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 111b3b82 je 0x111b3ba5 */
  if (C.zf) goto L_111b3ba5;
  /* 111b3b84 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111b3b86 je 0x111b3ba5 */
  if (C.zf) goto L_111b3ba5;
  /* 111b3b88 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111b3b89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111b3b8a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3b8c jb 0x111b3b94 */
  if (C.cf) goto L_111b3b94;
  /* 111b3b8e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3b90 ja 0x111b3b94 */
  if ((!C.cf&&!C.zf)) goto L_111b3b94;
  /* 111b3b92 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_111b3b94:;
  /* 111b3b94 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3b96 jb 0x111b3b9e */
  if (C.cf) goto L_111b3b9e;
  /* 111b3b98 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3b9a ja 0x111b3b9e */
  if ((!C.cf&&!C.zf)) goto L_111b3b9e;
  /* 111b3b9c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_111b3b9e:;
  /* 111b3b9e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3ba0 jne 0x111b3baf */
  if (!C.zf) goto L_111b3baf;
  /* 111b3ba2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111b3ba3 jne 0x111b3b7c */
  if (!C.zf) goto L_111b3b7c;
L_111b3ba5:;
  /* 111b3ba5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b3ba7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b3ba9 je 0x111b3c4a */
  if (C.zf) goto L_111b3c4a;
L_111b3baf:;
  /* 111b3baf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 111b3bb4 jb 0x111b3c4a */
  if (C.cf) goto L_111b3c4a;
  /* 111b3bba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b3bbc jmp 0x111b3c4a */
  goto L_111b3c4a;
L_111b3bc1:;
  /* 111b3bc1 lock inc dword ptr [0x111d19ec] */
  x86_unimpl("lock inc @ 0x111b3bc1");
  /* 111b3bc8 cmp dword ptr [0x111d19dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3bcf jg 0x111b3bd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b3bd5;
  /* 111b3bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b3bd3 jmp 0x111b3bee */
  goto L_111b3bee;
L_111b3bd5:;
  /* 111b3bd5 lock dec dword ptr [0x111d19ec] */
  x86_unimpl("lock dec @ 0x111b3bd5");
  /* 111b3bdc mov ebx, ecx */
  EBX = (ECX);
  /* 111b3bde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111b3be0 call 0x111a8db0 */
  push32(0x111b3be5u); f_111a8db0();
  /* 111b3be5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 111b3bec mov ecx, ebx */
  ECX = (EBX);
L_111b3bee:;
  /* 111b3bee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3bf0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111b3bf2 mov edi, edi */
  EDI = (EDI);
L_111b3bf4:;
  /* 111b3bf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111b3bf6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3bf8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 111b3bfa je 0x111b3c1f */
  if (C.zf) goto L_111b3c1f;
  /* 111b3bfc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111b3bfe je 0x111b3c1f */
  if (C.zf) goto L_111b3c1f;
  /* 111b3c00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111b3c01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111b3c02 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3c03 push eax */
  push32((uint32_t)(EAX));
  /* 111b3c04 push ebx */
  push32((uint32_t)(EBX));
  /* 111b3c05 call 0x111b4bf0 */
  push32(0x111b3c0au); f_111b4bf0();
  /* 111b3c0a mov ebx, eax */
  EBX = (EAX);
  /* 111b3c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3c0f call 0x111b4bf0 */
  push32(0x111b3c14u); f_111b4bf0();
  /* 111b3c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3c17 pop ecx */
  ECX = (pop32());
  /* 111b3c18 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3c1a jne 0x111b3c25 */
  if (!C.zf) goto L_111b3c25;
  /* 111b3c1c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111b3c1d jne 0x111b3bf4 */
  if (!C.zf) goto L_111b3bf4;
L_111b3c1f:;
  /* 111b3c1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b3c21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3c23 je 0x111b3c2e */
  if (C.zf) goto L_111b3c2e;
L_111b3c25:;
  /* 111b3c25 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 111b3c2a jb 0x111b3c2e */
  if (C.cf) goto L_111b3c2e;
  /* 111b3c2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_111b3c2e:;
  /* 111b3c2e pop eax */
  EAX = (pop32());
  /* 111b3c2f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3c31 jne 0x111b3c3c */
  if (!C.zf) goto L_111b3c3c;
  /* 111b3c33 lock dec dword ptr [0x111d19ec] */
  x86_unimpl("lock dec @ 0x111b3c33");
  /* 111b3c3a jmp 0x111b3c4a */
  goto L_111b3c4a;
L_111b3c3c:;
  /* 111b3c3c mov ebx, ecx */
  EBX = (ECX);
  /* 111b3c3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111b3c40 call 0x111a8e50 */
  push32(0x111b3c45u); f_111a8e50();
  /* 111b3c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3c48 mov ecx, ebx */
  ECX = (EBX);
L_111b3c4a:;
  /* 111b3c4a mov eax, ecx */
  EAX = (ECX);
  /* 111b3c4c pop ebx */
  EBX = (pop32());
  /* 111b3c4d pop esi */
  ESI = (pop32());
  /* 111b3c4e pop edi */
  EDI = (pop32());
  /* 111b3c4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111b3c50 ret  */
  ESPCHK(0x111b3b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c60 @ 0x111b3c60 (255 bytes, 88 insns) */
void f_111b3c60(void) {
  FTRACE(0x111b3c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3c60 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3c61 mov ebp, esp */
  EBP = (ESP);
  /* 111b3c63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_111b3c66:;
  /* 111b3c66 cmp dword ptr [0x111cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3c6d jle 0x111b3c86 */
  if ((C.zf||C.sf!=C.of)) goto L_111b3c86;
  /* 111b3c6f push 8 */
  push32((uint32_t)(0x8u));
  /* 111b3c71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3c74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b3c76 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b3c78 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3c79 call 0x111ab3c0 */
  push32(0x111b3c7eu); f_111ab3c0();
  /* 111b3c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3c81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111b3c84 jmp 0x111b3c9f */
  goto L_111b3c9f;
L_111b3c86:;
  /* 111b3c86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3c89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3c8b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b3c8d mov ecx, dword ptr [0x111cfc98] */
  ECX = (r32((uint32_t)(0x111cfc98)));
  /* 111b3c93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b3c95 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 111b3c99 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 111b3c9c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_111b3c9f:;
  /* 111b3c9f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3ca3 je 0x111b3cb0 */
  if (C.zf) goto L_111b3cb0;
  /* 111b3ca5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3ca8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3cab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b3cae jmp 0x111b3c66 */
  goto L_111b3c66;
L_111b3cb0:;
  /* 111b3cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3cb3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b3cb5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b3cb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111b3cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3cbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3cc0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b3cc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3cc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b3cc9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3ccd je 0x111b3cd5 */
  if (C.zf) goto L_111b3cd5;
  /* 111b3ccf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3cd3 jne 0x111b3ce8 */
  if (!C.zf) goto L_111b3ce8;
L_111b3cd5:;
  /* 111b3cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3cd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3cda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b3cdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b3cdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3ce2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3ce5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_111b3ce8:;
  /* 111b3ce8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_111b3cef:;
  /* 111b3cef cmp dword ptr [0x111cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3cf6 jle 0x111b3d0b */
  if ((C.zf||C.sf!=C.of)) goto L_111b3d0b;
  /* 111b3cf8 push 4 */
  push32((uint32_t)(0x4u));
  /* 111b3cfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3cfd push edx */
  push32((uint32_t)(EDX));
  /* 111b3cfe call 0x111ab3c0 */
  push32(0x111b3d03u); f_111ab3c0();
  /* 111b3d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3d06 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111b3d09 jmp 0x111b3d20 */
  goto L_111b3d20;
L_111b3d0b:;
  /* 111b3d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3d0e mov ecx, dword ptr [0x111cfc98] */
  ECX = (r32((uint32_t)(0x111cfc98)));
  /* 111b3d14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b3d16 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 111b3d1a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 111b3d1d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_111b3d20:;
  /* 111b3d20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3d24 je 0x111b3d4b */
  if (C.zf) goto L_111b3d4b;
  /* 111b3d26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b3d29 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b3d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3d2f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 111b3d33 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b3d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3d39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b3d3b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b3d3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b3d40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3d43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3d46 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111b3d49 jmp 0x111b3cef */
  goto L_111b3cef;
L_111b3d4b:;
  /* 111b3d4b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3d4f jne 0x111b3d58 */
  if (!C.zf) goto L_111b3d58;
  /* 111b3d51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b3d54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b3d56 jmp 0x111b3d5b */
  goto L_111b3d5b;
L_111b3d58:;
  /* 111b3d58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_111b3d5b:;
  /* 111b3d5b mov esp, ebp */
  ESP = (EBP);
  /* 111b3d5d pop ebp */
  EBP = (pop32());
  /* 111b3d5e ret  */
  ESPCHK(0x111b3c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d60 @ 0x111b3d60 (17 bytes, 8 insns) */
void f_111b3d60(void) {
  FTRACE(0x111b3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3d61 mov ebp, esp */
  EBP = (ESP);
  /* 111b3d63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3d66 push eax */
  push32((uint32_t)(EAX));
  /* 111b3d67 call 0x111b3c60 */
  push32(0x111b3d6cu); f_111b3c60();
  /* 111b3d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3d6f pop ebp */
  EBP = (pop32());
  /* 111b3d70 ret  */
  ESPCHK(0x111b3d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d80 @ 0x111b3d80 (297 bytes, 106 insns) */
void f_111b3d80(void) {
  FTRACE(0x111b3d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3d80 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3d81 mov ebp, esp */
  EBP = (ESP);
  /* 111b3d83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3d86 push esi */
  push32((uint32_t)(ESI));
L_111b3d87:;
  /* 111b3d87 cmp dword ptr [0x111cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3d8e jle 0x111b3da7 */
  if ((C.zf||C.sf!=C.of)) goto L_111b3da7;
  /* 111b3d90 push 8 */
  push32((uint32_t)(0x8u));
  /* 111b3d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3d95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b3d97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b3d99 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3d9a call 0x111ab3c0 */
  push32(0x111b3d9fu); f_111ab3c0();
  /* 111b3d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3da2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111b3da5 jmp 0x111b3dc0 */
  goto L_111b3dc0;
L_111b3da7:;
  /* 111b3da7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3dac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b3dae mov ecx, dword ptr [0x111cfc98] */
  ECX = (r32((uint32_t)(0x111cfc98)));
  /* 111b3db4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b3db6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 111b3dba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 111b3dbd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_111b3dc0:;
  /* 111b3dc0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3dc4 je 0x111b3dd1 */
  if (C.zf) goto L_111b3dd1;
  /* 111b3dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3dc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3dcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b3dcf jmp 0x111b3d87 */
  goto L_111b3d87;
L_111b3dd1:;
  /* 111b3dd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3dd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b3dd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b3dd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111b3ddb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3dde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3de1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b3de4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3de7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111b3dea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3dee je 0x111b3df6 */
  if (C.zf) goto L_111b3df6;
  /* 111b3df0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3df4 jne 0x111b3e09 */
  if (!C.zf) goto L_111b3e09;
L_111b3df6:;
  /* 111b3df6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3dfb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b3dfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b3e00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3e03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3e06 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_111b3e09:;
  /* 111b3e09 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111b3e10 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_111b3e17:;
  /* 111b3e17 cmp dword ptr [0x111cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3e1e jle 0x111b3e33 */
  if ((C.zf||C.sf!=C.of)) goto L_111b3e33;
  /* 111b3e20 push 4 */
  push32((uint32_t)(0x4u));
  /* 111b3e22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3e25 push edx */
  push32((uint32_t)(EDX));
  /* 111b3e26 call 0x111ab3c0 */
  push32(0x111b3e2bu); f_111ab3c0();
  /* 111b3e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3e2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111b3e31 jmp 0x111b3e48 */
  goto L_111b3e48;
L_111b3e33:;
  /* 111b3e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3e36 mov ecx, dword ptr [0x111cfc98] */
  ECX = (r32((uint32_t)(0x111cfc98)));
  /* 111b3e3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b3e3e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 111b3e42 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 111b3e45 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_111b3e48:;
  /* 111b3e48 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3e4c je 0x111b3e89 */
  if (C.zf) goto L_111b3e89;
  /* 111b3e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 111b3e50 push 0xa */
  push32((uint32_t)(0xau));
  /* 111b3e52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b3e55 push eax */
  push32((uint32_t)(EAX));
  /* 111b3e56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b3e59 push ecx */
  push32((uint32_t)(ECX));
  /* 111b3e5a call 0x111b4d20 */
  push32(0x111b3e5fu); f_111b4d20();
  /* 111b3e5f mov ecx, eax */
  ECX = (EAX);
  /* 111b3e61 mov esi, edx */
  ESI = (EDX);
  /* 111b3e63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b3e66 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3e69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b3e6a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3e6c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3e6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b3e71 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 111b3e74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3e77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b3e79 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b3e7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b3e7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b3e81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3e84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111b3e87 jmp 0x111b3e17 */
  goto L_111b3e17;
L_111b3e89:;
  /* 111b3e89 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3e8d jne 0x111b3e9e */
  if (!C.zf) goto L_111b3e9e;
  /* 111b3e8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b3e92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b3e94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b3e97 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3e9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b3e9c jmp 0x111b3ea4 */
  goto L_111b3ea4;
L_111b3e9e:;
  /* 111b3e9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b3ea1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_111b3ea4:;
  /* 111b3ea4 pop esi */
  ESI = (pop32());
  /* 111b3ea5 mov esp, ebp */
  ESP = (EBP);
  /* 111b3ea7 pop ebp */
  EBP = (pop32());
  /* 111b3ea8 ret  */
  ESPCHK(0x111b3d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013eb0 @ 0x111b3eb0 (61 bytes, 18 insns) */
void f_111b3eb0(void) {
  FTRACE(0x111b3eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3eb1 mov ebp, esp */
  EBP = (ESP);
  /* 111b3eb3 cmp dword ptr [0x111d19b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3eba jne 0x111b3eeb */
  if (!C.zf) goto L_111b3eeb;
  /* 111b3ebc push 0xb */
  push32((uint32_t)(0xbu));
  /* 111b3ebe call 0x111a8db0 */
  push32(0x111b3ec3u); f_111a8db0();
  /* 111b3ec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3ec6 cmp dword ptr [0x111d19b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3ecd jne 0x111b3ee1 */
  if (!C.zf) goto L_111b3ee1;
  /* 111b3ecf call 0x111b3f10 */
  push32(0x111b3ed4u); f_111b3f10();
  /* 111b3ed4 mov eax, dword ptr [0x111d19b8] */
  EAX = (r32((uint32_t)(0x111d19b8)));
  /* 111b3ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3edc mov dword ptr [0x111d19b8], eax */
  w32((uint32_t)(0x111d19b8), (EAX));
L_111b3ee1:;
  /* 111b3ee1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111b3ee3 call 0x111a8e50 */
  push32(0x111b3ee8u); f_111a8e50();
  /* 111b3ee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b3eeb:;
  /* 111b3eeb pop ebp */
  EBP = (pop32());
  /* 111b3eec ret  */
  ESPCHK(0x111b3eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ef0 @ 0x111b3ef0 (30 bytes, 11 insns) */
void f_111b3ef0(void) {
  FTRACE(0x111b3ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3ef1 mov ebp, esp */
  EBP = (ESP);
  /* 111b3ef3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111b3ef5 call 0x111a8db0 */
  push32(0x111b3efau); f_111a8db0();
  /* 111b3efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3efd call 0x111b3f10 */
  push32(0x111b3f02u); f_111b3f10();
  /* 111b3f02 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111b3f04 call 0x111a8e50 */
  push32(0x111b3f09u); f_111a8e50();
  /* 111b3f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3f0c pop ebp */
  EBP = (pop32());
  /* 111b3f0d ret  */
  ESPCHK(0x111b3ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f10 @ 0x111b3f10 (939 bytes, 266 insns) */
void f_111b3f10(void) {
  FTRACE(0x111b3f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b3f10 push ebp */
  push32((uint32_t)(EBP));
  /* 111b3f11 mov ebp, esp */
  EBP = (ESP);
  /* 111b3f13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3f16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111b3f1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 111b3f1f call 0x111a8db0 */
  push32(0x111b3f24u); f_111a8db0();
  /* 111b3f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3f27 mov dword ptr [0x111d1900], 0 */
  w32((uint32_t)(0x111d1900), (0x0u));
  /* 111b3f31 mov dword ptr [0x111d0e38], 0xffffffff */
  w32((uint32_t)(0x111d0e38), (0xffffffffu));
  /* 111b3f3b mov eax, dword ptr [0x111d0e38] */
  EAX = (r32((uint32_t)(0x111d0e38)));
  /* 111b3f40 mov dword ptr [0x111d0e28], eax */
  w32((uint32_t)(0x111d0e28), (EAX));
  /* 111b3f45 push 0x111cdb68 */
  push32((uint32_t)(0x111cdb68u));
  /* 111b3f4a call 0x111b4d90 */
  push32(0x111b3f4fu); f_111b4d90();
  /* 111b3f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3f52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b3f55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3f59 jne 0x111b4093 */
  if (!C.zf) goto L_111b4093;
  /* 111b3f5f push 0xc */
  push32((uint32_t)(0xcu));
  /* 111b3f61 call 0x111a8e50 */
  push32(0x111b3f66u); f_111a8e50();
  /* 111b3f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3f69 push 0x111d1908 */
  push32((uint32_t)(0x111d1908u));
  /* 111b3f6e call dword ptr [0x111d42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42d8))), 0x111b3f74u);
  /* 111b3f74 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3f77 je 0x111b408e */
  if (C.zf) goto L_111b408e;
  /* 111b3f7d mov dword ptr [0x111d1900], 1 */
  w32((uint32_t)(0x111d1900), (0x1u));
  /* 111b3f87 mov ecx, dword ptr [0x111d1908] */
  ECX = (r32((uint32_t)(0x111d1908)));
  /* 111b3f8d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b3f90 mov dword ptr [0x111d0d90], ecx */
  w32((uint32_t)(0x111d0d90), (ECX));
  /* 111b3f96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b3f98 mov dx, word ptr [0x111d194e] */
  DX = (r16((uint32_t)(0x111d194e)));
  /* 111b3f9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b3fa1 je 0x111b3fb9 */
  if (C.zf) goto L_111b3fb9;
  /* 111b3fa3 mov eax, dword ptr [0x111d195c] */
  EAX = (r32((uint32_t)(0x111d195c)));
  /* 111b3fa8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b3fab mov ecx, dword ptr [0x111d0d90] */
  ECX = (r32((uint32_t)(0x111d0d90)));
  /* 111b3fb1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b3fb3 mov dword ptr [0x111d0d90], ecx */
  w32((uint32_t)(0x111d0d90), (ECX));
L_111b3fb9:;
  /* 111b3fb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b3fbb mov dx, word ptr [0x111d19a2] */
  DX = (r16((uint32_t)(0x111d19a2)));
  /* 111b3fc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b3fc4 je 0x111b3fee */
  if (C.zf) goto L_111b3fee;
  /* 111b3fc6 cmp dword ptr [0x111d19b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b3fcd je 0x111b3fee */
  if (C.zf) goto L_111b3fee;
  /* 111b3fcf mov dword ptr [0x111d0d94], 1 */
  w32((uint32_t)(0x111d0d94), (0x1u));
  /* 111b3fd9 mov eax, dword ptr [0x111d19b0] */
  EAX = (r32((uint32_t)(0x111d19b0)));
  /* 111b3fde sub eax, dword ptr [0x111d195c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d195c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b3fe4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b3fe7 mov dword ptr [0x111d0d98], eax */
  w32((uint32_t)(0x111d0d98), (EAX));
  /* 111b3fec jmp 0x111b4002 */
  goto L_111b4002;
L_111b3fee:;
  /* 111b3fee mov dword ptr [0x111d0d94], 0 */
  w32((uint32_t)(0x111d0d94), (0x0u));
  /* 111b3ff8 mov dword ptr [0x111d0d98], 0 */
  w32((uint32_t)(0x111d0d98), (0x0u));
L_111b4002:;
  /* 111b4002 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 111b4005 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4006 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4008 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111b400a mov edx, dword ptr [0x111d0e1c] */
  EDX = (r32((uint32_t)(0x111d0e1c)));
  /* 111b4010 push edx */
  push32((uint32_t)(EDX));
  /* 111b4011 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b4013 push 0x111d190c */
  push32((uint32_t)(0x111d190cu));
  /* 111b4018 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111b401d mov eax, dword ptr [0x111d1870] */
  EAX = (r32((uint32_t)(0x111d1870)));
  /* 111b4022 push eax */
  push32((uint32_t)(EAX));
  /* 111b4023 call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111b4029u);
  /* 111b4029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b402b je 0x111b403f */
  if (C.zf) goto L_111b403f;
  /* 111b402d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4031 jne 0x111b403f */
  if (!C.zf) goto L_111b403f;
  /* 111b4033 mov ecx, dword ptr [0x111d0e1c] */
  ECX = (r32((uint32_t)(0x111d0e1c)));
  /* 111b4039 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 111b403d jmp 0x111b4048 */
  goto L_111b4048;
L_111b403f:;
  /* 111b403f mov edx, dword ptr [0x111d0e1c] */
  EDX = (r32((uint32_t)(0x111d0e1c)));
  /* 111b4045 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_111b4048:;
  /* 111b4048 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 111b404b push eax */
  push32((uint32_t)(EAX));
  /* 111b404c push 0 */
  push32((uint32_t)(0x0u));
  /* 111b404e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111b4050 mov ecx, dword ptr [0x111d0e20] */
  ECX = (r32((uint32_t)(0x111d0e20)));
  /* 111b4056 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4057 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b4059 push 0x111d1960 */
  push32((uint32_t)(0x111d1960u));
  /* 111b405e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111b4063 mov edx, dword ptr [0x111d1870] */
  EDX = (r32((uint32_t)(0x111d1870)));
  /* 111b4069 push edx */
  push32((uint32_t)(EDX));
  /* 111b406a call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111b4070u);
  /* 111b4070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b4072 je 0x111b4085 */
  if (C.zf) goto L_111b4085;
  /* 111b4074 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4078 jne 0x111b4085 */
  if (!C.zf) goto L_111b4085;
  /* 111b407a mov eax, dword ptr [0x111d0e20] */
  EAX = (r32((uint32_t)(0x111d0e20)));
  /* 111b407f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 111b4083 jmp 0x111b408e */
  goto L_111b408e;
L_111b4085:;
  /* 111b4085 mov ecx, dword ptr [0x111d0e20] */
  ECX = (r32((uint32_t)(0x111d0e20)));
  /* 111b408b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_111b408e:;
  /* 111b408e jmp 0x111b42b7 */
  goto L_111b42b7;
L_111b4093:;
  /* 111b4093 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4096 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b4099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b409b je 0x111b40bd */
  if (C.zf) goto L_111b40bd;
  /* 111b409d cmp dword ptr [0x111d19b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b40a4 je 0x111b40cc */
  if (C.zf) goto L_111b40cc;
  /* 111b40a6 mov ecx, dword ptr [0x111d19b4] */
  ECX = (r32((uint32_t)(0x111d19b4)));
  /* 111b40ac push ecx */
  push32((uint32_t)(ECX));
  /* 111b40ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b40b0 push edx */
  push32((uint32_t)(EDX));
  /* 111b40b1 call 0x111b1040 */
  push32(0x111b40b6u); f_111b1040();
  /* 111b40b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b40b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b40bb jne 0x111b40cc */
  if (!C.zf) goto L_111b40cc;
L_111b40bd:;
  /* 111b40bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 111b40bf call 0x111a8e50 */
  push32(0x111b40c4u); f_111a8e50();
  /* 111b40c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b40c7 jmp 0x111b42b7 */
  goto L_111b42b7;
L_111b40cc:;
  /* 111b40cc push 2 */
  push32((uint32_t)(0x2u));
  /* 111b40ce mov eax, dword ptr [0x111d19b4] */
  EAX = (r32((uint32_t)(0x111d19b4)));
  /* 111b40d3 push eax */
  push32((uint32_t)(EAX));
  /* 111b40d4 call 0x111a5e40 */
  push32(0x111b40d9u); f_111a5e40();
  /* 111b40d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b40dc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 111b40e1 push 0x111cdb60 */
  push32((uint32_t)(0x111cdb60u));
  /* 111b40e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b40e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b40eb push ecx */
  push32((uint32_t)(ECX));
  /* 111b40ec call 0x111a81e0 */
  push32(0x111b40f1u); f_111a81e0();
  /* 111b40f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b40f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b40f7 push eax */
  push32((uint32_t)(EAX));
  /* 111b40f8 call 0x111a53b0 */
  push32(0x111b40fdu); f_111a53b0();
  /* 111b40fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4100 mov dword ptr [0x111d19b4], eax */
  w32((uint32_t)(0x111d19b4), (EAX));
  /* 111b4105 cmp dword ptr [0x111d19b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b410c jne 0x111b411d */
  if (!C.zf) goto L_111b411d;
  /* 111b410e push 0xc */
  push32((uint32_t)(0xcu));
  /* 111b4110 call 0x111a8e50 */
  push32(0x111b4115u); f_111a8e50();
  /* 111b4115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4118 jmp 0x111b42b7 */
  goto L_111b42b7;
L_111b411d:;
  /* 111b411d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4120 push edx */
  push32((uint32_t)(EDX));
  /* 111b4121 mov eax, dword ptr [0x111d19b4] */
  EAX = (r32((uint32_t)(0x111d19b4)));
  /* 111b4126 push eax */
  push32((uint32_t)(EAX));
  /* 111b4127 call 0x111a8360 */
  push32(0x111b412cu); f_111a8360();
  /* 111b412c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b412f push 0xc */
  push32((uint32_t)(0xcu));
  /* 111b4131 call 0x111a8e50 */
  push32(0x111b4136u); f_111a8e50();
  /* 111b4136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4139 push 3 */
  push32((uint32_t)(0x3u));
  /* 111b413b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b413e push ecx */
  push32((uint32_t)(ECX));
  /* 111b413f mov edx, dword ptr [0x111d0e1c] */
  EDX = (r32((uint32_t)(0x111d0e1c)));
  /* 111b4145 push edx */
  push32((uint32_t)(EDX));
  /* 111b4146 call 0x111a8bd0 */
  push32(0x111b414bu); f_111a8bd0();
  /* 111b414b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b414e mov eax, dword ptr [0x111d0e1c] */
  EAX = (r32((uint32_t)(0x111d0e1c)));
  /* 111b4153 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 111b4157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b415a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b415d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b4160 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4163 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b4166 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4169 jne 0x111b417d */
  if (!C.zf) goto L_111b417d;
  /* 111b416b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b416e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4171 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b4174 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4177 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b417a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111b417d:;
  /* 111b417d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4180 push eax */
  push32((uint32_t)(EAX));
  /* 111b4181 call 0x111b3c60 */
  push32(0x111b4186u); f_111b3c60();
  /* 111b4186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4189 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b418f mov dword ptr [0x111d0d90], eax */
  w32((uint32_t)(0x111d0d90), (EAX));
L_111b4194:;
  /* 111b4194 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4197 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b419a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b419d je 0x111b41b5 */
  if (C.zf) goto L_111b41b5;
  /* 111b419f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b41a2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b41a5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b41a8 jl 0x111b41c0 */
  if ((C.sf!=C.of)) goto L_111b41c0;
  /* 111b41aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b41ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b41b0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b41b3 jg 0x111b41c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b41c0;
L_111b41b5:;
  /* 111b41b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b41b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b41bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b41be jmp 0x111b4194 */
  goto L_111b4194;
L_111b41c0:;
  /* 111b41c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b41c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b41c6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b41c9 jne 0x111b4265 */
  if (!C.zf) goto L_111b4265;
  /* 111b41cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b41d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b41d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b41d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b41db push edx */
  push32((uint32_t)(EDX));
  /* 111b41dc call 0x111b3c60 */
  push32(0x111b41e1u); f_111b3c60();
  /* 111b41e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b41e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b41e7 mov ecx, dword ptr [0x111d0d90] */
  ECX = (r32((uint32_t)(0x111d0d90)));
  /* 111b41ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b41ef mov dword ptr [0x111d0d90], ecx */
  w32((uint32_t)(0x111d0d90), (ECX));
L_111b41f5:;
  /* 111b41f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b41f8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b41fb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b41fe jl 0x111b4216 */
  if ((C.sf!=C.of)) goto L_111b4216;
  /* 111b4200 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4203 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b4206 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4209 jg 0x111b4216 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b4216;
  /* 111b420b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b420e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4211 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b4214 jmp 0x111b41f5 */
  goto L_111b41f5;
L_111b4216:;
  /* 111b4216 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4219 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b421c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b421f jne 0x111b4265 */
  if (!C.zf) goto L_111b4265;
  /* 111b4221 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4224 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4227 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b422a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b422d push ecx */
  push32((uint32_t)(ECX));
  /* 111b422e call 0x111b3c60 */
  push32(0x111b4233u); f_111b3c60();
  /* 111b4233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4236 mov edx, dword ptr [0x111d0d90] */
  EDX = (r32((uint32_t)(0x111d0d90)));
  /* 111b423c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b423e mov dword ptr [0x111d0d90], edx */
  w32((uint32_t)(0x111d0d90), (EDX));
L_111b4244:;
  /* 111b4244 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b424a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b424d jl 0x111b4265 */
  if ((C.sf!=C.of)) goto L_111b4265;
  /* 111b424f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4252 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111b4255 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4258 jg 0x111b4265 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b4265;
  /* 111b425a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b425d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4260 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b4263 jmp 0x111b4244 */
  goto L_111b4244;
L_111b4265:;
  /* 111b4265 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4269 je 0x111b4279 */
  if (C.zf) goto L_111b4279;
  /* 111b426b mov edx, dword ptr [0x111d0d90] */
  EDX = (r32((uint32_t)(0x111d0d90)));
  /* 111b4271 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b4273 mov dword ptr [0x111d0d90], edx */
  w32((uint32_t)(0x111d0d90), (EDX));
L_111b4279:;
  /* 111b4279 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b427c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111b427f mov dword ptr [0x111d0d94], ecx */
  w32((uint32_t)(0x111d0d94), (ECX));
  /* 111b4285 cmp dword ptr [0x111d0d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d0d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b428c je 0x111b42ae */
  if (C.zf) goto L_111b42ae;
  /* 111b428e push 3 */
  push32((uint32_t)(0x3u));
  /* 111b4290 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4293 push edx */
  push32((uint32_t)(EDX));
  /* 111b4294 mov eax, dword ptr [0x111d0e20] */
  EAX = (r32((uint32_t)(0x111d0e20)));
  /* 111b4299 push eax */
  push32((uint32_t)(EAX));
  /* 111b429a call 0x111a8bd0 */
  push32(0x111b429fu); f_111a8bd0();
  /* 111b429f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b42a2 mov ecx, dword ptr [0x111d0e20] */
  ECX = (r32((uint32_t)(0x111d0e20)));
  /* 111b42a8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 111b42ac jmp 0x111b42b7 */
  goto L_111b42b7;
L_111b42ae:;
  /* 111b42ae mov edx, dword ptr [0x111d0e20] */
  EDX = (r32((uint32_t)(0x111d0e20)));
  /* 111b42b4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_111b42b7:;
  /* 111b42b7 mov esp, ebp */
  ESP = (EBP);
  /* 111b42b9 pop ebp */
  EBP = (pop32());
  /* 111b42ba ret  */
  ESPCHK(0x111b3f10u, _esp0);
  ESP += 4; return;
}

/* FUN_100142c0 @ 0x111b42c0 (46 bytes, 18 insns) */
void f_111b42c0(void) {
  FTRACE(0x111b42c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b42c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b42c1 mov ebp, esp */
  EBP = (ESP);
  /* 111b42c3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b42c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111b42c6 call 0x111a8db0 */
  push32(0x111b42cbu); f_111a8db0();
  /* 111b42cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b42ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b42d1 push eax */
  push32((uint32_t)(EAX));
  /* 111b42d2 call 0x111b42f0 */
  push32(0x111b42d7u); f_111b42f0();
  /* 111b42d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b42da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b42dd push 0xb */
  push32((uint32_t)(0xbu));
  /* 111b42df call 0x111a8e50 */
  push32(0x111b42e4u); f_111a8e50();
  /* 111b42e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b42e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b42ea mov esp, ebp */
  ESP = (EBP);
  /* 111b42ec pop ebp */
  EBP = (pop32());
  /* 111b42ed ret  */
  ESPCHK(0x111b42c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100142f0 @ 0x111b42f0 (762 bytes, 246 insns) */
void f_111b42f0(void) {
  FTRACE(0x111b42f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b42f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b42f1 mov ebp, esp */
  EBP = (ESP);
  /* 111b42f3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b42f4 cmp dword ptr [0x111d0d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d0d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b42fb jne 0x111b4304 */
  if (!C.zf) goto L_111b4304;
  /* 111b42fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b42ff jmp 0x111b45e6 */
  goto L_111b45e6;
L_111b4304:;
  /* 111b4304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4307 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111b430a cmp ecx, dword ptr [0x111d0e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d0e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4310 jne 0x111b4324 */
  if (!C.zf) goto L_111b4324;
  /* 111b4312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4315 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111b4318 cmp eax, dword ptr [0x111d0e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d0e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b431e je 0x111b44eb */
  if (C.zf) goto L_111b44eb;
L_111b4324:;
  /* 111b4324 cmp dword ptr [0x111d1900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b432b je 0x111b44a5 */
  if (C.zf) goto L_111b44a5;
  /* 111b4331 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b4333 mov cx, word ptr [0x111d19a0] */
  CX = (r16((uint32_t)(0x111d19a0)));
  /* 111b433a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b433c jne 0x111b4399 */
  if (!C.zf) goto L_111b4399;
  /* 111b433e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b4340 mov dx, word ptr [0x111d19ae] */
  DX = (r16((uint32_t)(0x111d19ae)));
  /* 111b4347 push edx */
  push32((uint32_t)(EDX));
  /* 111b4348 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b434a mov ax, word ptr [0x111d19ac] */
  AX = (r16((uint32_t)(0x111d19ac)));
  /* 111b4350 push eax */
  push32((uint32_t)(EAX));
  /* 111b4351 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b4353 mov cx, word ptr [0x111d19aa] */
  CX = (r16((uint32_t)(0x111d19aa)));
  /* 111b435a push ecx */
  push32((uint32_t)(ECX));
  /* 111b435b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b435d mov dx, word ptr [0x111d19a8] */
  DX = (r16((uint32_t)(0x111d19a8)));
  /* 111b4364 push edx */
  push32((uint32_t)(EDX));
  /* 111b4365 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4369 mov ax, word ptr [0x111d19a4] */
  AX = (r16((uint32_t)(0x111d19a4)));
  /* 111b436f push eax */
  push32((uint32_t)(EAX));
  /* 111b4370 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b4372 mov cx, word ptr [0x111d19a6] */
  CX = (r16((uint32_t)(0x111d19a6)));
  /* 111b4379 push ecx */
  push32((uint32_t)(ECX));
  /* 111b437a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b437c mov dx, word ptr [0x111d19a2] */
  DX = (r16((uint32_t)(0x111d19a2)));
  /* 111b4383 push edx */
  push32((uint32_t)(EDX));
  /* 111b4384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4387 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111b438a push ecx */
  push32((uint32_t)(ECX));
  /* 111b438b push 1 */
  push32((uint32_t)(0x1u));
  /* 111b438d push 1 */
  push32((uint32_t)(0x1u));
  /* 111b438f call 0x111b45f0 */
  push32(0x111b4394u); f_111b45f0();
  /* 111b4394 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4397 jmp 0x111b43ea */
  goto L_111b43ea;
L_111b4399:;
  /* 111b4399 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b439b mov dx, word ptr [0x111d19ae] */
  DX = (r16((uint32_t)(0x111d19ae)));
  /* 111b43a2 push edx */
  push32((uint32_t)(EDX));
  /* 111b43a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b43a5 mov ax, word ptr [0x111d19ac] */
  AX = (r16((uint32_t)(0x111d19ac)));
  /* 111b43ab push eax */
  push32((uint32_t)(EAX));
  /* 111b43ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b43ae mov cx, word ptr [0x111d19aa] */
  CX = (r16((uint32_t)(0x111d19aa)));
  /* 111b43b5 push ecx */
  push32((uint32_t)(ECX));
  /* 111b43b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b43b8 mov dx, word ptr [0x111d19a8] */
  DX = (r16((uint32_t)(0x111d19a8)));
  /* 111b43bf push edx */
  push32((uint32_t)(EDX));
  /* 111b43c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b43c2 mov ax, word ptr [0x111d19a6] */
  AX = (r16((uint32_t)(0x111d19a6)));
  /* 111b43c8 push eax */
  push32((uint32_t)(EAX));
  /* 111b43c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b43cb push 0 */
  push32((uint32_t)(0x0u));
  /* 111b43cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b43cf mov cx, word ptr [0x111d19a2] */
  CX = (r16((uint32_t)(0x111d19a2)));
  /* 111b43d6 push ecx */
  push32((uint32_t)(ECX));
  /* 111b43d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b43da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111b43dd push eax */
  push32((uint32_t)(EAX));
  /* 111b43de push 0 */
  push32((uint32_t)(0x0u));
  /* 111b43e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b43e2 call 0x111b45f0 */
  push32(0x111b43e7u); f_111b45f0();
  /* 111b43e7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b43ea:;
  /* 111b43ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b43ec mov cx, word ptr [0x111d194c] */
  CX = (r16((uint32_t)(0x111d194c)));
  /* 111b43f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b43f5 jne 0x111b4452 */
  if (!C.zf) goto L_111b4452;
  /* 111b43f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b43f9 mov dx, word ptr [0x111d195a] */
  DX = (r16((uint32_t)(0x111d195a)));
  /* 111b4400 push edx */
  push32((uint32_t)(EDX));
  /* 111b4401 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4403 mov ax, word ptr [0x111d1958] */
  AX = (r16((uint32_t)(0x111d1958)));
  /* 111b4409 push eax */
  push32((uint32_t)(EAX));
  /* 111b440a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b440c mov cx, word ptr [0x111d1956] */
  CX = (r16((uint32_t)(0x111d1956)));
  /* 111b4413 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4414 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b4416 mov dx, word ptr [0x111d1954] */
  DX = (r16((uint32_t)(0x111d1954)));
  /* 111b441d push edx */
  push32((uint32_t)(EDX));
  /* 111b441e push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4420 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4422 mov ax, word ptr [0x111d1950] */
  AX = (r16((uint32_t)(0x111d1950)));
  /* 111b4428 push eax */
  push32((uint32_t)(EAX));
  /* 111b4429 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b442b mov cx, word ptr [0x111d1952] */
  CX = (r16((uint32_t)(0x111d1952)));
  /* 111b4432 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4433 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b4435 mov dx, word ptr [0x111d194e] */
  DX = (r16((uint32_t)(0x111d194e)));
  /* 111b443c push edx */
  push32((uint32_t)(EDX));
  /* 111b443d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4440 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111b4443 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4444 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4446 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4448 call 0x111b45f0 */
  push32(0x111b444du); f_111b45f0();
  /* 111b444d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4450 jmp 0x111b44a3 */
  goto L_111b44a3;
L_111b4452:;
  /* 111b4452 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b4454 mov dx, word ptr [0x111d195a] */
  DX = (r16((uint32_t)(0x111d195a)));
  /* 111b445b push edx */
  push32((uint32_t)(EDX));
  /* 111b445c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b445e mov ax, word ptr [0x111d1958] */
  AX = (r16((uint32_t)(0x111d1958)));
  /* 111b4464 push eax */
  push32((uint32_t)(EAX));
  /* 111b4465 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b4467 mov cx, word ptr [0x111d1956] */
  CX = (r16((uint32_t)(0x111d1956)));
  /* 111b446e push ecx */
  push32((uint32_t)(ECX));
  /* 111b446f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b4471 mov dx, word ptr [0x111d1954] */
  DX = (r16((uint32_t)(0x111d1954)));
  /* 111b4478 push edx */
  push32((uint32_t)(EDX));
  /* 111b4479 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b447b mov ax, word ptr [0x111d1952] */
  AX = (r16((uint32_t)(0x111d1952)));
  /* 111b4481 push eax */
  push32((uint32_t)(EAX));
  /* 111b4482 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4484 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4486 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b4488 mov cx, word ptr [0x111d194e] */
  CX = (r16((uint32_t)(0x111d194e)));
  /* 111b448f push ecx */
  push32((uint32_t)(ECX));
  /* 111b4490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4493 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111b4496 push eax */
  push32((uint32_t)(EAX));
  /* 111b4497 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4499 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b449b call 0x111b45f0 */
  push32(0x111b44a0u); f_111b45f0();
  /* 111b44a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b44a3:;
  /* 111b44a3 jmp 0x111b44eb */
  goto L_111b44eb;
L_111b44a5:;
  /* 111b44a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44ab push 2 */
  push32((uint32_t)(0x2u));
  /* 111b44ad push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44af push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b44b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 111b44b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b44b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 111b44bb push edx */
  push32((uint32_t)(EDX));
  /* 111b44bc push 1 */
  push32((uint32_t)(0x1u));
  /* 111b44be push 1 */
  push32((uint32_t)(0x1u));
  /* 111b44c0 call 0x111b45f0 */
  push32(0x111b44c5u); f_111b45f0();
  /* 111b44c5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b44c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44ca push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44cc push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44ce push 2 */
  push32((uint32_t)(0x2u));
  /* 111b44d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 111b44d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 111b44d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b44db mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111b44de push ecx */
  push32((uint32_t)(ECX));
  /* 111b44df push 1 */
  push32((uint32_t)(0x1u));
  /* 111b44e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b44e3 call 0x111b45f0 */
  push32(0x111b44e8u); f_111b45f0();
  /* 111b44e8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b44eb:;
  /* 111b44eb mov edx, dword ptr [0x111d0e2c] */
  EDX = (r32((uint32_t)(0x111d0e2c)));
  /* 111b44f1 cmp edx, dword ptr [0x111d0e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111d0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b44f7 jge 0x111b4544 */
  if ((C.sf==C.of)) goto L_111b4544;
  /* 111b44f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b44fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 111b44ff cmp ecx, dword ptr [0x111d0e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4505 jl 0x111b4515 */
  if ((C.sf!=C.of)) goto L_111b4515;
  /* 111b4507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b450a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 111b450d cmp eax, dword ptr [0x111d0e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4513 jle 0x111b451c */
  if ((C.zf||C.sf!=C.of)) goto L_111b451c;
L_111b4515:;
  /* 111b4515 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4517 jmp 0x111b45e6 */
  goto L_111b45e6;
L_111b451c:;
  /* 111b451c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b451f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 111b4522 cmp edx, dword ptr [0x111d0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111d0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4528 jle 0x111b4542 */
  if ((C.zf||C.sf!=C.of)) goto L_111b4542;
  /* 111b452a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b452d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 111b4530 cmp ecx, dword ptr [0x111d0e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4536 jge 0x111b4542 */
  if ((C.sf==C.of)) goto L_111b4542;
  /* 111b4538 mov eax, 1 */
  EAX = (0x1u);
  /* 111b453d jmp 0x111b45e6 */
  goto L_111b45e6;
L_111b4542:;
  /* 111b4542 jmp 0x111b4587 */
  goto L_111b4587;
L_111b4544:;
  /* 111b4544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4547 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 111b454a cmp eax, dword ptr [0x111d0e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4550 jl 0x111b4560 */
  if ((C.sf!=C.of)) goto L_111b4560;
  /* 111b4552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4555 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 111b4558 cmp edx, dword ptr [0x111d0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111d0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b455e jle 0x111b4567 */
  if ((C.zf||C.sf!=C.of)) goto L_111b4567;
L_111b4560:;
  /* 111b4560 mov eax, 1 */
  EAX = (0x1u);
  /* 111b4565 jmp 0x111b45e6 */
  goto L_111b45e6;
L_111b4567:;
  /* 111b4567 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b456a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 111b456d cmp ecx, dword ptr [0x111d0e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4573 jle 0x111b4587 */
  if ((C.zf||C.sf!=C.of)) goto L_111b4587;
  /* 111b4575 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4578 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 111b457b cmp eax, dword ptr [0x111d0e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4581 jge 0x111b4587 */
  if ((C.sf==C.of)) goto L_111b4587;
  /* 111b4583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4585 jmp 0x111b45e6 */
  goto L_111b45e6;
L_111b4587:;
  /* 111b4587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b458a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111b458d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b4590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4593 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b4595 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4597 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b459a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111b459d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b45a3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b45a5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b45ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b45ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b45b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 111b45b4 cmp edx, dword ptr [0x111d0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111d0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b45ba jne 0x111b45d2 */
  if (!C.zf) goto L_111b45d2;
  /* 111b45bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b45bf cmp eax, dword ptr [0x111d0e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d0e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b45c5 jl 0x111b45ce */
  if ((C.sf!=C.of)) goto L_111b45ce;
  /* 111b45c7 mov eax, 1 */
  EAX = (0x1u);
  /* 111b45cc jmp 0x111b45e6 */
  goto L_111b45e6;
L_111b45ce:;
  /* 111b45ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b45d0 jmp 0x111b45e6 */
  goto L_111b45e6;
L_111b45d2:;
  /* 111b45d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b45d5 cmp ecx, dword ptr [0x111d0e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d0e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b45db jge 0x111b45e4 */
  if ((C.sf==C.of)) goto L_111b45e4;
  /* 111b45dd mov eax, 1 */
  EAX = (0x1u);
  /* 111b45e2 jmp 0x111b45e6 */
  goto L_111b45e6;
L_111b45e4:;
  /* 111b45e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b45e6:;
  /* 111b45e6 mov esp, ebp */
  ESP = (EBP);
  /* 111b45e8 pop ebp */
  EBP = (pop32());
  /* 111b45e9 ret  */
  ESPCHK(0x111b42f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100145f0 @ 0x111b45f0 (504 bytes, 145 insns) */
void f_111b45f0(void) {
  FTRACE(0x111b45f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b45f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b45f1 mov ebp, esp */
  EBP = (ESP);
  /* 111b45f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b45f6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b45fa jne 0x111b46cc */
  if (!C.zf) goto L_111b46cc;
  /* 111b4600 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4603 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111b4606 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b4608 jne 0x111b4619 */
  if (!C.zf) goto L_111b4619;
  /* 111b460a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b460d mov edx, dword ptr [ecx*4 + 0x111d0e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111d0e4c)));
  /* 111b4614 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111b4617 jmp 0x111b4626 */
  goto L_111b4626;
L_111b4619:;
  /* 111b4619 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b461c mov ecx, dword ptr [eax*4 + 0x111d0e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x111d0e80)));
  /* 111b4623 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_111b4626:;
  /* 111b4626 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4629 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b462c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b462f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4632 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b4635 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b463b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b463e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4640 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4643 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b4646 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 111b4649 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 111b464d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111b464e mov ecx, 7 */
  ECX = (0x7u);
  /* 111b4653 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111b4655 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111b4658 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b465b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b465e jge 0x111b4679 */
  if ((C.sf==C.of)) goto L_111b4679;
  /* 111b4660 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111b4663 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b4666 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b4669 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b466c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b466f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4672 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4674 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b4677 jmp 0x111b468d */
  goto L_111b468d;
L_111b4679:;
  /* 111b4679 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111b467c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b467f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b4682 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b4685 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4688 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b468a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111b468d:;
  /* 111b468d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4691 jne 0x111b46ca */
  if (!C.zf) goto L_111b46ca;
  /* 111b4693 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4696 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111b4699 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b469b jne 0x111b46ac */
  if (!C.zf) goto L_111b46ac;
  /* 111b469d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b46a0 mov eax, dword ptr [edx*4 + 0x111d0e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111d0e50)));
  /* 111b46a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111b46aa jmp 0x111b46b9 */
  goto L_111b46b9;
L_111b46ac:;
  /* 111b46ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b46af mov edx, dword ptr [ecx*4 + 0x111d0e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111d0e84)));
  /* 111b46b6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_111b46b9:;
  /* 111b46b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b46bc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b46bf jle 0x111b46ca */
  if ((C.zf||C.sf!=C.of)) goto L_111b46ca;
  /* 111b46c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b46c4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b46c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111b46ca:;
  /* 111b46ca jmp 0x111b4701 */
  goto L_111b4701;
L_111b46cc:;
  /* 111b46cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b46cf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111b46d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b46d4 jne 0x111b46e5 */
  if (!C.zf) goto L_111b46e5;
  /* 111b46d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b46d9 mov ecx, dword ptr [eax*4 + 0x111d0e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x111d0e4c)));
  /* 111b46e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111b46e3 jmp 0x111b46f2 */
  goto L_111b46f2;
L_111b46e5:;
  /* 111b46e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b46e8 mov eax, dword ptr [edx*4 + 0x111d0e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111d0e80)));
  /* 111b46ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_111b46f2:;
  /* 111b46f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b46f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111b46f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b46fb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b46fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111b4701:;
  /* 111b4701 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4705 jne 0x111b4741 */
  if (!C.zf) goto L_111b4741;
  /* 111b4707 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b470a mov dword ptr [0x111d0e2c], eax */
  w32((uint32_t)(0x111d0e2c), (EAX));
  /* 111b470f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 111b4712 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b4715 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 111b4718 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b471a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b471d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 111b4720 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4722 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b4728 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 111b472b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b472d mov dword ptr [0x111d0e30], ecx */
  w32((uint32_t)(0x111d0e30), (ECX));
  /* 111b4733 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4736 mov dword ptr [0x111d0e28], edx */
  w32((uint32_t)(0x111d0e28), (EDX));
  /* 111b473c jmp 0x111b47e4 */
  goto L_111b47e4;
L_111b4741:;
  /* 111b4741 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b4744 mov dword ptr [0x111d0e3c], eax */
  w32((uint32_t)(0x111d0e3c), (EAX));
  /* 111b4749 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 111b474c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b474f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 111b4752 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4754 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b4757 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 111b475a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b475c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b4762 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 111b4765 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4767 mov dword ptr [0x111d0e40], ecx */
  w32((uint32_t)(0x111d0e40), (ECX));
  /* 111b476d mov edx, dword ptr [0x111d0d98] */
  EDX = (r32((uint32_t)(0x111d0d98)));
  /* 111b4773 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111b4779 mov eax, dword ptr [0x111d0e40] */
  EAX = (r32((uint32_t)(0x111d0e40)));
  /* 111b477e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4780 mov dword ptr [0x111d0e40], eax */
  w32((uint32_t)(0x111d0e40), (EAX));
  /* 111b4785 cmp dword ptr [0x111d0e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d0e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b478c jge 0x111b47b1 */
  if ((C.sf==C.of)) goto L_111b47b1;
  /* 111b478e mov ecx, dword ptr [0x111d0e40] */
  ECX = (r32((uint32_t)(0x111d0e40)));
  /* 111b4794 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b479a mov dword ptr [0x111d0e40], ecx */
  w32((uint32_t)(0x111d0e40), (ECX));
  /* 111b47a0 mov edx, dword ptr [0x111d0e3c] */
  EDX = (r32((uint32_t)(0x111d0e3c)));
  /* 111b47a6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b47a9 mov dword ptr [0x111d0e3c], edx */
  w32((uint32_t)(0x111d0e3c), (EDX));
  /* 111b47af jmp 0x111b47db */
  goto L_111b47db;
L_111b47b1:;
  /* 111b47b1 cmp dword ptr [0x111d0e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x111d0e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b47bb jl 0x111b47db */
  if ((C.sf!=C.of)) goto L_111b47db;
  /* 111b47bd mov eax, dword ptr [0x111d0e40] */
  EAX = (r32((uint32_t)(0x111d0e40)));
  /* 111b47c2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b47c7 mov dword ptr [0x111d0e40], eax */
  w32((uint32_t)(0x111d0e40), (EAX));
  /* 111b47cc mov ecx, dword ptr [0x111d0e3c] */
  ECX = (r32((uint32_t)(0x111d0e3c)));
  /* 111b47d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b47d5 mov dword ptr [0x111d0e3c], ecx */
  w32((uint32_t)(0x111d0e3c), (ECX));
L_111b47db:;
  /* 111b47db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b47de mov dword ptr [0x111d0e38], edx */
  w32((uint32_t)(0x111d0e38), (EDX));
L_111b47e4:;
  /* 111b47e4 mov esp, ebp */
  ESP = (EBP);
  /* 111b47e6 pop ebp */
  EBP = (pop32());
  /* 111b47e7 ret  */
  ESPCHK(0x111b45f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100147f0 @ 0x111b47f0 (382 bytes, 135 insns) */
void f_111b47f0(void) {
  FTRACE(0x111b47f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b47f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b47f1 mov ebp, esp */
  EBP = (ESP);
  /* 111b47f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b47f5 push 0x111cdb70 */
  push32((uint32_t)(0x111cdb70u));
  /* 111b47fa push 0x111ae4b8 */
  push32((uint32_t)(0x111ae4b8u));
  /* 111b47ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111b4805 push eax */
  push32((uint32_t)(EAX));
  /* 111b4806 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111b480d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4810 push ebx */
  push32((uint32_t)(EBX));
  /* 111b4811 push esi */
  push32((uint32_t)(ESI));
  /* 111b4812 push edi */
  push32((uint32_t)(EDI));
  /* 111b4813 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111b4816 cmp dword ptr [0x111d19bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b481d jne 0x111b4862 */
  if (!C.zf) goto L_111b4862;
  /* 111b481f push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4821 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4823 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4825 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4827 call dword ptr [0x111d42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42d4))), 0x111b482du);
  /* 111b482d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b482f je 0x111b483d */
  if (C.zf) goto L_111b483d;
  /* 111b4831 mov dword ptr [0x111d19bc], 1 */
  w32((uint32_t)(0x111d19bc), (0x1u));
  /* 111b483b jmp 0x111b4862 */
  goto L_111b4862;
L_111b483d:;
  /* 111b483d push 0 */
  push32((uint32_t)(0x0u));
  /* 111b483f push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4841 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4843 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4845 call dword ptr [0x111d42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42ec))), 0x111b484bu);
  /* 111b484b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b484d je 0x111b485b */
  if (C.zf) goto L_111b485b;
  /* 111b484f mov dword ptr [0x111d19bc], 2 */
  w32((uint32_t)(0x111d19bc), (0x2u));
  /* 111b4859 jmp 0x111b4862 */
  goto L_111b4862;
L_111b485b:;
  /* 111b485b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b485d jmp 0x111b4971 */
  goto L_111b4971;
L_111b4862:;
  /* 111b4862 cmp dword ptr [0x111d19bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d19bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4869 jne 0x111b4886 */
  if (!C.zf) goto L_111b4886;
  /* 111b486b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b486e push eax */
  push32((uint32_t)(EAX));
  /* 111b486f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4872 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4873 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b4876 push edx */
  push32((uint32_t)(EDX));
  /* 111b4877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b487a push eax */
  push32((uint32_t)(EAX));
  /* 111b487b call dword ptr [0x111d42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42d4))), 0x111b4881u);
  /* 111b4881 jmp 0x111b4971 */
  goto L_111b4971;
L_111b4886:;
  /* 111b4886 cmp dword ptr [0x111d19bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x111d19bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b488d jne 0x111b496f */
  if (!C.zf) goto L_111b496f;
  /* 111b4893 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4897 jne 0x111b48a2 */
  if (!C.zf) goto L_111b48a2;
  /* 111b4899 mov ecx, dword ptr [0x111d1870] */
  ECX = (r32((uint32_t)(0x111d1870)));
  /* 111b489f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_111b48a2:;
  /* 111b48a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b48a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b48a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b48a9 push edx */
  push32((uint32_t)(EDX));
  /* 111b48aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b48ad push eax */
  push32((uint32_t)(EAX));
  /* 111b48ae call dword ptr [0x111d42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42ec))), 0x111b48b4u);
  /* 111b48b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111b48b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b48bb jne 0x111b48c4 */
  if (!C.zf) goto L_111b48c4;
  /* 111b48bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b48bf jmp 0x111b4971 */
  goto L_111b4971;
L_111b48c4:;
  /* 111b48c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111b48cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b48ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b48d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111b48d3 call 0x111a8550 */
  push32(0x111b48d8u); f_111a8550();
  /* 111b48d8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 111b48db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111b48de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b48e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 111b48e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111b48eb jmp 0x111b4904 */
  goto L_111b4904;
  /* 111b48ed mov eax, 1 */
  EAX = (0x1u);
  /* 111b48f2 ret  */
  ESPCHK(0x111b47f0u, _esp0);
  ESP += 4; return;
  /* 111b48f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111b48f6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 111b48fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111b4904:;
  /* 111b4904 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4908 jne 0x111b490e */
  if (!C.zf) goto L_111b490e;
  /* 111b490a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b490c jmp 0x111b4971 */
  goto L_111b4971;
L_111b490e:;
  /* 111b490e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b4911 push edx */
  push32((uint32_t)(EDX));
  /* 111b4912 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b4915 push eax */
  push32((uint32_t)(EAX));
  /* 111b4916 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b4919 push ecx */
  push32((uint32_t)(ECX));
  /* 111b491a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b491d push edx */
  push32((uint32_t)(EDX));
  /* 111b491e call dword ptr [0x111d42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42ec))), 0x111b4924u);
  /* 111b4924 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b4926 jne 0x111b492c */
  if (!C.zf) goto L_111b492c;
  /* 111b4928 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b492a jmp 0x111b4971 */
  goto L_111b4971;
L_111b492c:;
  /* 111b492c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4930 jne 0x111b494d */
  if (!C.zf) goto L_111b494d;
  /* 111b4932 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4934 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4936 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b4938 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b493b push eax */
  push32((uint32_t)(EAX));
  /* 111b493c push 1 */
  push32((uint32_t)(0x1u));
  /* 111b493e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b4941 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4942 call dword ptr [0x111d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d431c))), 0x111b4948u);
  /* 111b4948 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111b494b jmp 0x111b496a */
  goto L_111b496a;
L_111b494d:;
  /* 111b494d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b4950 push edx */
  push32((uint32_t)(EDX));
  /* 111b4951 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4954 push eax */
  push32((uint32_t)(EAX));
  /* 111b4955 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b4957 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b495a push ecx */
  push32((uint32_t)(ECX));
  /* 111b495b push 1 */
  push32((uint32_t)(0x1u));
  /* 111b495d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b4960 push edx */
  push32((uint32_t)(EDX));
  /* 111b4961 call dword ptr [0x111d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d431c))), 0x111b4967u);
  /* 111b4967 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_111b496a:;
  /* 111b496a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b496d jmp 0x111b4971 */
  goto L_111b4971;
L_111b496f:;
  /* 111b496f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b4971:;
  /* 111b4971 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 111b4974 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b4977 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111b497e pop edi */
  EDI = (pop32());
  /* 111b497f pop esi */
  ESI = (pop32());
  /* 111b4980 pop ebx */
  EBX = (pop32());
  /* 111b4981 mov esp, ebp */
  ESP = (EBP);
  /* 111b4983 pop ebp */
  EBP = (pop32());
  /* 111b4984 ret  */
  ESPCHK(0x111b47f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014990 @ 0x111b4990 (398 bytes, 140 insns) */
void f_111b4990(void) {
  FTRACE(0x111b4990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b4990 push ebp */
  push32((uint32_t)(EBP));
  /* 111b4991 mov ebp, esp */
  EBP = (ESP);
  /* 111b4993 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b4995 push 0x111cdb80 */
  push32((uint32_t)(0x111cdb80u));
  /* 111b499a push 0x111ae4b8 */
  push32((uint32_t)(0x111ae4b8u));
  /* 111b499f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111b49a5 push eax */
  push32((uint32_t)(EAX));
  /* 111b49a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111b49ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b49b0 push ebx */
  push32((uint32_t)(EBX));
  /* 111b49b1 push esi */
  push32((uint32_t)(ESI));
  /* 111b49b2 push edi */
  push32((uint32_t)(EDI));
  /* 111b49b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111b49b6 cmp dword ptr [0x111d19c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b49bd jne 0x111b4a02 */
  if (!C.zf) goto L_111b4a02;
  /* 111b49bf push 0 */
  push32((uint32_t)(0x0u));
  /* 111b49c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b49c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b49c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b49c7 call dword ptr [0x111d42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42d4))), 0x111b49cdu);
  /* 111b49cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b49cf je 0x111b49dd */
  if (C.zf) goto L_111b49dd;
  /* 111b49d1 mov dword ptr [0x111d19c0], 1 */
  w32((uint32_t)(0x111d19c0), (0x1u));
  /* 111b49db jmp 0x111b4a02 */
  goto L_111b4a02;
L_111b49dd:;
  /* 111b49dd push 0 */
  push32((uint32_t)(0x0u));
  /* 111b49df push 0 */
  push32((uint32_t)(0x0u));
  /* 111b49e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b49e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b49e5 call dword ptr [0x111d42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42ec))), 0x111b49ebu);
  /* 111b49eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b49ed je 0x111b49fb */
  if (C.zf) goto L_111b49fb;
  /* 111b49ef mov dword ptr [0x111d19c0], 2 */
  w32((uint32_t)(0x111d19c0), (0x2u));
  /* 111b49f9 jmp 0x111b4a02 */
  goto L_111b4a02;
L_111b49fb:;
  /* 111b49fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b49fd jmp 0x111b4b21 */
  goto L_111b4b21;
L_111b4a02:;
  /* 111b4a02 cmp dword ptr [0x111d19c0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x111d19c0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4a09 jne 0x111b4a26 */
  if (!C.zf) goto L_111b4a26;
  /* 111b4a0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b4a0e push eax */
  push32((uint32_t)(EAX));
  /* 111b4a0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4a12 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4a13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b4a16 push edx */
  push32((uint32_t)(EDX));
  /* 111b4a17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4a1a push eax */
  push32((uint32_t)(EAX));
  /* 111b4a1b call dword ptr [0x111d42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42ec))), 0x111b4a21u);
  /* 111b4a21 jmp 0x111b4b21 */
  goto L_111b4b21;
L_111b4a26:;
  /* 111b4a26 cmp dword ptr [0x111d19c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d19c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4a2d jne 0x111b4b1f */
  if (!C.zf) goto L_111b4b1f;
  /* 111b4a33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4a37 jne 0x111b4a42 */
  if (!C.zf) goto L_111b4a42;
  /* 111b4a39 mov ecx, dword ptr [0x111d1870] */
  ECX = (r32((uint32_t)(0x111d1870)));
  /* 111b4a3f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_111b4a42:;
  /* 111b4a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4a46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b4a49 push edx */
  push32((uint32_t)(EDX));
  /* 111b4a4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4a4d push eax */
  push32((uint32_t)(EAX));
  /* 111b4a4e call dword ptr [0x111d42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42d4))), 0x111b4a54u);
  /* 111b4a54 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111b4a57 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4a5b jne 0x111b4a64 */
  if (!C.zf) goto L_111b4a64;
  /* 111b4a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4a5f jmp 0x111b4b21 */
  goto L_111b4b21;
L_111b4a64:;
  /* 111b4a64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111b4a6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b4a6e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111b4a70 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4a73 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111b4a75 call 0x111a8550 */
  push32(0x111b4a7au); f_111a8550();
  /* 111b4a7a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 111b4a7d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111b4a80 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b4a83 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 111b4a86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111b4a8d jmp 0x111b4aa6 */
  goto L_111b4aa6;
  /* 111b4a8f mov eax, 1 */
  EAX = (0x1u);
  /* 111b4a94 ret  */
  ESPCHK(0x111b4990u, _esp0);
  ESP += 4; return;
  /* 111b4a95 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111b4a98 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 111b4a9f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111b4aa6:;
  /* 111b4aa6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4aaa jne 0x111b4ab0 */
  if (!C.zf) goto L_111b4ab0;
  /* 111b4aac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4aae jmp 0x111b4b21 */
  goto L_111b4b21;
L_111b4ab0:;
  /* 111b4ab0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b4ab3 push edx */
  push32((uint32_t)(EDX));
  /* 111b4ab4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b4ab7 push eax */
  push32((uint32_t)(EAX));
  /* 111b4ab8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b4abb push ecx */
  push32((uint32_t)(ECX));
  /* 111b4abc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4abf push edx */
  push32((uint32_t)(EDX));
  /* 111b4ac0 call dword ptr [0x111d42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42d4))), 0x111b4ac6u);
  /* 111b4ac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b4ac8 jne 0x111b4ace */
  if (!C.zf) goto L_111b4ace;
  /* 111b4aca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4acc jmp 0x111b4b21 */
  goto L_111b4b21;
L_111b4ace:;
  /* 111b4ace cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4ad2 jne 0x111b4af6 */
  if (!C.zf) goto L_111b4af6;
  /* 111b4ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4ada push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4adc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b4ade mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b4ae1 push eax */
  push32((uint32_t)(EAX));
  /* 111b4ae2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111b4ae7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b4aea push ecx */
  push32((uint32_t)(ECX));
  /* 111b4aeb call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111b4af1u);
  /* 111b4af1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111b4af4 jmp 0x111b4b1a */
  goto L_111b4b1a;
L_111b4af6:;
  /* 111b4af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4afa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b4afd push edx */
  push32((uint32_t)(EDX));
  /* 111b4afe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4b01 push eax */
  push32((uint32_t)(EAX));
  /* 111b4b02 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b4b04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b4b07 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4b08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111b4b0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b4b10 push edx */
  push32((uint32_t)(EDX));
  /* 111b4b11 call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111b4b17u);
  /* 111b4b17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_111b4b1a:;
  /* 111b4b1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b4b1d jmp 0x111b4b21 */
  goto L_111b4b21;
L_111b4b1f:;
  /* 111b4b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b4b21:;
  /* 111b4b21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 111b4b24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b4b27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111b4b2e pop edi */
  EDI = (pop32());
  /* 111b4b2f pop esi */
  ESI = (pop32());
  /* 111b4b30 pop ebx */
  EBX = (pop32());
  /* 111b4b31 mov esp, ebp */
  ESP = (EBP);
  /* 111b4b33 pop ebp */
  EBP = (pop32());
  /* 111b4b34 ret  */
  ESPCHK(0x111b4990u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b40 @ 0x111b4b40 (11 bytes, 6 insns) */
void f_111b4b40(void) {
  FTRACE(0x111b4b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b4b40 push ebp */
  push32((uint32_t)(EBP));
  /* 111b4b41 mov ebp, esp */
  EBP = (ESP);
  /* 111b4b43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4b46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4b49 pop ebp */
  EBP = (pop32());
  /* 111b4b4a ret  */
  ESPCHK(0x111b4b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b50 @ 0x111b4b50 (147 bytes, 43 insns) */
void f_111b4b50(void) {
  FTRACE(0x111b4b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b4b50 push ebp */
  push32((uint32_t)(EBP));
  /* 111b4b51 mov ebp, esp */
  EBP = (ESP);
  /* 111b4b53 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4b54 cmp dword ptr [0x111d1860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4b5b jne 0x111b4b77 */
  if (!C.zf) goto L_111b4b77;
  /* 111b4b5d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4b61 jl 0x111b4b72 */
  if ((C.sf!=C.of)) goto L_111b4b72;
  /* 111b4b63 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4b67 jg 0x111b4b72 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b4b72;
  /* 111b4b69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4b6c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4b6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_111b4b72:;
  /* 111b4b72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4b75 jmp 0x111b4bdf */
  goto L_111b4bdf;
L_111b4b77:;
  /* 111b4b77 push 0x111d19ec */
  push32((uint32_t)(0x111d19ecu));
  /* 111b4b7c call dword ptr [0x111d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d439c))), 0x111b4b82u);
  /* 111b4b82 cmp dword ptr [0x111d19dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4b89 je 0x111b4ba9 */
  if (C.zf) goto L_111b4ba9;
  /* 111b4b8b push 0x111d19ec */
  push32((uint32_t)(0x111d19ecu));
  /* 111b4b90 call dword ptr [0x111d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d438c))), 0x111b4b96u);
  /* 111b4b96 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111b4b98 call 0x111a8db0 */
  push32(0x111b4b9du); f_111a8db0();
  /* 111b4b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4ba0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111b4ba7 jmp 0x111b4bb0 */
  goto L_111b4bb0;
L_111b4ba9:;
  /* 111b4ba9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111b4bb0:;
  /* 111b4bb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4bb4 call 0x111b4bf0 */
  push32(0x111b4bb9u); f_111b4bf0();
  /* 111b4bb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4bbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111b4bbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4bc3 je 0x111b4bd1 */
  if (C.zf) goto L_111b4bd1;
  /* 111b4bc5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111b4bc7 call 0x111a8e50 */
  push32(0x111b4bccu); f_111a8e50();
  /* 111b4bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4bcf jmp 0x111b4bdc */
  goto L_111b4bdc;
L_111b4bd1:;
  /* 111b4bd1 push 0x111d19ec */
  push32((uint32_t)(0x111d19ecu));
  /* 111b4bd6 call dword ptr [0x111d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d438c))), 0x111b4bdcu);
L_111b4bdc:;
  /* 111b4bdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_111b4bdf:;
  /* 111b4bdf mov esp, ebp */
  ESP = (EBP);
  /* 111b4be1 pop ebp */
  EBP = (pop32());
  /* 111b4be2 ret  */
  ESPCHK(0x111b4b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bf0 @ 0x111b4bf0 (299 bytes, 91 insns) */
void f_111b4bf0(void) {
  FTRACE(0x111b4bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b4bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b4bf1 mov ebp, esp */
  EBP = (ESP);
  /* 111b4bf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b4bf6 cmp dword ptr [0x111d1860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4bfd jne 0x111b4c1c */
  if (!C.zf) goto L_111b4c1c;
  /* 111b4bff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4c03 jl 0x111b4c14 */
  if ((C.sf!=C.of)) goto L_111b4c14;
  /* 111b4c05 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4c09 jg 0x111b4c14 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b4c14;
  /* 111b4c0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4c0e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4c11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_111b4c14:;
  /* 111b4c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4c17 jmp 0x111b4d17 */
  goto L_111b4d17;
L_111b4c1c:;
  /* 111b4c1c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4c23 jge 0x111b4c63 */
  if ((C.sf==C.of)) goto L_111b4c63;
  /* 111b4c25 cmp dword ptr [0x111cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4c2c jle 0x111b4c41 */
  if ((C.zf||C.sf!=C.of)) goto L_111b4c41;
  /* 111b4c2e push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4c33 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4c34 call 0x111ab3c0 */
  push32(0x111b4c39u); f_111ab3c0();
  /* 111b4c39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4c3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111b4c3f jmp 0x111b4c55 */
  goto L_111b4c55;
L_111b4c41:;
  /* 111b4c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4c44 mov eax, dword ptr [0x111cfc98] */
  EAX = (r32((uint32_t)(0x111cfc98)));
  /* 111b4c49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b4c4b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 111b4c4f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111b4c52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111b4c55:;
  /* 111b4c55 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4c59 jne 0x111b4c63 */
  if (!C.zf) goto L_111b4c63;
  /* 111b4c5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4c5e jmp 0x111b4d17 */
  goto L_111b4d17;
L_111b4c63:;
  /* 111b4c63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4c66 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 111b4c69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111b4c6f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111b4c75 mov eax, dword ptr [0x111cfc98] */
  EAX = (r32((uint32_t)(0x111cfc98)));
  /* 111b4c7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b4c7c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 111b4c80 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 111b4c86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b4c88 je 0x111b4cac */
  if (C.zf) goto L_111b4cac;
  /* 111b4c8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4c8d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 111b4c90 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111b4c96 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 111b4c99 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 111b4c9c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 111b4c9f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 111b4ca3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 111b4caa jmp 0x111b4cbd */
  goto L_111b4cbd;
L_111b4cac:;
  /* 111b4cac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 111b4caf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 111b4cb2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 111b4cb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_111b4cbd:;
  /* 111b4cbd push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4cc1 push 3 */
  push32((uint32_t)(0x3u));
  /* 111b4cc3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 111b4cc6 push edx */
  push32((uint32_t)(EDX));
  /* 111b4cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b4cca push eax */
  push32((uint32_t)(EAX));
  /* 111b4ccb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 111b4cce push ecx */
  push32((uint32_t)(ECX));
  /* 111b4ccf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 111b4cd4 mov edx, dword ptr [0x111d1860] */
  EDX = (r32((uint32_t)(0x111d1860)));
  /* 111b4cda push edx */
  push32((uint32_t)(EDX));
  /* 111b4cdb call 0x111ad7a0 */
  push32(0x111b4ce0u); f_111ad7a0();
  /* 111b4ce0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4ce3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b4ce6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4cea jne 0x111b4cf1 */
  if (!C.zf) goto L_111b4cf1;
  /* 111b4cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4cef jmp 0x111b4d17 */
  goto L_111b4d17;
L_111b4cf1:;
  /* 111b4cf1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4cf5 jne 0x111b4d01 */
  if (!C.zf) goto L_111b4d01;
  /* 111b4cf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4cfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b4cff jmp 0x111b4d17 */
  goto L_111b4d17;
L_111b4d01:;
  /* 111b4d01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4d04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b4d09 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 111b4d0c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111b4d12 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 111b4d15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_111b4d17:;
  /* 111b4d17 mov esp, ebp */
  ESP = (EBP);
  /* 111b4d19 pop ebp */
  EBP = (pop32());
  /* 111b4d1a ret  */
  ESPCHK(0x111b4bf0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x111b4d20 (52 bytes, 19 insns) */
void f_111b4d20(void) {
  FTRACE(0x111b4d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b4d20 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111b4d24 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 111b4d28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111b4d2a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 111b4d2e jne 0x111b4d39 */
  if (!C.zf) goto L_111b4d39;
  /* 111b4d30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111b4d34 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 111b4d36 ret 0x10 */
  ESPCHK(0x111b4d20u, _esp0);
  ESP += 20; return;
L_111b4d39:;
  /* 111b4d39 push ebx */
  push32((uint32_t)(EBX));
  /* 111b4d3a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 111b4d3c mov ebx, eax */
  EBX = (EAX);
  /* 111b4d3e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111b4d42 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 111b4d46 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4d48 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111b4d4c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 111b4d4e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4d50 pop ebx */
  EBX = (pop32());
  /* 111b4d51 ret 0x10 */
  ESPCHK(0x111b4d20u, _esp0);
  ESP += 20; return;
}

/* FUN_10014d60 @ 0x111b4d60 (46 bytes, 18 insns) */
void f_111b4d60(void) {
  FTRACE(0x111b4d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b4d60 push ebp */
  push32((uint32_t)(EBP));
  /* 111b4d61 mov ebp, esp */
  EBP = (ESP);
  /* 111b4d63 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4d64 push 0xc */
  push32((uint32_t)(0xcu));
  /* 111b4d66 call 0x111a8db0 */
  push32(0x111b4d6bu); f_111a8db0();
  /* 111b4d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4d6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4d71 push eax */
  push32((uint32_t)(EAX));
  /* 111b4d72 call 0x111b4d90 */
  push32(0x111b4d77u); f_111b4d90();
  /* 111b4d77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4d7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b4d7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 111b4d7f call 0x111a8e50 */
  push32(0x111b4d84u); f_111a8e50();
  /* 111b4d84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b4d8a mov esp, ebp */
  ESP = (EBP);
  /* 111b4d8c pop ebp */
  EBP = (pop32());
  /* 111b4d8d ret  */
  ESPCHK(0x111b4d60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x111b4d90 (198 bytes, 69 insns) */
void f_111b4d90(void) {
  FTRACE(0x111b4d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b4d90 push ebp */
  push32((uint32_t)(EBP));
  /* 111b4d91 mov ebp, esp */
  EBP = (ESP);
  /* 111b4d93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b4d96 mov eax, dword ptr [0x111d167c] */
  EAX = (r32((uint32_t)(0x111d167c)));
  /* 111b4d9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b4d9e cmp dword ptr [0x111d3180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d3180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4da5 jne 0x111b4dae */
  if (!C.zf) goto L_111b4dae;
  /* 111b4da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4da9 jmp 0x111b4e52 */
  goto L_111b4e52;
L_111b4dae:;
  /* 111b4dae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4db2 jne 0x111b4dd6 */
  if (!C.zf) goto L_111b4dd6;
  /* 111b4db4 cmp dword ptr [0x111d1684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4dbb je 0x111b4dd6 */
  if (C.zf) goto L_111b4dd6;
  /* 111b4dbd call 0x111b4eb0 */
  push32(0x111b4dc2u); f_111b4eb0();
  /* 111b4dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b4dc4 je 0x111b4dcd */
  if (C.zf) goto L_111b4dcd;
  /* 111b4dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4dc8 jmp 0x111b4e52 */
  goto L_111b4e52;
L_111b4dcd:;
  /* 111b4dcd mov ecx, dword ptr [0x111d167c] */
  ECX = (r32((uint32_t)(0x111d167c)));
  /* 111b4dd3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111b4dd6:;
  /* 111b4dd6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4dda je 0x111b4e50 */
  if (C.zf) goto L_111b4e50;
  /* 111b4ddc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4de0 je 0x111b4e50 */
  if (C.zf) goto L_111b4e50;
  /* 111b4de2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4de5 push edx */
  push32((uint32_t)(EDX));
  /* 111b4de6 call 0x111a81e0 */
  push32(0x111b4debu); f_111a81e0();
  /* 111b4deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4dee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111b4df1:;
  /* 111b4df1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b4df4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4df7 je 0x111b4e50 */
  if (C.zf) goto L_111b4e50;
  /* 111b4df9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b4dfc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b4dfe push edx */
  push32((uint32_t)(EDX));
  /* 111b4dff call 0x111a81e0 */
  push32(0x111b4e04u); f_111a81e0();
  /* 111b4e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4e07 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4e0a jbe 0x111b4e45 */
  if ((C.cf||C.zf)) goto L_111b4e45;
  /* 111b4e0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b4e0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b4e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b4e14 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 111b4e18 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4e1b jne 0x111b4e45 */
  if (!C.zf) goto L_111b4e45;
  /* 111b4e1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b4e20 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4e21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4e24 push edx */
  push32((uint32_t)(EDX));
  /* 111b4e25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b4e28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b4e2a push ecx */
  push32((uint32_t)(ECX));
  /* 111b4e2b call 0x111b4e60 */
  push32(0x111b4e30u); f_111b4e60();
  /* 111b4e30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b4e35 jne 0x111b4e45 */
  if (!C.zf) goto L_111b4e45;
  /* 111b4e37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b4e3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b4e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b4e3f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 111b4e43 jmp 0x111b4e52 */
  goto L_111b4e52;
L_111b4e45:;
  /* 111b4e45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b4e48 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4e4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b4e4e jmp 0x111b4df1 */
  goto L_111b4df1;
L_111b4e50:;
  /* 111b4e50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b4e52:;
  /* 111b4e52 mov esp, ebp */
  ESP = (EBP);
  /* 111b4e54 pop ebp */
  EBP = (pop32());
  /* 111b4e55 ret  */
  ESPCHK(0x111b4d90u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x111b4e60 (79 bytes, 32 insns) */
void f_111b4e60(void) {
  FTRACE(0x111b4e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b4e60 push ebp */
  push32((uint32_t)(EBP));
  /* 111b4e61 mov ebp, esp */
  EBP = (ESP);
  /* 111b4e63 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4e64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4e68 jne 0x111b4e6e */
  if (!C.zf) goto L_111b4e6e;
  /* 111b4e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4e6c jmp 0x111b4eab */
  goto L_111b4eab;
L_111b4e6e:;
  /* 111b4e6e mov eax, dword ptr [0x111d2d44] */
  EAX = (r32((uint32_t)(0x111d2d44)));
  /* 111b4e73 push eax */
  push32((uint32_t)(EAX));
  /* 111b4e74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4e77 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4e78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b4e7b push edx */
  push32((uint32_t)(EDX));
  /* 111b4e7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4e7f push eax */
  push32((uint32_t)(EAX));
  /* 111b4e80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b4e83 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4e84 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4e86 mov edx, dword ptr [0x111d2fe4] */
  EDX = (r32((uint32_t)(0x111d2fe4)));
  /* 111b4e8c push edx */
  push32((uint32_t)(EDX));
  /* 111b4e8d call 0x111b4f60 */
  push32(0x111b4e92u); f_111b4f60();
  /* 111b4e92 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4e95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b4e98 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4e9c jne 0x111b4ea5 */
  if (!C.zf) goto L_111b4ea5;
  /* 111b4e9e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 111b4ea3 jmp 0x111b4eab */
  goto L_111b4eab;
L_111b4ea5:;
  /* 111b4ea5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b4ea8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_111b4eab:;
  /* 111b4eab mov esp, ebp */
  ESP = (EBP);
  /* 111b4ead pop ebp */
  EBP = (pop32());
  /* 111b4eae ret  */
  ESPCHK(0x111b4e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014eb0 @ 0x111b4eb0 (174 bytes, 66 insns) */
void f_111b4eb0(void) {
  FTRACE(0x111b4eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b4eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b4eb1 mov ebp, esp */
  EBP = (ESP);
  /* 111b4eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b4eb6 mov eax, dword ptr [0x111d1684] */
  EAX = (r32((uint32_t)(0x111d1684)));
  /* 111b4ebb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111b4ebe:;
  /* 111b4ebe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b4ec1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4ec4 je 0x111b4f58 */
  if (C.zf) goto L_111b4f58;
  /* 111b4eca push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4ece push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4ed2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b4ed4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b4ed7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b4ed9 push eax */
  push32((uint32_t)(EAX));
  /* 111b4eda push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4edc push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4ede call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111b4ee4u);
  /* 111b4ee4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b4ee7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4eeb jne 0x111b4ef2 */
  if (!C.zf) goto L_111b4ef2;
  /* 111b4eed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b4ef0 jmp 0x111b4f5a */
  goto L_111b4f5a;
L_111b4ef2:;
  /* 111b4ef2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 111b4ef4 push 0x111cdb8c */
  push32((uint32_t)(0x111cdb8cu));
  /* 111b4ef9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b4efb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4efe push ecx */
  push32((uint32_t)(ECX));
  /* 111b4eff call 0x111a53b0 */
  push32(0x111b4f04u); f_111a53b0();
  /* 111b4f04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4f07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b4f0a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4f0e jne 0x111b4f15 */
  if (!C.zf) goto L_111b4f15;
  /* 111b4f10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b4f13 jmp 0x111b4f5a */
  goto L_111b4f5a;
L_111b4f15:;
  /* 111b4f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4f19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b4f1c push edx */
  push32((uint32_t)(EDX));
  /* 111b4f1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b4f20 push eax */
  push32((uint32_t)(EAX));
  /* 111b4f21 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b4f23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b4f26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b4f28 push edx */
  push32((uint32_t)(EDX));
  /* 111b4f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4f2b push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4f2d call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111b4f33u);
  /* 111b4f33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b4f35 jne 0x111b4f3c */
  if (!C.zf) goto L_111b4f3c;
  /* 111b4f37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b4f3a jmp 0x111b4f5a */
  goto L_111b4f5a;
L_111b4f3c:;
  /* 111b4f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4f3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b4f41 push eax */
  push32((uint32_t)(EAX));
  /* 111b4f42 call 0x111b53b0 */
  push32(0x111b4f47u); f_111b53b0();
  /* 111b4f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b4f4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4f50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b4f53 jmp 0x111b4ebe */
  goto L_111b4ebe;
L_111b4f58:;
  /* 111b4f58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b4f5a:;
  /* 111b4f5a mov esp, ebp */
  ESP = (EBP);
  /* 111b4f5c pop ebp */
  EBP = (pop32());
  /* 111b4f5d ret  */
  ESPCHK(0x111b4eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f60 @ 0x111b4f60 (970 bytes, 340 insns) */
void f_111b4f60(void) {
  FTRACE(0x111b4f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b4f60 push ebp */
  push32((uint32_t)(EBP));
  /* 111b4f61 mov ebp, esp */
  EBP = (ESP);
  /* 111b4f63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111b4f65 push 0x111cdbe0 */
  push32((uint32_t)(0x111cdbe0u));
  /* 111b4f6a push 0x111ae4b8 */
  push32((uint32_t)(0x111ae4b8u));
  /* 111b4f6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111b4f75 push eax */
  push32((uint32_t)(EAX));
  /* 111b4f76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111b4f7d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4f80 push ebx */
  push32((uint32_t)(EBX));
  /* 111b4f81 push esi */
  push32((uint32_t)(ESI));
  /* 111b4f82 push edi */
  push32((uint32_t)(EDI));
  /* 111b4f83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111b4f86 cmp dword ptr [0x111d19c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d19c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4f8d jne 0x111b4fe6 */
  if (!C.zf) goto L_111b4fe6;
  /* 111b4f8f push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4f91 push 0x111cd23c */
  push32((uint32_t)(0x111cd23cu));
  /* 111b4f96 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4f98 push 0x111cd23c */
  push32((uint32_t)(0x111cd23cu));
  /* 111b4f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4fa1 call dword ptr [0x111d42d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42d0))), 0x111b4fa7u);
  /* 111b4fa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b4fa9 je 0x111b4fb7 */
  if (C.zf) goto L_111b4fb7;
  /* 111b4fab mov dword ptr [0x111d19c4], 1 */
  w32((uint32_t)(0x111d19c4), (0x1u));
  /* 111b4fb5 jmp 0x111b4fe6 */
  goto L_111b4fe6;
L_111b4fb7:;
  /* 111b4fb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4fb9 push 0x111cd238 */
  push32((uint32_t)(0x111cd238u));
  /* 111b4fbe push 1 */
  push32((uint32_t)(0x1u));
  /* 111b4fc0 push 0x111cd238 */
  push32((uint32_t)(0x111cd238u));
  /* 111b4fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b4fc9 call dword ptr [0x111d42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42dc))), 0x111b4fcfu);
  /* 111b4fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b4fd1 je 0x111b4fdf */
  if (C.zf) goto L_111b4fdf;
  /* 111b4fd3 mov dword ptr [0x111d19c4], 2 */
  w32((uint32_t)(0x111d19c4), (0x2u));
  /* 111b4fdd jmp 0x111b4fe6 */
  goto L_111b4fe6;
L_111b4fdf:;
  /* 111b4fdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b4fe1 jmp 0x111b5344 */
  goto L_111b5344;
L_111b4fe6:;
  /* 111b4fe6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b4fea jle 0x111b4fff */
  if ((C.zf||C.sf!=C.of)) goto L_111b4fff;
  /* 111b4fec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b4fef push eax */
  push32((uint32_t)(EAX));
  /* 111b4ff0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b4ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b4ff4 call 0x111b5360 */
  push32(0x111b4ff9u); f_111b5360();
  /* 111b4ff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b4ffc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_111b4fff:;
  /* 111b4fff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5003 jle 0x111b5018 */
  if ((C.zf||C.sf!=C.of)) goto L_111b5018;
  /* 111b5005 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111b5008 push edx */
  push32((uint32_t)(EDX));
  /* 111b5009 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b500c push eax */
  push32((uint32_t)(EAX));
  /* 111b500d call 0x111b5360 */
  push32(0x111b5012u); f_111b5360();
  /* 111b5012 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5015 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_111b5018:;
  /* 111b5018 cmp dword ptr [0x111d19c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x111d19c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b501f jne 0x111b5044 */
  if (!C.zf) goto L_111b5044;
  /* 111b5021 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111b5024 push ecx */
  push32((uint32_t)(ECX));
  /* 111b5025 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b5028 push edx */
  push32((uint32_t)(EDX));
  /* 111b5029 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b502c push eax */
  push32((uint32_t)(EAX));
  /* 111b502d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b5030 push ecx */
  push32((uint32_t)(ECX));
  /* 111b5031 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b5034 push edx */
  push32((uint32_t)(EDX));
  /* 111b5035 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b5038 push eax */
  push32((uint32_t)(EAX));
  /* 111b5039 call dword ptr [0x111d42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42dc))), 0x111b503fu);
  /* 111b503f jmp 0x111b5344 */
  goto L_111b5344;
L_111b5044:;
  /* 111b5044 cmp dword ptr [0x111d19c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d19c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b504b jne 0x111b5342 */
  if (!C.zf) goto L_111b5342;
  /* 111b5051 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5055 jne 0x111b5060 */
  if (!C.zf) goto L_111b5060;
  /* 111b5057 mov ecx, dword ptr [0x111d1870] */
  ECX = (r32((uint32_t)(0x111d1870)));
  /* 111b505d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_111b5060:;
  /* 111b5060 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5064 je 0x111b5070 */
  if (C.zf) goto L_111b5070;
  /* 111b5066 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b506a jne 0x111b51ec */
  if (!C.zf) goto L_111b51ec;
L_111b5070:;
  /* 111b5070 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b5073 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5076 jne 0x111b5082 */
  if (!C.zf) goto L_111b5082;
  /* 111b5078 mov eax, 2 */
  EAX = (0x2u);
  /* 111b507d jmp 0x111b5344 */
  goto L_111b5344;
L_111b5082:;
  /* 111b5082 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5086 jle 0x111b5092 */
  if ((C.zf||C.sf!=C.of)) goto L_111b5092;
  /* 111b5088 mov eax, 1 */
  EAX = (0x1u);
  /* 111b508d jmp 0x111b5344 */
  goto L_111b5344;
L_111b5092:;
  /* 111b5092 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5096 jle 0x111b50a2 */
  if ((C.zf||C.sf!=C.of)) goto L_111b50a2;
  /* 111b5098 mov eax, 3 */
  EAX = (0x3u);
  /* 111b509d jmp 0x111b5344 */
  goto L_111b5344;
L_111b50a2:;
  /* 111b50a2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 111b50a5 push eax */
  push32((uint32_t)(EAX));
  /* 111b50a6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 111b50a9 push ecx */
  push32((uint32_t)(ECX));
  /* 111b50aa call dword ptr [0x111d4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4328))), 0x111b50b0u);
  /* 111b50b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b50b2 jne 0x111b50bb */
  if (!C.zf) goto L_111b50bb;
  /* 111b50b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b50b6 jmp 0x111b5344 */
  goto L_111b5344;
L_111b50bb:;
  /* 111b50bb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b50bf jne 0x111b50c7 */
  if (!C.zf) goto L_111b50c7;
  /* 111b50c1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b50c5 je 0x111b50f4 */
  if (C.zf) goto L_111b50f4;
L_111b50c7:;
  /* 111b50c7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b50cb jne 0x111b50d3 */
  if (!C.zf) goto L_111b50d3;
  /* 111b50cd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b50d1 je 0x111b50f4 */
  if (C.zf) goto L_111b50f4;
L_111b50d3:;
  /* 111b50d3 push 0x111cdba0 */
  push32((uint32_t)(0x111cdba0u));
  /* 111b50d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111b50da push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 111b50df push 0x111cdb98 */
  push32((uint32_t)(0x111cdb98u));
  /* 111b50e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b50e6 call 0x111a4470 */
  push32(0x111b50ebu); f_111a4470();
  /* 111b50eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b50ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b50f1 jne 0x111b50f4 */
  if (!C.zf) goto L_111b50f4;
  /* 111b50f3 int3  */
  x86_unimpl("int3 @ 0x111b50f3");
L_111b50f4:;
  /* 111b50f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b50f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b50f8 jne 0x111b50bb */
  if (!C.zf) goto L_111b50bb;
  /* 111b50fa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b50fe jle 0x111b5173 */
  if ((C.zf||C.sf!=C.of)) goto L_111b5173;
  /* 111b5100 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5104 jae 0x111b5110 */
  if (!C.cf) goto L_111b5110;
  /* 111b5106 mov eax, 3 */
  EAX = (0x3u);
  /* 111b510b jmp 0x111b5344 */
  goto L_111b5344;
L_111b5110:;
  /* 111b5110 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 111b5113 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 111b5116 jmp 0x111b5121 */
  goto L_111b5121;
L_111b5118:;
  /* 111b5118 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 111b511b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b511e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_111b5121:;
  /* 111b5121 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 111b5124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b5126 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b5128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b512a je 0x111b5169 */
  if (C.zf) goto L_111b5169;
  /* 111b512c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 111b512f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b5131 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 111b5134 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b5136 je 0x111b5169 */
  if (C.zf) goto L_111b5169;
  /* 111b5138 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b513b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b513d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b513f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 111b5142 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b5144 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b5146 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5148 jl 0x111b5167 */
  if ((C.sf!=C.of)) goto L_111b5167;
  /* 111b514a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b514d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b514f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b5151 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 111b5154 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b5156 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 111b5159 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b515b jg 0x111b5167 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b5167;
  /* 111b515d mov eax, 2 */
  EAX = (0x2u);
  /* 111b5162 jmp 0x111b5344 */
  goto L_111b5344;
L_111b5167:;
  /* 111b5167 jmp 0x111b5118 */
  goto L_111b5118;
L_111b5169:;
  /* 111b5169 mov eax, 3 */
  EAX = (0x3u);
  /* 111b516e jmp 0x111b5344 */
  goto L_111b5344;
L_111b5173:;
  /* 111b5173 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5177 jle 0x111b51ec */
  if ((C.zf||C.sf!=C.of)) goto L_111b51ec;
  /* 111b5179 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b517d jae 0x111b5189 */
  if (!C.cf) goto L_111b5189;
  /* 111b517f mov eax, 1 */
  EAX = (0x1u);
  /* 111b5184 jmp 0x111b5344 */
  goto L_111b5344;
L_111b5189:;
  /* 111b5189 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 111b518c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 111b518f jmp 0x111b519a */
  goto L_111b519a;
L_111b5191:;
  /* 111b5191 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 111b5194 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5197 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_111b519a:;
  /* 111b519a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 111b519d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b519f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b51a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b51a3 je 0x111b51e2 */
  if (C.zf) goto L_111b51e2;
  /* 111b51a5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 111b51a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b51aa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 111b51ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b51af je 0x111b51e2 */
  if (C.zf) goto L_111b51e2;
  /* 111b51b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b51b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b51b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111b51b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 111b51bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111b51bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111b51bf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b51c1 jl 0x111b51e0 */
  if ((C.sf!=C.of)) goto L_111b51e0;
  /* 111b51c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b51c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b51c8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b51ca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 111b51cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b51cf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 111b51d2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b51d4 jg 0x111b51e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_111b51e0;
  /* 111b51d6 mov eax, 2 */
  EAX = (0x2u);
  /* 111b51db jmp 0x111b5344 */
  goto L_111b5344;
L_111b51e0:;
  /* 111b51e0 jmp 0x111b5191 */
  goto L_111b5191;
L_111b51e2:;
  /* 111b51e2 mov eax, 1 */
  EAX = (0x1u);
  /* 111b51e7 jmp 0x111b5344 */
  goto L_111b5344;
L_111b51ec:;
  /* 111b51ec push 0 */
  push32((uint32_t)(0x0u));
  /* 111b51ee push 0 */
  push32((uint32_t)(0x0u));
  /* 111b51f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b51f3 push ecx */
  push32((uint32_t)(ECX));
  /* 111b51f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b51f7 push edx */
  push32((uint32_t)(EDX));
  /* 111b51f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 111b51fa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 111b51fd push eax */
  push32((uint32_t)(EAX));
  /* 111b51fe call dword ptr [0x111d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d431c))), 0x111b5204u);
  /* 111b5204 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111b5207 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b520b jne 0x111b5214 */
  if (!C.zf) goto L_111b5214;
  /* 111b520d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b520f jmp 0x111b5344 */
  goto L_111b5344;
L_111b5214:;
  /* 111b5214 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111b521b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b521e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111b5220 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5223 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111b5225 call 0x111a8550 */
  push32(0x111b522au); f_111a8550();
  /* 111b522a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 111b522d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111b5230 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 111b5233 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 111b5236 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111b523d jmp 0x111b5256 */
  goto L_111b5256;
  /* 111b523f mov eax, 1 */
  EAX = (0x1u);
  /* 111b5244 ret  */
  ESPCHK(0x111b4f60u, _esp0);
  ESP += 4; return;
  /* 111b5245 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111b5248 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111b524f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111b5256:;
  /* 111b5256 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b525a jne 0x111b5263 */
  if (!C.zf) goto L_111b5263;
  /* 111b525c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b525e jmp 0x111b5344 */
  goto L_111b5344;
L_111b5263:;
  /* 111b5263 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b5266 push edx */
  push32((uint32_t)(EDX));
  /* 111b5267 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b526a push eax */
  push32((uint32_t)(EAX));
  /* 111b526b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111b526e push ecx */
  push32((uint32_t)(ECX));
  /* 111b526f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111b5272 push edx */
  push32((uint32_t)(EDX));
  /* 111b5273 push 1 */
  push32((uint32_t)(0x1u));
  /* 111b5275 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 111b5278 push eax */
  push32((uint32_t)(EAX));
  /* 111b5279 call dword ptr [0x111d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d431c))), 0x111b527fu);
  /* 111b527f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b5281 jne 0x111b528a */
  if (!C.zf) goto L_111b528a;
  /* 111b5283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b5285 jmp 0x111b5344 */
  goto L_111b5344;
L_111b528a:;
  /* 111b528a push 0 */
  push32((uint32_t)(0x0u));
  /* 111b528c push 0 */
  push32((uint32_t)(0x0u));
  /* 111b528e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111b5291 push ecx */
  push32((uint32_t)(ECX));
  /* 111b5292 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b5295 push edx */
  push32((uint32_t)(EDX));
  /* 111b5296 push 9 */
  push32((uint32_t)(0x9u));
  /* 111b5298 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 111b529b push eax */
  push32((uint32_t)(EAX));
  /* 111b529c call dword ptr [0x111d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d431c))), 0x111b52a2u);
  /* 111b52a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111b52a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b52a9 jne 0x111b52b2 */
  if (!C.zf) goto L_111b52b2;
  /* 111b52ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b52ad jmp 0x111b5344 */
  goto L_111b5344;
L_111b52b2:;
  /* 111b52b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111b52b9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b52bc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111b52be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b52c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111b52c3 call 0x111a8550 */
  push32(0x111b52c8u); f_111a8550();
  /* 111b52c8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 111b52cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111b52ce mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 111b52d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 111b52d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111b52db jmp 0x111b52f4 */
  goto L_111b52f4;
  /* 111b52dd mov eax, 1 */
  EAX = (0x1u);
  /* 111b52e2 ret  */
  ESPCHK(0x111b4f60u, _esp0);
  ESP += 4; return;
  /* 111b52e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111b52e6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 111b52ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111b52f4:;
  /* 111b52f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b52f8 jne 0x111b52fe */
  if (!C.zf) goto L_111b52fe;
  /* 111b52fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b52fc jmp 0x111b5344 */
  goto L_111b5344;
L_111b52fe:;
  /* 111b52fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b5301 push edx */
  push32((uint32_t)(EDX));
  /* 111b5302 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b5305 push eax */
  push32((uint32_t)(EAX));
  /* 111b5306 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111b5309 push ecx */
  push32((uint32_t)(ECX));
  /* 111b530a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111b530d push edx */
  push32((uint32_t)(EDX));
  /* 111b530e push 1 */
  push32((uint32_t)(0x1u));
  /* 111b5310 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 111b5313 push eax */
  push32((uint32_t)(EAX));
  /* 111b5314 call dword ptr [0x111d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d431c))), 0x111b531au);
  /* 111b531a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b531c jne 0x111b5322 */
  if (!C.zf) goto L_111b5322;
  /* 111b531e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b5320 jmp 0x111b5344 */
  goto L_111b5344;
L_111b5322:;
  /* 111b5322 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111b5325 push ecx */
  push32((uint32_t)(ECX));
  /* 111b5326 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111b5329 push edx */
  push32((uint32_t)(EDX));
  /* 111b532a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111b532d push eax */
  push32((uint32_t)(EAX));
  /* 111b532e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111b5331 push ecx */
  push32((uint32_t)(ECX));
  /* 111b5332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b5335 push edx */
  push32((uint32_t)(EDX));
  /* 111b5336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b5339 push eax */
  push32((uint32_t)(EAX));
  /* 111b533a call dword ptr [0x111d42d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42d0))), 0x111b5340u);
  /* 111b5340 jmp 0x111b5344 */
  goto L_111b5344;
L_111b5342:;
  /* 111b5342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b5344:;
  /* 111b5344 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 111b5347 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b534a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111b5351 pop edi */
  EDI = (pop32());
  /* 111b5352 pop esi */
  ESI = (pop32());
  /* 111b5353 pop ebx */
  EBX = (pop32());
  /* 111b5354 mov esp, ebp */
  ESP = (EBP);
  /* 111b5356 pop ebp */
  EBP = (pop32());
  /* 111b5357 ret  */
  ESPCHK(0x111b4f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015360 @ 0x111b5360 (80 bytes, 32 insns) */
void f_111b5360(void) {
  FTRACE(0x111b5360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b5360 push ebp */
  push32((uint32_t)(EBP));
  /* 111b5361 mov ebp, esp */
  EBP = (ESP);
  /* 111b5363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b5366 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b5369 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b536c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b536f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111b5372:;
  /* 111b5372 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b5375 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b5378 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b537b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b537e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b5380 je 0x111b5397 */
  if (C.zf) goto L_111b5397;
  /* 111b5382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b5385 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b5388 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b538a je 0x111b5397 */
  if (C.zf) goto L_111b5397;
  /* 111b538c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b538f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5392 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b5395 jmp 0x111b5372 */
  goto L_111b5372;
L_111b5397:;
  /* 111b5397 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b539a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111b539d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b539f jne 0x111b53a9 */
  if (!C.zf) goto L_111b53a9;
  /* 111b53a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b53a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b53a7 jmp 0x111b53ac */
  goto L_111b53ac;
L_111b53a9:;
  /* 111b53a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_111b53ac:;
  /* 111b53ac mov esp, ebp */
  ESP = (EBP);
  /* 111b53ae pop ebp */
  EBP = (pop32());
  /* 111b53af ret  */
  ESPCHK(0x111b5360u, _esp0);
  ESP += 4; return;
}

/* FUN_100153b0 @ 0x111b53b0 (736 bytes, 224 insns) */
void f_111b53b0(void) {
  FTRACE(0x111b53b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b53b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111b53b1 mov ebp, esp */
  EBP = (ESP);
  /* 111b53b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b53b6 push esi */
  push32((uint32_t)(ESI));
  /* 111b53b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b53bb je 0x111b53dc */
  if (C.zf) goto L_111b53dc;
  /* 111b53bd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 111b53bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b53c2 push eax */
  push32((uint32_t)(EAX));
  /* 111b53c3 call 0x111b5800 */
  push32(0x111b53c8u); f_111b5800();
  /* 111b53c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b53cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111b53ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b53d2 je 0x111b53dc */
  if (C.zf) goto L_111b53dc;
  /* 111b53d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b53d7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b53da jne 0x111b53e4 */
  if (!C.zf) goto L_111b53e4;
L_111b53dc:;
  /* 111b53dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b53df jmp 0x111b568b */
  goto L_111b568b;
L_111b53e4:;
  /* 111b53e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b53e7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 111b53eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b53ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b53ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111b53f0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111b53f3 mov ecx, dword ptr [0x111d167c] */
  ECX = (r32((uint32_t)(0x111d167c)));
  /* 111b53f9 cmp ecx, dword ptr [0x111d1680] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d1680))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b53ff jne 0x111b5415 */
  if (!C.zf) goto L_111b5415;
  /* 111b5401 mov edx, dword ptr [0x111d167c] */
  EDX = (r32((uint32_t)(0x111d167c)));
  /* 111b5407 push edx */
  push32((uint32_t)(EDX));
  /* 111b5408 call 0x111b5710 */
  push32(0x111b540du); f_111b5710();
  /* 111b540d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5410 mov dword ptr [0x111d167c], eax */
  w32((uint32_t)(0x111d167c), (EAX));
L_111b5415:;
  /* 111b5415 cmp dword ptr [0x111d167c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d167c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b541c jne 0x111b54d5 */
  if (!C.zf) goto L_111b54d5;
  /* 111b5422 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5426 je 0x111b5447 */
  if (C.zf) goto L_111b5447;
  /* 111b5428 cmp dword ptr [0x111d1684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b542f je 0x111b5447 */
  if (C.zf) goto L_111b5447;
  /* 111b5431 call 0x111b4eb0 */
  push32(0x111b5436u); f_111b4eb0();
  /* 111b5436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b5438 je 0x111b5442 */
  if (C.zf) goto L_111b5442;
  /* 111b543a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b543d jmp 0x111b568b */
  goto L_111b568b;
L_111b5442:;
  /* 111b5442 jmp 0x111b54d5 */
  goto L_111b54d5;
L_111b5447:;
  /* 111b5447 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b544b je 0x111b5454 */
  if (C.zf) goto L_111b5454;
  /* 111b544d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b544f jmp 0x111b568b */
  goto L_111b568b;
L_111b5454:;
  /* 111b5454 cmp dword ptr [0x111d167c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d167c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b545b jne 0x111b5494 */
  if (!C.zf) goto L_111b5494;
  /* 111b545d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 111b5462 push 0x111cdbf8 */
  push32((uint32_t)(0x111cdbf8u));
  /* 111b5467 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b5469 push 4 */
  push32((uint32_t)(0x4u));
  /* 111b546b call 0x111a53b0 */
  push32(0x111b5470u); f_111a53b0();
  /* 111b5470 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5473 mov dword ptr [0x111d167c], eax */
  w32((uint32_t)(0x111d167c), (EAX));
  /* 111b5478 cmp dword ptr [0x111d167c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d167c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b547f jne 0x111b5489 */
  if (!C.zf) goto L_111b5489;
  /* 111b5481 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b5484 jmp 0x111b568b */
  goto L_111b568b;
L_111b5489:;
  /* 111b5489 mov eax, dword ptr [0x111d167c] */
  EAX = (r32((uint32_t)(0x111d167c)));
  /* 111b548e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_111b5494:;
  /* 111b5494 cmp dword ptr [0x111d1684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b549b jne 0x111b54d5 */
  if (!C.zf) goto L_111b54d5;
  /* 111b549d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 111b54a2 push 0x111cdbf8 */
  push32((uint32_t)(0x111cdbf8u));
  /* 111b54a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b54a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 111b54ab call 0x111a53b0 */
  push32(0x111b54b0u); f_111a53b0();
  /* 111b54b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b54b3 mov dword ptr [0x111d1684], eax */
  w32((uint32_t)(0x111d1684), (EAX));
  /* 111b54b8 cmp dword ptr [0x111d1684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b54bf jne 0x111b54c9 */
  if (!C.zf) goto L_111b54c9;
  /* 111b54c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b54c4 jmp 0x111b568b */
  goto L_111b568b;
L_111b54c9:;
  /* 111b54c9 mov ecx, dword ptr [0x111d1684] */
  ECX = (r32((uint32_t)(0x111d1684)));
  /* 111b54cf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_111b54d5:;
  /* 111b54d5 mov edx, dword ptr [0x111d167c] */
  EDX = (r32((uint32_t)(0x111d167c)));
  /* 111b54db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111b54de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b54e1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b54e4 push eax */
  push32((uint32_t)(EAX));
  /* 111b54e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b54e8 push ecx */
  push32((uint32_t)(ECX));
  /* 111b54e9 call 0x111b5690 */
  push32(0x111b54eeu); f_111b5690();
  /* 111b54ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b54f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b54f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b54f8 jl 0x111b5591 */
  if ((C.sf!=C.of)) goto L_111b5591;
  /* 111b54fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b5501 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5504 je 0x111b5591 */
  if (C.zf) goto L_111b5591;
  /* 111b550a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b550e je 0x111b5583 */
  if (C.zf) goto L_111b5583;
  /* 111b5510 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b5512 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b5515 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b5518 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 111b551b push edx */
  push32((uint32_t)(EDX));
  /* 111b551c call 0x111a5e40 */
  push32(0x111b5521u); f_111a5e40();
  /* 111b5521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5524 jmp 0x111b552f */
  goto L_111b552f;
L_111b5526:;
  /* 111b5526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b5529 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b552c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111b552f:;
  /* 111b552f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b5532 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b5535 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5539 je 0x111b5550 */
  if (C.zf) goto L_111b5550;
  /* 111b553b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b553e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b5541 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b5544 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 111b5547 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 111b554b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 111b554e jmp 0x111b5526 */
  goto L_111b5526;
L_111b5550:;
  /* 111b5550 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 111b5555 push 0x111cdbf8 */
  push32((uint32_t)(0x111cdbf8u));
  /* 111b555a push 2 */
  push32((uint32_t)(0x2u));
  /* 111b555c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b555f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 111b5562 push eax */
  push32((uint32_t)(EAX));
  /* 111b5563 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b5566 push ecx */
  push32((uint32_t)(ECX));
  /* 111b5567 call 0x111a5840 */
  push32(0x111b556cu); f_111a5840();
  /* 111b556c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b556f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b5572 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5576 je 0x111b5581 */
  if (C.zf) goto L_111b5581;
  /* 111b5578 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b557b mov dword ptr [0x111d167c], edx */
  w32((uint32_t)(0x111d167c), (EDX));
L_111b5581:;
  /* 111b5581 jmp 0x111b558f */
  goto L_111b558f;
L_111b5583:;
  /* 111b5583 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b5586 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b5589 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b558c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_111b558f:;
  /* 111b558f jmp 0x111b5604 */
  goto L_111b5604;
L_111b5591:;
  /* 111b5591 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5595 jne 0x111b55fd */
  if (!C.zf) goto L_111b55fd;
  /* 111b5597 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b559b jge 0x111b55a5 */
  if ((C.sf==C.of)) goto L_111b55a5;
  /* 111b559d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b55a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b55a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111b55a5:;
  /* 111b55a5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 111b55aa push 0x111cdbf8 */
  push32((uint32_t)(0x111cdbf8u));
  /* 111b55af push 2 */
  push32((uint32_t)(0x2u));
  /* 111b55b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b55b4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 111b55bb push edx */
  push32((uint32_t)(EDX));
  /* 111b55bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b55bf push eax */
  push32((uint32_t)(EAX));
  /* 111b55c0 call 0x111a5840 */
  push32(0x111b55c5u); f_111a5840();
  /* 111b55c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b55c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b55cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b55cf jne 0x111b55d9 */
  if (!C.zf) goto L_111b55d9;
  /* 111b55d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b55d4 jmp 0x111b568b */
  goto L_111b568b;
L_111b55d9:;
  /* 111b55d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b55dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b55df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b55e2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 111b55e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b55e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b55eb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 111b55f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b55f6 mov dword ptr [0x111d167c], eax */
  w32((uint32_t)(0x111d167c), (EAX));
  /* 111b55fb jmp 0x111b5604 */
  goto L_111b5604;
L_111b55fd:;
  /* 111b55fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b55ff jmp 0x111b568b */
  goto L_111b568b;
L_111b5604:;
  /* 111b5604 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5608 je 0x111b5689 */
  if (C.zf) goto L_111b5689;
  /* 111b560a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 111b560f push 0x111cdbf8 */
  push32((uint32_t)(0x111cdbf8u));
  /* 111b5614 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b5616 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b5619 push ecx */
  push32((uint32_t)(ECX));
  /* 111b561a call 0x111a81e0 */
  push32(0x111b561fu); f_111a81e0();
  /* 111b561f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5622 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5625 push eax */
  push32((uint32_t)(EAX));
  /* 111b5626 call 0x111a53b0 */
  push32(0x111b562bu); f_111a53b0();
  /* 111b562b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b562e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111b5631 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5635 je 0x111b5689 */
  if (C.zf) goto L_111b5689;
  /* 111b5637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b563a push edx */
  push32((uint32_t)(EDX));
  /* 111b563b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b563e push eax */
  push32((uint32_t)(EAX));
  /* 111b563f call 0x111a8360 */
  push32(0x111b5644u); f_111a8360();
  /* 111b5644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5647 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111b564a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b564d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b5650 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5652 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111b5655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b5658 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111b565b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b565e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5661 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b5664 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111b5667 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111b5669 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b566b not edx */
  EDX = (~(EDX));
  /* 111b566d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 111b5670 push edx */
  push32((uint32_t)(EDX));
  /* 111b5671 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b5674 push eax */
  push32((uint32_t)(EAX));
  /* 111b5675 call dword ptr [0x111d42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42cc))), 0x111b567bu);
  /* 111b567b push 2 */
  push32((uint32_t)(0x2u));
  /* 111b567d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b5680 push ecx */
  push32((uint32_t)(ECX));
  /* 111b5681 call 0x111a5e40 */
  push32(0x111b5686u); f_111a5e40();
  /* 111b5686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b5689:;
  /* 111b5689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b568b:;
  /* 111b568b pop esi */
  ESI = (pop32());
  /* 111b568c mov esp, ebp */
  ESP = (EBP);
  /* 111b568e pop ebp */
  EBP = (pop32());
  /* 111b568f ret  */
  ESPCHK(0x111b53b0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x111b5690 (124 bytes, 47 insns) */
void f_111b5690(void) {
  FTRACE(0x111b5690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b5690 push ebp */
  push32((uint32_t)(EBP));
  /* 111b5691 mov ebp, esp */
  EBP = (ESP);
  /* 111b5693 push ecx */
  push32((uint32_t)(ECX));
  /* 111b5694 mov eax, dword ptr [0x111d167c] */
  EAX = (r32((uint32_t)(0x111d167c)));
  /* 111b5699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111b569c jmp 0x111b56a7 */
  goto L_111b56a7;
L_111b569e:;
  /* 111b569e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b56a1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b56a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111b56a7:;
  /* 111b56a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b56aa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b56ad je 0x111b56fa */
  if (C.zf) goto L_111b56fa;
  /* 111b56af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b56b2 push eax */
  push32((uint32_t)(EAX));
  /* 111b56b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b56b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b56b8 push edx */
  push32((uint32_t)(EDX));
  /* 111b56b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b56bc push eax */
  push32((uint32_t)(EAX));
  /* 111b56bd call 0x111b4e60 */
  push32(0x111b56c2u); f_111b4e60();
  /* 111b56c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b56c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111b56c7 jne 0x111b56f8 */
  if (!C.zf) goto L_111b56f8;
  /* 111b56c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b56cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b56ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b56d1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 111b56d5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b56d8 je 0x111b56ea */
  if (C.zf) goto L_111b56ea;
  /* 111b56da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b56dd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b56df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b56e2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 111b56e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b56e8 jne 0x111b56f8 */
  if (!C.zf) goto L_111b56f8;
L_111b56ea:;
  /* 111b56ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b56ed sub eax, dword ptr [0x111d167c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d167c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b56f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 111b56f6 jmp 0x111b5708 */
  goto L_111b5708;
L_111b56f8:;
  /* 111b56f8 jmp 0x111b569e */
  goto L_111b569e;
L_111b56fa:;
  /* 111b56fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b56fd sub eax, dword ptr [0x111d167c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111d167c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b5703 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 111b5706 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_111b5708:;
  /* 111b5708 mov esp, ebp */
  ESP = (EBP);
  /* 111b570a pop ebp */
  EBP = (pop32());
  /* 111b570b ret  */
  ESPCHK(0x111b5690u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x111b5710 (238 bytes, 80 insns) */
void f_111b5710(void) {
  FTRACE(0x111b5710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b5710 push ebp */
  push32((uint32_t)(EBP));
  /* 111b5711 mov ebp, esp */
  EBP = (ESP);
  /* 111b5713 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b5716 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111b571d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b5720 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b5723 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5727 jne 0x111b5730 */
  if (!C.zf) goto L_111b5730;
  /* 111b5729 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b572b jmp 0x111b57fa */
  goto L_111b57fa;
L_111b5730:;
  /* 111b5730 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b5733 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b5735 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b5738 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b573b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111b573e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b5740 je 0x111b574d */
  if (C.zf) goto L_111b574d;
  /* 111b5742 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b5745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5748 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111b574b jmp 0x111b5730 */
  goto L_111b5730;
L_111b574d:;
  /* 111b574d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 111b5752 push 0x111cdbf8 */
  push32((uint32_t)(0x111cdbf8u));
  /* 111b5757 push 2 */
  push32((uint32_t)(0x2u));
  /* 111b5759 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111b575c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 111b5763 push eax */
  push32((uint32_t)(EAX));
  /* 111b5764 call 0x111a53b0 */
  push32(0x111b5769u); f_111a53b0();
  /* 111b5769 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b576c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111b576f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b5772 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111b5775 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5779 jne 0x111b5785 */
  if (!C.zf) goto L_111b5785;
  /* 111b577b push 9 */
  push32((uint32_t)(0x9u));
  /* 111b577d call 0x111a4320 */
  push32(0x111b5782u); f_111a4320();
  /* 111b5782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b5785:;
  /* 111b5785 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b5788 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111b578b:;
  /* 111b578b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b578e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b5791 je 0x111b57ee */
  if (C.zf) goto L_111b57ee;
  /* 111b5793 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 111b5798 push 0x111cdbf8 */
  push32((uint32_t)(0x111cdbf8u));
  /* 111b579d push 2 */
  push32((uint32_t)(0x2u));
  /* 111b579f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b57a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111b57a4 push edx */
  push32((uint32_t)(EDX));
  /* 111b57a5 call 0x111a81e0 */
  push32(0x111b57aau); f_111a81e0();
  /* 111b57aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b57ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b57b0 push eax */
  push32((uint32_t)(EAX));
  /* 111b57b1 call 0x111a53b0 */
  push32(0x111b57b6u); f_111a53b0();
  /* 111b57b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b57b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b57bc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111b57be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b57c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b57c4 je 0x111b57da */
  if (C.zf) goto L_111b57da;
  /* 111b57c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b57c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111b57cb push ecx */
  push32((uint32_t)(ECX));
  /* 111b57cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b57cf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111b57d1 push eax */
  push32((uint32_t)(EAX));
  /* 111b57d2 call 0x111a8360 */
  push32(0x111b57d7u); f_111a8360();
  /* 111b57d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111b57da:;
  /* 111b57da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111b57dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b57e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111b57e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b57e6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b57e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111b57ec jmp 0x111b578b */
  goto L_111b578b;
L_111b57ee:;
  /* 111b57ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111b57f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111b57f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111b57fa:;
  /* 111b57fa mov esp, ebp */
  ESP = (EBP);
  /* 111b57fc pop ebp */
  EBP = (pop32());
  /* 111b57fd ret  */
  ESPCHK(0x111b5710u, _esp0);
  ESP += 4; return;
}

/* FUN_10015800 @ 0x111b5800 (237 bytes, 81 insns) */
void f_111b5800(void) {
  FTRACE(0x111b5800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b5800 push ebp */
  push32((uint32_t)(EBP));
  /* 111b5801 mov ebp, esp */
  EBP = (ESP);
  /* 111b5803 push ecx */
  push32((uint32_t)(ECX));
  /* 111b5804 cmp dword ptr [0x111d2dcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d2dcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b580b jne 0x111b5822 */
  if (!C.zf) goto L_111b5822;
  /* 111b580d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111b5810 push eax */
  push32((uint32_t)(EAX));
  /* 111b5811 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b5814 push ecx */
  push32((uint32_t)(ECX));
  /* 111b5815 call 0x111b5900 */
  push32(0x111b581au); f_111b5900();
  /* 111b581a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b581d jmp 0x111b58e9 */
  goto L_111b58e9;
L_111b5822:;
  /* 111b5822 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111b5824 call 0x111a8db0 */
  push32(0x111b5829u); f_111a8db0();
  /* 111b5829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b582c jmp 0x111b5837 */
  goto L_111b5837;
L_111b582e:;
  /* 111b582e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b5831 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5834 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_111b5837:;
  /* 111b5837 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b583a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 111b583e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 111b5842 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b5845 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111b584b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111b584d je 0x111b58cb */
  if (C.zf) goto L_111b58cb;
  /* 111b584f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b5852 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b5857 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b5859 mov cl, byte ptr [eax + 0x111d2ee1] */
  CL = (r8((uint32_t)(EAX + 0x111d2ee1)));
  /* 111b585f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 111b5862 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b5864 je 0x111b58b6 */
  if (C.zf) goto L_111b58b6;
  /* 111b5866 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b5869 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b586c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111b586f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b5872 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b5874 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b5876 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111b5878 jne 0x111b5888 */
  if (!C.zf) goto L_111b5888;
  /* 111b587a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111b587c call 0x111a8e50 */
  push32(0x111b5881u); f_111a8e50();
  /* 111b5881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b5886 jmp 0x111b58e9 */
  goto L_111b58e9;
L_111b5888:;
  /* 111b5888 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b588b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111b5891 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 111b5894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b5897 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111b5899 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111b589b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111b589d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b58a0 jne 0x111b58b4 */
  if (!C.zf) goto L_111b58b4;
  /* 111b58a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111b58a4 call 0x111a8e50 */
  push32(0x111b58a9u); f_111a8e50();
  /* 111b58a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b58ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b58af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111b58b2 jmp 0x111b58e9 */
  goto L_111b58e9;
L_111b58b4:;
  /* 111b58b4 jmp 0x111b58c6 */
  goto L_111b58c6;
L_111b58b6:;
  /* 111b58b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b58b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111b58bf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b58c2 jne 0x111b58c6 */
  if (!C.zf) goto L_111b58c6;
  /* 111b58c4 jmp 0x111b58cb */
  goto L_111b58cb;
L_111b58c6:;
  /* 111b58c6 jmp 0x111b582e */
  goto L_111b582e;
L_111b58cb:;
  /* 111b58cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111b58cd call 0x111a8e50 */
  push32(0x111b58d2u); f_111a8e50();
  /* 111b58d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111b58d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111b58d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b58dd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111b58e0 jne 0x111b58e7 */
  if (!C.zf) goto L_111b58e7;
  /* 111b58e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111b58e5 jmp 0x111b58e9 */
  goto L_111b58e9;
L_111b58e7:;
  /* 111b58e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111b58e9:;
  /* 111b58e9 mov esp, ebp */
  ESP = (EBP);
  /* 111b58eb pop ebp */
  EBP = (pop32());
  /* 111b58ec ret  */
  ESPCHK(0x111b5800u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x111b5900 (193 bytes, 87 insns) */
void f_111b5900(void) {
  FTRACE(0x111b5900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b5900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b5902 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 111b5906 push ebx */
  push32((uint32_t)(EBX));
  /* 111b5907 mov ebx, eax */
  EBX = (EAX);
  /* 111b5909 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111b590c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 111b5910 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 111b5916 je 0x111b592b */
  if (C.zf) goto L_111b592b;
L_111b5918:;
  /* 111b5918 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 111b591a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111b591b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b591d je 0x111b58f0 */
  if (C.zf) { jmp_ind(0x111b58f0u); return; }
  /* 111b591f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 111b5921 je 0x111b5974 */
  if (C.zf) goto L_111b5974;
  /* 111b5923 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 111b5929 jne 0x111b5918 */
  if (!C.zf) goto L_111b5918;
L_111b592b:;
  /* 111b592b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 111b592d push edi */
  push32((uint32_t)(EDI));
  /* 111b592e mov eax, ebx */
  EAX = (EBX);
  /* 111b5930 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 111b5933 push esi */
  push32((uint32_t)(ESI));
  /* 111b5934 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_111b5936:;
  /* 111b5936 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 111b5938 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 111b593d mov eax, ecx */
  EAX = (ECX);
  /* 111b593f mov esi, edi */
  ESI = (EDI);
  /* 111b5941 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 111b5943 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5945 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5947 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111b594a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111b594d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 111b594f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 111b5951 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111b5954 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 111b595a jne 0x111b5978 */
  if (!C.zf) goto L_111b5978;
  /* 111b595c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 111b5961 je 0x111b5936 */
  if (C.zf) goto L_111b5936;
  /* 111b5963 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 111b5968 jne 0x111b5972 */
  if (!C.zf) goto L_111b5972;
  /* 111b596a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 111b5970 jne 0x111b5936 */
  if (!C.zf) goto L_111b5936;
L_111b5972:;
  /* 111b5972 pop esi */
  ESI = (pop32());
  /* 111b5973 pop edi */
  EDI = (pop32());
L_111b5974:;
  /* 111b5974 pop ebx */
  EBX = (pop32());
  /* 111b5975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111b5977 ret  */
  ESPCHK(0x111b5900u, _esp0);
  ESP += 4; return;
L_111b5978:;
  /* 111b5978 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 111b597b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b597d je 0x111b59b5 */
  if (C.zf) goto L_111b59b5;
  /* 111b597f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111b5981 je 0x111b5972 */
  if (C.zf) goto L_111b5972;
  /* 111b5983 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b5985 je 0x111b59ae */
  if (C.zf) goto L_111b59ae;
  /* 111b5987 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 111b5989 je 0x111b5972 */
  if (C.zf) goto L_111b5972;
  /* 111b598b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111b598e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b5990 je 0x111b59a7 */
  if (C.zf) goto L_111b59a7;
  /* 111b5992 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111b5994 je 0x111b5972 */
  if (C.zf) goto L_111b5972;
  /* 111b5996 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111b5998 je 0x111b59a0 */
  if (C.zf) goto L_111b59a0;
  /* 111b599a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 111b599c je 0x111b5972 */
  if (C.zf) goto L_111b5972;
  /* 111b599e jmp 0x111b5936 */
  goto L_111b5936;
L_111b59a0:;
  /* 111b59a0 pop esi */
  ESI = (pop32());
  /* 111b59a1 pop edi */
  EDI = (pop32());
  /* 111b59a2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 111b59a5 pop ebx */
  EBX = (pop32());
  /* 111b59a6 ret  */
  ESPCHK(0x111b5900u, _esp0);
  ESP += 4; return;
L_111b59a7:;
  /* 111b59a7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 111b59aa pop esi */
  ESI = (pop32());
  /* 111b59ab pop edi */
  EDI = (pop32());
  /* 111b59ac pop ebx */
  EBX = (pop32());
  /* 111b59ad ret  */
  ESPCHK(0x111b5900u, _esp0);
  ESP += 4; return;
L_111b59ae:;
  /* 111b59ae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 111b59b1 pop esi */
  ESI = (pop32());
  /* 111b59b2 pop edi */
  EDI = (pop32());
  /* 111b59b3 pop ebx */
  EBX = (pop32());
  /* 111b59b4 ret  */
  ESPCHK(0x111b5900u, _esp0);
  ESP += 4; return;
L_111b59b5:;
  /* 111b59b5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 111b59b8 pop esi */
  ESI = (pop32());
  /* 111b59b9 pop edi */
  EDI = (pop32());
  /* 111b59ba pop ebx */
  EBX = (pop32());
  /* 111b59bb ret  */
  ESPCHK(0x111b5900u, _esp0);
  ESP += 4; return;
  /* 111b59bc jmp dword ptr [0x111d4378] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x111d4378)))); return;
}

/* RtlUnwind @ 0x111b5b0c (6 bytes, 1 insns) */
void f_111b5b0c(void) {
  FTRACE(0x111b5b0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111b5b0c jmp dword ptr [0x111d4304] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x111d4304)))); return;
}

