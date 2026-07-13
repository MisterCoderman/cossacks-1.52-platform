#include "recomp.h"

/* FUN_10010880 @ 0x11110880 (393 bytes, 123 insns) */
void f_11110880(void) {
  FTRACE(0x11110880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11110880 push ebp */
  push32((uint32_t)(EBP));
  /* 11110881 mov ebp, esp */
  EBP = (ESP);
  /* 11110883 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11110886 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111088a jne 0x11110896 */
  if (!C.zf) goto L_11110896;
  /* 1111088c mov eax, dword ptr [0x1112ec98] */
  EAX = (r32((uint32_t)(0x1112ec98)));
  /* 11110891 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11110894 jmp 0x1111089c */
  goto L_1111089c;
L_11110896:;
  /* 11110896 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110899 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1111089c:;
  /* 1111089c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1111089f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111108a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111108a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111108a8 push 0x1112f89c */
  push32((uint32_t)(0x1112f89cu));
  /* 111108ad call dword ptr [0x1113234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113234c))), 0x111108b3u);
  /* 111108b3 cmp dword ptr [0x1112f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111108ba je 0x111108da */
  if (C.zf) goto L_111108da;
  /* 111108bc push 0x1112f89c */
  push32((uint32_t)(0x1112f89cu));
  /* 111108c1 call dword ptr [0x1113233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113233c))), 0x111108c7u);
  /* 111108c7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111108c9 call 0x11106f40 */
  push32(0x111108ceu); f_11106f40();
  /* 111108ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111108d1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 111108d8 jmp 0x111108e1 */
  goto L_111108e1;
L_111108da:;
  /* 111108da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_111108e1:;
  /* 111108e1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111108e5 jbe 0x111109d2 */
  if ((C.cf||C.zf)) goto L_111109d2;
  /* 111108eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111108ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111108f0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 111108f3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111108f7 je 0x11110901 */
  if (C.zf) goto L_11110901;
  /* 111108f9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111108fd je 0x11110906 */
  if (C.zf) goto L_11110906;
  /* 111108ff jmp 0x11110960 */
  goto L_11110960;
L_11110901:;
  /* 11110901 jmp 0x111109d2 */
  goto L_111109d2;
L_11110906:;
  /* 11110906 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110909 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111090c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1111090f mov dword ptr [0x1112f878], 0 */
  w32((uint32_t)(0x1112f878), (0x0u));
  /* 11110919 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111091c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1111091f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110922 jne 0x11110937 */
  if (!C.zf) goto L_11110937;
  /* 11110924 mov dword ptr [0x1112f878], 1 */
  w32((uint32_t)(0x1112f878), (0x1u));
  /* 1111092e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110931 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110934 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11110937:;
  /* 11110937 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111093a push ecx */
  push32((uint32_t)(ECX));
  /* 1111093b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1111093e push edx */
  push32((uint32_t)(EDX));
  /* 1111093f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11110942 push eax */
  push32((uint32_t)(EAX));
  /* 11110943 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110946 push ecx */
  push32((uint32_t)(ECX));
  /* 11110947 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111094a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1111094c push eax */
  push32((uint32_t)(EAX));
  /* 1111094d call 0x11110a10 */
  push32(0x11110952u); f_11110a10();
  /* 11110952 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110955 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110958 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111095b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1111095e jmp 0x111109cd */
  goto L_111109cd;
L_11110960:;
  /* 11110960 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11110965 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11110967 mov ecx, dword ptr [0x1112dc98] */
  ECX = (r32((uint32_t)(0x1112dc98)));
  /* 1111096d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1111096f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11110973 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11110979 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1111097b je 0x111109a8 */
  if (C.zf) goto L_111109a8;
  /* 1111097d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110981 jbe 0x111109a8 */
  if ((C.cf||C.zf)) goto L_111109a8;
  /* 11110983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110986 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110989 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1111098b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1111098d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110990 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110993 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11110996 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110999 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111099c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1111099f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111109a2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111109a5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111109a8:;
  /* 111109a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111109ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111109ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111109b0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111109b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111109b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111109b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111109bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111109be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111109c1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 111109c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111109c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111109ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111109cd:;
  /* 111109cd jmp 0x111108e1 */
  goto L_111108e1;
L_111109d2:;
  /* 111109d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111109d6 je 0x111109e4 */
  if (C.zf) goto L_111109e4;
  /* 111109d8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111109da call 0x11106fe0 */
  push32(0x111109dfu); f_11106fe0();
  /* 111109df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111109e2 jmp 0x111109ef */
  goto L_111109ef;
L_111109e4:;
  /* 111109e4 push 0x1112f89c */
  push32((uint32_t)(0x1112f89cu));
  /* 111109e9 call dword ptr [0x1113233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113233c))), 0x111109efu);
L_111109ef:;
  /* 111109ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111109f3 jbe 0x11110a03 */
  if ((C.cf||C.zf)) goto L_11110a03;
  /* 111109f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111109f8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111109fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111109fe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11110a01 jmp 0x11110a05 */
  goto L_11110a05;
L_11110a03:;
  /* 11110a03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11110a05:;
  /* 11110a05 mov esp, ebp */
  ESP = (EBP);
  /* 11110a07 pop ebp */
  EBP = (pop32());
  /* 11110a08 ret  */
  ESPCHK(0x11110880u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a10 @ 0x11110a10 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11110a10(void) {
  FTRACE(0x11110a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11110a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11110a11 mov ebp, esp */
  EBP = (ESP);
  /* 11110a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11110a16 push esi */
  push32((uint32_t)(ESI));
  /* 11110a17 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11110a1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11110a1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110a21 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11110a24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11110a27 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110a2b ja 0x11110f78 */
  if ((!C.cf&&!C.zf)) goto L_11110f78;
  /* 11110a31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110a34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11110a36 mov dl, byte ptr [eax + 0x11110fd9] */
  DL = (r8((uint32_t)(EAX + 0x11110fd9)));
  /* 11110a3c jmp dword ptr [edx*4 + 0x11110f7d] */
  switch (EDX) {
    case 0: goto L_11110f56;
    case 1: goto L_11110a65;
    case 2: goto L_11110aab;
    case 3: goto L_11110bf8;
    case 4: goto L_11110c20;
    case 5: goto L_11110cbf;
    case 6: goto L_11110d2b;
    case 7: goto L_11110d54;
    case 8: goto L_11110d95;
    case 9: goto L_11110e77;
    case 10: goto L_11110ede;
    case 11: goto L_11110f2b;
    case 12: goto L_11110a43;
    case 13: goto L_11110a88;
    case 14: goto L_11110ace;
    case 15: goto L_11110bce;
    case 16: goto L_11110c65;
    case 17: goto L_11110c92;
    case 18: goto L_11110ce7;
    case 19: goto L_11110d6b;
    case 20: goto L_11110e19;
    case 21: goto L_11110ea8;
    case 22: goto L_11110f78;
    default: x86_unimpl("switch@0x11110a3c out of table"); return;
  }
L_11110a43:;
  /* 11110a43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110a46 push ecx */
  push32((uint32_t)(ECX));
  /* 11110a47 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110a4a push edx */
  push32((uint32_t)(EDX));
  /* 11110a4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110a4e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11110a51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110a54 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11110a57 push eax */
  push32((uint32_t)(EAX));
  /* 11110a58 call 0x11111030 */
  push32(0x11110a5du); f_11111030();
  /* 11110a5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110a60 jmp 0x11110f78 */
  goto L_11110f78;
L_11110a65:;
  /* 11110a65 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110a68 push ecx */
  push32((uint32_t)(ECX));
  /* 11110a69 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110a6c push edx */
  push32((uint32_t)(EDX));
  /* 11110a6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110a70 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11110a73 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110a76 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11110a7a push eax */
  push32((uint32_t)(EAX));
  /* 11110a7b call 0x11111030 */
  push32(0x11110a80u); f_11111030();
  /* 11110a80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110a83 jmp 0x11110f78 */
  goto L_11110f78;
L_11110a88:;
  /* 11110a88 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110a8b push ecx */
  push32((uint32_t)(ECX));
  /* 11110a8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110a8f push edx */
  push32((uint32_t)(EDX));
  /* 11110a90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110a93 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11110a96 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110a99 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11110a9d push eax */
  push32((uint32_t)(EAX));
  /* 11110a9e call 0x11111030 */
  push32(0x11110aa3u); f_11111030();
  /* 11110aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110aa6 jmp 0x11110f78 */
  goto L_11110f78;
L_11110aab:;
  /* 11110aab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110aae push ecx */
  push32((uint32_t)(ECX));
  /* 11110aaf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110ab2 push edx */
  push32((uint32_t)(EDX));
  /* 11110ab3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110ab6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11110ab9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110abc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11110ac0 push eax */
  push32((uint32_t)(EAX));
  /* 11110ac1 call 0x11111030 */
  push32(0x11110ac6u); f_11111030();
  /* 11110ac6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110ac9 jmp 0x11110f78 */
  goto L_11110f78;
L_11110ace:;
  /* 11110ace cmp dword ptr [0x1112f878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110ad5 je 0x11110b56 */
  if (C.zf) goto L_11110b56;
  /* 11110ad7 mov dword ptr [0x1112f878], 0 */
  w32((uint32_t)(0x1112f878), (0x0u));
  /* 11110ae1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110ae4 push ecx */
  push32((uint32_t)(ECX));
  /* 11110ae5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110ae8 push edx */
  push32((uint32_t)(EDX));
  /* 11110ae9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110aec push eax */
  push32((uint32_t)(EAX));
  /* 11110aed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110af0 push ecx */
  push32((uint32_t)(ECX));
  /* 11110af1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110af4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11110afa push eax */
  push32((uint32_t)(EAX));
  /* 11110afb call 0x111111e0 */
  push32(0x11110b00u); f_111111e0();
  /* 11110b00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110b03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110b06 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110b09 jne 0x11110b10 */
  if (!C.zf) goto L_11110b10;
  /* 11110b0b jmp 0x11110f78 */
  goto L_11110f78;
L_11110b10:;
  /* 11110b10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110b13 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11110b15 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11110b18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110b1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11110b1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110b20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110b23 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11110b25 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110b28 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11110b2a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11110b2d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110b30 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11110b32 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110b35 push ecx */
  push32((uint32_t)(ECX));
  /* 11110b36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110b39 push edx */
  push32((uint32_t)(EDX));
  /* 11110b3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110b3d push eax */
  push32((uint32_t)(EAX));
  /* 11110b3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110b41 push ecx */
  push32((uint32_t)(ECX));
  /* 11110b42 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110b45 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11110b4b push eax */
  push32((uint32_t)(EAX));
  /* 11110b4c call 0x111111e0 */
  push32(0x11110b51u); f_111111e0();
  /* 11110b51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110b54 jmp 0x11110bc9 */
  goto L_11110bc9;
L_11110b56:;
  /* 11110b56 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110b59 push ecx */
  push32((uint32_t)(ECX));
  /* 11110b5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110b5d push edx */
  push32((uint32_t)(EDX));
  /* 11110b5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110b61 push eax */
  push32((uint32_t)(EAX));
  /* 11110b62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110b65 push ecx */
  push32((uint32_t)(ECX));
  /* 11110b66 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110b69 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11110b6f push eax */
  push32((uint32_t)(EAX));
  /* 11110b70 call 0x111111e0 */
  push32(0x11110b75u); f_111111e0();
  /* 11110b75 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110b78 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110b7b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110b7e jne 0x11110b85 */
  if (!C.zf) goto L_11110b85;
  /* 11110b80 jmp 0x11110f78 */
  goto L_11110f78;
L_11110b85:;
  /* 11110b85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110b88 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11110b8a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11110b8d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110b90 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11110b92 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110b95 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110b98 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11110b9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110b9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11110b9f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11110ba2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110ba5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11110ba7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110baa push ecx */
  push32((uint32_t)(ECX));
  /* 11110bab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110bae push edx */
  push32((uint32_t)(EDX));
  /* 11110baf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110bb2 push eax */
  push32((uint32_t)(EAX));
  /* 11110bb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11110bb7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110bba mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11110bc0 push eax */
  push32((uint32_t)(EAX));
  /* 11110bc1 call 0x111111e0 */
  push32(0x11110bc6u); f_111111e0();
  /* 11110bc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11110bc9:;
  /* 11110bc9 jmp 0x11110f78 */
  goto L_11110f78;
L_11110bce:;
  /* 11110bce mov ecx, dword ptr [0x1112f878] */
  ECX = (r32((uint32_t)(0x1112f878)));
  /* 11110bd4 mov dword ptr [0x1112f888], ecx */
  w32((uint32_t)(0x1112f888), (ECX));
  /* 11110bda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110bdd push edx */
  push32((uint32_t)(EDX));
  /* 11110bde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110be1 push eax */
  push32((uint32_t)(EAX));
  /* 11110be2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11110be4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110be7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11110bea push edx */
  push32((uint32_t)(EDX));
  /* 11110beb call 0x11111080 */
  push32(0x11110bf0u); f_11111080();
  /* 11110bf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110bf3 jmp 0x11110f78 */
  goto L_11110f78;
L_11110bf8:;
  /* 11110bf8 mov eax, dword ptr [0x1112f878] */
  EAX = (r32((uint32_t)(0x1112f878)));
  /* 11110bfd mov dword ptr [0x1112f888], eax */
  w32((uint32_t)(0x1112f888), (EAX));
  /* 11110c02 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110c05 push ecx */
  push32((uint32_t)(ECX));
  /* 11110c06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110c09 push edx */
  push32((uint32_t)(EDX));
  /* 11110c0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11110c0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110c0f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11110c12 push ecx */
  push32((uint32_t)(ECX));
  /* 11110c13 call 0x11111080 */
  push32(0x11110c18u); f_11111080();
  /* 11110c18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110c1b jmp 0x11110f78 */
  goto L_11110f78;
L_11110c20:;
  /* 11110c20 mov edx, dword ptr [0x1112f878] */
  EDX = (r32((uint32_t)(0x1112f878)));
  /* 11110c26 mov dword ptr [0x1112f888], edx */
  w32((uint32_t)(0x1112f888), (EDX));
  /* 11110c2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110c2f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11110c32 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11110c33 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11110c38 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11110c3a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11110c3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110c41 jne 0x11110c4a */
  if (!C.zf) goto L_11110c4a;
  /* 11110c43 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11110c4a:;
  /* 11110c4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110c4d push edx */
  push32((uint32_t)(EDX));
  /* 11110c4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110c51 push eax */
  push32((uint32_t)(EAX));
  /* 11110c52 push 2 */
  push32((uint32_t)(0x2u));
  /* 11110c54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110c57 push ecx */
  push32((uint32_t)(ECX));
  /* 11110c58 call 0x11111080 */
  push32(0x11110c5du); f_11111080();
  /* 11110c5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110c60 jmp 0x11110f78 */
  goto L_11110f78;
L_11110c65:;
  /* 11110c65 mov edx, dword ptr [0x1112f878] */
  EDX = (r32((uint32_t)(0x1112f878)));
  /* 11110c6b mov dword ptr [0x1112f888], edx */
  w32((uint32_t)(0x1112f888), (EDX));
  /* 11110c71 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110c74 push eax */
  push32((uint32_t)(EAX));
  /* 11110c75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110c78 push ecx */
  push32((uint32_t)(ECX));
  /* 11110c79 push 3 */
  push32((uint32_t)(0x3u));
  /* 11110c7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110c7e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11110c81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110c84 push eax */
  push32((uint32_t)(EAX));
  /* 11110c85 call 0x11111080 */
  push32(0x11110c8au); f_11111080();
  /* 11110c8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110c8d jmp 0x11110f78 */
  goto L_11110f78;
L_11110c92:;
  /* 11110c92 mov ecx, dword ptr [0x1112f878] */
  ECX = (r32((uint32_t)(0x1112f878)));
  /* 11110c98 mov dword ptr [0x1112f888], ecx */
  w32((uint32_t)(0x1112f888), (ECX));
  /* 11110c9e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110ca1 push edx */
  push32((uint32_t)(EDX));
  /* 11110ca2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110ca5 push eax */
  push32((uint32_t)(EAX));
  /* 11110ca6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11110ca8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110cab mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11110cae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110cb1 push edx */
  push32((uint32_t)(EDX));
  /* 11110cb2 call 0x11111080 */
  push32(0x11110cb7u); f_11111080();
  /* 11110cb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110cba jmp 0x11110f78 */
  goto L_11110f78;
L_11110cbf:;
  /* 11110cbf mov eax, dword ptr [0x1112f878] */
  EAX = (r32((uint32_t)(0x1112f878)));
  /* 11110cc4 mov dword ptr [0x1112f888], eax */
  w32((uint32_t)(0x1112f888), (EAX));
  /* 11110cc9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110ccc push ecx */
  push32((uint32_t)(ECX));
  /* 11110ccd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110cd0 push edx */
  push32((uint32_t)(EDX));
  /* 11110cd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11110cd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110cd6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11110cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11110cda call 0x11111080 */
  push32(0x11110cdfu); f_11111080();
  /* 11110cdf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110ce2 jmp 0x11110f78 */
  goto L_11110f78;
L_11110ce7:;
  /* 11110ce7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110cea cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110cee jg 0x11110d0c */
  if ((!C.zf&&C.sf==C.of)) goto L_11110d0c;
  /* 11110cf0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110cf3 push eax */
  push32((uint32_t)(EAX));
  /* 11110cf4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 11110cf8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110cfb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11110d01 push eax */
  push32((uint32_t)(EAX));
  /* 11110d02 call 0x11111030 */
  push32(0x11110d07u); f_11111030();
  /* 11110d07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110d0a jmp 0x11110d26 */
  goto L_11110d26;
L_11110d0c:;
  /* 11110d0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110d0f push ecx */
  push32((uint32_t)(ECX));
  /* 11110d10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110d13 push edx */
  push32((uint32_t)(EDX));
  /* 11110d14 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110d17 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11110d1d push ecx */
  push32((uint32_t)(ECX));
  /* 11110d1e call 0x11111030 */
  push32(0x11110d23u); f_11111030();
  /* 11110d23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11110d26:;
  /* 11110d26 jmp 0x11110f78 */
  goto L_11110f78;
L_11110d2b:;
  /* 11110d2b mov edx, dword ptr [0x1112f878] */
  EDX = (r32((uint32_t)(0x1112f878)));
  /* 11110d31 mov dword ptr [0x1112f888], edx */
  w32((uint32_t)(0x1112f888), (EDX));
  /* 11110d37 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110d3a push eax */
  push32((uint32_t)(EAX));
  /* 11110d3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110d3e push ecx */
  push32((uint32_t)(ECX));
  /* 11110d3f push 2 */
  push32((uint32_t)(0x2u));
  /* 11110d41 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110d44 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11110d46 push eax */
  push32((uint32_t)(EAX));
  /* 11110d47 call 0x11111080 */
  push32(0x11110d4cu); f_11111080();
  /* 11110d4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110d4f jmp 0x11110f78 */
  goto L_11110f78;
L_11110d54:;
  /* 11110d54 mov ecx, dword ptr [0x1112f878] */
  ECX = (r32((uint32_t)(0x1112f878)));
  /* 11110d5a mov dword ptr [0x1112f888], ecx */
  w32((uint32_t)(0x1112f888), (ECX));
  /* 11110d60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110d63 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11110d66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11110d69 jmp 0x11110dbd */
  goto L_11110dbd;
L_11110d6b:;
  /* 11110d6b mov ecx, dword ptr [0x1112f878] */
  ECX = (r32((uint32_t)(0x1112f878)));
  /* 11110d71 mov dword ptr [0x1112f888], ecx */
  w32((uint32_t)(0x1112f888), (ECX));
  /* 11110d77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110d7a push edx */
  push32((uint32_t)(EDX));
  /* 11110d7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110d7e push eax */
  push32((uint32_t)(EAX));
  /* 11110d7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11110d81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110d84 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11110d87 push edx */
  push32((uint32_t)(EDX));
  /* 11110d88 call 0x11111080 */
  push32(0x11110d8du); f_11111080();
  /* 11110d8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110d90 jmp 0x11110f78 */
  goto L_11110f78;
L_11110d95:;
  /* 11110d95 mov eax, dword ptr [0x1112f878] */
  EAX = (r32((uint32_t)(0x1112f878)));
  /* 11110d9a mov dword ptr [0x1112f888], eax */
  w32((uint32_t)(0x1112f888), (EAX));
  /* 11110d9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110da2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110da6 jne 0x11110db1 */
  if (!C.zf) goto L_11110db1;
  /* 11110da8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11110daf jmp 0x11110dbd */
  goto L_11110dbd;
L_11110db1:;
  /* 11110db1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110db4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11110db7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11110dba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11110dbd:;
  /* 11110dbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110dc0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11110dc3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110dc6 jge 0x11110dd1 */
  if ((C.sf==C.of)) goto L_11110dd1;
  /* 11110dc8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11110dcf jmp 0x11110dfe */
  goto L_11110dfe;
L_11110dd1:;
  /* 11110dd1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110dd4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11110dd7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11110dd8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11110ddd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11110ddf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11110de2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110de5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11110de8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11110de9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11110dee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11110df0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110df3 jl 0x11110dfe */
  if ((C.sf!=C.of)) goto L_11110dfe;
  /* 11110df5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110df8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110dfb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11110dfe:;
  /* 11110dfe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110e01 push eax */
  push32((uint32_t)(EAX));
  /* 11110e02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110e05 push ecx */
  push32((uint32_t)(ECX));
  /* 11110e06 push 2 */
  push32((uint32_t)(0x2u));
  /* 11110e08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110e0b push edx */
  push32((uint32_t)(EDX));
  /* 11110e0c call 0x11111080 */
  push32(0x11110e11u); f_11111080();
  /* 11110e11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110e14 jmp 0x11110f78 */
  goto L_11110f78;
L_11110e19:;
  /* 11110e19 cmp dword ptr [0x1112f878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110e20 je 0x11110e50 */
  if (C.zf) goto L_11110e50;
  /* 11110e22 mov dword ptr [0x1112f878], 0 */
  w32((uint32_t)(0x1112f878), (0x0u));
  /* 11110e2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110e2f push eax */
  push32((uint32_t)(EAX));
  /* 11110e30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11110e34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110e37 push edx */
  push32((uint32_t)(EDX));
  /* 11110e38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110e3b push eax */
  push32((uint32_t)(EAX));
  /* 11110e3c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110e3f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11110e45 push edx */
  push32((uint32_t)(EDX));
  /* 11110e46 call 0x111111e0 */
  push32(0x11110e4bu); f_111111e0();
  /* 11110e4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110e4e jmp 0x11110e72 */
  goto L_11110e72;
L_11110e50:;
  /* 11110e50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110e53 push eax */
  push32((uint32_t)(EAX));
  /* 11110e54 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110e57 push ecx */
  push32((uint32_t)(ECX));
  /* 11110e58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110e5b push edx */
  push32((uint32_t)(EDX));
  /* 11110e5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110e5f push eax */
  push32((uint32_t)(EAX));
  /* 11110e60 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110e63 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11110e69 push edx */
  push32((uint32_t)(EDX));
  /* 11110e6a call 0x111111e0 */
  push32(0x11110e6fu); f_111111e0();
  /* 11110e6f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11110e72:;
  /* 11110e72 jmp 0x11110f78 */
  goto L_11110f78;
L_11110e77:;
  /* 11110e77 mov dword ptr [0x1112f878], 0 */
  w32((uint32_t)(0x1112f878), (0x0u));
  /* 11110e81 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110e84 push eax */
  push32((uint32_t)(EAX));
  /* 11110e85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110e88 push ecx */
  push32((uint32_t)(ECX));
  /* 11110e89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110e8c push edx */
  push32((uint32_t)(EDX));
  /* 11110e8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110e90 push eax */
  push32((uint32_t)(EAX));
  /* 11110e91 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11110e94 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11110e9a push edx */
  push32((uint32_t)(EDX));
  /* 11110e9b call 0x111111e0 */
  push32(0x11110ea0u); f_111111e0();
  /* 11110ea0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110ea3 jmp 0x11110f78 */
  goto L_11110f78;
L_11110ea8:;
  /* 11110ea8 mov eax, dword ptr [0x1112f878] */
  EAX = (r32((uint32_t)(0x1112f878)));
  /* 11110ead mov dword ptr [0x1112f888], eax */
  w32((uint32_t)(0x1112f888), (EAX));
  /* 11110eb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110eb5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11110eb8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11110eb9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11110ebe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11110ec0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11110ec3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110ec6 push edx */
  push32((uint32_t)(EDX));
  /* 11110ec7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110eca push eax */
  push32((uint32_t)(EAX));
  /* 11110ecb push 2 */
  push32((uint32_t)(0x2u));
  /* 11110ecd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 11110ed1 call 0x11111080 */
  push32(0x11110ed6u); f_11111080();
  /* 11110ed6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110ed9 jmp 0x11110f78 */
  goto L_11110f78;
L_11110ede:;
  /* 11110ede mov edx, dword ptr [0x1112f878] */
  EDX = (r32((uint32_t)(0x1112f878)));
  /* 11110ee4 mov dword ptr [0x1112f888], edx */
  w32((uint32_t)(0x1112f888), (EDX));
  /* 11110eea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110eed mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11110ef0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11110ef1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11110ef6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11110ef8 mov ecx, eax */
  ECX = (EAX);
  /* 11110efa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110efd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11110f00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110f03 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11110f06 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11110f07 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11110f0c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11110f0e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110f10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11110f13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110f16 push eax */
  push32((uint32_t)(EAX));
  /* 11110f17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110f1a push ecx */
  push32((uint32_t)(ECX));
  /* 11110f1b push 4 */
  push32((uint32_t)(0x4u));
  /* 11110f1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110f20 push edx */
  push32((uint32_t)(EDX));
  /* 11110f21 call 0x11111080 */
  push32(0x11110f26u); f_11111080();
  /* 11110f26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110f29 jmp 0x11110f78 */
  goto L_11110f78;
L_11110f2b:;
  /* 11110f2b call 0x11112040 */
  push32(0x11110f30u); f_11112040();
  /* 11110f30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110f33 push eax */
  push32((uint32_t)(EAX));
  /* 11110f34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110f37 push ecx */
  push32((uint32_t)(ECX));
  /* 11110f38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110f3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11110f3d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110f41 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11110f44 mov ecx, dword ptr [eax*4 + 0x1112ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1112ee1c)));
  /* 11110f4b push ecx */
  push32((uint32_t)(ECX));
  /* 11110f4c call 0x11111030 */
  push32(0x11110f51u); f_11111030();
  /* 11110f51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110f54 jmp 0x11110f78 */
  goto L_11110f78;
L_11110f56:;
  /* 11110f56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110f59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11110f5b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11110f5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110f61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11110f63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110f66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11110f69 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11110f6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110f6e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11110f70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11110f73 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110f76 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11110f78:;
  /* 11110f78 pop esi */
  ESI = (pop32());
  /* 11110f79 mov esp, ebp */
  ESP = (EBP);
  /* 11110f7b pop ebp */
  EBP = (pop32());
  /* 11110f7c ret  */
  ESPCHK(0x11110a10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11111030 (72 bytes, 30 insns) */
void f_11111030(void) {
  FTRACE(0x11111030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11111030 push ebp */
  push32((uint32_t)(EBP));
  /* 11111031 mov ebp, esp */
  EBP = (ESP);
L_11111033:;
  /* 11111033 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111036 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111039 je 0x11111076 */
  if (C.zf) goto L_11111076;
  /* 1111103b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111103e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11111041 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11111043 je 0x11111076 */
  if (C.zf) goto L_11111076;
  /* 11111045 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11111048 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1111104a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111104d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1111104f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11111051 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11111054 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11111056 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111059 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1111105c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1111105e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111061 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111064 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11111067 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111106a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1111106c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1111106f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111072 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11111074 jmp 0x11111033 */
  goto L_11111033;
L_11111076:;
  /* 11111076 pop ebp */
  EBP = (pop32());
  /* 11111077 ret  */
  ESPCHK(0x11111030u, _esp0);
  ESP += 4; return;
}

/* FUN_10011080 @ 0x11111080 (173 bytes, 64 insns) */
void f_11111080(void) {
  FTRACE(0x11111080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11111080 push ebp */
  push32((uint32_t)(EBP));
  /* 11111081 mov ebp, esp */
  EBP = (ESP);
  /* 11111083 push ecx */
  push32((uint32_t)(ECX));
  /* 11111084 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1111108b cmp dword ptr [0x1112f888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111092 je 0x111110aa */
  if (C.zf) goto L_111110aa;
  /* 11111094 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111097 push eax */
  push32((uint32_t)(EAX));
  /* 11111098 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111109b push ecx */
  push32((uint32_t)(ECX));
  /* 1111109c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111109f push edx */
  push32((uint32_t)(EDX));
  /* 111110a0 call 0x11111130 */
  push32(0x111110a5u); f_11111130();
  /* 111110a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111110a8 jmp 0x11111129 */
  goto L_11111129;
L_111110aa:;
  /* 111110aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111110ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111110b0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111110b2 jae 0x11111120 */
  if (!C.cf) goto L_11111120;
  /* 111110b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111110b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111110ba mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 111110bd jmp 0x111110c8 */
  goto L_111110c8;
L_111110bf:;
  /* 111110bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111110c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111110c5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_111110c8:;
  /* 111110c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111110cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111110ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111110d0 je 0x11111104 */
  if (C.zf) goto L_11111104;
  /* 111110d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111110d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111110d6 mov ecx, 0xa */
  ECX = (0xau);
  /* 111110db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111110dd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111110e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111110e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111110e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111110e8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 111110eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111110ee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111110ef mov ecx, 0xa */
  ECX = (0xau);
  /* 111110f4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111110f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111110f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111110fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111110ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11111102 jmp 0x111110bf */
  goto L_111110bf;
L_11111104:;
  /* 11111104 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11111109 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111110c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111110f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11111111 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111114 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11111116 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111119 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1111111c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1111111e jmp 0x11111129 */
  goto L_11111129;
L_11111120:;
  /* 11111120 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111123 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11111129:;
  /* 11111129 mov esp, ebp */
  ESP = (EBP);
  /* 1111112b pop ebp */
  EBP = (pop32());
  /* 1111112c ret  */
  ESPCHK(0x11111080u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11111130 (172 bytes, 65 insns) */
void f_11111130(void) {
  FTRACE(0x11111130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11111130 push ebp */
  push32((uint32_t)(EBP));
  /* 11111131 mov ebp, esp */
  EBP = (ESP);
  /* 11111133 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111136 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11111139 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1111113b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1111113e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111141 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111144 jbe 0x1111118b */
  if ((C.cf||C.zf)) goto L_1111118b;
L_11111146:;
  /* 11111146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111149 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1111114a mov ecx, 0xa */
  ECX = (0xau);
  /* 1111114f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11111151 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111154 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111157 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11111159 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111115c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111115f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11111162 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111165 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11111167 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1111116a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111116d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1111116f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111172 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11111173 mov ecx, 0xa */
  ECX = (0xau);
  /* 11111178 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1111117a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1111117d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111181 jle 0x1111118b */
  if ((C.zf||C.sf!=C.of)) goto L_1111118b;
  /* 11111183 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111186 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111189 ja 0x11111146 */
  if ((!C.cf&&!C.zf)) goto L_11111146;
L_1111118b:;
  /* 1111118b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1111118e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11111190 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11111193 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11111196 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111199 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1111119b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111119e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111111a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111111a4:;
  /* 111111a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111111a7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111111a9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 111111ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111111af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111111b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111111b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111111b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111111b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111111bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111111bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111111c2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 111111c5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 111111c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111111ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111111cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111111d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111111d3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111111d6 jb 0x111111a4 */
  if (C.cf) goto L_111111a4;
  /* 111111d8 mov esp, ebp */
  ESP = (EBP);
  /* 111111da pop ebp */
  EBP = (pop32());
  /* 111111db ret  */
  ESPCHK(0x11111130u, _esp0);
  ESP += 4; return;
}

/* FUN_100111e0 @ 0x111111e0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_111111e0(void) {
  FTRACE(0x111111e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111111e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111111e1 mov ebp, esp */
  EBP = (ESP);
  /* 111111e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_111111e6:;
  /* 111111e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111111e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111111ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111111ee je 0x1111165c */
  if (C.zf) goto L_1111165c;
  /* 111111f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111111f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111111fa je 0x1111165c */
  if (C.zf) goto L_1111165c;
  /* 11111200 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11111204 mov dword ptr [0x1112f888], 0 */
  w32((uint32_t)(0x1112f888), (0x0u));
  /* 1111120e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11111215 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111218 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1111121b jmp 0x11111226 */
  goto L_11111226;
L_1111121d:;
  /* 1111121d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11111220 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111223 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11111226:;
  /* 11111226 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111229 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1111122c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111122f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11111232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111235 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111238 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1111123b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111123d jne 0x11111241 */
  if (!C.zf) goto L_11111241;
  /* 1111123f jmp 0x1111121d */
  goto L_1111121d;
L_11111241:;
  /* 11111241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111244 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111247 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1111124a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111124d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11111250 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11111253 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11111256 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111259 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1111125c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111260 ja 0x111115b0 */
  if ((!C.cf&&!C.zf)) goto L_111115b0;
  /* 11111266 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11111269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1111126b mov al, byte ptr [ecx + 0x1111168c] */
  AL = (r8((uint32_t)(ECX + 0x1111168c)));
  /* 11111271 jmp dword ptr [eax*4 + 0x11111660] */
  switch (EAX) {
    case 0: goto L_111114cf;
    case 1: goto L_111113b3;
    case 2: goto L_1111133e;
    case 3: goto L_11111278;
    case 4: goto L_111112b6;
    case 5: goto L_11111317;
    case 6: goto L_11111365;
    case 7: goto L_1111138c;
    case 8: goto L_111113fa;
    case 9: goto L_111112f4;
    case 10: goto L_111115b0;
    default: x86_unimpl("switch@0x11111271 out of table"); return;
  }
L_11111278:;
  /* 11111278 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111127b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1111127e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11111281 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111284 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11111287 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111128b ja 0x111112b1 */
  if ((!C.cf&&!C.zf)) goto L_111112b1;
  /* 1111128d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11111290 jmp dword ptr [ecx*4 + 0x111116df] */
  switch (ECX) {
    case 0: goto L_11111297;
    case 1: goto L_111112a1;
    case 2: goto L_111112a7;
    case 3: goto L_111112ad;
    case 4: goto L_111112d5;
    case 5: goto L_111112df;
    case 6: goto L_111112e5;
    case 7: goto L_111112eb;
    default: x86_unimpl("switch@0x11111290 out of table"); return;
  }
L_11111297:;
  /* 11111297 mov dword ptr [0x1112f888], 1 */
  w32((uint32_t)(0x1112f888), (0x1u));
L_111112a1:;
  /* 111112a1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 111112a5 jmp 0x111112b1 */
  goto L_111112b1;
L_111112a7:;
  /* 111112a7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 111112ab jmp 0x111112b1 */
  goto L_111112b1;
L_111112ad:;
  /* 111112ad mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_111112b1:;
  /* 111112b1 jmp 0x111115b0 */
  goto L_111115b0;
L_111112b6:;
  /* 111112b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111112b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111112bc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111112bf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111112c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111112c5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111112c9 ja 0x111112ef */
  if ((!C.cf&&!C.zf)) goto L_111112ef;
  /* 111112cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111112ce jmp dword ptr [ecx*4 + 0x111116ef] */
  switch (ECX) {
    case 0: goto L_111112d5;
    case 1: goto L_111112df;
    case 2: goto L_111112e5;
    case 3: goto L_111112eb;
    default: x86_unimpl("switch@0x111112ce out of table"); return;
  }
L_111112d5:;
  /* 111112d5 mov dword ptr [0x1112f888], 1 */
  w32((uint32_t)(0x1112f888), (0x1u));
L_111112df:;
  /* 111112df mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 111112e3 jmp 0x111112ef */
  goto L_111112ef;
L_111112e5:;
  /* 111112e5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 111112e9 jmp 0x111112ef */
  goto L_111112ef;
L_111112eb:;
  /* 111112eb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_111112ef:;
  /* 111112ef jmp 0x111115b0 */
  goto L_111115b0;
L_111112f4:;
  /* 111112f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111112f7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 111112fa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111112fe je 0x11111308 */
  if (C.zf) goto L_11111308;
  /* 11111300 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111304 je 0x1111130e */
  if (C.zf) goto L_1111130e;
  /* 11111306 jmp 0x11111312 */
  goto L_11111312;
L_11111308:;
  /* 11111308 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1111130c jmp 0x11111312 */
  goto L_11111312;
L_1111130e:;
  /* 1111130e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11111312:;
  /* 11111312 jmp 0x111115b0 */
  goto L_111115b0;
L_11111317:;
  /* 11111317 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111131a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1111131d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111321 je 0x1111132b */
  if (C.zf) goto L_1111132b;
  /* 11111323 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111327 je 0x11111335 */
  if (C.zf) goto L_11111335;
  /* 11111329 jmp 0x11111339 */
  goto L_11111339;
L_1111132b:;
  /* 1111132b mov dword ptr [0x1112f888], 1 */
  w32((uint32_t)(0x1112f888), (0x1u));
L_11111335:;
  /* 11111335 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11111339:;
  /* 11111339 jmp 0x111115b0 */
  goto L_111115b0;
L_1111133e:;
  /* 1111133e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11111341 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11111344 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111348 je 0x11111352 */
  if (C.zf) goto L_11111352;
  /* 1111134a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111134e je 0x1111135c */
  if (C.zf) goto L_1111135c;
  /* 11111350 jmp 0x11111360 */
  goto L_11111360;
L_11111352:;
  /* 11111352 mov dword ptr [0x1112f888], 1 */
  w32((uint32_t)(0x1112f888), (0x1u));
L_1111135c:;
  /* 1111135c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11111360:;
  /* 11111360 jmp 0x111115b0 */
  goto L_111115b0;
L_11111365:;
  /* 11111365 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11111368 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1111136b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111136f je 0x11111379 */
  if (C.zf) goto L_11111379;
  /* 11111371 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111375 je 0x11111383 */
  if (C.zf) goto L_11111383;
  /* 11111377 jmp 0x11111387 */
  goto L_11111387;
L_11111379:;
  /* 11111379 mov dword ptr [0x1112f888], 1 */
  w32((uint32_t)(0x1112f888), (0x1u));
L_11111383:;
  /* 11111383 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11111387:;
  /* 11111387 jmp 0x111115b0 */
  goto L_111115b0;
L_1111138c:;
  /* 1111138c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111138f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11111392 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111396 je 0x111113a0 */
  if (C.zf) goto L_111113a0;
  /* 11111398 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111139c je 0x111113aa */
  if (C.zf) goto L_111113aa;
  /* 1111139e jmp 0x111113ae */
  goto L_111113ae;
L_111113a0:;
  /* 111113a0 mov dword ptr [0x1112f888], 1 */
  w32((uint32_t)(0x1112f888), (0x1u));
L_111113aa:;
  /* 111113aa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_111113ae:;
  /* 111113ae jmp 0x111115b0 */
  goto L_111115b0;
L_111113b3:;
  /* 111113b3 push 0x1112b8d4 */
  push32((uint32_t)(0x1112b8d4u));
  /* 111113b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111113bb push ecx */
  push32((uint32_t)(ECX));
  /* 111113bc call 0x11111c10 */
  push32(0x111113c1u); f_11111c10();
  /* 111113c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111113c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111113c6 jne 0x111113d3 */
  if (!C.zf) goto L_111113d3;
  /* 111113c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111113cb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111113ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111113d1 jmp 0x111113f1 */
  goto L_111113f1;
L_111113d3:;
  /* 111113d3 push 0x1112b8d0 */
  push32((uint32_t)(0x1112b8d0u));
  /* 111113d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111113db push eax */
  push32((uint32_t)(EAX));
  /* 111113dc call 0x11111c10 */
  push32(0x111113e1u); f_11111c10();
  /* 111113e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111113e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111113e6 jne 0x111113f1 */
  if (!C.zf) goto L_111113f1;
  /* 111113e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111113eb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111113ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111113f1:;
  /* 111113f1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 111113f5 jmp 0x111115b0 */
  goto L_111115b0;
L_111113fa:;
  /* 111113fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111113fd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111401 jg 0x11111411 */
  if ((!C.zf&&C.sf==C.of)) goto L_11111411;
  /* 11111403 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11111406 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1111140c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1111140f jmp 0x1111141d */
  goto L_1111141d;
L_11111411:;
  /* 11111411 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11111414 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1111141a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1111141d:;
  /* 1111141d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111421 jle 0x111114c4 */
  if ((C.zf||C.sf!=C.of)) goto L_111114c4;
  /* 11111427 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1111142a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111142d jbe 0x111114c4 */
  if ((C.cf||C.zf)) goto L_111114c4;
  /* 11111433 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11111436 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111438 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1111143a mov ecx, dword ptr [0x1112dc98] */
  ECX = (r32((uint32_t)(0x1112dc98)));
  /* 11111440 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11111442 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11111446 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1111144c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1111144e je 0x11111487 */
  if (C.zf) goto L_11111487;
  /* 11111450 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111453 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111456 jbe 0x11111487 */
  if ((C.cf||C.zf)) goto L_11111487;
  /* 11111458 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111145b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1111145d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11111460 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11111462 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11111464 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111467 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11111469 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111146c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111146f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11111471 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11111474 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111477 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1111147a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1111147d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1111147f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111482 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111485 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11111487:;
  /* 11111487 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111148a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1111148c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1111148f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11111491 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11111493 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111496 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11111498 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111149b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111149e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111114a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111114a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111114a6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111114a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111114ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111114ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111114b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111114b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111114b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111114b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111114bc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111114bf jmp 0x1111141d */
  goto L_1111141d;
L_111114c4:;
  /* 111114c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111114c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111114ca jmp 0x111111e6 */
  goto L_111111e6;
L_111114cf:;
  /* 111114cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111114d2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111114d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111114d7 je 0x111115a2 */
  if (C.zf) goto L_111115a2;
  /* 111114dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111114e0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111114e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_111114e6:;
  /* 111114e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111114e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111114ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111114ee je 0x111115a0 */
  if (C.zf) goto L_111115a0;
  /* 111114f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111114f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111114fa je 0x111115a0 */
  if (C.zf) goto L_111115a0;
  /* 11111500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111503 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11111506 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111509 jne 0x11111519 */
  if (!C.zf) goto L_11111519;
  /* 1111150b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111150e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111511 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11111514 jmp 0x111115a0 */
  goto L_111115a0;
L_11111519:;
  /* 11111519 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111151c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1111151e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11111520 mov edx, dword ptr [0x1112dc98] */
  EDX = (r32((uint32_t)(0x1112dc98)));
  /* 11111526 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111528 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1111152c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11111531 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11111533 je 0x1111156c */
  if (C.zf) goto L_1111156c;
  /* 11111535 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111538 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111153b jbe 0x1111156c */
  if ((C.cf||C.zf)) goto L_1111156c;
  /* 1111153d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111540 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11111542 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111545 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11111547 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11111549 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111154c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1111154e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111551 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111554 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11111556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111559 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111155c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1111155f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111562 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11111564 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111567 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1111156a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1111156c:;
  /* 1111156c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111156f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11111571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111574 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11111576 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11111578 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111157b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1111157d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111580 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111583 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11111585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111588 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111158b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1111158e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111591 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11111593 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111596 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111599 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1111159b jmp 0x111114e6 */
  goto L_111114e6;
L_111115a0:;
  /* 111115a0 jmp 0x111115ab */
  goto L_111115ab;
L_111115a2:;
  /* 111115a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111115a5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111115a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_111115ab:;
  /* 111115ab jmp 0x111111e6 */
  goto L_111111e6;
L_111115b0:;
  /* 111115b0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111115b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111115b6 je 0x111115dc */
  if (C.zf) goto L_111115dc;
  /* 111115b8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111115bb push edx */
  push32((uint32_t)(EDX));
  /* 111115bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111115bf push eax */
  push32((uint32_t)(EAX));
  /* 111115c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111115c3 push ecx */
  push32((uint32_t)(ECX));
  /* 111115c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111115c7 push edx */
  push32((uint32_t)(EDX));
  /* 111115c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 111115cb push eax */
  push32((uint32_t)(EAX));
  /* 111115cc call 0x11110a10 */
  push32(0x111115d1u); f_11110a10();
  /* 111115d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111115d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111115d7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111115da jmp 0x11111657 */
  goto L_11111657;
L_111115dc:;
  /* 111115dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111115df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111115e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111115e3 mov ecx, dword ptr [0x1112dc98] */
  ECX = (r32((uint32_t)(0x1112dc98)));
  /* 111115e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111115eb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 111115ef and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 111115f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111115f7 je 0x11111628 */
  if (C.zf) goto L_11111628;
  /* 111115f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111115fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111115fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111601 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11111603 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11111605 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111608 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1111160a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111160d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111610 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11111612 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111615 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111618 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1111161b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1111161e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11111620 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111623 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111626 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11111628:;
  /* 11111628 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111162b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1111162d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111630 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11111632 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11111634 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111637 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11111639 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111163c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111163f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11111641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111644 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111647 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1111164a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1111164d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1111164f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111652 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111655 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11111657:;
  /* 11111657 jmp 0x111111e6 */
  goto L_111111e6;
L_1111165c:;
  /* 1111165c mov esp, ebp */
  ESP = (EBP);
  /* 1111165e pop ebp */
  EBP = (pop32());
  /* 1111165f ret  */
  ESPCHK(0x111111e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011700 @ 0x11111700 (650 bytes, 178 insns) */
void f_11111700(void) {
  FTRACE(0x11111700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11111700 push ebp */
  push32((uint32_t)(EBP));
  /* 11111701 mov ebp, esp */
  EBP = (ESP);
  /* 11111703 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111709 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111170d jne 0x11111869 */
  if (!C.zf) goto L_11111869;
  /* 11111713 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111716 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1111171c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11111722 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11111725 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1111172c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11111736 push 0 */
  push32((uint32_t)(0x0u));
  /* 11111738 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1111173e push edx */
  push32((uint32_t)(EDX));
  /* 1111173f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11111742 push eax */
  push32((uint32_t)(EAX));
  /* 11111743 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111746 push ecx */
  push32((uint32_t)(ECX));
  /* 11111747 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1111174a push edx */
  push32((uint32_t)(EDX));
  /* 1111174b call 0x11112b20 */
  push32(0x11111750u); f_11112b20();
  /* 11111750 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111753 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11111756 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111175a jne 0x111117ef */
  if (!C.zf) goto L_111117ef;
  /* 11111760 call dword ptr [0x11132378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132378))), 0x11111766u);
  /* 11111766 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111769 je 0x11111770 */
  if (C.zf) goto L_11111770;
  /* 1111176b jmp 0x1111184d */
  goto L_1111184d;
L_11111770:;
  /* 11111770 push 0 */
  push32((uint32_t)(0x0u));
  /* 11111772 push 0 */
  push32((uint32_t)(0x0u));
  /* 11111774 push 0 */
  push32((uint32_t)(0x0u));
  /* 11111776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111779 push eax */
  push32((uint32_t)(EAX));
  /* 1111177a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1111177d push ecx */
  push32((uint32_t)(ECX));
  /* 1111177e call 0x11112b20 */
  push32(0x11111783u); f_11112b20();
  /* 11111783 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111786 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1111178c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111793 jne 0x1111179a */
  if (!C.zf) goto L_1111179a;
  /* 11111795 jmp 0x1111184d */
  goto L_1111184d;
L_1111179a:;
  /* 1111179a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1111179c push 0x1112b8dc */
  push32((uint32_t)(0x1112b8dcu));
  /* 111117a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111117a3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 111117a9 push edx */
  push32((uint32_t)(EDX));
  /* 111117aa call 0x11103540 */
  push32(0x111117afu); f_11103540();
  /* 111117af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111117b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111117b5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111117b9 jne 0x111117c0 */
  if (!C.zf) goto L_111117c0;
  /* 111117bb jmp 0x1111184d */
  goto L_1111184d;
L_111117c0:;
  /* 111117c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111117c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111117c9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 111117cf push eax */
  push32((uint32_t)(EAX));
  /* 111117d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111117d3 push ecx */
  push32((uint32_t)(ECX));
  /* 111117d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111117d7 push edx */
  push32((uint32_t)(EDX));
  /* 111117d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111117db push eax */
  push32((uint32_t)(EAX));
  /* 111117dc call 0x11112b20 */
  push32(0x111117e1u); f_11112b20();
  /* 111117e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111117e4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111117e7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111117eb jne 0x111117ef */
  if (!C.zf) goto L_111117ef;
  /* 111117ed jmp 0x1111184d */
  goto L_1111184d;
L_111117ef:;
  /* 111117ef push 0x63 */
  push32((uint32_t)(0x63u));
  /* 111117f1 push 0x1112b8dc */
  push32((uint32_t)(0x1112b8dcu));
  /* 111117f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111117f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111117fb push ecx */
  push32((uint32_t)(ECX));
  /* 111117fc call 0x11103540 */
  push32(0x11111801u); f_11103540();
  /* 11111801 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111804 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1111180a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1111180c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11111812 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111815 jne 0x11111819 */
  if (!C.zf) goto L_11111819;
  /* 11111817 jmp 0x1111184d */
  goto L_1111184d;
L_11111819:;
  /* 11111819 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1111181c push ecx */
  push32((uint32_t)(ECX));
  /* 1111181d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11111820 push edx */
  push32((uint32_t)(EDX));
  /* 11111821 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11111827 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11111829 push ecx */
  push32((uint32_t)(ECX));
  /* 1111182a call 0x11106d60 */
  push32(0x1111182fu); f_11106d60();
  /* 1111182f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111832 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111836 je 0x11111846 */
  if (C.zf) goto L_11111846;
  /* 11111838 push 2 */
  push32((uint32_t)(0x2u));
  /* 1111183a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111183d push edx */
  push32((uint32_t)(EDX));
  /* 1111183e call 0x11103fd0 */
  push32(0x11111843u); f_11103fd0();
  /* 11111843 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11111846:;
  /* 11111846 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111848 jmp 0x11111986 */
  goto L_11111986;
L_1111184d:;
  /* 1111184d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111851 je 0x11111861 */
  if (C.zf) goto L_11111861;
  /* 11111853 push 2 */
  push32((uint32_t)(0x2u));
  /* 11111855 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11111858 push eax */
  push32((uint32_t)(EAX));
  /* 11111859 call 0x11103fd0 */
  push32(0x1111185eu); f_11103fd0();
  /* 1111185e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11111861:;
  /* 11111861 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11111864 jmp 0x11111986 */
  goto L_11111986;
L_11111869:;
  /* 11111869 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111186d jne 0x11111983 */
  if (!C.zf) goto L_11111983;
  /* 11111873 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1111187d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111880 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11111886 push 0 */
  push32((uint32_t)(0x0u));
  /* 11111888 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1111188e push edx */
  push32((uint32_t)(EDX));
  /* 1111188f push 0x1112f7a0 */
  push32((uint32_t)(0x1112f7a0u));
  /* 11111894 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111897 push eax */
  push32((uint32_t)(EAX));
  /* 11111898 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1111189b push ecx */
  push32((uint32_t)(ECX));
  /* 1111189c call 0x11112980 */
  push32(0x111118a1u); f_11112980();
  /* 111118a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111118a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111118a6 jne 0x111118b0 */
  if (!C.zf) goto L_111118b0;
  /* 111118a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111118ab jmp 0x11111986 */
  goto L_11111986;
L_111118b0:;
  /* 111118b0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 111118b6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111118b9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 111118c3 jmp 0x111118d4 */
  goto L_111118d4;
L_111118c5:;
  /* 111118c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111118cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111118ce mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_111118d4:;
  /* 111118d4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111118db jge 0x1111197f */
  if ((C.sf==C.of)) goto L_1111197f;
  /* 111118e1 cmp dword ptr [0x1112dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111118e8 jle 0x1111191b */
  if ((C.zf||C.sf!=C.of)) goto L_1111191b;
  /* 111118ea push 4 */
  push32((uint32_t)(0x4u));
  /* 111118ec mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111118f2 mov dl, byte ptr [ecx*2 + 0x1112f7a0] */
  DL = (r8((uint32_t)(ECX*2 + 0x1112f7a0)));
  /* 111118f9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 111118ff mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11111905 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1111190a push eax */
  push32((uint32_t)(EAX));
  /* 1111190b call 0x11109550 */
  push32(0x11111910u); f_11109550();
  /* 11111910 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111913 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11111919 jmp 0x1111194e */
  goto L_1111194e;
L_1111191b:;
  /* 1111191b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11111921 mov dl, byte ptr [ecx*2 + 0x1112f7a0] */
  DL = (r8((uint32_t)(ECX*2 + 0x1112f7a0)));
  /* 11111928 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1111192e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11111934 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11111939 mov ecx, dword ptr [0x1112dc98] */
  ECX = (r32((uint32_t)(0x1112dc98)));
  /* 1111193f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11111941 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11111945 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11111948 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1111194e:;
  /* 1111194e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111955 je 0x11111978 */
  if (C.zf) goto L_11111978;
  /* 11111957 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1111195d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11111960 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11111963 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1111196a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1111196e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11111974 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11111976 jmp 0x1111197a */
  goto L_1111197a;
L_11111978:;
  /* 11111978 jmp 0x1111197f */
  goto L_1111197f;
L_1111197a:;
  /* 1111197a jmp 0x111118c5 */
  goto L_111118c5;
L_1111197f:;
  /* 1111197f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111981 jmp 0x11111986 */
  goto L_11111986;
L_11111983:;
  /* 11111983 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11111986:;
  /* 11111986 mov esp, ebp */
  ESP = (EBP);
  /* 11111988 pop ebp */
  EBP = (pop32());
  /* 11111989 ret  */
  ESPCHK(0x11111700u, _esp0);
  ESP += 4; return;
}

/* FUN_10011990 @ 0x11111990 (10 bytes, 5 insns) */
void f_11111990(void) {
  FTRACE(0x11111990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11111990 push ebp */
  push32((uint32_t)(EBP));
  /* 11111991 mov ebp, esp */
  EBP = (ESP);
  /* 11111993 mov eax, dword ptr [0x1112ed88] */
  EAX = (r32((uint32_t)(0x1112ed88)));
  /* 11111998 pop ebp */
  EBP = (pop32());
  /* 11111999 ret  */
  ESPCHK(0x11111990u, _esp0);
  ESP += 4; return;
}

/* FUN_100119a0 @ 0x111119a0 (575 bytes, 196 insns) */
void f_111119a0(void) {
  FTRACE(0x111119a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111119a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111119a1 mov ebp, esp */
  EBP = (ESP);
  /* 111119a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111119a5 push 0x1112b8e8 */
  push32((uint32_t)(0x1112b8e8u));
  /* 111119aa push 0x1110c648 */
  push32((uint32_t)(0x1110c648u));
  /* 111119af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111119b5 push eax */
  push32((uint32_t)(EAX));
  /* 111119b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111119bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111119c0 push ebx */
  push32((uint32_t)(EBX));
  /* 111119c1 push esi */
  push32((uint32_t)(ESI));
  /* 111119c2 push edi */
  push32((uint32_t)(EDI));
  /* 111119c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111119c6 cmp dword ptr [0x1112f7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111119cd jne 0x11111a1e */
  if (!C.zf) goto L_11111a1e;
  /* 111119cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 111119d2 push eax */
  push32((uint32_t)(EAX));
  /* 111119d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111119d5 push 0x1112b018 */
  push32((uint32_t)(0x1112b018u));
  /* 111119da push 1 */
  push32((uint32_t)(0x1u));
  /* 111119dc call dword ptr [0x111322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322ec))), 0x111119e2u);
  /* 111119e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111119e4 je 0x111119f2 */
  if (C.zf) goto L_111119f2;
  /* 111119e6 mov dword ptr [0x1112f7ac], 1 */
  w32((uint32_t)(0x1112f7ac), (0x1u));
  /* 111119f0 jmp 0x11111a1e */
  goto L_11111a1e;
L_111119f2:;
  /* 111119f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 111119f5 push ecx */
  push32((uint32_t)(ECX));
  /* 111119f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111119f8 push 0x1112b014 */
  push32((uint32_t)(0x1112b014u));
  /* 111119fd push 1 */
  push32((uint32_t)(0x1u));
  /* 111119ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11111a01 call dword ptr [0x111322f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f0))), 0x11111a07u);
  /* 11111a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11111a09 je 0x11111a17 */
  if (C.zf) goto L_11111a17;
  /* 11111a0b mov dword ptr [0x1112f7ac], 2 */
  w32((uint32_t)(0x1112f7ac), (0x2u));
  /* 11111a15 jmp 0x11111a1e */
  goto L_11111a1e;
L_11111a17:;
  /* 11111a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111a19 jmp 0x11111bf9 */
  goto L_11111bf9;
L_11111a1e:;
  /* 11111a1e cmp dword ptr [0x1112f7ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f7ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111a25 jne 0x11111a42 */
  if (!C.zf) goto L_11111a42;
  /* 11111a27 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111a2a push edx */
  push32((uint32_t)(EDX));
  /* 11111a2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111a2e push eax */
  push32((uint32_t)(EAX));
  /* 11111a2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11111a32 push ecx */
  push32((uint32_t)(ECX));
  /* 11111a33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111a36 push edx */
  push32((uint32_t)(EDX));
  /* 11111a37 call dword ptr [0x111322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322ec))), 0x11111a3du);
  /* 11111a3d jmp 0x11111bf9 */
  goto L_11111bf9;
L_11111a42:;
  /* 11111a42 cmp dword ptr [0x1112f7ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1112f7ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111a49 jne 0x11111bf7 */
  if (!C.zf) goto L_11111bf7;
  /* 11111a4f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111a53 jne 0x11111a5d */
  if (!C.zf) goto L_11111a5d;
  /* 11111a55 mov eax, dword ptr [0x1112f720] */
  EAX = (r32((uint32_t)(0x1112f720)));
  /* 11111a5a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11111a5d:;
  /* 11111a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11111a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11111a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11111a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11111a65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111a68 push ecx */
  push32((uint32_t)(ECX));
  /* 11111a69 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11111a6c push edx */
  push32((uint32_t)(EDX));
  /* 11111a6d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11111a72 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11111a75 push eax */
  push32((uint32_t)(EAX));
  /* 11111a76 call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x11111a7cu);
  /* 11111a7c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11111a7f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111a83 jne 0x11111a8c */
  if (!C.zf) goto L_11111a8c;
  /* 11111a85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111a87 jmp 0x11111bf9 */
  goto L_11111bf9;
L_11111a8c:;
  /* 11111a8c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11111a93 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11111a96 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111a99 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11111a9b call 0x111066e0 */
  push32(0x11111aa0u); f_111066e0();
  /* 11111aa0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11111aa3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11111aa6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11111aa9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11111aac mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11111aaf push edx */
  push32((uint32_t)(EDX));
  /* 11111ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11111ab2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11111ab5 push eax */
  push32((uint32_t)(EAX));
  /* 11111ab6 call 0x111072b0 */
  push32(0x11111abbu); f_111072b0();
  /* 11111abb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111abe mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11111ac5 jmp 0x11111ade */
  goto L_11111ade;
  /* 11111ac7 mov eax, 1 */
  EAX = (0x1u);
  /* 11111acc ret  */
  ESPCHK(0x111119a0u, _esp0);
  ESP += 4; return;
  /* 11111acd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11111ad0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11111ad7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11111ade:;
  /* 11111ade cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111ae2 jne 0x11111aeb */
  if (!C.zf) goto L_11111aeb;
  /* 11111ae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111ae6 jmp 0x11111bf9 */
  goto L_11111bf9;
L_11111aeb:;
  /* 11111aeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11111aed push 0 */
  push32((uint32_t)(0x0u));
  /* 11111aef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11111af2 push ecx */
  push32((uint32_t)(ECX));
  /* 11111af3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11111af6 push edx */
  push32((uint32_t)(EDX));
  /* 11111af7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111afa push eax */
  push32((uint32_t)(EAX));
  /* 11111afb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11111afe push ecx */
  push32((uint32_t)(ECX));
  /* 11111aff push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11111b04 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11111b07 push edx */
  push32((uint32_t)(EDX));
  /* 11111b08 call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x11111b0eu);
  /* 11111b0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11111b10 jne 0x11111b19 */
  if (!C.zf) goto L_11111b19;
  /* 11111b12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111b14 jmp 0x11111bf9 */
  goto L_11111bf9;
L_11111b19:;
  /* 11111b19 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11111b20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11111b23 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11111b27 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111b2a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11111b2c call 0x111066e0 */
  push32(0x11111b31u); f_111066e0();
  /* 11111b31 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11111b34 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11111b37 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11111b3a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11111b3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11111b44 jmp 0x11111b5d */
  goto L_11111b5d;
  /* 11111b46 mov eax, 1 */
  EAX = (0x1u);
  /* 11111b4b ret  */
  ESPCHK(0x111119a0u, _esp0);
  ESP += 4; return;
  /* 11111b4c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11111b4f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11111b56 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11111b5d:;
  /* 11111b5d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111b61 jne 0x11111b6a */
  if (!C.zf) goto L_11111b6a;
  /* 11111b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111b65 jmp 0x11111bf9 */
  goto L_11111bf9;
L_11111b6a:;
  /* 11111b6a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111b6e jne 0x11111b79 */
  if (!C.zf) goto L_11111b79;
  /* 11111b70 mov edx, dword ptr [0x1112f710] */
  EDX = (r32((uint32_t)(0x1112f710)));
  /* 11111b76 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11111b79:;
  /* 11111b79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111b7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11111b7f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11111b85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111b88 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11111b8b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11111b92 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11111b95 push ecx */
  push32((uint32_t)(ECX));
  /* 11111b96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11111b99 push edx */
  push32((uint32_t)(EDX));
  /* 11111b9a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11111b9d push eax */
  push32((uint32_t)(EAX));
  /* 11111b9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111ba1 push ecx */
  push32((uint32_t)(ECX));
  /* 11111ba2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11111ba5 push edx */
  push32((uint32_t)(EDX));
  /* 11111ba6 call dword ptr [0x111322f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f0))), 0x11111bacu);
  /* 11111bac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11111baf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111bb2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11111bb5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11111bb7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11111bbc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111bc2 je 0x11111bd8 */
  if (C.zf) goto L_11111bd8;
  /* 11111bc4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111bc7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11111bca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11111bcc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11111bd0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111bd6 je 0x11111bdc */
  if (C.zf) goto L_11111bdc;
L_11111bd8:;
  /* 11111bd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111bda jmp 0x11111bf9 */
  goto L_11111bf9;
L_11111bdc:;
  /* 11111bdc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111bdf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11111be1 push eax */
  push32((uint32_t)(EAX));
  /* 11111be2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11111be5 push ecx */
  push32((uint32_t)(ECX));
  /* 11111be6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11111be9 push edx */
  push32((uint32_t)(EDX));
  /* 11111bea call 0x1110b430 */
  push32(0x11111befu); f_1110b430();
  /* 11111bef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111bf2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11111bf5 jmp 0x11111bf9 */
  goto L_11111bf9;
L_11111bf7:;
  /* 11111bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11111bf9:;
  /* 11111bf9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11111bfc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11111bff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11111c06 pop edi */
  EDI = (pop32());
  /* 11111c07 pop esi */
  ESI = (pop32());
  /* 11111c08 pop ebx */
  EBX = (pop32());
  /* 11111c09 mov esp, ebp */
  ESP = (EBP);
  /* 11111c0b pop ebp */
  EBP = (pop32());
  /* 11111c0c ret  */
  ESPCHK(0x111119a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c10 @ 0x11111c10 (208 bytes, 85 insns) */
void f_11111c10(void) {
  FTRACE(0x11111c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11111c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11111c11 mov ebp, esp */
  EBP = (ESP);
  /* 11111c13 push edi */
  push32((uint32_t)(EDI));
  /* 11111c14 push esi */
  push32((uint32_t)(ESI));
  /* 11111c15 push ebx */
  push32((uint32_t)(EBX));
  /* 11111c16 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11111c19 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11111c1c lea eax, [0x1112f708] */
  EAX = ((uint32_t)(0x1112f708));
  /* 11111c22 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111c26 jne 0x11111c63 */
  if (!C.zf) goto L_11111c63;
  /* 11111c28 mov al, 0xff */
  AL = (0xffu);
  /* 11111c2a mov edi, edi */
  EDI = (EDI);
L_11111c2c:;
  /* 11111c2c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11111c2e je 0x11111c5e */
  if (C.zf) goto L_11111c5e;
  /* 11111c30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11111c32 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11111c33 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11111c35 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11111c36 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111c38 je 0x11111c2c */
  if (C.zf) goto L_11111c2c;
  /* 11111c3a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11111c3c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111c3e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11111c40 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11111c43 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11111c45 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11111c47 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11111c49 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11111c4b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111c4d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11111c4f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11111c52 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11111c54 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11111c56 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111c58 je 0x11111c2c */
  if (C.zf) goto L_11111c2c;
  /* 11111c5a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11111c5c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11111c5e:;
  /* 11111c5e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11111c61 jmp 0x11111cdb */
  goto L_11111cdb;
L_11111c63:;
  /* 11111c63 lock inc dword ptr [0x1112f89c] */
  x86_unimpl("lock inc @ 0x11111c63");
  /* 11111c6a cmp dword ptr [0x1112f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111c71 jg 0x11111c77 */
  if ((!C.zf&&C.sf==C.of)) goto L_11111c77;
  /* 11111c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11111c75 jmp 0x11111c8c */
  goto L_11111c8c;
L_11111c77:;
  /* 11111c77 lock dec dword ptr [0x1112f89c] */
  x86_unimpl("lock dec @ 0x11111c77");
  /* 11111c7e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11111c80 call 0x11106f40 */
  push32(0x11111c85u); f_11106f40();
  /* 11111c85 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11111c8c:;
  /* 11111c8c mov eax, 0xff */
  EAX = (0xffu);
  /* 11111c91 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11111c93 nop  */
  /* nop */
L_11111c94:;
  /* 11111c94 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11111c96 je 0x11111cbf */
  if (C.zf) goto L_11111cbf;
  /* 11111c98 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11111c9a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11111c9b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11111c9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11111c9e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111ca0 je 0x11111c94 */
  if (C.zf) goto L_11111c94;
  /* 11111ca2 push eax */
  push32((uint32_t)(EAX));
  /* 11111ca3 push ebx */
  push32((uint32_t)(EBX));
  /* 11111ca4 call 0x11112d80 */
  push32(0x11111ca9u); f_11112d80();
  /* 11111ca9 mov ebx, eax */
  EBX = (EAX);
  /* 11111cab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111cae call 0x11112d80 */
  push32(0x11111cb3u); f_11112d80();
  /* 11111cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111cb6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111cb8 je 0x11111c94 */
  if (C.zf) goto L_11111c94;
  /* 11111cba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111cbc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11111cbf:;
  /* 11111cbf mov ebx, eax */
  EBX = (EAX);
  /* 11111cc1 pop eax */
  EAX = (pop32());
  /* 11111cc2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111cc4 jne 0x11111ccf */
  if (!C.zf) goto L_11111ccf;
  /* 11111cc6 lock dec dword ptr [0x1112f89c] */
  x86_unimpl("lock dec @ 0x11111cc6");
  /* 11111ccd jmp 0x11111cd9 */
  goto L_11111cd9;
L_11111ccf:;
  /* 11111ccf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11111cd1 call 0x11106fe0 */
  push32(0x11111cd6u); f_11106fe0();
  /* 11111cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11111cd9:;
  /* 11111cd9 mov eax, ebx */
  EAX = (EBX);
L_11111cdb:;
  /* 11111cdb pop ebx */
  EBX = (pop32());
  /* 11111cdc pop esi */
  ESI = (pop32());
  /* 11111cdd pop edi */
  EDI = (pop32());
  /* 11111cde leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11111cdf ret  */
  ESPCHK(0x11111c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ce0 @ 0x11111ce0 (257 bytes, 103 insns) */
void f_11111ce0(void) {
  FTRACE(0x11111ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11111ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11111ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11111ce3 push edi */
  push32((uint32_t)(EDI));
  /* 11111ce4 push esi */
  push32((uint32_t)(ESI));
  /* 11111ce5 push ebx */
  push32((uint32_t)(EBX));
  /* 11111ce6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11111ce9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11111ceb je 0x11111dda */
  if (C.zf) goto L_11111dda;
  /* 11111cf1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11111cf4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11111cf7 lea eax, [0x1112f708] */
  EAX = ((uint32_t)(0x1112f708));
  /* 11111cfd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111d01 jne 0x11111d51 */
  if (!C.zf) goto L_11111d51;
  /* 11111d03 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11111d05 mov bl, 0x5a */
  BL = (0x5au);
  /* 11111d07 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11111d09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11111d0c:;
  /* 11111d0c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11111d0e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11111d10 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11111d12 je 0x11111d35 */
  if (C.zf) goto L_11111d35;
  /* 11111d14 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11111d16 je 0x11111d35 */
  if (C.zf) goto L_11111d35;
  /* 11111d18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11111d19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11111d1a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111d1c jb 0x11111d24 */
  if (C.cf) goto L_11111d24;
  /* 11111d1e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111d20 ja 0x11111d24 */
  if ((!C.cf&&!C.zf)) goto L_11111d24;
  /* 11111d22 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11111d24:;
  /* 11111d24 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111d26 jb 0x11111d2e */
  if (C.cf) goto L_11111d2e;
  /* 11111d28 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111d2a ja 0x11111d2e */
  if ((!C.cf&&!C.zf)) goto L_11111d2e;
  /* 11111d2c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11111d2e:;
  /* 11111d2e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111d30 jne 0x11111d3f */
  if (!C.zf) goto L_11111d3f;
  /* 11111d32 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11111d33 jne 0x11111d0c */
  if (!C.zf) goto L_11111d0c;
L_11111d35:;
  /* 11111d35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11111d37 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11111d39 je 0x11111dda */
  if (C.zf) goto L_11111dda;
L_11111d3f:;
  /* 11111d3f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11111d44 jb 0x11111dda */
  if (C.cf) goto L_11111dda;
  /* 11111d4a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11111d4c jmp 0x11111dda */
  goto L_11111dda;
L_11111d51:;
  /* 11111d51 lock inc dword ptr [0x1112f89c] */
  x86_unimpl("lock inc @ 0x11111d51");
  /* 11111d58 cmp dword ptr [0x1112f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111d5f jg 0x11111d65 */
  if ((!C.zf&&C.sf==C.of)) goto L_11111d65;
  /* 11111d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11111d63 jmp 0x11111d7e */
  goto L_11111d7e;
L_11111d65:;
  /* 11111d65 lock dec dword ptr [0x1112f89c] */
  x86_unimpl("lock dec @ 0x11111d65");
  /* 11111d6c mov ebx, ecx */
  EBX = (ECX);
  /* 11111d6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11111d70 call 0x11106f40 */
  push32(0x11111d75u); f_11106f40();
  /* 11111d75 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11111d7c mov ecx, ebx */
  ECX = (EBX);
L_11111d7e:;
  /* 11111d7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111d80 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11111d82 mov edi, edi */
  EDI = (EDI);
L_11111d84:;
  /* 11111d84 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11111d86 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111d88 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11111d8a je 0x11111daf */
  if (C.zf) goto L_11111daf;
  /* 11111d8c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11111d8e je 0x11111daf */
  if (C.zf) goto L_11111daf;
  /* 11111d90 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11111d91 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11111d92 push ecx */
  push32((uint32_t)(ECX));
  /* 11111d93 push eax */
  push32((uint32_t)(EAX));
  /* 11111d94 push ebx */
  push32((uint32_t)(EBX));
  /* 11111d95 call 0x11112d80 */
  push32(0x11111d9au); f_11112d80();
  /* 11111d9a mov ebx, eax */
  EBX = (EAX);
  /* 11111d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111d9f call 0x11112d80 */
  push32(0x11111da4u); f_11112d80();
  /* 11111da4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111da7 pop ecx */
  ECX = (pop32());
  /* 11111da8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111daa jne 0x11111db5 */
  if (!C.zf) goto L_11111db5;
  /* 11111dac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11111dad jne 0x11111d84 */
  if (!C.zf) goto L_11111d84;
L_11111daf:;
  /* 11111daf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11111db1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111db3 je 0x11111dbe */
  if (C.zf) goto L_11111dbe;
L_11111db5:;
  /* 11111db5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11111dba jb 0x11111dbe */
  if (C.cf) goto L_11111dbe;
  /* 11111dbc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11111dbe:;
  /* 11111dbe pop eax */
  EAX = (pop32());
  /* 11111dbf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111dc1 jne 0x11111dcc */
  if (!C.zf) goto L_11111dcc;
  /* 11111dc3 lock dec dword ptr [0x1112f89c] */
  x86_unimpl("lock dec @ 0x11111dc3");
  /* 11111dca jmp 0x11111dda */
  goto L_11111dda;
L_11111dcc:;
  /* 11111dcc mov ebx, ecx */
  EBX = (ECX);
  /* 11111dce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11111dd0 call 0x11106fe0 */
  push32(0x11111dd5u); f_11106fe0();
  /* 11111dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111dd8 mov ecx, ebx */
  ECX = (EBX);
L_11111dda:;
  /* 11111dda mov eax, ecx */
  EAX = (ECX);
  /* 11111ddc pop ebx */
  EBX = (pop32());
  /* 11111ddd pop esi */
  ESI = (pop32());
  /* 11111dde pop edi */
  EDI = (pop32());
  /* 11111ddf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11111de0 ret  */
  ESPCHK(0x11111ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011df0 @ 0x11111df0 (255 bytes, 88 insns) */
void f_11111df0(void) {
  FTRACE(0x11111df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11111df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11111df1 mov ebp, esp */
  EBP = (ESP);
  /* 11111df3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11111df6:;
  /* 11111df6 cmp dword ptr [0x1112dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111dfd jle 0x11111e16 */
  if ((C.zf||C.sf!=C.of)) goto L_11111e16;
  /* 11111dff push 8 */
  push32((uint32_t)(0x8u));
  /* 11111e01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111e04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11111e06 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11111e08 push ecx */
  push32((uint32_t)(ECX));
  /* 11111e09 call 0x11109550 */
  push32(0x11111e0eu); f_11109550();
  /* 11111e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111e11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11111e14 jmp 0x11111e2f */
  goto L_11111e2f;
L_11111e16:;
  /* 11111e16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111e19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111e1b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11111e1d mov ecx, dword ptr [0x1112dc98] */
  ECX = (r32((uint32_t)(0x1112dc98)));
  /* 11111e23 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11111e25 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11111e29 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11111e2c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11111e2f:;
  /* 11111e2f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111e33 je 0x11111e40 */
  if (C.zf) goto L_11111e40;
  /* 11111e35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111e38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111e3b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11111e3e jmp 0x11111df6 */
  goto L_11111df6;
L_11111e40:;
  /* 11111e40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111e43 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11111e45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11111e47 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11111e4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111e4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111e50 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11111e53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111e56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11111e59 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111e5d je 0x11111e65 */
  if (C.zf) goto L_11111e65;
  /* 11111e5f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111e63 jne 0x11111e78 */
  if (!C.zf) goto L_11111e78;
L_11111e65:;
  /* 11111e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111e68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111e6a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11111e6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11111e6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111e72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111e75 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11111e78:;
  /* 11111e78 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11111e7f:;
  /* 11111e7f cmp dword ptr [0x1112dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111e86 jle 0x11111e9b */
  if ((C.zf||C.sf!=C.of)) goto L_11111e9b;
  /* 11111e88 push 4 */
  push32((uint32_t)(0x4u));
  /* 11111e8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111e8d push edx */
  push32((uint32_t)(EDX));
  /* 11111e8e call 0x11109550 */
  push32(0x11111e93u); f_11109550();
  /* 11111e93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111e96 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11111e99 jmp 0x11111eb0 */
  goto L_11111eb0;
L_11111e9b:;
  /* 11111e9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111e9e mov ecx, dword ptr [0x1112dc98] */
  ECX = (r32((uint32_t)(0x1112dc98)));
  /* 11111ea4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11111ea6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11111eaa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11111ead mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11111eb0:;
  /* 11111eb0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111eb4 je 0x11111edb */
  if (C.zf) goto L_11111edb;
  /* 11111eb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11111eb9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11111ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111ebf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11111ec3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11111ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111ec9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11111ecb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11111ecd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11111ed0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111ed3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111ed6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11111ed9 jmp 0x11111e7f */
  goto L_11111e7f;
L_11111edb:;
  /* 11111edb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111edf jne 0x11111ee8 */
  if (!C.zf) goto L_11111ee8;
  /* 11111ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11111ee4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11111ee6 jmp 0x11111eeb */
  goto L_11111eeb;
L_11111ee8:;
  /* 11111ee8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11111eeb:;
  /* 11111eeb mov esp, ebp */
  ESP = (EBP);
  /* 11111eed pop ebp */
  EBP = (pop32());
  /* 11111eee ret  */
  ESPCHK(0x11111df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ef0 @ 0x11111ef0 (17 bytes, 8 insns) */
void f_11111ef0(void) {
  FTRACE(0x11111ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11111ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11111ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11111ef3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111ef6 push eax */
  push32((uint32_t)(EAX));
  /* 11111ef7 call 0x11111df0 */
  push32(0x11111efcu); f_11111df0();
  /* 11111efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111eff pop ebp */
  EBP = (pop32());
  /* 11111f00 ret  */
  ESPCHK(0x11111ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f10 @ 0x11111f10 (297 bytes, 106 insns) */
void f_11111f10(void) {
  FTRACE(0x11111f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11111f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11111f11 mov ebp, esp */
  EBP = (ESP);
  /* 11111f13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111f16 push esi */
  push32((uint32_t)(ESI));
L_11111f17:;
  /* 11111f17 cmp dword ptr [0x1112dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111f1e jle 0x11111f37 */
  if ((C.zf||C.sf!=C.of)) goto L_11111f37;
  /* 11111f20 push 8 */
  push32((uint32_t)(0x8u));
  /* 11111f22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111f25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11111f27 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11111f29 push ecx */
  push32((uint32_t)(ECX));
  /* 11111f2a call 0x11109550 */
  push32(0x11111f2fu); f_11109550();
  /* 11111f2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111f32 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11111f35 jmp 0x11111f50 */
  goto L_11111f50;
L_11111f37:;
  /* 11111f37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111f3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111f3c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11111f3e mov ecx, dword ptr [0x1112dc98] */
  ECX = (r32((uint32_t)(0x1112dc98)));
  /* 11111f44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11111f46 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11111f4a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11111f4d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11111f50:;
  /* 11111f50 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111f54 je 0x11111f61 */
  if (C.zf) goto L_11111f61;
  /* 11111f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111f59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111f5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11111f5f jmp 0x11111f17 */
  goto L_11111f17;
L_11111f61:;
  /* 11111f61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111f64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11111f66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11111f68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11111f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111f6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111f71 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11111f74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111f77 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11111f7a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111f7e je 0x11111f86 */
  if (C.zf) goto L_11111f86;
  /* 11111f80 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111f84 jne 0x11111f99 */
  if (!C.zf) goto L_11111f99;
L_11111f86:;
  /* 11111f86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111f89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11111f8b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11111f8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11111f90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11111f93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111f96 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11111f99:;
  /* 11111f99 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11111fa0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11111fa7:;
  /* 11111fa7 cmp dword ptr [0x1112dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111fae jle 0x11111fc3 */
  if ((C.zf||C.sf!=C.of)) goto L_11111fc3;
  /* 11111fb0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11111fb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111fb5 push edx */
  push32((uint32_t)(EDX));
  /* 11111fb6 call 0x11109550 */
  push32(0x11111fbbu); f_11109550();
  /* 11111fbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11111fbe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11111fc1 jmp 0x11111fd8 */
  goto L_11111fd8;
L_11111fc3:;
  /* 11111fc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111fc6 mov ecx, dword ptr [0x1112dc98] */
  ECX = (r32((uint32_t)(0x1112dc98)));
  /* 11111fcc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11111fce mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11111fd2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11111fd5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11111fd8:;
  /* 11111fd8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11111fdc je 0x11112019 */
  if (C.zf) goto L_11112019;
  /* 11111fde push 0 */
  push32((uint32_t)(0x0u));
  /* 11111fe0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11111fe2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11111fe5 push eax */
  push32((uint32_t)(EAX));
  /* 11111fe6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11111fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 11111fea call 0x11112eb0 */
  push32(0x11111fefu); f_11112eb0();
  /* 11111fef mov ecx, eax */
  ECX = (EAX);
  /* 11111ff1 mov esi, edx */
  ESI = (EDX);
  /* 11111ff3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11111ff6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11111ff9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11111ffa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11111ffc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11111ffe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11112001 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11112004 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112009 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1111200b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1111200e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112011 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112014 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11112017 jmp 0x11111fa7 */
  goto L_11111fa7;
L_11112019:;
  /* 11112019 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111201d jne 0x1111202e */
  if (!C.zf) goto L_1111202e;
  /* 1111201f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112022 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11112024 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11112027 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111202a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1111202c jmp 0x11112034 */
  goto L_11112034;
L_1111202e:;
  /* 1111202e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112031 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11112034:;
  /* 11112034 pop esi */
  ESI = (pop32());
  /* 11112035 mov esp, ebp */
  ESP = (EBP);
  /* 11112037 pop ebp */
  EBP = (pop32());
  /* 11112038 ret  */
  ESPCHK(0x11111f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012040 @ 0x11112040 (61 bytes, 18 insns) */
void f_11112040(void) {
  FTRACE(0x11112040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112040 push ebp */
  push32((uint32_t)(EBP));
  /* 11112041 mov ebp, esp */
  EBP = (ESP);
  /* 11112043 cmp dword ptr [0x1112f868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111204a jne 0x1111207b */
  if (!C.zf) goto L_1111207b;
  /* 1111204c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1111204e call 0x11106f40 */
  push32(0x11112053u); f_11106f40();
  /* 11112053 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112056 cmp dword ptr [0x1112f868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111205d jne 0x11112071 */
  if (!C.zf) goto L_11112071;
  /* 1111205f call 0x111120a0 */
  push32(0x11112064u); f_111120a0();
  /* 11112064 mov eax, dword ptr [0x1112f868] */
  EAX = (r32((uint32_t)(0x1112f868)));
  /* 11112069 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111206c mov dword ptr [0x1112f868], eax */
  w32((uint32_t)(0x1112f868), (EAX));
L_11112071:;
  /* 11112071 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11112073 call 0x11106fe0 */
  push32(0x11112078u); f_11106fe0();
  /* 11112078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1111207b:;
  /* 1111207b pop ebp */
  EBP = (pop32());
  /* 1111207c ret  */
  ESPCHK(0x11112040u, _esp0);
  ESP += 4; return;
}

/* FUN_10012080 @ 0x11112080 (30 bytes, 11 insns) */
void f_11112080(void) {
  FTRACE(0x11112080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112080 push ebp */
  push32((uint32_t)(EBP));
  /* 11112081 mov ebp, esp */
  EBP = (ESP);
  /* 11112083 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11112085 call 0x11106f40 */
  push32(0x1111208au); f_11106f40();
  /* 1111208a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111208d call 0x111120a0 */
  push32(0x11112092u); f_111120a0();
  /* 11112092 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11112094 call 0x11106fe0 */
  push32(0x11112099u); f_11106fe0();
  /* 11112099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111209c pop ebp */
  EBP = (pop32());
  /* 1111209d ret  */
  ESPCHK(0x11112080u, _esp0);
  ESP += 4; return;
}

/* FUN_100120a0 @ 0x111120a0 (939 bytes, 266 insns) */
void f_111120a0(void) {
  FTRACE(0x111120a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111120a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111120a1 mov ebp, esp */
  EBP = (ESP);
  /* 111120a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111120a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111120ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 111120af call 0x11106f40 */
  push32(0x111120b4u); f_11106f40();
  /* 111120b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111120b7 mov dword ptr [0x1112f7b0], 0 */
  w32((uint32_t)(0x1112f7b0), (0x0u));
  /* 111120c1 mov dword ptr [0x1112ee38], 0xffffffff */
  w32((uint32_t)(0x1112ee38), (0xffffffffu));
  /* 111120cb mov eax, dword ptr [0x1112ee38] */
  EAX = (r32((uint32_t)(0x1112ee38)));
  /* 111120d0 mov dword ptr [0x1112ee28], eax */
  w32((uint32_t)(0x1112ee28), (EAX));
  /* 111120d5 push 0x1112b948 */
  push32((uint32_t)(0x1112b948u));
  /* 111120da call 0x11112f20 */
  push32(0x111120dfu); f_11112f20();
  /* 111120df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111120e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111120e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111120e9 jne 0x11112223 */
  if (!C.zf) goto L_11112223;
  /* 111120ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 111120f1 call 0x11106fe0 */
  push32(0x111120f6u); f_11106fe0();
  /* 111120f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111120f9 push 0x1112f7b8 */
  push32((uint32_t)(0x1112f7b8u));
  /* 111120fe call dword ptr [0x111322b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322b0))), 0x11112104u);
  /* 11112104 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112107 je 0x1111221e */
  if (C.zf) goto L_1111221e;
  /* 1111210d mov dword ptr [0x1112f7b0], 1 */
  w32((uint32_t)(0x1112f7b0), (0x1u));
  /* 11112117 mov ecx, dword ptr [0x1112f7b8] */
  ECX = (r32((uint32_t)(0x1112f7b8)));
  /* 1111211d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11112120 mov dword ptr [0x1112ed90], ecx */
  w32((uint32_t)(0x1112ed90), (ECX));
  /* 11112126 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11112128 mov dx, word ptr [0x1112f7fe] */
  DX = (r16((uint32_t)(0x1112f7fe)));
  /* 1111212f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11112131 je 0x11112149 */
  if (C.zf) goto L_11112149;
  /* 11112133 mov eax, dword ptr [0x1112f80c] */
  EAX = (r32((uint32_t)(0x1112f80c)));
  /* 11112138 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1111213b mov ecx, dword ptr [0x1112ed90] */
  ECX = (r32((uint32_t)(0x1112ed90)));
  /* 11112141 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112143 mov dword ptr [0x1112ed90], ecx */
  w32((uint32_t)(0x1112ed90), (ECX));
L_11112149:;
  /* 11112149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1111214b mov dx, word ptr [0x1112f852] */
  DX = (r16((uint32_t)(0x1112f852)));
  /* 11112152 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11112154 je 0x1111217e */
  if (C.zf) goto L_1111217e;
  /* 11112156 cmp dword ptr [0x1112f860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111215d je 0x1111217e */
  if (C.zf) goto L_1111217e;
  /* 1111215f mov dword ptr [0x1112ed94], 1 */
  w32((uint32_t)(0x1112ed94), (0x1u));
  /* 11112169 mov eax, dword ptr [0x1112f860] */
  EAX = (r32((uint32_t)(0x1112f860)));
  /* 1111216e sub eax, dword ptr [0x1112f80c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112f80c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11112174 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11112177 mov dword ptr [0x1112ed98], eax */
  w32((uint32_t)(0x1112ed98), (EAX));
  /* 1111217c jmp 0x11112192 */
  goto L_11112192;
L_1111217e:;
  /* 1111217e mov dword ptr [0x1112ed94], 0 */
  w32((uint32_t)(0x1112ed94), (0x0u));
  /* 11112188 mov dword ptr [0x1112ed98], 0 */
  w32((uint32_t)(0x1112ed98), (0x0u));
L_11112192:;
  /* 11112192 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11112195 push ecx */
  push32((uint32_t)(ECX));
  /* 11112196 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112198 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1111219a mov edx, dword ptr [0x1112ee1c] */
  EDX = (r32((uint32_t)(0x1112ee1c)));
  /* 111121a0 push edx */
  push32((uint32_t)(EDX));
  /* 111121a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111121a3 push 0x1112f7bc */
  push32((uint32_t)(0x1112f7bcu));
  /* 111121a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111121ad mov eax, dword ptr [0x1112f720] */
  EAX = (r32((uint32_t)(0x1112f720)));
  /* 111121b2 push eax */
  push32((uint32_t)(EAX));
  /* 111121b3 call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x111121b9u);
  /* 111121b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111121bb je 0x111121cf */
  if (C.zf) goto L_111121cf;
  /* 111121bd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111121c1 jne 0x111121cf */
  if (!C.zf) goto L_111121cf;
  /* 111121c3 mov ecx, dword ptr [0x1112ee1c] */
  ECX = (r32((uint32_t)(0x1112ee1c)));
  /* 111121c9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 111121cd jmp 0x111121d8 */
  goto L_111121d8;
L_111121cf:;
  /* 111121cf mov edx, dword ptr [0x1112ee1c] */
  EDX = (r32((uint32_t)(0x1112ee1c)));
  /* 111121d5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_111121d8:;
  /* 111121d8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 111121db push eax */
  push32((uint32_t)(EAX));
  /* 111121dc push 0 */
  push32((uint32_t)(0x0u));
  /* 111121de push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111121e0 mov ecx, dword ptr [0x1112ee20] */
  ECX = (r32((uint32_t)(0x1112ee20)));
  /* 111121e6 push ecx */
  push32((uint32_t)(ECX));
  /* 111121e7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111121e9 push 0x1112f810 */
  push32((uint32_t)(0x1112f810u));
  /* 111121ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111121f3 mov edx, dword ptr [0x1112f720] */
  EDX = (r32((uint32_t)(0x1112f720)));
  /* 111121f9 push edx */
  push32((uint32_t)(EDX));
  /* 111121fa call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x11112200u);
  /* 11112200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11112202 je 0x11112215 */
  if (C.zf) goto L_11112215;
  /* 11112204 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112208 jne 0x11112215 */
  if (!C.zf) goto L_11112215;
  /* 1111220a mov eax, dword ptr [0x1112ee20] */
  EAX = (r32((uint32_t)(0x1112ee20)));
  /* 1111220f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11112213 jmp 0x1111221e */
  goto L_1111221e;
L_11112215:;
  /* 11112215 mov ecx, dword ptr [0x1112ee20] */
  ECX = (r32((uint32_t)(0x1112ee20)));
  /* 1111221b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1111221e:;
  /* 1111221e jmp 0x11112447 */
  goto L_11112447;
L_11112223:;
  /* 11112223 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112226 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11112229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1111222b je 0x1111224d */
  if (C.zf) goto L_1111224d;
  /* 1111222d cmp dword ptr [0x1112f864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112234 je 0x1111225c */
  if (C.zf) goto L_1111225c;
  /* 11112236 mov ecx, dword ptr [0x1112f864] */
  ECX = (r32((uint32_t)(0x1112f864)));
  /* 1111223c push ecx */
  push32((uint32_t)(ECX));
  /* 1111223d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112240 push edx */
  push32((uint32_t)(EDX));
  /* 11112241 call 0x1110f1d0 */
  push32(0x11112246u); f_1110f1d0();
  /* 11112246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1111224b jne 0x1111225c */
  if (!C.zf) goto L_1111225c;
L_1111224d:;
  /* 1111224d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1111224f call 0x11106fe0 */
  push32(0x11112254u); f_11106fe0();
  /* 11112254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112257 jmp 0x11112447 */
  goto L_11112447;
L_1111225c:;
  /* 1111225c push 2 */
  push32((uint32_t)(0x2u));
  /* 1111225e mov eax, dword ptr [0x1112f864] */
  EAX = (r32((uint32_t)(0x1112f864)));
  /* 11112263 push eax */
  push32((uint32_t)(EAX));
  /* 11112264 call 0x11103fd0 */
  push32(0x11112269u); f_11103fd0();
  /* 11112269 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111226c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11112271 push 0x1112b940 */
  push32((uint32_t)(0x1112b940u));
  /* 11112276 push 2 */
  push32((uint32_t)(0x2u));
  /* 11112278 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111227b push ecx */
  push32((uint32_t)(ECX));
  /* 1111227c call 0x11106370 */
  push32(0x11112281u); f_11106370();
  /* 11112281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112284 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112287 push eax */
  push32((uint32_t)(EAX));
  /* 11112288 call 0x11103540 */
  push32(0x1111228du); f_11103540();
  /* 1111228d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112290 mov dword ptr [0x1112f864], eax */
  w32((uint32_t)(0x1112f864), (EAX));
  /* 11112295 cmp dword ptr [0x1112f864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111229c jne 0x111122ad */
  if (!C.zf) goto L_111122ad;
  /* 1111229e push 0xc */
  push32((uint32_t)(0xcu));
  /* 111122a0 call 0x11106fe0 */
  push32(0x111122a5u); f_11106fe0();
  /* 111122a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111122a8 jmp 0x11112447 */
  goto L_11112447;
L_111122ad:;
  /* 111122ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111122b0 push edx */
  push32((uint32_t)(EDX));
  /* 111122b1 mov eax, dword ptr [0x1112f864] */
  EAX = (r32((uint32_t)(0x1112f864)));
  /* 111122b6 push eax */
  push32((uint32_t)(EAX));
  /* 111122b7 call 0x111064f0 */
  push32(0x111122bcu); f_111064f0();
  /* 111122bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111122bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 111122c1 call 0x11106fe0 */
  push32(0x111122c6u); f_11106fe0();
  /* 111122c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111122c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 111122cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111122ce push ecx */
  push32((uint32_t)(ECX));
  /* 111122cf mov edx, dword ptr [0x1112ee1c] */
  EDX = (r32((uint32_t)(0x1112ee1c)));
  /* 111122d5 push edx */
  push32((uint32_t)(EDX));
  /* 111122d6 call 0x11106d60 */
  push32(0x111122dbu); f_11106d60();
  /* 111122db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111122de mov eax, dword ptr [0x1112ee1c] */
  EAX = (r32((uint32_t)(0x1112ee1c)));
  /* 111122e3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 111122e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111122ea add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111122ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111122f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111122f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111122f6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111122f9 jne 0x1111230d */
  if (!C.zf) goto L_1111230d;
  /* 111122fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111122fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112301 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11112304 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112307 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111230a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1111230d:;
  /* 1111230d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112310 push eax */
  push32((uint32_t)(EAX));
  /* 11112311 call 0x11111df0 */
  push32(0x11112316u); f_11111df0();
  /* 11112316 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112319 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1111231f mov dword ptr [0x1112ed90], eax */
  w32((uint32_t)(0x1112ed90), (EAX));
L_11112324:;
  /* 11112324 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112327 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1111232a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111232d je 0x11112345 */
  if (C.zf) goto L_11112345;
  /* 1111232f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112332 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11112335 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112338 jl 0x11112350 */
  if ((C.sf!=C.of)) goto L_11112350;
  /* 1111233a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111233d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11112340 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112343 jg 0x11112350 */
  if ((!C.zf&&C.sf==C.of)) goto L_11112350;
L_11112345:;
  /* 11112345 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112348 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111234b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1111234e jmp 0x11112324 */
  goto L_11112324;
L_11112350:;
  /* 11112350 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112353 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11112356 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112359 jne 0x111123f5 */
  if (!C.zf) goto L_111123f5;
  /* 1111235f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112362 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112365 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11112368 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111236b push edx */
  push32((uint32_t)(EDX));
  /* 1111236c call 0x11111df0 */
  push32(0x11112371u); f_11111df0();
  /* 11112371 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112374 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11112377 mov ecx, dword ptr [0x1112ed90] */
  ECX = (r32((uint32_t)(0x1112ed90)));
  /* 1111237d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111237f mov dword ptr [0x1112ed90], ecx */
  w32((uint32_t)(0x1112ed90), (ECX));
L_11112385:;
  /* 11112385 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112388 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1111238b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111238e jl 0x111123a6 */
  if ((C.sf!=C.of)) goto L_111123a6;
  /* 11112390 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112393 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11112396 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112399 jg 0x111123a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_111123a6;
  /* 1111239b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111239e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111123a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111123a4 jmp 0x11112385 */
  goto L_11112385;
L_111123a6:;
  /* 111123a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111123a9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111123ac cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111123af jne 0x111123f5 */
  if (!C.zf) goto L_111123f5;
  /* 111123b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111123b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111123b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111123ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111123bd push ecx */
  push32((uint32_t)(ECX));
  /* 111123be call 0x11111df0 */
  push32(0x111123c3u); f_11111df0();
  /* 111123c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111123c6 mov edx, dword ptr [0x1112ed90] */
  EDX = (r32((uint32_t)(0x1112ed90)));
  /* 111123cc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111123ce mov dword ptr [0x1112ed90], edx */
  w32((uint32_t)(0x1112ed90), (EDX));
L_111123d4:;
  /* 111123d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111123d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111123da cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111123dd jl 0x111123f5 */
  if ((C.sf!=C.of)) goto L_111123f5;
  /* 111123df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111123e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111123e5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111123e8 jg 0x111123f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_111123f5;
  /* 111123ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111123ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111123f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111123f3 jmp 0x111123d4 */
  goto L_111123d4;
L_111123f5:;
  /* 111123f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111123f9 je 0x11112409 */
  if (C.zf) goto L_11112409;
  /* 111123fb mov edx, dword ptr [0x1112ed90] */
  EDX = (r32((uint32_t)(0x1112ed90)));
  /* 11112401 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11112403 mov dword ptr [0x1112ed90], edx */
  w32((uint32_t)(0x1112ed90), (EDX));
L_11112409:;
  /* 11112409 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111240c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1111240f mov dword ptr [0x1112ed94], ecx */
  w32((uint32_t)(0x1112ed94), (ECX));
  /* 11112415 cmp dword ptr [0x1112ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111241c je 0x1111243e */
  if (C.zf) goto L_1111243e;
  /* 1111241e push 3 */
  push32((uint32_t)(0x3u));
  /* 11112420 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112423 push edx */
  push32((uint32_t)(EDX));
  /* 11112424 mov eax, dword ptr [0x1112ee20] */
  EAX = (r32((uint32_t)(0x1112ee20)));
  /* 11112429 push eax */
  push32((uint32_t)(EAX));
  /* 1111242a call 0x11106d60 */
  push32(0x1111242fu); f_11106d60();
  /* 1111242f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112432 mov ecx, dword ptr [0x1112ee20] */
  ECX = (r32((uint32_t)(0x1112ee20)));
  /* 11112438 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1111243c jmp 0x11112447 */
  goto L_11112447;
L_1111243e:;
  /* 1111243e mov edx, dword ptr [0x1112ee20] */
  EDX = (r32((uint32_t)(0x1112ee20)));
  /* 11112444 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11112447:;
  /* 11112447 mov esp, ebp */
  ESP = (EBP);
  /* 11112449 pop ebp */
  EBP = (pop32());
  /* 1111244a ret  */
  ESPCHK(0x111120a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012450 @ 0x11112450 (46 bytes, 18 insns) */
void f_11112450(void) {
  FTRACE(0x11112450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112450 push ebp */
  push32((uint32_t)(EBP));
  /* 11112451 mov ebp, esp */
  EBP = (ESP);
  /* 11112453 push ecx */
  push32((uint32_t)(ECX));
  /* 11112454 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11112456 call 0x11106f40 */
  push32(0x1111245bu); f_11106f40();
  /* 1111245b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111245e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112461 push eax */
  push32((uint32_t)(EAX));
  /* 11112462 call 0x11112480 */
  push32(0x11112467u); f_11112480();
  /* 11112467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111246a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1111246d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1111246f call 0x11106fe0 */
  push32(0x11112474u); f_11106fe0();
  /* 11112474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111247a mov esp, ebp */
  ESP = (EBP);
  /* 1111247c pop ebp */
  EBP = (pop32());
  /* 1111247d ret  */
  ESPCHK(0x11112450u, _esp0);
  ESP += 4; return;
}

/* FUN_10012480 @ 0x11112480 (762 bytes, 246 insns) */
void f_11112480(void) {
  FTRACE(0x11112480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112480 push ebp */
  push32((uint32_t)(EBP));
  /* 11112481 mov ebp, esp */
  EBP = (ESP);
  /* 11112483 push ecx */
  push32((uint32_t)(ECX));
  /* 11112484 cmp dword ptr [0x1112ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111248b jne 0x11112494 */
  if (!C.zf) goto L_11112494;
  /* 1111248d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1111248f jmp 0x11112776 */
  goto L_11112776;
L_11112494:;
  /* 11112494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112497 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1111249a cmp ecx, dword ptr [0x1112ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1112ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111124a0 jne 0x111124b4 */
  if (!C.zf) goto L_111124b4;
  /* 111124a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111124a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111124a8 cmp eax, dword ptr [0x1112ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111124ae je 0x1111267b */
  if (C.zf) goto L_1111267b;
L_111124b4:;
  /* 111124b4 cmp dword ptr [0x1112f7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111124bb je 0x11112635 */
  if (C.zf) goto L_11112635;
  /* 111124c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111124c3 mov cx, word ptr [0x1112f850] */
  CX = (r16((uint32_t)(0x1112f850)));
  /* 111124ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111124cc jne 0x11112529 */
  if (!C.zf) goto L_11112529;
  /* 111124ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111124d0 mov dx, word ptr [0x1112f85e] */
  DX = (r16((uint32_t)(0x1112f85e)));
  /* 111124d7 push edx */
  push32((uint32_t)(EDX));
  /* 111124d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111124da mov ax, word ptr [0x1112f85c] */
  AX = (r16((uint32_t)(0x1112f85c)));
  /* 111124e0 push eax */
  push32((uint32_t)(EAX));
  /* 111124e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111124e3 mov cx, word ptr [0x1112f85a] */
  CX = (r16((uint32_t)(0x1112f85a)));
  /* 111124ea push ecx */
  push32((uint32_t)(ECX));
  /* 111124eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111124ed mov dx, word ptr [0x1112f858] */
  DX = (r16((uint32_t)(0x1112f858)));
  /* 111124f4 push edx */
  push32((uint32_t)(EDX));
  /* 111124f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111124f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111124f9 mov ax, word ptr [0x1112f854] */
  AX = (r16((uint32_t)(0x1112f854)));
  /* 111124ff push eax */
  push32((uint32_t)(EAX));
  /* 11112500 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11112502 mov cx, word ptr [0x1112f856] */
  CX = (r16((uint32_t)(0x1112f856)));
  /* 11112509 push ecx */
  push32((uint32_t)(ECX));
  /* 1111250a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1111250c mov dx, word ptr [0x1112f852] */
  DX = (r16((uint32_t)(0x1112f852)));
  /* 11112513 push edx */
  push32((uint32_t)(EDX));
  /* 11112514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112517 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1111251a push ecx */
  push32((uint32_t)(ECX));
  /* 1111251b push 1 */
  push32((uint32_t)(0x1u));
  /* 1111251d push 1 */
  push32((uint32_t)(0x1u));
  /* 1111251f call 0x11112780 */
  push32(0x11112524u); f_11112780();
  /* 11112524 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112527 jmp 0x1111257a */
  goto L_1111257a;
L_11112529:;
  /* 11112529 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1111252b mov dx, word ptr [0x1112f85e] */
  DX = (r16((uint32_t)(0x1112f85e)));
  /* 11112532 push edx */
  push32((uint32_t)(EDX));
  /* 11112533 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112535 mov ax, word ptr [0x1112f85c] */
  AX = (r16((uint32_t)(0x1112f85c)));
  /* 1111253b push eax */
  push32((uint32_t)(EAX));
  /* 1111253c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1111253e mov cx, word ptr [0x1112f85a] */
  CX = (r16((uint32_t)(0x1112f85a)));
  /* 11112545 push ecx */
  push32((uint32_t)(ECX));
  /* 11112546 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11112548 mov dx, word ptr [0x1112f858] */
  DX = (r16((uint32_t)(0x1112f858)));
  /* 1111254f push edx */
  push32((uint32_t)(EDX));
  /* 11112550 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112552 mov ax, word ptr [0x1112f856] */
  AX = (r16((uint32_t)(0x1112f856)));
  /* 11112558 push eax */
  push32((uint32_t)(EAX));
  /* 11112559 push 0 */
  push32((uint32_t)(0x0u));
  /* 1111255b push 0 */
  push32((uint32_t)(0x0u));
  /* 1111255d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1111255f mov cx, word ptr [0x1112f852] */
  CX = (r16((uint32_t)(0x1112f852)));
  /* 11112566 push ecx */
  push32((uint32_t)(ECX));
  /* 11112567 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111256a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1111256d push eax */
  push32((uint32_t)(EAX));
  /* 1111256e push 0 */
  push32((uint32_t)(0x0u));
  /* 11112570 push 1 */
  push32((uint32_t)(0x1u));
  /* 11112572 call 0x11112780 */
  push32(0x11112577u); f_11112780();
  /* 11112577 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1111257a:;
  /* 1111257a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1111257c mov cx, word ptr [0x1112f7fc] */
  CX = (r16((uint32_t)(0x1112f7fc)));
  /* 11112583 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11112585 jne 0x111125e2 */
  if (!C.zf) goto L_111125e2;
  /* 11112587 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11112589 mov dx, word ptr [0x1112f80a] */
  DX = (r16((uint32_t)(0x1112f80a)));
  /* 11112590 push edx */
  push32((uint32_t)(EDX));
  /* 11112591 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112593 mov ax, word ptr [0x1112f808] */
  AX = (r16((uint32_t)(0x1112f808)));
  /* 11112599 push eax */
  push32((uint32_t)(EAX));
  /* 1111259a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1111259c mov cx, word ptr [0x1112f806] */
  CX = (r16((uint32_t)(0x1112f806)));
  /* 111125a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111125a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111125a6 mov dx, word ptr [0x1112f804] */
  DX = (r16((uint32_t)(0x1112f804)));
  /* 111125ad push edx */
  push32((uint32_t)(EDX));
  /* 111125ae push 0 */
  push32((uint32_t)(0x0u));
  /* 111125b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111125b2 mov ax, word ptr [0x1112f800] */
  AX = (r16((uint32_t)(0x1112f800)));
  /* 111125b8 push eax */
  push32((uint32_t)(EAX));
  /* 111125b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111125bb mov cx, word ptr [0x1112f802] */
  CX = (r16((uint32_t)(0x1112f802)));
  /* 111125c2 push ecx */
  push32((uint32_t)(ECX));
  /* 111125c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111125c5 mov dx, word ptr [0x1112f7fe] */
  DX = (r16((uint32_t)(0x1112f7fe)));
  /* 111125cc push edx */
  push32((uint32_t)(EDX));
  /* 111125cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111125d0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111125d3 push ecx */
  push32((uint32_t)(ECX));
  /* 111125d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111125d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111125d8 call 0x11112780 */
  push32(0x111125ddu); f_11112780();
  /* 111125dd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111125e0 jmp 0x11112633 */
  goto L_11112633;
L_111125e2:;
  /* 111125e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111125e4 mov dx, word ptr [0x1112f80a] */
  DX = (r16((uint32_t)(0x1112f80a)));
  /* 111125eb push edx */
  push32((uint32_t)(EDX));
  /* 111125ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111125ee mov ax, word ptr [0x1112f808] */
  AX = (r16((uint32_t)(0x1112f808)));
  /* 111125f4 push eax */
  push32((uint32_t)(EAX));
  /* 111125f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111125f7 mov cx, word ptr [0x1112f806] */
  CX = (r16((uint32_t)(0x1112f806)));
  /* 111125fe push ecx */
  push32((uint32_t)(ECX));
  /* 111125ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11112601 mov dx, word ptr [0x1112f804] */
  DX = (r16((uint32_t)(0x1112f804)));
  /* 11112608 push edx */
  push32((uint32_t)(EDX));
  /* 11112609 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1111260b mov ax, word ptr [0x1112f802] */
  AX = (r16((uint32_t)(0x1112f802)));
  /* 11112611 push eax */
  push32((uint32_t)(EAX));
  /* 11112612 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112614 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112616 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11112618 mov cx, word ptr [0x1112f7fe] */
  CX = (r16((uint32_t)(0x1112f7fe)));
  /* 1111261f push ecx */
  push32((uint32_t)(ECX));
  /* 11112620 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112623 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11112626 push eax */
  push32((uint32_t)(EAX));
  /* 11112627 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112629 push 0 */
  push32((uint32_t)(0x0u));
  /* 1111262b call 0x11112780 */
  push32(0x11112630u); f_11112780();
  /* 11112630 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11112633:;
  /* 11112633 jmp 0x1111267b */
  goto L_1111267b;
L_11112635:;
  /* 11112635 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112637 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1111263b push 2 */
  push32((uint32_t)(0x2u));
  /* 1111263d push 0 */
  push32((uint32_t)(0x0u));
  /* 1111263f push 0 */
  push32((uint32_t)(0x0u));
  /* 11112641 push 1 */
  push32((uint32_t)(0x1u));
  /* 11112643 push 4 */
  push32((uint32_t)(0x4u));
  /* 11112645 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112648 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1111264b push edx */
  push32((uint32_t)(EDX));
  /* 1111264c push 1 */
  push32((uint32_t)(0x1u));
  /* 1111264e push 1 */
  push32((uint32_t)(0x1u));
  /* 11112650 call 0x11112780 */
  push32(0x11112655u); f_11112780();
  /* 11112655 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112658 push 0 */
  push32((uint32_t)(0x0u));
  /* 1111265a push 0 */
  push32((uint32_t)(0x0u));
  /* 1111265c push 0 */
  push32((uint32_t)(0x0u));
  /* 1111265e push 2 */
  push32((uint32_t)(0x2u));
  /* 11112660 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112662 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112664 push 5 */
  push32((uint32_t)(0x5u));
  /* 11112666 push 0xa */
  push32((uint32_t)(0xau));
  /* 11112668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111266b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1111266e push ecx */
  push32((uint32_t)(ECX));
  /* 1111266f push 1 */
  push32((uint32_t)(0x1u));
  /* 11112671 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112673 call 0x11112780 */
  push32(0x11112678u); f_11112780();
  /* 11112678 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1111267b:;
  /* 1111267b mov edx, dword ptr [0x1112ee2c] */
  EDX = (r32((uint32_t)(0x1112ee2c)));
  /* 11112681 cmp edx, dword ptr [0x1112ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1112ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112687 jge 0x111126d4 */
  if ((C.sf==C.of)) goto L_111126d4;
  /* 11112689 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111268c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1111268f cmp ecx, dword ptr [0x1112ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1112ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112695 jl 0x111126a5 */
  if ((C.sf!=C.of)) goto L_111126a5;
  /* 11112697 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111269a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1111269d cmp eax, dword ptr [0x1112ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111126a3 jle 0x111126ac */
  if ((C.zf||C.sf!=C.of)) goto L_111126ac;
L_111126a5:;
  /* 111126a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111126a7 jmp 0x11112776 */
  goto L_11112776;
L_111126ac:;
  /* 111126ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111126af mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 111126b2 cmp edx, dword ptr [0x1112ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1112ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111126b8 jle 0x111126d2 */
  if ((C.zf||C.sf!=C.of)) goto L_111126d2;
  /* 111126ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111126bd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 111126c0 cmp ecx, dword ptr [0x1112ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1112ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111126c6 jge 0x111126d2 */
  if ((C.sf==C.of)) goto L_111126d2;
  /* 111126c8 mov eax, 1 */
  EAX = (0x1u);
  /* 111126cd jmp 0x11112776 */
  goto L_11112776;
L_111126d2:;
  /* 111126d2 jmp 0x11112717 */
  goto L_11112717;
L_111126d4:;
  /* 111126d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111126d7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 111126da cmp eax, dword ptr [0x1112ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111126e0 jl 0x111126f0 */
  if ((C.sf!=C.of)) goto L_111126f0;
  /* 111126e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111126e5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 111126e8 cmp edx, dword ptr [0x1112ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1112ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111126ee jle 0x111126f7 */
  if ((C.zf||C.sf!=C.of)) goto L_111126f7;
L_111126f0:;
  /* 111126f0 mov eax, 1 */
  EAX = (0x1u);
  /* 111126f5 jmp 0x11112776 */
  goto L_11112776;
L_111126f7:;
  /* 111126f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111126fa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 111126fd cmp ecx, dword ptr [0x1112ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1112ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112703 jle 0x11112717 */
  if ((C.zf||C.sf!=C.of)) goto L_11112717;
  /* 11112705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112708 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1111270b cmp eax, dword ptr [0x1112ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112711 jge 0x11112717 */
  if ((C.sf==C.of)) goto L_11112717;
  /* 11112713 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112715 jmp 0x11112776 */
  goto L_11112776;
L_11112717:;
  /* 11112717 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111271a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1111271d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11112720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112723 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11112725 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112727 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111272a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1111272d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11112733 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112735 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1111273b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1111273e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112741 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11112744 cmp edx, dword ptr [0x1112ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1112ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111274a jne 0x11112762 */
  if (!C.zf) goto L_11112762;
  /* 1111274c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111274f cmp eax, dword ptr [0x1112ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112755 jl 0x1111275e */
  if ((C.sf!=C.of)) goto L_1111275e;
  /* 11112757 mov eax, 1 */
  EAX = (0x1u);
  /* 1111275c jmp 0x11112776 */
  goto L_11112776;
L_1111275e:;
  /* 1111275e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112760 jmp 0x11112776 */
  goto L_11112776;
L_11112762:;
  /* 11112762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11112765 cmp ecx, dword ptr [0x1112ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1112ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111276b jge 0x11112774 */
  if ((C.sf==C.of)) goto L_11112774;
  /* 1111276d mov eax, 1 */
  EAX = (0x1u);
  /* 11112772 jmp 0x11112776 */
  goto L_11112776;
L_11112774:;
  /* 11112774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11112776:;
  /* 11112776 mov esp, ebp */
  ESP = (EBP);
  /* 11112778 pop ebp */
  EBP = (pop32());
  /* 11112779 ret  */
  ESPCHK(0x11112480u, _esp0);
  ESP += 4; return;
}

/* FUN_10012780 @ 0x11112780 (504 bytes, 145 insns) */
void f_11112780(void) {
  FTRACE(0x11112780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112780 push ebp */
  push32((uint32_t)(EBP));
  /* 11112781 mov ebp, esp */
  EBP = (ESP);
  /* 11112783 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11112786 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111278a jne 0x1111285c */
  if (!C.zf) goto L_1111285c;
  /* 11112790 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11112793 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11112796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11112798 jne 0x111127a9 */
  if (!C.zf) goto L_111127a9;
  /* 1111279a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1111279d mov edx, dword ptr [ecx*4 + 0x1112ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112ee4c)));
  /* 111127a4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111127a7 jmp 0x111127b6 */
  goto L_111127b6;
L_111127a9:;
  /* 111127a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111127ac mov ecx, dword ptr [eax*4 + 0x1112ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1112ee80)));
  /* 111127b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_111127b6:;
  /* 111127b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111127b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111127bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111127bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111127c2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111127c5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111127cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111127ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111127d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111127d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111127d6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 111127d9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 111127dd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111127de mov ecx, 7 */
  ECX = (0x7u);
  /* 111127e3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111127e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111127e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111127eb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111127ee jge 0x11112809 */
  if ((C.sf==C.of)) goto L_11112809;
  /* 111127f0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111127f3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111127f6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111127f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111127fc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111127ff add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112802 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112804 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11112807 jmp 0x1111281d */
  goto L_1111281d;
L_11112809:;
  /* 11112809 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1111280c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1111280f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11112812 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11112815 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112818 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111281a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1111281d:;
  /* 1111281d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112821 jne 0x1111285a */
  if (!C.zf) goto L_1111285a;
  /* 11112823 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11112826 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11112829 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1111282b jne 0x1111283c */
  if (!C.zf) goto L_1111283c;
  /* 1111282d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11112830 mov eax, dword ptr [edx*4 + 0x1112ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1112ee50)));
  /* 11112837 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1111283a jmp 0x11112849 */
  goto L_11112849;
L_1111283c:;
  /* 1111283c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1111283f mov edx, dword ptr [ecx*4 + 0x1112ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112ee84)));
  /* 11112846 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11112849:;
  /* 11112849 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1111284c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111284f jle 0x1111285a */
  if ((C.zf||C.sf!=C.of)) goto L_1111285a;
  /* 11112851 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11112854 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11112857 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1111285a:;
  /* 1111285a jmp 0x11112891 */
  goto L_11112891;
L_1111285c:;
  /* 1111285c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111285f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11112862 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11112864 jne 0x11112875 */
  if (!C.zf) goto L_11112875;
  /* 11112866 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11112869 mov ecx, dword ptr [eax*4 + 0x1112ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1112ee4c)));
  /* 11112870 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11112873 jmp 0x11112882 */
  goto L_11112882;
L_11112875:;
  /* 11112875 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11112878 mov eax, dword ptr [edx*4 + 0x1112ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1112ee80)));
  /* 1111287f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11112882:;
  /* 11112882 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11112885 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11112888 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1111288b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111288e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11112891:;
  /* 11112891 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112895 jne 0x111128d1 */
  if (!C.zf) goto L_111128d1;
  /* 11112897 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1111289a mov dword ptr [0x1112ee2c], eax */
  w32((uint32_t)(0x1112ee2c), (EAX));
  /* 1111289f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 111128a2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111128a5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 111128a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111128aa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111128ad mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 111128b0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111128b2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111128b8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 111128bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111128bd mov dword ptr [0x1112ee30], ecx */
  w32((uint32_t)(0x1112ee30), (ECX));
  /* 111128c3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111128c6 mov dword ptr [0x1112ee28], edx */
  w32((uint32_t)(0x1112ee28), (EDX));
  /* 111128cc jmp 0x11112974 */
  goto L_11112974;
L_111128d1:;
  /* 111128d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111128d4 mov dword ptr [0x1112ee3c], eax */
  w32((uint32_t)(0x1112ee3c), (EAX));
  /* 111128d9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 111128dc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111128df mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 111128e2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111128e4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111128e7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 111128ea add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111128ec imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111128f2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 111128f5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111128f7 mov dword ptr [0x1112ee40], ecx */
  w32((uint32_t)(0x1112ee40), (ECX));
  /* 111128fd mov edx, dword ptr [0x1112ed98] */
  EDX = (r32((uint32_t)(0x1112ed98)));
  /* 11112903 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11112909 mov eax, dword ptr [0x1112ee40] */
  EAX = (r32((uint32_t)(0x1112ee40)));
  /* 1111290e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112910 mov dword ptr [0x1112ee40], eax */
  w32((uint32_t)(0x1112ee40), (EAX));
  /* 11112915 cmp dword ptr [0x1112ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111291c jge 0x11112941 */
  if ((C.sf==C.of)) goto L_11112941;
  /* 1111291e mov ecx, dword ptr [0x1112ee40] */
  ECX = (r32((uint32_t)(0x1112ee40)));
  /* 11112924 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111292a mov dword ptr [0x1112ee40], ecx */
  w32((uint32_t)(0x1112ee40), (ECX));
  /* 11112930 mov edx, dword ptr [0x1112ee3c] */
  EDX = (r32((uint32_t)(0x1112ee3c)));
  /* 11112936 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11112939 mov dword ptr [0x1112ee3c], edx */
  w32((uint32_t)(0x1112ee3c), (EDX));
  /* 1111293f jmp 0x1111296b */
  goto L_1111296b;
L_11112941:;
  /* 11112941 cmp dword ptr [0x1112ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1112ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111294b jl 0x1111296b */
  if ((C.sf!=C.of)) goto L_1111296b;
  /* 1111294d mov eax, dword ptr [0x1112ee40] */
  EAX = (r32((uint32_t)(0x1112ee40)));
  /* 11112952 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11112957 mov dword ptr [0x1112ee40], eax */
  w32((uint32_t)(0x1112ee40), (EAX));
  /* 1111295c mov ecx, dword ptr [0x1112ee3c] */
  ECX = (r32((uint32_t)(0x1112ee3c)));
  /* 11112962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112965 mov dword ptr [0x1112ee3c], ecx */
  w32((uint32_t)(0x1112ee3c), (ECX));
L_1111296b:;
  /* 1111296b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111296e mov dword ptr [0x1112ee38], edx */
  w32((uint32_t)(0x1112ee38), (EDX));
L_11112974:;
  /* 11112974 mov esp, ebp */
  ESP = (EBP);
  /* 11112976 pop ebp */
  EBP = (pop32());
  /* 11112977 ret  */
  ESPCHK(0x11112780u, _esp0);
  ESP += 4; return;
}

/* FUN_10012980 @ 0x11112980 (382 bytes, 135 insns) */
void f_11112980(void) {
  FTRACE(0x11112980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112980 push ebp */
  push32((uint32_t)(EBP));
  /* 11112981 mov ebp, esp */
  EBP = (ESP);
  /* 11112983 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11112985 push 0x1112b950 */
  push32((uint32_t)(0x1112b950u));
  /* 1111298a push 0x1110c648 */
  push32((uint32_t)(0x1110c648u));
  /* 1111298f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11112995 push eax */
  push32((uint32_t)(EAX));
  /* 11112996 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1111299d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111129a0 push ebx */
  push32((uint32_t)(EBX));
  /* 111129a1 push esi */
  push32((uint32_t)(ESI));
  /* 111129a2 push edi */
  push32((uint32_t)(EDI));
  /* 111129a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111129a6 cmp dword ptr [0x1112f86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111129ad jne 0x111129f2 */
  if (!C.zf) goto L_111129f2;
  /* 111129af push 0 */
  push32((uint32_t)(0x0u));
  /* 111129b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111129b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111129b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111129b7 call dword ptr [0x111322ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322ac))), 0x111129bdu);
  /* 111129bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111129bf je 0x111129cd */
  if (C.zf) goto L_111129cd;
  /* 111129c1 mov dword ptr [0x1112f86c], 1 */
  w32((uint32_t)(0x1112f86c), (0x1u));
  /* 111129cb jmp 0x111129f2 */
  goto L_111129f2;
L_111129cd:;
  /* 111129cd push 0 */
  push32((uint32_t)(0x0u));
  /* 111129cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111129d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111129d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111129d5 call dword ptr [0x111322c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322c4))), 0x111129dbu);
  /* 111129db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111129dd je 0x111129eb */
  if (C.zf) goto L_111129eb;
  /* 111129df mov dword ptr [0x1112f86c], 2 */
  w32((uint32_t)(0x1112f86c), (0x2u));
  /* 111129e9 jmp 0x111129f2 */
  goto L_111129f2;
L_111129eb:;
  /* 111129eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111129ed jmp 0x11112b01 */
  goto L_11112b01;
L_111129f2:;
  /* 111129f2 cmp dword ptr [0x1112f86c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f86c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111129f9 jne 0x11112a16 */
  if (!C.zf) goto L_11112a16;
  /* 111129fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111129fe push eax */
  push32((uint32_t)(EAX));
  /* 111129ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11112a02 push ecx */
  push32((uint32_t)(ECX));
  /* 11112a03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11112a06 push edx */
  push32((uint32_t)(EDX));
  /* 11112a07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112a0a push eax */
  push32((uint32_t)(EAX));
  /* 11112a0b call dword ptr [0x111322ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322ac))), 0x11112a11u);
  /* 11112a11 jmp 0x11112b01 */
  goto L_11112b01;
L_11112a16:;
  /* 11112a16 cmp dword ptr [0x1112f86c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1112f86c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112a1d jne 0x11112aff */
  if (!C.zf) goto L_11112aff;
  /* 11112a23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112a27 jne 0x11112a32 */
  if (!C.zf) goto L_11112a32;
  /* 11112a29 mov ecx, dword ptr [0x1112f720] */
  ECX = (r32((uint32_t)(0x1112f720)));
  /* 11112a2f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11112a32:;
  /* 11112a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112a36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11112a39 push edx */
  push32((uint32_t)(EDX));
  /* 11112a3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112a3d push eax */
  push32((uint32_t)(EAX));
  /* 11112a3e call dword ptr [0x111322c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322c4))), 0x11112a44u);
  /* 11112a44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11112a47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112a4b jne 0x11112a54 */
  if (!C.zf) goto L_11112a54;
  /* 11112a4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112a4f jmp 0x11112b01 */
  goto L_11112b01;
L_11112a54:;
  /* 11112a54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11112a5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11112a5e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112a61 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11112a63 call 0x111066e0 */
  push32(0x11112a68u); f_111066e0();
  /* 11112a68 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11112a6b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11112a6e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11112a71 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11112a74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11112a7b jmp 0x11112a94 */
  goto L_11112a94;
  /* 11112a7d mov eax, 1 */
  EAX = (0x1u);
  /* 11112a82 ret  */
  ESPCHK(0x11112980u, _esp0);
  ESP += 4; return;
  /* 11112a83 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11112a86 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11112a8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11112a94:;
  /* 11112a94 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112a98 jne 0x11112a9e */
  if (!C.zf) goto L_11112a9e;
  /* 11112a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112a9c jmp 0x11112b01 */
  goto L_11112b01;
L_11112a9e:;
  /* 11112a9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11112aa1 push edx */
  push32((uint32_t)(EDX));
  /* 11112aa2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11112aa5 push eax */
  push32((uint32_t)(EAX));
  /* 11112aa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11112aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11112aaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112aad push edx */
  push32((uint32_t)(EDX));
  /* 11112aae call dword ptr [0x111322c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322c4))), 0x11112ab4u);
  /* 11112ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11112ab6 jne 0x11112abc */
  if (!C.zf) goto L_11112abc;
  /* 11112ab8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112aba jmp 0x11112b01 */
  goto L_11112b01;
L_11112abc:;
  /* 11112abc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112ac0 jne 0x11112add */
  if (!C.zf) goto L_11112add;
  /* 11112ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112ac6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11112ac8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11112acb push eax */
  push32((uint32_t)(EAX));
  /* 11112acc push 1 */
  push32((uint32_t)(0x1u));
  /* 11112ace mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11112ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 11112ad2 call dword ptr [0x111322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f4))), 0x11112ad8u);
  /* 11112ad8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11112adb jmp 0x11112afa */
  goto L_11112afa;
L_11112add:;
  /* 11112add mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11112ae0 push edx */
  push32((uint32_t)(EDX));
  /* 11112ae1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11112ae4 push eax */
  push32((uint32_t)(EAX));
  /* 11112ae5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11112ae7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11112aea push ecx */
  push32((uint32_t)(ECX));
  /* 11112aeb push 1 */
  push32((uint32_t)(0x1u));
  /* 11112aed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11112af0 push edx */
  push32((uint32_t)(EDX));
  /* 11112af1 call dword ptr [0x111322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f4))), 0x11112af7u);
  /* 11112af7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11112afa:;
  /* 11112afa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11112afd jmp 0x11112b01 */
  goto L_11112b01;
L_11112aff:;
  /* 11112aff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11112b01:;
  /* 11112b01 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11112b04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11112b07 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11112b0e pop edi */
  EDI = (pop32());
  /* 11112b0f pop esi */
  ESI = (pop32());
  /* 11112b10 pop ebx */
  EBX = (pop32());
  /* 11112b11 mov esp, ebp */
  ESP = (EBP);
  /* 11112b13 pop ebp */
  EBP = (pop32());
  /* 11112b14 ret  */
  ESPCHK(0x11112980u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b20 @ 0x11112b20 (398 bytes, 140 insns) */
void f_11112b20(void) {
  FTRACE(0x11112b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11112b21 mov ebp, esp */
  EBP = (ESP);
  /* 11112b23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11112b25 push 0x1112b960 */
  push32((uint32_t)(0x1112b960u));
  /* 11112b2a push 0x1110c648 */
  push32((uint32_t)(0x1110c648u));
  /* 11112b2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11112b35 push eax */
  push32((uint32_t)(EAX));
  /* 11112b36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11112b3d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112b40 push ebx */
  push32((uint32_t)(EBX));
  /* 11112b41 push esi */
  push32((uint32_t)(ESI));
  /* 11112b42 push edi */
  push32((uint32_t)(EDI));
  /* 11112b43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11112b46 cmp dword ptr [0x1112f870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112b4d jne 0x11112b92 */
  if (!C.zf) goto L_11112b92;
  /* 11112b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11112b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112b53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11112b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112b57 call dword ptr [0x111322ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322ac))), 0x11112b5du);
  /* 11112b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11112b5f je 0x11112b6d */
  if (C.zf) goto L_11112b6d;
  /* 11112b61 mov dword ptr [0x1112f870], 1 */
  w32((uint32_t)(0x1112f870), (0x1u));
  /* 11112b6b jmp 0x11112b92 */
  goto L_11112b92;
L_11112b6d:;
  /* 11112b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11112b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11112b71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11112b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112b75 call dword ptr [0x111322c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322c4))), 0x11112b7bu);
  /* 11112b7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11112b7d je 0x11112b8b */
  if (C.zf) goto L_11112b8b;
  /* 11112b7f mov dword ptr [0x1112f870], 2 */
  w32((uint32_t)(0x1112f870), (0x2u));
  /* 11112b89 jmp 0x11112b92 */
  goto L_11112b92;
L_11112b8b:;
  /* 11112b8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112b8d jmp 0x11112cb1 */
  goto L_11112cb1;
L_11112b92:;
  /* 11112b92 cmp dword ptr [0x1112f870], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1112f870))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112b99 jne 0x11112bb6 */
  if (!C.zf) goto L_11112bb6;
  /* 11112b9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11112b9e push eax */
  push32((uint32_t)(EAX));
  /* 11112b9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11112ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 11112ba3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11112ba6 push edx */
  push32((uint32_t)(EDX));
  /* 11112ba7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112baa push eax */
  push32((uint32_t)(EAX));
  /* 11112bab call dword ptr [0x111322c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322c4))), 0x11112bb1u);
  /* 11112bb1 jmp 0x11112cb1 */
  goto L_11112cb1;
L_11112bb6:;
  /* 11112bb6 cmp dword ptr [0x1112f870], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f870))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112bbd jne 0x11112caf */
  if (!C.zf) goto L_11112caf;
  /* 11112bc3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112bc7 jne 0x11112bd2 */
  if (!C.zf) goto L_11112bd2;
  /* 11112bc9 mov ecx, dword ptr [0x1112f720] */
  ECX = (r32((uint32_t)(0x1112f720)));
  /* 11112bcf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11112bd2:;
  /* 11112bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112bd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11112bd9 push edx */
  push32((uint32_t)(EDX));
  /* 11112bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112bdd push eax */
  push32((uint32_t)(EAX));
  /* 11112bde call dword ptr [0x111322ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322ac))), 0x11112be4u);
  /* 11112be4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11112be7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112beb jne 0x11112bf4 */
  if (!C.zf) goto L_11112bf4;
  /* 11112bed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112bef jmp 0x11112cb1 */
  goto L_11112cb1;
L_11112bf4:;
  /* 11112bf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11112bfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11112bfe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11112c00 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112c03 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11112c05 call 0x111066e0 */
  push32(0x11112c0au); f_111066e0();
  /* 11112c0a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11112c0d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11112c10 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11112c13 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11112c16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11112c1d jmp 0x11112c36 */
  goto L_11112c36;
  /* 11112c1f mov eax, 1 */
  EAX = (0x1u);
  /* 11112c24 ret  */
  ESPCHK(0x11112b20u, _esp0);
  ESP += 4; return;
  /* 11112c25 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11112c28 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11112c2f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11112c36:;
  /* 11112c36 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112c3a jne 0x11112c40 */
  if (!C.zf) goto L_11112c40;
  /* 11112c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112c3e jmp 0x11112cb1 */
  goto L_11112cb1;
L_11112c40:;
  /* 11112c40 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11112c43 push edx */
  push32((uint32_t)(EDX));
  /* 11112c44 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11112c47 push eax */
  push32((uint32_t)(EAX));
  /* 11112c48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11112c4b push ecx */
  push32((uint32_t)(ECX));
  /* 11112c4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112c4f push edx */
  push32((uint32_t)(EDX));
  /* 11112c50 call dword ptr [0x111322ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322ac))), 0x11112c56u);
  /* 11112c56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11112c58 jne 0x11112c5e */
  if (!C.zf) goto L_11112c5e;
  /* 11112c5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112c5c jmp 0x11112cb1 */
  goto L_11112cb1;
L_11112c5e:;
  /* 11112c5e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112c62 jne 0x11112c86 */
  if (!C.zf) goto L_11112c86;
  /* 11112c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11112c6c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11112c6e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11112c71 push eax */
  push32((uint32_t)(EAX));
  /* 11112c72 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11112c77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11112c7a push ecx */
  push32((uint32_t)(ECX));
  /* 11112c7b call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x11112c81u);
  /* 11112c81 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11112c84 jmp 0x11112caa */
  goto L_11112caa;
L_11112c86:;
  /* 11112c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11112c8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11112c8d push edx */
  push32((uint32_t)(EDX));
  /* 11112c8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11112c91 push eax */
  push32((uint32_t)(EAX));
  /* 11112c92 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11112c94 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11112c97 push ecx */
  push32((uint32_t)(ECX));
  /* 11112c98 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11112c9d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11112ca0 push edx */
  push32((uint32_t)(EDX));
  /* 11112ca1 call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x11112ca7u);
  /* 11112ca7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11112caa:;
  /* 11112caa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11112cad jmp 0x11112cb1 */
  goto L_11112cb1;
L_11112caf:;
  /* 11112caf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11112cb1:;
  /* 11112cb1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11112cb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11112cb7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11112cbe pop edi */
  EDI = (pop32());
  /* 11112cbf pop esi */
  ESI = (pop32());
  /* 11112cc0 pop ebx */
  EBX = (pop32());
  /* 11112cc1 mov esp, ebp */
  ESP = (EBP);
  /* 11112cc3 pop ebp */
  EBP = (pop32());
  /* 11112cc4 ret  */
  ESPCHK(0x11112b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cd0 @ 0x11112cd0 (11 bytes, 6 insns) */
void f_11112cd0(void) {
  FTRACE(0x11112cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11112cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11112cd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112cd6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112cd9 pop ebp */
  EBP = (pop32());
  /* 11112cda ret  */
  ESPCHK(0x11112cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ce0 @ 0x11112ce0 (147 bytes, 43 insns) */
void f_11112ce0(void) {
  FTRACE(0x11112ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11112ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11112ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11112ce4 cmp dword ptr [0x1112f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112ceb jne 0x11112d07 */
  if (!C.zf) goto L_11112d07;
  /* 11112ced cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112cf1 jl 0x11112d02 */
  if ((C.sf!=C.of)) goto L_11112d02;
  /* 11112cf3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112cf7 jg 0x11112d02 */
  if ((!C.zf&&C.sf==C.of)) goto L_11112d02;
  /* 11112cf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112cfc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112cff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11112d02:;
  /* 11112d02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112d05 jmp 0x11112d6f */
  goto L_11112d6f;
L_11112d07:;
  /* 11112d07 push 0x1112f89c */
  push32((uint32_t)(0x1112f89cu));
  /* 11112d0c call dword ptr [0x1113234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113234c))), 0x11112d12u);
  /* 11112d12 cmp dword ptr [0x1112f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112d19 je 0x11112d39 */
  if (C.zf) goto L_11112d39;
  /* 11112d1b push 0x1112f89c */
  push32((uint32_t)(0x1112f89cu));
  /* 11112d20 call dword ptr [0x1113233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113233c))), 0x11112d26u);
  /* 11112d26 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11112d28 call 0x11106f40 */
  push32(0x11112d2du); f_11106f40();
  /* 11112d2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112d30 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11112d37 jmp 0x11112d40 */
  goto L_11112d40;
L_11112d39:;
  /* 11112d39 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11112d40:;
  /* 11112d40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112d43 push ecx */
  push32((uint32_t)(ECX));
  /* 11112d44 call 0x11112d80 */
  push32(0x11112d49u); f_11112d80();
  /* 11112d49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112d4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11112d4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112d53 je 0x11112d61 */
  if (C.zf) goto L_11112d61;
  /* 11112d55 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11112d57 call 0x11106fe0 */
  push32(0x11112d5cu); f_11106fe0();
  /* 11112d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112d5f jmp 0x11112d6c */
  goto L_11112d6c;
L_11112d61:;
  /* 11112d61 push 0x1112f89c */
  push32((uint32_t)(0x1112f89cu));
  /* 11112d66 call dword ptr [0x1113233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113233c))), 0x11112d6cu);
L_11112d6c:;
  /* 11112d6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11112d6f:;
  /* 11112d6f mov esp, ebp */
  ESP = (EBP);
  /* 11112d71 pop ebp */
  EBP = (pop32());
  /* 11112d72 ret  */
  ESPCHK(0x11112ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d80 @ 0x11112d80 (299 bytes, 91 insns) */
void f_11112d80(void) {
  FTRACE(0x11112d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11112d81 mov ebp, esp */
  EBP = (ESP);
  /* 11112d83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11112d86 cmp dword ptr [0x1112f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112d8d jne 0x11112dac */
  if (!C.zf) goto L_11112dac;
  /* 11112d8f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112d93 jl 0x11112da4 */
  if ((C.sf!=C.of)) goto L_11112da4;
  /* 11112d95 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112d99 jg 0x11112da4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11112da4;
  /* 11112d9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112d9e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112da1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11112da4:;
  /* 11112da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112da7 jmp 0x11112ea7 */
  goto L_11112ea7;
L_11112dac:;
  /* 11112dac cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112db3 jge 0x11112df3 */
  if ((C.sf==C.of)) goto L_11112df3;
  /* 11112db5 cmp dword ptr [0x1112dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112dbc jle 0x11112dd1 */
  if ((C.zf||C.sf!=C.of)) goto L_11112dd1;
  /* 11112dbe push 1 */
  push32((uint32_t)(0x1u));
  /* 11112dc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11112dc4 call 0x11109550 */
  push32(0x11112dc9u); f_11109550();
  /* 11112dc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112dcc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11112dcf jmp 0x11112de5 */
  goto L_11112de5;
L_11112dd1:;
  /* 11112dd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112dd4 mov eax, dword ptr [0x1112dc98] */
  EAX = (r32((uint32_t)(0x1112dc98)));
  /* 11112dd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11112ddb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11112ddf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11112de2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11112de5:;
  /* 11112de5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112de9 jne 0x11112df3 */
  if (!C.zf) goto L_11112df3;
  /* 11112deb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112dee jmp 0x11112ea7 */
  goto L_11112ea7;
L_11112df3:;
  /* 11112df3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112df6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11112df9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11112dff and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11112e05 mov eax, dword ptr [0x1112dc98] */
  EAX = (r32((uint32_t)(0x1112dc98)));
  /* 11112e0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11112e0c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11112e10 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11112e16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11112e18 je 0x11112e3c */
  if (C.zf) goto L_11112e3c;
  /* 11112e1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112e1d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11112e20 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11112e26 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11112e29 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11112e2c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11112e2f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11112e33 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11112e3a jmp 0x11112e4d */
  goto L_11112e4d;
L_11112e3c:;
  /* 11112e3c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11112e3f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11112e42 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11112e46 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11112e4d:;
  /* 11112e4d push 1 */
  push32((uint32_t)(0x1u));
  /* 11112e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11112e51 push 3 */
  push32((uint32_t)(0x3u));
  /* 11112e53 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11112e56 push edx */
  push32((uint32_t)(EDX));
  /* 11112e57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11112e5a push eax */
  push32((uint32_t)(EAX));
  /* 11112e5b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11112e5e push ecx */
  push32((uint32_t)(ECX));
  /* 11112e5f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11112e64 mov edx, dword ptr [0x1112f710] */
  EDX = (r32((uint32_t)(0x1112f710)));
  /* 11112e6a push edx */
  push32((uint32_t)(EDX));
  /* 11112e6b call 0x1110b930 */
  push32(0x11112e70u); f_1110b930();
  /* 11112e70 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112e73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11112e76 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112e7a jne 0x11112e81 */
  if (!C.zf) goto L_11112e81;
  /* 11112e7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112e7f jmp 0x11112ea7 */
  goto L_11112ea7;
L_11112e81:;
  /* 11112e81 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112e85 jne 0x11112e91 */
  if (!C.zf) goto L_11112e91;
  /* 11112e87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112e8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11112e8f jmp 0x11112ea7 */
  goto L_11112ea7;
L_11112e91:;
  /* 11112e91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11112e94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11112e99 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11112e9c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11112ea2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11112ea5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11112ea7:;
  /* 11112ea7 mov esp, ebp */
  ESP = (EBP);
  /* 11112ea9 pop ebp */
  EBP = (pop32());
  /* 11112eaa ret  */
  ESPCHK(0x11112d80u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11112eb0 (52 bytes, 19 insns) */
void f_11112eb0(void) {
  FTRACE(0x11112eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112eb0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11112eb4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11112eb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11112eba mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11112ebe jne 0x11112ec9 */
  if (!C.zf) goto L_11112ec9;
  /* 11112ec0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11112ec4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11112ec6 ret 0x10 */
  ESPCHK(0x11112eb0u, _esp0);
  ESP += 20; return;
L_11112ec9:;
  /* 11112ec9 push ebx */
  push32((uint32_t)(EBX));
  /* 11112eca mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11112ecc mov ebx, eax */
  EBX = (EAX);
  /* 11112ece mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11112ed2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11112ed6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112ed8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11112edc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11112ede add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112ee0 pop ebx */
  EBX = (pop32());
  /* 11112ee1 ret 0x10 */
  ESPCHK(0x11112eb0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012ef0 @ 0x11112ef0 (46 bytes, 18 insns) */
void f_11112ef0(void) {
  FTRACE(0x11112ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11112ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11112ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11112ef4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11112ef6 call 0x11106f40 */
  push32(0x11112efbu); f_11106f40();
  /* 11112efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112efe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112f01 push eax */
  push32((uint32_t)(EAX));
  /* 11112f02 call 0x11112f20 */
  push32(0x11112f07u); f_11112f20();
  /* 11112f07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112f0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11112f0d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11112f0f call 0x11106fe0 */
  push32(0x11112f14u); f_11106fe0();
  /* 11112f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112f17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11112f1a mov esp, ebp */
  ESP = (EBP);
  /* 11112f1c pop ebp */
  EBP = (pop32());
  /* 11112f1d ret  */
  ESPCHK(0x11112ef0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11112f20 (198 bytes, 69 insns) */
void f_11112f20(void) {
  FTRACE(0x11112f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11112f21 mov ebp, esp */
  EBP = (ESP);
  /* 11112f23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11112f26 mov eax, dword ptr [0x1112f530] */
  EAX = (r32((uint32_t)(0x1112f530)));
  /* 11112f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11112f2e cmp dword ptr [0x11131020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11131020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112f35 jne 0x11112f3e */
  if (!C.zf) goto L_11112f3e;
  /* 11112f37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112f39 jmp 0x11112fe2 */
  goto L_11112fe2;
L_11112f3e:;
  /* 11112f3e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112f42 jne 0x11112f66 */
  if (!C.zf) goto L_11112f66;
  /* 11112f44 cmp dword ptr [0x1112f538], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f538))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112f4b je 0x11112f66 */
  if (C.zf) goto L_11112f66;
  /* 11112f4d call 0x11113040 */
  push32(0x11112f52u); f_11113040();
  /* 11112f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11112f54 je 0x11112f5d */
  if (C.zf) goto L_11112f5d;
  /* 11112f56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112f58 jmp 0x11112fe2 */
  goto L_11112fe2;
L_11112f5d:;
  /* 11112f5d mov ecx, dword ptr [0x1112f530] */
  ECX = (r32((uint32_t)(0x1112f530)));
  /* 11112f63 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11112f66:;
  /* 11112f66 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112f6a je 0x11112fe0 */
  if (C.zf) goto L_11112fe0;
  /* 11112f6c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112f70 je 0x11112fe0 */
  if (C.zf) goto L_11112fe0;
  /* 11112f72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112f75 push edx */
  push32((uint32_t)(EDX));
  /* 11112f76 call 0x11106370 */
  push32(0x11112f7bu); f_11106370();
  /* 11112f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112f7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11112f81:;
  /* 11112f81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11112f84 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112f87 je 0x11112fe0 */
  if (C.zf) goto L_11112fe0;
  /* 11112f89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11112f8c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11112f8e push edx */
  push32((uint32_t)(EDX));
  /* 11112f8f call 0x11106370 */
  push32(0x11112f94u); f_11106370();
  /* 11112f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112f97 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112f9a jbe 0x11112fd5 */
  if ((C.cf||C.zf)) goto L_11112fd5;
  /* 11112f9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11112f9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11112fa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11112fa4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11112fa8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112fab jne 0x11112fd5 */
  if (!C.zf) goto L_11112fd5;
  /* 11112fad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11112fb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11112fb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11112fb4 push edx */
  push32((uint32_t)(EDX));
  /* 11112fb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11112fb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11112fba push ecx */
  push32((uint32_t)(ECX));
  /* 11112fbb call 0x11112ff0 */
  push32(0x11112fc0u); f_11112ff0();
  /* 11112fc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11112fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11112fc5 jne 0x11112fd5 */
  if (!C.zf) goto L_11112fd5;
  /* 11112fc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11112fca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11112fcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11112fcf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11112fd3 jmp 0x11112fe2 */
  goto L_11112fe2;
L_11112fd5:;
  /* 11112fd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11112fd8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11112fdb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11112fde jmp 0x11112f81 */
  goto L_11112f81;
L_11112fe0:;
  /* 11112fe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11112fe2:;
  /* 11112fe2 mov esp, ebp */
  ESP = (EBP);
  /* 11112fe4 pop ebp */
  EBP = (pop32());
  /* 11112fe5 ret  */
  ESPCHK(0x11112f20u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11112ff0 (79 bytes, 32 insns) */
void f_11112ff0(void) {
  FTRACE(0x11112ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11112ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11112ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11112ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11112ff4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11112ff8 jne 0x11112ffe */
  if (!C.zf) goto L_11112ffe;
  /* 11112ffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11112ffc jmp 0x1111303b */
  goto L_1111303b;
L_11112ffe:;
  /* 11112ffe mov eax, dword ptr [0x11130be4] */
  EAX = (r32((uint32_t)(0x11130be4)));
  /* 11113003 push eax */
  push32((uint32_t)(EAX));
  /* 11113004 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11113007 push ecx */
  push32((uint32_t)(ECX));
  /* 11113008 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1111300b push edx */
  push32((uint32_t)(EDX));
  /* 1111300c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111300f push eax */
  push32((uint32_t)(EAX));
  /* 11113010 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11113013 push ecx */
  push32((uint32_t)(ECX));
  /* 11113014 push 1 */
  push32((uint32_t)(0x1u));
  /* 11113016 mov edx, dword ptr [0x11130e84] */
  EDX = (r32((uint32_t)(0x11130e84)));
  /* 1111301c push edx */
  push32((uint32_t)(EDX));
  /* 1111301d call 0x111130f0 */
  push32(0x11113022u); f_111130f0();
  /* 11113022 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113025 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11113028 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111302c jne 0x11113035 */
  if (!C.zf) goto L_11113035;
  /* 1111302e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11113033 jmp 0x1111303b */
  goto L_1111303b;
L_11113035:;
  /* 11113035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11113038 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1111303b:;
  /* 1111303b mov esp, ebp */
  ESP = (EBP);
  /* 1111303d pop ebp */
  EBP = (pop32());
  /* 1111303e ret  */
  ESPCHK(0x11112ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013040 @ 0x11113040 (174 bytes, 66 insns) */
void f_11113040(void) {
  FTRACE(0x11113040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11113040 push ebp */
  push32((uint32_t)(EBP));
  /* 11113041 mov ebp, esp */
  EBP = (ESP);
  /* 11113043 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11113046 mov eax, dword ptr [0x1112f538] */
  EAX = (r32((uint32_t)(0x1112f538)));
  /* 1111304b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1111304e:;
  /* 1111304e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11113051 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113054 je 0x111130e8 */
  if (C.zf) goto L_111130e8;
  /* 1111305a push 0 */
  push32((uint32_t)(0x0u));
  /* 1111305c push 0 */
  push32((uint32_t)(0x0u));
  /* 1111305e push 0 */
  push32((uint32_t)(0x0u));
  /* 11113060 push 0 */
  push32((uint32_t)(0x0u));
  /* 11113062 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11113064 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11113067 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11113069 push eax */
  push32((uint32_t)(EAX));
  /* 1111306a push 0 */
  push32((uint32_t)(0x0u));
  /* 1111306c push 1 */
  push32((uint32_t)(0x1u));
  /* 1111306e call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x11113074u);
  /* 11113074 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11113077 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111307b jne 0x11113082 */
  if (!C.zf) goto L_11113082;
  /* 1111307d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11113080 jmp 0x111130ea */
  goto L_111130ea;
L_11113082:;
  /* 11113082 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11113084 push 0x1112b96c */
  push32((uint32_t)(0x1112b96cu));
  /* 11113089 push 2 */
  push32((uint32_t)(0x2u));
  /* 1111308b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111308e push ecx */
  push32((uint32_t)(ECX));
  /* 1111308f call 0x11103540 */
  push32(0x11113094u); f_11103540();
  /* 11113094 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113097 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1111309a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111309e jne 0x111130a5 */
  if (!C.zf) goto L_111130a5;
  /* 111130a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111130a3 jmp 0x111130ea */
  goto L_111130ea;
L_111130a5:;
  /* 111130a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111130a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111130a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111130ac push edx */
  push32((uint32_t)(EDX));
  /* 111130ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111130b0 push eax */
  push32((uint32_t)(EAX));
  /* 111130b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111130b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111130b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111130b8 push edx */
  push32((uint32_t)(EDX));
  /* 111130b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111130bb push 1 */
  push32((uint32_t)(0x1u));
  /* 111130bd call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x111130c3u);
  /* 111130c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111130c5 jne 0x111130cc */
  if (!C.zf) goto L_111130cc;
  /* 111130c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111130ca jmp 0x111130ea */
  goto L_111130ea;
L_111130cc:;
  /* 111130cc push 0 */
  push32((uint32_t)(0x0u));
  /* 111130ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111130d1 push eax */
  push32((uint32_t)(EAX));
  /* 111130d2 call 0x11113540 */
  push32(0x111130d7u); f_11113540();
  /* 111130d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111130da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111130dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111130e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111130e3 jmp 0x1111304e */
  goto L_1111304e;
L_111130e8:;
  /* 111130e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111130ea:;
  /* 111130ea mov esp, ebp */
  ESP = (EBP);
  /* 111130ec pop ebp */
  EBP = (pop32());
  /* 111130ed ret  */
  ESPCHK(0x11113040u, _esp0);
  ESP += 4; return;
}

/* FUN_100130f0 @ 0x111130f0 (970 bytes, 340 insns) */
void f_111130f0(void) {
  FTRACE(0x111130f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111130f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111130f1 mov ebp, esp */
  EBP = (ESP);
  /* 111130f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111130f5 push 0x1112b9c0 */
  push32((uint32_t)(0x1112b9c0u));
  /* 111130fa push 0x1110c648 */
  push32((uint32_t)(0x1110c648u));
  /* 111130ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11113105 push eax */
  push32((uint32_t)(EAX));
  /* 11113106 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1111310d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113110 push ebx */
  push32((uint32_t)(EBX));
  /* 11113111 push esi */
  push32((uint32_t)(ESI));
  /* 11113112 push edi */
  push32((uint32_t)(EDI));
  /* 11113113 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11113116 cmp dword ptr [0x1112f874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111311d jne 0x11113176 */
  if (!C.zf) goto L_11113176;
  /* 1111311f push 1 */
  push32((uint32_t)(0x1u));
  /* 11113121 push 0x1112b018 */
  push32((uint32_t)(0x1112b018u));
  /* 11113126 push 1 */
  push32((uint32_t)(0x1u));
  /* 11113128 push 0x1112b018 */
  push32((uint32_t)(0x1112b018u));
  /* 1111312d push 0 */
  push32((uint32_t)(0x0u));
  /* 1111312f push 0 */
  push32((uint32_t)(0x0u));
  /* 11113131 call dword ptr [0x111322a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322a4))), 0x11113137u);
  /* 11113137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11113139 je 0x11113147 */
  if (C.zf) goto L_11113147;
  /* 1111313b mov dword ptr [0x1112f874], 1 */
  w32((uint32_t)(0x1112f874), (0x1u));
  /* 11113145 jmp 0x11113176 */
  goto L_11113176;
L_11113147:;
  /* 11113147 push 1 */
  push32((uint32_t)(0x1u));
  /* 11113149 push 0x1112b014 */
  push32((uint32_t)(0x1112b014u));
  /* 1111314e push 1 */
  push32((uint32_t)(0x1u));
  /* 11113150 push 0x1112b014 */
  push32((uint32_t)(0x1112b014u));
  /* 11113155 push 0 */
  push32((uint32_t)(0x0u));
  /* 11113157 push 0 */
  push32((uint32_t)(0x0u));
  /* 11113159 call dword ptr [0x111322a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322a8))), 0x1111315fu);
  /* 1111315f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11113161 je 0x1111316f */
  if (C.zf) goto L_1111316f;
  /* 11113163 mov dword ptr [0x1112f874], 2 */
  w32((uint32_t)(0x1112f874), (0x2u));
  /* 1111316d jmp 0x11113176 */
  goto L_11113176;
L_1111316f:;
  /* 1111316f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11113171 jmp 0x111134d4 */
  goto L_111134d4;
L_11113176:;
  /* 11113176 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111317a jle 0x1111318f */
  if ((C.zf||C.sf!=C.of)) goto L_1111318f;
  /* 1111317c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1111317f push eax */
  push32((uint32_t)(EAX));
  /* 11113180 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11113183 push ecx */
  push32((uint32_t)(ECX));
  /* 11113184 call 0x111134f0 */
  push32(0x11113189u); f_111134f0();
  /* 11113189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111318c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1111318f:;
  /* 1111318f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113193 jle 0x111131a8 */
  if ((C.zf||C.sf!=C.of)) goto L_111131a8;
  /* 11113195 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11113198 push edx */
  push32((uint32_t)(EDX));
  /* 11113199 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1111319c push eax */
  push32((uint32_t)(EAX));
  /* 1111319d call 0x111134f0 */
  push32(0x111131a2u); f_111134f0();
  /* 111131a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111131a5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_111131a8:;
  /* 111131a8 cmp dword ptr [0x1112f874], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1112f874))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111131af jne 0x111131d4 */
  if (!C.zf) goto L_111131d4;
  /* 111131b1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111131b4 push ecx */
  push32((uint32_t)(ECX));
  /* 111131b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111131b8 push edx */
  push32((uint32_t)(EDX));
  /* 111131b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111131bc push eax */
  push32((uint32_t)(EAX));
  /* 111131bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111131c0 push ecx */
  push32((uint32_t)(ECX));
  /* 111131c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111131c4 push edx */
  push32((uint32_t)(EDX));
  /* 111131c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111131c8 push eax */
  push32((uint32_t)(EAX));
  /* 111131c9 call dword ptr [0x111322a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322a8))), 0x111131cfu);
  /* 111131cf jmp 0x111134d4 */
  goto L_111134d4;
L_111131d4:;
  /* 111131d4 cmp dword ptr [0x1112f874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111131db jne 0x111134d2 */
  if (!C.zf) goto L_111134d2;
  /* 111131e1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111131e5 jne 0x111131f0 */
  if (!C.zf) goto L_111131f0;
  /* 111131e7 mov ecx, dword ptr [0x1112f720] */
  ECX = (r32((uint32_t)(0x1112f720)));
  /* 111131ed mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_111131f0:;
  /* 111131f0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111131f4 je 0x11113200 */
  if (C.zf) goto L_11113200;
  /* 111131f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111131fa jne 0x1111337c */
  if (!C.zf) goto L_1111337c;
L_11113200:;
  /* 11113200 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11113203 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113206 jne 0x11113212 */
  if (!C.zf) goto L_11113212;
  /* 11113208 mov eax, 2 */
  EAX = (0x2u);
  /* 1111320d jmp 0x111134d4 */
  goto L_111134d4;
L_11113212:;
  /* 11113212 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113216 jle 0x11113222 */
  if ((C.zf||C.sf!=C.of)) goto L_11113222;
  /* 11113218 mov eax, 1 */
  EAX = (0x1u);
  /* 1111321d jmp 0x111134d4 */
  goto L_111134d4;
L_11113222:;
  /* 11113222 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113226 jle 0x11113232 */
  if ((C.zf||C.sf!=C.of)) goto L_11113232;
  /* 11113228 mov eax, 3 */
  EAX = (0x3u);
  /* 1111322d jmp 0x111134d4 */
  goto L_111134d4;
L_11113232:;
  /* 11113232 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11113235 push eax */
  push32((uint32_t)(EAX));
  /* 11113236 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11113239 push ecx */
  push32((uint32_t)(ECX));
  /* 1111323a call dword ptr [0x11132300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132300))), 0x11113240u);
  /* 11113240 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11113242 jne 0x1111324b */
  if (!C.zf) goto L_1111324b;
  /* 11113244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11113246 jmp 0x111134d4 */
  goto L_111134d4;
L_1111324b:;
  /* 1111324b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111324f jne 0x11113257 */
  if (!C.zf) goto L_11113257;
  /* 11113251 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113255 je 0x11113284 */
  if (C.zf) goto L_11113284;
L_11113257:;
  /* 11113257 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111325b jne 0x11113263 */
  if (!C.zf) goto L_11113263;
  /* 1111325d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113261 je 0x11113284 */
  if (C.zf) goto L_11113284;
L_11113263:;
  /* 11113263 push 0x1112b980 */
  push32((uint32_t)(0x1112b980u));
  /* 11113268 push 0 */
  push32((uint32_t)(0x0u));
  /* 1111326a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1111326f push 0x1112b978 */
  push32((uint32_t)(0x1112b978u));
  /* 11113274 push 2 */
  push32((uint32_t)(0x2u));
  /* 11113276 call 0x11102600 */
  push32(0x1111327bu); f_11102600();
  /* 1111327b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111327e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113281 jne 0x11113284 */
  if (!C.zf) goto L_11113284;
  /* 11113283 int3  */
  x86_unimpl("int3 @ 0x11113283");
L_11113284:;
  /* 11113284 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11113286 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11113288 jne 0x1111324b */
  if (!C.zf) goto L_1111324b;
  /* 1111328a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111328e jle 0x11113303 */
  if ((C.zf||C.sf!=C.of)) goto L_11113303;
  /* 11113290 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113294 jae 0x111132a0 */
  if (!C.cf) goto L_111132a0;
  /* 11113296 mov eax, 3 */
  EAX = (0x3u);
  /* 1111329b jmp 0x111134d4 */
  goto L_111134d4;
L_111132a0:;
  /* 111132a0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 111132a3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 111132a6 jmp 0x111132b1 */
  goto L_111132b1;
L_111132a8:;
  /* 111132a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 111132ab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111132ae mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_111132b1:;
  /* 111132b1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 111132b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111132b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111132b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111132ba je 0x111132f9 */
  if (C.zf) goto L_111132f9;
  /* 111132bc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 111132bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111132c1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 111132c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111132c6 je 0x111132f9 */
  if (C.zf) goto L_111132f9;
  /* 111132c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111132cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111132cd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111132cf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 111132d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111132d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111132d6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111132d8 jl 0x111132f7 */
  if ((C.sf!=C.of)) goto L_111132f7;
  /* 111132da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111132dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111132df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111132e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 111132e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111132e6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 111132e9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111132eb jg 0x111132f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_111132f7;
  /* 111132ed mov eax, 2 */
  EAX = (0x2u);
  /* 111132f2 jmp 0x111134d4 */
  goto L_111134d4;
L_111132f7:;
  /* 111132f7 jmp 0x111132a8 */
  goto L_111132a8;
L_111132f9:;
  /* 111132f9 mov eax, 3 */
  EAX = (0x3u);
  /* 111132fe jmp 0x111134d4 */
  goto L_111134d4;
L_11113303:;
  /* 11113303 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113307 jle 0x1111337c */
  if ((C.zf||C.sf!=C.of)) goto L_1111337c;
  /* 11113309 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111330d jae 0x11113319 */
  if (!C.cf) goto L_11113319;
  /* 1111330f mov eax, 1 */
  EAX = (0x1u);
  /* 11113314 jmp 0x111134d4 */
  goto L_111134d4;
L_11113319:;
  /* 11113319 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1111331c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1111331f jmp 0x1111332a */
  goto L_1111332a;
L_11113321:;
  /* 11113321 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11113324 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11113327 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1111332a:;
  /* 1111332a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1111332d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1111332f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11113331 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11113333 je 0x11113372 */
  if (C.zf) goto L_11113372;
  /* 11113335 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11113338 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1111333a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1111333d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1111333f je 0x11113372 */
  if (C.zf) goto L_11113372;
  /* 11113341 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11113344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11113346 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11113348 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1111334b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1111334d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1111334f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113351 jl 0x11113370 */
  if ((C.sf!=C.of)) goto L_11113370;
  /* 11113353 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11113356 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11113358 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1111335a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1111335d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1111335f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11113362 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113364 jg 0x11113370 */
  if ((!C.zf&&C.sf==C.of)) goto L_11113370;
  /* 11113366 mov eax, 2 */
  EAX = (0x2u);
  /* 1111336b jmp 0x111134d4 */
  goto L_111134d4;
L_11113370:;
  /* 11113370 jmp 0x11113321 */
  goto L_11113321;
L_11113372:;
  /* 11113372 mov eax, 1 */
  EAX = (0x1u);
  /* 11113377 jmp 0x111134d4 */
  goto L_111134d4;
L_1111337c:;
  /* 1111337c push 0 */
  push32((uint32_t)(0x0u));
  /* 1111337e push 0 */
  push32((uint32_t)(0x0u));
  /* 11113380 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11113383 push ecx */
  push32((uint32_t)(ECX));
  /* 11113384 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11113387 push edx */
  push32((uint32_t)(EDX));
  /* 11113388 push 9 */
  push32((uint32_t)(0x9u));
  /* 1111338a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1111338d push eax */
  push32((uint32_t)(EAX));
  /* 1111338e call dword ptr [0x111322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f4))), 0x11113394u);
  /* 11113394 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11113397 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111339b jne 0x111133a4 */
  if (!C.zf) goto L_111133a4;
  /* 1111339d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1111339f jmp 0x111134d4 */
  goto L_111134d4;
L_111133a4:;
  /* 111133a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111133ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111133ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111133b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111133b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111133b5 call 0x111066e0 */
  push32(0x111133bau); f_111066e0();
  /* 111133ba mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 111133bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111133c0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 111133c3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 111133c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111133cd jmp 0x111133e6 */
  goto L_111133e6;
  /* 111133cf mov eax, 1 */
  EAX = (0x1u);
  /* 111133d4 ret  */
  ESPCHK(0x111130f0u, _esp0);
  ESP += 4; return;
  /* 111133d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111133d8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111133df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111133e6:;
  /* 111133e6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111133ea jne 0x111133f3 */
  if (!C.zf) goto L_111133f3;
  /* 111133ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111133ee jmp 0x111134d4 */
  goto L_111134d4;
L_111133f3:;
  /* 111133f3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111133f6 push edx */
  push32((uint32_t)(EDX));
  /* 111133f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111133fa push eax */
  push32((uint32_t)(EAX));
  /* 111133fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111133fe push ecx */
  push32((uint32_t)(ECX));
  /* 111133ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11113402 push edx */
  push32((uint32_t)(EDX));
  /* 11113403 push 1 */
  push32((uint32_t)(0x1u));
  /* 11113405 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11113408 push eax */
  push32((uint32_t)(EAX));
  /* 11113409 call dword ptr [0x111322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f4))), 0x1111340fu);
  /* 1111340f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11113411 jne 0x1111341a */
  if (!C.zf) goto L_1111341a;
  /* 11113413 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11113415 jmp 0x111134d4 */
  goto L_111134d4;
L_1111341a:;
  /* 1111341a push 0 */
  push32((uint32_t)(0x0u));
  /* 1111341c push 0 */
  push32((uint32_t)(0x0u));
  /* 1111341e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11113421 push ecx */
  push32((uint32_t)(ECX));
  /* 11113422 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11113425 push edx */
  push32((uint32_t)(EDX));
  /* 11113426 push 9 */
  push32((uint32_t)(0x9u));
  /* 11113428 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1111342b push eax */
  push32((uint32_t)(EAX));
  /* 1111342c call dword ptr [0x111322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f4))), 0x11113432u);
  /* 11113432 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11113435 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113439 jne 0x11113442 */
  if (!C.zf) goto L_11113442;
  /* 1111343b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1111343d jmp 0x111134d4 */
  goto L_111134d4;
L_11113442:;
  /* 11113442 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11113449 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1111344c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1111344e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11113451 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11113453 call 0x111066e0 */
  push32(0x11113458u); f_111066e0();
  /* 11113458 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1111345b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1111345e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11113461 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11113464 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1111346b jmp 0x11113484 */
  goto L_11113484;
  /* 1111346d mov eax, 1 */
  EAX = (0x1u);
  /* 11113472 ret  */
  ESPCHK(0x111130f0u, _esp0);
  ESP += 4; return;
  /* 11113473 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11113476 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1111347d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11113484:;
  /* 11113484 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113488 jne 0x1111348e */
  if (!C.zf) goto L_1111348e;
  /* 1111348a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1111348c jmp 0x111134d4 */
  goto L_111134d4;
L_1111348e:;
  /* 1111348e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11113491 push edx */
  push32((uint32_t)(EDX));
  /* 11113492 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11113495 push eax */
  push32((uint32_t)(EAX));
  /* 11113496 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11113499 push ecx */
  push32((uint32_t)(ECX));
  /* 1111349a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1111349d push edx */
  push32((uint32_t)(EDX));
  /* 1111349e push 1 */
  push32((uint32_t)(0x1u));
  /* 111134a0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 111134a3 push eax */
  push32((uint32_t)(EAX));
  /* 111134a4 call dword ptr [0x111322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f4))), 0x111134aau);
  /* 111134aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111134ac jne 0x111134b2 */
  if (!C.zf) goto L_111134b2;
  /* 111134ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111134b0 jmp 0x111134d4 */
  goto L_111134d4;
L_111134b2:;
  /* 111134b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111134b5 push ecx */
  push32((uint32_t)(ECX));
  /* 111134b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111134b9 push edx */
  push32((uint32_t)(EDX));
  /* 111134ba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111134bd push eax */
  push32((uint32_t)(EAX));
  /* 111134be mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111134c1 push ecx */
  push32((uint32_t)(ECX));
  /* 111134c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111134c5 push edx */
  push32((uint32_t)(EDX));
  /* 111134c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111134c9 push eax */
  push32((uint32_t)(EAX));
  /* 111134ca call dword ptr [0x111322a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322a4))), 0x111134d0u);
  /* 111134d0 jmp 0x111134d4 */
  goto L_111134d4;
L_111134d2:;
  /* 111134d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111134d4:;
  /* 111134d4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 111134d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111134da mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111134e1 pop edi */
  EDI = (pop32());
  /* 111134e2 pop esi */
  ESI = (pop32());
  /* 111134e3 pop ebx */
  EBX = (pop32());
  /* 111134e4 mov esp, ebp */
  ESP = (EBP);
  /* 111134e6 pop ebp */
  EBP = (pop32());
  /* 111134e7 ret  */
  ESPCHK(0x111130f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100134f0 @ 0x111134f0 (80 bytes, 32 insns) */
void f_111134f0(void) {
  FTRACE(0x111134f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111134f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111134f1 mov ebp, esp */
  EBP = (ESP);
  /* 111134f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111134f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111134f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111134fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111134ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11113502:;
  /* 11113502 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11113505 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11113508 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1111350b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1111350e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11113510 je 0x11113527 */
  if (C.zf) goto L_11113527;
  /* 11113512 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11113515 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11113518 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1111351a je 0x11113527 */
  if (C.zf) goto L_11113527;
  /* 1111351c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111351f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11113522 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11113525 jmp 0x11113502 */
  goto L_11113502;
L_11113527:;
  /* 11113527 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111352a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1111352d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1111352f jne 0x11113539 */
  if (!C.zf) goto L_11113539;
  /* 11113531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11113534 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11113537 jmp 0x1111353c */
  goto L_1111353c;
L_11113539:;
  /* 11113539 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1111353c:;
  /* 1111353c mov esp, ebp */
  ESP = (EBP);
  /* 1111353e pop ebp */
  EBP = (pop32());
  /* 1111353f ret  */
  ESPCHK(0x111134f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013540 @ 0x11113540 (736 bytes, 224 insns) */
void f_11113540(void) {
  FTRACE(0x11113540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11113540 push ebp */
  push32((uint32_t)(EBP));
  /* 11113541 mov ebp, esp */
  EBP = (ESP);
  /* 11113543 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11113546 push esi */
  push32((uint32_t)(ESI));
  /* 11113547 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111354b je 0x1111356c */
  if (C.zf) goto L_1111356c;
  /* 1111354d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1111354f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11113552 push eax */
  push32((uint32_t)(EAX));
  /* 11113553 call 0x11113990 */
  push32(0x11113558u); f_11113990();
  /* 11113558 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111355b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1111355e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113562 je 0x1111356c */
  if (C.zf) goto L_1111356c;
  /* 11113564 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11113567 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111356a jne 0x11113574 */
  if (!C.zf) goto L_11113574;
L_1111356c:;
  /* 1111356c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1111356f jmp 0x1111381b */
  goto L_1111381b;
L_11113574:;
  /* 11113574 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11113577 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1111357b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1111357d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1111357f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11113580 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11113583 mov ecx, dword ptr [0x1112f530] */
  ECX = (r32((uint32_t)(0x1112f530)));
  /* 11113589 cmp ecx, dword ptr [0x1112f534] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1112f534))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111358f jne 0x111135a5 */
  if (!C.zf) goto L_111135a5;
  /* 11113591 mov edx, dword ptr [0x1112f530] */
  EDX = (r32((uint32_t)(0x1112f530)));
  /* 11113597 push edx */
  push32((uint32_t)(EDX));
  /* 11113598 call 0x111138a0 */
  push32(0x1111359du); f_111138a0();
  /* 1111359d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111135a0 mov dword ptr [0x1112f530], eax */
  w32((uint32_t)(0x1112f530), (EAX));
L_111135a5:;
  /* 111135a5 cmp dword ptr [0x1112f530], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f530))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111135ac jne 0x11113665 */
  if (!C.zf) goto L_11113665;
  /* 111135b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111135b6 je 0x111135d7 */
  if (C.zf) goto L_111135d7;
  /* 111135b8 cmp dword ptr [0x1112f538], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f538))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111135bf je 0x111135d7 */
  if (C.zf) goto L_111135d7;
  /* 111135c1 call 0x11113040 */
  push32(0x111135c6u); f_11113040();
  /* 111135c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111135c8 je 0x111135d2 */
  if (C.zf) goto L_111135d2;
  /* 111135ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111135cd jmp 0x1111381b */
  goto L_1111381b;
L_111135d2:;
  /* 111135d2 jmp 0x11113665 */
  goto L_11113665;
L_111135d7:;
  /* 111135d7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111135db je 0x111135e4 */
  if (C.zf) goto L_111135e4;
  /* 111135dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111135df jmp 0x1111381b */
  goto L_1111381b;
L_111135e4:;
  /* 111135e4 cmp dword ptr [0x1112f530], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f530))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111135eb jne 0x11113624 */
  if (!C.zf) goto L_11113624;
  /* 111135ed push 0x87 */
  push32((uint32_t)(0x87u));
  /* 111135f2 push 0x1112b9d8 */
  push32((uint32_t)(0x1112b9d8u));
  /* 111135f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111135f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 111135fb call 0x11103540 */
  push32(0x11113600u); f_11103540();
  /* 11113600 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113603 mov dword ptr [0x1112f530], eax */
  w32((uint32_t)(0x1112f530), (EAX));
  /* 11113608 cmp dword ptr [0x1112f530], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f530))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111360f jne 0x11113619 */
  if (!C.zf) goto L_11113619;
  /* 11113611 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11113614 jmp 0x1111381b */
  goto L_1111381b;
L_11113619:;
  /* 11113619 mov eax, dword ptr [0x1112f530] */
  EAX = (r32((uint32_t)(0x1112f530)));
  /* 1111361e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11113624:;
  /* 11113624 cmp dword ptr [0x1112f538], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f538))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111362b jne 0x11113665 */
  if (!C.zf) goto L_11113665;
  /* 1111362d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11113632 push 0x1112b9d8 */
  push32((uint32_t)(0x1112b9d8u));
  /* 11113637 push 2 */
  push32((uint32_t)(0x2u));
  /* 11113639 push 4 */
  push32((uint32_t)(0x4u));
  /* 1111363b call 0x11103540 */
  push32(0x11113640u); f_11103540();
  /* 11113640 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113643 mov dword ptr [0x1112f538], eax */
  w32((uint32_t)(0x1112f538), (EAX));
  /* 11113648 cmp dword ptr [0x1112f538], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f538))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111364f jne 0x11113659 */
  if (!C.zf) goto L_11113659;
  /* 11113651 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11113654 jmp 0x1111381b */
  goto L_1111381b;
L_11113659:;
  /* 11113659 mov ecx, dword ptr [0x1112f538] */
  ECX = (r32((uint32_t)(0x1112f538)));
  /* 1111365f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11113665:;
  /* 11113665 mov edx, dword ptr [0x1112f530] */
  EDX = (r32((uint32_t)(0x1112f530)));
  /* 1111366b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1111366e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11113671 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11113674 push eax */
  push32((uint32_t)(EAX));
  /* 11113675 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11113678 push ecx */
  push32((uint32_t)(ECX));
  /* 11113679 call 0x11113820 */
  push32(0x1111367eu); f_11113820();
  /* 1111367e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113681 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11113684 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113688 jl 0x11113721 */
  if ((C.sf!=C.of)) goto L_11113721;
  /* 1111368e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11113691 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113694 je 0x11113721 */
  if (C.zf) goto L_11113721;
  /* 1111369a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111369e je 0x11113713 */
  if (C.zf) goto L_11113713;
  /* 111136a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111136a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111136a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111136a8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 111136ab push edx */
  push32((uint32_t)(EDX));
  /* 111136ac call 0x11103fd0 */
  push32(0x111136b1u); f_11103fd0();
  /* 111136b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111136b4 jmp 0x111136bf */
  goto L_111136bf;
L_111136b6:;
  /* 111136b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111136b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111136bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111136bf:;
  /* 111136bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111136c2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111136c5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111136c9 je 0x111136e0 */
  if (C.zf) goto L_111136e0;
  /* 111136cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111136ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111136d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111136d4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 111136d7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 111136db mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 111136de jmp 0x111136b6 */
  goto L_111136b6;
L_111136e0:;
  /* 111136e0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 111136e5 push 0x1112b9d8 */
  push32((uint32_t)(0x1112b9d8u));
  /* 111136ea push 2 */
  push32((uint32_t)(0x2u));
  /* 111136ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111136ef shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 111136f2 push eax */
  push32((uint32_t)(EAX));
  /* 111136f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111136f6 push ecx */
  push32((uint32_t)(ECX));
  /* 111136f7 call 0x111039d0 */
  push32(0x111136fcu); f_111039d0();
  /* 111136fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111136ff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11113702 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113706 je 0x11113711 */
  if (C.zf) goto L_11113711;
  /* 11113708 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111370b mov dword ptr [0x1112f530], edx */
  w32((uint32_t)(0x1112f530), (EDX));
L_11113711:;
  /* 11113711 jmp 0x1111371f */
  goto L_1111371f;
L_11113713:;
  /* 11113713 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11113716 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11113719 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111371c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1111371f:;
  /* 1111371f jmp 0x11113794 */
  goto L_11113794;
L_11113721:;
  /* 11113721 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113725 jne 0x1111378d */
  if (!C.zf) goto L_1111378d;
  /* 11113727 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111372b jge 0x11113735 */
  if ((C.sf==C.of)) goto L_11113735;
  /* 1111372d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11113730 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11113732 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11113735:;
  /* 11113735 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1111373a push 0x1112b9d8 */
  push32((uint32_t)(0x1112b9d8u));
  /* 1111373f push 2 */
  push32((uint32_t)(0x2u));
  /* 11113741 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11113744 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1111374b push edx */
  push32((uint32_t)(EDX));
  /* 1111374c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111374f push eax */
  push32((uint32_t)(EAX));
  /* 11113750 call 0x111039d0 */
  push32(0x11113755u); f_111039d0();
  /* 11113755 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113758 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1111375b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111375f jne 0x11113769 */
  if (!C.zf) goto L_11113769;
  /* 11113761 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11113764 jmp 0x1111381b */
  goto L_1111381b;
L_11113769:;
  /* 11113769 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1111376c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111376f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11113772 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11113775 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11113778 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111377b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11113783 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11113786 mov dword ptr [0x1112f530], eax */
  w32((uint32_t)(0x1112f530), (EAX));
  /* 1111378b jmp 0x11113794 */
  goto L_11113794;
L_1111378d:;
  /* 1111378d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1111378f jmp 0x1111381b */
  goto L_1111381b;
L_11113794:;
  /* 11113794 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113798 je 0x11113819 */
  if (C.zf) goto L_11113819;
  /* 1111379a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1111379f push 0x1112b9d8 */
  push32((uint32_t)(0x1112b9d8u));
  /* 111137a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111137a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111137a9 push ecx */
  push32((uint32_t)(ECX));
  /* 111137aa call 0x11106370 */
  push32(0x111137afu); f_11106370();
  /* 111137af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111137b2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111137b5 push eax */
  push32((uint32_t)(EAX));
  /* 111137b6 call 0x11103540 */
  push32(0x111137bbu); f_11103540();
  /* 111137bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111137be mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111137c1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111137c5 je 0x11113819 */
  if (C.zf) goto L_11113819;
  /* 111137c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111137ca push edx */
  push32((uint32_t)(EDX));
  /* 111137cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111137ce push eax */
  push32((uint32_t)(EAX));
  /* 111137cf call 0x111064f0 */
  push32(0x111137d4u); f_111064f0();
  /* 111137d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111137d7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111137da sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111137dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111137e0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111137e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111137e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111137e8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111137eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111137ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111137f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111137f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111137f7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111137f9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111137fb not edx */
  EDX = (~(EDX));
  /* 111137fd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11113800 push edx */
  push32((uint32_t)(EDX));
  /* 11113801 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11113804 push eax */
  push32((uint32_t)(EAX));
  /* 11113805 call dword ptr [0x111322a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322a0))), 0x1111380bu);
  /* 1111380b push 2 */
  push32((uint32_t)(0x2u));
  /* 1111380d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11113810 push ecx */
  push32((uint32_t)(ECX));
  /* 11113811 call 0x11103fd0 */
  push32(0x11113816u); f_11103fd0();
  /* 11113816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11113819:;
  /* 11113819 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1111381b:;
  /* 1111381b pop esi */
  ESI = (pop32());
  /* 1111381c mov esp, ebp */
  ESP = (EBP);
  /* 1111381e pop ebp */
  EBP = (pop32());
  /* 1111381f ret  */
  ESPCHK(0x11113540u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11113820 (124 bytes, 47 insns) */
void f_11113820(void) {
  FTRACE(0x11113820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11113820 push ebp */
  push32((uint32_t)(EBP));
  /* 11113821 mov ebp, esp */
  EBP = (ESP);
  /* 11113823 push ecx */
  push32((uint32_t)(ECX));
  /* 11113824 mov eax, dword ptr [0x1112f530] */
  EAX = (r32((uint32_t)(0x1112f530)));
  /* 11113829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1111382c jmp 0x11113837 */
  goto L_11113837;
L_1111382e:;
  /* 1111382e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11113831 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11113834 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11113837:;
  /* 11113837 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111383a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111383d je 0x1111388a */
  if (C.zf) goto L_1111388a;
  /* 1111383f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11113842 push eax */
  push32((uint32_t)(EAX));
  /* 11113843 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11113846 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11113848 push edx */
  push32((uint32_t)(EDX));
  /* 11113849 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111384c push eax */
  push32((uint32_t)(EAX));
  /* 1111384d call 0x11112ff0 */
  push32(0x11113852u); f_11112ff0();
  /* 11113852 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11113857 jne 0x11113888 */
  if (!C.zf) goto L_11113888;
  /* 11113859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111385c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1111385e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11113861 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11113865 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113868 je 0x1111387a */
  if (C.zf) goto L_1111387a;
  /* 1111386a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111386d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1111386f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11113872 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11113876 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11113878 jne 0x11113888 */
  if (!C.zf) goto L_11113888;
L_1111387a:;
  /* 1111387a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111387d sub eax, dword ptr [0x1112f530] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112f530))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11113883 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11113886 jmp 0x11113898 */
  goto L_11113898;
L_11113888:;
  /* 11113888 jmp 0x1111382e */
  goto L_1111382e;
L_1111388a:;
  /* 1111388a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111388d sub eax, dword ptr [0x1112f530] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112f530))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11113893 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11113896 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11113898:;
  /* 11113898 mov esp, ebp */
  ESP = (EBP);
  /* 1111389a pop ebp */
  EBP = (pop32());
  /* 1111389b ret  */
  ESPCHK(0x11113820u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x111138a0 (238 bytes, 80 insns) */
void f_111138a0(void) {
  FTRACE(0x111138a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111138a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111138a1 mov ebp, esp */
  EBP = (ESP);
  /* 111138a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111138a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111138ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111138b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111138b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111138b7 jne 0x111138c0 */
  if (!C.zf) goto L_111138c0;
  /* 111138b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111138bb jmp 0x1111398a */
  goto L_1111398a;
L_111138c0:;
  /* 111138c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111138c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111138c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111138c8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111138cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111138ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111138d0 je 0x111138dd */
  if (C.zf) goto L_111138dd;
  /* 111138d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111138d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111138d8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111138db jmp 0x111138c0 */
  goto L_111138c0;
L_111138dd:;
  /* 111138dd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 111138e2 push 0x1112b9d8 */
  push32((uint32_t)(0x1112b9d8u));
  /* 111138e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111138e9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111138ec lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 111138f3 push eax */
  push32((uint32_t)(EAX));
  /* 111138f4 call 0x11103540 */
  push32(0x111138f9u); f_11103540();
  /* 111138f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111138fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111138ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11113902 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11113905 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113909 jne 0x11113915 */
  if (!C.zf) goto L_11113915;
  /* 1111390b push 9 */
  push32((uint32_t)(0x9u));
  /* 1111390d call 0x111024b0 */
  push32(0x11113912u); f_111024b0();
  /* 11113912 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11113915:;
  /* 11113915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11113918 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1111391b:;
  /* 1111391b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111391e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113921 je 0x1111397e */
  if (C.zf) goto L_1111397e;
  /* 11113923 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11113928 push 0x1112b9d8 */
  push32((uint32_t)(0x1112b9d8u));
  /* 1111392d push 2 */
  push32((uint32_t)(0x2u));
  /* 1111392f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11113932 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11113934 push edx */
  push32((uint32_t)(EDX));
  /* 11113935 call 0x11106370 */
  push32(0x1111393au); f_11106370();
  /* 1111393a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111393d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11113940 push eax */
  push32((uint32_t)(EAX));
  /* 11113941 call 0x11103540 */
  push32(0x11113946u); f_11103540();
  /* 11113946 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113949 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1111394c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1111394e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11113951 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113954 je 0x1111396a */
  if (C.zf) goto L_1111396a;
  /* 11113956 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11113959 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1111395b push ecx */
  push32((uint32_t)(ECX));
  /* 1111395c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1111395f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11113961 push eax */
  push32((uint32_t)(EAX));
  /* 11113962 call 0x111064f0 */
  push32(0x11113967u); f_111064f0();
  /* 11113967 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1111396a:;
  /* 1111396a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111396d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11113970 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11113973 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11113976 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11113979 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1111397c jmp 0x1111391b */
  goto L_1111391b;
L_1111397e:;
  /* 1111397e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11113981 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11113987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1111398a:;
  /* 1111398a mov esp, ebp */
  ESP = (EBP);
  /* 1111398c pop ebp */
  EBP = (pop32());
  /* 1111398d ret  */
  ESPCHK(0x111138a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013990 @ 0x11113990 (237 bytes, 81 insns) */
void f_11113990(void) {
  FTRACE(0x11113990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11113990 push ebp */
  push32((uint32_t)(EBP));
  /* 11113991 mov ebp, esp */
  EBP = (ESP);
  /* 11113993 push ecx */
  push32((uint32_t)(ECX));
  /* 11113994 cmp dword ptr [0x11130c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11130c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111399b jne 0x111139b2 */
  if (!C.zf) goto L_111139b2;
  /* 1111399d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111139a0 push eax */
  push32((uint32_t)(EAX));
  /* 111139a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111139a4 push ecx */
  push32((uint32_t)(ECX));
  /* 111139a5 call 0x11113a90 */
  push32(0x111139aau); f_11113a90();
  /* 111139aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111139ad jmp 0x11113a79 */
  goto L_11113a79;
L_111139b2:;
  /* 111139b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111139b4 call 0x11106f40 */
  push32(0x111139b9u); f_11106f40();
  /* 111139b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111139bc jmp 0x111139c7 */
  goto L_111139c7;
L_111139be:;
  /* 111139be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111139c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111139c4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_111139c7:;
  /* 111139c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111139ca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 111139ce mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 111139d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111139d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111139db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111139dd je 0x11113a5b */
  if (C.zf) goto L_11113a5b;
  /* 111139df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111139e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111139e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111139e9 mov cl, byte ptr [eax + 0x11130d81] */
  CL = (r8((uint32_t)(EAX + 0x11130d81)));
  /* 111139ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 111139f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111139f4 je 0x11113a46 */
  if (C.zf) goto L_11113a46;
  /* 111139f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111139f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111139fc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111139ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11113a02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11113a04 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11113a06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11113a08 jne 0x11113a18 */
  if (!C.zf) goto L_11113a18;
  /* 11113a0a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11113a0c call 0x11106fe0 */
  push32(0x11113a11u); f_11106fe0();
  /* 11113a11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113a14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11113a16 jmp 0x11113a79 */
  goto L_11113a79;
L_11113a18:;
  /* 11113a18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11113a1b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11113a21 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11113a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11113a27 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11113a29 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11113a2b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11113a2d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113a30 jne 0x11113a44 */
  if (!C.zf) goto L_11113a44;
  /* 11113a32 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11113a34 call 0x11106fe0 */
  push32(0x11113a39u); f_11106fe0();
  /* 11113a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113a3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11113a3f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11113a42 jmp 0x11113a79 */
  goto L_11113a79;
L_11113a44:;
  /* 11113a44 jmp 0x11113a56 */
  goto L_11113a56;
L_11113a46:;
  /* 11113a46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11113a49 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11113a4f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113a52 jne 0x11113a56 */
  if (!C.zf) goto L_11113a56;
  /* 11113a54 jmp 0x11113a5b */
  goto L_11113a5b;
L_11113a56:;
  /* 11113a56 jmp 0x111139be */
  goto L_111139be;
L_11113a5b:;
  /* 11113a5b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11113a5d call 0x11106fe0 */
  push32(0x11113a62u); f_11106fe0();
  /* 11113a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11113a65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11113a68 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11113a6d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11113a70 jne 0x11113a77 */
  if (!C.zf) goto L_11113a77;
  /* 11113a72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11113a75 jmp 0x11113a79 */
  goto L_11113a79;
L_11113a77:;
  /* 11113a77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11113a79:;
  /* 11113a79 mov esp, ebp */
  ESP = (EBP);
  /* 11113a7b pop ebp */
  EBP = (pop32());
  /* 11113a7c ret  */
  ESPCHK(0x11113990u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11113a90 (193 bytes, 87 insns) */
void f_11113a90(void) {
  FTRACE(0x11113a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11113a90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11113a92 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11113a96 push ebx */
  push32((uint32_t)(EBX));
  /* 11113a97 mov ebx, eax */
  EBX = (EAX);
  /* 11113a99 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11113a9c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11113aa0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11113aa6 je 0x11113abb */
  if (C.zf) goto L_11113abb;
L_11113aa8:;
  /* 11113aa8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11113aaa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11113aab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11113aad je 0x11113a80 */
  if (C.zf) { jmp_ind(0x11113a80u); return; }
  /* 11113aaf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11113ab1 je 0x11113b04 */
  if (C.zf) goto L_11113b04;
  /* 11113ab3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11113ab9 jne 0x11113aa8 */
  if (!C.zf) goto L_11113aa8;
L_11113abb:;
  /* 11113abb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11113abd push edi */
  push32((uint32_t)(EDI));
  /* 11113abe mov eax, ebx */
  EAX = (EBX);
  /* 11113ac0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11113ac3 push esi */
  push32((uint32_t)(ESI));
  /* 11113ac4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11113ac6:;
  /* 11113ac6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11113ac8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11113acd mov eax, ecx */
  EAX = (ECX);
  /* 11113acf mov esi, edi */
  ESI = (EDI);
  /* 11113ad1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11113ad3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11113ad5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11113ad7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11113ada xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11113add xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11113adf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11113ae1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11113ae4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11113aea jne 0x11113b08 */
  if (!C.zf) goto L_11113b08;
  /* 11113aec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11113af1 je 0x11113ac6 */
  if (C.zf) goto L_11113ac6;
  /* 11113af3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11113af8 jne 0x11113b02 */
  if (!C.zf) goto L_11113b02;
  /* 11113afa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11113b00 jne 0x11113ac6 */
  if (!C.zf) goto L_11113ac6;
L_11113b02:;
  /* 11113b02 pop esi */
  ESI = (pop32());
  /* 11113b03 pop edi */
  EDI = (pop32());
L_11113b04:;
  /* 11113b04 pop ebx */
  EBX = (pop32());
  /* 11113b05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11113b07 ret  */
  ESPCHK(0x11113a90u, _esp0);
  ESP += 4; return;
L_11113b08:;
  /* 11113b08 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11113b0b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11113b0d je 0x11113b45 */
  if (C.zf) goto L_11113b45;
  /* 11113b0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11113b11 je 0x11113b02 */
  if (C.zf) goto L_11113b02;
  /* 11113b13 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11113b15 je 0x11113b3e */
  if (C.zf) goto L_11113b3e;
  /* 11113b17 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11113b19 je 0x11113b02 */
  if (C.zf) goto L_11113b02;
  /* 11113b1b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11113b1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11113b20 je 0x11113b37 */
  if (C.zf) goto L_11113b37;
  /* 11113b22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11113b24 je 0x11113b02 */
  if (C.zf) goto L_11113b02;
  /* 11113b26 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11113b28 je 0x11113b30 */
  if (C.zf) goto L_11113b30;
  /* 11113b2a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11113b2c je 0x11113b02 */
  if (C.zf) goto L_11113b02;
  /* 11113b2e jmp 0x11113ac6 */
  goto L_11113ac6;
L_11113b30:;
  /* 11113b30 pop esi */
  ESI = (pop32());
  /* 11113b31 pop edi */
  EDI = (pop32());
  /* 11113b32 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11113b35 pop ebx */
  EBX = (pop32());
  /* 11113b36 ret  */
  ESPCHK(0x11113a90u, _esp0);
  ESP += 4; return;
L_11113b37:;
  /* 11113b37 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11113b3a pop esi */
  ESI = (pop32());
  /* 11113b3b pop edi */
  EDI = (pop32());
  /* 11113b3c pop ebx */
  EBX = (pop32());
  /* 11113b3d ret  */
  ESPCHK(0x11113a90u, _esp0);
  ESP += 4; return;
L_11113b3e:;
  /* 11113b3e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11113b41 pop esi */
  ESI = (pop32());
  /* 11113b42 pop edi */
  EDI = (pop32());
  /* 11113b43 pop ebx */
  EBX = (pop32());
  /* 11113b44 ret  */
  ESPCHK(0x11113a90u, _esp0);
  ESP += 4; return;
L_11113b45:;
  /* 11113b45 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11113b48 pop esi */
  ESI = (pop32());
  /* 11113b49 pop edi */
  EDI = (pop32());
  /* 11113b4a pop ebx */
  EBX = (pop32());
  /* 11113b4b ret  */
  ESPCHK(0x11113a90u, _esp0);
  ESP += 4; return;
  /* 11113b4c jmp dword ptr [0x11132328] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11132328)))); return;
}

/* RtlUnwind @ 0x11113c9c (6 bytes, 1 insns) */
void f_11113c9c(void) {
  FTRACE(0x11113c9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11113c9c jmp dword ptr [0x111322dc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x111322dc)))); return;
}

/* FUN_1001aba0 @ 0x1111aba0 (4 bytes, 3 insns) */
void f_1111aba0(void) {
  FTRACE(0x1111aba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1111aba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1111aba1 mov ebp, esp */
  EBP = (ESP);
  /* 1111aba3 push ecx */
  push32((uint32_t)(ECX));
}

/* FUN_1001af80 @ 0x1111af80 (77 bytes, 28 insns) */
void f_1111af80(void) {
  FTRACE(0x1111af80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1111af80 push ebp */
  push32((uint32_t)(EBP));
  /* 1111af81 mov ebp, esp */
  EBP = (ESP);
  /* 1111af83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111af86 cmp eax, dword ptr [0x1004203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1004203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111af8c jb 0x1111af92 */
  if (C.cf) goto L_1111af92;
  /* 1111af8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1111af90 jmp 0x1111afb0 */
  goto L_1111afb0;
L_1111af92:;
  /* 1111af92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111af95 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1111af98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111af9b or esp, 0xffffffa5 */
  { uint32_t _r=(ESP)|(0xffffffa5u); ESP = (_r); fl_logic(_r,32); }
  /* 1111af9e add edx, dword ptr [eax - 0x6ffa645c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + -0x6ffa645c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111afa4 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x1111afa4");
  /* 1111afa7 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x1111afa7");
  /* 1111afa8 add byte ptr [esi + 0x3dca1044], bh */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x3dca1044))),_b=(C.b.b.h),_r=_a+_b; w8((uint32_t)(ESI + 0x3dca1044), (_r)); fl_add(_a,_b,_r,8); }
  /* 1111afae add al, byte ptr [eax] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EAX))),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1111afb0:;
  /* 1111afb0 enter 0x5a1, -0x70 */
  x86_unimpl("enter @ 0x1111afb0");
  /* 1111afb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111afb9 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1111afbb add byte ptr [edi], cl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(CL),_r=_a+_b; w8((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,8); }
  /* 1111afbd add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1111afbf add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1111afc1 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1111afc3 add dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a+_b; w32((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,32); }
  /* 1111afc5 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1111afc7 add byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a+_b; w8((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,8); }
  /* 1111afc9 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1111afcb add bh, bh */
  { uint32_t _a=(C.b.b.h),_b=(C.b.b.h),_r=_a+_b; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
}

/* FUN_1001de80 @ 0x1111de80 (16 bytes, 7 insns) */
void f_1111de80(void) {
  FTRACE(0x1111de80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1111de80 push ebp */
  push32((uint32_t)(EBP));
  /* 1111de81 mov ebp, esp */
  EBP = (ESP);
  /* 1111de83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1111de86 mov eax, dword ptr [0x457b4f4] */
  EAX = (r32((uint32_t)(0x457b4f4)));
  /* 1111de8b nop  */
  /* nop */
  /* 1111de8c nop  */
  /* nop */
  /* 1111de8d retf 0x9005 */
  x86_unimpl("retf @ 0x1111de8d");
}

