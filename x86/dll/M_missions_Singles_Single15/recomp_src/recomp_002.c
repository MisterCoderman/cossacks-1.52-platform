#include "recomp.h"

/* FUN_100148a0 @ 0x111648a0 (393 bytes, 123 insns) */
void f_111648a0(void) {
  FTRACE(0x111648a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111648a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111648a1 mov ebp, esp */
  EBP = (ESP);
  /* 111648a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111648a6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111648aa jne 0x111648b6 */
  if (!C.zf) goto L_111648b6;
  /* 111648ac mov eax, dword ptr [0x11182c98] */
  EAX = (r32((uint32_t)(0x11182c98)));
  /* 111648b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111648b4 jmp 0x111648bc */
  goto L_111648bc;
L_111648b6:;
  /* 111648b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111648b9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111648bc:;
  /* 111648bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111648bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111648c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111648c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111648c8 push 0x11183b7c */
  push32((uint32_t)(0x11183b7cu));
  /* 111648cd call dword ptr [0x111862e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862e8))), 0x111648d3u);
  /* 111648d3 cmp dword ptr [0x11183b6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111648da je 0x111648fa */
  if (C.zf) goto L_111648fa;
  /* 111648dc push 0x11183b7c */
  push32((uint32_t)(0x11183b7cu));
  /* 111648e1 call dword ptr [0x111863c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c8))), 0x111648e7u);
  /* 111648e7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111648e9 call 0x1115af60 */
  push32(0x111648eeu); f_1115af60();
  /* 111648ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111648f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 111648f8 jmp 0x11164901 */
  goto L_11164901;
L_111648fa:;
  /* 111648fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11164901:;
  /* 11164901 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164905 jbe 0x111649f2 */
  if ((C.cf||C.zf)) goto L_111649f2;
  /* 1116490b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116490e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11164910 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11164913 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11164917 je 0x11164921 */
  if (C.zf) goto L_11164921;
  /* 11164919 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1116491d je 0x11164926 */
  if (C.zf) goto L_11164926;
  /* 1116491f jmp 0x11164980 */
  goto L_11164980;
L_11164921:;
  /* 11164921 jmp 0x111649f2 */
  goto L_111649f2;
L_11164926:;
  /* 11164926 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164929 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116492c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1116492f mov dword ptr [0x11183b58], 0 */
  w32((uint32_t)(0x11183b58), (0x0u));
  /* 11164939 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116493c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1116493f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164942 jne 0x11164957 */
  if (!C.zf) goto L_11164957;
  /* 11164944 mov dword ptr [0x11183b58], 1 */
  w32((uint32_t)(0x11183b58), (0x1u));
  /* 1116494e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164951 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164954 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11164957:;
  /* 11164957 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116495a push ecx */
  push32((uint32_t)(ECX));
  /* 1116495b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1116495e push edx */
  push32((uint32_t)(EDX));
  /* 1116495f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11164962 push eax */
  push32((uint32_t)(EAX));
  /* 11164963 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164966 push ecx */
  push32((uint32_t)(ECX));
  /* 11164967 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116496a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1116496c push eax */
  push32((uint32_t)(EAX));
  /* 1116496d call 0x11164a30 */
  push32(0x11164972u); f_11164a30();
  /* 11164972 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164975 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164978 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116497b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1116497e jmp 0x111649ed */
  goto L_111649ed;
L_11164980:;
  /* 11164980 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164983 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11164985 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11164987 mov ecx, dword ptr [0x11181c98] */
  ECX = (r32((uint32_t)(0x11181c98)));
  /* 1116498d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1116498f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11164993 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11164999 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1116499b je 0x111649c8 */
  if (C.zf) goto L_111649c8;
  /* 1116499d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111649a1 jbe 0x111649c8 */
  if ((C.cf||C.zf)) goto L_111649c8;
  /* 111649a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111649a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111649a9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111649ab mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111649ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111649b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111649b3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111649b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111649b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111649bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 111649bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111649c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111649c5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111649c8:;
  /* 111649c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111649cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111649ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111649d0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111649d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111649d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111649d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111649db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111649de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111649e1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 111649e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111649e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111649ea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111649ed:;
  /* 111649ed jmp 0x11164901 */
  goto L_11164901;
L_111649f2:;
  /* 111649f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111649f6 je 0x11164a04 */
  if (C.zf) goto L_11164a04;
  /* 111649f8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111649fa call 0x1115b000 */
  push32(0x111649ffu); f_1115b000();
  /* 111649ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164a02 jmp 0x11164a0f */
  goto L_11164a0f;
L_11164a04:;
  /* 11164a04 push 0x11183b7c */
  push32((uint32_t)(0x11183b7cu));
  /* 11164a09 call dword ptr [0x111863c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c8))), 0x11164a0fu);
L_11164a0f:;
  /* 11164a0f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164a13 jbe 0x11164a23 */
  if ((C.cf||C.zf)) goto L_11164a23;
  /* 11164a15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164a18 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11164a1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164a1e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11164a21 jmp 0x11164a25 */
  goto L_11164a25;
L_11164a23:;
  /* 11164a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11164a25:;
  /* 11164a25 mov esp, ebp */
  ESP = (EBP);
  /* 11164a27 pop ebp */
  EBP = (pop32());
  /* 11164a28 ret  */
  ESPCHK(0x111648a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a30 @ 0x11164a30 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11164a30(void) {
  FTRACE(0x11164a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11164a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11164a31 mov ebp, esp */
  EBP = (ESP);
  /* 11164a33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11164a36 push esi */
  push32((uint32_t)(ESI));
  /* 11164a37 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11164a3b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11164a3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164a41 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11164a44 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11164a47 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164a4b ja 0x11164f98 */
  if ((!C.cf&&!C.zf)) goto L_11164f98;
  /* 11164a51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164a54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11164a56 mov dl, byte ptr [eax + 0x11164ff9] */
  DL = (r8((uint32_t)(EAX + 0x11164ff9)));
  /* 11164a5c jmp dword ptr [edx*4 + 0x11164f9d] */
  switch (EDX) {
    case 0: goto L_11164f76;
    case 1: goto L_11164a85;
    case 2: goto L_11164acb;
    case 3: goto L_11164c18;
    case 4: goto L_11164c40;
    case 5: goto L_11164cdf;
    case 6: goto L_11164d4b;
    case 7: goto L_11164d74;
    case 8: goto L_11164db5;
    case 9: goto L_11164e97;
    case 10: goto L_11164efe;
    case 11: goto L_11164f4b;
    case 12: goto L_11164a63;
    case 13: goto L_11164aa8;
    case 14: goto L_11164aee;
    case 15: goto L_11164bee;
    case 16: goto L_11164c85;
    case 17: goto L_11164cb2;
    case 18: goto L_11164d07;
    case 19: goto L_11164d8b;
    case 20: goto L_11164e39;
    case 21: goto L_11164ec8;
    case 22: goto L_11164f98;
    default: x86_unimpl("switch@0x11164a5c out of table"); return;
  }
L_11164a63:;
  /* 11164a63 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164a66 push ecx */
  push32((uint32_t)(ECX));
  /* 11164a67 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164a6a push edx */
  push32((uint32_t)(EDX));
  /* 11164a6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164a6e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11164a71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164a74 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11164a77 push eax */
  push32((uint32_t)(EAX));
  /* 11164a78 call 0x11165050 */
  push32(0x11164a7du); f_11165050();
  /* 11164a7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164a80 jmp 0x11164f98 */
  goto L_11164f98;
L_11164a85:;
  /* 11164a85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164a88 push ecx */
  push32((uint32_t)(ECX));
  /* 11164a89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164a8c push edx */
  push32((uint32_t)(EDX));
  /* 11164a8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164a90 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11164a93 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164a96 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11164a9a push eax */
  push32((uint32_t)(EAX));
  /* 11164a9b call 0x11165050 */
  push32(0x11164aa0u); f_11165050();
  /* 11164aa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164aa3 jmp 0x11164f98 */
  goto L_11164f98;
L_11164aa8:;
  /* 11164aa8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164aab push ecx */
  push32((uint32_t)(ECX));
  /* 11164aac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164aaf push edx */
  push32((uint32_t)(EDX));
  /* 11164ab0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164ab3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11164ab6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164ab9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11164abd push eax */
  push32((uint32_t)(EAX));
  /* 11164abe call 0x11165050 */
  push32(0x11164ac3u); f_11165050();
  /* 11164ac3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164ac6 jmp 0x11164f98 */
  goto L_11164f98;
L_11164acb:;
  /* 11164acb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164ace push ecx */
  push32((uint32_t)(ECX));
  /* 11164acf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164ad2 push edx */
  push32((uint32_t)(EDX));
  /* 11164ad3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164ad6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11164ad9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164adc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11164ae0 push eax */
  push32((uint32_t)(EAX));
  /* 11164ae1 call 0x11165050 */
  push32(0x11164ae6u); f_11165050();
  /* 11164ae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164ae9 jmp 0x11164f98 */
  goto L_11164f98;
L_11164aee:;
  /* 11164aee cmp dword ptr [0x11183b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164af5 je 0x11164b76 */
  if (C.zf) goto L_11164b76;
  /* 11164af7 mov dword ptr [0x11183b58], 0 */
  w32((uint32_t)(0x11183b58), (0x0u));
  /* 11164b01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164b04 push ecx */
  push32((uint32_t)(ECX));
  /* 11164b05 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164b08 push edx */
  push32((uint32_t)(EDX));
  /* 11164b09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164b0c push eax */
  push32((uint32_t)(EAX));
  /* 11164b0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164b10 push ecx */
  push32((uint32_t)(ECX));
  /* 11164b11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164b14 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11164b1a push eax */
  push32((uint32_t)(EAX));
  /* 11164b1b call 0x11165200 */
  push32(0x11164b20u); f_11165200();
  /* 11164b20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164b23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164b26 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164b29 jne 0x11164b30 */
  if (!C.zf) goto L_11164b30;
  /* 11164b2b jmp 0x11164f98 */
  goto L_11164f98;
L_11164b30:;
  /* 11164b30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164b33 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11164b35 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11164b38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164b3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11164b3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164b40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164b43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11164b45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164b48 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11164b4a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11164b4d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164b50 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11164b52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164b55 push ecx */
  push32((uint32_t)(ECX));
  /* 11164b56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164b59 push edx */
  push32((uint32_t)(EDX));
  /* 11164b5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164b5d push eax */
  push32((uint32_t)(EAX));
  /* 11164b5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164b61 push ecx */
  push32((uint32_t)(ECX));
  /* 11164b62 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164b65 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11164b6b push eax */
  push32((uint32_t)(EAX));
  /* 11164b6c call 0x11165200 */
  push32(0x11164b71u); f_11165200();
  /* 11164b71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164b74 jmp 0x11164be9 */
  goto L_11164be9;
L_11164b76:;
  /* 11164b76 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164b79 push ecx */
  push32((uint32_t)(ECX));
  /* 11164b7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164b7d push edx */
  push32((uint32_t)(EDX));
  /* 11164b7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164b81 push eax */
  push32((uint32_t)(EAX));
  /* 11164b82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164b85 push ecx */
  push32((uint32_t)(ECX));
  /* 11164b86 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164b89 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11164b8f push eax */
  push32((uint32_t)(EAX));
  /* 11164b90 call 0x11165200 */
  push32(0x11164b95u); f_11165200();
  /* 11164b95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164b98 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164b9b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164b9e jne 0x11164ba5 */
  if (!C.zf) goto L_11164ba5;
  /* 11164ba0 jmp 0x11164f98 */
  goto L_11164f98;
L_11164ba5:;
  /* 11164ba5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164ba8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11164baa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11164bad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164bb0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11164bb2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164bb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164bb8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11164bba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164bbd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11164bbf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11164bc2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164bc5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11164bc7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164bca push ecx */
  push32((uint32_t)(ECX));
  /* 11164bcb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164bce push edx */
  push32((uint32_t)(EDX));
  /* 11164bcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164bd2 push eax */
  push32((uint32_t)(EAX));
  /* 11164bd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164bd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11164bd7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164bda mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11164be0 push eax */
  push32((uint32_t)(EAX));
  /* 11164be1 call 0x11165200 */
  push32(0x11164be6u); f_11165200();
  /* 11164be6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11164be9:;
  /* 11164be9 jmp 0x11164f98 */
  goto L_11164f98;
L_11164bee:;
  /* 11164bee mov ecx, dword ptr [0x11183b58] */
  ECX = (r32((uint32_t)(0x11183b58)));
  /* 11164bf4 mov dword ptr [0x11183b68], ecx */
  w32((uint32_t)(0x11183b68), (ECX));
  /* 11164bfa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164bfd push edx */
  push32((uint32_t)(EDX));
  /* 11164bfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164c01 push eax */
  push32((uint32_t)(EAX));
  /* 11164c02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11164c04 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164c07 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11164c0a push edx */
  push32((uint32_t)(EDX));
  /* 11164c0b call 0x111650a0 */
  push32(0x11164c10u); f_111650a0();
  /* 11164c10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164c13 jmp 0x11164f98 */
  goto L_11164f98;
L_11164c18:;
  /* 11164c18 mov eax, dword ptr [0x11183b58] */
  EAX = (r32((uint32_t)(0x11183b58)));
  /* 11164c1d mov dword ptr [0x11183b68], eax */
  w32((uint32_t)(0x11183b68), (EAX));
  /* 11164c22 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164c25 push ecx */
  push32((uint32_t)(ECX));
  /* 11164c26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164c29 push edx */
  push32((uint32_t)(EDX));
  /* 11164c2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11164c2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164c2f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11164c32 push ecx */
  push32((uint32_t)(ECX));
  /* 11164c33 call 0x111650a0 */
  push32(0x11164c38u); f_111650a0();
  /* 11164c38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164c3b jmp 0x11164f98 */
  goto L_11164f98;
L_11164c40:;
  /* 11164c40 mov edx, dword ptr [0x11183b58] */
  EDX = (r32((uint32_t)(0x11183b58)));
  /* 11164c46 mov dword ptr [0x11183b68], edx */
  w32((uint32_t)(0x11183b68), (EDX));
  /* 11164c4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164c4f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11164c52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11164c53 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11164c58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11164c5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11164c5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164c61 jne 0x11164c6a */
  if (!C.zf) goto L_11164c6a;
  /* 11164c63 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11164c6a:;
  /* 11164c6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164c6d push edx */
  push32((uint32_t)(EDX));
  /* 11164c6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164c71 push eax */
  push32((uint32_t)(EAX));
  /* 11164c72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11164c74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164c77 push ecx */
  push32((uint32_t)(ECX));
  /* 11164c78 call 0x111650a0 */
  push32(0x11164c7du); f_111650a0();
  /* 11164c7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164c80 jmp 0x11164f98 */
  goto L_11164f98;
L_11164c85:;
  /* 11164c85 mov edx, dword ptr [0x11183b58] */
  EDX = (r32((uint32_t)(0x11183b58)));
  /* 11164c8b mov dword ptr [0x11183b68], edx */
  w32((uint32_t)(0x11183b68), (EDX));
  /* 11164c91 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164c94 push eax */
  push32((uint32_t)(EAX));
  /* 11164c95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164c98 push ecx */
  push32((uint32_t)(ECX));
  /* 11164c99 push 3 */
  push32((uint32_t)(0x3u));
  /* 11164c9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164c9e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11164ca1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164ca4 push eax */
  push32((uint32_t)(EAX));
  /* 11164ca5 call 0x111650a0 */
  push32(0x11164caau); f_111650a0();
  /* 11164caa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164cad jmp 0x11164f98 */
  goto L_11164f98;
L_11164cb2:;
  /* 11164cb2 mov ecx, dword ptr [0x11183b58] */
  ECX = (r32((uint32_t)(0x11183b58)));
  /* 11164cb8 mov dword ptr [0x11183b68], ecx */
  w32((uint32_t)(0x11183b68), (ECX));
  /* 11164cbe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164cc1 push edx */
  push32((uint32_t)(EDX));
  /* 11164cc2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164cc5 push eax */
  push32((uint32_t)(EAX));
  /* 11164cc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11164cc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164ccb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11164cce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164cd1 push edx */
  push32((uint32_t)(EDX));
  /* 11164cd2 call 0x111650a0 */
  push32(0x11164cd7u); f_111650a0();
  /* 11164cd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164cda jmp 0x11164f98 */
  goto L_11164f98;
L_11164cdf:;
  /* 11164cdf mov eax, dword ptr [0x11183b58] */
  EAX = (r32((uint32_t)(0x11183b58)));
  /* 11164ce4 mov dword ptr [0x11183b68], eax */
  w32((uint32_t)(0x11183b68), (EAX));
  /* 11164ce9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164cec push ecx */
  push32((uint32_t)(ECX));
  /* 11164ced mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164cf0 push edx */
  push32((uint32_t)(EDX));
  /* 11164cf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11164cf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164cf6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11164cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11164cfa call 0x111650a0 */
  push32(0x11164cffu); f_111650a0();
  /* 11164cff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164d02 jmp 0x11164f98 */
  goto L_11164f98;
L_11164d07:;
  /* 11164d07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164d0a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164d0e jg 0x11164d2c */
  if ((!C.zf&&C.sf==C.of)) goto L_11164d2c;
  /* 11164d10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164d13 push eax */
  push32((uint32_t)(EAX));
  /* 11164d14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164d17 push ecx */
  push32((uint32_t)(ECX));
  /* 11164d18 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164d1b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11164d21 push eax */
  push32((uint32_t)(EAX));
  /* 11164d22 call 0x11165050 */
  push32(0x11164d27u); f_11165050();
  /* 11164d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164d2a jmp 0x11164d46 */
  goto L_11164d46;
L_11164d2c:;
  /* 11164d2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164d2f push ecx */
  push32((uint32_t)(ECX));
  /* 11164d30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164d33 push edx */
  push32((uint32_t)(EDX));
  /* 11164d34 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164d37 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11164d3d push ecx */
  push32((uint32_t)(ECX));
  /* 11164d3e call 0x11165050 */
  push32(0x11164d43u); f_11165050();
  /* 11164d43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11164d46:;
  /* 11164d46 jmp 0x11164f98 */
  goto L_11164f98;
L_11164d4b:;
  /* 11164d4b mov edx, dword ptr [0x11183b58] */
  EDX = (r32((uint32_t)(0x11183b58)));
  /* 11164d51 mov dword ptr [0x11183b68], edx */
  w32((uint32_t)(0x11183b68), (EDX));
  /* 11164d57 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164d5a push eax */
  push32((uint32_t)(EAX));
  /* 11164d5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164d5e push ecx */
  push32((uint32_t)(ECX));
  /* 11164d5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11164d61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164d64 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11164d66 push eax */
  push32((uint32_t)(EAX));
  /* 11164d67 call 0x111650a0 */
  push32(0x11164d6cu); f_111650a0();
  /* 11164d6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164d6f jmp 0x11164f98 */
  goto L_11164f98;
L_11164d74:;
  /* 11164d74 mov ecx, dword ptr [0x11183b58] */
  ECX = (r32((uint32_t)(0x11183b58)));
  /* 11164d7a mov dword ptr [0x11183b68], ecx */
  w32((uint32_t)(0x11183b68), (ECX));
  /* 11164d80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164d83 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11164d86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11164d89 jmp 0x11164ddd */
  goto L_11164ddd;
L_11164d8b:;
  /* 11164d8b mov ecx, dword ptr [0x11183b58] */
  ECX = (r32((uint32_t)(0x11183b58)));
  /* 11164d91 mov dword ptr [0x11183b68], ecx */
  w32((uint32_t)(0x11183b68), (ECX));
  /* 11164d97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164d9a push edx */
  push32((uint32_t)(EDX));
  /* 11164d9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164d9e push eax */
  push32((uint32_t)(EAX));
  /* 11164d9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11164da1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164da4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11164da7 push edx */
  push32((uint32_t)(EDX));
  /* 11164da8 call 0x111650a0 */
  push32(0x11164dadu); f_111650a0();
  /* 11164dad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164db0 jmp 0x11164f98 */
  goto L_11164f98;
L_11164db5:;
  /* 11164db5 mov eax, dword ptr [0x11183b58] */
  EAX = (r32((uint32_t)(0x11183b58)));
  /* 11164dba mov dword ptr [0x11183b68], eax */
  w32((uint32_t)(0x11183b68), (EAX));
  /* 11164dbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164dc2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164dc6 jne 0x11164dd1 */
  if (!C.zf) goto L_11164dd1;
  /* 11164dc8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11164dcf jmp 0x11164ddd */
  goto L_11164ddd;
L_11164dd1:;
  /* 11164dd1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164dd4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11164dd7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11164dda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11164ddd:;
  /* 11164ddd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164de0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11164de3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164de6 jge 0x11164df1 */
  if ((C.sf==C.of)) goto L_11164df1;
  /* 11164de8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11164def jmp 0x11164e1e */
  goto L_11164e1e;
L_11164df1:;
  /* 11164df1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164df4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11164df7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11164df8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11164dfd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11164dff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11164e02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164e05 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11164e08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11164e09 mov ecx, 7 */
  ECX = (0x7u);
  /* 11164e0e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11164e10 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164e13 jl 0x11164e1e */
  if ((C.sf!=C.of)) goto L_11164e1e;
  /* 11164e15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164e18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164e1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11164e1e:;
  /* 11164e1e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164e21 push eax */
  push32((uint32_t)(EAX));
  /* 11164e22 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164e25 push ecx */
  push32((uint32_t)(ECX));
  /* 11164e26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11164e28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164e2b push edx */
  push32((uint32_t)(EDX));
  /* 11164e2c call 0x111650a0 */
  push32(0x11164e31u); f_111650a0();
  /* 11164e31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164e34 jmp 0x11164f98 */
  goto L_11164f98;
L_11164e39:;
  /* 11164e39 cmp dword ptr [0x11183b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164e40 je 0x11164e70 */
  if (C.zf) goto L_11164e70;
  /* 11164e42 mov dword ptr [0x11183b58], 0 */
  w32((uint32_t)(0x11183b58), (0x0u));
  /* 11164e4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164e4f push eax */
  push32((uint32_t)(EAX));
  /* 11164e50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164e53 push ecx */
  push32((uint32_t)(ECX));
  /* 11164e54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164e57 push edx */
  push32((uint32_t)(EDX));
  /* 11164e58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164e5b push eax */
  push32((uint32_t)(EAX));
  /* 11164e5c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164e5f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11164e65 push edx */
  push32((uint32_t)(EDX));
  /* 11164e66 call 0x11165200 */
  push32(0x11164e6bu); f_11165200();
  /* 11164e6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164e6e jmp 0x11164e92 */
  goto L_11164e92;
L_11164e70:;
  /* 11164e70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164e73 push eax */
  push32((uint32_t)(EAX));
  /* 11164e74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164e77 push ecx */
  push32((uint32_t)(ECX));
  /* 11164e78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164e7b push edx */
  push32((uint32_t)(EDX));
  /* 11164e7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164e7f push eax */
  push32((uint32_t)(EAX));
  /* 11164e80 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164e83 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11164e89 push edx */
  push32((uint32_t)(EDX));
  /* 11164e8a call 0x11165200 */
  push32(0x11164e8fu); f_11165200();
  /* 11164e8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11164e92:;
  /* 11164e92 jmp 0x11164f98 */
  goto L_11164f98;
L_11164e97:;
  /* 11164e97 mov dword ptr [0x11183b58], 0 */
  w32((uint32_t)(0x11183b58), (0x0u));
  /* 11164ea1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164ea4 push eax */
  push32((uint32_t)(EAX));
  /* 11164ea5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 11164ea9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164eac push edx */
  push32((uint32_t)(EDX));
  /* 11164ead mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164eb0 push eax */
  push32((uint32_t)(EAX));
  /* 11164eb1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11164eb4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11164eba push edx */
  push32((uint32_t)(EDX));
  /* 11164ebb call 0x11165200 */
  push32(0x11164ec0u); f_11165200();
  /* 11164ec0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164ec3 jmp 0x11164f98 */
  goto L_11164f98;
L_11164ec8:;
  /* 11164ec8 mov eax, dword ptr [0x11183b58] */
  EAX = (r32((uint32_t)(0x11183b58)));
  /* 11164ecd mov dword ptr [0x11183b68], eax */
  w32((uint32_t)(0x11183b68), (EAX));
  /* 11164ed2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164ed5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11164ed8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11164ed9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11164ede idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11164ee0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11164ee3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164ee6 push edx */
  push32((uint32_t)(EDX));
  /* 11164ee7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164eea push eax */
  push32((uint32_t)(EAX));
  /* 11164eeb push 2 */
  push32((uint32_t)(0x2u));
  /* 11164eed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 11164ef1 call 0x111650a0 */
  push32(0x11164ef6u); f_111650a0();
  /* 11164ef6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164ef9 jmp 0x11164f98 */
  goto L_11164f98;
L_11164efe:;
  /* 11164efe mov edx, dword ptr [0x11183b58] */
  EDX = (r32((uint32_t)(0x11183b58)));
  /* 11164f04 mov dword ptr [0x11183b68], edx */
  w32((uint32_t)(0x11183b68), (EDX));
  /* 11164f0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164f0d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11164f10 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11164f11 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11164f16 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11164f18 mov ecx, eax */
  ECX = (EAX);
  /* 11164f1a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164f1d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11164f20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164f23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11164f26 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11164f27 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11164f2c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11164f2e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164f30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11164f33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164f36 push eax */
  push32((uint32_t)(EAX));
  /* 11164f37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164f3a push ecx */
  push32((uint32_t)(ECX));
  /* 11164f3b push 4 */
  push32((uint32_t)(0x4u));
  /* 11164f3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164f40 push edx */
  push32((uint32_t)(EDX));
  /* 11164f41 call 0x111650a0 */
  push32(0x11164f46u); f_111650a0();
  /* 11164f46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164f49 jmp 0x11164f98 */
  goto L_11164f98;
L_11164f4b:;
  /* 11164f4b call 0x11166060 */
  push32(0x11164f50u); f_11166060();
  /* 11164f50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164f53 push eax */
  push32((uint32_t)(EAX));
  /* 11164f54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164f57 push ecx */
  push32((uint32_t)(ECX));
  /* 11164f58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164f5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11164f5d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164f61 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11164f64 mov ecx, dword ptr [eax*4 + 0x11182e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11182e1c)));
  /* 11164f6b push ecx */
  push32((uint32_t)(ECX));
  /* 11164f6c call 0x11165050 */
  push32(0x11164f71u); f_11165050();
  /* 11164f71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164f74 jmp 0x11164f98 */
  goto L_11164f98;
L_11164f76:;
  /* 11164f76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164f79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11164f7b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11164f7e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164f81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11164f83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164f86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11164f89 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11164f8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164f8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11164f90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11164f93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164f96 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11164f98:;
  /* 11164f98 pop esi */
  ESI = (pop32());
  /* 11164f99 mov esp, ebp */
  ESP = (EBP);
  /* 11164f9b pop ebp */
  EBP = (pop32());
  /* 11164f9c ret  */
  ESPCHK(0x11164a30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11165050 (72 bytes, 30 insns) */
void f_11165050(void) {
  FTRACE(0x11165050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11165050 push ebp */
  push32((uint32_t)(EBP));
  /* 11165051 mov ebp, esp */
  EBP = (ESP);
L_11165053:;
  /* 11165053 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165056 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165059 je 0x11165096 */
  if (C.zf) goto L_11165096;
  /* 1116505b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116505e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11165061 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11165063 je 0x11165096 */
  if (C.zf) goto L_11165096;
  /* 11165065 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11165068 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1116506a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116506d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1116506f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11165071 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11165074 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11165076 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165079 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116507c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1116507e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165081 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165084 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11165087 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116508a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1116508c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116508f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165092 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11165094 jmp 0x11165053 */
  goto L_11165053;
L_11165096:;
  /* 11165096 pop ebp */
  EBP = (pop32());
  /* 11165097 ret  */
  ESPCHK(0x11165050u, _esp0);
  ESP += 4; return;
}

/* FUN_100150a0 @ 0x111650a0 (173 bytes, 64 insns) */
void f_111650a0(void) {
  FTRACE(0x111650a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111650a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111650a1 mov ebp, esp */
  EBP = (ESP);
  /* 111650a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111650a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111650ab cmp dword ptr [0x11183b68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111650b2 je 0x111650ca */
  if (C.zf) goto L_111650ca;
  /* 111650b4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111650b7 push eax */
  push32((uint32_t)(EAX));
  /* 111650b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111650bb push ecx */
  push32((uint32_t)(ECX));
  /* 111650bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111650bf push edx */
  push32((uint32_t)(EDX));
  /* 111650c0 call 0x11165150 */
  push32(0x111650c5u); f_11165150();
  /* 111650c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111650c8 jmp 0x11165149 */
  goto L_11165149;
L_111650ca:;
  /* 111650ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111650cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111650d0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111650d2 jae 0x11165140 */
  if (!C.cf) goto L_11165140;
  /* 111650d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111650d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111650da mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 111650dd jmp 0x111650e8 */
  goto L_111650e8;
L_111650df:;
  /* 111650df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111650e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111650e5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_111650e8:;
  /* 111650e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111650eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111650ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111650f0 je 0x11165124 */
  if (C.zf) goto L_11165124;
  /* 111650f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111650f5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111650f6 mov ecx, 0xa */
  ECX = (0xau);
  /* 111650fb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111650fd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165100 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165103 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11165105 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11165108 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1116510b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116510e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1116510f mov ecx, 0xa */
  ECX = (0xau);
  /* 11165114 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11165116 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11165119 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116511c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116511f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11165122 jmp 0x111650df */
  goto L_111650df;
L_11165124:;
  /* 11165124 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165127 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11165129 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116512c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116512f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11165131 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165134 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11165136 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11165139 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1116513c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1116513e jmp 0x11165149 */
  goto L_11165149;
L_11165140:;
  /* 11165140 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165143 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11165149:;
  /* 11165149 mov esp, ebp */
  ESP = (EBP);
  /* 1116514b pop ebp */
  EBP = (pop32());
  /* 1116514c ret  */
  ESPCHK(0x111650a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11165150 (172 bytes, 65 insns) */
void f_11165150(void) {
  FTRACE(0x11165150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11165150 push ebp */
  push32((uint32_t)(EBP));
  /* 11165151 mov ebp, esp */
  EBP = (ESP);
  /* 11165153 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11165156 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11165159 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1116515b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1116515e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165161 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165164 jbe 0x111651ab */
  if ((C.cf||C.zf)) goto L_111651ab;
L_11165166:;
  /* 11165166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165169 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1116516a mov ecx, 0xa */
  ECX = (0xau);
  /* 1116516f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11165171 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165174 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165177 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11165179 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116517c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116517f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11165182 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165185 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11165187 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116518a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116518d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1116518f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165192 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11165193 mov ecx, 0xa */
  ECX = (0xau);
  /* 11165198 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1116519a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1116519d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111651a1 jle 0x111651ab */
  if ((C.zf||C.sf!=C.of)) goto L_111651ab;
  /* 111651a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111651a6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111651a9 ja 0x11165166 */
  if ((!C.cf&&!C.zf)) goto L_11165166;
L_111651ab:;
  /* 111651ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111651ae mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111651b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111651b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111651b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111651b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111651bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111651be sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111651c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111651c4:;
  /* 111651c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111651c7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111651c9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 111651cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111651cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111651d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111651d4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111651d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111651d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111651dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111651df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111651e2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 111651e5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 111651e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111651ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111651ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111651f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111651f3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111651f6 jb 0x111651c4 */
  if (C.cf) goto L_111651c4;
  /* 111651f8 mov esp, ebp */
  ESP = (EBP);
  /* 111651fa pop ebp */
  EBP = (pop32());
  /* 111651fb ret  */
  ESPCHK(0x11165150u, _esp0);
  ESP += 4; return;
}

/* FUN_10015200 @ 0x11165200 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11165200(void) {
  FTRACE(0x11165200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11165200 push ebp */
  push32((uint32_t)(EBP));
  /* 11165201 mov ebp, esp */
  EBP = (ESP);
  /* 11165203 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11165206:;
  /* 11165206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165209 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116520c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1116520e je 0x1116567c */
  if (C.zf) goto L_1116567c;
  /* 11165214 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165217 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116521a je 0x1116567c */
  if (C.zf) goto L_1116567c;
  /* 11165220 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11165224 mov dword ptr [0x11183b68], 0 */
  w32((uint32_t)(0x11183b68), (0x0u));
  /* 1116522e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11165235 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165238 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1116523b jmp 0x11165246 */
  goto L_11165246;
L_1116523d:;
  /* 1116523d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11165240 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165243 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11165246:;
  /* 11165246 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165249 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1116524c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116524f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11165252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165255 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165258 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1116525b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116525d jne 0x11165261 */
  if (!C.zf) goto L_11165261;
  /* 1116525f jmp 0x1116523d */
  goto L_1116523d;
L_11165261:;
  /* 11165261 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165264 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11165267 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1116526a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116526d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11165270 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11165273 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11165276 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11165279 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1116527c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165280 ja 0x111655d0 */
  if ((!C.cf&&!C.zf)) goto L_111655d0;
  /* 11165286 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11165289 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116528b mov al, byte ptr [ecx + 0x111656ac] */
  AL = (r8((uint32_t)(ECX + 0x111656ac)));
  /* 11165291 jmp dword ptr [eax*4 + 0x11165680] */
  switch (EAX) {
    case 0: goto L_111654ef;
    case 1: goto L_111653d3;
    case 2: goto L_1116535e;
    case 3: goto L_11165298;
    case 4: goto L_111652d6;
    case 5: goto L_11165337;
    case 6: goto L_11165385;
    case 7: goto L_111653ac;
    case 8: goto L_1116541a;
    case 9: goto L_11165314;
    case 10: goto L_111655d0;
    default: x86_unimpl("switch@0x11165291 out of table"); return;
  }
L_11165298:;
  /* 11165298 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116529b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1116529e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111652a1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111652a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111652a7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111652ab ja 0x111652d1 */
  if ((!C.cf&&!C.zf)) goto L_111652d1;
  /* 111652ad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111652b0 jmp dword ptr [ecx*4 + 0x111656ff] */
  switch (ECX) {
    case 0: goto L_111652b7;
    case 1: goto L_111652c1;
    case 2: goto L_111652c7;
    case 3: goto L_111652cd;
    case 4: goto L_111652f5;
    case 5: goto L_111652ff;
    case 6: goto L_11165305;
    case 7: goto L_1116530b;
    default: x86_unimpl("switch@0x111652b0 out of table"); return;
  }
L_111652b7:;
  /* 111652b7 mov dword ptr [0x11183b68], 1 */
  w32((uint32_t)(0x11183b68), (0x1u));
L_111652c1:;
  /* 111652c1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 111652c5 jmp 0x111652d1 */
  goto L_111652d1;
L_111652c7:;
  /* 111652c7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 111652cb jmp 0x111652d1 */
  goto L_111652d1;
L_111652cd:;
  /* 111652cd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_111652d1:;
  /* 111652d1 jmp 0x111655d0 */
  goto L_111655d0;
L_111652d6:;
  /* 111652d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111652d9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111652dc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111652df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111652e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111652e5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111652e9 ja 0x1116530f */
  if ((!C.cf&&!C.zf)) goto L_1116530f;
  /* 111652eb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111652ee jmp dword ptr [ecx*4 + 0x1116570f] */
  switch (ECX) {
    case 0: goto L_111652f5;
    case 1: goto L_111652ff;
    case 2: goto L_11165305;
    case 3: goto L_1116530b;
    default: x86_unimpl("switch@0x111652ee out of table"); return;
  }
L_111652f5:;
  /* 111652f5 mov dword ptr [0x11183b68], 1 */
  w32((uint32_t)(0x11183b68), (0x1u));
L_111652ff:;
  /* 111652ff mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11165303 jmp 0x1116530f */
  goto L_1116530f;
L_11165305:;
  /* 11165305 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11165309 jmp 0x1116530f */
  goto L_1116530f;
L_1116530b:;
  /* 1116530b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1116530f:;
  /* 1116530f jmp 0x111655d0 */
  goto L_111655d0;
L_11165314:;
  /* 11165314 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11165317 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1116531a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116531e je 0x11165328 */
  if (C.zf) goto L_11165328;
  /* 11165320 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165324 je 0x1116532e */
  if (C.zf) goto L_1116532e;
  /* 11165326 jmp 0x11165332 */
  goto L_11165332;
L_11165328:;
  /* 11165328 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1116532c jmp 0x11165332 */
  goto L_11165332;
L_1116532e:;
  /* 1116532e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11165332:;
  /* 11165332 jmp 0x111655d0 */
  goto L_111655d0;
L_11165337:;
  /* 11165337 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116533a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1116533d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165341 je 0x1116534b */
  if (C.zf) goto L_1116534b;
  /* 11165343 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165347 je 0x11165355 */
  if (C.zf) goto L_11165355;
  /* 11165349 jmp 0x11165359 */
  goto L_11165359;
L_1116534b:;
  /* 1116534b mov dword ptr [0x11183b68], 1 */
  w32((uint32_t)(0x11183b68), (0x1u));
L_11165355:;
  /* 11165355 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11165359:;
  /* 11165359 jmp 0x111655d0 */
  goto L_111655d0;
L_1116535e:;
  /* 1116535e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11165361 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11165364 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165368 je 0x11165372 */
  if (C.zf) goto L_11165372;
  /* 1116536a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116536e je 0x1116537c */
  if (C.zf) goto L_1116537c;
  /* 11165370 jmp 0x11165380 */
  goto L_11165380;
L_11165372:;
  /* 11165372 mov dword ptr [0x11183b68], 1 */
  w32((uint32_t)(0x11183b68), (0x1u));
L_1116537c:;
  /* 1116537c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11165380:;
  /* 11165380 jmp 0x111655d0 */
  goto L_111655d0;
L_11165385:;
  /* 11165385 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11165388 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1116538b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116538f je 0x11165399 */
  if (C.zf) goto L_11165399;
  /* 11165391 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165395 je 0x111653a3 */
  if (C.zf) goto L_111653a3;
  /* 11165397 jmp 0x111653a7 */
  goto L_111653a7;
L_11165399:;
  /* 11165399 mov dword ptr [0x11183b68], 1 */
  w32((uint32_t)(0x11183b68), (0x1u));
L_111653a3:;
  /* 111653a3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_111653a7:;
  /* 111653a7 jmp 0x111655d0 */
  goto L_111655d0;
L_111653ac:;
  /* 111653ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111653af mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 111653b2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111653b6 je 0x111653c0 */
  if (C.zf) goto L_111653c0;
  /* 111653b8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111653bc je 0x111653ca */
  if (C.zf) goto L_111653ca;
  /* 111653be jmp 0x111653ce */
  goto L_111653ce;
L_111653c0:;
  /* 111653c0 mov dword ptr [0x11183b68], 1 */
  w32((uint32_t)(0x11183b68), (0x1u));
L_111653ca:;
  /* 111653ca mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_111653ce:;
  /* 111653ce jmp 0x111655d0 */
  goto L_111655d0;
L_111653d3:;
  /* 111653d3 push 0x1117fce4 */
  push32((uint32_t)(0x1117fce4u));
  /* 111653d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111653db push ecx */
  push32((uint32_t)(ECX));
  /* 111653dc call 0x11165c30 */
  push32(0x111653e1u); f_11165c30();
  /* 111653e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111653e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111653e6 jne 0x111653f3 */
  if (!C.zf) goto L_111653f3;
  /* 111653e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111653eb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111653ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111653f1 jmp 0x11165411 */
  goto L_11165411;
L_111653f3:;
  /* 111653f3 push 0x1117fce0 */
  push32((uint32_t)(0x1117fce0u));
  /* 111653f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111653fb push eax */
  push32((uint32_t)(EAX));
  /* 111653fc call 0x11165c30 */
  push32(0x11165401u); f_11165c30();
  /* 11165401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11165406 jne 0x11165411 */
  if (!C.zf) goto L_11165411;
  /* 11165408 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116540b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116540e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11165411:;
  /* 11165411 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11165415 jmp 0x111655d0 */
  goto L_111655d0;
L_1116541a:;
  /* 1116541a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116541d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165421 jg 0x11165431 */
  if ((!C.zf&&C.sf==C.of)) goto L_11165431;
  /* 11165423 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11165426 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1116542c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1116542f jmp 0x1116543d */
  goto L_1116543d;
L_11165431:;
  /* 11165431 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11165434 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1116543a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1116543d:;
  /* 1116543d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165441 jle 0x111654e4 */
  if ((C.zf||C.sf!=C.of)) goto L_111654e4;
  /* 11165447 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1116544a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116544d jbe 0x111654e4 */
  if ((C.cf||C.zf)) goto L_111654e4;
  /* 11165453 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11165456 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165458 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1116545a mov ecx, dword ptr [0x11181c98] */
  ECX = (r32((uint32_t)(0x11181c98)));
  /* 11165460 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11165462 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11165466 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1116546c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1116546e je 0x111654a7 */
  if (C.zf) goto L_111654a7;
  /* 11165470 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165473 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165476 jbe 0x111654a7 */
  if ((C.cf||C.zf)) goto L_111654a7;
  /* 11165478 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116547b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1116547d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11165480 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11165482 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11165484 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165487 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11165489 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116548c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116548f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11165491 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11165494 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165497 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1116549a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1116549d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1116549f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111654a2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111654a5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111654a7:;
  /* 111654a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111654aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111654ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111654af mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111654b1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111654b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111654b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111654b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111654bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111654be mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111654c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111654c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111654c6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111654c9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111654cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111654ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111654d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111654d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111654d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111654d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111654dc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111654df jmp 0x1116543d */
  goto L_1116543d;
L_111654e4:;
  /* 111654e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111654e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111654ea jmp 0x11165206 */
  goto L_11165206;
L_111654ef:;
  /* 111654ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111654f2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111654f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111654f7 je 0x111655c2 */
  if (C.zf) goto L_111655c2;
  /* 111654fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165500 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165503 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11165506:;
  /* 11165506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165509 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116550c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1116550e je 0x111655c0 */
  if (C.zf) goto L_111655c0;
  /* 11165514 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165517 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116551a je 0x111655c0 */
  if (C.zf) goto L_111655c0;
  /* 11165520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165523 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11165526 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165529 jne 0x11165539 */
  if (!C.zf) goto L_11165539;
  /* 1116552b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116552e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165531 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11165534 jmp 0x111655c0 */
  goto L_111655c0;
L_11165539:;
  /* 11165539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116553c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1116553e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11165540 mov edx, dword ptr [0x11181c98] */
  EDX = (r32((uint32_t)(0x11181c98)));
  /* 11165546 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165548 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1116554c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11165551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11165553 je 0x1116558c */
  if (C.zf) goto L_1116558c;
  /* 11165555 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165558 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116555b jbe 0x1116558c */
  if ((C.cf||C.zf)) goto L_1116558c;
  /* 1116555d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165560 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11165562 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165565 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11165567 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11165569 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116556c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1116556e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165571 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165574 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11165576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165579 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116557c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1116557f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165582 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11165584 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11165587 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1116558a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1116558c:;
  /* 1116558c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116558f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11165591 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165594 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11165596 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11165598 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116559b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1116559d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111655a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111655a3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111655a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111655a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111655ab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111655ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111655b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111655b3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111655b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111655b9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111655bb jmp 0x11165506 */
  goto L_11165506;
L_111655c0:;
  /* 111655c0 jmp 0x111655cb */
  goto L_111655cb;
L_111655c2:;
  /* 111655c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111655c5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111655c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_111655cb:;
  /* 111655cb jmp 0x11165206 */
  goto L_11165206;
L_111655d0:;
  /* 111655d0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111655d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111655d6 je 0x111655fc */
  if (C.zf) goto L_111655fc;
  /* 111655d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111655db push edx */
  push32((uint32_t)(EDX));
  /* 111655dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111655df push eax */
  push32((uint32_t)(EAX));
  /* 111655e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111655e3 push ecx */
  push32((uint32_t)(ECX));
  /* 111655e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111655e7 push edx */
  push32((uint32_t)(EDX));
  /* 111655e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 111655eb push eax */
  push32((uint32_t)(EAX));
  /* 111655ec call 0x11164a30 */
  push32(0x111655f1u); f_11164a30();
  /* 111655f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111655f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111655f7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111655fa jmp 0x11165677 */
  goto L_11165677;
L_111655fc:;
  /* 111655fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111655ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165601 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11165603 mov ecx, dword ptr [0x11181c98] */
  ECX = (r32((uint32_t)(0x11181c98)));
  /* 11165609 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1116560b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1116560f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11165615 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11165617 je 0x11165648 */
  if (C.zf) goto L_11165648;
  /* 11165619 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116561c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1116561e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165621 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11165623 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11165625 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165628 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1116562a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116562d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165630 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11165632 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165635 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165638 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1116563b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1116563e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11165640 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11165643 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165646 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11165648:;
  /* 11165648 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116564b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1116564d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165650 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11165652 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11165654 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165657 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11165659 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116565c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116565f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11165661 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165664 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165667 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1116566a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1116566d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1116566f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11165672 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165675 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11165677:;
  /* 11165677 jmp 0x11165206 */
  goto L_11165206;
L_1116567c:;
  /* 1116567c mov esp, ebp */
  ESP = (EBP);
  /* 1116567e pop ebp */
  EBP = (pop32());
  /* 1116567f ret  */
  ESPCHK(0x11165200u, _esp0);
  ESP += 4; return;
}

/* FUN_10015720 @ 0x11165720 (650 bytes, 178 insns) */
void f_11165720(void) {
  FTRACE(0x11165720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11165720 push ebp */
  push32((uint32_t)(EBP));
  /* 11165721 mov ebp, esp */
  EBP = (ESP);
  /* 11165723 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11165729 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116572d jne 0x11165889 */
  if (!C.zf) goto L_11165889;
  /* 11165733 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165736 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1116573c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11165742 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11165745 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1116574c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11165756 push 0 */
  push32((uint32_t)(0x0u));
  /* 11165758 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1116575e push edx */
  push32((uint32_t)(EDX));
  /* 1116575f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11165762 push eax */
  push32((uint32_t)(EAX));
  /* 11165763 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165766 push ecx */
  push32((uint32_t)(ECX));
  /* 11165767 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116576a push edx */
  push32((uint32_t)(EDX));
  /* 1116576b call 0x11166b40 */
  push32(0x11165770u); f_11166b40();
  /* 11165770 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165773 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11165776 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116577a jne 0x1116580f */
  if (!C.zf) goto L_1116580f;
  /* 11165780 call dword ptr [0x11186400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186400))), 0x11165786u);
  /* 11165786 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165789 je 0x11165790 */
  if (C.zf) goto L_11165790;
  /* 1116578b jmp 0x1116586d */
  goto L_1116586d;
L_11165790:;
  /* 11165790 push 0 */
  push32((uint32_t)(0x0u));
  /* 11165792 push 0 */
  push32((uint32_t)(0x0u));
  /* 11165794 push 0 */
  push32((uint32_t)(0x0u));
  /* 11165796 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165799 push eax */
  push32((uint32_t)(EAX));
  /* 1116579a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116579d push ecx */
  push32((uint32_t)(ECX));
  /* 1116579e call 0x11166b40 */
  push32(0x111657a3u); f_11166b40();
  /* 111657a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111657a6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 111657ac cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111657b3 jne 0x111657ba */
  if (!C.zf) goto L_111657ba;
  /* 111657b5 jmp 0x1116586d */
  goto L_1116586d;
L_111657ba:;
  /* 111657ba push 0x58 */
  push32((uint32_t)(0x58u));
  /* 111657bc push 0x1117fcec */
  push32((uint32_t)(0x1117fcecu));
  /* 111657c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111657c3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 111657c9 push edx */
  push32((uint32_t)(EDX));
  /* 111657ca call 0x11157560 */
  push32(0x111657cfu); f_11157560();
  /* 111657cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111657d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111657d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111657d9 jne 0x111657e0 */
  if (!C.zf) goto L_111657e0;
  /* 111657db jmp 0x1116586d */
  goto L_1116586d;
L_111657e0:;
  /* 111657e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111657e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111657e9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 111657ef push eax */
  push32((uint32_t)(EAX));
  /* 111657f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111657f3 push ecx */
  push32((uint32_t)(ECX));
  /* 111657f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111657f7 push edx */
  push32((uint32_t)(EDX));
  /* 111657f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111657fb push eax */
  push32((uint32_t)(EAX));
  /* 111657fc call 0x11166b40 */
  push32(0x11165801u); f_11166b40();
  /* 11165801 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165804 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11165807 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116580b jne 0x1116580f */
  if (!C.zf) goto L_1116580f;
  /* 1116580d jmp 0x1116586d */
  goto L_1116586d;
L_1116580f:;
  /* 1116580f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11165811 push 0x1117fcec */
  push32((uint32_t)(0x1117fcecu));
  /* 11165816 push 2 */
  push32((uint32_t)(0x2u));
  /* 11165818 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116581b push ecx */
  push32((uint32_t)(ECX));
  /* 1116581c call 0x11157560 */
  push32(0x11165821u); f_11157560();
  /* 11165821 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165824 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1116582a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1116582c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11165832 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165835 jne 0x11165839 */
  if (!C.zf) goto L_11165839;
  /* 11165837 jmp 0x1116586d */
  goto L_1116586d;
L_11165839:;
  /* 11165839 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116583c push ecx */
  push32((uint32_t)(ECX));
  /* 1116583d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11165840 push edx */
  push32((uint32_t)(EDX));
  /* 11165841 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11165847 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11165849 push ecx */
  push32((uint32_t)(ECX));
  /* 1116584a call 0x1115ad80 */
  push32(0x1116584fu); f_1115ad80();
  /* 1116584f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165852 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165856 je 0x11165866 */
  if (C.zf) goto L_11165866;
  /* 11165858 push 2 */
  push32((uint32_t)(0x2u));
  /* 1116585a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116585d push edx */
  push32((uint32_t)(EDX));
  /* 1116585e call 0x11157ff0 */
  push32(0x11165863u); f_11157ff0();
  /* 11165863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11165866:;
  /* 11165866 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165868 jmp 0x111659a6 */
  goto L_111659a6;
L_1116586d:;
  /* 1116586d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165871 je 0x11165881 */
  if (C.zf) goto L_11165881;
  /* 11165873 push 2 */
  push32((uint32_t)(0x2u));
  /* 11165875 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11165878 push eax */
  push32((uint32_t)(EAX));
  /* 11165879 call 0x11157ff0 */
  push32(0x1116587eu); f_11157ff0();
  /* 1116587e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11165881:;
  /* 11165881 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11165884 jmp 0x111659a6 */
  goto L_111659a6;
L_11165889:;
  /* 11165889 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116588d jne 0x111659a3 */
  if (!C.zf) goto L_111659a3;
  /* 11165893 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1116589d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111658a0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 111658a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111658a8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 111658ae push edx */
  push32((uint32_t)(EDX));
  /* 111658af push 0x11183a80 */
  push32((uint32_t)(0x11183a80u));
  /* 111658b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111658b7 push eax */
  push32((uint32_t)(EAX));
  /* 111658b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111658bb push ecx */
  push32((uint32_t)(ECX));
  /* 111658bc call 0x111669a0 */
  push32(0x111658c1u); f_111669a0();
  /* 111658c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111658c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111658c6 jne 0x111658d0 */
  if (!C.zf) goto L_111658d0;
  /* 111658c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111658cb jmp 0x111659a6 */
  goto L_111659a6;
L_111658d0:;
  /* 111658d0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 111658d6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111658d9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 111658e3 jmp 0x111658f4 */
  goto L_111658f4;
L_111658e5:;
  /* 111658e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111658eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111658ee mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_111658f4:;
  /* 111658f4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111658fb jge 0x1116599f */
  if ((C.sf==C.of)) goto L_1116599f;
  /* 11165901 cmp dword ptr [0x11181ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11181ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165908 jle 0x1116593b */
  if ((C.zf||C.sf!=C.of)) goto L_1116593b;
  /* 1116590a push 4 */
  push32((uint32_t)(0x4u));
  /* 1116590c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11165912 mov dl, byte ptr [ecx*2 + 0x11183a80] */
  DL = (r8((uint32_t)(ECX*2 + 0x11183a80)));
  /* 11165919 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1116591f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11165925 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1116592a push eax */
  push32((uint32_t)(EAX));
  /* 1116592b call 0x1115d570 */
  push32(0x11165930u); f_1115d570();
  /* 11165930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165933 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11165939 jmp 0x1116596e */
  goto L_1116596e;
L_1116593b:;
  /* 1116593b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11165941 mov dl, byte ptr [ecx*2 + 0x11183a80] */
  DL = (r8((uint32_t)(ECX*2 + 0x11183a80)));
  /* 11165948 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1116594e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11165954 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11165959 mov ecx, dword ptr [0x11181c98] */
  ECX = (r32((uint32_t)(0x11181c98)));
  /* 1116595f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11165961 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11165965 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11165968 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1116596e:;
  /* 1116596e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165975 je 0x11165998 */
  if (C.zf) goto L_11165998;
  /* 11165977 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1116597d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11165980 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11165983 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1116598a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1116598e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11165994 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11165996 jmp 0x1116599a */
  goto L_1116599a;
L_11165998:;
  /* 11165998 jmp 0x1116599f */
  goto L_1116599f;
L_1116599a:;
  /* 1116599a jmp 0x111658e5 */
  goto L_111658e5;
L_1116599f:;
  /* 1116599f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111659a1 jmp 0x111659a6 */
  goto L_111659a6;
L_111659a3:;
  /* 111659a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111659a6:;
  /* 111659a6 mov esp, ebp */
  ESP = (EBP);
  /* 111659a8 pop ebp */
  EBP = (pop32());
  /* 111659a9 ret  */
  ESPCHK(0x11165720u, _esp0);
  ESP += 4; return;
}

/* FUN_100159b0 @ 0x111659b0 (10 bytes, 5 insns) */
void f_111659b0(void) {
  FTRACE(0x111659b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111659b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111659b1 mov ebp, esp */
  EBP = (ESP);
  /* 111659b3 mov eax, dword ptr [0x11182d88] */
  EAX = (r32((uint32_t)(0x11182d88)));
  /* 111659b8 pop ebp */
  EBP = (pop32());
  /* 111659b9 ret  */
  ESPCHK(0x111659b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100159c0 @ 0x111659c0 (575 bytes, 196 insns) */
void f_111659c0(void) {
  FTRACE(0x111659c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111659c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111659c1 mov ebp, esp */
  EBP = (ESP);
  /* 111659c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111659c5 push 0x1117fcf8 */
  push32((uint32_t)(0x1117fcf8u));
  /* 111659ca push 0x11160668 */
  push32((uint32_t)(0x11160668u));
  /* 111659cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111659d5 push eax */
  push32((uint32_t)(EAX));
  /* 111659d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111659dd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111659e0 push ebx */
  push32((uint32_t)(EBX));
  /* 111659e1 push esi */
  push32((uint32_t)(ESI));
  /* 111659e2 push edi */
  push32((uint32_t)(EDI));
  /* 111659e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111659e6 cmp dword ptr [0x11183a8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111659ed jne 0x11165a3e */
  if (!C.zf) goto L_11165a3e;
  /* 111659ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 111659f2 push eax */
  push32((uint32_t)(EAX));
  /* 111659f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111659f5 push 0x1117f42c */
  push32((uint32_t)(0x1117f42cu));
  /* 111659fa push 1 */
  push32((uint32_t)(0x1u));
  /* 111659fc call dword ptr [0x11186338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186338))), 0x11165a02u);
  /* 11165a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11165a04 je 0x11165a12 */
  if (C.zf) goto L_11165a12;
  /* 11165a06 mov dword ptr [0x11183a8c], 1 */
  w32((uint32_t)(0x11183a8c), (0x1u));
  /* 11165a10 jmp 0x11165a3e */
  goto L_11165a3e;
L_11165a12:;
  /* 11165a12 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11165a15 push ecx */
  push32((uint32_t)(ECX));
  /* 11165a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11165a18 push 0x1117f428 */
  push32((uint32_t)(0x1117f428u));
  /* 11165a1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11165a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11165a21 call dword ptr [0x1118633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118633c))), 0x11165a27u);
  /* 11165a27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11165a29 je 0x11165a37 */
  if (C.zf) goto L_11165a37;
  /* 11165a2b mov dword ptr [0x11183a8c], 2 */
  w32((uint32_t)(0x11183a8c), (0x2u));
  /* 11165a35 jmp 0x11165a3e */
  goto L_11165a3e;
L_11165a37:;
  /* 11165a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165a39 jmp 0x11165c19 */
  goto L_11165c19;
L_11165a3e:;
  /* 11165a3e cmp dword ptr [0x11183a8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11183a8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165a45 jne 0x11165a62 */
  if (!C.zf) goto L_11165a62;
  /* 11165a47 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165a4a push edx */
  push32((uint32_t)(EDX));
  /* 11165a4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165a4e push eax */
  push32((uint32_t)(EAX));
  /* 11165a4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11165a52 push ecx */
  push32((uint32_t)(ECX));
  /* 11165a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165a56 push edx */
  push32((uint32_t)(EDX));
  /* 11165a57 call dword ptr [0x11186338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186338))), 0x11165a5du);
  /* 11165a5d jmp 0x11165c19 */
  goto L_11165c19;
L_11165a62:;
  /* 11165a62 cmp dword ptr [0x11183a8c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11183a8c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165a69 jne 0x11165c17 */
  if (!C.zf) goto L_11165c17;
  /* 11165a6f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165a73 jne 0x11165a7d */
  if (!C.zf) goto L_11165a7d;
  /* 11165a75 mov eax, dword ptr [0x11183a00] */
  EAX = (r32((uint32_t)(0x11183a00)));
  /* 11165a7a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11165a7d:;
  /* 11165a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11165a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11165a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11165a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11165a85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165a88 push ecx */
  push32((uint32_t)(ECX));
  /* 11165a89 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11165a8c push edx */
  push32((uint32_t)(EDX));
  /* 11165a8d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11165a92 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11165a95 push eax */
  push32((uint32_t)(EAX));
  /* 11165a96 call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x11165a9cu);
  /* 11165a9c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11165a9f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165aa3 jne 0x11165aac */
  if (!C.zf) goto L_11165aac;
  /* 11165aa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165aa7 jmp 0x11165c19 */
  goto L_11165c19;
L_11165aac:;
  /* 11165aac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11165ab3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11165ab6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165ab9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11165abb call 0x1115a700 */
  push32(0x11165ac0u); f_1115a700();
  /* 11165ac0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11165ac3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11165ac6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11165ac9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11165acc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11165acf push edx */
  push32((uint32_t)(EDX));
  /* 11165ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11165ad2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11165ad5 push eax */
  push32((uint32_t)(EAX));
  /* 11165ad6 call 0x1115b2d0 */
  push32(0x11165adbu); f_1115b2d0();
  /* 11165adb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165ade mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11165ae5 jmp 0x11165afe */
  goto L_11165afe;
  /* 11165ae7 mov eax, 1 */
  EAX = (0x1u);
  /* 11165aec ret  */
  ESPCHK(0x111659c0u, _esp0);
  ESP += 4; return;
  /* 11165aed mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11165af0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11165af7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11165afe:;
  /* 11165afe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165b02 jne 0x11165b0b */
  if (!C.zf) goto L_11165b0b;
  /* 11165b04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165b06 jmp 0x11165c19 */
  goto L_11165c19;
L_11165b0b:;
  /* 11165b0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11165b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11165b0f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11165b12 push ecx */
  push32((uint32_t)(ECX));
  /* 11165b13 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11165b16 push edx */
  push32((uint32_t)(EDX));
  /* 11165b17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165b1a push eax */
  push32((uint32_t)(EAX));
  /* 11165b1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11165b1e push ecx */
  push32((uint32_t)(ECX));
  /* 11165b1f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11165b24 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11165b27 push edx */
  push32((uint32_t)(EDX));
  /* 11165b28 call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x11165b2eu);
  /* 11165b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11165b30 jne 0x11165b39 */
  if (!C.zf) goto L_11165b39;
  /* 11165b32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165b34 jmp 0x11165c19 */
  goto L_11165c19;
L_11165b39:;
  /* 11165b39 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11165b40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11165b43 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11165b47 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165b4a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11165b4c call 0x1115a700 */
  push32(0x11165b51u); f_1115a700();
  /* 11165b51 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11165b54 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11165b57 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11165b5a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11165b5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11165b64 jmp 0x11165b7d */
  goto L_11165b7d;
  /* 11165b66 mov eax, 1 */
  EAX = (0x1u);
  /* 11165b6b ret  */
  ESPCHK(0x111659c0u, _esp0);
  ESP += 4; return;
  /* 11165b6c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11165b6f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11165b76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11165b7d:;
  /* 11165b7d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165b81 jne 0x11165b8a */
  if (!C.zf) goto L_11165b8a;
  /* 11165b83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165b85 jmp 0x11165c19 */
  goto L_11165c19;
L_11165b8a:;
  /* 11165b8a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165b8e jne 0x11165b99 */
  if (!C.zf) goto L_11165b99;
  /* 11165b90 mov edx, dword ptr [0x111839f0] */
  EDX = (r32((uint32_t)(0x111839f0)));
  /* 11165b96 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11165b99:;
  /* 11165b99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165b9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11165b9f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11165ba5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165ba8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11165bab mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11165bb2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11165bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11165bb6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11165bb9 push edx */
  push32((uint32_t)(EDX));
  /* 11165bba mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11165bbd push eax */
  push32((uint32_t)(EAX));
  /* 11165bbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165bc1 push ecx */
  push32((uint32_t)(ECX));
  /* 11165bc2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11165bc5 push edx */
  push32((uint32_t)(EDX));
  /* 11165bc6 call dword ptr [0x1118633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118633c))), 0x11165bccu);
  /* 11165bcc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11165bcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165bd2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11165bd5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11165bd7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11165bdc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165be2 je 0x11165bf8 */
  if (C.zf) goto L_11165bf8;
  /* 11165be4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165be7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11165bea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11165bec mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11165bf0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165bf6 je 0x11165bfc */
  if (C.zf) goto L_11165bfc;
L_11165bf8:;
  /* 11165bf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165bfa jmp 0x11165c19 */
  goto L_11165c19;
L_11165bfc:;
  /* 11165bfc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165bff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11165c01 push eax */
  push32((uint32_t)(EAX));
  /* 11165c02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11165c05 push ecx */
  push32((uint32_t)(ECX));
  /* 11165c06 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11165c09 push edx */
  push32((uint32_t)(EDX));
  /* 11165c0a call 0x1115f450 */
  push32(0x11165c0fu); f_1115f450();
  /* 11165c0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165c12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11165c15 jmp 0x11165c19 */
  goto L_11165c19;
L_11165c17:;
  /* 11165c17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11165c19:;
  /* 11165c19 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11165c1c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11165c1f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11165c26 pop edi */
  EDI = (pop32());
  /* 11165c27 pop esi */
  ESI = (pop32());
  /* 11165c28 pop ebx */
  EBX = (pop32());
  /* 11165c29 mov esp, ebp */
  ESP = (EBP);
  /* 11165c2b pop ebp */
  EBP = (pop32());
  /* 11165c2c ret  */
  ESPCHK(0x111659c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c30 @ 0x11165c30 (208 bytes, 85 insns) */
void f_11165c30(void) {
  FTRACE(0x11165c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11165c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11165c31 mov ebp, esp */
  EBP = (ESP);
  /* 11165c33 push edi */
  push32((uint32_t)(EDI));
  /* 11165c34 push esi */
  push32((uint32_t)(ESI));
  /* 11165c35 push ebx */
  push32((uint32_t)(EBX));
  /* 11165c36 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11165c39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11165c3c lea eax, [0x111839e8] */
  EAX = ((uint32_t)(0x111839e8));
  /* 11165c42 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165c46 jne 0x11165c83 */
  if (!C.zf) goto L_11165c83;
  /* 11165c48 mov al, 0xff */
  AL = (0xffu);
  /* 11165c4a mov edi, edi */
  EDI = (EDI);
L_11165c4c:;
  /* 11165c4c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11165c4e je 0x11165c7e */
  if (C.zf) goto L_11165c7e;
  /* 11165c50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11165c52 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11165c53 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11165c55 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11165c56 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165c58 je 0x11165c4c */
  if (C.zf) goto L_11165c4c;
  /* 11165c5a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11165c5c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165c5e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11165c60 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11165c63 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11165c65 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11165c67 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11165c69 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11165c6b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165c6d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11165c6f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11165c72 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11165c74 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11165c76 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165c78 je 0x11165c4c */
  if (C.zf) goto L_11165c4c;
  /* 11165c7a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11165c7c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11165c7e:;
  /* 11165c7e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11165c81 jmp 0x11165cfb */
  goto L_11165cfb;
L_11165c83:;
  /* 11165c83 lock inc dword ptr [0x11183b7c] */
  x86_unimpl("lock inc @ 0x11165c83");
  /* 11165c8a cmp dword ptr [0x11183b6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165c91 jg 0x11165c97 */
  if ((!C.zf&&C.sf==C.of)) goto L_11165c97;
  /* 11165c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11165c95 jmp 0x11165cac */
  goto L_11165cac;
L_11165c97:;
  /* 11165c97 lock dec dword ptr [0x11183b7c] */
  x86_unimpl("lock dec @ 0x11165c97");
  /* 11165c9e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11165ca0 call 0x1115af60 */
  push32(0x11165ca5u); f_1115af60();
  /* 11165ca5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11165cac:;
  /* 11165cac mov eax, 0xff */
  EAX = (0xffu);
  /* 11165cb1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11165cb3 nop  */
  /* nop */
L_11165cb4:;
  /* 11165cb4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11165cb6 je 0x11165cdf */
  if (C.zf) goto L_11165cdf;
  /* 11165cb8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11165cba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11165cbb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11165cbd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11165cbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165cc0 je 0x11165cb4 */
  if (C.zf) goto L_11165cb4;
  /* 11165cc2 push eax */
  push32((uint32_t)(EAX));
  /* 11165cc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11165cc4 call 0x11166da0 */
  push32(0x11165cc9u); f_11166da0();
  /* 11165cc9 mov ebx, eax */
  EBX = (EAX);
  /* 11165ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165cce call 0x11166da0 */
  push32(0x11165cd3u); f_11166da0();
  /* 11165cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165cd6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165cd8 je 0x11165cb4 */
  if (C.zf) goto L_11165cb4;
  /* 11165cda sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11165cdc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11165cdf:;
  /* 11165cdf mov ebx, eax */
  EBX = (EAX);
  /* 11165ce1 pop eax */
  EAX = (pop32());
  /* 11165ce2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165ce4 jne 0x11165cef */
  if (!C.zf) goto L_11165cef;
  /* 11165ce6 lock dec dword ptr [0x11183b7c] */
  x86_unimpl("lock dec @ 0x11165ce6");
  /* 11165ced jmp 0x11165cf9 */
  goto L_11165cf9;
L_11165cef:;
  /* 11165cef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11165cf1 call 0x1115b000 */
  push32(0x11165cf6u); f_1115b000();
  /* 11165cf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11165cf9:;
  /* 11165cf9 mov eax, ebx */
  EAX = (EBX);
L_11165cfb:;
  /* 11165cfb pop ebx */
  EBX = (pop32());
  /* 11165cfc pop esi */
  ESI = (pop32());
  /* 11165cfd pop edi */
  EDI = (pop32());
  /* 11165cfe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11165cff ret  */
  ESPCHK(0x11165c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d00 @ 0x11165d00 (257 bytes, 103 insns) */
void f_11165d00(void) {
  FTRACE(0x11165d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11165d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11165d01 mov ebp, esp */
  EBP = (ESP);
  /* 11165d03 push edi */
  push32((uint32_t)(EDI));
  /* 11165d04 push esi */
  push32((uint32_t)(ESI));
  /* 11165d05 push ebx */
  push32((uint32_t)(EBX));
  /* 11165d06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11165d09 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11165d0b je 0x11165dfa */
  if (C.zf) goto L_11165dfa;
  /* 11165d11 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11165d14 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11165d17 lea eax, [0x111839e8] */
  EAX = ((uint32_t)(0x111839e8));
  /* 11165d1d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165d21 jne 0x11165d71 */
  if (!C.zf) goto L_11165d71;
  /* 11165d23 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11165d25 mov bl, 0x5a */
  BL = (0x5au);
  /* 11165d27 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11165d29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11165d2c:;
  /* 11165d2c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11165d2e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11165d30 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11165d32 je 0x11165d55 */
  if (C.zf) goto L_11165d55;
  /* 11165d34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11165d36 je 0x11165d55 */
  if (C.zf) goto L_11165d55;
  /* 11165d38 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11165d39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11165d3a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165d3c jb 0x11165d44 */
  if (C.cf) goto L_11165d44;
  /* 11165d3e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165d40 ja 0x11165d44 */
  if ((!C.cf&&!C.zf)) goto L_11165d44;
  /* 11165d42 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11165d44:;
  /* 11165d44 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165d46 jb 0x11165d4e */
  if (C.cf) goto L_11165d4e;
  /* 11165d48 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165d4a ja 0x11165d4e */
  if ((!C.cf&&!C.zf)) goto L_11165d4e;
  /* 11165d4c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11165d4e:;
  /* 11165d4e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165d50 jne 0x11165d5f */
  if (!C.zf) goto L_11165d5f;
  /* 11165d52 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11165d53 jne 0x11165d2c */
  if (!C.zf) goto L_11165d2c;
L_11165d55:;
  /* 11165d55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11165d57 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11165d59 je 0x11165dfa */
  if (C.zf) goto L_11165dfa;
L_11165d5f:;
  /* 11165d5f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11165d64 jb 0x11165dfa */
  if (C.cf) goto L_11165dfa;
  /* 11165d6a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11165d6c jmp 0x11165dfa */
  goto L_11165dfa;
L_11165d71:;
  /* 11165d71 lock inc dword ptr [0x11183b7c] */
  x86_unimpl("lock inc @ 0x11165d71");
  /* 11165d78 cmp dword ptr [0x11183b6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165d7f jg 0x11165d85 */
  if ((!C.zf&&C.sf==C.of)) goto L_11165d85;
  /* 11165d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11165d83 jmp 0x11165d9e */
  goto L_11165d9e;
L_11165d85:;
  /* 11165d85 lock dec dword ptr [0x11183b7c] */
  x86_unimpl("lock dec @ 0x11165d85");
  /* 11165d8c mov ebx, ecx */
  EBX = (ECX);
  /* 11165d8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11165d90 call 0x1115af60 */
  push32(0x11165d95u); f_1115af60();
  /* 11165d95 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11165d9c mov ecx, ebx */
  ECX = (EBX);
L_11165d9e:;
  /* 11165d9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165da0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11165da2 mov edi, edi */
  EDI = (EDI);
L_11165da4:;
  /* 11165da4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11165da6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165da8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11165daa je 0x11165dcf */
  if (C.zf) goto L_11165dcf;
  /* 11165dac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11165dae je 0x11165dcf */
  if (C.zf) goto L_11165dcf;
  /* 11165db0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11165db1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11165db2 push ecx */
  push32((uint32_t)(ECX));
  /* 11165db3 push eax */
  push32((uint32_t)(EAX));
  /* 11165db4 push ebx */
  push32((uint32_t)(EBX));
  /* 11165db5 call 0x11166da0 */
  push32(0x11165dbau); f_11166da0();
  /* 11165dba mov ebx, eax */
  EBX = (EAX);
  /* 11165dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165dbf call 0x11166da0 */
  push32(0x11165dc4u); f_11166da0();
  /* 11165dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165dc7 pop ecx */
  ECX = (pop32());
  /* 11165dc8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165dca jne 0x11165dd5 */
  if (!C.zf) goto L_11165dd5;
  /* 11165dcc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11165dcd jne 0x11165da4 */
  if (!C.zf) goto L_11165da4;
L_11165dcf:;
  /* 11165dcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11165dd1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165dd3 je 0x11165dde */
  if (C.zf) goto L_11165dde;
L_11165dd5:;
  /* 11165dd5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11165dda jb 0x11165dde */
  if (C.cf) goto L_11165dde;
  /* 11165ddc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11165dde:;
  /* 11165dde pop eax */
  EAX = (pop32());
  /* 11165ddf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165de1 jne 0x11165dec */
  if (!C.zf) goto L_11165dec;
  /* 11165de3 lock dec dword ptr [0x11183b7c] */
  x86_unimpl("lock dec @ 0x11165de3");
  /* 11165dea jmp 0x11165dfa */
  goto L_11165dfa;
L_11165dec:;
  /* 11165dec mov ebx, ecx */
  EBX = (ECX);
  /* 11165dee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11165df0 call 0x1115b000 */
  push32(0x11165df5u); f_1115b000();
  /* 11165df5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165df8 mov ecx, ebx */
  ECX = (EBX);
L_11165dfa:;
  /* 11165dfa mov eax, ecx */
  EAX = (ECX);
  /* 11165dfc pop ebx */
  EBX = (pop32());
  /* 11165dfd pop esi */
  ESI = (pop32());
  /* 11165dfe pop edi */
  EDI = (pop32());
  /* 11165dff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11165e00 ret  */
  ESPCHK(0x11165d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e10 @ 0x11165e10 (255 bytes, 88 insns) */
void f_11165e10(void) {
  FTRACE(0x11165e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11165e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11165e11 mov ebp, esp */
  EBP = (ESP);
  /* 11165e13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11165e16:;
  /* 11165e16 cmp dword ptr [0x11181ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11181ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165e1d jle 0x11165e36 */
  if ((C.zf||C.sf!=C.of)) goto L_11165e36;
  /* 11165e1f push 8 */
  push32((uint32_t)(0x8u));
  /* 11165e21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165e24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11165e26 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11165e28 push ecx */
  push32((uint32_t)(ECX));
  /* 11165e29 call 0x1115d570 */
  push32(0x11165e2eu); f_1115d570();
  /* 11165e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165e31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11165e34 jmp 0x11165e4f */
  goto L_11165e4f;
L_11165e36:;
  /* 11165e36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165e39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165e3b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11165e3d mov ecx, dword ptr [0x11181c98] */
  ECX = (r32((uint32_t)(0x11181c98)));
  /* 11165e43 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11165e45 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11165e49 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11165e4c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11165e4f:;
  /* 11165e4f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165e53 je 0x11165e60 */
  if (C.zf) goto L_11165e60;
  /* 11165e55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165e58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165e5b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11165e5e jmp 0x11165e16 */
  goto L_11165e16;
L_11165e60:;
  /* 11165e60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165e63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11165e65 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11165e67 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11165e6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165e6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165e70 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11165e73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165e76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11165e79 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165e7d je 0x11165e85 */
  if (C.zf) goto L_11165e85;
  /* 11165e7f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165e83 jne 0x11165e98 */
  if (!C.zf) goto L_11165e98;
L_11165e85:;
  /* 11165e85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165e88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165e8a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11165e8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11165e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165e92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165e95 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11165e98:;
  /* 11165e98 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11165e9f:;
  /* 11165e9f cmp dword ptr [0x11181ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11181ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165ea6 jle 0x11165ebb */
  if ((C.zf||C.sf!=C.of)) goto L_11165ebb;
  /* 11165ea8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11165eaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165ead push edx */
  push32((uint32_t)(EDX));
  /* 11165eae call 0x1115d570 */
  push32(0x11165eb3u); f_1115d570();
  /* 11165eb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165eb6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11165eb9 jmp 0x11165ed0 */
  goto L_11165ed0;
L_11165ebb:;
  /* 11165ebb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165ebe mov ecx, dword ptr [0x11181c98] */
  ECX = (r32((uint32_t)(0x11181c98)));
  /* 11165ec4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11165ec6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11165eca and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11165ecd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11165ed0:;
  /* 11165ed0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165ed4 je 0x11165efb */
  if (C.zf) goto L_11165efb;
  /* 11165ed6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11165ed9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11165edc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165edf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11165ee3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11165ee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165ee9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11165eeb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11165eed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11165ef0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165ef3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165ef6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11165ef9 jmp 0x11165e9f */
  goto L_11165e9f;
L_11165efb:;
  /* 11165efb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165eff jne 0x11165f08 */
  if (!C.zf) goto L_11165f08;
  /* 11165f01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11165f04 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11165f06 jmp 0x11165f0b */
  goto L_11165f0b;
L_11165f08:;
  /* 11165f08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11165f0b:;
  /* 11165f0b mov esp, ebp */
  ESP = (EBP);
  /* 11165f0d pop ebp */
  EBP = (pop32());
  /* 11165f0e ret  */
  ESPCHK(0x11165e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f10 @ 0x11165f10 (17 bytes, 8 insns) */
void f_11165f10(void) {
  FTRACE(0x11165f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11165f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11165f11 mov ebp, esp */
  EBP = (ESP);
  /* 11165f13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165f16 push eax */
  push32((uint32_t)(EAX));
  /* 11165f17 call 0x11165e10 */
  push32(0x11165f1cu); f_11165e10();
  /* 11165f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165f1f pop ebp */
  EBP = (pop32());
  /* 11165f20 ret  */
  ESPCHK(0x11165f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f30 @ 0x11165f30 (297 bytes, 106 insns) */
void f_11165f30(void) {
  FTRACE(0x11165f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11165f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11165f31 mov ebp, esp */
  EBP = (ESP);
  /* 11165f33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11165f36 push esi */
  push32((uint32_t)(ESI));
L_11165f37:;
  /* 11165f37 cmp dword ptr [0x11181ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11181ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165f3e jle 0x11165f57 */
  if ((C.zf||C.sf!=C.of)) goto L_11165f57;
  /* 11165f40 push 8 */
  push32((uint32_t)(0x8u));
  /* 11165f42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165f45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11165f47 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11165f49 push ecx */
  push32((uint32_t)(ECX));
  /* 11165f4a call 0x1115d570 */
  push32(0x11165f4fu); f_1115d570();
  /* 11165f4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165f52 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11165f55 jmp 0x11165f70 */
  goto L_11165f70;
L_11165f57:;
  /* 11165f57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165f5c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11165f5e mov ecx, dword ptr [0x11181c98] */
  ECX = (r32((uint32_t)(0x11181c98)));
  /* 11165f64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11165f66 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11165f6a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11165f6d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11165f70:;
  /* 11165f70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165f74 je 0x11165f81 */
  if (C.zf) goto L_11165f81;
  /* 11165f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165f79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165f7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11165f7f jmp 0x11165f37 */
  goto L_11165f37;
L_11165f81:;
  /* 11165f81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165f84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11165f86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11165f88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11165f8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165f8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165f91 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11165f94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165f97 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11165f9a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165f9e je 0x11165fa6 */
  if (C.zf) goto L_11165fa6;
  /* 11165fa0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165fa4 jne 0x11165fb9 */
  if (!C.zf) goto L_11165fb9;
L_11165fa6:;
  /* 11165fa6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165fa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11165fab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11165fad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11165fb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11165fb3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11165fb6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11165fb9:;
  /* 11165fb9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11165fc0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11165fc7:;
  /* 11165fc7 cmp dword ptr [0x11181ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11181ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165fce jle 0x11165fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_11165fe3;
  /* 11165fd0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11165fd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165fd5 push edx */
  push32((uint32_t)(EDX));
  /* 11165fd6 call 0x1115d570 */
  push32(0x11165fdbu); f_1115d570();
  /* 11165fdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11165fde mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11165fe1 jmp 0x11165ff8 */
  goto L_11165ff8;
L_11165fe3:;
  /* 11165fe3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11165fe6 mov ecx, dword ptr [0x11181c98] */
  ECX = (r32((uint32_t)(0x11181c98)));
  /* 11165fec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11165fee mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11165ff2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11165ff5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11165ff8:;
  /* 11165ff8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11165ffc je 0x11166039 */
  if (C.zf) goto L_11166039;
  /* 11165ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 11166000 push 0xa */
  push32((uint32_t)(0xau));
  /* 11166002 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11166005 push eax */
  push32((uint32_t)(EAX));
  /* 11166006 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166009 push ecx */
  push32((uint32_t)(ECX));
  /* 1116600a call 0x11166ed0 */
  push32(0x1116600fu); f_11166ed0();
  /* 1116600f mov ecx, eax */
  ECX = (EAX);
  /* 11166011 mov esi, edx */
  ESI = (EDX);
  /* 11166013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11166016 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11166019 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1116601a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116601c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1116601e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11166021 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11166024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166029 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1116602b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1116602e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166031 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166034 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11166037 jmp 0x11165fc7 */
  goto L_11165fc7;
L_11166039:;
  /* 11166039 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116603d jne 0x1116604e */
  if (!C.zf) goto L_1116604e;
  /* 1116603f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166042 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11166044 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11166047 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116604a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1116604c jmp 0x11166054 */
  goto L_11166054;
L_1116604e:;
  /* 1116604e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166051 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11166054:;
  /* 11166054 pop esi */
  ESI = (pop32());
  /* 11166055 mov esp, ebp */
  ESP = (EBP);
  /* 11166057 pop ebp */
  EBP = (pop32());
  /* 11166058 ret  */
  ESPCHK(0x11165f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016060 @ 0x11166060 (61 bytes, 18 insns) */
void f_11166060(void) {
  FTRACE(0x11166060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11166060 push ebp */
  push32((uint32_t)(EBP));
  /* 11166061 mov ebp, esp */
  EBP = (ESP);
  /* 11166063 cmp dword ptr [0x11183b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116606a jne 0x1116609b */
  if (!C.zf) goto L_1116609b;
  /* 1116606c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1116606e call 0x1115af60 */
  push32(0x11166073u); f_1115af60();
  /* 11166073 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166076 cmp dword ptr [0x11183b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116607d jne 0x11166091 */
  if (!C.zf) goto L_11166091;
  /* 1116607f call 0x111660c0 */
  push32(0x11166084u); f_111660c0();
  /* 11166084 mov eax, dword ptr [0x11183b48] */
  EAX = (r32((uint32_t)(0x11183b48)));
  /* 11166089 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116608c mov dword ptr [0x11183b48], eax */
  w32((uint32_t)(0x11183b48), (EAX));
L_11166091:;
  /* 11166091 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11166093 call 0x1115b000 */
  push32(0x11166098u); f_1115b000();
  /* 11166098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1116609b:;
  /* 1116609b pop ebp */
  EBP = (pop32());
  /* 1116609c ret  */
  ESPCHK(0x11166060u, _esp0);
  ESP += 4; return;
}

/* FUN_100160a0 @ 0x111660a0 (30 bytes, 11 insns) */
void f_111660a0(void) {
  FTRACE(0x111660a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111660a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111660a1 mov ebp, esp */
  EBP = (ESP);
  /* 111660a3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111660a5 call 0x1115af60 */
  push32(0x111660aau); f_1115af60();
  /* 111660aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111660ad call 0x111660c0 */
  push32(0x111660b2u); f_111660c0();
  /* 111660b2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111660b4 call 0x1115b000 */
  push32(0x111660b9u); f_1115b000();
  /* 111660b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111660bc pop ebp */
  EBP = (pop32());
  /* 111660bd ret  */
  ESPCHK(0x111660a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100160c0 @ 0x111660c0 (939 bytes, 266 insns) */
void f_111660c0(void) {
  FTRACE(0x111660c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111660c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111660c1 mov ebp, esp */
  EBP = (ESP);
  /* 111660c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111660c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111660cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 111660cf call 0x1115af60 */
  push32(0x111660d4u); f_1115af60();
  /* 111660d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111660d7 mov dword ptr [0x11183a90], 0 */
  w32((uint32_t)(0x11183a90), (0x0u));
  /* 111660e1 mov dword ptr [0x11182e38], 0xffffffff */
  w32((uint32_t)(0x11182e38), (0xffffffffu));
  /* 111660eb mov eax, dword ptr [0x11182e38] */
  EAX = (r32((uint32_t)(0x11182e38)));
  /* 111660f0 mov dword ptr [0x11182e28], eax */
  w32((uint32_t)(0x11182e28), (EAX));
  /* 111660f5 push 0x1117fd58 */
  push32((uint32_t)(0x1117fd58u));
  /* 111660fa call 0x11166f40 */
  push32(0x111660ffu); f_11166f40();
  /* 111660ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166102 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11166105 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166109 jne 0x11166243 */
  if (!C.zf) goto L_11166243;
  /* 1116610f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11166111 call 0x1115b000 */
  push32(0x11166116u); f_1115b000();
  /* 11166116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166119 push 0x11183a98 */
  push32((uint32_t)(0x11183a98u));
  /* 1116611e call dword ptr [0x111862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862fc))), 0x11166124u);
  /* 11166124 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166127 je 0x1116623e */
  if (C.zf) goto L_1116623e;
  /* 1116612d mov dword ptr [0x11183a90], 1 */
  w32((uint32_t)(0x11183a90), (0x1u));
  /* 11166137 mov ecx, dword ptr [0x11183a98] */
  ECX = (r32((uint32_t)(0x11183a98)));
  /* 1116613d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11166140 mov dword ptr [0x11182d90], ecx */
  w32((uint32_t)(0x11182d90), (ECX));
  /* 11166146 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11166148 mov dx, word ptr [0x11183ade] */
  DX = (r16((uint32_t)(0x11183ade)));
  /* 1116614f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11166151 je 0x11166169 */
  if (C.zf) goto L_11166169;
  /* 11166153 mov eax, dword ptr [0x11183aec] */
  EAX = (r32((uint32_t)(0x11183aec)));
  /* 11166158 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1116615b mov ecx, dword ptr [0x11182d90] */
  ECX = (r32((uint32_t)(0x11182d90)));
  /* 11166161 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166163 mov dword ptr [0x11182d90], ecx */
  w32((uint32_t)(0x11182d90), (ECX));
L_11166169:;
  /* 11166169 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1116616b mov dx, word ptr [0x11183b32] */
  DX = (r16((uint32_t)(0x11183b32)));
  /* 11166172 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11166174 je 0x1116619e */
  if (C.zf) goto L_1116619e;
  /* 11166176 cmp dword ptr [0x11183b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116617d je 0x1116619e */
  if (C.zf) goto L_1116619e;
  /* 1116617f mov dword ptr [0x11182d94], 1 */
  w32((uint32_t)(0x11182d94), (0x1u));
  /* 11166189 mov eax, dword ptr [0x11183b40] */
  EAX = (r32((uint32_t)(0x11183b40)));
  /* 1116618e sub eax, dword ptr [0x11183aec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11183aec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11166194 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11166197 mov dword ptr [0x11182d98], eax */
  w32((uint32_t)(0x11182d98), (EAX));
  /* 1116619c jmp 0x111661b2 */
  goto L_111661b2;
L_1116619e:;
  /* 1116619e mov dword ptr [0x11182d94], 0 */
  w32((uint32_t)(0x11182d94), (0x0u));
  /* 111661a8 mov dword ptr [0x11182d98], 0 */
  w32((uint32_t)(0x11182d98), (0x0u));
L_111661b2:;
  /* 111661b2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 111661b5 push ecx */
  push32((uint32_t)(ECX));
  /* 111661b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111661b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111661ba mov edx, dword ptr [0x11182e1c] */
  EDX = (r32((uint32_t)(0x11182e1c)));
  /* 111661c0 push edx */
  push32((uint32_t)(EDX));
  /* 111661c1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111661c3 push 0x11183a9c */
  push32((uint32_t)(0x11183a9cu));
  /* 111661c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111661cd mov eax, dword ptr [0x11183a00] */
  EAX = (r32((uint32_t)(0x11183a00)));
  /* 111661d2 push eax */
  push32((uint32_t)(EAX));
  /* 111661d3 call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x111661d9u);
  /* 111661d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111661db je 0x111661ef */
  if (C.zf) goto L_111661ef;
  /* 111661dd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111661e1 jne 0x111661ef */
  if (!C.zf) goto L_111661ef;
  /* 111661e3 mov ecx, dword ptr [0x11182e1c] */
  ECX = (r32((uint32_t)(0x11182e1c)));
  /* 111661e9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 111661ed jmp 0x111661f8 */
  goto L_111661f8;
L_111661ef:;
  /* 111661ef mov edx, dword ptr [0x11182e1c] */
  EDX = (r32((uint32_t)(0x11182e1c)));
  /* 111661f5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_111661f8:;
  /* 111661f8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 111661fb push eax */
  push32((uint32_t)(EAX));
  /* 111661fc push 0 */
  push32((uint32_t)(0x0u));
  /* 111661fe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11166200 mov ecx, dword ptr [0x11182e20] */
  ECX = (r32((uint32_t)(0x11182e20)));
  /* 11166206 push ecx */
  push32((uint32_t)(ECX));
  /* 11166207 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11166209 push 0x11183af0 */
  push32((uint32_t)(0x11183af0u));
  /* 1116620e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11166213 mov edx, dword ptr [0x11183a00] */
  EDX = (r32((uint32_t)(0x11183a00)));
  /* 11166219 push edx */
  push32((uint32_t)(EDX));
  /* 1116621a call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x11166220u);
  /* 11166220 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11166222 je 0x11166235 */
  if (C.zf) goto L_11166235;
  /* 11166224 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166228 jne 0x11166235 */
  if (!C.zf) goto L_11166235;
  /* 1116622a mov eax, dword ptr [0x11182e20] */
  EAX = (r32((uint32_t)(0x11182e20)));
  /* 1116622f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11166233 jmp 0x1116623e */
  goto L_1116623e;
L_11166235:;
  /* 11166235 mov ecx, dword ptr [0x11182e20] */
  ECX = (r32((uint32_t)(0x11182e20)));
  /* 1116623b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1116623e:;
  /* 1116623e jmp 0x11166467 */
  goto L_11166467;
L_11166243:;
  /* 11166243 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166246 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11166249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116624b je 0x1116626d */
  if (C.zf) goto L_1116626d;
  /* 1116624d cmp dword ptr [0x11183b44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166254 je 0x1116627c */
  if (C.zf) goto L_1116627c;
  /* 11166256 mov ecx, dword ptr [0x11183b44] */
  ECX = (r32((uint32_t)(0x11183b44)));
  /* 1116625c push ecx */
  push32((uint32_t)(ECX));
  /* 1116625d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166260 push edx */
  push32((uint32_t)(EDX));
  /* 11166261 call 0x111631f0 */
  push32(0x11166266u); f_111631f0();
  /* 11166266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116626b jne 0x1116627c */
  if (!C.zf) goto L_1116627c;
L_1116626d:;
  /* 1116626d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1116626f call 0x1115b000 */
  push32(0x11166274u); f_1115b000();
  /* 11166274 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166277 jmp 0x11166467 */
  goto L_11166467;
L_1116627c:;
  /* 1116627c push 2 */
  push32((uint32_t)(0x2u));
  /* 1116627e mov eax, dword ptr [0x11183b44] */
  EAX = (r32((uint32_t)(0x11183b44)));
  /* 11166283 push eax */
  push32((uint32_t)(EAX));
  /* 11166284 call 0x11157ff0 */
  push32(0x11166289u); f_11157ff0();
  /* 11166289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116628c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11166291 push 0x1117fd50 */
  push32((uint32_t)(0x1117fd50u));
  /* 11166296 push 2 */
  push32((uint32_t)(0x2u));
  /* 11166298 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116629b push ecx */
  push32((uint32_t)(ECX));
  /* 1116629c call 0x1115a390 */
  push32(0x111662a1u); f_1115a390();
  /* 111662a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111662a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111662a7 push eax */
  push32((uint32_t)(EAX));
  /* 111662a8 call 0x11157560 */
  push32(0x111662adu); f_11157560();
  /* 111662ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111662b0 mov dword ptr [0x11183b44], eax */
  w32((uint32_t)(0x11183b44), (EAX));
  /* 111662b5 cmp dword ptr [0x11183b44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111662bc jne 0x111662cd */
  if (!C.zf) goto L_111662cd;
  /* 111662be push 0xc */
  push32((uint32_t)(0xcu));
  /* 111662c0 call 0x1115b000 */
  push32(0x111662c5u); f_1115b000();
  /* 111662c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111662c8 jmp 0x11166467 */
  goto L_11166467;
L_111662cd:;
  /* 111662cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111662d0 push edx */
  push32((uint32_t)(EDX));
  /* 111662d1 mov eax, dword ptr [0x11183b44] */
  EAX = (r32((uint32_t)(0x11183b44)));
  /* 111662d6 push eax */
  push32((uint32_t)(EAX));
  /* 111662d7 call 0x1115a510 */
  push32(0x111662dcu); f_1115a510();
  /* 111662dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111662df push 0xc */
  push32((uint32_t)(0xcu));
  /* 111662e1 call 0x1115b000 */
  push32(0x111662e6u); f_1115b000();
  /* 111662e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111662e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 111662eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111662ee push ecx */
  push32((uint32_t)(ECX));
  /* 111662ef mov edx, dword ptr [0x11182e1c] */
  EDX = (r32((uint32_t)(0x11182e1c)));
  /* 111662f5 push edx */
  push32((uint32_t)(EDX));
  /* 111662f6 call 0x1115ad80 */
  push32(0x111662fbu); f_1115ad80();
  /* 111662fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111662fe mov eax, dword ptr [0x11182e1c] */
  EAX = (r32((uint32_t)(0x11182e1c)));
  /* 11166303 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11166307 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116630a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116630d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11166310 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166313 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11166316 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166319 jne 0x1116632d */
  if (!C.zf) goto L_1116632d;
  /* 1116631b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116631e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166321 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11166324 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166327 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116632a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1116632d:;
  /* 1116632d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166330 push eax */
  push32((uint32_t)(EAX));
  /* 11166331 call 0x11165e10 */
  push32(0x11166336u); f_11165e10();
  /* 11166336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166339 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1116633f mov dword ptr [0x11182d90], eax */
  w32((uint32_t)(0x11182d90), (EAX));
L_11166344:;
  /* 11166344 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166347 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1116634a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116634d je 0x11166365 */
  if (C.zf) goto L_11166365;
  /* 1116634f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166352 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11166355 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166358 jl 0x11166370 */
  if ((C.sf!=C.of)) goto L_11166370;
  /* 1116635a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116635d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11166360 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166363 jg 0x11166370 */
  if ((!C.zf&&C.sf==C.of)) goto L_11166370;
L_11166365:;
  /* 11166365 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166368 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116636b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1116636e jmp 0x11166344 */
  goto L_11166344;
L_11166370:;
  /* 11166370 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166373 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11166376 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166379 jne 0x11166415 */
  if (!C.zf) goto L_11166415;
  /* 1116637f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166382 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166385 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11166388 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116638b push edx */
  push32((uint32_t)(EDX));
  /* 1116638c call 0x11165e10 */
  push32(0x11166391u); f_11165e10();
  /* 11166391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166394 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11166397 mov ecx, dword ptr [0x11182d90] */
  ECX = (r32((uint32_t)(0x11182d90)));
  /* 1116639d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116639f mov dword ptr [0x11182d90], ecx */
  w32((uint32_t)(0x11182d90), (ECX));
L_111663a5:;
  /* 111663a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111663a8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111663ab cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111663ae jl 0x111663c6 */
  if ((C.sf!=C.of)) goto L_111663c6;
  /* 111663b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111663b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111663b6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111663b9 jg 0x111663c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_111663c6;
  /* 111663bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111663be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111663c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111663c4 jmp 0x111663a5 */
  goto L_111663a5;
L_111663c6:;
  /* 111663c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111663c9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111663cc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111663cf jne 0x11166415 */
  if (!C.zf) goto L_11166415;
  /* 111663d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111663d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111663d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111663da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111663dd push ecx */
  push32((uint32_t)(ECX));
  /* 111663de call 0x11165e10 */
  push32(0x111663e3u); f_11165e10();
  /* 111663e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111663e6 mov edx, dword ptr [0x11182d90] */
  EDX = (r32((uint32_t)(0x11182d90)));
  /* 111663ec add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111663ee mov dword ptr [0x11182d90], edx */
  w32((uint32_t)(0x11182d90), (EDX));
L_111663f4:;
  /* 111663f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111663f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111663fa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111663fd jl 0x11166415 */
  if ((C.sf!=C.of)) goto L_11166415;
  /* 111663ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166402 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11166405 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166408 jg 0x11166415 */
  if ((!C.zf&&C.sf==C.of)) goto L_11166415;
  /* 1116640a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116640d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166410 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11166413 jmp 0x111663f4 */
  goto L_111663f4;
L_11166415:;
  /* 11166415 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166419 je 0x11166429 */
  if (C.zf) goto L_11166429;
  /* 1116641b mov edx, dword ptr [0x11182d90] */
  EDX = (r32((uint32_t)(0x11182d90)));
  /* 11166421 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11166423 mov dword ptr [0x11182d90], edx */
  w32((uint32_t)(0x11182d90), (EDX));
L_11166429:;
  /* 11166429 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116642c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116642f mov dword ptr [0x11182d94], ecx */
  w32((uint32_t)(0x11182d94), (ECX));
  /* 11166435 cmp dword ptr [0x11182d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11182d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116643c je 0x1116645e */
  if (C.zf) goto L_1116645e;
  /* 1116643e push 3 */
  push32((uint32_t)(0x3u));
  /* 11166440 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166443 push edx */
  push32((uint32_t)(EDX));
  /* 11166444 mov eax, dword ptr [0x11182e20] */
  EAX = (r32((uint32_t)(0x11182e20)));
  /* 11166449 push eax */
  push32((uint32_t)(EAX));
  /* 1116644a call 0x1115ad80 */
  push32(0x1116644fu); f_1115ad80();
  /* 1116644f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166452 mov ecx, dword ptr [0x11182e20] */
  ECX = (r32((uint32_t)(0x11182e20)));
  /* 11166458 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1116645c jmp 0x11166467 */
  goto L_11166467;
L_1116645e:;
  /* 1116645e mov edx, dword ptr [0x11182e20] */
  EDX = (r32((uint32_t)(0x11182e20)));
  /* 11166464 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11166467:;
  /* 11166467 mov esp, ebp */
  ESP = (EBP);
  /* 11166469 pop ebp */
  EBP = (pop32());
  /* 1116646a ret  */
  ESPCHK(0x111660c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016470 @ 0x11166470 (46 bytes, 18 insns) */
void f_11166470(void) {
  FTRACE(0x11166470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11166470 push ebp */
  push32((uint32_t)(EBP));
  /* 11166471 mov ebp, esp */
  EBP = (ESP);
  /* 11166473 push ecx */
  push32((uint32_t)(ECX));
  /* 11166474 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11166476 call 0x1115af60 */
  push32(0x1116647bu); f_1115af60();
  /* 1116647b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116647e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166481 push eax */
  push32((uint32_t)(EAX));
  /* 11166482 call 0x111664a0 */
  push32(0x11166487u); f_111664a0();
  /* 11166487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116648a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1116648d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1116648f call 0x1115b000 */
  push32(0x11166494u); f_1115b000();
  /* 11166494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166497 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116649a mov esp, ebp */
  ESP = (EBP);
  /* 1116649c pop ebp */
  EBP = (pop32());
  /* 1116649d ret  */
  ESPCHK(0x11166470u, _esp0);
  ESP += 4; return;
}

/* FUN_100164a0 @ 0x111664a0 (762 bytes, 246 insns) */
void f_111664a0(void) {
  FTRACE(0x111664a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111664a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111664a1 mov ebp, esp */
  EBP = (ESP);
  /* 111664a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111664a4 cmp dword ptr [0x11182d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11182d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111664ab jne 0x111664b4 */
  if (!C.zf) goto L_111664b4;
  /* 111664ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111664af jmp 0x11166796 */
  goto L_11166796;
L_111664b4:;
  /* 111664b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111664b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111664ba cmp ecx, dword ptr [0x11182e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11182e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111664c0 jne 0x111664d4 */
  if (!C.zf) goto L_111664d4;
  /* 111664c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111664c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111664c8 cmp eax, dword ptr [0x11182e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11182e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111664ce je 0x1116669b */
  if (C.zf) goto L_1116669b;
L_111664d4:;
  /* 111664d4 cmp dword ptr [0x11183a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111664db je 0x11166655 */
  if (C.zf) goto L_11166655;
  /* 111664e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111664e3 mov cx, word ptr [0x11183b30] */
  CX = (r16((uint32_t)(0x11183b30)));
  /* 111664ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111664ec jne 0x11166549 */
  if (!C.zf) goto L_11166549;
  /* 111664ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111664f0 mov dx, word ptr [0x11183b3e] */
  DX = (r16((uint32_t)(0x11183b3e)));
  /* 111664f7 push edx */
  push32((uint32_t)(EDX));
  /* 111664f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111664fa mov ax, word ptr [0x11183b3c] */
  AX = (r16((uint32_t)(0x11183b3c)));
  /* 11166500 push eax */
  push32((uint32_t)(EAX));
  /* 11166501 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11166503 mov cx, word ptr [0x11183b3a] */
  CX = (r16((uint32_t)(0x11183b3a)));
  /* 1116650a push ecx */
  push32((uint32_t)(ECX));
  /* 1116650b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1116650d mov dx, word ptr [0x11183b38] */
  DX = (r16((uint32_t)(0x11183b38)));
  /* 11166514 push edx */
  push32((uint32_t)(EDX));
  /* 11166515 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166517 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166519 mov ax, word ptr [0x11183b34] */
  AX = (r16((uint32_t)(0x11183b34)));
  /* 1116651f push eax */
  push32((uint32_t)(EAX));
  /* 11166520 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11166522 mov cx, word ptr [0x11183b36] */
  CX = (r16((uint32_t)(0x11183b36)));
  /* 11166529 push ecx */
  push32((uint32_t)(ECX));
  /* 1116652a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1116652c mov dx, word ptr [0x11183b32] */
  DX = (r16((uint32_t)(0x11183b32)));
  /* 11166533 push edx */
  push32((uint32_t)(EDX));
  /* 11166534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166537 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1116653a push ecx */
  push32((uint32_t)(ECX));
  /* 1116653b push 1 */
  push32((uint32_t)(0x1u));
  /* 1116653d push 1 */
  push32((uint32_t)(0x1u));
  /* 1116653f call 0x111667a0 */
  push32(0x11166544u); f_111667a0();
  /* 11166544 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166547 jmp 0x1116659a */
  goto L_1116659a;
L_11166549:;
  /* 11166549 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1116654b mov dx, word ptr [0x11183b3e] */
  DX = (r16((uint32_t)(0x11183b3e)));
  /* 11166552 push edx */
  push32((uint32_t)(EDX));
  /* 11166553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166555 mov ax, word ptr [0x11183b3c] */
  AX = (r16((uint32_t)(0x11183b3c)));
  /* 1116655b push eax */
  push32((uint32_t)(EAX));
  /* 1116655c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1116655e mov cx, word ptr [0x11183b3a] */
  CX = (r16((uint32_t)(0x11183b3a)));
  /* 11166565 push ecx */
  push32((uint32_t)(ECX));
  /* 11166566 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11166568 mov dx, word ptr [0x11183b38] */
  DX = (r16((uint32_t)(0x11183b38)));
  /* 1116656f push edx */
  push32((uint32_t)(EDX));
  /* 11166570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166572 mov ax, word ptr [0x11183b36] */
  AX = (r16((uint32_t)(0x11183b36)));
  /* 11166578 push eax */
  push32((uint32_t)(EAX));
  /* 11166579 push 0 */
  push32((uint32_t)(0x0u));
  /* 1116657b push 0 */
  push32((uint32_t)(0x0u));
  /* 1116657d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1116657f mov cx, word ptr [0x11183b32] */
  CX = (r16((uint32_t)(0x11183b32)));
  /* 11166586 push ecx */
  push32((uint32_t)(ECX));
  /* 11166587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116658a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1116658d push eax */
  push32((uint32_t)(EAX));
  /* 1116658e push 0 */
  push32((uint32_t)(0x0u));
  /* 11166590 push 1 */
  push32((uint32_t)(0x1u));
  /* 11166592 call 0x111667a0 */
  push32(0x11166597u); f_111667a0();
  /* 11166597 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1116659a:;
  /* 1116659a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1116659c mov cx, word ptr [0x11183adc] */
  CX = (r16((uint32_t)(0x11183adc)));
  /* 111665a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111665a5 jne 0x11166602 */
  if (!C.zf) goto L_11166602;
  /* 111665a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111665a9 mov dx, word ptr [0x11183aea] */
  DX = (r16((uint32_t)(0x11183aea)));
  /* 111665b0 push edx */
  push32((uint32_t)(EDX));
  /* 111665b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111665b3 mov ax, word ptr [0x11183ae8] */
  AX = (r16((uint32_t)(0x11183ae8)));
  /* 111665b9 push eax */
  push32((uint32_t)(EAX));
  /* 111665ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111665bc mov cx, word ptr [0x11183ae6] */
  CX = (r16((uint32_t)(0x11183ae6)));
  /* 111665c3 push ecx */
  push32((uint32_t)(ECX));
  /* 111665c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111665c6 mov dx, word ptr [0x11183ae4] */
  DX = (r16((uint32_t)(0x11183ae4)));
  /* 111665cd push edx */
  push32((uint32_t)(EDX));
  /* 111665ce push 0 */
  push32((uint32_t)(0x0u));
  /* 111665d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111665d2 mov ax, word ptr [0x11183ae0] */
  AX = (r16((uint32_t)(0x11183ae0)));
  /* 111665d8 push eax */
  push32((uint32_t)(EAX));
  /* 111665d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111665db mov cx, word ptr [0x11183ae2] */
  CX = (r16((uint32_t)(0x11183ae2)));
  /* 111665e2 push ecx */
  push32((uint32_t)(ECX));
  /* 111665e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111665e5 mov dx, word ptr [0x11183ade] */
  DX = (r16((uint32_t)(0x11183ade)));
  /* 111665ec push edx */
  push32((uint32_t)(EDX));
  /* 111665ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111665f0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111665f3 push ecx */
  push32((uint32_t)(ECX));
  /* 111665f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111665f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111665f8 call 0x111667a0 */
  push32(0x111665fdu); f_111667a0();
  /* 111665fd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166600 jmp 0x11166653 */
  goto L_11166653;
L_11166602:;
  /* 11166602 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11166604 mov dx, word ptr [0x11183aea] */
  DX = (r16((uint32_t)(0x11183aea)));
  /* 1116660b push edx */
  push32((uint32_t)(EDX));
  /* 1116660c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116660e mov ax, word ptr [0x11183ae8] */
  AX = (r16((uint32_t)(0x11183ae8)));
  /* 11166614 push eax */
  push32((uint32_t)(EAX));
  /* 11166615 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11166617 mov cx, word ptr [0x11183ae6] */
  CX = (r16((uint32_t)(0x11183ae6)));
  /* 1116661e push ecx */
  push32((uint32_t)(ECX));
  /* 1116661f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11166621 mov dx, word ptr [0x11183ae4] */
  DX = (r16((uint32_t)(0x11183ae4)));
  /* 11166628 push edx */
  push32((uint32_t)(EDX));
  /* 11166629 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116662b mov ax, word ptr [0x11183ae2] */
  AX = (r16((uint32_t)(0x11183ae2)));
  /* 11166631 push eax */
  push32((uint32_t)(EAX));
  /* 11166632 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166634 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166636 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11166638 mov cx, word ptr [0x11183ade] */
  CX = (r16((uint32_t)(0x11183ade)));
  /* 1116663f push ecx */
  push32((uint32_t)(ECX));
  /* 11166640 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166643 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11166646 push eax */
  push32((uint32_t)(EAX));
  /* 11166647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166649 push 0 */
  push32((uint32_t)(0x0u));
  /* 1116664b call 0x111667a0 */
  push32(0x11166650u); f_111667a0();
  /* 11166650 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11166653:;
  /* 11166653 jmp 0x1116669b */
  goto L_1116669b;
L_11166655:;
  /* 11166655 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166657 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166659 push 0 */
  push32((uint32_t)(0x0u));
  /* 1116665b push 2 */
  push32((uint32_t)(0x2u));
  /* 1116665d push 0 */
  push32((uint32_t)(0x0u));
  /* 1116665f push 0 */
  push32((uint32_t)(0x0u));
  /* 11166661 push 1 */
  push32((uint32_t)(0x1u));
  /* 11166663 push 4 */
  push32((uint32_t)(0x4u));
  /* 11166665 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166668 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1116666b push edx */
  push32((uint32_t)(EDX));
  /* 1116666c push 1 */
  push32((uint32_t)(0x1u));
  /* 1116666e push 1 */
  push32((uint32_t)(0x1u));
  /* 11166670 call 0x111667a0 */
  push32(0x11166675u); f_111667a0();
  /* 11166675 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166678 push 0 */
  push32((uint32_t)(0x0u));
  /* 1116667a push 0 */
  push32((uint32_t)(0x0u));
  /* 1116667c push 0 */
  push32((uint32_t)(0x0u));
  /* 1116667e push 2 */
  push32((uint32_t)(0x2u));
  /* 11166680 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166682 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166684 push 5 */
  push32((uint32_t)(0x5u));
  /* 11166686 push 0xa */
  push32((uint32_t)(0xau));
  /* 11166688 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116668b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1116668e push ecx */
  push32((uint32_t)(ECX));
  /* 1116668f push 1 */
  push32((uint32_t)(0x1u));
  /* 11166691 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166693 call 0x111667a0 */
  push32(0x11166698u); f_111667a0();
  /* 11166698 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1116669b:;
  /* 1116669b mov edx, dword ptr [0x11182e2c] */
  EDX = (r32((uint32_t)(0x11182e2c)));
  /* 111666a1 cmp edx, dword ptr [0x11182e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11182e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111666a7 jge 0x111666f4 */
  if ((C.sf==C.of)) goto L_111666f4;
  /* 111666a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111666ac mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 111666af cmp ecx, dword ptr [0x11182e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11182e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111666b5 jl 0x111666c5 */
  if ((C.sf!=C.of)) goto L_111666c5;
  /* 111666b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111666ba mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 111666bd cmp eax, dword ptr [0x11182e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11182e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111666c3 jle 0x111666cc */
  if ((C.zf||C.sf!=C.of)) goto L_111666cc;
L_111666c5:;
  /* 111666c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111666c7 jmp 0x11166796 */
  goto L_11166796;
L_111666cc:;
  /* 111666cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111666cf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 111666d2 cmp edx, dword ptr [0x11182e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11182e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111666d8 jle 0x111666f2 */
  if ((C.zf||C.sf!=C.of)) goto L_111666f2;
  /* 111666da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111666dd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 111666e0 cmp ecx, dword ptr [0x11182e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11182e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111666e6 jge 0x111666f2 */
  if ((C.sf==C.of)) goto L_111666f2;
  /* 111666e8 mov eax, 1 */
  EAX = (0x1u);
  /* 111666ed jmp 0x11166796 */
  goto L_11166796;
L_111666f2:;
  /* 111666f2 jmp 0x11166737 */
  goto L_11166737;
L_111666f4:;
  /* 111666f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111666f7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 111666fa cmp eax, dword ptr [0x11182e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11182e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166700 jl 0x11166710 */
  if ((C.sf!=C.of)) goto L_11166710;
  /* 11166702 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166705 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11166708 cmp edx, dword ptr [0x11182e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11182e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116670e jle 0x11166717 */
  if ((C.zf||C.sf!=C.of)) goto L_11166717;
L_11166710:;
  /* 11166710 mov eax, 1 */
  EAX = (0x1u);
  /* 11166715 jmp 0x11166796 */
  goto L_11166796;
L_11166717:;
  /* 11166717 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116671a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1116671d cmp ecx, dword ptr [0x11182e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11182e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166723 jle 0x11166737 */
  if ((C.zf||C.sf!=C.of)) goto L_11166737;
  /* 11166725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166728 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1116672b cmp eax, dword ptr [0x11182e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11182e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166731 jge 0x11166737 */
  if ((C.sf==C.of)) goto L_11166737;
  /* 11166733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166735 jmp 0x11166796 */
  goto L_11166796;
L_11166737:;
  /* 11166737 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116673a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1116673d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11166740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166743 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11166745 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166747 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116674a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1116674d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11166753 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166755 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1116675b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1116675e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166761 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11166764 cmp edx, dword ptr [0x11182e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11182e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116676a jne 0x11166782 */
  if (!C.zf) goto L_11166782;
  /* 1116676c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116676f cmp eax, dword ptr [0x11182e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11182e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166775 jl 0x1116677e */
  if ((C.sf!=C.of)) goto L_1116677e;
  /* 11166777 mov eax, 1 */
  EAX = (0x1u);
  /* 1116677c jmp 0x11166796 */
  goto L_11166796;
L_1116677e:;
  /* 1116677e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166780 jmp 0x11166796 */
  goto L_11166796;
L_11166782:;
  /* 11166782 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11166785 cmp ecx, dword ptr [0x11182e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11182e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116678b jge 0x11166794 */
  if ((C.sf==C.of)) goto L_11166794;
  /* 1116678d mov eax, 1 */
  EAX = (0x1u);
  /* 11166792 jmp 0x11166796 */
  goto L_11166796;
L_11166794:;
  /* 11166794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11166796:;
  /* 11166796 mov esp, ebp */
  ESP = (EBP);
  /* 11166798 pop ebp */
  EBP = (pop32());
  /* 11166799 ret  */
  ESPCHK(0x111664a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100167a0 @ 0x111667a0 (504 bytes, 145 insns) */
void f_111667a0(void) {
  FTRACE(0x111667a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111667a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111667a1 mov ebp, esp */
  EBP = (ESP);
  /* 111667a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111667a6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111667aa jne 0x1116687c */
  if (!C.zf) goto L_1116687c;
  /* 111667b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111667b3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111667b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111667b8 jne 0x111667c9 */
  if (!C.zf) goto L_111667c9;
  /* 111667ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111667bd mov edx, dword ptr [ecx*4 + 0x11182e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11182e4c)));
  /* 111667c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111667c7 jmp 0x111667d6 */
  goto L_111667d6;
L_111667c9:;
  /* 111667c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111667cc mov ecx, dword ptr [eax*4 + 0x11182e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11182e80)));
  /* 111667d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_111667d6:;
  /* 111667d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111667d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111667dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111667df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111667e2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111667e5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111667eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111667ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111667f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111667f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111667f6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 111667f9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 111667fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111667fe mov ecx, 7 */
  ECX = (0x7u);
  /* 11166803 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11166805 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11166808 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116680b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116680e jge 0x11166829 */
  if ((C.sf==C.of)) goto L_11166829;
  /* 11166810 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11166813 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11166816 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11166819 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116681c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1116681f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166822 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166824 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11166827 jmp 0x1116683d */
  goto L_1116683d;
L_11166829:;
  /* 11166829 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1116682c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116682f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11166832 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11166835 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166838 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116683a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1116683d:;
  /* 1116683d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166841 jne 0x1116687a */
  if (!C.zf) goto L_1116687a;
  /* 11166843 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11166846 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11166849 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1116684b jne 0x1116685c */
  if (!C.zf) goto L_1116685c;
  /* 1116684d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11166850 mov eax, dword ptr [edx*4 + 0x11182e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11182e50)));
  /* 11166857 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1116685a jmp 0x11166869 */
  goto L_11166869;
L_1116685c:;
  /* 1116685c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1116685f mov edx, dword ptr [ecx*4 + 0x11182e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11182e84)));
  /* 11166866 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11166869:;
  /* 11166869 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116686c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116686f jle 0x1116687a */
  if ((C.zf||C.sf!=C.of)) goto L_1116687a;
  /* 11166871 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11166874 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11166877 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1116687a:;
  /* 1116687a jmp 0x111668b1 */
  goto L_111668b1;
L_1116687c:;
  /* 1116687c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116687f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11166882 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11166884 jne 0x11166895 */
  if (!C.zf) goto L_11166895;
  /* 11166886 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11166889 mov ecx, dword ptr [eax*4 + 0x11182e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11182e4c)));
  /* 11166890 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11166893 jmp 0x111668a2 */
  goto L_111668a2;
L_11166895:;
  /* 11166895 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11166898 mov eax, dword ptr [edx*4 + 0x11182e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11182e80)));
  /* 1116689f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_111668a2:;
  /* 111668a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111668a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111668a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111668ab add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111668ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111668b1:;
  /* 111668b1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111668b5 jne 0x111668f1 */
  if (!C.zf) goto L_111668f1;
  /* 111668b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111668ba mov dword ptr [0x11182e2c], eax */
  w32((uint32_t)(0x11182e2c), (EAX));
  /* 111668bf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 111668c2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111668c5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 111668c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111668ca imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111668cd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 111668d0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111668d2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111668d8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 111668db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111668dd mov dword ptr [0x11182e30], ecx */
  w32((uint32_t)(0x11182e30), (ECX));
  /* 111668e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111668e6 mov dword ptr [0x11182e28], edx */
  w32((uint32_t)(0x11182e28), (EDX));
  /* 111668ec jmp 0x11166994 */
  goto L_11166994;
L_111668f1:;
  /* 111668f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111668f4 mov dword ptr [0x11182e3c], eax */
  w32((uint32_t)(0x11182e3c), (EAX));
  /* 111668f9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 111668fc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111668ff mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11166902 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166904 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11166907 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1116690a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116690c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11166912 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11166915 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166917 mov dword ptr [0x11182e40], ecx */
  w32((uint32_t)(0x11182e40), (ECX));
  /* 1116691d mov edx, dword ptr [0x11182d98] */
  EDX = (r32((uint32_t)(0x11182d98)));
  /* 11166923 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11166929 mov eax, dword ptr [0x11182e40] */
  EAX = (r32((uint32_t)(0x11182e40)));
  /* 1116692e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166930 mov dword ptr [0x11182e40], eax */
  w32((uint32_t)(0x11182e40), (EAX));
  /* 11166935 cmp dword ptr [0x11182e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11182e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116693c jge 0x11166961 */
  if ((C.sf==C.of)) goto L_11166961;
  /* 1116693e mov ecx, dword ptr [0x11182e40] */
  ECX = (r32((uint32_t)(0x11182e40)));
  /* 11166944 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116694a mov dword ptr [0x11182e40], ecx */
  w32((uint32_t)(0x11182e40), (ECX));
  /* 11166950 mov edx, dword ptr [0x11182e3c] */
  EDX = (r32((uint32_t)(0x11182e3c)));
  /* 11166956 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11166959 mov dword ptr [0x11182e3c], edx */
  w32((uint32_t)(0x11182e3c), (EDX));
  /* 1116695f jmp 0x1116698b */
  goto L_1116698b;
L_11166961:;
  /* 11166961 cmp dword ptr [0x11182e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11182e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116696b jl 0x1116698b */
  if ((C.sf!=C.of)) goto L_1116698b;
  /* 1116696d mov eax, dword ptr [0x11182e40] */
  EAX = (r32((uint32_t)(0x11182e40)));
  /* 11166972 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11166977 mov dword ptr [0x11182e40], eax */
  w32((uint32_t)(0x11182e40), (EAX));
  /* 1116697c mov ecx, dword ptr [0x11182e3c] */
  ECX = (r32((uint32_t)(0x11182e3c)));
  /* 11166982 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166985 mov dword ptr [0x11182e3c], ecx */
  w32((uint32_t)(0x11182e3c), (ECX));
L_1116698b:;
  /* 1116698b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116698e mov dword ptr [0x11182e38], edx */
  w32((uint32_t)(0x11182e38), (EDX));
L_11166994:;
  /* 11166994 mov esp, ebp */
  ESP = (EBP);
  /* 11166996 pop ebp */
  EBP = (pop32());
  /* 11166997 ret  */
  ESPCHK(0x111667a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100169a0 @ 0x111669a0 (382 bytes, 135 insns) */
void f_111669a0(void) {
  FTRACE(0x111669a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111669a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111669a1 mov ebp, esp */
  EBP = (ESP);
  /* 111669a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111669a5 push 0x1117fd60 */
  push32((uint32_t)(0x1117fd60u));
  /* 111669aa push 0x11160668 */
  push32((uint32_t)(0x11160668u));
  /* 111669af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111669b5 push eax */
  push32((uint32_t)(EAX));
  /* 111669b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111669bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111669c0 push ebx */
  push32((uint32_t)(EBX));
  /* 111669c1 push esi */
  push32((uint32_t)(ESI));
  /* 111669c2 push edi */
  push32((uint32_t)(EDI));
  /* 111669c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111669c6 cmp dword ptr [0x11183b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111669cd jne 0x11166a12 */
  if (!C.zf) goto L_11166a12;
  /* 111669cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111669d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111669d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111669d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111669d7 call dword ptr [0x111862f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862f8))), 0x111669ddu);
  /* 111669dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111669df je 0x111669ed */
  if (C.zf) goto L_111669ed;
  /* 111669e1 mov dword ptr [0x11183b4c], 1 */
  w32((uint32_t)(0x11183b4c), (0x1u));
  /* 111669eb jmp 0x11166a12 */
  goto L_11166a12;
L_111669ed:;
  /* 111669ed push 0 */
  push32((uint32_t)(0x0u));
  /* 111669ef push 0 */
  push32((uint32_t)(0x0u));
  /* 111669f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111669f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111669f5 call dword ptr [0x11186310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186310))), 0x111669fbu);
  /* 111669fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111669fd je 0x11166a0b */
  if (C.zf) goto L_11166a0b;
  /* 111669ff mov dword ptr [0x11183b4c], 2 */
  w32((uint32_t)(0x11183b4c), (0x2u));
  /* 11166a09 jmp 0x11166a12 */
  goto L_11166a12;
L_11166a0b:;
  /* 11166a0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166a0d jmp 0x11166b21 */
  goto L_11166b21;
L_11166a12:;
  /* 11166a12 cmp dword ptr [0x11183b4c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11183b4c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166a19 jne 0x11166a36 */
  if (!C.zf) goto L_11166a36;
  /* 11166a1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11166a1e push eax */
  push32((uint32_t)(EAX));
  /* 11166a1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11166a22 push ecx */
  push32((uint32_t)(ECX));
  /* 11166a23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11166a26 push edx */
  push32((uint32_t)(EDX));
  /* 11166a27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166a2a push eax */
  push32((uint32_t)(EAX));
  /* 11166a2b call dword ptr [0x111862f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862f8))), 0x11166a31u);
  /* 11166a31 jmp 0x11166b21 */
  goto L_11166b21;
L_11166a36:;
  /* 11166a36 cmp dword ptr [0x11183b4c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11183b4c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166a3d jne 0x11166b1f */
  if (!C.zf) goto L_11166b1f;
  /* 11166a43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166a47 jne 0x11166a52 */
  if (!C.zf) goto L_11166a52;
  /* 11166a49 mov ecx, dword ptr [0x11183a00] */
  ECX = (r32((uint32_t)(0x11183a00)));
  /* 11166a4f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11166a52:;
  /* 11166a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166a56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11166a59 push edx */
  push32((uint32_t)(EDX));
  /* 11166a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166a5d push eax */
  push32((uint32_t)(EAX));
  /* 11166a5e call dword ptr [0x11186310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186310))), 0x11166a64u);
  /* 11166a64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11166a67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166a6b jne 0x11166a74 */
  if (!C.zf) goto L_11166a74;
  /* 11166a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166a6f jmp 0x11166b21 */
  goto L_11166b21;
L_11166a74:;
  /* 11166a74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11166a7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11166a7e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166a81 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11166a83 call 0x1115a700 */
  push32(0x11166a88u); f_1115a700();
  /* 11166a88 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11166a8b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11166a8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11166a91 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11166a94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11166a9b jmp 0x11166ab4 */
  goto L_11166ab4;
  /* 11166a9d mov eax, 1 */
  EAX = (0x1u);
  /* 11166aa2 ret  */
  ESPCHK(0x111669a0u, _esp0);
  ESP += 4; return;
  /* 11166aa3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11166aa6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11166aad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11166ab4:;
  /* 11166ab4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166ab8 jne 0x11166abe */
  if (!C.zf) goto L_11166abe;
  /* 11166aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166abc jmp 0x11166b21 */
  goto L_11166b21;
L_11166abe:;
  /* 11166abe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11166ac1 push edx */
  push32((uint32_t)(EDX));
  /* 11166ac2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11166ac5 push eax */
  push32((uint32_t)(EAX));
  /* 11166ac6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11166ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11166aca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166acd push edx */
  push32((uint32_t)(EDX));
  /* 11166ace call dword ptr [0x11186310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186310))), 0x11166ad4u);
  /* 11166ad4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11166ad6 jne 0x11166adc */
  if (!C.zf) goto L_11166adc;
  /* 11166ad8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166ada jmp 0x11166b21 */
  goto L_11166b21;
L_11166adc:;
  /* 11166adc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166ae0 jne 0x11166afd */
  if (!C.zf) goto L_11166afd;
  /* 11166ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166ae6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11166ae8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11166aeb push eax */
  push32((uint32_t)(EAX));
  /* 11166aec push 1 */
  push32((uint32_t)(0x1u));
  /* 11166aee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11166af1 push ecx */
  push32((uint32_t)(ECX));
  /* 11166af2 call dword ptr [0x11186340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186340))), 0x11166af8u);
  /* 11166af8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11166afb jmp 0x11166b1a */
  goto L_11166b1a;
L_11166afd:;
  /* 11166afd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11166b00 push edx */
  push32((uint32_t)(EDX));
  /* 11166b01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11166b04 push eax */
  push32((uint32_t)(EAX));
  /* 11166b05 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11166b07 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11166b0a push ecx */
  push32((uint32_t)(ECX));
  /* 11166b0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11166b0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11166b10 push edx */
  push32((uint32_t)(EDX));
  /* 11166b11 call dword ptr [0x11186340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186340))), 0x11166b17u);
  /* 11166b17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11166b1a:;
  /* 11166b1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11166b1d jmp 0x11166b21 */
  goto L_11166b21;
L_11166b1f:;
  /* 11166b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11166b21:;
  /* 11166b21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11166b24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11166b27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11166b2e pop edi */
  EDI = (pop32());
  /* 11166b2f pop esi */
  ESI = (pop32());
  /* 11166b30 pop ebx */
  EBX = (pop32());
  /* 11166b31 mov esp, ebp */
  ESP = (EBP);
  /* 11166b33 pop ebp */
  EBP = (pop32());
  /* 11166b34 ret  */
  ESPCHK(0x111669a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b40 @ 0x11166b40 (398 bytes, 140 insns) */
void f_11166b40(void) {
  FTRACE(0x11166b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11166b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11166b41 mov ebp, esp */
  EBP = (ESP);
  /* 11166b43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11166b45 push 0x1117fd70 */
  push32((uint32_t)(0x1117fd70u));
  /* 11166b4a push 0x11160668 */
  push32((uint32_t)(0x11160668u));
  /* 11166b4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11166b55 push eax */
  push32((uint32_t)(EAX));
  /* 11166b56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11166b5d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166b60 push ebx */
  push32((uint32_t)(EBX));
  /* 11166b61 push esi */
  push32((uint32_t)(ESI));
  /* 11166b62 push edi */
  push32((uint32_t)(EDI));
  /* 11166b63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11166b66 cmp dword ptr [0x11183b50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166b6d jne 0x11166bb2 */
  if (!C.zf) goto L_11166bb2;
  /* 11166b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11166b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166b73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11166b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166b77 call dword ptr [0x111862f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862f8))), 0x11166b7du);
  /* 11166b7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11166b7f je 0x11166b8d */
  if (C.zf) goto L_11166b8d;
  /* 11166b81 mov dword ptr [0x11183b50], 1 */
  w32((uint32_t)(0x11183b50), (0x1u));
  /* 11166b8b jmp 0x11166bb2 */
  goto L_11166bb2;
L_11166b8d:;
  /* 11166b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11166b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11166b91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11166b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166b95 call dword ptr [0x11186310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186310))), 0x11166b9bu);
  /* 11166b9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11166b9d je 0x11166bab */
  if (C.zf) goto L_11166bab;
  /* 11166b9f mov dword ptr [0x11183b50], 2 */
  w32((uint32_t)(0x11183b50), (0x2u));
  /* 11166ba9 jmp 0x11166bb2 */
  goto L_11166bb2;
L_11166bab:;
  /* 11166bab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166bad jmp 0x11166cd1 */
  goto L_11166cd1;
L_11166bb2:;
  /* 11166bb2 cmp dword ptr [0x11183b50], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11183b50))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166bb9 jne 0x11166bd6 */
  if (!C.zf) goto L_11166bd6;
  /* 11166bbb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11166bbe push eax */
  push32((uint32_t)(EAX));
  /* 11166bbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11166bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11166bc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11166bc6 push edx */
  push32((uint32_t)(EDX));
  /* 11166bc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166bca push eax */
  push32((uint32_t)(EAX));
  /* 11166bcb call dword ptr [0x11186310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186310))), 0x11166bd1u);
  /* 11166bd1 jmp 0x11166cd1 */
  goto L_11166cd1;
L_11166bd6:;
  /* 11166bd6 cmp dword ptr [0x11183b50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11183b50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166bdd jne 0x11166ccf */
  if (!C.zf) goto L_11166ccf;
  /* 11166be3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166be7 jne 0x11166bf2 */
  if (!C.zf) goto L_11166bf2;
  /* 11166be9 mov ecx, dword ptr [0x11183a00] */
  ECX = (r32((uint32_t)(0x11183a00)));
  /* 11166bef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11166bf2:;
  /* 11166bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166bf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11166bf9 push edx */
  push32((uint32_t)(EDX));
  /* 11166bfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166bfd push eax */
  push32((uint32_t)(EAX));
  /* 11166bfe call dword ptr [0x111862f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862f8))), 0x11166c04u);
  /* 11166c04 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11166c07 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166c0b jne 0x11166c14 */
  if (!C.zf) goto L_11166c14;
  /* 11166c0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166c0f jmp 0x11166cd1 */
  goto L_11166cd1;
L_11166c14:;
  /* 11166c14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11166c1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11166c1e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11166c20 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166c23 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11166c25 call 0x1115a700 */
  push32(0x11166c2au); f_1115a700();
  /* 11166c2a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11166c2d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11166c30 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11166c33 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11166c36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11166c3d jmp 0x11166c56 */
  goto L_11166c56;
  /* 11166c3f mov eax, 1 */
  EAX = (0x1u);
  /* 11166c44 ret  */
  ESPCHK(0x11166b40u, _esp0);
  ESP += 4; return;
  /* 11166c45 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11166c48 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11166c4f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11166c56:;
  /* 11166c56 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166c5a jne 0x11166c60 */
  if (!C.zf) goto L_11166c60;
  /* 11166c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166c5e jmp 0x11166cd1 */
  goto L_11166cd1;
L_11166c60:;
  /* 11166c60 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11166c63 push edx */
  push32((uint32_t)(EDX));
  /* 11166c64 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11166c67 push eax */
  push32((uint32_t)(EAX));
  /* 11166c68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11166c6b push ecx */
  push32((uint32_t)(ECX));
  /* 11166c6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166c6f push edx */
  push32((uint32_t)(EDX));
  /* 11166c70 call dword ptr [0x111862f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862f8))), 0x11166c76u);
  /* 11166c76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11166c78 jne 0x11166c7e */
  if (!C.zf) goto L_11166c7e;
  /* 11166c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166c7c jmp 0x11166cd1 */
  goto L_11166cd1;
L_11166c7e:;
  /* 11166c7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166c82 jne 0x11166ca6 */
  if (!C.zf) goto L_11166ca6;
  /* 11166c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11166c8c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11166c8e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11166c91 push eax */
  push32((uint32_t)(EAX));
  /* 11166c92 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11166c97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11166c9a push ecx */
  push32((uint32_t)(ECX));
  /* 11166c9b call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x11166ca1u);
  /* 11166ca1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11166ca4 jmp 0x11166cca */
  goto L_11166cca;
L_11166ca6:;
  /* 11166ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166ca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11166caa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11166cad push edx */
  push32((uint32_t)(EDX));
  /* 11166cae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11166cb1 push eax */
  push32((uint32_t)(EAX));
  /* 11166cb2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11166cb4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11166cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11166cb8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11166cbd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11166cc0 push edx */
  push32((uint32_t)(EDX));
  /* 11166cc1 call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x11166cc7u);
  /* 11166cc7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11166cca:;
  /* 11166cca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11166ccd jmp 0x11166cd1 */
  goto L_11166cd1;
L_11166ccf:;
  /* 11166ccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11166cd1:;
  /* 11166cd1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11166cd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11166cd7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11166cde pop edi */
  EDI = (pop32());
  /* 11166cdf pop esi */
  ESI = (pop32());
  /* 11166ce0 pop ebx */
  EBX = (pop32());
  /* 11166ce1 mov esp, ebp */
  ESP = (EBP);
  /* 11166ce3 pop ebp */
  EBP = (pop32());
  /* 11166ce4 ret  */
  ESPCHK(0x11166b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016cf0 @ 0x11166cf0 (11 bytes, 6 insns) */
void f_11166cf0(void) {
  FTRACE(0x11166cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11166cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11166cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11166cf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166cf6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166cf9 pop ebp */
  EBP = (pop32());
  /* 11166cfa ret  */
  ESPCHK(0x11166cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d00 @ 0x11166d00 (147 bytes, 43 insns) */
void f_11166d00(void) {
  FTRACE(0x11166d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11166d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11166d01 mov ebp, esp */
  EBP = (ESP);
  /* 11166d03 push ecx */
  push32((uint32_t)(ECX));
  /* 11166d04 cmp dword ptr [0x111839f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111839f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166d0b jne 0x11166d27 */
  if (!C.zf) goto L_11166d27;
  /* 11166d0d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166d11 jl 0x11166d22 */
  if ((C.sf!=C.of)) goto L_11166d22;
  /* 11166d13 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166d17 jg 0x11166d22 */
  if ((!C.zf&&C.sf==C.of)) goto L_11166d22;
  /* 11166d19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166d1c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166d1f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11166d22:;
  /* 11166d22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166d25 jmp 0x11166d8f */
  goto L_11166d8f;
L_11166d27:;
  /* 11166d27 push 0x11183b7c */
  push32((uint32_t)(0x11183b7cu));
  /* 11166d2c call dword ptr [0x111862e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862e8))), 0x11166d32u);
  /* 11166d32 cmp dword ptr [0x11183b6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166d39 je 0x11166d59 */
  if (C.zf) goto L_11166d59;
  /* 11166d3b push 0x11183b7c */
  push32((uint32_t)(0x11183b7cu));
  /* 11166d40 call dword ptr [0x111863c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c8))), 0x11166d46u);
  /* 11166d46 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11166d48 call 0x1115af60 */
  push32(0x11166d4du); f_1115af60();
  /* 11166d4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166d50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11166d57 jmp 0x11166d60 */
  goto L_11166d60;
L_11166d59:;
  /* 11166d59 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11166d60:;
  /* 11166d60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11166d64 call 0x11166da0 */
  push32(0x11166d69u); f_11166da0();
  /* 11166d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166d6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11166d6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166d73 je 0x11166d81 */
  if (C.zf) goto L_11166d81;
  /* 11166d75 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11166d77 call 0x1115b000 */
  push32(0x11166d7cu); f_1115b000();
  /* 11166d7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166d7f jmp 0x11166d8c */
  goto L_11166d8c;
L_11166d81:;
  /* 11166d81 push 0x11183b7c */
  push32((uint32_t)(0x11183b7cu));
  /* 11166d86 call dword ptr [0x111863c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c8))), 0x11166d8cu);
L_11166d8c:;
  /* 11166d8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11166d8f:;
  /* 11166d8f mov esp, ebp */
  ESP = (EBP);
  /* 11166d91 pop ebp */
  EBP = (pop32());
  /* 11166d92 ret  */
  ESPCHK(0x11166d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016da0 @ 0x11166da0 (299 bytes, 91 insns) */
void f_11166da0(void) {
  FTRACE(0x11166da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11166da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11166da1 mov ebp, esp */
  EBP = (ESP);
  /* 11166da3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11166da6 cmp dword ptr [0x111839f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111839f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166dad jne 0x11166dcc */
  if (!C.zf) goto L_11166dcc;
  /* 11166daf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166db3 jl 0x11166dc4 */
  if ((C.sf!=C.of)) goto L_11166dc4;
  /* 11166db5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166db9 jg 0x11166dc4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11166dc4;
  /* 11166dbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166dbe add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166dc1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11166dc4:;
  /* 11166dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166dc7 jmp 0x11166ec7 */
  goto L_11166ec7;
L_11166dcc:;
  /* 11166dcc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166dd3 jge 0x11166e13 */
  if ((C.sf==C.of)) goto L_11166e13;
  /* 11166dd5 cmp dword ptr [0x11181ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11181ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166ddc jle 0x11166df1 */
  if ((C.zf||C.sf!=C.of)) goto L_11166df1;
  /* 11166dde push 1 */
  push32((uint32_t)(0x1u));
  /* 11166de0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166de3 push ecx */
  push32((uint32_t)(ECX));
  /* 11166de4 call 0x1115d570 */
  push32(0x11166de9u); f_1115d570();
  /* 11166de9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166dec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11166def jmp 0x11166e05 */
  goto L_11166e05;
L_11166df1:;
  /* 11166df1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166df4 mov eax, dword ptr [0x11181c98] */
  EAX = (r32((uint32_t)(0x11181c98)));
  /* 11166df9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11166dfb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11166dff and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11166e02 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11166e05:;
  /* 11166e05 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166e09 jne 0x11166e13 */
  if (!C.zf) goto L_11166e13;
  /* 11166e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166e0e jmp 0x11166ec7 */
  goto L_11166ec7;
L_11166e13:;
  /* 11166e13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166e16 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11166e19 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11166e1f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11166e25 mov eax, dword ptr [0x11181c98] */
  EAX = (r32((uint32_t)(0x11181c98)));
  /* 11166e2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11166e2c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11166e30 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11166e36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11166e38 je 0x11166e5c */
  if (C.zf) goto L_11166e5c;
  /* 11166e3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166e3d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11166e40 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11166e46 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11166e49 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11166e4c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11166e4f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11166e53 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11166e5a jmp 0x11166e6d */
  goto L_11166e6d;
L_11166e5c:;
  /* 11166e5c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11166e5f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11166e62 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11166e66 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11166e6d:;
  /* 11166e6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11166e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11166e71 push 3 */
  push32((uint32_t)(0x3u));
  /* 11166e73 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11166e76 push edx */
  push32((uint32_t)(EDX));
  /* 11166e77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11166e7a push eax */
  push32((uint32_t)(EAX));
  /* 11166e7b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11166e7e push ecx */
  push32((uint32_t)(ECX));
  /* 11166e7f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11166e84 mov edx, dword ptr [0x111839f0] */
  EDX = (r32((uint32_t)(0x111839f0)));
  /* 11166e8a push edx */
  push32((uint32_t)(EDX));
  /* 11166e8b call 0x1115f950 */
  push32(0x11166e90u); f_1115f950();
  /* 11166e90 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166e93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11166e96 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166e9a jne 0x11166ea1 */
  if (!C.zf) goto L_11166ea1;
  /* 11166e9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166e9f jmp 0x11166ec7 */
  goto L_11166ec7;
L_11166ea1:;
  /* 11166ea1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166ea5 jne 0x11166eb1 */
  if (!C.zf) goto L_11166eb1;
  /* 11166ea7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166eaa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11166eaf jmp 0x11166ec7 */
  goto L_11166ec7;
L_11166eb1:;
  /* 11166eb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11166eb4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11166eb9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11166ebc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11166ec2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11166ec5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11166ec7:;
  /* 11166ec7 mov esp, ebp */
  ESP = (EBP);
  /* 11166ec9 pop ebp */
  EBP = (pop32());
  /* 11166eca ret  */
  ESPCHK(0x11166da0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11166ed0 (52 bytes, 19 insns) */
void f_11166ed0(void) {
  FTRACE(0x11166ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11166ed0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11166ed4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11166ed8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11166eda mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11166ede jne 0x11166ee9 */
  if (!C.zf) goto L_11166ee9;
  /* 11166ee0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11166ee4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11166ee6 ret 0x10 */
  ESPCHK(0x11166ed0u, _esp0);
  ESP += 20; return;
L_11166ee9:;
  /* 11166ee9 push ebx */
  push32((uint32_t)(EBX));
  /* 11166eea mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11166eec mov ebx, eax */
  EBX = (EAX);
  /* 11166eee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11166ef2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11166ef6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166ef8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11166efc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11166efe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166f00 pop ebx */
  EBX = (pop32());
  /* 11166f01 ret 0x10 */
  ESPCHK(0x11166ed0u, _esp0);
  ESP += 20; return;
}

/* FUN_10016f10 @ 0x11166f10 (46 bytes, 18 insns) */
void f_11166f10(void) {
  FTRACE(0x11166f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11166f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11166f11 mov ebp, esp */
  EBP = (ESP);
  /* 11166f13 push ecx */
  push32((uint32_t)(ECX));
  /* 11166f14 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11166f16 call 0x1115af60 */
  push32(0x11166f1bu); f_1115af60();
  /* 11166f1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166f1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166f21 push eax */
  push32((uint32_t)(EAX));
  /* 11166f22 call 0x11166f40 */
  push32(0x11166f27u); f_11166f40();
  /* 11166f27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166f2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11166f2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11166f2f call 0x1115b000 */
  push32(0x11166f34u); f_1115b000();
  /* 11166f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166f37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11166f3a mov esp, ebp */
  ESP = (EBP);
  /* 11166f3c pop ebp */
  EBP = (pop32());
  /* 11166f3d ret  */
  ESPCHK(0x11166f10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11166f40 (198 bytes, 69 insns) */
void f_11166f40(void) {
  FTRACE(0x11166f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11166f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11166f41 mov ebp, esp */
  EBP = (ESP);
  /* 11166f43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11166f46 mov eax, dword ptr [0x1118380c] */
  EAX = (r32((uint32_t)(0x1118380c)));
  /* 11166f4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11166f4e cmp dword ptr [0x11185300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11185300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166f55 jne 0x11166f5e */
  if (!C.zf) goto L_11166f5e;
  /* 11166f57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166f59 jmp 0x11167002 */
  goto L_11167002;
L_11166f5e:;
  /* 11166f5e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166f62 jne 0x11166f86 */
  if (!C.zf) goto L_11166f86;
  /* 11166f64 cmp dword ptr [0x11183814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166f6b je 0x11166f86 */
  if (C.zf) goto L_11166f86;
  /* 11166f6d call 0x11167060 */
  push32(0x11166f72u); f_11167060();
  /* 11166f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11166f74 je 0x11166f7d */
  if (C.zf) goto L_11166f7d;
  /* 11166f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11166f78 jmp 0x11167002 */
  goto L_11167002;
L_11166f7d:;
  /* 11166f7d mov ecx, dword ptr [0x1118380c] */
  ECX = (r32((uint32_t)(0x1118380c)));
  /* 11166f83 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11166f86:;
  /* 11166f86 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166f8a je 0x11167000 */
  if (C.zf) goto L_11167000;
  /* 11166f8c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166f90 je 0x11167000 */
  if (C.zf) goto L_11167000;
  /* 11166f92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166f95 push edx */
  push32((uint32_t)(EDX));
  /* 11166f96 call 0x1115a390 */
  push32(0x11166f9bu); f_1115a390();
  /* 11166f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166f9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11166fa1:;
  /* 11166fa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11166fa4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166fa7 je 0x11167000 */
  if (C.zf) goto L_11167000;
  /* 11166fa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11166fac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11166fae push edx */
  push32((uint32_t)(EDX));
  /* 11166faf call 0x1115a390 */
  push32(0x11166fb4u); f_1115a390();
  /* 11166fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166fb7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166fba jbe 0x11166ff5 */
  if ((C.cf||C.zf)) goto L_11166ff5;
  /* 11166fbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11166fbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11166fc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11166fc4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11166fc8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11166fcb jne 0x11166ff5 */
  if (!C.zf) goto L_11166ff5;
  /* 11166fcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11166fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11166fd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11166fd4 push edx */
  push32((uint32_t)(EDX));
  /* 11166fd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11166fd8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11166fda push ecx */
  push32((uint32_t)(ECX));
  /* 11166fdb call 0x11167010 */
  push32(0x11166fe0u); f_11167010();
  /* 11166fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11166fe3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11166fe5 jne 0x11166ff5 */
  if (!C.zf) goto L_11166ff5;
  /* 11166fe7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11166fea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11166fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11166fef lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11166ff3 jmp 0x11167002 */
  goto L_11167002;
L_11166ff5:;
  /* 11166ff5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11166ff8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11166ffb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11166ffe jmp 0x11166fa1 */
  goto L_11166fa1;
L_11167000:;
  /* 11167000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11167002:;
  /* 11167002 mov esp, ebp */
  ESP = (EBP);
  /* 11167004 pop ebp */
  EBP = (pop32());
  /* 11167005 ret  */
  ESPCHK(0x11166f40u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11167010 (79 bytes, 32 insns) */
void f_11167010(void) {
  FTRACE(0x11167010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11167010 push ebp */
  push32((uint32_t)(EBP));
  /* 11167011 mov ebp, esp */
  EBP = (ESP);
  /* 11167013 push ecx */
  push32((uint32_t)(ECX));
  /* 11167014 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167018 jne 0x1116701e */
  if (!C.zf) goto L_1116701e;
  /* 1116701a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116701c jmp 0x1116705b */
  goto L_1116705b;
L_1116701e:;
  /* 1116701e mov eax, dword ptr [0x11184ec4] */
  EAX = (r32((uint32_t)(0x11184ec4)));
  /* 11167023 push eax */
  push32((uint32_t)(EAX));
  /* 11167024 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11167027 push ecx */
  push32((uint32_t)(ECX));
  /* 11167028 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116702b push edx */
  push32((uint32_t)(EDX));
  /* 1116702c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116702f push eax */
  push32((uint32_t)(EAX));
  /* 11167030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167033 push ecx */
  push32((uint32_t)(ECX));
  /* 11167034 push 1 */
  push32((uint32_t)(0x1u));
  /* 11167036 mov edx, dword ptr [0x11185164] */
  EDX = (r32((uint32_t)(0x11185164)));
  /* 1116703c push edx */
  push32((uint32_t)(EDX));
  /* 1116703d call 0x11167110 */
  push32(0x11167042u); f_11167110();
  /* 11167042 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11167045 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11167048 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116704c jne 0x11167055 */
  if (!C.zf) goto L_11167055;
  /* 1116704e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11167053 jmp 0x1116705b */
  goto L_1116705b;
L_11167055:;
  /* 11167055 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167058 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1116705b:;
  /* 1116705b mov esp, ebp */
  ESP = (EBP);
  /* 1116705d pop ebp */
  EBP = (pop32());
  /* 1116705e ret  */
  ESPCHK(0x11167010u, _esp0);
  ESP += 4; return;
}

/* FUN_10017060 @ 0x11167060 (174 bytes, 66 insns) */
void f_11167060(void) {
  FTRACE(0x11167060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11167060 push ebp */
  push32((uint32_t)(EBP));
  /* 11167061 mov ebp, esp */
  EBP = (ESP);
  /* 11167063 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11167066 mov eax, dword ptr [0x11183814] */
  EAX = (r32((uint32_t)(0x11183814)));
  /* 1116706b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1116706e:;
  /* 1116706e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167071 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167074 je 0x11167108 */
  if (C.zf) goto L_11167108;
  /* 1116707a push 0 */
  push32((uint32_t)(0x0u));
  /* 1116707c push 0 */
  push32((uint32_t)(0x0u));
  /* 1116707e push 0 */
  push32((uint32_t)(0x0u));
  /* 11167080 push 0 */
  push32((uint32_t)(0x0u));
  /* 11167082 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11167084 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167087 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11167089 push eax */
  push32((uint32_t)(EAX));
  /* 1116708a push 0 */
  push32((uint32_t)(0x0u));
  /* 1116708c push 1 */
  push32((uint32_t)(0x1u));
  /* 1116708e call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x11167094u);
  /* 11167094 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11167097 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116709b jne 0x111670a2 */
  if (!C.zf) goto L_111670a2;
  /* 1116709d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111670a0 jmp 0x1116710a */
  goto L_1116710a;
L_111670a2:;
  /* 111670a2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 111670a4 push 0x1117fd7c */
  push32((uint32_t)(0x1117fd7cu));
  /* 111670a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111670ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111670ae push ecx */
  push32((uint32_t)(ECX));
  /* 111670af call 0x11157560 */
  push32(0x111670b4u); f_11157560();
  /* 111670b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111670b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111670ba cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111670be jne 0x111670c5 */
  if (!C.zf) goto L_111670c5;
  /* 111670c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111670c3 jmp 0x1116710a */
  goto L_1116710a;
L_111670c5:;
  /* 111670c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111670c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111670c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111670cc push edx */
  push32((uint32_t)(EDX));
  /* 111670cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111670d0 push eax */
  push32((uint32_t)(EAX));
  /* 111670d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111670d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111670d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111670d8 push edx */
  push32((uint32_t)(EDX));
  /* 111670d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111670db push 1 */
  push32((uint32_t)(0x1u));
  /* 111670dd call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x111670e3u);
  /* 111670e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111670e5 jne 0x111670ec */
  if (!C.zf) goto L_111670ec;
  /* 111670e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111670ea jmp 0x1116710a */
  goto L_1116710a;
L_111670ec:;
  /* 111670ec push 0 */
  push32((uint32_t)(0x0u));
  /* 111670ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111670f1 push eax */
  push32((uint32_t)(EAX));
  /* 111670f2 call 0x11167560 */
  push32(0x111670f7u); f_11167560();
  /* 111670f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111670fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111670fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167100 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11167103 jmp 0x1116706e */
  goto L_1116706e;
L_11167108:;
  /* 11167108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1116710a:;
  /* 1116710a mov esp, ebp */
  ESP = (EBP);
  /* 1116710c pop ebp */
  EBP = (pop32());
  /* 1116710d ret  */
  ESPCHK(0x11167060u, _esp0);
  ESP += 4; return;
}

/* FUN_10017110 @ 0x11167110 (970 bytes, 340 insns) */
void f_11167110(void) {
  FTRACE(0x11167110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11167110 push ebp */
  push32((uint32_t)(EBP));
  /* 11167111 mov ebp, esp */
  EBP = (ESP);
  /* 11167113 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11167115 push 0x1117fdd0 */
  push32((uint32_t)(0x1117fdd0u));
  /* 1116711a push 0x11160668 */
  push32((uint32_t)(0x11160668u));
  /* 1116711f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11167125 push eax */
  push32((uint32_t)(EAX));
  /* 11167126 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1116712d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11167130 push ebx */
  push32((uint32_t)(EBX));
  /* 11167131 push esi */
  push32((uint32_t)(ESI));
  /* 11167132 push edi */
  push32((uint32_t)(EDI));
  /* 11167133 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11167136 cmp dword ptr [0x11183b54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116713d jne 0x11167196 */
  if (!C.zf) goto L_11167196;
  /* 1116713f push 1 */
  push32((uint32_t)(0x1u));
  /* 11167141 push 0x1117f42c */
  push32((uint32_t)(0x1117f42cu));
  /* 11167146 push 1 */
  push32((uint32_t)(0x1u));
  /* 11167148 push 0x1117f42c */
  push32((uint32_t)(0x1117f42cu));
  /* 1116714d push 0 */
  push32((uint32_t)(0x0u));
  /* 1116714f push 0 */
  push32((uint32_t)(0x0u));
  /* 11167151 call dword ptr [0x111862f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862f0))), 0x11167157u);
  /* 11167157 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11167159 je 0x11167167 */
  if (C.zf) goto L_11167167;
  /* 1116715b mov dword ptr [0x11183b54], 1 */
  w32((uint32_t)(0x11183b54), (0x1u));
  /* 11167165 jmp 0x11167196 */
  goto L_11167196;
L_11167167:;
  /* 11167167 push 1 */
  push32((uint32_t)(0x1u));
  /* 11167169 push 0x1117f428 */
  push32((uint32_t)(0x1117f428u));
  /* 1116716e push 1 */
  push32((uint32_t)(0x1u));
  /* 11167170 push 0x1117f428 */
  push32((uint32_t)(0x1117f428u));
  /* 11167175 push 0 */
  push32((uint32_t)(0x0u));
  /* 11167177 push 0 */
  push32((uint32_t)(0x0u));
  /* 11167179 call dword ptr [0x111862f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862f4))), 0x1116717fu);
  /* 1116717f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11167181 je 0x1116718f */
  if (C.zf) goto L_1116718f;
  /* 11167183 mov dword ptr [0x11183b54], 2 */
  w32((uint32_t)(0x11183b54), (0x2u));
  /* 1116718d jmp 0x11167196 */
  goto L_11167196;
L_1116718f:;
  /* 1116718f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11167191 jmp 0x111674f4 */
  goto L_111674f4;
L_11167196:;
  /* 11167196 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116719a jle 0x111671af */
  if ((C.zf||C.sf!=C.of)) goto L_111671af;
  /* 1116719c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1116719f push eax */
  push32((uint32_t)(EAX));
  /* 111671a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111671a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111671a4 call 0x11167510 */
  push32(0x111671a9u); f_11167510();
  /* 111671a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111671ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_111671af:;
  /* 111671af cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111671b3 jle 0x111671c8 */
  if ((C.zf||C.sf!=C.of)) goto L_111671c8;
  /* 111671b5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111671b8 push edx */
  push32((uint32_t)(EDX));
  /* 111671b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111671bc push eax */
  push32((uint32_t)(EAX));
  /* 111671bd call 0x11167510 */
  push32(0x111671c2u); f_11167510();
  /* 111671c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111671c5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_111671c8:;
  /* 111671c8 cmp dword ptr [0x11183b54], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11183b54))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111671cf jne 0x111671f4 */
  if (!C.zf) goto L_111671f4;
  /* 111671d1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111671d4 push ecx */
  push32((uint32_t)(ECX));
  /* 111671d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111671d8 push edx */
  push32((uint32_t)(EDX));
  /* 111671d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111671dc push eax */
  push32((uint32_t)(EAX));
  /* 111671dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111671e0 push ecx */
  push32((uint32_t)(ECX));
  /* 111671e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111671e4 push edx */
  push32((uint32_t)(EDX));
  /* 111671e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111671e8 push eax */
  push32((uint32_t)(EAX));
  /* 111671e9 call dword ptr [0x111862f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862f4))), 0x111671efu);
  /* 111671ef jmp 0x111674f4 */
  goto L_111674f4;
L_111671f4:;
  /* 111671f4 cmp dword ptr [0x11183b54], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11183b54))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111671fb jne 0x111674f2 */
  if (!C.zf) goto L_111674f2;
  /* 11167201 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167205 jne 0x11167210 */
  if (!C.zf) goto L_11167210;
  /* 11167207 mov ecx, dword ptr [0x11183a00] */
  ECX = (r32((uint32_t)(0x11183a00)));
  /* 1116720d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11167210:;
  /* 11167210 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167214 je 0x11167220 */
  if (C.zf) goto L_11167220;
  /* 11167216 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116721a jne 0x1116739c */
  if (!C.zf) goto L_1116739c;
L_11167220:;
  /* 11167220 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11167223 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167226 jne 0x11167232 */
  if (!C.zf) goto L_11167232;
  /* 11167228 mov eax, 2 */
  EAX = (0x2u);
  /* 1116722d jmp 0x111674f4 */
  goto L_111674f4;
L_11167232:;
  /* 11167232 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167236 jle 0x11167242 */
  if ((C.zf||C.sf!=C.of)) goto L_11167242;
  /* 11167238 mov eax, 1 */
  EAX = (0x1u);
  /* 1116723d jmp 0x111674f4 */
  goto L_111674f4;
L_11167242:;
  /* 11167242 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167246 jle 0x11167252 */
  if ((C.zf||C.sf!=C.of)) goto L_11167252;
  /* 11167248 mov eax, 3 */
  EAX = (0x3u);
  /* 1116724d jmp 0x111674f4 */
  goto L_111674f4;
L_11167252:;
  /* 11167252 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11167255 push eax */
  push32((uint32_t)(EAX));
  /* 11167256 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11167259 push ecx */
  push32((uint32_t)(ECX));
  /* 1116725a call dword ptr [0x1118634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118634c))), 0x11167260u);
  /* 11167260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11167262 jne 0x1116726b */
  if (!C.zf) goto L_1116726b;
  /* 11167264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11167266 jmp 0x111674f4 */
  goto L_111674f4;
L_1116726b:;
  /* 1116726b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116726f jne 0x11167277 */
  if (!C.zf) goto L_11167277;
  /* 11167271 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167275 je 0x111672a4 */
  if (C.zf) goto L_111672a4;
L_11167277:;
  /* 11167277 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116727b jne 0x11167283 */
  if (!C.zf) goto L_11167283;
  /* 1116727d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167281 je 0x111672a4 */
  if (C.zf) goto L_111672a4;
L_11167283:;
  /* 11167283 push 0x1117fd90 */
  push32((uint32_t)(0x1117fd90u));
  /* 11167288 push 0 */
  push32((uint32_t)(0x0u));
  /* 1116728a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1116728f push 0x1117fd88 */
  push32((uint32_t)(0x1117fd88u));
  /* 11167294 push 2 */
  push32((uint32_t)(0x2u));
  /* 11167296 call 0x11156620 */
  push32(0x1116729bu); f_11156620();
  /* 1116729b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116729e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111672a1 jne 0x111672a4 */
  if (!C.zf) goto L_111672a4;
  /* 111672a3 int3  */
  x86_unimpl("int3 @ 0x111672a3");
L_111672a4:;
  /* 111672a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111672a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111672a8 jne 0x1116726b */
  if (!C.zf) goto L_1116726b;
  /* 111672aa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111672ae jle 0x11167323 */
  if ((C.zf||C.sf!=C.of)) goto L_11167323;
  /* 111672b0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111672b4 jae 0x111672c0 */
  if (!C.cf) goto L_111672c0;
  /* 111672b6 mov eax, 3 */
  EAX = (0x3u);
  /* 111672bb jmp 0x111674f4 */
  goto L_111674f4;
L_111672c0:;
  /* 111672c0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 111672c3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 111672c6 jmp 0x111672d1 */
  goto L_111672d1;
L_111672c8:;
  /* 111672c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 111672cb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111672ce mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_111672d1:;
  /* 111672d1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 111672d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111672d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111672d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111672da je 0x11167319 */
  if (C.zf) goto L_11167319;
  /* 111672dc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 111672df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111672e1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 111672e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111672e6 je 0x11167319 */
  if (C.zf) goto L_11167319;
  /* 111672e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111672eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111672ed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111672ef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 111672f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111672f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111672f6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111672f8 jl 0x11167317 */
  if ((C.sf!=C.of)) goto L_11167317;
  /* 111672fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111672fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111672ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11167301 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11167304 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11167306 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11167309 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116730b jg 0x11167317 */
  if ((!C.zf&&C.sf==C.of)) goto L_11167317;
  /* 1116730d mov eax, 2 */
  EAX = (0x2u);
  /* 11167312 jmp 0x111674f4 */
  goto L_111674f4;
L_11167317:;
  /* 11167317 jmp 0x111672c8 */
  goto L_111672c8;
L_11167319:;
  /* 11167319 mov eax, 3 */
  EAX = (0x3u);
  /* 1116731e jmp 0x111674f4 */
  goto L_111674f4;
L_11167323:;
  /* 11167323 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167327 jle 0x1116739c */
  if ((C.zf||C.sf!=C.of)) goto L_1116739c;
  /* 11167329 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116732d jae 0x11167339 */
  if (!C.cf) goto L_11167339;
  /* 1116732f mov eax, 1 */
  EAX = (0x1u);
  /* 11167334 jmp 0x111674f4 */
  goto L_111674f4;
L_11167339:;
  /* 11167339 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1116733c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1116733f jmp 0x1116734a */
  goto L_1116734a;
L_11167341:;
  /* 11167341 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11167344 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167347 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1116734a:;
  /* 1116734a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1116734d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1116734f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11167351 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11167353 je 0x11167392 */
  if (C.zf) goto L_11167392;
  /* 11167355 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11167358 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1116735a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1116735d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1116735f je 0x11167392 */
  if (C.zf) goto L_11167392;
  /* 11167361 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11167364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11167366 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11167368 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1116736b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1116736d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1116736f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167371 jl 0x11167390 */
  if ((C.sf!=C.of)) goto L_11167390;
  /* 11167373 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11167376 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11167378 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1116737a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1116737d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116737f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11167382 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167384 jg 0x11167390 */
  if ((!C.zf&&C.sf==C.of)) goto L_11167390;
  /* 11167386 mov eax, 2 */
  EAX = (0x2u);
  /* 1116738b jmp 0x111674f4 */
  goto L_111674f4;
L_11167390:;
  /* 11167390 jmp 0x11167341 */
  goto L_11167341;
L_11167392:;
  /* 11167392 mov eax, 1 */
  EAX = (0x1u);
  /* 11167397 jmp 0x111674f4 */
  goto L_111674f4;
L_1116739c:;
  /* 1116739c push 0 */
  push32((uint32_t)(0x0u));
  /* 1116739e push 0 */
  push32((uint32_t)(0x0u));
  /* 111673a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111673a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111673a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111673a7 push edx */
  push32((uint32_t)(EDX));
  /* 111673a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 111673aa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 111673ad push eax */
  push32((uint32_t)(EAX));
  /* 111673ae call dword ptr [0x11186340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186340))), 0x111673b4u);
  /* 111673b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111673b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111673bb jne 0x111673c4 */
  if (!C.zf) goto L_111673c4;
  /* 111673bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111673bf jmp 0x111674f4 */
  goto L_111674f4;
L_111673c4:;
  /* 111673c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111673cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111673ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111673d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111673d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111673d5 call 0x1115a700 */
  push32(0x111673dau); f_1115a700();
  /* 111673da mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 111673dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111673e0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 111673e3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 111673e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 111673ed jmp 0x11167406 */
  goto L_11167406;
  /* 111673ef mov eax, 1 */
  EAX = (0x1u);
  /* 111673f4 ret  */
  ESPCHK(0x11167110u, _esp0);
  ESP += 4; return;
  /* 111673f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111673f8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111673ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11167406:;
  /* 11167406 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116740a jne 0x11167413 */
  if (!C.zf) goto L_11167413;
  /* 1116740c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116740e jmp 0x111674f4 */
  goto L_111674f4;
L_11167413:;
  /* 11167413 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11167416 push edx */
  push32((uint32_t)(EDX));
  /* 11167417 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1116741a push eax */
  push32((uint32_t)(EAX));
  /* 1116741b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1116741e push ecx */
  push32((uint32_t)(ECX));
  /* 1116741f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11167422 push edx */
  push32((uint32_t)(EDX));
  /* 11167423 push 1 */
  push32((uint32_t)(0x1u));
  /* 11167425 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11167428 push eax */
  push32((uint32_t)(EAX));
  /* 11167429 call dword ptr [0x11186340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186340))), 0x1116742fu);
  /* 1116742f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11167431 jne 0x1116743a */
  if (!C.zf) goto L_1116743a;
  /* 11167433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11167435 jmp 0x111674f4 */
  goto L_111674f4;
L_1116743a:;
  /* 1116743a push 0 */
  push32((uint32_t)(0x0u));
  /* 1116743c push 0 */
  push32((uint32_t)(0x0u));
  /* 1116743e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11167441 push ecx */
  push32((uint32_t)(ECX));
  /* 11167442 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11167445 push edx */
  push32((uint32_t)(EDX));
  /* 11167446 push 9 */
  push32((uint32_t)(0x9u));
  /* 11167448 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1116744b push eax */
  push32((uint32_t)(EAX));
  /* 1116744c call dword ptr [0x11186340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186340))), 0x11167452u);
  /* 11167452 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11167455 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167459 jne 0x11167462 */
  if (!C.zf) goto L_11167462;
  /* 1116745b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116745d jmp 0x111674f4 */
  goto L_111674f4;
L_11167462:;
  /* 11167462 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11167469 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1116746c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1116746e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167471 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11167473 call 0x1115a700 */
  push32(0x11167478u); f_1115a700();
  /* 11167478 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1116747b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1116747e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11167481 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11167484 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1116748b jmp 0x111674a4 */
  goto L_111674a4;
  /* 1116748d mov eax, 1 */
  EAX = (0x1u);
  /* 11167492 ret  */
  ESPCHK(0x11167110u, _esp0);
  ESP += 4; return;
  /* 11167493 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11167496 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1116749d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_111674a4:;
  /* 111674a4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111674a8 jne 0x111674ae */
  if (!C.zf) goto L_111674ae;
  /* 111674aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111674ac jmp 0x111674f4 */
  goto L_111674f4;
L_111674ae:;
  /* 111674ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 111674b1 push edx */
  push32((uint32_t)(EDX));
  /* 111674b2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111674b5 push eax */
  push32((uint32_t)(EAX));
  /* 111674b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111674b9 push ecx */
  push32((uint32_t)(ECX));
  /* 111674ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111674bd push edx */
  push32((uint32_t)(EDX));
  /* 111674be push 1 */
  push32((uint32_t)(0x1u));
  /* 111674c0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 111674c3 push eax */
  push32((uint32_t)(EAX));
  /* 111674c4 call dword ptr [0x11186340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186340))), 0x111674cau);
  /* 111674ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111674cc jne 0x111674d2 */
  if (!C.zf) goto L_111674d2;
  /* 111674ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111674d0 jmp 0x111674f4 */
  goto L_111674f4;
L_111674d2:;
  /* 111674d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111674d5 push ecx */
  push32((uint32_t)(ECX));
  /* 111674d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111674d9 push edx */
  push32((uint32_t)(EDX));
  /* 111674da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111674dd push eax */
  push32((uint32_t)(EAX));
  /* 111674de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111674e1 push ecx */
  push32((uint32_t)(ECX));
  /* 111674e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111674e5 push edx */
  push32((uint32_t)(EDX));
  /* 111674e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111674e9 push eax */
  push32((uint32_t)(EAX));
  /* 111674ea call dword ptr [0x111862f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862f0))), 0x111674f0u);
  /* 111674f0 jmp 0x111674f4 */
  goto L_111674f4;
L_111674f2:;
  /* 111674f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111674f4:;
  /* 111674f4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 111674f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111674fa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11167501 pop edi */
  EDI = (pop32());
  /* 11167502 pop esi */
  ESI = (pop32());
  /* 11167503 pop ebx */
  EBX = (pop32());
  /* 11167504 mov esp, ebp */
  ESP = (EBP);
  /* 11167506 pop ebp */
  EBP = (pop32());
  /* 11167507 ret  */
  ESPCHK(0x11167110u, _esp0);
  ESP += 4; return;
}

/* FUN_10017510 @ 0x11167510 (80 bytes, 32 insns) */
void f_11167510(void) {
  FTRACE(0x11167510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11167510 push ebp */
  push32((uint32_t)(EBP));
  /* 11167511 mov ebp, esp */
  EBP = (ESP);
  /* 11167513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11167516 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11167519 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1116751c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116751f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11167522:;
  /* 11167522 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11167525 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11167528 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116752b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1116752e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11167530 je 0x11167547 */
  if (C.zf) goto L_11167547;
  /* 11167532 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167535 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11167538 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1116753a je 0x11167547 */
  if (C.zf) goto L_11167547;
  /* 1116753c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116753f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11167545 jmp 0x11167522 */
  goto L_11167522;
L_11167547:;
  /* 11167547 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116754a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1116754d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1116754f jne 0x11167559 */
  if (!C.zf) goto L_11167559;
  /* 11167551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167554 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11167557 jmp 0x1116755c */
  goto L_1116755c;
L_11167559:;
  /* 11167559 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1116755c:;
  /* 1116755c mov esp, ebp */
  ESP = (EBP);
  /* 1116755e pop ebp */
  EBP = (pop32());
  /* 1116755f ret  */
  ESPCHK(0x11167510u, _esp0);
  ESP += 4; return;
}

/* FUN_10017560 @ 0x11167560 (736 bytes, 224 insns) */
void f_11167560(void) {
  FTRACE(0x11167560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11167560 push ebp */
  push32((uint32_t)(EBP));
  /* 11167561 mov ebp, esp */
  EBP = (ESP);
  /* 11167563 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11167566 push esi */
  push32((uint32_t)(ESI));
  /* 11167567 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116756b je 0x1116758c */
  if (C.zf) goto L_1116758c;
  /* 1116756d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1116756f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167572 push eax */
  push32((uint32_t)(EAX));
  /* 11167573 call 0x111679b0 */
  push32(0x11167578u); f_111679b0();
  /* 11167578 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116757b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1116757e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167582 je 0x1116758c */
  if (C.zf) goto L_1116758c;
  /* 11167584 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167587 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116758a jne 0x11167594 */
  if (!C.zf) goto L_11167594;
L_1116758c:;
  /* 1116758c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1116758f jmp 0x1116783b */
  goto L_1116783b;
L_11167594:;
  /* 11167594 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11167597 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1116759b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1116759d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116759f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111675a0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111675a3 mov ecx, dword ptr [0x1118380c] */
  ECX = (r32((uint32_t)(0x1118380c)));
  /* 111675a9 cmp ecx, dword ptr [0x11183810] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11183810))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111675af jne 0x111675c5 */
  if (!C.zf) goto L_111675c5;
  /* 111675b1 mov edx, dword ptr [0x1118380c] */
  EDX = (r32((uint32_t)(0x1118380c)));
  /* 111675b7 push edx */
  push32((uint32_t)(EDX));
  /* 111675b8 call 0x111678c0 */
  push32(0x111675bdu); f_111678c0();
  /* 111675bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111675c0 mov dword ptr [0x1118380c], eax */
  w32((uint32_t)(0x1118380c), (EAX));
L_111675c5:;
  /* 111675c5 cmp dword ptr [0x1118380c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118380c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111675cc jne 0x11167685 */
  if (!C.zf) goto L_11167685;
  /* 111675d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111675d6 je 0x111675f7 */
  if (C.zf) goto L_111675f7;
  /* 111675d8 cmp dword ptr [0x11183814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111675df je 0x111675f7 */
  if (C.zf) goto L_111675f7;
  /* 111675e1 call 0x11167060 */
  push32(0x111675e6u); f_11167060();
  /* 111675e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111675e8 je 0x111675f2 */
  if (C.zf) goto L_111675f2;
  /* 111675ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111675ed jmp 0x1116783b */
  goto L_1116783b;
L_111675f2:;
  /* 111675f2 jmp 0x11167685 */
  goto L_11167685;
L_111675f7:;
  /* 111675f7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111675fb je 0x11167604 */
  if (C.zf) goto L_11167604;
  /* 111675fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111675ff jmp 0x1116783b */
  goto L_1116783b;
L_11167604:;
  /* 11167604 cmp dword ptr [0x1118380c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118380c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116760b jne 0x11167644 */
  if (!C.zf) goto L_11167644;
  /* 1116760d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11167612 push 0x1117fde8 */
  push32((uint32_t)(0x1117fde8u));
  /* 11167617 push 2 */
  push32((uint32_t)(0x2u));
  /* 11167619 push 4 */
  push32((uint32_t)(0x4u));
  /* 1116761b call 0x11157560 */
  push32(0x11167620u); f_11157560();
  /* 11167620 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11167623 mov dword ptr [0x1118380c], eax */
  w32((uint32_t)(0x1118380c), (EAX));
  /* 11167628 cmp dword ptr [0x1118380c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118380c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116762f jne 0x11167639 */
  if (!C.zf) goto L_11167639;
  /* 11167631 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11167634 jmp 0x1116783b */
  goto L_1116783b;
L_11167639:;
  /* 11167639 mov eax, dword ptr [0x1118380c] */
  EAX = (r32((uint32_t)(0x1118380c)));
  /* 1116763e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11167644:;
  /* 11167644 cmp dword ptr [0x11183814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116764b jne 0x11167685 */
  if (!C.zf) goto L_11167685;
  /* 1116764d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11167652 push 0x1117fde8 */
  push32((uint32_t)(0x1117fde8u));
  /* 11167657 push 2 */
  push32((uint32_t)(0x2u));
  /* 11167659 push 4 */
  push32((uint32_t)(0x4u));
  /* 1116765b call 0x11157560 */
  push32(0x11167660u); f_11157560();
  /* 11167660 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11167663 mov dword ptr [0x11183814], eax */
  w32((uint32_t)(0x11183814), (EAX));
  /* 11167668 cmp dword ptr [0x11183814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116766f jne 0x11167679 */
  if (!C.zf) goto L_11167679;
  /* 11167671 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11167674 jmp 0x1116783b */
  goto L_1116783b;
L_11167679:;
  /* 11167679 mov ecx, dword ptr [0x11183814] */
  ECX = (r32((uint32_t)(0x11183814)));
  /* 1116767f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11167685:;
  /* 11167685 mov edx, dword ptr [0x1118380c] */
  EDX = (r32((uint32_t)(0x1118380c)));
  /* 1116768b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1116768e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11167691 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11167694 push eax */
  push32((uint32_t)(EAX));
  /* 11167695 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167698 push ecx */
  push32((uint32_t)(ECX));
  /* 11167699 call 0x11167840 */
  push32(0x1116769eu); f_11167840();
  /* 1116769e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111676a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111676a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111676a8 jl 0x11167741 */
  if ((C.sf!=C.of)) goto L_11167741;
  /* 111676ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111676b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111676b4 je 0x11167741 */
  if (C.zf) goto L_11167741;
  /* 111676ba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111676be je 0x11167733 */
  if (C.zf) goto L_11167733;
  /* 111676c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111676c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111676c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111676c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 111676cb push edx */
  push32((uint32_t)(EDX));
  /* 111676cc call 0x11157ff0 */
  push32(0x111676d1u); f_11157ff0();
  /* 111676d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111676d4 jmp 0x111676df */
  goto L_111676df;
L_111676d6:;
  /* 111676d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111676d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111676dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111676df:;
  /* 111676df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111676e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111676e5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111676e9 je 0x11167700 */
  if (C.zf) goto L_11167700;
  /* 111676eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111676ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111676f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111676f4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 111676f7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 111676fb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 111676fe jmp 0x111676d6 */
  goto L_111676d6;
L_11167700:;
  /* 11167700 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11167705 push 0x1117fde8 */
  push32((uint32_t)(0x1117fde8u));
  /* 1116770a push 2 */
  push32((uint32_t)(0x2u));
  /* 1116770c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116770f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11167712 push eax */
  push32((uint32_t)(EAX));
  /* 11167713 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11167716 push ecx */
  push32((uint32_t)(ECX));
  /* 11167717 call 0x111579f0 */
  push32(0x1116771cu); f_111579f0();
  /* 1116771c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116771f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11167722 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167726 je 0x11167731 */
  if (C.zf) goto L_11167731;
  /* 11167728 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116772b mov dword ptr [0x1118380c], edx */
  w32((uint32_t)(0x1118380c), (EDX));
L_11167731:;
  /* 11167731 jmp 0x1116773f */
  goto L_1116773f;
L_11167733:;
  /* 11167733 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11167736 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11167739 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116773c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1116773f:;
  /* 1116773f jmp 0x111677b4 */
  goto L_111677b4;
L_11167741:;
  /* 11167741 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167745 jne 0x111677ad */
  if (!C.zf) goto L_111677ad;
  /* 11167747 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116774b jge 0x11167755 */
  if ((C.sf==C.of)) goto L_11167755;
  /* 1116774d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11167750 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11167752 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11167755:;
  /* 11167755 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1116775a push 0x1117fde8 */
  push32((uint32_t)(0x1117fde8u));
  /* 1116775f push 2 */
  push32((uint32_t)(0x2u));
  /* 11167761 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11167764 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1116776b push edx */
  push32((uint32_t)(EDX));
  /* 1116776c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116776f push eax */
  push32((uint32_t)(EAX));
  /* 11167770 call 0x111579f0 */
  push32(0x11167775u); f_111579f0();
  /* 11167775 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11167778 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1116777b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116777f jne 0x11167789 */
  if (!C.zf) goto L_11167789;
  /* 11167781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11167784 jmp 0x1116783b */
  goto L_1116783b;
L_11167789:;
  /* 11167789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116778c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116778f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167792 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11167795 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11167798 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116779b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 111677a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111677a6 mov dword ptr [0x1118380c], eax */
  w32((uint32_t)(0x1118380c), (EAX));
  /* 111677ab jmp 0x111677b4 */
  goto L_111677b4;
L_111677ad:;
  /* 111677ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111677af jmp 0x1116783b */
  goto L_1116783b;
L_111677b4:;
  /* 111677b4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111677b8 je 0x11167839 */
  if (C.zf) goto L_11167839;
  /* 111677ba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 111677bf push 0x1117fde8 */
  push32((uint32_t)(0x1117fde8u));
  /* 111677c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111677c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111677c9 push ecx */
  push32((uint32_t)(ECX));
  /* 111677ca call 0x1115a390 */
  push32(0x111677cfu); f_1115a390();
  /* 111677cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111677d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111677d5 push eax */
  push32((uint32_t)(EAX));
  /* 111677d6 call 0x11157560 */
  push32(0x111677dbu); f_11157560();
  /* 111677db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111677de mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111677e1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111677e5 je 0x11167839 */
  if (C.zf) goto L_11167839;
  /* 111677e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111677ea push edx */
  push32((uint32_t)(EDX));
  /* 111677eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111677ee push eax */
  push32((uint32_t)(EAX));
  /* 111677ef call 0x1115a510 */
  push32(0x111677f4u); f_1115a510();
  /* 111677f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111677f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111677fa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111677fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11167800 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167802 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11167805 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167808 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1116780b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116780e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167811 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11167814 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11167817 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11167819 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116781b not edx */
  EDX = (~(EDX));
  /* 1116781d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11167820 push edx */
  push32((uint32_t)(EDX));
  /* 11167821 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11167824 push eax */
  push32((uint32_t)(EAX));
  /* 11167825 call dword ptr [0x111862ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862ec))), 0x1116782bu);
  /* 1116782b push 2 */
  push32((uint32_t)(0x2u));
  /* 1116782d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11167830 push ecx */
  push32((uint32_t)(ECX));
  /* 11167831 call 0x11157ff0 */
  push32(0x11167836u); f_11157ff0();
  /* 11167836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11167839:;
  /* 11167839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1116783b:;
  /* 1116783b pop esi */
  ESI = (pop32());
  /* 1116783c mov esp, ebp */
  ESP = (EBP);
  /* 1116783e pop ebp */
  EBP = (pop32());
  /* 1116783f ret  */
  ESPCHK(0x11167560u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11167840 (124 bytes, 47 insns) */
void f_11167840(void) {
  FTRACE(0x11167840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11167840 push ebp */
  push32((uint32_t)(EBP));
  /* 11167841 mov ebp, esp */
  EBP = (ESP);
  /* 11167843 push ecx */
  push32((uint32_t)(ECX));
  /* 11167844 mov eax, dword ptr [0x1118380c] */
  EAX = (r32((uint32_t)(0x1118380c)));
  /* 11167849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1116784c jmp 0x11167857 */
  goto L_11167857;
L_1116784e:;
  /* 1116784e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167851 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167854 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11167857:;
  /* 11167857 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116785a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116785d je 0x111678aa */
  if (C.zf) goto L_111678aa;
  /* 1116785f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11167862 push eax */
  push32((uint32_t)(EAX));
  /* 11167863 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167866 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11167868 push edx */
  push32((uint32_t)(EDX));
  /* 11167869 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116786c push eax */
  push32((uint32_t)(EAX));
  /* 1116786d call 0x11167010 */
  push32(0x11167872u); f_11167010();
  /* 11167872 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11167875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11167877 jne 0x111678a8 */
  if (!C.zf) goto L_111678a8;
  /* 11167879 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116787c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1116787e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11167881 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11167885 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167888 je 0x1116789a */
  if (C.zf) goto L_1116789a;
  /* 1116788a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116788d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1116788f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11167892 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11167896 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11167898 jne 0x111678a8 */
  if (!C.zf) goto L_111678a8;
L_1116789a:;
  /* 1116789a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116789d sub eax, dword ptr [0x1118380c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1118380c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111678a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 111678a6 jmp 0x111678b8 */
  goto L_111678b8;
L_111678a8:;
  /* 111678a8 jmp 0x1116784e */
  goto L_1116784e;
L_111678aa:;
  /* 111678aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111678ad sub eax, dword ptr [0x1118380c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1118380c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111678b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 111678b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_111678b8:;
  /* 111678b8 mov esp, ebp */
  ESP = (EBP);
  /* 111678ba pop ebp */
  EBP = (pop32());
  /* 111678bb ret  */
  ESPCHK(0x11167840u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x111678c0 (238 bytes, 80 insns) */
void f_111678c0(void) {
  FTRACE(0x111678c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111678c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111678c1 mov ebp, esp */
  EBP = (ESP);
  /* 111678c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111678c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111678cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111678d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111678d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111678d7 jne 0x111678e0 */
  if (!C.zf) goto L_111678e0;
  /* 111678d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111678db jmp 0x111679aa */
  goto L_111679aa;
L_111678e0:;
  /* 111678e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111678e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111678e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111678e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111678eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111678ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111678f0 je 0x111678fd */
  if (C.zf) goto L_111678fd;
  /* 111678f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111678f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111678f8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111678fb jmp 0x111678e0 */
  goto L_111678e0;
L_111678fd:;
  /* 111678fd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11167902 push 0x1117fde8 */
  push32((uint32_t)(0x1117fde8u));
  /* 11167907 push 2 */
  push32((uint32_t)(0x2u));
  /* 11167909 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1116790c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11167913 push eax */
  push32((uint32_t)(EAX));
  /* 11167914 call 0x11157560 */
  push32(0x11167919u); f_11157560();
  /* 11167919 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116791c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1116791f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11167922 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11167925 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167929 jne 0x11167935 */
  if (!C.zf) goto L_11167935;
  /* 1116792b push 9 */
  push32((uint32_t)(0x9u));
  /* 1116792d call 0x111564d0 */
  push32(0x11167932u); f_111564d0();
  /* 11167932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11167935:;
  /* 11167935 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167938 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1116793b:;
  /* 1116793b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116793e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167941 je 0x1116799e */
  if (C.zf) goto L_1116799e;
  /* 11167943 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11167948 push 0x1117fde8 */
  push32((uint32_t)(0x1117fde8u));
  /* 1116794d push 2 */
  push32((uint32_t)(0x2u));
  /* 1116794f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11167952 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11167954 push edx */
  push32((uint32_t)(EDX));
  /* 11167955 call 0x1115a390 */
  push32(0x1116795au); f_1115a390();
  /* 1116795a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116795d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167960 push eax */
  push32((uint32_t)(EAX));
  /* 11167961 call 0x11157560 */
  push32(0x11167966u); f_11157560();
  /* 11167966 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11167969 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116796c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1116796e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11167971 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167974 je 0x1116798a */
  if (C.zf) goto L_1116798a;
  /* 11167976 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11167979 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1116797b push ecx */
  push32((uint32_t)(ECX));
  /* 1116797c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116797f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11167981 push eax */
  push32((uint32_t)(EAX));
  /* 11167982 call 0x1115a510 */
  push32(0x11167987u); f_1115a510();
  /* 11167987 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1116798a:;
  /* 1116798a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116798d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167990 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11167993 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11167996 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167999 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1116799c jmp 0x1116793b */
  goto L_1116793b;
L_1116799e:;
  /* 1116799e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111679a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111679a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111679aa:;
  /* 111679aa mov esp, ebp */
  ESP = (EBP);
  /* 111679ac pop ebp */
  EBP = (pop32());
  /* 111679ad ret  */
  ESPCHK(0x111678c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100179b0 @ 0x111679b0 (237 bytes, 81 insns) */
void f_111679b0(void) {
  FTRACE(0x111679b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111679b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111679b1 mov ebp, esp */
  EBP = (ESP);
  /* 111679b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111679b4 cmp dword ptr [0x11184f4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11184f4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111679bb jne 0x111679d2 */
  if (!C.zf) goto L_111679d2;
  /* 111679bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111679c0 push eax */
  push32((uint32_t)(EAX));
  /* 111679c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111679c4 push ecx */
  push32((uint32_t)(ECX));
  /* 111679c5 call 0x11167ab0 */
  push32(0x111679cau); f_11167ab0();
  /* 111679ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111679cd jmp 0x11167a99 */
  goto L_11167a99;
L_111679d2:;
  /* 111679d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111679d4 call 0x1115af60 */
  push32(0x111679d9u); f_1115af60();
  /* 111679d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111679dc jmp 0x111679e7 */
  goto L_111679e7;
L_111679de:;
  /* 111679de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111679e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111679e4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_111679e7:;
  /* 111679e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111679ea movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 111679ee mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 111679f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111679f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111679fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111679fd je 0x11167a7b */
  if (C.zf) goto L_11167a7b;
  /* 111679ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167a02 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11167a07 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11167a09 mov cl, byte ptr [eax + 0x11185061] */
  CL = (r8((uint32_t)(EAX + 0x11185061)));
  /* 11167a0f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11167a12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11167a14 je 0x11167a66 */
  if (C.zf) goto L_11167a66;
  /* 11167a16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167a19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167a1c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11167a1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167a22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11167a24 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11167a26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11167a28 jne 0x11167a38 */
  if (!C.zf) goto L_11167a38;
  /* 11167a2a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11167a2c call 0x1115b000 */
  push32(0x11167a31u); f_1115b000();
  /* 11167a31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11167a34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11167a36 jmp 0x11167a99 */
  goto L_11167a99;
L_11167a38:;
  /* 11167a38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167a3b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11167a41 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11167a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167a47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11167a49 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11167a4b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11167a4d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167a50 jne 0x11167a64 */
  if (!C.zf) goto L_11167a64;
  /* 11167a52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11167a54 call 0x1115b000 */
  push32(0x11167a59u); f_1115b000();
  /* 11167a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11167a5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167a5f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11167a62 jmp 0x11167a99 */
  goto L_11167a99;
L_11167a64:;
  /* 11167a64 jmp 0x11167a76 */
  goto L_11167a76;
L_11167a66:;
  /* 11167a66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167a69 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11167a6f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167a72 jne 0x11167a76 */
  if (!C.zf) goto L_11167a76;
  /* 11167a74 jmp 0x11167a7b */
  goto L_11167a7b;
L_11167a76:;
  /* 11167a76 jmp 0x111679de */
  goto L_111679de;
L_11167a7b:;
  /* 11167a7b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11167a7d call 0x1115b000 */
  push32(0x11167a82u); f_1115b000();
  /* 11167a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11167a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11167a88 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11167a8d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11167a90 jne 0x11167a97 */
  if (!C.zf) goto L_11167a97;
  /* 11167a92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11167a95 jmp 0x11167a99 */
  goto L_11167a99;
L_11167a97:;
  /* 11167a97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11167a99:;
  /* 11167a99 mov esp, ebp */
  ESP = (EBP);
  /* 11167a9b pop ebp */
  EBP = (pop32());
  /* 11167a9c ret  */
  ESPCHK(0x111679b0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11167ab0 (193 bytes, 87 insns) */
void f_11167ab0(void) {
  FTRACE(0x11167ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11167ab0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11167ab2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11167ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 11167ab7 mov ebx, eax */
  EBX = (EAX);
  /* 11167ab9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11167abc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11167ac0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11167ac6 je 0x11167adb */
  if (C.zf) goto L_11167adb;
L_11167ac8:;
  /* 11167ac8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11167aca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11167acb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11167acd je 0x11167aa0 */
  if (C.zf) { jmp_ind(0x11167aa0u); return; }
  /* 11167acf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11167ad1 je 0x11167b24 */
  if (C.zf) goto L_11167b24;
  /* 11167ad3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11167ad9 jne 0x11167ac8 */
  if (!C.zf) goto L_11167ac8;
L_11167adb:;
  /* 11167adb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11167add push edi */
  push32((uint32_t)(EDI));
  /* 11167ade mov eax, ebx */
  EAX = (EBX);
  /* 11167ae0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11167ae3 push esi */
  push32((uint32_t)(ESI));
  /* 11167ae4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11167ae6:;
  /* 11167ae6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11167ae8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11167aed mov eax, ecx */
  EAX = (ECX);
  /* 11167aef mov esi, edi */
  ESI = (EDI);
  /* 11167af1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11167af3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11167af5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11167af7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11167afa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11167afd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11167aff xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11167b01 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11167b04 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11167b0a jne 0x11167b28 */
  if (!C.zf) goto L_11167b28;
  /* 11167b0c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11167b11 je 0x11167ae6 */
  if (C.zf) goto L_11167ae6;
  /* 11167b13 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11167b18 jne 0x11167b22 */
  if (!C.zf) goto L_11167b22;
  /* 11167b1a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11167b20 jne 0x11167ae6 */
  if (!C.zf) goto L_11167ae6;
L_11167b22:;
  /* 11167b22 pop esi */
  ESI = (pop32());
  /* 11167b23 pop edi */
  EDI = (pop32());
L_11167b24:;
  /* 11167b24 pop ebx */
  EBX = (pop32());
  /* 11167b25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11167b27 ret  */
  ESPCHK(0x11167ab0u, _esp0);
  ESP += 4; return;
L_11167b28:;
  /* 11167b28 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11167b2b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11167b2d je 0x11167b65 */
  if (C.zf) goto L_11167b65;
  /* 11167b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11167b31 je 0x11167b22 */
  if (C.zf) goto L_11167b22;
  /* 11167b33 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11167b35 je 0x11167b5e */
  if (C.zf) goto L_11167b5e;
  /* 11167b37 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11167b39 je 0x11167b22 */
  if (C.zf) goto L_11167b22;
  /* 11167b3b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11167b3e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11167b40 je 0x11167b57 */
  if (C.zf) goto L_11167b57;
  /* 11167b42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11167b44 je 0x11167b22 */
  if (C.zf) goto L_11167b22;
  /* 11167b46 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11167b48 je 0x11167b50 */
  if (C.zf) goto L_11167b50;
  /* 11167b4a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11167b4c je 0x11167b22 */
  if (C.zf) goto L_11167b22;
  /* 11167b4e jmp 0x11167ae6 */
  goto L_11167ae6;
L_11167b50:;
  /* 11167b50 pop esi */
  ESI = (pop32());
  /* 11167b51 pop edi */
  EDI = (pop32());
  /* 11167b52 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11167b55 pop ebx */
  EBX = (pop32());
  /* 11167b56 ret  */
  ESPCHK(0x11167ab0u, _esp0);
  ESP += 4; return;
L_11167b57:;
  /* 11167b57 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11167b5a pop esi */
  ESI = (pop32());
  /* 11167b5b pop edi */
  EDI = (pop32());
  /* 11167b5c pop ebx */
  EBX = (pop32());
  /* 11167b5d ret  */
  ESPCHK(0x11167ab0u, _esp0);
  ESP += 4; return;
L_11167b5e:;
  /* 11167b5e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11167b61 pop esi */
  ESI = (pop32());
  /* 11167b62 pop edi */
  EDI = (pop32());
  /* 11167b63 pop ebx */
  EBX = (pop32());
  /* 11167b64 ret  */
  ESPCHK(0x11167ab0u, _esp0);
  ESP += 4; return;
L_11167b65:;
  /* 11167b65 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11167b68 pop esi */
  ESI = (pop32());
  /* 11167b69 pop edi */
  EDI = (pop32());
  /* 11167b6a pop ebx */
  EBX = (pop32());
  /* 11167b6b ret  */
  ESPCHK(0x11167ab0u, _esp0);
  ESP += 4; return;
  /* 11167b6c jmp dword ptr [0x111863b4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x111863b4)))); return;
}

/* RtlUnwind @ 0x11167cbc (6 bytes, 1 insns) */
void f_11167cbc(void) {
  FTRACE(0x11167cbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11167cbc jmp dword ptr [0x11186328] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11186328)))); return;
}

