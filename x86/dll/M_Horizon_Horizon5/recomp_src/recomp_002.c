#include "recomp.h"

/* FUN_100167a0 @ 0x127f67a0 (393 bytes, 123 insns) */
void f_127f67a0(void) {
  FTRACE(0x127f67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f67a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f67a1 mov ebp, esp */
  EBP = (ESP);
  /* 127f67a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f67a6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f67aa jne 0x127f67b6 */
  if (!C.zf) goto L_127f67b6;
  /* 127f67ac mov eax, dword ptr [0x12814c98] */
  EAX = (r32((uint32_t)(0x12814c98)));
  /* 127f67b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127f67b4 jmp 0x127f67bc */
  goto L_127f67bc;
L_127f67b6:;
  /* 127f67b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f67b9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127f67bc:;
  /* 127f67bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f67bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f67c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f67c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f67c8 push 0x12815b8c */
  push32((uint32_t)(0x12815b8cu));
  /* 127f67cd call dword ptr [0x12818350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818350))), 0x127f67d3u);
  /* 127f67d3 cmp dword ptr [0x12815b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f67da je 0x127f67fa */
  if (C.zf) goto L_127f67fa;
  /* 127f67dc push 0x12815b8c */
  push32((uint32_t)(0x12815b8cu));
  /* 127f67e1 call dword ptr [0x12818340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818340))), 0x127f67e7u);
  /* 127f67e7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f67e9 call 0x127ece60 */
  push32(0x127f67eeu); f_127ece60();
  /* 127f67ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f67f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 127f67f8 jmp 0x127f6801 */
  goto L_127f6801;
L_127f67fa:;
  /* 127f67fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127f6801:;
  /* 127f6801 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6805 jbe 0x127f68f2 */
  if ((C.cf||C.zf)) goto L_127f68f2;
  /* 127f680b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f680e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f6810 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 127f6813 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f6817 je 0x127f6821 */
  if (C.zf) goto L_127f6821;
  /* 127f6819 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f681d je 0x127f6826 */
  if (C.zf) goto L_127f6826;
  /* 127f681f jmp 0x127f6880 */
  goto L_127f6880;
L_127f6821:;
  /* 127f6821 jmp 0x127f68f2 */
  goto L_127f68f2;
L_127f6826:;
  /* 127f6826 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6829 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f682c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 127f682f mov dword ptr [0x12815b68], 0 */
  w32((uint32_t)(0x12815b68), (0x0u));
  /* 127f6839 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f683c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f683f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6842 jne 0x127f6857 */
  if (!C.zf) goto L_127f6857;
  /* 127f6844 mov dword ptr [0x12815b68], 1 */
  w32((uint32_t)(0x12815b68), (0x1u));
  /* 127f684e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6851 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6854 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_127f6857:;
  /* 127f6857 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f685a push ecx */
  push32((uint32_t)(ECX));
  /* 127f685b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 127f685e push edx */
  push32((uint32_t)(EDX));
  /* 127f685f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 127f6862 push eax */
  push32((uint32_t)(EAX));
  /* 127f6863 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6866 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6867 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f686a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f686c push eax */
  push32((uint32_t)(EAX));
  /* 127f686d call 0x127f6930 */
  push32(0x127f6872u); f_127f6930();
  /* 127f6872 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6875 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6878 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f687b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127f687e jmp 0x127f68ed */
  goto L_127f68ed;
L_127f6880:;
  /* 127f6880 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f6885 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f6887 mov ecx, dword ptr [0x12813c98] */
  ECX = (r32((uint32_t)(0x12813c98)));
  /* 127f688d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f688f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127f6893 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 127f6899 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f689b je 0x127f68c8 */
  if (C.zf) goto L_127f68c8;
  /* 127f689d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f68a1 jbe 0x127f68c8 */
  if ((C.cf||C.zf)) goto L_127f68c8;
  /* 127f68a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f68a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f68a9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f68ab mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127f68ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f68b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f68b3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f68b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f68b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f68bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127f68bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f68c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f68c5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127f68c8:;
  /* 127f68c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f68cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f68ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f68d0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127f68d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f68d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f68d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f68db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f68de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f68e1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127f68e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f68e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f68ea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127f68ed:;
  /* 127f68ed jmp 0x127f6801 */
  goto L_127f6801;
L_127f68f2:;
  /* 127f68f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f68f6 je 0x127f6904 */
  if (C.zf) goto L_127f6904;
  /* 127f68f8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f68fa call 0x127ecf00 */
  push32(0x127f68ffu); f_127ecf00();
  /* 127f68ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6902 jmp 0x127f690f */
  goto L_127f690f;
L_127f6904:;
  /* 127f6904 push 0x12815b8c */
  push32((uint32_t)(0x12815b8cu));
  /* 127f6909 call dword ptr [0x12818340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818340))), 0x127f690fu);
L_127f690f:;
  /* 127f690f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6913 jbe 0x127f6923 */
  if ((C.cf||C.zf)) goto L_127f6923;
  /* 127f6915 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6918 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127f691b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f691e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6921 jmp 0x127f6925 */
  goto L_127f6925;
L_127f6923:;
  /* 127f6923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f6925:;
  /* 127f6925 mov esp, ebp */
  ESP = (EBP);
  /* 127f6927 pop ebp */
  EBP = (pop32());
  /* 127f6928 ret  */
  ESPCHK(0x127f67a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016930 @ 0x127f6930 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_127f6930(void) {
  FTRACE(0x127f6930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f6930 push ebp */
  push32((uint32_t)(EBP));
  /* 127f6931 mov ebp, esp */
  EBP = (ESP);
  /* 127f6933 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6936 push esi */
  push32((uint32_t)(ESI));
  /* 127f6937 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 127f693b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f693e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6941 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6944 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f6947 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f694b ja 0x127f6e98 */
  if ((!C.cf&&!C.zf)) goto L_127f6e98;
  /* 127f6951 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6954 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f6956 mov dl, byte ptr [eax + 0x127f6ef9] */
  DL = (r8((uint32_t)(EAX + 0x127f6ef9)));
  /* 127f695c jmp dword ptr [edx*4 + 0x127f6e9d] */
  switch (EDX) {
    case 0: goto L_127f6e76;
    case 1: goto L_127f6985;
    case 2: goto L_127f69cb;
    case 3: goto L_127f6b18;
    case 4: goto L_127f6b40;
    case 5: goto L_127f6bdf;
    case 6: goto L_127f6c4b;
    case 7: goto L_127f6c74;
    case 8: goto L_127f6cb5;
    case 9: goto L_127f6d97;
    case 10: goto L_127f6dfe;
    case 11: goto L_127f6e4b;
    case 12: goto L_127f6963;
    case 13: goto L_127f69a8;
    case 14: goto L_127f69ee;
    case 15: goto L_127f6aee;
    case 16: goto L_127f6b85;
    case 17: goto L_127f6bb2;
    case 18: goto L_127f6c07;
    case 19: goto L_127f6c8b;
    case 20: goto L_127f6d39;
    case 21: goto L_127f6dc8;
    case 22: goto L_127f6e98;
    default: x86_unimpl("switch@0x127f695c out of table"); return;
  }
L_127f6963:;
  /* 127f6963 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6966 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6967 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f696a push edx */
  push32((uint32_t)(EDX));
  /* 127f696b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f696e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 127f6971 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6974 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 127f6977 push eax */
  push32((uint32_t)(EAX));
  /* 127f6978 call 0x127f6f50 */
  push32(0x127f697du); f_127f6f50();
  /* 127f697d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6980 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6985:;
  /* 127f6985 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6988 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6989 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f698c push edx */
  push32((uint32_t)(EDX));
  /* 127f698d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6990 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 127f6993 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6996 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 127f699a push eax */
  push32((uint32_t)(EAX));
  /* 127f699b call 0x127f6f50 */
  push32(0x127f69a0u); f_127f6f50();
  /* 127f69a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f69a3 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f69a8:;
  /* 127f69a8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f69ab push ecx */
  push32((uint32_t)(ECX));
  /* 127f69ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f69af push edx */
  push32((uint32_t)(EDX));
  /* 127f69b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f69b3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127f69b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f69b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 127f69bd push eax */
  push32((uint32_t)(EAX));
  /* 127f69be call 0x127f6f50 */
  push32(0x127f69c3u); f_127f6f50();
  /* 127f69c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f69c6 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f69cb:;
  /* 127f69cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f69ce push ecx */
  push32((uint32_t)(ECX));
  /* 127f69cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f69d2 push edx */
  push32((uint32_t)(EDX));
  /* 127f69d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f69d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127f69d9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f69dc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 127f69e0 push eax */
  push32((uint32_t)(EAX));
  /* 127f69e1 call 0x127f6f50 */
  push32(0x127f69e6u); f_127f6f50();
  /* 127f69e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f69e9 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f69ee:;
  /* 127f69ee cmp dword ptr [0x12815b68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f69f5 je 0x127f6a76 */
  if (C.zf) goto L_127f6a76;
  /* 127f69f7 mov dword ptr [0x12815b68], 0 */
  w32((uint32_t)(0x12815b68), (0x0u));
  /* 127f6a01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6a04 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6a05 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6a08 push edx */
  push32((uint32_t)(EDX));
  /* 127f6a09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6a0c push eax */
  push32((uint32_t)(EAX));
  /* 127f6a0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6a10 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6a11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6a14 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 127f6a1a push eax */
  push32((uint32_t)(EAX));
  /* 127f6a1b call 0x127f7100 */
  push32(0x127f6a20u); f_127f7100();
  /* 127f6a20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6a23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6a26 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6a29 jne 0x127f6a30 */
  if (!C.zf) goto L_127f6a30;
  /* 127f6a2b jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6a30:;
  /* 127f6a30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6a33 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f6a35 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 127f6a38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6a3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f6a3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6a40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6a43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f6a45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6a48 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f6a4a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6a4d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6a50 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f6a52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6a55 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6a56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6a59 push edx */
  push32((uint32_t)(EDX));
  /* 127f6a5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6a5d push eax */
  push32((uint32_t)(EAX));
  /* 127f6a5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6a61 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6a62 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6a65 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 127f6a6b push eax */
  push32((uint32_t)(EAX));
  /* 127f6a6c call 0x127f7100 */
  push32(0x127f6a71u); f_127f7100();
  /* 127f6a71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6a74 jmp 0x127f6ae9 */
  goto L_127f6ae9;
L_127f6a76:;
  /* 127f6a76 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6a79 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6a7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6a7d push edx */
  push32((uint32_t)(EDX));
  /* 127f6a7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6a81 push eax */
  push32((uint32_t)(EAX));
  /* 127f6a82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6a85 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6a86 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6a89 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 127f6a8f push eax */
  push32((uint32_t)(EAX));
  /* 127f6a90 call 0x127f7100 */
  push32(0x127f6a95u); f_127f7100();
  /* 127f6a95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6a98 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6a9b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6a9e jne 0x127f6aa5 */
  if (!C.zf) goto L_127f6aa5;
  /* 127f6aa0 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6aa5:;
  /* 127f6aa5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6aa8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f6aaa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 127f6aad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6ab0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f6ab2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6ab5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6ab8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f6aba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6abd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f6abf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6ac2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6ac5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f6ac7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6aca push ecx */
  push32((uint32_t)(ECX));
  /* 127f6acb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6ace push edx */
  push32((uint32_t)(EDX));
  /* 127f6acf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6ad2 push eax */
  push32((uint32_t)(EAX));
  /* 127f6ad3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6ad6 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6ad7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6ada mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 127f6ae0 push eax */
  push32((uint32_t)(EAX));
  /* 127f6ae1 call 0x127f7100 */
  push32(0x127f6ae6u); f_127f7100();
  /* 127f6ae6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f6ae9:;
  /* 127f6ae9 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6aee:;
  /* 127f6aee mov ecx, dword ptr [0x12815b68] */
  ECX = (r32((uint32_t)(0x12815b68)));
  /* 127f6af4 mov dword ptr [0x12815b78], ecx */
  w32((uint32_t)(0x12815b78), (ECX));
  /* 127f6afa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6afd push edx */
  push32((uint32_t)(EDX));
  /* 127f6afe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6b01 push eax */
  push32((uint32_t)(EAX));
  /* 127f6b02 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f6b04 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6b07 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f6b0a push edx */
  push32((uint32_t)(EDX));
  /* 127f6b0b call 0x127f6fa0 */
  push32(0x127f6b10u); f_127f6fa0();
  /* 127f6b10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6b13 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6b18:;
  /* 127f6b18 mov eax, dword ptr [0x12815b68] */
  EAX = (r32((uint32_t)(0x12815b68)));
  /* 127f6b1d mov dword ptr [0x12815b78], eax */
  w32((uint32_t)(0x12815b78), (EAX));
  /* 127f6b22 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6b25 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6b26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6b29 push edx */
  push32((uint32_t)(EDX));
  /* 127f6b2a push 2 */
  push32((uint32_t)(0x2u));
  /* 127f6b2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6b2f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127f6b32 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6b33 call 0x127f6fa0 */
  push32(0x127f6b38u); f_127f6fa0();
  /* 127f6b38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6b3b jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6b40:;
  /* 127f6b40 mov edx, dword ptr [0x12815b68] */
  EDX = (r32((uint32_t)(0x12815b68)));
  /* 127f6b46 mov dword ptr [0x12815b78], edx */
  w32((uint32_t)(0x12815b78), (EDX));
  /* 127f6b4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6b4f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 127f6b52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f6b53 mov ecx, 0xc */
  ECX = (0xcu);
  /* 127f6b58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f6b5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f6b5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6b61 jne 0x127f6b6a */
  if (!C.zf) goto L_127f6b6a;
  /* 127f6b63 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_127f6b6a:;
  /* 127f6b6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6b6d push edx */
  push32((uint32_t)(EDX));
  /* 127f6b6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6b71 push eax */
  push32((uint32_t)(EAX));
  /* 127f6b72 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f6b74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f6b77 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6b78 call 0x127f6fa0 */
  push32(0x127f6b7du); f_127f6fa0();
  /* 127f6b7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6b80 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6b85:;
  /* 127f6b85 mov edx, dword ptr [0x12815b68] */
  EDX = (r32((uint32_t)(0x12815b68)));
  /* 127f6b8b mov dword ptr [0x12815b78], edx */
  w32((uint32_t)(0x12815b78), (EDX));
  /* 127f6b91 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6b94 push eax */
  push32((uint32_t)(EAX));
  /* 127f6b95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6b98 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 127f6b9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6b9e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127f6ba1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6ba4 push eax */
  push32((uint32_t)(EAX));
  /* 127f6ba5 call 0x127f6fa0 */
  push32(0x127f6baau); f_127f6fa0();
  /* 127f6baa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6bad jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6bb2:;
  /* 127f6bb2 mov ecx, dword ptr [0x12815b68] */
  ECX = (r32((uint32_t)(0x12815b68)));
  /* 127f6bb8 mov dword ptr [0x12815b78], ecx */
  w32((uint32_t)(0x12815b78), (ECX));
  /* 127f6bbe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6bc1 push edx */
  push32((uint32_t)(EDX));
  /* 127f6bc2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6bc5 push eax */
  push32((uint32_t)(EAX));
  /* 127f6bc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f6bc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6bcb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127f6bce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6bd1 push edx */
  push32((uint32_t)(EDX));
  /* 127f6bd2 call 0x127f6fa0 */
  push32(0x127f6bd7u); f_127f6fa0();
  /* 127f6bd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6bda jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6bdf:;
  /* 127f6bdf mov eax, dword ptr [0x12815b68] */
  EAX = (r32((uint32_t)(0x12815b68)));
  /* 127f6be4 mov dword ptr [0x12815b78], eax */
  w32((uint32_t)(0x12815b78), (EAX));
  /* 127f6be9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6bec push ecx */
  push32((uint32_t)(ECX));
  /* 127f6bed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6bf0 push edx */
  push32((uint32_t)(EDX));
  /* 127f6bf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f6bf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6bf6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127f6bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6bfa call 0x127f6fa0 */
  push32(0x127f6bffu); f_127f6fa0();
  /* 127f6bff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6c02 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6c07:;
  /* 127f6c07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6c0a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6c0e jg 0x127f6c2c */
  if ((!C.zf&&C.sf==C.of)) goto L_127f6c2c;
  /* 127f6c10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6c13 push eax */
  push32((uint32_t)(EAX));
  /* 127f6c14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6c17 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6c18 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6c1b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 127f6c21 push eax */
  push32((uint32_t)(EAX));
  /* 127f6c22 call 0x127f6f50 */
  push32(0x127f6c27u); f_127f6f50();
  /* 127f6c27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6c2a jmp 0x127f6c46 */
  goto L_127f6c46;
L_127f6c2c:;
  /* 127f6c2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6c2f push ecx */
  push32((uint32_t)(ECX));
  /* 127f6c30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6c33 push edx */
  push32((uint32_t)(EDX));
  /* 127f6c34 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6c37 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 127f6c3d push ecx */
  push32((uint32_t)(ECX));
  /* 127f6c3e call 0x127f6f50 */
  push32(0x127f6c43u); f_127f6f50();
  /* 127f6c43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f6c46:;
  /* 127f6c46 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6c4b:;
  /* 127f6c4b mov edx, dword ptr [0x12815b68] */
  EDX = (r32((uint32_t)(0x12815b68)));
  /* 127f6c51 mov dword ptr [0x12815b78], edx */
  w32((uint32_t)(0x12815b78), (EDX));
  /* 127f6c57 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6c5a push eax */
  push32((uint32_t)(EAX));
  /* 127f6c5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6c5e push ecx */
  push32((uint32_t)(ECX));
  /* 127f6c5f push 2 */
  push32((uint32_t)(0x2u));
  /* 127f6c61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6c64 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f6c66 push eax */
  push32((uint32_t)(EAX));
  /* 127f6c67 call 0x127f6fa0 */
  push32(0x127f6c6cu); f_127f6fa0();
  /* 127f6c6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6c6f jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6c74:;
  /* 127f6c74 mov ecx, dword ptr [0x12815b68] */
  ECX = (r32((uint32_t)(0x12815b68)));
  /* 127f6c7a mov dword ptr [0x12815b78], ecx */
  w32((uint32_t)(0x12815b78), (ECX));
  /* 127f6c80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6c83 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 127f6c86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f6c89 jmp 0x127f6cdd */
  goto L_127f6cdd;
L_127f6c8b:;
  /* 127f6c8b mov ecx, dword ptr [0x12815b68] */
  ECX = (r32((uint32_t)(0x12815b68)));
  /* 127f6c91 mov dword ptr [0x12815b78], ecx */
  w32((uint32_t)(0x12815b78), (ECX));
  /* 127f6c97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6c9a push edx */
  push32((uint32_t)(EDX));
  /* 127f6c9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6c9e push eax */
  push32((uint32_t)(EAX));
  /* 127f6c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 127f6ca1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6ca4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127f6ca7 push edx */
  push32((uint32_t)(EDX));
  /* 127f6ca8 call 0x127f6fa0 */
  push32(0x127f6cadu); f_127f6fa0();
  /* 127f6cad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6cb0 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6cb5:;
  /* 127f6cb5 mov eax, dword ptr [0x12815b68] */
  EAX = (r32((uint32_t)(0x12815b68)));
  /* 127f6cba mov dword ptr [0x12815b78], eax */
  w32((uint32_t)(0x12815b78), (EAX));
  /* 127f6cbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6cc2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6cc6 jne 0x127f6cd1 */
  if (!C.zf) goto L_127f6cd1;
  /* 127f6cc8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 127f6ccf jmp 0x127f6cdd */
  goto L_127f6cdd;
L_127f6cd1:;
  /* 127f6cd1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6cd4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 127f6cd7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6cda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127f6cdd:;
  /* 127f6cdd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6ce0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127f6ce3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6ce6 jge 0x127f6cf1 */
  if ((C.sf==C.of)) goto L_127f6cf1;
  /* 127f6ce8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f6cef jmp 0x127f6d1e */
  goto L_127f6d1e;
L_127f6cf1:;
  /* 127f6cf1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6cf4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127f6cf7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f6cf8 mov ecx, 7 */
  ECX = (0x7u);
  /* 127f6cfd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f6cff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f6d02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6d05 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127f6d08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f6d09 mov ecx, 7 */
  ECX = (0x7u);
  /* 127f6d0e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f6d10 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6d13 jl 0x127f6d1e */
  if ((C.sf!=C.of)) goto L_127f6d1e;
  /* 127f6d15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f6d18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6d1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127f6d1e:;
  /* 127f6d1e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6d21 push eax */
  push32((uint32_t)(EAX));
  /* 127f6d22 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6d25 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6d26 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f6d28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f6d2b push edx */
  push32((uint32_t)(EDX));
  /* 127f6d2c call 0x127f6fa0 */
  push32(0x127f6d31u); f_127f6fa0();
  /* 127f6d31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6d34 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6d39:;
  /* 127f6d39 cmp dword ptr [0x12815b68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6d40 je 0x127f6d70 */
  if (C.zf) goto L_127f6d70;
  /* 127f6d42 mov dword ptr [0x12815b68], 0 */
  w32((uint32_t)(0x12815b68), (0x0u));
  /* 127f6d4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6d4f push eax */
  push32((uint32_t)(EAX));
  /* 127f6d50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6d53 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6d54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6d57 push edx */
  push32((uint32_t)(EDX));
  /* 127f6d58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6d5b push eax */
  push32((uint32_t)(EAX));
  /* 127f6d5c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6d5f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 127f6d65 push edx */
  push32((uint32_t)(EDX));
  /* 127f6d66 call 0x127f7100 */
  push32(0x127f6d6bu); f_127f7100();
  /* 127f6d6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6d6e jmp 0x127f6d92 */
  goto L_127f6d92;
L_127f6d70:;
  /* 127f6d70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6d73 push eax */
  push32((uint32_t)(EAX));
  /* 127f6d74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6d77 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6d78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6d7b push edx */
  push32((uint32_t)(EDX));
  /* 127f6d7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6d7f push eax */
  push32((uint32_t)(EAX));
  /* 127f6d80 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6d83 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 127f6d89 push edx */
  push32((uint32_t)(EDX));
  /* 127f6d8a call 0x127f7100 */
  push32(0x127f6d8fu); f_127f7100();
  /* 127f6d8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f6d92:;
  /* 127f6d92 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6d97:;
  /* 127f6d97 mov dword ptr [0x12815b68], 0 */
  w32((uint32_t)(0x12815b68), (0x0u));
  /* 127f6da1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6da4 push eax */
  push32((uint32_t)(EAX));
  /* 127f6da5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6da8 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6da9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6dac push edx */
  push32((uint32_t)(EDX));
  /* 127f6dad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6db0 push eax */
  push32((uint32_t)(EAX));
  /* 127f6db1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f6db4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 127f6dba push edx */
  push32((uint32_t)(EDX));
  /* 127f6dbb call 0x127f7100 */
  push32(0x127f6dc0u); f_127f7100();
  /* 127f6dc0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6dc3 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6dc8:;
  /* 127f6dc8 mov eax, dword ptr [0x12815b68] */
  EAX = (r32((uint32_t)(0x12815b68)));
  /* 127f6dcd mov dword ptr [0x12815b78], eax */
  w32((uint32_t)(0x12815b78), (EAX));
  /* 127f6dd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6dd5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 127f6dd8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f6dd9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 127f6dde idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f6de0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f6de3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6de6 push edx */
  push32((uint32_t)(EDX));
  /* 127f6de7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6dea push eax */
  push32((uint32_t)(EAX));
  /* 127f6deb push 2 */
  push32((uint32_t)(0x2u));
  /* 127f6ded mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f6df0 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6df1 call 0x127f6fa0 */
  push32(0x127f6df6u); f_127f6fa0();
  /* 127f6df6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6df9 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6dfe:;
  /* 127f6dfe mov edx, dword ptr [0x12815b68] */
  EDX = (r32((uint32_t)(0x12815b68)));
  /* 127f6e04 mov dword ptr [0x12815b78], edx */
  w32((uint32_t)(0x12815b78), (EDX));
  /* 127f6e0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6e0d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 127f6e10 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f6e11 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 127f6e16 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f6e18 mov ecx, eax */
  ECX = (EAX);
  /* 127f6e1a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6e1d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f6e20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6e23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127f6e26 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f6e27 mov esi, 0x64 */
  ESI = (0x64u);
  /* 127f6e2c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f6e2e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6e30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f6e33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6e36 push eax */
  push32((uint32_t)(EAX));
  /* 127f6e37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6e3a push ecx */
  push32((uint32_t)(ECX));
  /* 127f6e3b push 4 */
  push32((uint32_t)(0x4u));
  /* 127f6e3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f6e40 push edx */
  push32((uint32_t)(EDX));
  /* 127f6e41 call 0x127f6fa0 */
  push32(0x127f6e46u); f_127f6fa0();
  /* 127f6e46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6e49 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6e4b:;
  /* 127f6e4b call 0x127f7f60 */
  push32(0x127f6e50u); f_127f7f60();
  /* 127f6e50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6e53 push eax */
  push32((uint32_t)(EAX));
  /* 127f6e54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6e57 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6e58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6e5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f6e5d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6e61 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 127f6e64 mov ecx, dword ptr [eax*4 + 0x12814e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12814e1c)));
  /* 127f6e6b push ecx */
  push32((uint32_t)(ECX));
  /* 127f6e6c call 0x127f6f50 */
  push32(0x127f6e71u); f_127f6f50();
  /* 127f6e71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6e74 jmp 0x127f6e98 */
  goto L_127f6e98;
L_127f6e76:;
  /* 127f6e76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6e79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f6e7b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 127f6e7e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6e81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f6e83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6e86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6e89 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f6e8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6e8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f6e90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6e93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6e96 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127f6e98:;
  /* 127f6e98 pop esi */
  ESI = (pop32());
  /* 127f6e99 mov esp, ebp */
  ESP = (EBP);
  /* 127f6e9b pop ebp */
  EBP = (pop32());
  /* 127f6e9c ret  */
  ESPCHK(0x127f6930u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x127f6f50 (72 bytes, 30 insns) */
void f_127f6f50(void) {
  FTRACE(0x127f6f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f6f50 push ebp */
  push32((uint32_t)(EBP));
  /* 127f6f51 mov ebp, esp */
  EBP = (ESP);
L_127f6f53:;
  /* 127f6f53 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6f56 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6f59 je 0x127f6f96 */
  if (C.zf) goto L_127f6f96;
  /* 127f6f5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6f5e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f6f61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f6f63 je 0x127f6f96 */
  if (C.zf) goto L_127f6f96;
  /* 127f6f65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6f68 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f6f6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6f6d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f6f6f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127f6f71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6f74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f6f76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6f79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6f7c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f6f7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6f81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6f84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127f6f87 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6f8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f6f8c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6f8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6f92 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127f6f94 jmp 0x127f6f53 */
  goto L_127f6f53;
L_127f6f96:;
  /* 127f6f96 pop ebp */
  EBP = (pop32());
  /* 127f6f97 ret  */
  ESPCHK(0x127f6f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10016fa0 @ 0x127f6fa0 (173 bytes, 64 insns) */
void f_127f6fa0(void) {
  FTRACE(0x127f6fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f6fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f6fa1 mov ebp, esp */
  EBP = (ESP);
  /* 127f6fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6fa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f6fab cmp dword ptr [0x12815b78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6fb2 je 0x127f6fca */
  if (C.zf) goto L_127f6fca;
  /* 127f6fb4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6fb7 push eax */
  push32((uint32_t)(EAX));
  /* 127f6fb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f6fbb push ecx */
  push32((uint32_t)(ECX));
  /* 127f6fbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6fbf push edx */
  push32((uint32_t)(EDX));
  /* 127f6fc0 call 0x127f7050 */
  push32(0x127f6fc5u); f_127f7050();
  /* 127f6fc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6fc8 jmp 0x127f7049 */
  goto L_127f7049;
L_127f6fca:;
  /* 127f6fca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6fcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6fd0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6fd2 jae 0x127f7040 */
  if (!C.cf) goto L_127f7040;
  /* 127f6fd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6fd7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6fda mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 127f6fdd jmp 0x127f6fe8 */
  goto L_127f6fe8;
L_127f6fdf:;
  /* 127f6fdf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6fe2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6fe5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_127f6fe8:;
  /* 127f6fe8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6feb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6fee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f6ff0 je 0x127f7024 */
  if (C.zf) goto L_127f7024;
  /* 127f6ff2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6ff5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f6ff6 mov ecx, 0xa */
  ECX = (0xau);
  /* 127f6ffb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f6ffd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7000 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f7005 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f7008 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 127f700b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f700e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f700f mov ecx, 0xa */
  ECX = (0xau);
  /* 127f7014 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f7016 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f7019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f701c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f701f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f7022 jmp 0x127f6fdf */
  goto L_127f6fdf;
L_127f7024:;
  /* 127f7024 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7027 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f7029 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f702c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f702f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127f7031 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7034 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f7036 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7039 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f703c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127f703e jmp 0x127f7049 */
  goto L_127f7049;
L_127f7040:;
  /* 127f7040 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7043 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_127f7049:;
  /* 127f7049 mov esp, ebp */
  ESP = (EBP);
  /* 127f704b pop ebp */
  EBP = (pop32());
  /* 127f704c ret  */
  ESPCHK(0x127f6fa0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x127f7050 (172 bytes, 65 insns) */
void f_127f7050(void) {
  FTRACE(0x127f7050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7050 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7051 mov ebp, esp */
  EBP = (ESP);
  /* 127f7053 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7056 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f7059 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f705b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f705e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7061 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7064 jbe 0x127f70ab */
  if ((C.cf||C.zf)) goto L_127f70ab;
L_127f7066:;
  /* 127f7066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7069 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f706a mov ecx, 0xa */
  ECX = (0xau);
  /* 127f706f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f7071 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7074 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7077 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127f7079 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f707c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f707f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f7082 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7085 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f7087 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f708a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f708d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127f708f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7092 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f7093 mov ecx, 0xa */
  ECX = (0xau);
  /* 127f7098 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f709a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f709d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f70a1 jle 0x127f70ab */
  if ((C.zf||C.sf!=C.of)) goto L_127f70ab;
  /* 127f70a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f70a6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f70a9 ja 0x127f7066 */
  if ((!C.cf&&!C.zf)) goto L_127f7066;
L_127f70ab:;
  /* 127f70ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f70ae mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f70b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f70b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f70b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f70b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127f70bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f70be sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f70c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127f70c4:;
  /* 127f70c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f70c7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f70c9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 127f70cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f70cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f70d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f70d4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127f70d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f70d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f70dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f70df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f70e2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 127f70e5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 127f70e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f70ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f70ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f70f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f70f3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f70f6 jb 0x127f70c4 */
  if (C.cf) goto L_127f70c4;
  /* 127f70f8 mov esp, ebp */
  ESP = (EBP);
  /* 127f70fa pop ebp */
  EBP = (pop32());
  /* 127f70fb ret  */
  ESPCHK(0x127f7050u, _esp0);
  ESP += 4; return;
}

/* FUN_10017100 @ 0x127f7100 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_127f7100(void) {
  FTRACE(0x127f7100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7100 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7101 mov ebp, esp */
  EBP = (ESP);
  /* 127f7103 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_127f7106:;
  /* 127f7106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7109 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f710c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f710e je 0x127f757c */
  if (C.zf) goto L_127f757c;
  /* 127f7114 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7117 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f711a je 0x127f757c */
  if (C.zf) goto L_127f757c;
  /* 127f7120 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f7124 mov dword ptr [0x12815b78], 0 */
  w32((uint32_t)(0x12815b78), (0x0u));
  /* 127f712e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127f7135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7138 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f713b jmp 0x127f7146 */
  goto L_127f7146;
L_127f713d:;
  /* 127f713d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f7140 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7143 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_127f7146:;
  /* 127f7146 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7149 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f714c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f714f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f7152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7155 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7158 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f715b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f715d jne 0x127f7161 */
  if (!C.zf) goto L_127f7161;
  /* 127f715f jmp 0x127f713d */
  goto L_127f713d;
L_127f7161:;
  /* 127f7161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7164 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7167 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f716a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f716d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f7170 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127f7173 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f7176 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7179 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127f717c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7180 ja 0x127f74d0 */
  if ((!C.cf&&!C.zf)) goto L_127f74d0;
  /* 127f7186 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f7189 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f718b mov al, byte ptr [ecx + 0x127f75ac] */
  AL = (r8((uint32_t)(ECX + 0x127f75ac)));
  /* 127f7191 jmp dword ptr [eax*4 + 0x127f7580] */
  switch (EAX) {
    case 0: goto L_127f73ef;
    case 1: goto L_127f72d3;
    case 2: goto L_127f725e;
    case 3: goto L_127f7198;
    case 4: goto L_127f71d6;
    case 5: goto L_127f7237;
    case 6: goto L_127f7285;
    case 7: goto L_127f72ac;
    case 8: goto L_127f731a;
    case 9: goto L_127f7214;
    case 10: goto L_127f74d0;
    default: x86_unimpl("switch@0x127f7191 out of table"); return;
  }
L_127f7198:;
  /* 127f7198 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f719b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127f719e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f71a1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f71a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127f71a7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f71ab ja 0x127f71d1 */
  if ((!C.cf&&!C.zf)) goto L_127f71d1;
  /* 127f71ad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f71b0 jmp dword ptr [ecx*4 + 0x127f75ff] */
  switch (ECX) {
    case 0: goto L_127f71b7;
    case 1: goto L_127f71c1;
    case 2: goto L_127f71c7;
    case 3: goto L_127f71cd;
    case 4: goto L_127f71f5;
    case 5: goto L_127f71ff;
    case 6: goto L_127f7205;
    case 7: goto L_127f720b;
    default: x86_unimpl("switch@0x127f71b0 out of table"); return;
  }
L_127f71b7:;
  /* 127f71b7 mov dword ptr [0x12815b78], 1 */
  w32((uint32_t)(0x12815b78), (0x1u));
L_127f71c1:;
  /* 127f71c1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 127f71c5 jmp 0x127f71d1 */
  goto L_127f71d1;
L_127f71c7:;
  /* 127f71c7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 127f71cb jmp 0x127f71d1 */
  goto L_127f71d1;
L_127f71cd:;
  /* 127f71cd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_127f71d1:;
  /* 127f71d1 jmp 0x127f74d0 */
  goto L_127f74d0;
L_127f71d6:;
  /* 127f71d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f71d9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127f71dc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f71df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f71e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127f71e5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f71e9 ja 0x127f720f */
  if ((!C.cf&&!C.zf)) goto L_127f720f;
  /* 127f71eb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f71ee jmp dword ptr [ecx*4 + 0x127f760f] */
  switch (ECX) {
    case 0: goto L_127f71f5;
    case 1: goto L_127f71ff;
    case 2: goto L_127f7205;
    case 3: goto L_127f720b;
    default: x86_unimpl("switch@0x127f71ee out of table"); return;
  }
L_127f71f5:;
  /* 127f71f5 mov dword ptr [0x12815b78], 1 */
  w32((uint32_t)(0x12815b78), (0x1u));
L_127f71ff:;
  /* 127f71ff mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 127f7203 jmp 0x127f720f */
  goto L_127f720f;
L_127f7205:;
  /* 127f7205 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 127f7209 jmp 0x127f720f */
  goto L_127f720f;
L_127f720b:;
  /* 127f720b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_127f720f:;
  /* 127f720f jmp 0x127f74d0 */
  goto L_127f74d0;
L_127f7214:;
  /* 127f7214 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f7217 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127f721a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f721e je 0x127f7228 */
  if (C.zf) goto L_127f7228;
  /* 127f7220 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7224 je 0x127f722e */
  if (C.zf) goto L_127f722e;
  /* 127f7226 jmp 0x127f7232 */
  goto L_127f7232;
L_127f7228:;
  /* 127f7228 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 127f722c jmp 0x127f7232 */
  goto L_127f7232;
L_127f722e:;
  /* 127f722e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_127f7232:;
  /* 127f7232 jmp 0x127f74d0 */
  goto L_127f74d0;
L_127f7237:;
  /* 127f7237 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f723a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127f723d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7241 je 0x127f724b */
  if (C.zf) goto L_127f724b;
  /* 127f7243 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7247 je 0x127f7255 */
  if (C.zf) goto L_127f7255;
  /* 127f7249 jmp 0x127f7259 */
  goto L_127f7259;
L_127f724b:;
  /* 127f724b mov dword ptr [0x12815b78], 1 */
  w32((uint32_t)(0x12815b78), (0x1u));
L_127f7255:;
  /* 127f7255 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_127f7259:;
  /* 127f7259 jmp 0x127f74d0 */
  goto L_127f74d0;
L_127f725e:;
  /* 127f725e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f7261 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 127f7264 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7268 je 0x127f7272 */
  if (C.zf) goto L_127f7272;
  /* 127f726a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f726e je 0x127f727c */
  if (C.zf) goto L_127f727c;
  /* 127f7270 jmp 0x127f7280 */
  goto L_127f7280;
L_127f7272:;
  /* 127f7272 mov dword ptr [0x12815b78], 1 */
  w32((uint32_t)(0x12815b78), (0x1u));
L_127f727c:;
  /* 127f727c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_127f7280:;
  /* 127f7280 jmp 0x127f74d0 */
  goto L_127f74d0;
L_127f7285:;
  /* 127f7285 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f7288 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 127f728b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f728f je 0x127f7299 */
  if (C.zf) goto L_127f7299;
  /* 127f7291 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7295 je 0x127f72a3 */
  if (C.zf) goto L_127f72a3;
  /* 127f7297 jmp 0x127f72a7 */
  goto L_127f72a7;
L_127f7299:;
  /* 127f7299 mov dword ptr [0x12815b78], 1 */
  w32((uint32_t)(0x12815b78), (0x1u));
L_127f72a3:;
  /* 127f72a3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_127f72a7:;
  /* 127f72a7 jmp 0x127f74d0 */
  goto L_127f74d0;
L_127f72ac:;
  /* 127f72ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f72af mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 127f72b2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f72b6 je 0x127f72c0 */
  if (C.zf) goto L_127f72c0;
  /* 127f72b8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f72bc je 0x127f72ca */
  if (C.zf) goto L_127f72ca;
  /* 127f72be jmp 0x127f72ce */
  goto L_127f72ce;
L_127f72c0:;
  /* 127f72c0 mov dword ptr [0x12815b78], 1 */
  w32((uint32_t)(0x12815b78), (0x1u));
L_127f72ca:;
  /* 127f72ca mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_127f72ce:;
  /* 127f72ce jmp 0x127f74d0 */
  goto L_127f74d0;
L_127f72d3:;
  /* 127f72d3 push 0x12811ae4 */
  push32((uint32_t)(0x12811ae4u));
  /* 127f72d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f72db push ecx */
  push32((uint32_t)(ECX));
  /* 127f72dc call 0x127f7b30 */
  push32(0x127f72e1u); f_127f7b30();
  /* 127f72e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f72e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f72e6 jne 0x127f72f3 */
  if (!C.zf) goto L_127f72f3;
  /* 127f72e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f72eb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f72ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f72f1 jmp 0x127f7311 */
  goto L_127f7311;
L_127f72f3:;
  /* 127f72f3 push 0x12811ae0 */
  push32((uint32_t)(0x12811ae0u));
  /* 127f72f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f72fb push eax */
  push32((uint32_t)(EAX));
  /* 127f72fc call 0x127f7b30 */
  push32(0x127f7301u); f_127f7b30();
  /* 127f7301 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f7306 jne 0x127f7311 */
  if (!C.zf) goto L_127f7311;
  /* 127f7308 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f730b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f730e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127f7311:;
  /* 127f7311 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 127f7315 jmp 0x127f74d0 */
  goto L_127f74d0;
L_127f731a:;
  /* 127f731a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f731d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7321 jg 0x127f7331 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f7331;
  /* 127f7323 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f7326 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 127f732c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127f732f jmp 0x127f733d */
  goto L_127f733d;
L_127f7331:;
  /* 127f7331 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f7334 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 127f733a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_127f733d:;
  /* 127f733d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7341 jle 0x127f73e4 */
  if ((C.zf||C.sf!=C.of)) goto L_127f73e4;
  /* 127f7347 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f734a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f734d jbe 0x127f73e4 */
  if ((C.cf||C.zf)) goto L_127f73e4;
  /* 127f7353 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f7356 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7358 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f735a mov ecx, dword ptr [0x12813c98] */
  ECX = (r32((uint32_t)(0x12813c98)));
  /* 127f7360 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f7362 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127f7366 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 127f736c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f736e je 0x127f73a7 */
  if (C.zf) goto L_127f73a7;
  /* 127f7370 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7373 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7376 jbe 0x127f73a7 */
  if ((C.cf||C.zf)) goto L_127f73a7;
  /* 127f7378 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f737b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f737d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f7380 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f7382 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127f7384 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7387 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f7389 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f738c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f738f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127f7391 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f7394 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7397 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127f739a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f739d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f739f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f73a2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f73a5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127f73a7:;
  /* 127f73a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f73aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f73ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f73af mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f73b1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127f73b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f73b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f73b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f73bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f73be mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f73c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f73c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f73c6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127f73c9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f73cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f73ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f73d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f73d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127f73d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f73d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f73dc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127f73df jmp 0x127f733d */
  goto L_127f733d;
L_127f73e4:;
  /* 127f73e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f73e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f73ea jmp 0x127f7106 */
  goto L_127f7106;
L_127f73ef:;
  /* 127f73ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f73f2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127f73f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f73f7 je 0x127f74c2 */
  if (C.zf) goto L_127f74c2;
  /* 127f73fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7400 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7403 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_127f7406:;
  /* 127f7406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7409 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f740c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f740e je 0x127f74c0 */
  if (C.zf) goto L_127f74c0;
  /* 127f7414 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7417 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f741a je 0x127f74c0 */
  if (C.zf) goto L_127f74c0;
  /* 127f7420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7423 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f7426 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7429 jne 0x127f7439 */
  if (!C.zf) goto L_127f7439;
  /* 127f742b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f742e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7431 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127f7434 jmp 0x127f74c0 */
  goto L_127f74c0;
L_127f7439:;
  /* 127f7439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f743c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f743e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f7440 mov edx, dword ptr [0x12813c98] */
  EDX = (r32((uint32_t)(0x12813c98)));
  /* 127f7446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7448 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 127f744c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 127f7451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f7453 je 0x127f748c */
  if (C.zf) goto L_127f748c;
  /* 127f7455 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7458 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f745b jbe 0x127f748c */
  if ((C.cf||C.zf)) goto L_127f748c;
  /* 127f745d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7460 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f7462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7465 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f7467 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127f7469 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f746c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f746e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7471 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7474 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127f7476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7479 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f747c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f747f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7482 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f7484 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7487 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f748a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127f748c:;
  /* 127f748c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f748f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f7491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7494 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f7496 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127f7498 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f749b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f749d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f74a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f74a3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127f74a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f74a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f74ab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127f74ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f74b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f74b3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f74b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f74b9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127f74bb jmp 0x127f7406 */
  goto L_127f7406;
L_127f74c0:;
  /* 127f74c0 jmp 0x127f74cb */
  goto L_127f74cb;
L_127f74c2:;
  /* 127f74c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f74c5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f74c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127f74cb:;
  /* 127f74cb jmp 0x127f7106 */
  goto L_127f7106;
L_127f74d0:;
  /* 127f74d0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f74d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f74d6 je 0x127f74fc */
  if (C.zf) goto L_127f74fc;
  /* 127f74d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f74db push edx */
  push32((uint32_t)(EDX));
  /* 127f74dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f74df push eax */
  push32((uint32_t)(EAX));
  /* 127f74e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f74e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f74e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f74e7 push edx */
  push32((uint32_t)(EDX));
  /* 127f74e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 127f74eb push eax */
  push32((uint32_t)(EAX));
  /* 127f74ec call 0x127f6930 */
  push32(0x127f74f1u); f_127f6930();
  /* 127f74f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f74f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f74f7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127f74fa jmp 0x127f7577 */
  goto L_127f7577;
L_127f74fc:;
  /* 127f74fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f74ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7501 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f7503 mov ecx, dword ptr [0x12813c98] */
  ECX = (r32((uint32_t)(0x12813c98)));
  /* 127f7509 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f750b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127f750f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 127f7515 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f7517 je 0x127f7548 */
  if (C.zf) goto L_127f7548;
  /* 127f7519 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f751c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f751e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7521 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f7523 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127f7525 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7528 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f752a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f752d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7530 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f7532 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7535 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7538 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127f753b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f753e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f7540 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7543 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7546 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_127f7548:;
  /* 127f7548 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f754b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f754d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7550 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f7552 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127f7554 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7557 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f7559 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f755c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f755f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127f7561 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7564 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7567 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f756a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f756d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f756f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7572 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7575 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127f7577:;
  /* 127f7577 jmp 0x127f7106 */
  goto L_127f7106;
L_127f757c:;
  /* 127f757c mov esp, ebp */
  ESP = (EBP);
  /* 127f757e pop ebp */
  EBP = (pop32());
  /* 127f757f ret  */
  ESPCHK(0x127f7100u, _esp0);
  ESP += 4; return;
}

/* FUN_10017620 @ 0x127f7620 (650 bytes, 178 insns) */
void f_127f7620(void) {
  FTRACE(0x127f7620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7620 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7621 mov ebp, esp */
  EBP = (ESP);
  /* 127f7623 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7629 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f762d jne 0x127f7789 */
  if (!C.zf) goto L_127f7789;
  /* 127f7633 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7636 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 127f763c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 127f7642 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f7645 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f764c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 127f7656 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7658 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 127f765e push edx */
  push32((uint32_t)(EDX));
  /* 127f765f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f7662 push eax */
  push32((uint32_t)(EAX));
  /* 127f7663 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7666 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7667 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f766a push edx */
  push32((uint32_t)(EDX));
  /* 127f766b call 0x127f8a40 */
  push32(0x127f7670u); f_127f8a40();
  /* 127f7670 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7673 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f7676 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f767a jne 0x127f770f */
  if (!C.zf) goto L_127f770f;
  /* 127f7680 call dword ptr [0x12818378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818378))), 0x127f7686u);
  /* 127f7686 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7689 je 0x127f7690 */
  if (C.zf) goto L_127f7690;
  /* 127f768b jmp 0x127f776d */
  goto L_127f776d;
L_127f7690:;
  /* 127f7690 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7692 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7694 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7696 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7699 push eax */
  push32((uint32_t)(EAX));
  /* 127f769a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f769d push ecx */
  push32((uint32_t)(ECX));
  /* 127f769e call 0x127f8a40 */
  push32(0x127f76a3u); f_127f8a40();
  /* 127f76a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f76a6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 127f76ac cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f76b3 jne 0x127f76ba */
  if (!C.zf) goto L_127f76ba;
  /* 127f76b5 jmp 0x127f776d */
  goto L_127f776d;
L_127f76ba:;
  /* 127f76ba push 0x58 */
  push32((uint32_t)(0x58u));
  /* 127f76bc push 0x12811aec */
  push32((uint32_t)(0x12811aecu));
  /* 127f76c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f76c3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 127f76c9 push edx */
  push32((uint32_t)(EDX));
  /* 127f76ca call 0x127e9460 */
  push32(0x127f76cfu); f_127e9460();
  /* 127f76cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f76d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f76d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f76d9 jne 0x127f76e0 */
  if (!C.zf) goto L_127f76e0;
  /* 127f76db jmp 0x127f776d */
  goto L_127f776d;
L_127f76e0:;
  /* 127f76e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127f76e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f76e9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 127f76ef push eax */
  push32((uint32_t)(EAX));
  /* 127f76f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f76f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f76f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f76f7 push edx */
  push32((uint32_t)(EDX));
  /* 127f76f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f76fb push eax */
  push32((uint32_t)(EAX));
  /* 127f76fc call 0x127f8a40 */
  push32(0x127f7701u); f_127f8a40();
  /* 127f7701 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7704 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f7707 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f770b jne 0x127f770f */
  if (!C.zf) goto L_127f770f;
  /* 127f770d jmp 0x127f776d */
  goto L_127f776d;
L_127f770f:;
  /* 127f770f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 127f7711 push 0x12811aec */
  push32((uint32_t)(0x12811aecu));
  /* 127f7716 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f7718 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f771b push ecx */
  push32((uint32_t)(ECX));
  /* 127f771c call 0x127e9460 */
  push32(0x127f7721u); f_127e9460();
  /* 127f7721 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7724 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 127f772a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127f772c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 127f7732 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7735 jne 0x127f7739 */
  if (!C.zf) goto L_127f7739;
  /* 127f7737 jmp 0x127f776d */
  goto L_127f776d;
L_127f7739:;
  /* 127f7739 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f773c push ecx */
  push32((uint32_t)(ECX));
  /* 127f773d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f7740 push edx */
  push32((uint32_t)(EDX));
  /* 127f7741 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 127f7747 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f7749 push ecx */
  push32((uint32_t)(ECX));
  /* 127f774a call 0x127ecc80 */
  push32(0x127f774fu); f_127ecc80();
  /* 127f774f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7752 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7756 je 0x127f7766 */
  if (C.zf) goto L_127f7766;
  /* 127f7758 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f775a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f775d push edx */
  push32((uint32_t)(EDX));
  /* 127f775e call 0x127e9ef0 */
  push32(0x127f7763u); f_127e9ef0();
  /* 127f7763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f7766:;
  /* 127f7766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7768 jmp 0x127f78a6 */
  goto L_127f78a6;
L_127f776d:;
  /* 127f776d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7771 je 0x127f7781 */
  if (C.zf) goto L_127f7781;
  /* 127f7773 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f7775 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f7778 push eax */
  push32((uint32_t)(EAX));
  /* 127f7779 call 0x127e9ef0 */
  push32(0x127f777eu); f_127e9ef0();
  /* 127f777e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f7781:;
  /* 127f7781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f7784 jmp 0x127f78a6 */
  goto L_127f78a6;
L_127f7789:;
  /* 127f7789 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f778d jne 0x127f78a3 */
  if (!C.zf) goto L_127f78a3;
  /* 127f7793 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 127f779d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f77a0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 127f77a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f77a8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 127f77ae push edx */
  push32((uint32_t)(EDX));
  /* 127f77af push 0x12815a90 */
  push32((uint32_t)(0x12815a90u));
  /* 127f77b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f77b7 push eax */
  push32((uint32_t)(EAX));
  /* 127f77b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f77bb push ecx */
  push32((uint32_t)(ECX));
  /* 127f77bc call 0x127f88a0 */
  push32(0x127f77c1u); f_127f88a0();
  /* 127f77c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f77c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f77c6 jne 0x127f77d0 */
  if (!C.zf) goto L_127f77d0;
  /* 127f77c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f77cb jmp 0x127f78a6 */
  goto L_127f78a6;
L_127f77d0:;
  /* 127f77d0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127f77d6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 127f77d9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 127f77e3 jmp 0x127f77f4 */
  goto L_127f77f4;
L_127f77e5:;
  /* 127f77e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f77eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f77ee mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_127f77f4:;
  /* 127f77f4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f77fb jge 0x127f789f */
  if ((C.sf==C.of)) goto L_127f789f;
  /* 127f7801 cmp dword ptr [0x12813ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12813ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7808 jle 0x127f783b */
  if ((C.zf||C.sf!=C.of)) goto L_127f783b;
  /* 127f780a push 4 */
  push32((uint32_t)(0x4u));
  /* 127f780c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f7812 mov dl, byte ptr [ecx*2 + 0x12815a90] */
  DL = (r8((uint32_t)(ECX*2 + 0x12815a90)));
  /* 127f7819 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 127f781f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 127f7825 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f782a push eax */
  push32((uint32_t)(EAX));
  /* 127f782b call 0x127ef470 */
  push32(0x127f7830u); f_127ef470();
  /* 127f7830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7833 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 127f7839 jmp 0x127f786e */
  goto L_127f786e;
L_127f783b:;
  /* 127f783b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f7841 mov dl, byte ptr [ecx*2 + 0x12815a90] */
  DL = (r8((uint32_t)(ECX*2 + 0x12815a90)));
  /* 127f7848 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 127f784e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 127f7854 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f7859 mov ecx, dword ptr [0x12813c98] */
  ECX = (r32((uint32_t)(0x12813c98)));
  /* 127f785f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f7861 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127f7865 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127f7868 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_127f786e:;
  /* 127f786e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7875 je 0x127f7898 */
  if (C.zf) goto L_127f7898;
  /* 127f7877 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127f787d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f7880 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f7883 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 127f788a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 127f788e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127f7894 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127f7896 jmp 0x127f789a */
  goto L_127f789a;
L_127f7898:;
  /* 127f7898 jmp 0x127f789f */
  goto L_127f789f;
L_127f789a:;
  /* 127f789a jmp 0x127f77e5 */
  goto L_127f77e5;
L_127f789f:;
  /* 127f789f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f78a1 jmp 0x127f78a6 */
  goto L_127f78a6;
L_127f78a3:;
  /* 127f78a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127f78a6:;
  /* 127f78a6 mov esp, ebp */
  ESP = (EBP);
  /* 127f78a8 pop ebp */
  EBP = (pop32());
  /* 127f78a9 ret  */
  ESPCHK(0x127f7620u, _esp0);
  ESP += 4; return;
}

/* FUN_100178b0 @ 0x127f78b0 (10 bytes, 5 insns) */
void f_127f78b0(void) {
  FTRACE(0x127f78b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f78b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f78b1 mov ebp, esp */
  EBP = (ESP);
  /* 127f78b3 mov eax, dword ptr [0x12814d88] */
  EAX = (r32((uint32_t)(0x12814d88)));
  /* 127f78b8 pop ebp */
  EBP = (pop32());
  /* 127f78b9 ret  */
  ESPCHK(0x127f78b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100178c0 @ 0x127f78c0 (575 bytes, 196 insns) */
void f_127f78c0(void) {
  FTRACE(0x127f78c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f78c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f78c1 mov ebp, esp */
  EBP = (ESP);
  /* 127f78c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f78c5 push 0x12811af8 */
  push32((uint32_t)(0x12811af8u));
  /* 127f78ca push 0x127f2568 */
  push32((uint32_t)(0x127f2568u));
  /* 127f78cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127f78d5 push eax */
  push32((uint32_t)(EAX));
  /* 127f78d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127f78dd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f78e0 push ebx */
  push32((uint32_t)(EBX));
  /* 127f78e1 push esi */
  push32((uint32_t)(ESI));
  /* 127f78e2 push edi */
  push32((uint32_t)(EDI));
  /* 127f78e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f78e6 cmp dword ptr [0x12815a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f78ed jne 0x127f793e */
  if (!C.zf) goto L_127f793e;
  /* 127f78ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 127f78f2 push eax */
  push32((uint32_t)(EAX));
  /* 127f78f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f78f5 push 0x12811228 */
  push32((uint32_t)(0x12811228u));
  /* 127f78fa push 1 */
  push32((uint32_t)(0x1u));
  /* 127f78fc call dword ptr [0x128182e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182e8))), 0x127f7902u);
  /* 127f7902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f7904 je 0x127f7912 */
  if (C.zf) goto L_127f7912;
  /* 127f7906 mov dword ptr [0x12815a9c], 1 */
  w32((uint32_t)(0x12815a9c), (0x1u));
  /* 127f7910 jmp 0x127f793e */
  goto L_127f793e;
L_127f7912:;
  /* 127f7912 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 127f7915 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7916 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f7918 push 0x12811224 */
  push32((uint32_t)(0x12811224u));
  /* 127f791d push 1 */
  push32((uint32_t)(0x1u));
  /* 127f791f push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7921 call dword ptr [0x128182ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182ec))), 0x127f7927u);
  /* 127f7927 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f7929 je 0x127f7937 */
  if (C.zf) goto L_127f7937;
  /* 127f792b mov dword ptr [0x12815a9c], 2 */
  w32((uint32_t)(0x12815a9c), (0x2u));
  /* 127f7935 jmp 0x127f793e */
  goto L_127f793e;
L_127f7937:;
  /* 127f7937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7939 jmp 0x127f7b19 */
  goto L_127f7b19;
L_127f793e:;
  /* 127f793e cmp dword ptr [0x12815a9c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12815a9c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7945 jne 0x127f7962 */
  if (!C.zf) goto L_127f7962;
  /* 127f7947 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f794a push edx */
  push32((uint32_t)(EDX));
  /* 127f794b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f794e push eax */
  push32((uint32_t)(EAX));
  /* 127f794f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f7952 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7953 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7956 push edx */
  push32((uint32_t)(EDX));
  /* 127f7957 call dword ptr [0x128182e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182e8))), 0x127f795du);
  /* 127f795d jmp 0x127f7b19 */
  goto L_127f7b19;
L_127f7962:;
  /* 127f7962 cmp dword ptr [0x12815a9c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12815a9c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7969 jne 0x127f7b17 */
  if (!C.zf) goto L_127f7b17;
  /* 127f796f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7973 jne 0x127f797d */
  if (!C.zf) goto L_127f797d;
  /* 127f7975 mov eax, dword ptr [0x12815a10] */
  EAX = (r32((uint32_t)(0x12815a10)));
  /* 127f797a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_127f797d:;
  /* 127f797d push 0 */
  push32((uint32_t)(0x0u));
  /* 127f797f push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7981 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7983 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7985 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7988 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7989 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f798c push edx */
  push32((uint32_t)(EDX));
  /* 127f798d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127f7992 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f7995 push eax */
  push32((uint32_t)(EAX));
  /* 127f7996 call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f799cu);
  /* 127f799c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127f799f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f79a3 jne 0x127f79ac */
  if (!C.zf) goto L_127f79ac;
  /* 127f79a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f79a7 jmp 0x127f7b19 */
  goto L_127f7b19;
L_127f79ac:;
  /* 127f79ac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f79b3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f79b6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f79b9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127f79bb call 0x127ec600 */
  push32(0x127f79c0u); f_127ec600();
  /* 127f79c0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 127f79c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f79c6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127f79c9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127f79cc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f79cf push edx */
  push32((uint32_t)(EDX));
  /* 127f79d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f79d2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f79d5 push eax */
  push32((uint32_t)(EAX));
  /* 127f79d6 call 0x127ed1d0 */
  push32(0x127f79dbu); f_127ed1d0();
  /* 127f79db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f79de mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f79e5 jmp 0x127f79fe */
  goto L_127f79fe;
  /* 127f79e7 mov eax, 1 */
  EAX = (0x1u);
  /* 127f79ec ret  */
  ESPCHK(0x127f78c0u, _esp0);
  ESP += 4; return;
  /* 127f79ed mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127f79f0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 127f79f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f79fe:;
  /* 127f79fe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7a02 jne 0x127f7a0b */
  if (!C.zf) goto L_127f7a0b;
  /* 127f7a04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7a06 jmp 0x127f7b19 */
  goto L_127f7b19;
L_127f7a0b:;
  /* 127f7a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7a0f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f7a12 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7a13 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f7a16 push edx */
  push32((uint32_t)(EDX));
  /* 127f7a17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7a1a push eax */
  push32((uint32_t)(EAX));
  /* 127f7a1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f7a1e push ecx */
  push32((uint32_t)(ECX));
  /* 127f7a1f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127f7a24 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f7a27 push edx */
  push32((uint32_t)(EDX));
  /* 127f7a28 call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f7a2eu);
  /* 127f7a2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f7a30 jne 0x127f7a39 */
  if (!C.zf) goto L_127f7a39;
  /* 127f7a32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7a34 jmp 0x127f7b19 */
  goto L_127f7b19;
L_127f7a39:;
  /* 127f7a39 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127f7a40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f7a43 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 127f7a47 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7a4a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127f7a4c call 0x127ec600 */
  push32(0x127f7a51u); f_127ec600();
  /* 127f7a51 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 127f7a54 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f7a57 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127f7a5a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127f7a5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f7a64 jmp 0x127f7a7d */
  goto L_127f7a7d;
  /* 127f7a66 mov eax, 1 */
  EAX = (0x1u);
  /* 127f7a6b ret  */
  ESPCHK(0x127f78c0u, _esp0);
  ESP += 4; return;
  /* 127f7a6c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127f7a6f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127f7a76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f7a7d:;
  /* 127f7a7d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7a81 jne 0x127f7a8a */
  if (!C.zf) goto L_127f7a8a;
  /* 127f7a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7a85 jmp 0x127f7b19 */
  goto L_127f7b19;
L_127f7a8a:;
  /* 127f7a8a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7a8e jne 0x127f7a99 */
  if (!C.zf) goto L_127f7a99;
  /* 127f7a90 mov edx, dword ptr [0x12815a00] */
  EDX = (r32((uint32_t)(0x12815a00)));
  /* 127f7a96 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_127f7a99:;
  /* 127f7a99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7a9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f7a9f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 127f7aa5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7aa8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f7aab mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 127f7ab2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f7ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7ab6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f7ab9 push edx */
  push32((uint32_t)(EDX));
  /* 127f7aba mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f7abd push eax */
  push32((uint32_t)(EAX));
  /* 127f7abe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7ac2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f7ac5 push edx */
  push32((uint32_t)(EDX));
  /* 127f7ac6 call dword ptr [0x128182ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182ec))), 0x127f7accu);
  /* 127f7acc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127f7acf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7ad2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f7ad5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f7ad7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 127f7adc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7ae2 je 0x127f7af8 */
  if (C.zf) goto L_127f7af8;
  /* 127f7ae4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7ae7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f7aea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f7aec mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127f7af0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7af6 je 0x127f7afc */
  if (C.zf) goto L_127f7afc;
L_127f7af8:;
  /* 127f7af8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7afa jmp 0x127f7b19 */
  goto L_127f7b19;
L_127f7afc:;
  /* 127f7afc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7aff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127f7b01 push eax */
  push32((uint32_t)(EAX));
  /* 127f7b02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f7b05 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7b06 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f7b09 push edx */
  push32((uint32_t)(EDX));
  /* 127f7b0a call 0x127f1350 */
  push32(0x127f7b0fu); f_127f1350();
  /* 127f7b0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7b12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f7b15 jmp 0x127f7b19 */
  goto L_127f7b19;
L_127f7b17:;
  /* 127f7b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f7b19:;
  /* 127f7b19 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 127f7b1c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f7b1f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127f7b26 pop edi */
  EDI = (pop32());
  /* 127f7b27 pop esi */
  ESI = (pop32());
  /* 127f7b28 pop ebx */
  EBX = (pop32());
  /* 127f7b29 mov esp, ebp */
  ESP = (EBP);
  /* 127f7b2b pop ebp */
  EBP = (pop32());
  /* 127f7b2c ret  */
  ESPCHK(0x127f78c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017b30 @ 0x127f7b30 (208 bytes, 85 insns) */
void f_127f7b30(void) {
  FTRACE(0x127f7b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7b30 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7b31 mov ebp, esp */
  EBP = (ESP);
  /* 127f7b33 push edi */
  push32((uint32_t)(EDI));
  /* 127f7b34 push esi */
  push32((uint32_t)(ESI));
  /* 127f7b35 push ebx */
  push32((uint32_t)(EBX));
  /* 127f7b36 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127f7b39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7b3c lea eax, [0x128159f8] */
  EAX = ((uint32_t)(0x128159f8));
  /* 127f7b42 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7b46 jne 0x127f7b83 */
  if (!C.zf) goto L_127f7b83;
  /* 127f7b48 mov al, 0xff */
  AL = (0xffu);
  /* 127f7b4a mov edi, edi */
  EDI = (EDI);
L_127f7b4c:;
  /* 127f7b4c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f7b4e je 0x127f7b7e */
  if (C.zf) goto L_127f7b7e;
  /* 127f7b50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f7b52 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127f7b53 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 127f7b55 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127f7b56 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7b58 je 0x127f7b4c */
  if (C.zf) goto L_127f7b4c;
  /* 127f7b5a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127f7b5c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7b5e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127f7b60 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 127f7b63 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127f7b65 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127f7b67 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 127f7b69 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127f7b6b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7b6d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127f7b6f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 127f7b72 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127f7b74 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127f7b76 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7b78 je 0x127f7b4c */
  if (C.zf) goto L_127f7b4c;
  /* 127f7b7a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127f7b7c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_127f7b7e:;
  /* 127f7b7e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 127f7b81 jmp 0x127f7bfb */
  goto L_127f7bfb;
L_127f7b83:;
  /* 127f7b83 lock inc dword ptr [0x12815b8c] */
  x86_unimpl("lock inc @ 0x127f7b83");
  /* 127f7b8a cmp dword ptr [0x12815b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7b91 jg 0x127f7b97 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f7b97;
  /* 127f7b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7b95 jmp 0x127f7bac */
  goto L_127f7bac;
L_127f7b97:;
  /* 127f7b97 lock dec dword ptr [0x12815b8c] */
  x86_unimpl("lock dec @ 0x127f7b97");
  /* 127f7b9e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f7ba0 call 0x127ece60 */
  push32(0x127f7ba5u); f_127ece60();
  /* 127f7ba5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_127f7bac:;
  /* 127f7bac mov eax, 0xff */
  EAX = (0xffu);
  /* 127f7bb1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 127f7bb3 nop  */
  /* nop */
L_127f7bb4:;
  /* 127f7bb4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f7bb6 je 0x127f7bdf */
  if (C.zf) goto L_127f7bdf;
  /* 127f7bb8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f7bba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127f7bbb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 127f7bbd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127f7bbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7bc0 je 0x127f7bb4 */
  if (C.zf) goto L_127f7bb4;
  /* 127f7bc2 push eax */
  push32((uint32_t)(EAX));
  /* 127f7bc3 push ebx */
  push32((uint32_t)(EBX));
  /* 127f7bc4 call 0x127f8ca0 */
  push32(0x127f7bc9u); f_127f8ca0();
  /* 127f7bc9 mov ebx, eax */
  EBX = (EAX);
  /* 127f7bcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7bce call 0x127f8ca0 */
  push32(0x127f7bd3u); f_127f8ca0();
  /* 127f7bd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7bd6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7bd8 je 0x127f7bb4 */
  if (C.zf) goto L_127f7bb4;
  /* 127f7bda sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7bdc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_127f7bdf:;
  /* 127f7bdf mov ebx, eax */
  EBX = (EAX);
  /* 127f7be1 pop eax */
  EAX = (pop32());
  /* 127f7be2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7be4 jne 0x127f7bef */
  if (!C.zf) goto L_127f7bef;
  /* 127f7be6 lock dec dword ptr [0x12815b8c] */
  x86_unimpl("lock dec @ 0x127f7be6");
  /* 127f7bed jmp 0x127f7bf9 */
  goto L_127f7bf9;
L_127f7bef:;
  /* 127f7bef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f7bf1 call 0x127ecf00 */
  push32(0x127f7bf6u); f_127ecf00();
  /* 127f7bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f7bf9:;
  /* 127f7bf9 mov eax, ebx */
  EAX = (EBX);
L_127f7bfb:;
  /* 127f7bfb pop ebx */
  EBX = (pop32());
  /* 127f7bfc pop esi */
  ESI = (pop32());
  /* 127f7bfd pop edi */
  EDI = (pop32());
  /* 127f7bfe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f7bff ret  */
  ESPCHK(0x127f7b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c00 @ 0x127f7c00 (257 bytes, 103 insns) */
void f_127f7c00(void) {
  FTRACE(0x127f7c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7c00 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7c01 mov ebp, esp */
  EBP = (ESP);
  /* 127f7c03 push edi */
  push32((uint32_t)(EDI));
  /* 127f7c04 push esi */
  push32((uint32_t)(ESI));
  /* 127f7c05 push ebx */
  push32((uint32_t)(EBX));
  /* 127f7c06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f7c09 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f7c0b je 0x127f7cfa */
  if (C.zf) goto L_127f7cfa;
  /* 127f7c11 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7c14 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 127f7c17 lea eax, [0x128159f8] */
  EAX = ((uint32_t)(0x128159f8));
  /* 127f7c1d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7c21 jne 0x127f7c71 */
  if (!C.zf) goto L_127f7c71;
  /* 127f7c23 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 127f7c25 mov bl, 0x5a */
  BL = (0x5au);
  /* 127f7c27 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 127f7c29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127f7c2c:;
  /* 127f7c2c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 127f7c2e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127f7c30 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 127f7c32 je 0x127f7c55 */
  if (C.zf) goto L_127f7c55;
  /* 127f7c34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f7c36 je 0x127f7c55 */
  if (C.zf) goto L_127f7c55;
  /* 127f7c38 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127f7c39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127f7c3a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7c3c jb 0x127f7c44 */
  if (C.cf) goto L_127f7c44;
  /* 127f7c3e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7c40 ja 0x127f7c44 */
  if ((!C.cf&&!C.zf)) goto L_127f7c44;
  /* 127f7c42 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_127f7c44:;
  /* 127f7c44 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7c46 jb 0x127f7c4e */
  if (C.cf) goto L_127f7c4e;
  /* 127f7c48 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7c4a ja 0x127f7c4e */
  if ((!C.cf&&!C.zf)) goto L_127f7c4e;
  /* 127f7c4c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_127f7c4e:;
  /* 127f7c4e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7c50 jne 0x127f7c5f */
  if (!C.zf) goto L_127f7c5f;
  /* 127f7c52 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127f7c53 jne 0x127f7c2c */
  if (!C.zf) goto L_127f7c2c;
L_127f7c55:;
  /* 127f7c55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f7c57 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f7c59 je 0x127f7cfa */
  if (C.zf) goto L_127f7cfa;
L_127f7c5f:;
  /* 127f7c5f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 127f7c64 jb 0x127f7cfa */
  if (C.cf) goto L_127f7cfa;
  /* 127f7c6a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f7c6c jmp 0x127f7cfa */
  goto L_127f7cfa;
L_127f7c71:;
  /* 127f7c71 lock inc dword ptr [0x12815b8c] */
  x86_unimpl("lock inc @ 0x127f7c71");
  /* 127f7c78 cmp dword ptr [0x12815b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7c7f jg 0x127f7c85 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f7c85;
  /* 127f7c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7c83 jmp 0x127f7c9e */
  goto L_127f7c9e;
L_127f7c85:;
  /* 127f7c85 lock dec dword ptr [0x12815b8c] */
  x86_unimpl("lock dec @ 0x127f7c85");
  /* 127f7c8c mov ebx, ecx */
  EBX = (ECX);
  /* 127f7c8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f7c90 call 0x127ece60 */
  push32(0x127f7c95u); f_127ece60();
  /* 127f7c95 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 127f7c9c mov ecx, ebx */
  ECX = (EBX);
L_127f7c9e:;
  /* 127f7c9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7ca0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 127f7ca2 mov edi, edi */
  EDI = (EDI);
L_127f7ca4:;
  /* 127f7ca4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f7ca6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7ca8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 127f7caa je 0x127f7ccf */
  if (C.zf) goto L_127f7ccf;
  /* 127f7cac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 127f7cae je 0x127f7ccf */
  if (C.zf) goto L_127f7ccf;
  /* 127f7cb0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127f7cb1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127f7cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7cb3 push eax */
  push32((uint32_t)(EAX));
  /* 127f7cb4 push ebx */
  push32((uint32_t)(EBX));
  /* 127f7cb5 call 0x127f8ca0 */
  push32(0x127f7cbau); f_127f8ca0();
  /* 127f7cba mov ebx, eax */
  EBX = (EAX);
  /* 127f7cbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7cbf call 0x127f8ca0 */
  push32(0x127f7cc4u); f_127f8ca0();
  /* 127f7cc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7cc7 pop ecx */
  ECX = (pop32());
  /* 127f7cc8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7cca jne 0x127f7cd5 */
  if (!C.zf) goto L_127f7cd5;
  /* 127f7ccc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127f7ccd jne 0x127f7ca4 */
  if (!C.zf) goto L_127f7ca4;
L_127f7ccf:;
  /* 127f7ccf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f7cd1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7cd3 je 0x127f7cde */
  if (C.zf) goto L_127f7cde;
L_127f7cd5:;
  /* 127f7cd5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 127f7cda jb 0x127f7cde */
  if (C.cf) goto L_127f7cde;
  /* 127f7cdc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_127f7cde:;
  /* 127f7cde pop eax */
  EAX = (pop32());
  /* 127f7cdf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7ce1 jne 0x127f7cec */
  if (!C.zf) goto L_127f7cec;
  /* 127f7ce3 lock dec dword ptr [0x12815b8c] */
  x86_unimpl("lock dec @ 0x127f7ce3");
  /* 127f7cea jmp 0x127f7cfa */
  goto L_127f7cfa;
L_127f7cec:;
  /* 127f7cec mov ebx, ecx */
  EBX = (ECX);
  /* 127f7cee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f7cf0 call 0x127ecf00 */
  push32(0x127f7cf5u); f_127ecf00();
  /* 127f7cf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7cf8 mov ecx, ebx */
  ECX = (EBX);
L_127f7cfa:;
  /* 127f7cfa mov eax, ecx */
  EAX = (ECX);
  /* 127f7cfc pop ebx */
  EBX = (pop32());
  /* 127f7cfd pop esi */
  ESI = (pop32());
  /* 127f7cfe pop edi */
  EDI = (pop32());
  /* 127f7cff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f7d00 ret  */
  ESPCHK(0x127f7c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d10 @ 0x127f7d10 (255 bytes, 88 insns) */
void f_127f7d10(void) {
  FTRACE(0x127f7d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7d10 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7d11 mov ebp, esp */
  EBP = (ESP);
  /* 127f7d13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_127f7d16:;
  /* 127f7d16 cmp dword ptr [0x12813ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12813ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7d1d jle 0x127f7d36 */
  if ((C.zf||C.sf!=C.of)) goto L_127f7d36;
  /* 127f7d1f push 8 */
  push32((uint32_t)(0x8u));
  /* 127f7d21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7d24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f7d26 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f7d28 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7d29 call 0x127ef470 */
  push32(0x127f7d2eu); f_127ef470();
  /* 127f7d2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7d31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127f7d34 jmp 0x127f7d4f */
  goto L_127f7d4f;
L_127f7d36:;
  /* 127f7d36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7d3b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f7d3d mov ecx, dword ptr [0x12813c98] */
  ECX = (r32((uint32_t)(0x12813c98)));
  /* 127f7d43 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f7d45 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127f7d49 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 127f7d4c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127f7d4f:;
  /* 127f7d4f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7d53 je 0x127f7d60 */
  if (C.zf) goto L_127f7d60;
  /* 127f7d55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7d58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7d5b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f7d5e jmp 0x127f7d16 */
  goto L_127f7d16;
L_127f7d60:;
  /* 127f7d60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7d63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f7d65 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f7d67 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f7d6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7d6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7d70 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f7d73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7d76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f7d79 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7d7d je 0x127f7d85 */
  if (C.zf) goto L_127f7d85;
  /* 127f7d7f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7d83 jne 0x127f7d98 */
  if (!C.zf) goto L_127f7d98;
L_127f7d85:;
  /* 127f7d85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7d88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7d8a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f7d8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f7d8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7d92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7d95 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_127f7d98:;
  /* 127f7d98 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127f7d9f:;
  /* 127f7d9f cmp dword ptr [0x12813ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12813ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7da6 jle 0x127f7dbb */
  if ((C.zf||C.sf!=C.of)) goto L_127f7dbb;
  /* 127f7da8 push 4 */
  push32((uint32_t)(0x4u));
  /* 127f7daa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7dad push edx */
  push32((uint32_t)(EDX));
  /* 127f7dae call 0x127ef470 */
  push32(0x127f7db3u); f_127ef470();
  /* 127f7db3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7db6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127f7db9 jmp 0x127f7dd0 */
  goto L_127f7dd0;
L_127f7dbb:;
  /* 127f7dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7dbe mov ecx, dword ptr [0x12813c98] */
  ECX = (r32((uint32_t)(0x12813c98)));
  /* 127f7dc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f7dc6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127f7dca and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127f7dcd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_127f7dd0:;
  /* 127f7dd0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7dd4 je 0x127f7dfb */
  if (C.zf) goto L_127f7dfb;
  /* 127f7dd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f7dd9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f7ddc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7ddf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 127f7de3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f7de6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7de9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f7deb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f7ded mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f7df0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7df3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7df6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127f7df9 jmp 0x127f7d9f */
  goto L_127f7d9f;
L_127f7dfb:;
  /* 127f7dfb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7dff jne 0x127f7e08 */
  if (!C.zf) goto L_127f7e08;
  /* 127f7e01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f7e04 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f7e06 jmp 0x127f7e0b */
  goto L_127f7e0b;
L_127f7e08:;
  /* 127f7e08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127f7e0b:;
  /* 127f7e0b mov esp, ebp */
  ESP = (EBP);
  /* 127f7e0d pop ebp */
  EBP = (pop32());
  /* 127f7e0e ret  */
  ESPCHK(0x127f7d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e10 @ 0x127f7e10 (17 bytes, 8 insns) */
void f_127f7e10(void) {
  FTRACE(0x127f7e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7e10 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7e11 mov ebp, esp */
  EBP = (ESP);
  /* 127f7e13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7e16 push eax */
  push32((uint32_t)(EAX));
  /* 127f7e17 call 0x127f7d10 */
  push32(0x127f7e1cu); f_127f7d10();
  /* 127f7e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7e1f pop ebp */
  EBP = (pop32());
  /* 127f7e20 ret  */
  ESPCHK(0x127f7e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e30 @ 0x127f7e30 (297 bytes, 106 insns) */
void f_127f7e30(void) {
  FTRACE(0x127f7e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7e30 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7e31 mov ebp, esp */
  EBP = (ESP);
  /* 127f7e33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7e36 push esi */
  push32((uint32_t)(ESI));
L_127f7e37:;
  /* 127f7e37 cmp dword ptr [0x12813ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12813ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7e3e jle 0x127f7e57 */
  if ((C.zf||C.sf!=C.of)) goto L_127f7e57;
  /* 127f7e40 push 8 */
  push32((uint32_t)(0x8u));
  /* 127f7e42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7e45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f7e47 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f7e49 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7e4a call 0x127ef470 */
  push32(0x127f7e4fu); f_127ef470();
  /* 127f7e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7e52 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127f7e55 jmp 0x127f7e70 */
  goto L_127f7e70;
L_127f7e57:;
  /* 127f7e57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7e5c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f7e5e mov ecx, dword ptr [0x12813c98] */
  ECX = (r32((uint32_t)(0x12813c98)));
  /* 127f7e64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f7e66 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127f7e6a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 127f7e6d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_127f7e70:;
  /* 127f7e70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7e74 je 0x127f7e81 */
  if (C.zf) goto L_127f7e81;
  /* 127f7e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7e79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7e7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f7e7f jmp 0x127f7e37 */
  goto L_127f7e37;
L_127f7e81:;
  /* 127f7e81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7e84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f7e86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f7e88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f7e8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7e8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7e91 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f7e94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7e97 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127f7e9a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7e9e je 0x127f7ea6 */
  if (C.zf) goto L_127f7ea6;
  /* 127f7ea0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7ea4 jne 0x127f7eb9 */
  if (!C.zf) goto L_127f7eb9;
L_127f7ea6:;
  /* 127f7ea6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7ea9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7eab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f7ead mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f7eb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7eb3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7eb6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_127f7eb9:;
  /* 127f7eb9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127f7ec0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127f7ec7:;
  /* 127f7ec7 cmp dword ptr [0x12813ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12813ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7ece jle 0x127f7ee3 */
  if ((C.zf||C.sf!=C.of)) goto L_127f7ee3;
  /* 127f7ed0 push 4 */
  push32((uint32_t)(0x4u));
  /* 127f7ed2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7ed5 push edx */
  push32((uint32_t)(EDX));
  /* 127f7ed6 call 0x127ef470 */
  push32(0x127f7edbu); f_127ef470();
  /* 127f7edb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7ede mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127f7ee1 jmp 0x127f7ef8 */
  goto L_127f7ef8;
L_127f7ee3:;
  /* 127f7ee3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7ee6 mov ecx, dword ptr [0x12813c98] */
  ECX = (r32((uint32_t)(0x12813c98)));
  /* 127f7eec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f7eee mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127f7ef2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127f7ef5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_127f7ef8:;
  /* 127f7ef8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7efc je 0x127f7f39 */
  if (C.zf) goto L_127f7f39;
  /* 127f7efe push 0 */
  push32((uint32_t)(0x0u));
  /* 127f7f00 push 0xa */
  push32((uint32_t)(0xau));
  /* 127f7f02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f7f05 push eax */
  push32((uint32_t)(EAX));
  /* 127f7f06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f7f09 push ecx */
  push32((uint32_t)(ECX));
  /* 127f7f0a call 0x127f8dd0 */
  push32(0x127f7f0fu); f_127f8dd0();
  /* 127f7f0f mov ecx, eax */
  ECX = (EAX);
  /* 127f7f11 mov esi, edx */
  ESI = (EDX);
  /* 127f7f13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f7f16 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7f19 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f7f1a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7f1c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7f1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f7f21 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 127f7f24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7f27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f7f29 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f7f2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f7f2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f7f31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7f34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127f7f37 jmp 0x127f7ec7 */
  goto L_127f7ec7;
L_127f7f39:;
  /* 127f7f39 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7f3d jne 0x127f7f4e */
  if (!C.zf) goto L_127f7f4e;
  /* 127f7f3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f7f42 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f7f44 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f7f47 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7f4a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f7f4c jmp 0x127f7f54 */
  goto L_127f7f54;
L_127f7f4e:;
  /* 127f7f4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f7f51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_127f7f54:;
  /* 127f7f54 pop esi */
  ESI = (pop32());
  /* 127f7f55 mov esp, ebp */
  ESP = (EBP);
  /* 127f7f57 pop ebp */
  EBP = (pop32());
  /* 127f7f58 ret  */
  ESPCHK(0x127f7e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f60 @ 0x127f7f60 (61 bytes, 18 insns) */
void f_127f7f60(void) {
  FTRACE(0x127f7f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7f60 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7f61 mov ebp, esp */
  EBP = (ESP);
  /* 127f7f63 cmp dword ptr [0x12815b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7f6a jne 0x127f7f9b */
  if (!C.zf) goto L_127f7f9b;
  /* 127f7f6c push 0xb */
  push32((uint32_t)(0xbu));
  /* 127f7f6e call 0x127ece60 */
  push32(0x127f7f73u); f_127ece60();
  /* 127f7f73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7f76 cmp dword ptr [0x12815b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f7f7d jne 0x127f7f91 */
  if (!C.zf) goto L_127f7f91;
  /* 127f7f7f call 0x127f7fc0 */
  push32(0x127f7f84u); f_127f7fc0();
  /* 127f7f84 mov eax, dword ptr [0x12815b58] */
  EAX = (r32((uint32_t)(0x12815b58)));
  /* 127f7f89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7f8c mov dword ptr [0x12815b58], eax */
  w32((uint32_t)(0x12815b58), (EAX));
L_127f7f91:;
  /* 127f7f91 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127f7f93 call 0x127ecf00 */
  push32(0x127f7f98u); f_127ecf00();
  /* 127f7f98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f7f9b:;
  /* 127f7f9b pop ebp */
  EBP = (pop32());
  /* 127f7f9c ret  */
  ESPCHK(0x127f7f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fa0 @ 0x127f7fa0 (30 bytes, 11 insns) */
void f_127f7fa0(void) {
  FTRACE(0x127f7fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7fa1 mov ebp, esp */
  EBP = (ESP);
  /* 127f7fa3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127f7fa5 call 0x127ece60 */
  push32(0x127f7faau); f_127ece60();
  /* 127f7faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7fad call 0x127f7fc0 */
  push32(0x127f7fb2u); f_127f7fc0();
  /* 127f7fb2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127f7fb4 call 0x127ecf00 */
  push32(0x127f7fb9u); f_127ecf00();
  /* 127f7fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7fbc pop ebp */
  EBP = (pop32());
  /* 127f7fbd ret  */
  ESPCHK(0x127f7fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fc0 @ 0x127f7fc0 (939 bytes, 266 insns) */
void f_127f7fc0(void) {
  FTRACE(0x127f7fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f7fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f7fc1 mov ebp, esp */
  EBP = (ESP);
  /* 127f7fc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f7fc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f7fcd push 0xc */
  push32((uint32_t)(0xcu));
  /* 127f7fcf call 0x127ece60 */
  push32(0x127f7fd4u); f_127ece60();
  /* 127f7fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f7fd7 mov dword ptr [0x12815aa0], 0 */
  w32((uint32_t)(0x12815aa0), (0x0u));
  /* 127f7fe1 mov dword ptr [0x12814e38], 0xffffffff */
  w32((uint32_t)(0x12814e38), (0xffffffffu));
  /* 127f7feb mov eax, dword ptr [0x12814e38] */
  EAX = (r32((uint32_t)(0x12814e38)));
  /* 127f7ff0 mov dword ptr [0x12814e28], eax */
  w32((uint32_t)(0x12814e28), (EAX));
  /* 127f7ff5 push 0x12811b58 */
  push32((uint32_t)(0x12811b58u));
  /* 127f7ffa call 0x127f8e40 */
  push32(0x127f7fffu); f_127f8e40();
  /* 127f7fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8002 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f8005 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8009 jne 0x127f8143 */
  if (!C.zf) goto L_127f8143;
  /* 127f800f push 0xc */
  push32((uint32_t)(0xcu));
  /* 127f8011 call 0x127ecf00 */
  push32(0x127f8016u); f_127ecf00();
  /* 127f8016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8019 push 0x12815aa8 */
  push32((uint32_t)(0x12815aa8u));
  /* 127f801e call dword ptr [0x128182ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182ac))), 0x127f8024u);
  /* 127f8024 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8027 je 0x127f813e */
  if (C.zf) goto L_127f813e;
  /* 127f802d mov dword ptr [0x12815aa0], 1 */
  w32((uint32_t)(0x12815aa0), (0x1u));
  /* 127f8037 mov ecx, dword ptr [0x12815aa8] */
  ECX = (r32((uint32_t)(0x12815aa8)));
  /* 127f803d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f8040 mov dword ptr [0x12814d90], ecx */
  w32((uint32_t)(0x12814d90), (ECX));
  /* 127f8046 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f8048 mov dx, word ptr [0x12815aee] */
  DX = (r16((uint32_t)(0x12815aee)));
  /* 127f804f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f8051 je 0x127f8069 */
  if (C.zf) goto L_127f8069;
  /* 127f8053 mov eax, dword ptr [0x12815afc] */
  EAX = (r32((uint32_t)(0x12815afc)));
  /* 127f8058 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f805b mov ecx, dword ptr [0x12814d90] */
  ECX = (r32((uint32_t)(0x12814d90)));
  /* 127f8061 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8063 mov dword ptr [0x12814d90], ecx */
  w32((uint32_t)(0x12814d90), (ECX));
L_127f8069:;
  /* 127f8069 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f806b mov dx, word ptr [0x12815b42] */
  DX = (r16((uint32_t)(0x12815b42)));
  /* 127f8072 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f8074 je 0x127f809e */
  if (C.zf) goto L_127f809e;
  /* 127f8076 cmp dword ptr [0x12815b50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f807d je 0x127f809e */
  if (C.zf) goto L_127f809e;
  /* 127f807f mov dword ptr [0x12814d94], 1 */
  w32((uint32_t)(0x12814d94), (0x1u));
  /* 127f8089 mov eax, dword ptr [0x12815b50] */
  EAX = (r32((uint32_t)(0x12815b50)));
  /* 127f808e sub eax, dword ptr [0x12815afc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12815afc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f8094 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f8097 mov dword ptr [0x12814d98], eax */
  w32((uint32_t)(0x12814d98), (EAX));
  /* 127f809c jmp 0x127f80b2 */
  goto L_127f80b2;
L_127f809e:;
  /* 127f809e mov dword ptr [0x12814d94], 0 */
  w32((uint32_t)(0x12814d94), (0x0u));
  /* 127f80a8 mov dword ptr [0x12814d98], 0 */
  w32((uint32_t)(0x12814d98), (0x0u));
L_127f80b2:;
  /* 127f80b2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 127f80b5 push ecx */
  push32((uint32_t)(ECX));
  /* 127f80b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f80b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 127f80ba mov edx, dword ptr [0x12814e1c] */
  EDX = (r32((uint32_t)(0x12814e1c)));
  /* 127f80c0 push edx */
  push32((uint32_t)(EDX));
  /* 127f80c1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f80c3 push 0x12815aac */
  push32((uint32_t)(0x12815aacu));
  /* 127f80c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127f80cd mov eax, dword ptr [0x12815a10] */
  EAX = (r32((uint32_t)(0x12815a10)));
  /* 127f80d2 push eax */
  push32((uint32_t)(EAX));
  /* 127f80d3 call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f80d9u);
  /* 127f80d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f80db je 0x127f80ef */
  if (C.zf) goto L_127f80ef;
  /* 127f80dd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f80e1 jne 0x127f80ef */
  if (!C.zf) goto L_127f80ef;
  /* 127f80e3 mov ecx, dword ptr [0x12814e1c] */
  ECX = (r32((uint32_t)(0x12814e1c)));
  /* 127f80e9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 127f80ed jmp 0x127f80f8 */
  goto L_127f80f8;
L_127f80ef:;
  /* 127f80ef mov edx, dword ptr [0x12814e1c] */
  EDX = (r32((uint32_t)(0x12814e1c)));
  /* 127f80f5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_127f80f8:;
  /* 127f80f8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 127f80fb push eax */
  push32((uint32_t)(EAX));
  /* 127f80fc push 0 */
  push32((uint32_t)(0x0u));
  /* 127f80fe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 127f8100 mov ecx, dword ptr [0x12814e20] */
  ECX = (r32((uint32_t)(0x12814e20)));
  /* 127f8106 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8107 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f8109 push 0x12815b00 */
  push32((uint32_t)(0x12815b00u));
  /* 127f810e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127f8113 mov edx, dword ptr [0x12815a10] */
  EDX = (r32((uint32_t)(0x12815a10)));
  /* 127f8119 push edx */
  push32((uint32_t)(EDX));
  /* 127f811a call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f8120u);
  /* 127f8120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f8122 je 0x127f8135 */
  if (C.zf) goto L_127f8135;
  /* 127f8124 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8128 jne 0x127f8135 */
  if (!C.zf) goto L_127f8135;
  /* 127f812a mov eax, dword ptr [0x12814e20] */
  EAX = (r32((uint32_t)(0x12814e20)));
  /* 127f812f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 127f8133 jmp 0x127f813e */
  goto L_127f813e;
L_127f8135:;
  /* 127f8135 mov ecx, dword ptr [0x12814e20] */
  ECX = (r32((uint32_t)(0x12814e20)));
  /* 127f813b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_127f813e:;
  /* 127f813e jmp 0x127f8367 */
  goto L_127f8367;
L_127f8143:;
  /* 127f8143 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8146 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f8149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f814b je 0x127f816d */
  if (C.zf) goto L_127f816d;
  /* 127f814d cmp dword ptr [0x12815b54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8154 je 0x127f817c */
  if (C.zf) goto L_127f817c;
  /* 127f8156 mov ecx, dword ptr [0x12815b54] */
  ECX = (r32((uint32_t)(0x12815b54)));
  /* 127f815c push ecx */
  push32((uint32_t)(ECX));
  /* 127f815d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8160 push edx */
  push32((uint32_t)(EDX));
  /* 127f8161 call 0x127f50f0 */
  push32(0x127f8166u); f_127f50f0();
  /* 127f8166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8169 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f816b jne 0x127f817c */
  if (!C.zf) goto L_127f817c;
L_127f816d:;
  /* 127f816d push 0xc */
  push32((uint32_t)(0xcu));
  /* 127f816f call 0x127ecf00 */
  push32(0x127f8174u); f_127ecf00();
  /* 127f8174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8177 jmp 0x127f8367 */
  goto L_127f8367;
L_127f817c:;
  /* 127f817c push 2 */
  push32((uint32_t)(0x2u));
  /* 127f817e mov eax, dword ptr [0x12815b54] */
  EAX = (r32((uint32_t)(0x12815b54)));
  /* 127f8183 push eax */
  push32((uint32_t)(EAX));
  /* 127f8184 call 0x127e9ef0 */
  push32(0x127f8189u); f_127e9ef0();
  /* 127f8189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f818c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 127f8191 push 0x12811b50 */
  push32((uint32_t)(0x12811b50u));
  /* 127f8196 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f8198 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f819b push ecx */
  push32((uint32_t)(ECX));
  /* 127f819c call 0x127ec290 */
  push32(0x127f81a1u); f_127ec290();
  /* 127f81a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f81a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f81a7 push eax */
  push32((uint32_t)(EAX));
  /* 127f81a8 call 0x127e9460 */
  push32(0x127f81adu); f_127e9460();
  /* 127f81ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f81b0 mov dword ptr [0x12815b54], eax */
  w32((uint32_t)(0x12815b54), (EAX));
  /* 127f81b5 cmp dword ptr [0x12815b54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f81bc jne 0x127f81cd */
  if (!C.zf) goto L_127f81cd;
  /* 127f81be push 0xc */
  push32((uint32_t)(0xcu));
  /* 127f81c0 call 0x127ecf00 */
  push32(0x127f81c5u); f_127ecf00();
  /* 127f81c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f81c8 jmp 0x127f8367 */
  goto L_127f8367;
L_127f81cd:;
  /* 127f81cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f81d0 push edx */
  push32((uint32_t)(EDX));
  /* 127f81d1 mov eax, dword ptr [0x12815b54] */
  EAX = (r32((uint32_t)(0x12815b54)));
  /* 127f81d6 push eax */
  push32((uint32_t)(EAX));
  /* 127f81d7 call 0x127ec410 */
  push32(0x127f81dcu); f_127ec410();
  /* 127f81dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f81df push 0xc */
  push32((uint32_t)(0xcu));
  /* 127f81e1 call 0x127ecf00 */
  push32(0x127f81e6u); f_127ecf00();
  /* 127f81e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f81e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 127f81eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f81ee push ecx */
  push32((uint32_t)(ECX));
  /* 127f81ef mov edx, dword ptr [0x12814e1c] */
  EDX = (r32((uint32_t)(0x12814e1c)));
  /* 127f81f5 push edx */
  push32((uint32_t)(EDX));
  /* 127f81f6 call 0x127ecc80 */
  push32(0x127f81fbu); f_127ecc80();
  /* 127f81fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f81fe mov eax, dword ptr [0x12814e1c] */
  EAX = (r32((uint32_t)(0x12814e1c)));
  /* 127f8203 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 127f8207 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f820a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f820d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f8210 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8213 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f8216 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8219 jne 0x127f822d */
  if (!C.zf) goto L_127f822d;
  /* 127f821b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f821e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8221 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f8224 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8227 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f822a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127f822d:;
  /* 127f822d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8230 push eax */
  push32((uint32_t)(EAX));
  /* 127f8231 call 0x127f7d10 */
  push32(0x127f8236u); f_127f7d10();
  /* 127f8236 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8239 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f823f mov dword ptr [0x12814d90], eax */
  w32((uint32_t)(0x12814d90), (EAX));
L_127f8244:;
  /* 127f8244 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8247 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f824a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f824d je 0x127f8265 */
  if (C.zf) goto L_127f8265;
  /* 127f824f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8252 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f8255 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8258 jl 0x127f8270 */
  if ((C.sf!=C.of)) goto L_127f8270;
  /* 127f825a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f825d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f8260 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8263 jg 0x127f8270 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f8270;
L_127f8265:;
  /* 127f8265 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8268 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f826b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f826e jmp 0x127f8244 */
  goto L_127f8244;
L_127f8270:;
  /* 127f8270 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8273 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f8276 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8279 jne 0x127f8315 */
  if (!C.zf) goto L_127f8315;
  /* 127f827f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8282 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8285 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f8288 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f828b push edx */
  push32((uint32_t)(EDX));
  /* 127f828c call 0x127f7d10 */
  push32(0x127f8291u); f_127f7d10();
  /* 127f8291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8294 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f8297 mov ecx, dword ptr [0x12814d90] */
  ECX = (r32((uint32_t)(0x12814d90)));
  /* 127f829d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f829f mov dword ptr [0x12814d90], ecx */
  w32((uint32_t)(0x12814d90), (ECX));
L_127f82a5:;
  /* 127f82a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f82a8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f82ab cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f82ae jl 0x127f82c6 */
  if ((C.sf!=C.of)) goto L_127f82c6;
  /* 127f82b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f82b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f82b6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f82b9 jg 0x127f82c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f82c6;
  /* 127f82bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f82be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f82c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f82c4 jmp 0x127f82a5 */
  goto L_127f82a5;
L_127f82c6:;
  /* 127f82c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f82c9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f82cc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f82cf jne 0x127f8315 */
  if (!C.zf) goto L_127f8315;
  /* 127f82d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f82d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f82d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f82da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f82dd push ecx */
  push32((uint32_t)(ECX));
  /* 127f82de call 0x127f7d10 */
  push32(0x127f82e3u); f_127f7d10();
  /* 127f82e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f82e6 mov edx, dword ptr [0x12814d90] */
  EDX = (r32((uint32_t)(0x12814d90)));
  /* 127f82ec add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f82ee mov dword ptr [0x12814d90], edx */
  w32((uint32_t)(0x12814d90), (EDX));
L_127f82f4:;
  /* 127f82f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f82f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f82fa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f82fd jl 0x127f8315 */
  if ((C.sf!=C.of)) goto L_127f8315;
  /* 127f82ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8302 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f8305 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8308 jg 0x127f8315 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f8315;
  /* 127f830a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f830d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8310 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f8313 jmp 0x127f82f4 */
  goto L_127f82f4;
L_127f8315:;
  /* 127f8315 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8319 je 0x127f8329 */
  if (C.zf) goto L_127f8329;
  /* 127f831b mov edx, dword ptr [0x12814d90] */
  EDX = (r32((uint32_t)(0x12814d90)));
  /* 127f8321 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f8323 mov dword ptr [0x12814d90], edx */
  w32((uint32_t)(0x12814d90), (EDX));
L_127f8329:;
  /* 127f8329 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f832c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f832f mov dword ptr [0x12814d94], ecx */
  w32((uint32_t)(0x12814d94), (ECX));
  /* 127f8335 cmp dword ptr [0x12814d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12814d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f833c je 0x127f835e */
  if (C.zf) goto L_127f835e;
  /* 127f833e push 3 */
  push32((uint32_t)(0x3u));
  /* 127f8340 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8343 push edx */
  push32((uint32_t)(EDX));
  /* 127f8344 mov eax, dword ptr [0x12814e20] */
  EAX = (r32((uint32_t)(0x12814e20)));
  /* 127f8349 push eax */
  push32((uint32_t)(EAX));
  /* 127f834a call 0x127ecc80 */
  push32(0x127f834fu); f_127ecc80();
  /* 127f834f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8352 mov ecx, dword ptr [0x12814e20] */
  ECX = (r32((uint32_t)(0x12814e20)));
  /* 127f8358 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 127f835c jmp 0x127f8367 */
  goto L_127f8367;
L_127f835e:;
  /* 127f835e mov edx, dword ptr [0x12814e20] */
  EDX = (r32((uint32_t)(0x12814e20)));
  /* 127f8364 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_127f8367:;
  /* 127f8367 mov esp, ebp */
  ESP = (EBP);
  /* 127f8369 pop ebp */
  EBP = (pop32());
  /* 127f836a ret  */
  ESPCHK(0x127f7fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018370 @ 0x127f8370 (46 bytes, 18 insns) */
void f_127f8370(void) {
  FTRACE(0x127f8370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f8370 push ebp */
  push32((uint32_t)(EBP));
  /* 127f8371 mov ebp, esp */
  EBP = (ESP);
  /* 127f8373 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8374 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127f8376 call 0x127ece60 */
  push32(0x127f837bu); f_127ece60();
  /* 127f837b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f837e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8381 push eax */
  push32((uint32_t)(EAX));
  /* 127f8382 call 0x127f83a0 */
  push32(0x127f8387u); f_127f83a0();
  /* 127f8387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f838a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f838d push 0xb */
  push32((uint32_t)(0xbu));
  /* 127f838f call 0x127ecf00 */
  push32(0x127f8394u); f_127ecf00();
  /* 127f8394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f839a mov esp, ebp */
  ESP = (EBP);
  /* 127f839c pop ebp */
  EBP = (pop32());
  /* 127f839d ret  */
  ESPCHK(0x127f8370u, _esp0);
  ESP += 4; return;
}

/* FUN_100183a0 @ 0x127f83a0 (762 bytes, 246 insns) */
void f_127f83a0(void) {
  FTRACE(0x127f83a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f83a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f83a1 mov ebp, esp */
  EBP = (ESP);
  /* 127f83a3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f83a4 cmp dword ptr [0x12814d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12814d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f83ab jne 0x127f83b4 */
  if (!C.zf) goto L_127f83b4;
  /* 127f83ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f83af jmp 0x127f8696 */
  goto L_127f8696;
L_127f83b4:;
  /* 127f83b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f83b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127f83ba cmp ecx, dword ptr [0x12814e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12814e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f83c0 jne 0x127f83d4 */
  if (!C.zf) goto L_127f83d4;
  /* 127f83c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f83c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127f83c8 cmp eax, dword ptr [0x12814e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12814e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f83ce je 0x127f859b */
  if (C.zf) goto L_127f859b;
L_127f83d4:;
  /* 127f83d4 cmp dword ptr [0x12815aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f83db je 0x127f8555 */
  if (C.zf) goto L_127f8555;
  /* 127f83e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f83e3 mov cx, word ptr [0x12815b40] */
  CX = (r16((uint32_t)(0x12815b40)));
  /* 127f83ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f83ec jne 0x127f8449 */
  if (!C.zf) goto L_127f8449;
  /* 127f83ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f83f0 mov dx, word ptr [0x12815b4e] */
  DX = (r16((uint32_t)(0x12815b4e)));
  /* 127f83f7 push edx */
  push32((uint32_t)(EDX));
  /* 127f83f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f83fa mov ax, word ptr [0x12815b4c] */
  AX = (r16((uint32_t)(0x12815b4c)));
  /* 127f8400 push eax */
  push32((uint32_t)(EAX));
  /* 127f8401 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f8403 mov cx, word ptr [0x12815b4a] */
  CX = (r16((uint32_t)(0x12815b4a)));
  /* 127f840a push ecx */
  push32((uint32_t)(ECX));
  /* 127f840b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f840d mov dx, word ptr [0x12815b48] */
  DX = (r16((uint32_t)(0x12815b48)));
  /* 127f8414 push edx */
  push32((uint32_t)(EDX));
  /* 127f8415 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8419 mov ax, word ptr [0x12815b44] */
  AX = (r16((uint32_t)(0x12815b44)));
  /* 127f841f push eax */
  push32((uint32_t)(EAX));
  /* 127f8420 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f8422 mov cx, word ptr [0x12815b46] */
  CX = (r16((uint32_t)(0x12815b46)));
  /* 127f8429 push ecx */
  push32((uint32_t)(ECX));
  /* 127f842a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f842c mov dx, word ptr [0x12815b42] */
  DX = (r16((uint32_t)(0x12815b42)));
  /* 127f8433 push edx */
  push32((uint32_t)(EDX));
  /* 127f8434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8437 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127f843a push ecx */
  push32((uint32_t)(ECX));
  /* 127f843b push 1 */
  push32((uint32_t)(0x1u));
  /* 127f843d push 1 */
  push32((uint32_t)(0x1u));
  /* 127f843f call 0x127f86a0 */
  push32(0x127f8444u); f_127f86a0();
  /* 127f8444 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8447 jmp 0x127f849a */
  goto L_127f849a;
L_127f8449:;
  /* 127f8449 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f844b mov dx, word ptr [0x12815b4e] */
  DX = (r16((uint32_t)(0x12815b4e)));
  /* 127f8452 push edx */
  push32((uint32_t)(EDX));
  /* 127f8453 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8455 mov ax, word ptr [0x12815b4c] */
  AX = (r16((uint32_t)(0x12815b4c)));
  /* 127f845b push eax */
  push32((uint32_t)(EAX));
  /* 127f845c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f845e mov cx, word ptr [0x12815b4a] */
  CX = (r16((uint32_t)(0x12815b4a)));
  /* 127f8465 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8466 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f8468 mov dx, word ptr [0x12815b48] */
  DX = (r16((uint32_t)(0x12815b48)));
  /* 127f846f push edx */
  push32((uint32_t)(EDX));
  /* 127f8470 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8472 mov ax, word ptr [0x12815b46] */
  AX = (r16((uint32_t)(0x12815b46)));
  /* 127f8478 push eax */
  push32((uint32_t)(EAX));
  /* 127f8479 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f847b push 0 */
  push32((uint32_t)(0x0u));
  /* 127f847d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f847f mov cx, word ptr [0x12815b42] */
  CX = (r16((uint32_t)(0x12815b42)));
  /* 127f8486 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f848a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127f848d push eax */
  push32((uint32_t)(EAX));
  /* 127f848e push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8490 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8492 call 0x127f86a0 */
  push32(0x127f8497u); f_127f86a0();
  /* 127f8497 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f849a:;
  /* 127f849a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f849c mov cx, word ptr [0x12815aec] */
  CX = (r16((uint32_t)(0x12815aec)));
  /* 127f84a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f84a5 jne 0x127f8502 */
  if (!C.zf) goto L_127f8502;
  /* 127f84a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f84a9 mov dx, word ptr [0x12815afa] */
  DX = (r16((uint32_t)(0x12815afa)));
  /* 127f84b0 push edx */
  push32((uint32_t)(EDX));
  /* 127f84b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f84b3 mov ax, word ptr [0x12815af8] */
  AX = (r16((uint32_t)(0x12815af8)));
  /* 127f84b9 push eax */
  push32((uint32_t)(EAX));
  /* 127f84ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f84bc mov cx, word ptr [0x12815af6] */
  CX = (r16((uint32_t)(0x12815af6)));
  /* 127f84c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f84c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f84c6 mov dx, word ptr [0x12815af4] */
  DX = (r16((uint32_t)(0x12815af4)));
  /* 127f84cd push edx */
  push32((uint32_t)(EDX));
  /* 127f84ce push 0 */
  push32((uint32_t)(0x0u));
  /* 127f84d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f84d2 mov ax, word ptr [0x12815af0] */
  AX = (r16((uint32_t)(0x12815af0)));
  /* 127f84d8 push eax */
  push32((uint32_t)(EAX));
  /* 127f84d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f84db mov cx, word ptr [0x12815af2] */
  CX = (r16((uint32_t)(0x12815af2)));
  /* 127f84e2 push ecx */
  push32((uint32_t)(ECX));
  /* 127f84e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f84e5 mov dx, word ptr [0x12815aee] */
  DX = (r16((uint32_t)(0x12815aee)));
  /* 127f84ec push edx */
  push32((uint32_t)(EDX));
  /* 127f84ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f84f0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127f84f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f84f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f84f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f84f8 call 0x127f86a0 */
  push32(0x127f84fdu); f_127f86a0();
  /* 127f84fd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8500 jmp 0x127f8553 */
  goto L_127f8553;
L_127f8502:;
  /* 127f8502 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f8504 mov dx, word ptr [0x12815afa] */
  DX = (r16((uint32_t)(0x12815afa)));
  /* 127f850b push edx */
  push32((uint32_t)(EDX));
  /* 127f850c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f850e mov ax, word ptr [0x12815af8] */
  AX = (r16((uint32_t)(0x12815af8)));
  /* 127f8514 push eax */
  push32((uint32_t)(EAX));
  /* 127f8515 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f8517 mov cx, word ptr [0x12815af6] */
  CX = (r16((uint32_t)(0x12815af6)));
  /* 127f851e push ecx */
  push32((uint32_t)(ECX));
  /* 127f851f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f8521 mov dx, word ptr [0x12815af4] */
  DX = (r16((uint32_t)(0x12815af4)));
  /* 127f8528 push edx */
  push32((uint32_t)(EDX));
  /* 127f8529 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f852b mov ax, word ptr [0x12815af2] */
  AX = (r16((uint32_t)(0x12815af2)));
  /* 127f8531 push eax */
  push32((uint32_t)(EAX));
  /* 127f8532 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8534 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8536 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f8538 mov cx, word ptr [0x12815aee] */
  CX = (r16((uint32_t)(0x12815aee)));
  /* 127f853f push ecx */
  push32((uint32_t)(ECX));
  /* 127f8540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8543 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127f8546 push eax */
  push32((uint32_t)(EAX));
  /* 127f8547 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8549 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f854b call 0x127f86a0 */
  push32(0x127f8550u); f_127f86a0();
  /* 127f8550 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f8553:;
  /* 127f8553 jmp 0x127f859b */
  goto L_127f859b;
L_127f8555:;
  /* 127f8555 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8557 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8559 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f855b push 2 */
  push32((uint32_t)(0x2u));
  /* 127f855d push 0 */
  push32((uint32_t)(0x0u));
  /* 127f855f push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8561 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8563 push 4 */
  push32((uint32_t)(0x4u));
  /* 127f8565 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8568 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127f856b push edx */
  push32((uint32_t)(EDX));
  /* 127f856c push 1 */
  push32((uint32_t)(0x1u));
  /* 127f856e push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8570 call 0x127f86a0 */
  push32(0x127f8575u); f_127f86a0();
  /* 127f8575 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8578 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f857a push 0 */
  push32((uint32_t)(0x0u));
  /* 127f857c push 0 */
  push32((uint32_t)(0x0u));
  /* 127f857e push 2 */
  push32((uint32_t)(0x2u));
  /* 127f8580 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8582 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8584 push 5 */
  push32((uint32_t)(0x5u));
  /* 127f8586 push 0xa */
  push32((uint32_t)(0xau));
  /* 127f8588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f858b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127f858e push ecx */
  push32((uint32_t)(ECX));
  /* 127f858f push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8591 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8593 call 0x127f86a0 */
  push32(0x127f8598u); f_127f86a0();
  /* 127f8598 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f859b:;
  /* 127f859b mov edx, dword ptr [0x12814e2c] */
  EDX = (r32((uint32_t)(0x12814e2c)));
  /* 127f85a1 cmp edx, dword ptr [0x12814e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12814e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f85a7 jge 0x127f85f4 */
  if ((C.sf==C.of)) goto L_127f85f4;
  /* 127f85a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f85ac mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127f85af cmp ecx, dword ptr [0x12814e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12814e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f85b5 jl 0x127f85c5 */
  if ((C.sf!=C.of)) goto L_127f85c5;
  /* 127f85b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f85ba mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127f85bd cmp eax, dword ptr [0x12814e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12814e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f85c3 jle 0x127f85cc */
  if ((C.zf||C.sf!=C.of)) goto L_127f85cc;
L_127f85c5:;
  /* 127f85c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f85c7 jmp 0x127f8696 */
  goto L_127f8696;
L_127f85cc:;
  /* 127f85cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f85cf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127f85d2 cmp edx, dword ptr [0x12814e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12814e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f85d8 jle 0x127f85f2 */
  if ((C.zf||C.sf!=C.of)) goto L_127f85f2;
  /* 127f85da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f85dd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127f85e0 cmp ecx, dword ptr [0x12814e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12814e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f85e6 jge 0x127f85f2 */
  if ((C.sf==C.of)) goto L_127f85f2;
  /* 127f85e8 mov eax, 1 */
  EAX = (0x1u);
  /* 127f85ed jmp 0x127f8696 */
  goto L_127f8696;
L_127f85f2:;
  /* 127f85f2 jmp 0x127f8637 */
  goto L_127f8637;
L_127f85f4:;
  /* 127f85f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f85f7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127f85fa cmp eax, dword ptr [0x12814e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12814e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8600 jl 0x127f8610 */
  if ((C.sf!=C.of)) goto L_127f8610;
  /* 127f8602 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8605 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127f8608 cmp edx, dword ptr [0x12814e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12814e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f860e jle 0x127f8617 */
  if ((C.zf||C.sf!=C.of)) goto L_127f8617;
L_127f8610:;
  /* 127f8610 mov eax, 1 */
  EAX = (0x1u);
  /* 127f8615 jmp 0x127f8696 */
  goto L_127f8696;
L_127f8617:;
  /* 127f8617 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f861a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127f861d cmp ecx, dword ptr [0x12814e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12814e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8623 jle 0x127f8637 */
  if ((C.zf||C.sf!=C.of)) goto L_127f8637;
  /* 127f8625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8628 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127f862b cmp eax, dword ptr [0x12814e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12814e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8631 jge 0x127f8637 */
  if ((C.sf==C.of)) goto L_127f8637;
  /* 127f8633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8635 jmp 0x127f8696 */
  goto L_127f8696;
L_127f8637:;
  /* 127f8637 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f863a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127f863d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f8640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8643 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f8645 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8647 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f864a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127f864d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f8653 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8655 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f865b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f865e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8661 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127f8664 cmp edx, dword ptr [0x12814e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12814e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f866a jne 0x127f8682 */
  if (!C.zf) goto L_127f8682;
  /* 127f866c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f866f cmp eax, dword ptr [0x12814e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12814e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8675 jl 0x127f867e */
  if ((C.sf!=C.of)) goto L_127f867e;
  /* 127f8677 mov eax, 1 */
  EAX = (0x1u);
  /* 127f867c jmp 0x127f8696 */
  goto L_127f8696;
L_127f867e:;
  /* 127f867e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8680 jmp 0x127f8696 */
  goto L_127f8696;
L_127f8682:;
  /* 127f8682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8685 cmp ecx, dword ptr [0x12814e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12814e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f868b jge 0x127f8694 */
  if ((C.sf==C.of)) goto L_127f8694;
  /* 127f868d mov eax, 1 */
  EAX = (0x1u);
  /* 127f8692 jmp 0x127f8696 */
  goto L_127f8696;
L_127f8694:;
  /* 127f8694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f8696:;
  /* 127f8696 mov esp, ebp */
  ESP = (EBP);
  /* 127f8698 pop ebp */
  EBP = (pop32());
  /* 127f8699 ret  */
  ESPCHK(0x127f83a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100186a0 @ 0x127f86a0 (504 bytes, 145 insns) */
void f_127f86a0(void) {
  FTRACE(0x127f86a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f86a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f86a1 mov ebp, esp */
  EBP = (ESP);
  /* 127f86a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f86a6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f86aa jne 0x127f877c */
  if (!C.zf) goto L_127f877c;
  /* 127f86b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f86b3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 127f86b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f86b8 jne 0x127f86c9 */
  if (!C.zf) goto L_127f86c9;
  /* 127f86ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f86bd mov edx, dword ptr [ecx*4 + 0x12814e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12814e4c)));
  /* 127f86c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127f86c7 jmp 0x127f86d6 */
  goto L_127f86d6;
L_127f86c9:;
  /* 127f86c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f86cc mov ecx, dword ptr [eax*4 + 0x12814e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12814e80)));
  /* 127f86d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_127f86d6:;
  /* 127f86d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f86d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f86dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f86df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f86e2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f86e5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f86eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f86ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f86f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f86f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f86f6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 127f86f9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 127f86fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f86fe mov ecx, 7 */
  ECX = (0x7u);
  /* 127f8703 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f8705 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f8708 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f870b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f870e jge 0x127f8729 */
  if ((C.sf==C.of)) goto L_127f8729;
  /* 127f8710 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f8713 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f8716 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f8719 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f871c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f871f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8722 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8724 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f8727 jmp 0x127f873d */
  goto L_127f873d;
L_127f8729:;
  /* 127f8729 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f872c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f872f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f8732 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f8735 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8738 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f873a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127f873d:;
  /* 127f873d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8741 jne 0x127f877a */
  if (!C.zf) goto L_127f877a;
  /* 127f8743 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f8746 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 127f8749 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f874b jne 0x127f875c */
  if (!C.zf) goto L_127f875c;
  /* 127f874d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f8750 mov eax, dword ptr [edx*4 + 0x12814e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12814e50)));
  /* 127f8757 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127f875a jmp 0x127f8769 */
  goto L_127f8769;
L_127f875c:;
  /* 127f875c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f875f mov edx, dword ptr [ecx*4 + 0x12814e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12814e84)));
  /* 127f8766 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127f8769:;
  /* 127f8769 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f876c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f876f jle 0x127f877a */
  if ((C.zf||C.sf!=C.of)) goto L_127f877a;
  /* 127f8771 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f8774 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f8777 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127f877a:;
  /* 127f877a jmp 0x127f87b1 */
  goto L_127f87b1;
L_127f877c:;
  /* 127f877c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f877f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127f8782 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f8784 jne 0x127f8795 */
  if (!C.zf) goto L_127f8795;
  /* 127f8786 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f8789 mov ecx, dword ptr [eax*4 + 0x12814e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12814e4c)));
  /* 127f8790 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127f8793 jmp 0x127f87a2 */
  goto L_127f87a2;
L_127f8795:;
  /* 127f8795 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f8798 mov eax, dword ptr [edx*4 + 0x12814e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12814e80)));
  /* 127f879f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_127f87a2:;
  /* 127f87a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f87a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f87a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f87ab add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f87ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127f87b1:;
  /* 127f87b1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f87b5 jne 0x127f87f1 */
  if (!C.zf) goto L_127f87f1;
  /* 127f87b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f87ba mov dword ptr [0x12814e2c], eax */
  w32((uint32_t)(0x12814e2c), (EAX));
  /* 127f87bf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 127f87c2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f87c5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 127f87c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f87ca imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f87cd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 127f87d0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f87d2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f87d8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 127f87db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f87dd mov dword ptr [0x12814e30], ecx */
  w32((uint32_t)(0x12814e30), (ECX));
  /* 127f87e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f87e6 mov dword ptr [0x12814e28], edx */
  w32((uint32_t)(0x12814e28), (EDX));
  /* 127f87ec jmp 0x127f8894 */
  goto L_127f8894;
L_127f87f1:;
  /* 127f87f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f87f4 mov dword ptr [0x12814e3c], eax */
  w32((uint32_t)(0x12814e3c), (EAX));
  /* 127f87f9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 127f87fc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f87ff mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 127f8802 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8804 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f8807 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 127f880a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f880c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f8812 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 127f8815 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8817 mov dword ptr [0x12814e40], ecx */
  w32((uint32_t)(0x12814e40), (ECX));
  /* 127f881d mov edx, dword ptr [0x12814d98] */
  EDX = (r32((uint32_t)(0x12814d98)));
  /* 127f8823 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f8829 mov eax, dword ptr [0x12814e40] */
  EAX = (r32((uint32_t)(0x12814e40)));
  /* 127f882e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8830 mov dword ptr [0x12814e40], eax */
  w32((uint32_t)(0x12814e40), (EAX));
  /* 127f8835 cmp dword ptr [0x12814e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12814e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f883c jge 0x127f8861 */
  if ((C.sf==C.of)) goto L_127f8861;
  /* 127f883e mov ecx, dword ptr [0x12814e40] */
  ECX = (r32((uint32_t)(0x12814e40)));
  /* 127f8844 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f884a mov dword ptr [0x12814e40], ecx */
  w32((uint32_t)(0x12814e40), (ECX));
  /* 127f8850 mov edx, dword ptr [0x12814e3c] */
  EDX = (r32((uint32_t)(0x12814e3c)));
  /* 127f8856 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f8859 mov dword ptr [0x12814e3c], edx */
  w32((uint32_t)(0x12814e3c), (EDX));
  /* 127f885f jmp 0x127f888b */
  goto L_127f888b;
L_127f8861:;
  /* 127f8861 cmp dword ptr [0x12814e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12814e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f886b jl 0x127f888b */
  if ((C.sf!=C.of)) goto L_127f888b;
  /* 127f886d mov eax, dword ptr [0x12814e40] */
  EAX = (r32((uint32_t)(0x12814e40)));
  /* 127f8872 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f8877 mov dword ptr [0x12814e40], eax */
  w32((uint32_t)(0x12814e40), (EAX));
  /* 127f887c mov ecx, dword ptr [0x12814e3c] */
  ECX = (r32((uint32_t)(0x12814e3c)));
  /* 127f8882 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8885 mov dword ptr [0x12814e3c], ecx */
  w32((uint32_t)(0x12814e3c), (ECX));
L_127f888b:;
  /* 127f888b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f888e mov dword ptr [0x12814e38], edx */
  w32((uint32_t)(0x12814e38), (EDX));
L_127f8894:;
  /* 127f8894 mov esp, ebp */
  ESP = (EBP);
  /* 127f8896 pop ebp */
  EBP = (pop32());
  /* 127f8897 ret  */
  ESPCHK(0x127f86a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100188a0 @ 0x127f88a0 (382 bytes, 135 insns) */
void f_127f88a0(void) {
  FTRACE(0x127f88a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f88a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f88a1 mov ebp, esp */
  EBP = (ESP);
  /* 127f88a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f88a5 push 0x12811b60 */
  push32((uint32_t)(0x12811b60u));
  /* 127f88aa push 0x127f2568 */
  push32((uint32_t)(0x127f2568u));
  /* 127f88af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127f88b5 push eax */
  push32((uint32_t)(EAX));
  /* 127f88b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127f88bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f88c0 push ebx */
  push32((uint32_t)(EBX));
  /* 127f88c1 push esi */
  push32((uint32_t)(ESI));
  /* 127f88c2 push edi */
  push32((uint32_t)(EDI));
  /* 127f88c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f88c6 cmp dword ptr [0x12815b5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f88cd jne 0x127f8912 */
  if (!C.zf) goto L_127f8912;
  /* 127f88cf push 0 */
  push32((uint32_t)(0x0u));
  /* 127f88d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f88d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f88d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f88d7 call dword ptr [0x128182a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182a8))), 0x127f88ddu);
  /* 127f88dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f88df je 0x127f88ed */
  if (C.zf) goto L_127f88ed;
  /* 127f88e1 mov dword ptr [0x12815b5c], 1 */
  w32((uint32_t)(0x12815b5c), (0x1u));
  /* 127f88eb jmp 0x127f8912 */
  goto L_127f8912;
L_127f88ed:;
  /* 127f88ed push 0 */
  push32((uint32_t)(0x0u));
  /* 127f88ef push 0 */
  push32((uint32_t)(0x0u));
  /* 127f88f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f88f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f88f5 call dword ptr [0x128182c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182c0))), 0x127f88fbu);
  /* 127f88fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f88fd je 0x127f890b */
  if (C.zf) goto L_127f890b;
  /* 127f88ff mov dword ptr [0x12815b5c], 2 */
  w32((uint32_t)(0x12815b5c), (0x2u));
  /* 127f8909 jmp 0x127f8912 */
  goto L_127f8912;
L_127f890b:;
  /* 127f890b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f890d jmp 0x127f8a21 */
  goto L_127f8a21;
L_127f8912:;
  /* 127f8912 cmp dword ptr [0x12815b5c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12815b5c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8919 jne 0x127f8936 */
  if (!C.zf) goto L_127f8936;
  /* 127f891b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f891e push eax */
  push32((uint32_t)(EAX));
  /* 127f891f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f8922 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8923 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f8926 push edx */
  push32((uint32_t)(EDX));
  /* 127f8927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f892a push eax */
  push32((uint32_t)(EAX));
  /* 127f892b call dword ptr [0x128182a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182a8))), 0x127f8931u);
  /* 127f8931 jmp 0x127f8a21 */
  goto L_127f8a21;
L_127f8936:;
  /* 127f8936 cmp dword ptr [0x12815b5c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12815b5c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f893d jne 0x127f8a1f */
  if (!C.zf) goto L_127f8a1f;
  /* 127f8943 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8947 jne 0x127f8952 */
  if (!C.zf) goto L_127f8952;
  /* 127f8949 mov ecx, dword ptr [0x12815a10] */
  ECX = (r32((uint32_t)(0x12815a10)));
  /* 127f894f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_127f8952:;
  /* 127f8952 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8954 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8956 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f8959 push edx */
  push32((uint32_t)(EDX));
  /* 127f895a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f895d push eax */
  push32((uint32_t)(EAX));
  /* 127f895e call dword ptr [0x128182c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182c0))), 0x127f8964u);
  /* 127f8964 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127f8967 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f896b jne 0x127f8974 */
  if (!C.zf) goto L_127f8974;
  /* 127f896d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f896f jmp 0x127f8a21 */
  goto L_127f8a21;
L_127f8974:;
  /* 127f8974 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f897b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f897e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8981 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127f8983 call 0x127ec600 */
  push32(0x127f8988u); f_127ec600();
  /* 127f8988 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 127f898b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f898e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f8991 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127f8994 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f899b jmp 0x127f89b4 */
  goto L_127f89b4;
  /* 127f899d mov eax, 1 */
  EAX = (0x1u);
  /* 127f89a2 ret  */
  ESPCHK(0x127f88a0u, _esp0);
  ESP += 4; return;
  /* 127f89a3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127f89a6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127f89ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f89b4:;
  /* 127f89b4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f89b8 jne 0x127f89be */
  if (!C.zf) goto L_127f89be;
  /* 127f89ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f89bc jmp 0x127f8a21 */
  goto L_127f8a21;
L_127f89be:;
  /* 127f89be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f89c1 push edx */
  push32((uint32_t)(EDX));
  /* 127f89c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f89c5 push eax */
  push32((uint32_t)(EAX));
  /* 127f89c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f89c9 push ecx */
  push32((uint32_t)(ECX));
  /* 127f89ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f89cd push edx */
  push32((uint32_t)(EDX));
  /* 127f89ce call dword ptr [0x128182c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182c0))), 0x127f89d4u);
  /* 127f89d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f89d6 jne 0x127f89dc */
  if (!C.zf) goto L_127f89dc;
  /* 127f89d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f89da jmp 0x127f8a21 */
  goto L_127f8a21;
L_127f89dc:;
  /* 127f89dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f89e0 jne 0x127f89fd */
  if (!C.zf) goto L_127f89fd;
  /* 127f89e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f89e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f89e6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f89e8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f89eb push eax */
  push32((uint32_t)(EAX));
  /* 127f89ec push 1 */
  push32((uint32_t)(0x1u));
  /* 127f89ee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f89f1 push ecx */
  push32((uint32_t)(ECX));
  /* 127f89f2 call dword ptr [0x128182f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f0))), 0x127f89f8u);
  /* 127f89f8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127f89fb jmp 0x127f8a1a */
  goto L_127f8a1a;
L_127f89fd:;
  /* 127f89fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f8a00 push edx */
  push32((uint32_t)(EDX));
  /* 127f8a01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f8a04 push eax */
  push32((uint32_t)(EAX));
  /* 127f8a05 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f8a07 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f8a0a push ecx */
  push32((uint32_t)(ECX));
  /* 127f8a0b push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8a0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f8a10 push edx */
  push32((uint32_t)(EDX));
  /* 127f8a11 call dword ptr [0x128182f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f0))), 0x127f8a17u);
  /* 127f8a17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127f8a1a:;
  /* 127f8a1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f8a1d jmp 0x127f8a21 */
  goto L_127f8a21;
L_127f8a1f:;
  /* 127f8a1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f8a21:;
  /* 127f8a21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 127f8a24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f8a27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127f8a2e pop edi */
  EDI = (pop32());
  /* 127f8a2f pop esi */
  ESI = (pop32());
  /* 127f8a30 pop ebx */
  EBX = (pop32());
  /* 127f8a31 mov esp, ebp */
  ESP = (EBP);
  /* 127f8a33 pop ebp */
  EBP = (pop32());
  /* 127f8a34 ret  */
  ESPCHK(0x127f88a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a40 @ 0x127f8a40 (398 bytes, 140 insns) */
void f_127f8a40(void) {
  FTRACE(0x127f8a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f8a40 push ebp */
  push32((uint32_t)(EBP));
  /* 127f8a41 mov ebp, esp */
  EBP = (ESP);
  /* 127f8a43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f8a45 push 0x12811b70 */
  push32((uint32_t)(0x12811b70u));
  /* 127f8a4a push 0x127f2568 */
  push32((uint32_t)(0x127f2568u));
  /* 127f8a4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127f8a55 push eax */
  push32((uint32_t)(EAX));
  /* 127f8a56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127f8a5d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8a60 push ebx */
  push32((uint32_t)(EBX));
  /* 127f8a61 push esi */
  push32((uint32_t)(ESI));
  /* 127f8a62 push edi */
  push32((uint32_t)(EDI));
  /* 127f8a63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f8a66 cmp dword ptr [0x12815b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8a6d jne 0x127f8ab2 */
  if (!C.zf) goto L_127f8ab2;
  /* 127f8a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8a73 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8a77 call dword ptr [0x128182a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182a8))), 0x127f8a7du);
  /* 127f8a7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f8a7f je 0x127f8a8d */
  if (C.zf) goto L_127f8a8d;
  /* 127f8a81 mov dword ptr [0x12815b60], 1 */
  w32((uint32_t)(0x12815b60), (0x1u));
  /* 127f8a8b jmp 0x127f8ab2 */
  goto L_127f8ab2;
L_127f8a8d:;
  /* 127f8a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8a91 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8a95 call dword ptr [0x128182c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182c0))), 0x127f8a9bu);
  /* 127f8a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f8a9d je 0x127f8aab */
  if (C.zf) goto L_127f8aab;
  /* 127f8a9f mov dword ptr [0x12815b60], 2 */
  w32((uint32_t)(0x12815b60), (0x2u));
  /* 127f8aa9 jmp 0x127f8ab2 */
  goto L_127f8ab2;
L_127f8aab:;
  /* 127f8aab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8aad jmp 0x127f8bd1 */
  goto L_127f8bd1;
L_127f8ab2:;
  /* 127f8ab2 cmp dword ptr [0x12815b60], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12815b60))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8ab9 jne 0x127f8ad6 */
  if (!C.zf) goto L_127f8ad6;
  /* 127f8abb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f8abe push eax */
  push32((uint32_t)(EAX));
  /* 127f8abf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f8ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8ac3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f8ac6 push edx */
  push32((uint32_t)(EDX));
  /* 127f8ac7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8aca push eax */
  push32((uint32_t)(EAX));
  /* 127f8acb call dword ptr [0x128182c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182c0))), 0x127f8ad1u);
  /* 127f8ad1 jmp 0x127f8bd1 */
  goto L_127f8bd1;
L_127f8ad6:;
  /* 127f8ad6 cmp dword ptr [0x12815b60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12815b60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8add jne 0x127f8bcf */
  if (!C.zf) goto L_127f8bcf;
  /* 127f8ae3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8ae7 jne 0x127f8af2 */
  if (!C.zf) goto L_127f8af2;
  /* 127f8ae9 mov ecx, dword ptr [0x12815a10] */
  ECX = (r32((uint32_t)(0x12815a10)));
  /* 127f8aef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_127f8af2:;
  /* 127f8af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8af6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f8af9 push edx */
  push32((uint32_t)(EDX));
  /* 127f8afa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8afd push eax */
  push32((uint32_t)(EAX));
  /* 127f8afe call dword ptr [0x128182a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182a8))), 0x127f8b04u);
  /* 127f8b04 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127f8b07 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8b0b jne 0x127f8b14 */
  if (!C.zf) goto L_127f8b14;
  /* 127f8b0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8b0f jmp 0x127f8bd1 */
  goto L_127f8bd1;
L_127f8b14:;
  /* 127f8b14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f8b1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f8b1e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127f8b20 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8b23 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127f8b25 call 0x127ec600 */
  push32(0x127f8b2au); f_127ec600();
  /* 127f8b2a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 127f8b2d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f8b30 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f8b33 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127f8b36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f8b3d jmp 0x127f8b56 */
  goto L_127f8b56;
  /* 127f8b3f mov eax, 1 */
  EAX = (0x1u);
  /* 127f8b44 ret  */
  ESPCHK(0x127f8a40u, _esp0);
  ESP += 4; return;
  /* 127f8b45 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127f8b48 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127f8b4f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f8b56:;
  /* 127f8b56 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8b5a jne 0x127f8b60 */
  if (!C.zf) goto L_127f8b60;
  /* 127f8b5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8b5e jmp 0x127f8bd1 */
  goto L_127f8bd1;
L_127f8b60:;
  /* 127f8b60 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f8b63 push edx */
  push32((uint32_t)(EDX));
  /* 127f8b64 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f8b67 push eax */
  push32((uint32_t)(EAX));
  /* 127f8b68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f8b6b push ecx */
  push32((uint32_t)(ECX));
  /* 127f8b6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8b6f push edx */
  push32((uint32_t)(EDX));
  /* 127f8b70 call dword ptr [0x128182a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182a8))), 0x127f8b76u);
  /* 127f8b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f8b78 jne 0x127f8b7e */
  if (!C.zf) goto L_127f8b7e;
  /* 127f8b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8b7c jmp 0x127f8bd1 */
  goto L_127f8bd1;
L_127f8b7e:;
  /* 127f8b7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8b82 jne 0x127f8ba6 */
  if (!C.zf) goto L_127f8ba6;
  /* 127f8b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8b8c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f8b8e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f8b91 push eax */
  push32((uint32_t)(EAX));
  /* 127f8b92 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127f8b97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f8b9a push ecx */
  push32((uint32_t)(ECX));
  /* 127f8b9b call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f8ba1u);
  /* 127f8ba1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127f8ba4 jmp 0x127f8bca */
  goto L_127f8bca;
L_127f8ba6:;
  /* 127f8ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8baa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f8bad push edx */
  push32((uint32_t)(EDX));
  /* 127f8bae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f8bb1 push eax */
  push32((uint32_t)(EAX));
  /* 127f8bb2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f8bb4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f8bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8bb8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127f8bbd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f8bc0 push edx */
  push32((uint32_t)(EDX));
  /* 127f8bc1 call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f8bc7u);
  /* 127f8bc7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127f8bca:;
  /* 127f8bca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f8bcd jmp 0x127f8bd1 */
  goto L_127f8bd1;
L_127f8bcf:;
  /* 127f8bcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f8bd1:;
  /* 127f8bd1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 127f8bd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f8bd7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127f8bde pop edi */
  EDI = (pop32());
  /* 127f8bdf pop esi */
  ESI = (pop32());
  /* 127f8be0 pop ebx */
  EBX = (pop32());
  /* 127f8be1 mov esp, ebp */
  ESP = (EBP);
  /* 127f8be3 pop ebp */
  EBP = (pop32());
  /* 127f8be4 ret  */
  ESPCHK(0x127f8a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10018bf0 @ 0x127f8bf0 (11 bytes, 6 insns) */
void f_127f8bf0(void) {
  FTRACE(0x127f8bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f8bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f8bf1 mov ebp, esp */
  EBP = (ESP);
  /* 127f8bf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8bf6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8bf9 pop ebp */
  EBP = (pop32());
  /* 127f8bfa ret  */
  ESPCHK(0x127f8bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c00 @ 0x127f8c00 (147 bytes, 43 insns) */
void f_127f8c00(void) {
  FTRACE(0x127f8c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f8c00 push ebp */
  push32((uint32_t)(EBP));
  /* 127f8c01 mov ebp, esp */
  EBP = (ESP);
  /* 127f8c03 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8c04 cmp dword ptr [0x12815a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8c0b jne 0x127f8c27 */
  if (!C.zf) goto L_127f8c27;
  /* 127f8c0d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8c11 jl 0x127f8c22 */
  if ((C.sf!=C.of)) goto L_127f8c22;
  /* 127f8c13 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8c17 jg 0x127f8c22 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f8c22;
  /* 127f8c19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8c1c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8c1f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127f8c22:;
  /* 127f8c22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8c25 jmp 0x127f8c8f */
  goto L_127f8c8f;
L_127f8c27:;
  /* 127f8c27 push 0x12815b8c */
  push32((uint32_t)(0x12815b8cu));
  /* 127f8c2c call dword ptr [0x12818350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818350))), 0x127f8c32u);
  /* 127f8c32 cmp dword ptr [0x12815b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8c39 je 0x127f8c59 */
  if (C.zf) goto L_127f8c59;
  /* 127f8c3b push 0x12815b8c */
  push32((uint32_t)(0x12815b8cu));
  /* 127f8c40 call dword ptr [0x12818340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818340))), 0x127f8c46u);
  /* 127f8c46 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f8c48 call 0x127ece60 */
  push32(0x127f8c4du); f_127ece60();
  /* 127f8c4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8c50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127f8c57 jmp 0x127f8c60 */
  goto L_127f8c60;
L_127f8c59:;
  /* 127f8c59 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127f8c60:;
  /* 127f8c60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8c63 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8c64 call 0x127f8ca0 */
  push32(0x127f8c69u); f_127f8ca0();
  /* 127f8c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8c6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f8c6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8c73 je 0x127f8c81 */
  if (C.zf) goto L_127f8c81;
  /* 127f8c75 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f8c77 call 0x127ecf00 */
  push32(0x127f8c7cu); f_127ecf00();
  /* 127f8c7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8c7f jmp 0x127f8c8c */
  goto L_127f8c8c;
L_127f8c81:;
  /* 127f8c81 push 0x12815b8c */
  push32((uint32_t)(0x12815b8cu));
  /* 127f8c86 call dword ptr [0x12818340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818340))), 0x127f8c8cu);
L_127f8c8c:;
  /* 127f8c8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_127f8c8f:;
  /* 127f8c8f mov esp, ebp */
  ESP = (EBP);
  /* 127f8c91 pop ebp */
  EBP = (pop32());
  /* 127f8c92 ret  */
  ESPCHK(0x127f8c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10018ca0 @ 0x127f8ca0 (299 bytes, 91 insns) */
void f_127f8ca0(void) {
  FTRACE(0x127f8ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f8ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f8ca1 mov ebp, esp */
  EBP = (ESP);
  /* 127f8ca3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f8ca6 cmp dword ptr [0x12815a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8cad jne 0x127f8ccc */
  if (!C.zf) goto L_127f8ccc;
  /* 127f8caf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8cb3 jl 0x127f8cc4 */
  if ((C.sf!=C.of)) goto L_127f8cc4;
  /* 127f8cb5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8cb9 jg 0x127f8cc4 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f8cc4;
  /* 127f8cbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8cbe add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8cc1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127f8cc4:;
  /* 127f8cc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8cc7 jmp 0x127f8dc7 */
  goto L_127f8dc7;
L_127f8ccc:;
  /* 127f8ccc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8cd3 jge 0x127f8d13 */
  if ((C.sf==C.of)) goto L_127f8d13;
  /* 127f8cd5 cmp dword ptr [0x12813ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12813ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8cdc jle 0x127f8cf1 */
  if ((C.zf||C.sf!=C.of)) goto L_127f8cf1;
  /* 127f8cde push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8ce0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8ce4 call 0x127ef470 */
  push32(0x127f8ce9u); f_127ef470();
  /* 127f8ce9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8cec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127f8cef jmp 0x127f8d05 */
  goto L_127f8d05;
L_127f8cf1:;
  /* 127f8cf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8cf4 mov eax, dword ptr [0x12813c98] */
  EAX = (r32((uint32_t)(0x12813c98)));
  /* 127f8cf9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f8cfb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 127f8cff and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127f8d02 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127f8d05:;
  /* 127f8d05 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8d09 jne 0x127f8d13 */
  if (!C.zf) goto L_127f8d13;
  /* 127f8d0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8d0e jmp 0x127f8dc7 */
  goto L_127f8dc7;
L_127f8d13:;
  /* 127f8d13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8d16 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 127f8d19 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127f8d1f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127f8d25 mov eax, dword ptr [0x12813c98] */
  EAX = (r32((uint32_t)(0x12813c98)));
  /* 127f8d2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f8d2c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 127f8d30 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 127f8d36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f8d38 je 0x127f8d5c */
  if (C.zf) goto L_127f8d5c;
  /* 127f8d3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8d3d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 127f8d40 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127f8d46 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 127f8d49 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 127f8d4c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 127f8d4f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 127f8d53 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 127f8d5a jmp 0x127f8d6d */
  goto L_127f8d6d;
L_127f8d5c:;
  /* 127f8d5c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 127f8d5f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 127f8d62 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 127f8d66 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_127f8d6d:;
  /* 127f8d6d push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8d71 push 3 */
  push32((uint32_t)(0x3u));
  /* 127f8d73 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 127f8d76 push edx */
  push32((uint32_t)(EDX));
  /* 127f8d77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8d7a push eax */
  push32((uint32_t)(EAX));
  /* 127f8d7b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 127f8d7e push ecx */
  push32((uint32_t)(ECX));
  /* 127f8d7f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127f8d84 mov edx, dword ptr [0x12815a00] */
  EDX = (r32((uint32_t)(0x12815a00)));
  /* 127f8d8a push edx */
  push32((uint32_t)(EDX));
  /* 127f8d8b call 0x127f1850 */
  push32(0x127f8d90u); f_127f1850();
  /* 127f8d90 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8d93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f8d96 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8d9a jne 0x127f8da1 */
  if (!C.zf) goto L_127f8da1;
  /* 127f8d9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8d9f jmp 0x127f8dc7 */
  goto L_127f8dc7;
L_127f8da1:;
  /* 127f8da1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8da5 jne 0x127f8db1 */
  if (!C.zf) goto L_127f8db1;
  /* 127f8da7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8daa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f8daf jmp 0x127f8dc7 */
  goto L_127f8dc7;
L_127f8db1:;
  /* 127f8db1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8db4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f8db9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 127f8dbc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127f8dc2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 127f8dc5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_127f8dc7:;
  /* 127f8dc7 mov esp, ebp */
  ESP = (EBP);
  /* 127f8dc9 pop ebp */
  EBP = (pop32());
  /* 127f8dca ret  */
  ESPCHK(0x127f8ca0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x127f8dd0 (52 bytes, 19 insns) */
void f_127f8dd0(void) {
  FTRACE(0x127f8dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f8dd0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127f8dd4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 127f8dd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f8dda mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 127f8dde jne 0x127f8de9 */
  if (!C.zf) goto L_127f8de9;
  /* 127f8de0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 127f8de4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127f8de6 ret 0x10 */
  ESPCHK(0x127f8dd0u, _esp0);
  ESP += 20; return;
L_127f8de9:;
  /* 127f8de9 push ebx */
  push32((uint32_t)(EBX));
  /* 127f8dea mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127f8dec mov ebx, eax */
  EBX = (EAX);
  /* 127f8dee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127f8df2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127f8df6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8df8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127f8dfc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127f8dfe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8e00 pop ebx */
  EBX = (pop32());
  /* 127f8e01 ret 0x10 */
  ESPCHK(0x127f8dd0u, _esp0);
  ESP += 20; return;
}

/* FUN_10018e10 @ 0x127f8e10 (46 bytes, 18 insns) */
void f_127f8e10(void) {
  FTRACE(0x127f8e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f8e10 push ebp */
  push32((uint32_t)(EBP));
  /* 127f8e11 mov ebp, esp */
  EBP = (ESP);
  /* 127f8e13 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8e14 push 0xc */
  push32((uint32_t)(0xcu));
  /* 127f8e16 call 0x127ece60 */
  push32(0x127f8e1bu); f_127ece60();
  /* 127f8e1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8e1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8e21 push eax */
  push32((uint32_t)(EAX));
  /* 127f8e22 call 0x127f8e40 */
  push32(0x127f8e27u); f_127f8e40();
  /* 127f8e27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8e2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f8e2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 127f8e2f call 0x127ecf00 */
  push32(0x127f8e34u); f_127ecf00();
  /* 127f8e34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8e37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8e3a mov esp, ebp */
  ESP = (EBP);
  /* 127f8e3c pop ebp */
  EBP = (pop32());
  /* 127f8e3d ret  */
  ESPCHK(0x127f8e10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x127f8e40 (198 bytes, 69 insns) */
void f_127f8e40(void) {
  FTRACE(0x127f8e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f8e40 push ebp */
  push32((uint32_t)(EBP));
  /* 127f8e41 mov ebp, esp */
  EBP = (ESP);
  /* 127f8e43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f8e46 mov eax, dword ptr [0x12815820] */
  EAX = (r32((uint32_t)(0x12815820)));
  /* 127f8e4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f8e4e cmp dword ptr [0x12817320], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12817320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8e55 jne 0x127f8e5e */
  if (!C.zf) goto L_127f8e5e;
  /* 127f8e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8e59 jmp 0x127f8f02 */
  goto L_127f8f02;
L_127f8e5e:;
  /* 127f8e5e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8e62 jne 0x127f8e86 */
  if (!C.zf) goto L_127f8e86;
  /* 127f8e64 cmp dword ptr [0x12815828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8e6b je 0x127f8e86 */
  if (C.zf) goto L_127f8e86;
  /* 127f8e6d call 0x127f8f60 */
  push32(0x127f8e72u); f_127f8f60();
  /* 127f8e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f8e74 je 0x127f8e7d */
  if (C.zf) goto L_127f8e7d;
  /* 127f8e76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8e78 jmp 0x127f8f02 */
  goto L_127f8f02;
L_127f8e7d:;
  /* 127f8e7d mov ecx, dword ptr [0x12815820] */
  ECX = (r32((uint32_t)(0x12815820)));
  /* 127f8e83 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127f8e86:;
  /* 127f8e86 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8e8a je 0x127f8f00 */
  if (C.zf) goto L_127f8f00;
  /* 127f8e8c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8e90 je 0x127f8f00 */
  if (C.zf) goto L_127f8f00;
  /* 127f8e92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8e95 push edx */
  push32((uint32_t)(EDX));
  /* 127f8e96 call 0x127ec290 */
  push32(0x127f8e9bu); f_127ec290();
  /* 127f8e9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8e9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f8ea1:;
  /* 127f8ea1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f8ea4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8ea7 je 0x127f8f00 */
  if (C.zf) goto L_127f8f00;
  /* 127f8ea9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f8eac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f8eae push edx */
  push32((uint32_t)(EDX));
  /* 127f8eaf call 0x127ec290 */
  push32(0x127f8eb4u); f_127ec290();
  /* 127f8eb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8eb7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8eba jbe 0x127f8ef5 */
  if ((C.cf||C.zf)) goto L_127f8ef5;
  /* 127f8ebc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f8ebf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f8ec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8ec4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 127f8ec8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8ecb jne 0x127f8ef5 */
  if (!C.zf) goto L_127f8ef5;
  /* 127f8ecd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8ed1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8ed4 push edx */
  push32((uint32_t)(EDX));
  /* 127f8ed5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f8ed8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f8eda push ecx */
  push32((uint32_t)(ECX));
  /* 127f8edb call 0x127f8f10 */
  push32(0x127f8ee0u); f_127f8f10();
  /* 127f8ee0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8ee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f8ee5 jne 0x127f8ef5 */
  if (!C.zf) goto L_127f8ef5;
  /* 127f8ee7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f8eea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f8eec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8eef lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 127f8ef3 jmp 0x127f8f02 */
  goto L_127f8f02;
L_127f8ef5:;
  /* 127f8ef5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f8ef8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8efb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f8efe jmp 0x127f8ea1 */
  goto L_127f8ea1;
L_127f8f00:;
  /* 127f8f00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f8f02:;
  /* 127f8f02 mov esp, ebp */
  ESP = (EBP);
  /* 127f8f04 pop ebp */
  EBP = (pop32());
  /* 127f8f05 ret  */
  ESPCHK(0x127f8e40u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x127f8f10 (79 bytes, 32 insns) */
void f_127f8f10(void) {
  FTRACE(0x127f8f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f8f10 push ebp */
  push32((uint32_t)(EBP));
  /* 127f8f11 mov ebp, esp */
  EBP = (ESP);
  /* 127f8f13 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8f14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8f18 jne 0x127f8f1e */
  if (!C.zf) goto L_127f8f1e;
  /* 127f8f1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f8f1c jmp 0x127f8f5b */
  goto L_127f8f5b;
L_127f8f1e:;
  /* 127f8f1e mov eax, dword ptr [0x12816ee4] */
  EAX = (r32((uint32_t)(0x12816ee4)));
  /* 127f8f23 push eax */
  push32((uint32_t)(EAX));
  /* 127f8f24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f8f27 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8f28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f8f2b push edx */
  push32((uint32_t)(EDX));
  /* 127f8f2c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f8f2f push eax */
  push32((uint32_t)(EAX));
  /* 127f8f30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f8f33 push ecx */
  push32((uint32_t)(ECX));
  /* 127f8f34 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8f36 mov edx, dword ptr [0x12817184] */
  EDX = (r32((uint32_t)(0x12817184)));
  /* 127f8f3c push edx */
  push32((uint32_t)(EDX));
  /* 127f8f3d call 0x127f9010 */
  push32(0x127f8f42u); f_127f9010();
  /* 127f8f42 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8f45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f8f48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8f4c jne 0x127f8f55 */
  if (!C.zf) goto L_127f8f55;
  /* 127f8f4e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 127f8f53 jmp 0x127f8f5b */
  goto L_127f8f5b;
L_127f8f55:;
  /* 127f8f55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8f58 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_127f8f5b:;
  /* 127f8f5b mov esp, ebp */
  ESP = (EBP);
  /* 127f8f5d pop ebp */
  EBP = (pop32());
  /* 127f8f5e ret  */
  ESPCHK(0x127f8f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f60 @ 0x127f8f60 (174 bytes, 66 insns) */
void f_127f8f60(void) {
  FTRACE(0x127f8f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f8f60 push ebp */
  push32((uint32_t)(EBP));
  /* 127f8f61 mov ebp, esp */
  EBP = (ESP);
  /* 127f8f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f8f66 mov eax, dword ptr [0x12815828] */
  EAX = (r32((uint32_t)(0x12815828)));
  /* 127f8f6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f8f6e:;
  /* 127f8f6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8f71 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8f74 je 0x127f9008 */
  if (C.zf) goto L_127f9008;
  /* 127f8f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8f7c push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8f82 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f8f84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8f87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f8f89 push eax */
  push32((uint32_t)(EAX));
  /* 127f8f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8f8c push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8f8e call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f8f94u);
  /* 127f8f94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f8f97 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8f9b jne 0x127f8fa2 */
  if (!C.zf) goto L_127f8fa2;
  /* 127f8f9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f8fa0 jmp 0x127f900a */
  goto L_127f900a;
L_127f8fa2:;
  /* 127f8fa2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 127f8fa4 push 0x12811b7c */
  push32((uint32_t)(0x12811b7cu));
  /* 127f8fa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f8fab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8fae push ecx */
  push32((uint32_t)(ECX));
  /* 127f8faf call 0x127e9460 */
  push32(0x127f8fb4u); f_127e9460();
  /* 127f8fb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8fb7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f8fba cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f8fbe jne 0x127f8fc5 */
  if (!C.zf) goto L_127f8fc5;
  /* 127f8fc0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f8fc3 jmp 0x127f900a */
  goto L_127f900a;
L_127f8fc5:;
  /* 127f8fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8fc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f8fcc push edx */
  push32((uint32_t)(EDX));
  /* 127f8fcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f8fd0 push eax */
  push32((uint32_t)(EAX));
  /* 127f8fd1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f8fd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8fd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f8fd8 push edx */
  push32((uint32_t)(EDX));
  /* 127f8fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 127f8fdd call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f8fe3u);
  /* 127f8fe3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f8fe5 jne 0x127f8fec */
  if (!C.zf) goto L_127f8fec;
  /* 127f8fe7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f8fea jmp 0x127f900a */
  goto L_127f900a;
L_127f8fec:;
  /* 127f8fec push 0 */
  push32((uint32_t)(0x0u));
  /* 127f8fee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f8ff1 push eax */
  push32((uint32_t)(EAX));
  /* 127f8ff2 call 0x127f9460 */
  push32(0x127f8ff7u); f_127f9460();
  /* 127f8ff7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f8ffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f8ffd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9000 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f9003 jmp 0x127f8f6e */
  goto L_127f8f6e;
L_127f9008:;
  /* 127f9008 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f900a:;
  /* 127f900a mov esp, ebp */
  ESP = (EBP);
  /* 127f900c pop ebp */
  EBP = (pop32());
  /* 127f900d ret  */
  ESPCHK(0x127f8f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10019010 @ 0x127f9010 (970 bytes, 340 insns) */
void f_127f9010(void) {
  FTRACE(0x127f9010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f9010 push ebp */
  push32((uint32_t)(EBP));
  /* 127f9011 mov ebp, esp */
  EBP = (ESP);
  /* 127f9013 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f9015 push 0x12811bd0 */
  push32((uint32_t)(0x12811bd0u));
  /* 127f901a push 0x127f2568 */
  push32((uint32_t)(0x127f2568u));
  /* 127f901f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127f9025 push eax */
  push32((uint32_t)(EAX));
  /* 127f9026 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127f902d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9030 push ebx */
  push32((uint32_t)(EBX));
  /* 127f9031 push esi */
  push32((uint32_t)(ESI));
  /* 127f9032 push edi */
  push32((uint32_t)(EDI));
  /* 127f9033 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f9036 cmp dword ptr [0x12815b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f903d jne 0x127f9096 */
  if (!C.zf) goto L_127f9096;
  /* 127f903f push 1 */
  push32((uint32_t)(0x1u));
  /* 127f9041 push 0x12811228 */
  push32((uint32_t)(0x12811228u));
  /* 127f9046 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f9048 push 0x12811228 */
  push32((uint32_t)(0x12811228u));
  /* 127f904d push 0 */
  push32((uint32_t)(0x0u));
  /* 127f904f push 0 */
  push32((uint32_t)(0x0u));
  /* 127f9051 call dword ptr [0x128182a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182a0))), 0x127f9057u);
  /* 127f9057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f9059 je 0x127f9067 */
  if (C.zf) goto L_127f9067;
  /* 127f905b mov dword ptr [0x12815b64], 1 */
  w32((uint32_t)(0x12815b64), (0x1u));
  /* 127f9065 jmp 0x127f9096 */
  goto L_127f9096;
L_127f9067:;
  /* 127f9067 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f9069 push 0x12811224 */
  push32((uint32_t)(0x12811224u));
  /* 127f906e push 1 */
  push32((uint32_t)(0x1u));
  /* 127f9070 push 0x12811224 */
  push32((uint32_t)(0x12811224u));
  /* 127f9075 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f9077 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f9079 call dword ptr [0x128182a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182a4))), 0x127f907fu);
  /* 127f907f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f9081 je 0x127f908f */
  if (C.zf) goto L_127f908f;
  /* 127f9083 mov dword ptr [0x12815b64], 2 */
  w32((uint32_t)(0x12815b64), (0x2u));
  /* 127f908d jmp 0x127f9096 */
  goto L_127f9096;
L_127f908f:;
  /* 127f908f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f9091 jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f9096:;
  /* 127f9096 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f909a jle 0x127f90af */
  if ((C.zf||C.sf!=C.of)) goto L_127f90af;
  /* 127f909c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f909f push eax */
  push32((uint32_t)(EAX));
  /* 127f90a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f90a3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f90a4 call 0x127f9410 */
  push32(0x127f90a9u); f_127f9410();
  /* 127f90a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f90ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_127f90af:;
  /* 127f90af cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f90b3 jle 0x127f90c8 */
  if ((C.zf||C.sf!=C.of)) goto L_127f90c8;
  /* 127f90b5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f90b8 push edx */
  push32((uint32_t)(EDX));
  /* 127f90b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f90bc push eax */
  push32((uint32_t)(EAX));
  /* 127f90bd call 0x127f9410 */
  push32(0x127f90c2u); f_127f9410();
  /* 127f90c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f90c5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_127f90c8:;
  /* 127f90c8 cmp dword ptr [0x12815b64], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12815b64))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f90cf jne 0x127f90f4 */
  if (!C.zf) goto L_127f90f4;
  /* 127f90d1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f90d4 push ecx */
  push32((uint32_t)(ECX));
  /* 127f90d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f90d8 push edx */
  push32((uint32_t)(EDX));
  /* 127f90d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f90dc push eax */
  push32((uint32_t)(EAX));
  /* 127f90dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f90e0 push ecx */
  push32((uint32_t)(ECX));
  /* 127f90e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f90e4 push edx */
  push32((uint32_t)(EDX));
  /* 127f90e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f90e8 push eax */
  push32((uint32_t)(EAX));
  /* 127f90e9 call dword ptr [0x128182a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182a4))), 0x127f90efu);
  /* 127f90ef jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f90f4:;
  /* 127f90f4 cmp dword ptr [0x12815b64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12815b64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f90fb jne 0x127f93f2 */
  if (!C.zf) goto L_127f93f2;
  /* 127f9101 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9105 jne 0x127f9110 */
  if (!C.zf) goto L_127f9110;
  /* 127f9107 mov ecx, dword ptr [0x12815a10] */
  ECX = (r32((uint32_t)(0x12815a10)));
  /* 127f910d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_127f9110:;
  /* 127f9110 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9114 je 0x127f9120 */
  if (C.zf) goto L_127f9120;
  /* 127f9116 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f911a jne 0x127f929c */
  if (!C.zf) goto L_127f929c;
L_127f9120:;
  /* 127f9120 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f9123 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9126 jne 0x127f9132 */
  if (!C.zf) goto L_127f9132;
  /* 127f9128 mov eax, 2 */
  EAX = (0x2u);
  /* 127f912d jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f9132:;
  /* 127f9132 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9136 jle 0x127f9142 */
  if ((C.zf||C.sf!=C.of)) goto L_127f9142;
  /* 127f9138 mov eax, 1 */
  EAX = (0x1u);
  /* 127f913d jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f9142:;
  /* 127f9142 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9146 jle 0x127f9152 */
  if ((C.zf||C.sf!=C.of)) goto L_127f9152;
  /* 127f9148 mov eax, 3 */
  EAX = (0x3u);
  /* 127f914d jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f9152:;
  /* 127f9152 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 127f9155 push eax */
  push32((uint32_t)(EAX));
  /* 127f9156 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 127f9159 push ecx */
  push32((uint32_t)(ECX));
  /* 127f915a call dword ptr [0x128182fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182fc))), 0x127f9160u);
  /* 127f9160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f9162 jne 0x127f916b */
  if (!C.zf) goto L_127f916b;
  /* 127f9164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f9166 jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f916b:;
  /* 127f916b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f916f jne 0x127f9177 */
  if (!C.zf) goto L_127f9177;
  /* 127f9171 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9175 je 0x127f91a4 */
  if (C.zf) goto L_127f91a4;
L_127f9177:;
  /* 127f9177 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f917b jne 0x127f9183 */
  if (!C.zf) goto L_127f9183;
  /* 127f917d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9181 je 0x127f91a4 */
  if (C.zf) goto L_127f91a4;
L_127f9183:;
  /* 127f9183 push 0x12811b90 */
  push32((uint32_t)(0x12811b90u));
  /* 127f9188 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f918a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 127f918f push 0x12811b88 */
  push32((uint32_t)(0x12811b88u));
  /* 127f9194 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f9196 call 0x127e8520 */
  push32(0x127f919bu); f_127e8520();
  /* 127f919b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f919e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f91a1 jne 0x127f91a4 */
  if (!C.zf) goto L_127f91a4;
  /* 127f91a3 int3  */
  x86_unimpl("int3 @ 0x127f91a3");
L_127f91a4:;
  /* 127f91a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f91a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f91a8 jne 0x127f916b */
  if (!C.zf) goto L_127f916b;
  /* 127f91aa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f91ae jle 0x127f9223 */
  if ((C.zf||C.sf!=C.of)) goto L_127f9223;
  /* 127f91b0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f91b4 jae 0x127f91c0 */
  if (!C.cf) goto L_127f91c0;
  /* 127f91b6 mov eax, 3 */
  EAX = (0x3u);
  /* 127f91bb jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f91c0:;
  /* 127f91c0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 127f91c3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 127f91c6 jmp 0x127f91d1 */
  goto L_127f91d1;
L_127f91c8:;
  /* 127f91c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 127f91cb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f91ce mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_127f91d1:;
  /* 127f91d1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 127f91d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f91d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f91d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f91da je 0x127f9219 */
  if (C.zf) goto L_127f9219;
  /* 127f91dc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 127f91df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f91e1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 127f91e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f91e6 je 0x127f9219 */
  if (C.zf) goto L_127f9219;
  /* 127f91e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f91eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f91ed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f91ef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 127f91f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f91f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f91f6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f91f8 jl 0x127f9217 */
  if ((C.sf!=C.of)) goto L_127f9217;
  /* 127f91fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f91fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f91ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f9201 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 127f9204 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f9206 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127f9209 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f920b jg 0x127f9217 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f9217;
  /* 127f920d mov eax, 2 */
  EAX = (0x2u);
  /* 127f9212 jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f9217:;
  /* 127f9217 jmp 0x127f91c8 */
  goto L_127f91c8;
L_127f9219:;
  /* 127f9219 mov eax, 3 */
  EAX = (0x3u);
  /* 127f921e jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f9223:;
  /* 127f9223 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9227 jle 0x127f929c */
  if ((C.zf||C.sf!=C.of)) goto L_127f929c;
  /* 127f9229 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f922d jae 0x127f9239 */
  if (!C.cf) goto L_127f9239;
  /* 127f922f mov eax, 1 */
  EAX = (0x1u);
  /* 127f9234 jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f9239:;
  /* 127f9239 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 127f923c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 127f923f jmp 0x127f924a */
  goto L_127f924a;
L_127f9241:;
  /* 127f9241 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 127f9244 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9247 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_127f924a:;
  /* 127f924a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 127f924d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f924f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f9251 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f9253 je 0x127f9292 */
  if (C.zf) goto L_127f9292;
  /* 127f9255 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 127f9258 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f925a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127f925d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f925f je 0x127f9292 */
  if (C.zf) goto L_127f9292;
  /* 127f9261 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f9264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f9266 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f9268 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 127f926b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f926d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f926f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9271 jl 0x127f9290 */
  if ((C.sf!=C.of)) goto L_127f9290;
  /* 127f9273 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f9276 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f9278 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f927a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 127f927d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f927f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127f9282 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9284 jg 0x127f9290 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f9290;
  /* 127f9286 mov eax, 2 */
  EAX = (0x2u);
  /* 127f928b jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f9290:;
  /* 127f9290 jmp 0x127f9241 */
  goto L_127f9241;
L_127f9292:;
  /* 127f9292 mov eax, 1 */
  EAX = (0x1u);
  /* 127f9297 jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f929c:;
  /* 127f929c push 0 */
  push32((uint32_t)(0x0u));
  /* 127f929e push 0 */
  push32((uint32_t)(0x0u));
  /* 127f92a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f92a3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f92a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f92a7 push edx */
  push32((uint32_t)(EDX));
  /* 127f92a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 127f92aa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127f92ad push eax */
  push32((uint32_t)(EAX));
  /* 127f92ae call dword ptr [0x128182f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f0))), 0x127f92b4u);
  /* 127f92b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127f92b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f92bb jne 0x127f92c4 */
  if (!C.zf) goto L_127f92c4;
  /* 127f92bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f92bf jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f92c4:;
  /* 127f92c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f92cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f92ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127f92d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f92d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127f92d5 call 0x127ec600 */
  push32(0x127f92dau); f_127ec600();
  /* 127f92da mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 127f92dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f92e0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 127f92e3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127f92e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f92ed jmp 0x127f9306 */
  goto L_127f9306;
  /* 127f92ef mov eax, 1 */
  EAX = (0x1u);
  /* 127f92f4 ret  */
  ESPCHK(0x127f9010u, _esp0);
  ESP += 4; return;
  /* 127f92f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127f92f8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127f92ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f9306:;
  /* 127f9306 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f930a jne 0x127f9313 */
  if (!C.zf) goto L_127f9313;
  /* 127f930c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f930e jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f9313:;
  /* 127f9313 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f9316 push edx */
  push32((uint32_t)(EDX));
  /* 127f9317 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f931a push eax */
  push32((uint32_t)(EAX));
  /* 127f931b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f931e push ecx */
  push32((uint32_t)(ECX));
  /* 127f931f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f9322 push edx */
  push32((uint32_t)(EDX));
  /* 127f9323 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f9325 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127f9328 push eax */
  push32((uint32_t)(EAX));
  /* 127f9329 call dword ptr [0x128182f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f0))), 0x127f932fu);
  /* 127f932f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f9331 jne 0x127f933a */
  if (!C.zf) goto L_127f933a;
  /* 127f9333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f9335 jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f933a:;
  /* 127f933a push 0 */
  push32((uint32_t)(0x0u));
  /* 127f933c push 0 */
  push32((uint32_t)(0x0u));
  /* 127f933e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f9341 push ecx */
  push32((uint32_t)(ECX));
  /* 127f9342 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f9345 push edx */
  push32((uint32_t)(EDX));
  /* 127f9346 push 9 */
  push32((uint32_t)(0x9u));
  /* 127f9348 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127f934b push eax */
  push32((uint32_t)(EAX));
  /* 127f934c call dword ptr [0x128182f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f0))), 0x127f9352u);
  /* 127f9352 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127f9355 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9359 jne 0x127f9362 */
  if (!C.zf) goto L_127f9362;
  /* 127f935b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f935d jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f9362:;
  /* 127f9362 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127f9369 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f936c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127f936e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9371 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127f9373 call 0x127ec600 */
  push32(0x127f9378u); f_127ec600();
  /* 127f9378 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 127f937b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f937e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 127f9381 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 127f9384 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f938b jmp 0x127f93a4 */
  goto L_127f93a4;
  /* 127f938d mov eax, 1 */
  EAX = (0x1u);
  /* 127f9392 ret  */
  ESPCHK(0x127f9010u, _esp0);
  ESP += 4; return;
  /* 127f9393 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127f9396 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 127f939d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f93a4:;
  /* 127f93a4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f93a8 jne 0x127f93ae */
  if (!C.zf) goto L_127f93ae;
  /* 127f93aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f93ac jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f93ae:;
  /* 127f93ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f93b1 push edx */
  push32((uint32_t)(EDX));
  /* 127f93b2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f93b5 push eax */
  push32((uint32_t)(EAX));
  /* 127f93b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f93b9 push ecx */
  push32((uint32_t)(ECX));
  /* 127f93ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f93bd push edx */
  push32((uint32_t)(EDX));
  /* 127f93be push 1 */
  push32((uint32_t)(0x1u));
  /* 127f93c0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127f93c3 push eax */
  push32((uint32_t)(EAX));
  /* 127f93c4 call dword ptr [0x128182f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f0))), 0x127f93cau);
  /* 127f93ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f93cc jne 0x127f93d2 */
  if (!C.zf) goto L_127f93d2;
  /* 127f93ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f93d0 jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f93d2:;
  /* 127f93d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f93d5 push ecx */
  push32((uint32_t)(ECX));
  /* 127f93d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f93d9 push edx */
  push32((uint32_t)(EDX));
  /* 127f93da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f93dd push eax */
  push32((uint32_t)(EAX));
  /* 127f93de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f93e1 push ecx */
  push32((uint32_t)(ECX));
  /* 127f93e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f93e5 push edx */
  push32((uint32_t)(EDX));
  /* 127f93e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f93e9 push eax */
  push32((uint32_t)(EAX));
  /* 127f93ea call dword ptr [0x128182a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182a0))), 0x127f93f0u);
  /* 127f93f0 jmp 0x127f93f4 */
  goto L_127f93f4;
L_127f93f2:;
  /* 127f93f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f93f4:;
  /* 127f93f4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 127f93f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f93fa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127f9401 pop edi */
  EDI = (pop32());
  /* 127f9402 pop esi */
  ESI = (pop32());
  /* 127f9403 pop ebx */
  EBX = (pop32());
  /* 127f9404 mov esp, ebp */
  ESP = (EBP);
  /* 127f9406 pop ebp */
  EBP = (pop32());
  /* 127f9407 ret  */
  ESPCHK(0x127f9010u, _esp0);
  ESP += 4; return;
}

/* FUN_10019410 @ 0x127f9410 (80 bytes, 32 insns) */
void f_127f9410(void) {
  FTRACE(0x127f9410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f9410 push ebp */
  push32((uint32_t)(EBP));
  /* 127f9411 mov ebp, esp */
  EBP = (ESP);
  /* 127f9413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f9416 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f9419 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f941c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f941f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127f9422:;
  /* 127f9422 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f9425 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f9428 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f942b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f942e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f9430 je 0x127f9447 */
  if (C.zf) goto L_127f9447;
  /* 127f9432 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f9435 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f9438 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f943a je 0x127f9447 */
  if (C.zf) goto L_127f9447;
  /* 127f943c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f943f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9442 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f9445 jmp 0x127f9422 */
  goto L_127f9422;
L_127f9447:;
  /* 127f9447 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f944a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f944d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f944f jne 0x127f9459 */
  if (!C.zf) goto L_127f9459;
  /* 127f9451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f9454 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f9457 jmp 0x127f945c */
  goto L_127f945c;
L_127f9459:;
  /* 127f9459 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_127f945c:;
  /* 127f945c mov esp, ebp */
  ESP = (EBP);
  /* 127f945e pop ebp */
  EBP = (pop32());
  /* 127f945f ret  */
  ESPCHK(0x127f9410u, _esp0);
  ESP += 4; return;
}

/* FUN_10019460 @ 0x127f9460 (736 bytes, 224 insns) */
void f_127f9460(void) {
  FTRACE(0x127f9460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f9460 push ebp */
  push32((uint32_t)(EBP));
  /* 127f9461 mov ebp, esp */
  EBP = (ESP);
  /* 127f9463 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f9466 push esi */
  push32((uint32_t)(ESI));
  /* 127f9467 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f946b je 0x127f948c */
  if (C.zf) goto L_127f948c;
  /* 127f946d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 127f946f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f9472 push eax */
  push32((uint32_t)(EAX));
  /* 127f9473 call 0x127f98b0 */
  push32(0x127f9478u); f_127f98b0();
  /* 127f9478 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f947b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127f947e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9482 je 0x127f948c */
  if (C.zf) goto L_127f948c;
  /* 127f9484 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f9487 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f948a jne 0x127f9494 */
  if (!C.zf) goto L_127f9494;
L_127f948c:;
  /* 127f948c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f948f jmp 0x127f973b */
  goto L_127f973b;
L_127f9494:;
  /* 127f9494 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f9497 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127f949b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f949d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f949f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 127f94a0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127f94a3 mov ecx, dword ptr [0x12815820] */
  ECX = (r32((uint32_t)(0x12815820)));
  /* 127f94a9 cmp ecx, dword ptr [0x12815824] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12815824))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f94af jne 0x127f94c5 */
  if (!C.zf) goto L_127f94c5;
  /* 127f94b1 mov edx, dword ptr [0x12815820] */
  EDX = (r32((uint32_t)(0x12815820)));
  /* 127f94b7 push edx */
  push32((uint32_t)(EDX));
  /* 127f94b8 call 0x127f97c0 */
  push32(0x127f94bdu); f_127f97c0();
  /* 127f94bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f94c0 mov dword ptr [0x12815820], eax */
  w32((uint32_t)(0x12815820), (EAX));
L_127f94c5:;
  /* 127f94c5 cmp dword ptr [0x12815820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f94cc jne 0x127f9585 */
  if (!C.zf) goto L_127f9585;
  /* 127f94d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f94d6 je 0x127f94f7 */
  if (C.zf) goto L_127f94f7;
  /* 127f94d8 cmp dword ptr [0x12815828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f94df je 0x127f94f7 */
  if (C.zf) goto L_127f94f7;
  /* 127f94e1 call 0x127f8f60 */
  push32(0x127f94e6u); f_127f8f60();
  /* 127f94e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f94e8 je 0x127f94f2 */
  if (C.zf) goto L_127f94f2;
  /* 127f94ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f94ed jmp 0x127f973b */
  goto L_127f973b;
L_127f94f2:;
  /* 127f94f2 jmp 0x127f9585 */
  goto L_127f9585;
L_127f94f7:;
  /* 127f94f7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f94fb je 0x127f9504 */
  if (C.zf) goto L_127f9504;
  /* 127f94fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f94ff jmp 0x127f973b */
  goto L_127f973b;
L_127f9504:;
  /* 127f9504 cmp dword ptr [0x12815820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f950b jne 0x127f9544 */
  if (!C.zf) goto L_127f9544;
  /* 127f950d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 127f9512 push 0x12811be8 */
  push32((uint32_t)(0x12811be8u));
  /* 127f9517 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f9519 push 4 */
  push32((uint32_t)(0x4u));
  /* 127f951b call 0x127e9460 */
  push32(0x127f9520u); f_127e9460();
  /* 127f9520 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9523 mov dword ptr [0x12815820], eax */
  w32((uint32_t)(0x12815820), (EAX));
  /* 127f9528 cmp dword ptr [0x12815820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f952f jne 0x127f9539 */
  if (!C.zf) goto L_127f9539;
  /* 127f9531 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f9534 jmp 0x127f973b */
  goto L_127f973b;
L_127f9539:;
  /* 127f9539 mov eax, dword ptr [0x12815820] */
  EAX = (r32((uint32_t)(0x12815820)));
  /* 127f953e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_127f9544:;
  /* 127f9544 cmp dword ptr [0x12815828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f954b jne 0x127f9585 */
  if (!C.zf) goto L_127f9585;
  /* 127f954d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 127f9552 push 0x12811be8 */
  push32((uint32_t)(0x12811be8u));
  /* 127f9557 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f9559 push 4 */
  push32((uint32_t)(0x4u));
  /* 127f955b call 0x127e9460 */
  push32(0x127f9560u); f_127e9460();
  /* 127f9560 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9563 mov dword ptr [0x12815828], eax */
  w32((uint32_t)(0x12815828), (EAX));
  /* 127f9568 cmp dword ptr [0x12815828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f956f jne 0x127f9579 */
  if (!C.zf) goto L_127f9579;
  /* 127f9571 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f9574 jmp 0x127f973b */
  goto L_127f973b;
L_127f9579:;
  /* 127f9579 mov ecx, dword ptr [0x12815828] */
  ECX = (r32((uint32_t)(0x12815828)));
  /* 127f957f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_127f9585:;
  /* 127f9585 mov edx, dword ptr [0x12815820] */
  EDX = (r32((uint32_t)(0x12815820)));
  /* 127f958b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127f958e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f9591 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f9594 push eax */
  push32((uint32_t)(EAX));
  /* 127f9595 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f9598 push ecx */
  push32((uint32_t)(ECX));
  /* 127f9599 call 0x127f9740 */
  push32(0x127f959eu); f_127f9740();
  /* 127f959e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f95a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f95a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f95a8 jl 0x127f9641 */
  if ((C.sf!=C.of)) goto L_127f9641;
  /* 127f95ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f95b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f95b4 je 0x127f9641 */
  if (C.zf) goto L_127f9641;
  /* 127f95ba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f95be je 0x127f9633 */
  if (C.zf) goto L_127f9633;
  /* 127f95c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f95c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f95c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f95c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127f95cb push edx */
  push32((uint32_t)(EDX));
  /* 127f95cc call 0x127e9ef0 */
  push32(0x127f95d1u); f_127e9ef0();
  /* 127f95d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f95d4 jmp 0x127f95df */
  goto L_127f95df;
L_127f95d6:;
  /* 127f95d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f95d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f95dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127f95df:;
  /* 127f95df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f95e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f95e5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f95e9 je 0x127f9600 */
  if (C.zf) goto L_127f9600;
  /* 127f95eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f95ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f95f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f95f4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 127f95f7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 127f95fb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 127f95fe jmp 0x127f95d6 */
  goto L_127f95d6;
L_127f9600:;
  /* 127f9600 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 127f9605 push 0x12811be8 */
  push32((uint32_t)(0x12811be8u));
  /* 127f960a push 2 */
  push32((uint32_t)(0x2u));
  /* 127f960c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f960f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 127f9612 push eax */
  push32((uint32_t)(EAX));
  /* 127f9613 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f9616 push ecx */
  push32((uint32_t)(ECX));
  /* 127f9617 call 0x127e98f0 */
  push32(0x127f961cu); f_127e98f0();
  /* 127f961c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f961f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f9622 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9626 je 0x127f9631 */
  if (C.zf) goto L_127f9631;
  /* 127f9628 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f962b mov dword ptr [0x12815820], edx */
  w32((uint32_t)(0x12815820), (EDX));
L_127f9631:;
  /* 127f9631 jmp 0x127f963f */
  goto L_127f963f;
L_127f9633:;
  /* 127f9633 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f9636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f9639 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f963c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_127f963f:;
  /* 127f963f jmp 0x127f96b4 */
  goto L_127f96b4;
L_127f9641:;
  /* 127f9641 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9645 jne 0x127f96ad */
  if (!C.zf) goto L_127f96ad;
  /* 127f9647 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f964b jge 0x127f9655 */
  if ((C.sf==C.of)) goto L_127f9655;
  /* 127f964d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f9650 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f9652 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127f9655:;
  /* 127f9655 push 0xce */
  push32((uint32_t)(0xceu));
  /* 127f965a push 0x12811be8 */
  push32((uint32_t)(0x12811be8u));
  /* 127f965f push 2 */
  push32((uint32_t)(0x2u));
  /* 127f9661 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f9664 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 127f966b push edx */
  push32((uint32_t)(EDX));
  /* 127f966c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f966f push eax */
  push32((uint32_t)(EAX));
  /* 127f9670 call 0x127e98f0 */
  push32(0x127f9675u); f_127e98f0();
  /* 127f9675 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9678 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f967b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f967f jne 0x127f9689 */
  if (!C.zf) goto L_127f9689;
  /* 127f9681 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f9684 jmp 0x127f973b */
  goto L_127f973b;
L_127f9689:;
  /* 127f9689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f968c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f968f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f9692 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 127f9695 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f9698 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f969b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 127f96a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f96a6 mov dword ptr [0x12815820], eax */
  w32((uint32_t)(0x12815820), (EAX));
  /* 127f96ab jmp 0x127f96b4 */
  goto L_127f96b4;
L_127f96ad:;
  /* 127f96ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f96af jmp 0x127f973b */
  goto L_127f973b;
L_127f96b4:;
  /* 127f96b4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f96b8 je 0x127f9739 */
  if (C.zf) goto L_127f9739;
  /* 127f96ba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 127f96bf push 0x12811be8 */
  push32((uint32_t)(0x12811be8u));
  /* 127f96c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f96c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f96c9 push ecx */
  push32((uint32_t)(ECX));
  /* 127f96ca call 0x127ec290 */
  push32(0x127f96cfu); f_127ec290();
  /* 127f96cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f96d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f96d5 push eax */
  push32((uint32_t)(EAX));
  /* 127f96d6 call 0x127e9460 */
  push32(0x127f96dbu); f_127e9460();
  /* 127f96db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f96de mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127f96e1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f96e5 je 0x127f9739 */
  if (C.zf) goto L_127f9739;
  /* 127f96e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f96ea push edx */
  push32((uint32_t)(EDX));
  /* 127f96eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f96ee push eax */
  push32((uint32_t)(EAX));
  /* 127f96ef call 0x127ec410 */
  push32(0x127f96f4u); f_127ec410();
  /* 127f96f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f96f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f96fa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f96fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f9700 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9702 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f9705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f9708 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127f970b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f970e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9711 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f9714 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f9717 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f9719 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f971b not edx */
  EDX = (~(EDX));
  /* 127f971d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 127f9720 push edx */
  push32((uint32_t)(EDX));
  /* 127f9721 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f9724 push eax */
  push32((uint32_t)(EAX));
  /* 127f9725 call dword ptr [0x1281829c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1281829c))), 0x127f972bu);
  /* 127f972b push 2 */
  push32((uint32_t)(0x2u));
  /* 127f972d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f9730 push ecx */
  push32((uint32_t)(ECX));
  /* 127f9731 call 0x127e9ef0 */
  push32(0x127f9736u); f_127e9ef0();
  /* 127f9736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f9739:;
  /* 127f9739 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f973b:;
  /* 127f973b pop esi */
  ESI = (pop32());
  /* 127f973c mov esp, ebp */
  ESP = (EBP);
  /* 127f973e pop ebp */
  EBP = (pop32());
  /* 127f973f ret  */
  ESPCHK(0x127f9460u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x127f9740 (124 bytes, 47 insns) */
void f_127f9740(void) {
  FTRACE(0x127f9740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f9740 push ebp */
  push32((uint32_t)(EBP));
  /* 127f9741 mov ebp, esp */
  EBP = (ESP);
  /* 127f9743 push ecx */
  push32((uint32_t)(ECX));
  /* 127f9744 mov eax, dword ptr [0x12815820] */
  EAX = (r32((uint32_t)(0x12815820)));
  /* 127f9749 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f974c jmp 0x127f9757 */
  goto L_127f9757;
L_127f974e:;
  /* 127f974e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f9751 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9754 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127f9757:;
  /* 127f9757 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f975a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f975d je 0x127f97aa */
  if (C.zf) goto L_127f97aa;
  /* 127f975f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f9762 push eax */
  push32((uint32_t)(EAX));
  /* 127f9763 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f9766 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f9768 push edx */
  push32((uint32_t)(EDX));
  /* 127f9769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f976c push eax */
  push32((uint32_t)(EAX));
  /* 127f976d call 0x127f8f10 */
  push32(0x127f9772u); f_127f8f10();
  /* 127f9772 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f9777 jne 0x127f97a8 */
  if (!C.zf) goto L_127f97a8;
  /* 127f9779 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f977c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f977e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f9781 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 127f9785 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9788 je 0x127f979a */
  if (C.zf) goto L_127f979a;
  /* 127f978a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f978d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f978f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f9792 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 127f9796 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f9798 jne 0x127f97a8 */
  if (!C.zf) goto L_127f97a8;
L_127f979a:;
  /* 127f979a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f979d sub eax, dword ptr [0x12815820] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12815820))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f97a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 127f97a6 jmp 0x127f97b8 */
  goto L_127f97b8;
L_127f97a8:;
  /* 127f97a8 jmp 0x127f974e */
  goto L_127f974e;
L_127f97aa:;
  /* 127f97aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f97ad sub eax, dword ptr [0x12815820] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12815820))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f97b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 127f97b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_127f97b8:;
  /* 127f97b8 mov esp, ebp */
  ESP = (EBP);
  /* 127f97ba pop ebp */
  EBP = (pop32());
  /* 127f97bb ret  */
  ESPCHK(0x127f9740u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x127f97c0 (238 bytes, 80 insns) */
void f_127f97c0(void) {
  FTRACE(0x127f97c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f97c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f97c1 mov ebp, esp */
  EBP = (ESP);
  /* 127f97c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f97c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f97cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f97d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f97d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f97d7 jne 0x127f97e0 */
  if (!C.zf) goto L_127f97e0;
  /* 127f97d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f97db jmp 0x127f98aa */
  goto L_127f98aa;
L_127f97e0:;
  /* 127f97e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f97e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f97e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f97e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f97eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f97ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f97f0 je 0x127f97fd */
  if (C.zf) goto L_127f97fd;
  /* 127f97f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f97f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f97f8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127f97fb jmp 0x127f97e0 */
  goto L_127f97e0;
L_127f97fd:;
  /* 127f97fd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 127f9802 push 0x12811be8 */
  push32((uint32_t)(0x12811be8u));
  /* 127f9807 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f9809 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f980c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 127f9813 push eax */
  push32((uint32_t)(EAX));
  /* 127f9814 call 0x127e9460 */
  push32(0x127f9819u); f_127e9460();
  /* 127f9819 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f981c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f981f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f9822 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f9825 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9829 jne 0x127f9835 */
  if (!C.zf) goto L_127f9835;
  /* 127f982b push 9 */
  push32((uint32_t)(0x9u));
  /* 127f982d call 0x127e83d0 */
  push32(0x127f9832u); f_127e83d0();
  /* 127f9832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f9835:;
  /* 127f9835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f9838 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127f983b:;
  /* 127f983b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f983e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9841 je 0x127f989e */
  if (C.zf) goto L_127f989e;
  /* 127f9843 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 127f9848 push 0x12811be8 */
  push32((uint32_t)(0x12811be8u));
  /* 127f984d push 2 */
  push32((uint32_t)(0x2u));
  /* 127f984f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f9852 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f9854 push edx */
  push32((uint32_t)(EDX));
  /* 127f9855 call 0x127ec290 */
  push32(0x127f985au); f_127ec290();
  /* 127f985a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f985d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9860 push eax */
  push32((uint32_t)(EAX));
  /* 127f9861 call 0x127e9460 */
  push32(0x127f9866u); f_127e9460();
  /* 127f9866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f986c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127f986e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f9871 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9874 je 0x127f988a */
  if (C.zf) goto L_127f988a;
  /* 127f9876 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f9879 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f987b push ecx */
  push32((uint32_t)(ECX));
  /* 127f987c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f987f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f9881 push eax */
  push32((uint32_t)(EAX));
  /* 127f9882 call 0x127ec410 */
  push32(0x127f9887u); f_127ec410();
  /* 127f9887 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f988a:;
  /* 127f988a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f988d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9890 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f9893 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f9896 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9899 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f989c jmp 0x127f983b */
  goto L_127f983b;
L_127f989e:;
  /* 127f989e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f98a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127f98a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127f98aa:;
  /* 127f98aa mov esp, ebp */
  ESP = (EBP);
  /* 127f98ac pop ebp */
  EBP = (pop32());
  /* 127f98ad ret  */
  ESPCHK(0x127f97c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100198b0 @ 0x127f98b0 (237 bytes, 81 insns) */
void f_127f98b0(void) {
  FTRACE(0x127f98b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f98b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f98b1 mov ebp, esp */
  EBP = (ESP);
  /* 127f98b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f98b4 cmp dword ptr [0x12816f6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12816f6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f98bb jne 0x127f98d2 */
  if (!C.zf) goto L_127f98d2;
  /* 127f98bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f98c0 push eax */
  push32((uint32_t)(EAX));
  /* 127f98c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f98c4 push ecx */
  push32((uint32_t)(ECX));
  /* 127f98c5 call 0x127f99b0 */
  push32(0x127f98cau); f_127f99b0();
  /* 127f98ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f98cd jmp 0x127f9999 */
  goto L_127f9999;
L_127f98d2:;
  /* 127f98d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127f98d4 call 0x127ece60 */
  push32(0x127f98d9u); f_127ece60();
  /* 127f98d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f98dc jmp 0x127f98e7 */
  goto L_127f98e7;
L_127f98de:;
  /* 127f98de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f98e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f98e4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_127f98e7:;
  /* 127f98e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f98ea movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 127f98ee mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 127f98f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f98f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127f98fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f98fd je 0x127f997b */
  if (C.zf) goto L_127f997b;
  /* 127f98ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f9902 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f9907 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f9909 mov cl, byte ptr [eax + 0x12817081] */
  CL = (r8((uint32_t)(EAX + 0x12817081)));
  /* 127f990f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127f9912 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f9914 je 0x127f9966 */
  if (C.zf) goto L_127f9966;
  /* 127f9916 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f9919 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f991c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127f991f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f9922 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f9924 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f9926 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f9928 jne 0x127f9938 */
  if (!C.zf) goto L_127f9938;
  /* 127f992a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127f992c call 0x127ecf00 */
  push32(0x127f9931u); f_127ecf00();
  /* 127f9931 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f9936 jmp 0x127f9999 */
  goto L_127f9999;
L_127f9938:;
  /* 127f9938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f993b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127f9941 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 127f9944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f9947 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f9949 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f994b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127f994d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9950 jne 0x127f9964 */
  if (!C.zf) goto L_127f9964;
  /* 127f9952 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127f9954 call 0x127ecf00 */
  push32(0x127f9959u); f_127ecf00();
  /* 127f9959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f995c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f995f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f9962 jmp 0x127f9999 */
  goto L_127f9999;
L_127f9964:;
  /* 127f9964 jmp 0x127f9976 */
  goto L_127f9976;
L_127f9966:;
  /* 127f9966 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f9969 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127f996f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9972 jne 0x127f9976 */
  if (!C.zf) goto L_127f9976;
  /* 127f9974 jmp 0x127f997b */
  goto L_127f997b;
L_127f9976:;
  /* 127f9976 jmp 0x127f98de */
  goto L_127f98de;
L_127f997b:;
  /* 127f997b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127f997d call 0x127ecf00 */
  push32(0x127f9982u); f_127ecf00();
  /* 127f9982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9985 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f9988 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f998d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f9990 jne 0x127f9997 */
  if (!C.zf) goto L_127f9997;
  /* 127f9992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f9995 jmp 0x127f9999 */
  goto L_127f9999;
L_127f9997:;
  /* 127f9997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f9999:;
  /* 127f9999 mov esp, ebp */
  ESP = (EBP);
  /* 127f999b pop ebp */
  EBP = (pop32());
  /* 127f999c ret  */
  ESPCHK(0x127f98b0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x127f99b0 (193 bytes, 87 insns) */
void f_127f99b0(void) {
  FTRACE(0x127f99b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f99b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f99b2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 127f99b6 push ebx */
  push32((uint32_t)(EBX));
  /* 127f99b7 mov ebx, eax */
  EBX = (EAX);
  /* 127f99b9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 127f99bc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 127f99c0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 127f99c6 je 0x127f99db */
  if (C.zf) goto L_127f99db;
L_127f99c8:;
  /* 127f99c8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 127f99ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 127f99cb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f99cd je 0x127f99a0 */
  if (C.zf) { jmp_ind(0x127f99a0u); return; }
  /* 127f99cf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 127f99d1 je 0x127f9a24 */
  if (C.zf) goto L_127f9a24;
  /* 127f99d3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 127f99d9 jne 0x127f99c8 */
  if (!C.zf) goto L_127f99c8;
L_127f99db:;
  /* 127f99db or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 127f99dd push edi */
  push32((uint32_t)(EDI));
  /* 127f99de mov eax, ebx */
  EAX = (EBX);
  /* 127f99e0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 127f99e3 push esi */
  push32((uint32_t)(ESI));
  /* 127f99e4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_127f99e6:;
  /* 127f99e6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 127f99e8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 127f99ed mov eax, ecx */
  EAX = (ECX);
  /* 127f99ef mov esi, edi */
  ESI = (EDI);
  /* 127f99f1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 127f99f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127f99f5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127f99f7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127f99fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f99fd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 127f99ff xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 127f9a01 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f9a04 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 127f9a0a jne 0x127f9a28 */
  if (!C.zf) goto L_127f9a28;
  /* 127f9a0c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 127f9a11 je 0x127f99e6 */
  if (C.zf) goto L_127f99e6;
  /* 127f9a13 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 127f9a18 jne 0x127f9a22 */
  if (!C.zf) goto L_127f9a22;
  /* 127f9a1a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 127f9a20 jne 0x127f99e6 */
  if (!C.zf) goto L_127f99e6;
L_127f9a22:;
  /* 127f9a22 pop esi */
  ESI = (pop32());
  /* 127f9a23 pop edi */
  EDI = (pop32());
L_127f9a24:;
  /* 127f9a24 pop ebx */
  EBX = (pop32());
  /* 127f9a25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f9a27 ret  */
  ESPCHK(0x127f99b0u, _esp0);
  ESP += 4; return;
L_127f9a28:;
  /* 127f9a28 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 127f9a2b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f9a2d je 0x127f9a65 */
  if (C.zf) goto L_127f9a65;
  /* 127f9a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127f9a31 je 0x127f9a22 */
  if (C.zf) goto L_127f9a22;
  /* 127f9a33 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f9a35 je 0x127f9a5e */
  if (C.zf) goto L_127f9a5e;
  /* 127f9a37 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 127f9a39 je 0x127f9a22 */
  if (C.zf) goto L_127f9a22;
  /* 127f9a3b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127f9a3e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f9a40 je 0x127f9a57 */
  if (C.zf) goto L_127f9a57;
  /* 127f9a42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127f9a44 je 0x127f9a22 */
  if (C.zf) goto L_127f9a22;
  /* 127f9a46 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f9a48 je 0x127f9a50 */
  if (C.zf) goto L_127f9a50;
  /* 127f9a4a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 127f9a4c je 0x127f9a22 */
  if (C.zf) goto L_127f9a22;
  /* 127f9a4e jmp 0x127f99e6 */
  goto L_127f99e6;
L_127f9a50:;
  /* 127f9a50 pop esi */
  ESI = (pop32());
  /* 127f9a51 pop edi */
  EDI = (pop32());
  /* 127f9a52 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 127f9a55 pop ebx */
  EBX = (pop32());
  /* 127f9a56 ret  */
  ESPCHK(0x127f99b0u, _esp0);
  ESP += 4; return;
L_127f9a57:;
  /* 127f9a57 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 127f9a5a pop esi */
  ESI = (pop32());
  /* 127f9a5b pop edi */
  EDI = (pop32());
  /* 127f9a5c pop ebx */
  EBX = (pop32());
  /* 127f9a5d ret  */
  ESPCHK(0x127f99b0u, _esp0);
  ESP += 4; return;
L_127f9a5e:;
  /* 127f9a5e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 127f9a61 pop esi */
  ESI = (pop32());
  /* 127f9a62 pop edi */
  EDI = (pop32());
  /* 127f9a63 pop ebx */
  EBX = (pop32());
  /* 127f9a64 ret  */
  ESPCHK(0x127f99b0u, _esp0);
  ESP += 4; return;
L_127f9a65:;
  /* 127f9a65 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 127f9a68 pop esi */
  ESI = (pop32());
  /* 127f9a69 pop edi */
  EDI = (pop32());
  /* 127f9a6a pop ebx */
  EBX = (pop32());
  /* 127f9a6b ret  */
  ESPCHK(0x127f99b0u, _esp0);
  ESP += 4; return;
  /* 127f9a6c jmp dword ptr [0x1281832c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1281832c)))); return;
}

/* RtlUnwind @ 0x127f9bbc (6 bytes, 1 insns) */
void f_127f9bbc(void) {
  FTRACE(0x127f9bbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f9bbc jmp dword ptr [0x128182d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x128182d8)))); return;
}

