#include "recomp.h"

/* FUN_1000f9d0 @ 0x10cdf9d0 (393 bytes, 123 insns) */
void f_10cdf9d0(void) {
  FTRACE(0x10cdf9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdf9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdf9d1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdf9d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdf9d6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf9da jne 0x10cdf9e6 */
  if (!C.zf) goto L_10cdf9e6;
  /* 10cdf9dc mov eax, dword ptr [0x10cfdc98] */
  EAX = (r32((uint32_t)(0x10cfdc98)));
  /* 10cdf9e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cdf9e4 jmp 0x10cdf9ec */
  goto L_10cdf9ec;
L_10cdf9e6:;
  /* 10cdf9e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdf9e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10cdf9ec:;
  /* 10cdf9ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf9ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cdf9f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdf9f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cdf9f8 push 0x10cfe78c */
  push32((uint32_t)(0x10cfe78cu));
  /* 10cdf9fd call dword ptr [0x10d00244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00244))), 0x10cdfa03u);
  /* 10cdfa03 cmp dword ptr [0x10cfe77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfa0a je 0x10cdfa2a */
  if (C.zf) goto L_10cdfa2a;
  /* 10cdfa0c push 0x10cfe78c */
  push32((uint32_t)(0x10cfe78cu));
  /* 10cdfa11 call dword ptr [0x10d00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00234))), 0x10cdfa17u);
  /* 10cdfa17 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10cdfa19 call 0x10cd6090 */
  push32(0x10cdfa1eu); f_10cd6090();
  /* 10cdfa1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfa21 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10cdfa28 jmp 0x10cdfa31 */
  goto L_10cdfa31;
L_10cdfa2a:;
  /* 10cdfa2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10cdfa31:;
  /* 10cdfa31 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfa35 jbe 0x10cdfb22 */
  if ((C.cf||C.zf)) goto L_10cdfb22;
  /* 10cdfa3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfa3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cdfa40 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10cdfa43 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cdfa47 je 0x10cdfa51 */
  if (C.zf) goto L_10cdfa51;
  /* 10cdfa49 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cdfa4d je 0x10cdfa56 */
  if (C.zf) goto L_10cdfa56;
  /* 10cdfa4f jmp 0x10cdfab0 */
  goto L_10cdfab0;
L_10cdfa51:;
  /* 10cdfa51 jmp 0x10cdfb22 */
  goto L_10cdfb22;
L_10cdfa56:;
  /* 10cdfa56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfa59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfa5c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10cdfa5f mov dword ptr [0x10cfe768], 0 */
  w32((uint32_t)(0x10cfe768), (0x0u));
  /* 10cdfa69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfa6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cdfa6f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfa72 jne 0x10cdfa87 */
  if (!C.zf) goto L_10cdfa87;
  /* 10cdfa74 mov dword ptr [0x10cfe768], 1 */
  w32((uint32_t)(0x10cfe768), (0x1u));
  /* 10cdfa7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfa81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfa84 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10cdfa87:;
  /* 10cdfa87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdfa8a push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfa8b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10cdfa8e push edx */
  push32((uint32_t)(EDX));
  /* 10cdfa8f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10cdfa92 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfa93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfa96 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfa97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfa9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cdfa9c push eax */
  push32((uint32_t)(EAX));
  /* 10cdfa9d call 0x10cdfb60 */
  push32(0x10cdfaa2u); f_10cdfb60();
  /* 10cdfaa2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfaa5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfaa8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfaab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10cdfaae jmp 0x10cdfb1d */
  goto L_10cdfb1d;
L_10cdfab0:;
  /* 10cdfab0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfab3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdfab5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cdfab7 mov ecx, dword ptr [0x10cfcc98] */
  ECX = (r32((uint32_t)(0x10cfcc98)));
  /* 10cdfabd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cdfabf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10cdfac3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdfac9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdfacb je 0x10cdfaf8 */
  if (C.zf) goto L_10cdfaf8;
  /* 10cdfacd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfad1 jbe 0x10cdfaf8 */
  if ((C.cf||C.zf)) goto L_10cdfaf8;
  /* 10cdfad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdfad6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfad9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cdfadb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cdfadd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdfae0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfae3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10cdfae6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfae9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfaec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10cdfaef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdfaf2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdfaf5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10cdfaf8:;
  /* 10cdfaf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdfafb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfafe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cdfb00 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cdfb02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdfb05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfb08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10cdfb0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfb0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfb11 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10cdfb14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdfb17 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdfb1a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10cdfb1d:;
  /* 10cdfb1d jmp 0x10cdfa31 */
  goto L_10cdfa31;
L_10cdfb22:;
  /* 10cdfb22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfb26 je 0x10cdfb34 */
  if (C.zf) goto L_10cdfb34;
  /* 10cdfb28 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10cdfb2a call 0x10cd6130 */
  push32(0x10cdfb2fu); f_10cd6130();
  /* 10cdfb2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfb32 jmp 0x10cdfb3f */
  goto L_10cdfb3f;
L_10cdfb34:;
  /* 10cdfb34 push 0x10cfe78c */
  push32((uint32_t)(0x10cfe78cu));
  /* 10cdfb39 call dword ptr [0x10d00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00234))), 0x10cdfb3fu);
L_10cdfb3f:;
  /* 10cdfb3f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfb43 jbe 0x10cdfb53 */
  if ((C.cf||C.zf)) goto L_10cdfb53;
  /* 10cdfb45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdfb48 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10cdfb4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfb4e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdfb51 jmp 0x10cdfb55 */
  goto L_10cdfb55;
L_10cdfb53:;
  /* 10cdfb53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cdfb55:;
  /* 10cdfb55 mov esp, ebp */
  ESP = (EBP);
  /* 10cdfb57 pop ebp */
  EBP = (pop32());
  /* 10cdfb58 ret  */
  ESPCHK(0x10cdf9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb60 @ 0x10cdfb60 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10cdfb60(void) {
  FTRACE(0x10cdfb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdfb60 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdfb61 mov ebp, esp */
  EBP = (ESP);
  /* 10cdfb63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdfb66 push esi */
  push32((uint32_t)(ESI));
  /* 10cdfb67 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10cdfb6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cdfb6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdfb71 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdfb74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdfb77 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfb7b ja 0x10ce00c8 */
  if ((!C.cf&&!C.zf)) goto L_10ce00c8;
  /* 10cdfb81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdfb84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cdfb86 mov dl, byte ptr [eax + 0x10ce0129] */
  DL = (r8((uint32_t)(EAX + 0x10ce0129)));
  /* 10cdfb8c jmp dword ptr [edx*4 + 0x10ce00cd] */
  switch (EDX) {
    case 0: goto L_10ce00a6;
    case 1: goto L_10cdfbb5;
    case 2: goto L_10cdfbfb;
    case 3: goto L_10cdfd48;
    case 4: goto L_10cdfd70;
    case 5: goto L_10cdfe0f;
    case 6: goto L_10cdfe7b;
    case 7: goto L_10cdfea4;
    case 8: goto L_10cdfee5;
    case 9: goto L_10cdffc7;
    case 10: goto L_10ce002e;
    case 11: goto L_10ce007b;
    case 12: goto L_10cdfb93;
    case 13: goto L_10cdfbd8;
    case 14: goto L_10cdfc1e;
    case 15: goto L_10cdfd1e;
    case 16: goto L_10cdfdb5;
    case 17: goto L_10cdfde2;
    case 18: goto L_10cdfe37;
    case 19: goto L_10cdfebb;
    case 20: goto L_10cdff69;
    case 21: goto L_10cdfff8;
    case 22: goto L_10ce00c8;
    default: x86_unimpl("switch@0x10cdfb8c out of table"); return;
  }
L_10cdfb93:;
  /* 10cdfb93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfb96 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfb97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfb9a push edx */
  push32((uint32_t)(EDX));
  /* 10cdfb9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfb9e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10cdfba1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfba4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10cdfba7 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfba8 call 0x10ce0180 */
  push32(0x10cdfbadu); f_10ce0180();
  /* 10cdfbad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfbb0 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfbb5:;
  /* 10cdfbb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfbb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfbb9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfbbc push edx */
  push32((uint32_t)(EDX));
  /* 10cdfbbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfbc0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10cdfbc3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfbc6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10cdfbca push eax */
  push32((uint32_t)(EAX));
  /* 10cdfbcb call 0x10ce0180 */
  push32(0x10cdfbd0u); f_10ce0180();
  /* 10cdfbd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfbd3 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfbd8:;
  /* 10cdfbd8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfbdb push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfbdc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfbdf push edx */
  push32((uint32_t)(EDX));
  /* 10cdfbe0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfbe3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cdfbe6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfbe9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10cdfbed push eax */
  push32((uint32_t)(EAX));
  /* 10cdfbee call 0x10ce0180 */
  push32(0x10cdfbf3u); f_10ce0180();
  /* 10cdfbf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfbf6 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfbfb:;
  /* 10cdfbfb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfbfe push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfbff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfc02 push edx */
  push32((uint32_t)(EDX));
  /* 10cdfc03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfc06 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cdfc09 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfc0c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10cdfc10 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfc11 call 0x10ce0180 */
  push32(0x10cdfc16u); f_10ce0180();
  /* 10cdfc16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfc19 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfc1e:;
  /* 10cdfc1e cmp dword ptr [0x10cfe768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfc25 je 0x10cdfca6 */
  if (C.zf) goto L_10cdfca6;
  /* 10cdfc27 mov dword ptr [0x10cfe768], 0 */
  w32((uint32_t)(0x10cfe768), (0x0u));
  /* 10cdfc31 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfc34 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfc35 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfc38 push edx */
  push32((uint32_t)(EDX));
  /* 10cdfc39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfc3c push eax */
  push32((uint32_t)(EAX));
  /* 10cdfc3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfc40 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfc41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfc44 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10cdfc4a push eax */
  push32((uint32_t)(EAX));
  /* 10cdfc4b call 0x10ce0330 */
  push32(0x10cdfc50u); f_10ce0330();
  /* 10cdfc50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfc53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfc56 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfc59 jne 0x10cdfc60 */
  if (!C.zf) goto L_10cdfc60;
  /* 10cdfc5b jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfc60:;
  /* 10cdfc60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfc63 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cdfc65 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10cdfc68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfc6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cdfc6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfc70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfc73 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cdfc75 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfc78 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cdfc7a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdfc7d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfc80 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cdfc82 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfc85 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfc86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfc89 push edx */
  push32((uint32_t)(EDX));
  /* 10cdfc8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfc8d push eax */
  push32((uint32_t)(EAX));
  /* 10cdfc8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfc91 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfc92 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfc95 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10cdfc9b push eax */
  push32((uint32_t)(EAX));
  /* 10cdfc9c call 0x10ce0330 */
  push32(0x10cdfca1u); f_10ce0330();
  /* 10cdfca1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfca4 jmp 0x10cdfd19 */
  goto L_10cdfd19;
L_10cdfca6:;
  /* 10cdfca6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfca9 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfcaa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfcad push edx */
  push32((uint32_t)(EDX));
  /* 10cdfcae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfcb1 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfcb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfcb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfcb6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfcb9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10cdfcbf push eax */
  push32((uint32_t)(EAX));
  /* 10cdfcc0 call 0x10ce0330 */
  push32(0x10cdfcc5u); f_10ce0330();
  /* 10cdfcc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfcc8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfccb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfcce jne 0x10cdfcd5 */
  if (!C.zf) goto L_10cdfcd5;
  /* 10cdfcd0 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfcd5:;
  /* 10cdfcd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfcd8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cdfcda mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10cdfcdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfce0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cdfce2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfce5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfce8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cdfcea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfced mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cdfcef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdfcf2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfcf5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cdfcf7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfcfa push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfcfb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfcfe push edx */
  push32((uint32_t)(EDX));
  /* 10cdfcff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfd02 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfd03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfd06 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfd07 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfd0a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10cdfd10 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfd11 call 0x10ce0330 */
  push32(0x10cdfd16u); f_10ce0330();
  /* 10cdfd16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdfd19:;
  /* 10cdfd19 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfd1e:;
  /* 10cdfd1e mov ecx, dword ptr [0x10cfe768] */
  ECX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfd24 mov dword ptr [0x10cfe778], ecx */
  w32((uint32_t)(0x10cfe778), (ECX));
  /* 10cdfd2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfd2d push edx */
  push32((uint32_t)(EDX));
  /* 10cdfd2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfd31 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfd32 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdfd34 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfd37 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cdfd3a push edx */
  push32((uint32_t)(EDX));
  /* 10cdfd3b call 0x10ce01d0 */
  push32(0x10cdfd40u); f_10ce01d0();
  /* 10cdfd40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfd43 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfd48:;
  /* 10cdfd48 mov eax, dword ptr [0x10cfe768] */
  EAX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfd4d mov dword ptr [0x10cfe778], eax */
  w32((uint32_t)(0x10cfe778), (EAX));
  /* 10cdfd52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfd55 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfd56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfd59 push edx */
  push32((uint32_t)(EDX));
  /* 10cdfd5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdfd5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfd5f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cdfd62 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfd63 call 0x10ce01d0 */
  push32(0x10cdfd68u); f_10ce01d0();
  /* 10cdfd68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfd6b jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfd70:;
  /* 10cdfd70 mov edx, dword ptr [0x10cfe768] */
  EDX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfd76 mov dword ptr [0x10cfe778], edx */
  w32((uint32_t)(0x10cfe778), (EDX));
  /* 10cdfd7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfd7f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cdfd82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cdfd83 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10cdfd88 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cdfd8a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cdfd8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfd91 jne 0x10cdfd9a */
  if (!C.zf) goto L_10cdfd9a;
  /* 10cdfd93 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10cdfd9a:;
  /* 10cdfd9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfd9d push edx */
  push32((uint32_t)(EDX));
  /* 10cdfd9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfda1 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfda2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdfda4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdfda7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfda8 call 0x10ce01d0 */
  push32(0x10cdfdadu); f_10ce01d0();
  /* 10cdfdad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfdb0 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfdb5:;
  /* 10cdfdb5 mov edx, dword ptr [0x10cfe768] */
  EDX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfdbb mov dword ptr [0x10cfe778], edx */
  w32((uint32_t)(0x10cfe778), (EDX));
  /* 10cdfdc1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfdc4 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfdc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfdc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfdc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10cdfdcb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfdce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10cdfdd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfdd4 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfdd5 call 0x10ce01d0 */
  push32(0x10cdfddau); f_10ce01d0();
  /* 10cdfdda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfddd jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfde2:;
  /* 10cdfde2 mov ecx, dword ptr [0x10cfe768] */
  ECX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfde8 mov dword ptr [0x10cfe778], ecx */
  w32((uint32_t)(0x10cfe778), (ECX));
  /* 10cdfdee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfdf1 push edx */
  push32((uint32_t)(EDX));
  /* 10cdfdf2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfdf5 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfdf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdfdf8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfdfb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10cdfdfe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfe01 push edx */
  push32((uint32_t)(EDX));
  /* 10cdfe02 call 0x10ce01d0 */
  push32(0x10cdfe07u); f_10ce01d0();
  /* 10cdfe07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfe0a jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfe0f:;
  /* 10cdfe0f mov eax, dword ptr [0x10cfe768] */
  EAX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfe14 mov dword ptr [0x10cfe778], eax */
  w32((uint32_t)(0x10cfe778), (EAX));
  /* 10cdfe19 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfe1c push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfe1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfe20 push edx */
  push32((uint32_t)(EDX));
  /* 10cdfe21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdfe23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfe26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cdfe29 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfe2a call 0x10ce01d0 */
  push32(0x10cdfe2fu); f_10ce01d0();
  /* 10cdfe2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfe32 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfe37:;
  /* 10cdfe37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfe3a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfe3e jg 0x10cdfe5c */
  if ((!C.zf&&C.sf==C.of)) goto L_10cdfe5c;
  /* 10cdfe40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfe43 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfe44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfe47 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfe48 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfe4b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10cdfe51 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfe52 call 0x10ce0180 */
  push32(0x10cdfe57u); f_10ce0180();
  /* 10cdfe57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfe5a jmp 0x10cdfe76 */
  goto L_10cdfe76;
L_10cdfe5c:;
  /* 10cdfe5c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfe5f push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfe60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfe63 push edx */
  push32((uint32_t)(EDX));
  /* 10cdfe64 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdfe67 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10cdfe6d push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfe6e call 0x10ce0180 */
  push32(0x10cdfe73u); f_10ce0180();
  /* 10cdfe73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdfe76:;
  /* 10cdfe76 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfe7b:;
  /* 10cdfe7b mov edx, dword ptr [0x10cfe768] */
  EDX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfe81 mov dword ptr [0x10cfe778], edx */
  w32((uint32_t)(0x10cfe778), (EDX));
  /* 10cdfe87 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfe8a push eax */
  push32((uint32_t)(EAX));
  /* 10cdfe8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfe8e push ecx */
  push32((uint32_t)(ECX));
  /* 10cdfe8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdfe91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfe94 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cdfe96 push eax */
  push32((uint32_t)(EAX));
  /* 10cdfe97 call 0x10ce01d0 */
  push32(0x10cdfe9cu); f_10ce01d0();
  /* 10cdfe9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfe9f jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfea4:;
  /* 10cdfea4 mov ecx, dword ptr [0x10cfe768] */
  ECX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfeaa mov dword ptr [0x10cfe778], ecx */
  w32((uint32_t)(0x10cfe778), (ECX));
  /* 10cdfeb0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfeb3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10cdfeb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdfeb9 jmp 0x10cdff0d */
  goto L_10cdff0d;
L_10cdfebb:;
  /* 10cdfebb mov ecx, dword ptr [0x10cfe768] */
  ECX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfec1 mov dword ptr [0x10cfe778], ecx */
  w32((uint32_t)(0x10cfe778), (ECX));
  /* 10cdfec7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdfeca push edx */
  push32((uint32_t)(EDX));
  /* 10cdfecb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdfece push eax */
  push32((uint32_t)(EAX));
  /* 10cdfecf push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdfed1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfed4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10cdfed7 push edx */
  push32((uint32_t)(EDX));
  /* 10cdfed8 call 0x10ce01d0 */
  push32(0x10cdfeddu); f_10ce01d0();
  /* 10cdfedd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfee0 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfee5:;
  /* 10cdfee5 mov eax, dword ptr [0x10cfe768] */
  EAX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfeea mov dword ptr [0x10cfe778], eax */
  w32((uint32_t)(0x10cfe778), (EAX));
  /* 10cdfeef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdfef2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdfef6 jne 0x10cdff01 */
  if (!C.zf) goto L_10cdff01;
  /* 10cdfef8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10cdfeff jmp 0x10cdff0d */
  goto L_10cdff0d;
L_10cdff01:;
  /* 10cdff01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdff04 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10cdff07 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdff0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cdff0d:;
  /* 10cdff0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdff10 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10cdff13 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdff16 jge 0x10cdff21 */
  if ((C.sf==C.of)) goto L_10cdff21;
  /* 10cdff18 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cdff1f jmp 0x10cdff4e */
  goto L_10cdff4e;
L_10cdff21:;
  /* 10cdff21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdff24 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10cdff27 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cdff28 mov ecx, 7 */
  ECX = (0x7u);
  /* 10cdff2d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cdff2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdff32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdff35 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10cdff38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cdff39 mov ecx, 7 */
  ECX = (0x7u);
  /* 10cdff3e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cdff40 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdff43 jl 0x10cdff4e */
  if ((C.sf!=C.of)) goto L_10cdff4e;
  /* 10cdff45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdff48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdff4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cdff4e:;
  /* 10cdff4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdff51 push eax */
  push32((uint32_t)(EAX));
  /* 10cdff52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdff55 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdff56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdff58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdff5b push edx */
  push32((uint32_t)(EDX));
  /* 10cdff5c call 0x10ce01d0 */
  push32(0x10cdff61u); f_10ce01d0();
  /* 10cdff61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdff64 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdff69:;
  /* 10cdff69 cmp dword ptr [0x10cfe768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdff70 je 0x10cdffa0 */
  if (C.zf) goto L_10cdffa0;
  /* 10cdff72 mov dword ptr [0x10cfe768], 0 */
  w32((uint32_t)(0x10cfe768), (0x0u));
  /* 10cdff7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdff7f push eax */
  push32((uint32_t)(EAX));
  /* 10cdff80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdff83 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdff84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdff87 push edx */
  push32((uint32_t)(EDX));
  /* 10cdff88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdff8b push eax */
  push32((uint32_t)(EAX));
  /* 10cdff8c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdff8f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10cdff95 push edx */
  push32((uint32_t)(EDX));
  /* 10cdff96 call 0x10ce0330 */
  push32(0x10cdff9bu); f_10ce0330();
  /* 10cdff9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdff9e jmp 0x10cdffc2 */
  goto L_10cdffc2;
L_10cdffa0:;
  /* 10cdffa0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdffa3 push eax */
  push32((uint32_t)(EAX));
  /* 10cdffa4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdffa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdffa8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdffab push edx */
  push32((uint32_t)(EDX));
  /* 10cdffac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdffaf push eax */
  push32((uint32_t)(EAX));
  /* 10cdffb0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdffb3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10cdffb9 push edx */
  push32((uint32_t)(EDX));
  /* 10cdffba call 0x10ce0330 */
  push32(0x10cdffbfu); f_10ce0330();
  /* 10cdffbf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdffc2:;
  /* 10cdffc2 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdffc7:;
  /* 10cdffc7 mov dword ptr [0x10cfe768], 0 */
  w32((uint32_t)(0x10cfe768), (0x0u));
  /* 10cdffd1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdffd4 push eax */
  push32((uint32_t)(EAX));
  /* 10cdffd5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdffd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdffd9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdffdc push edx */
  push32((uint32_t)(EDX));
  /* 10cdffdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdffe0 push eax */
  push32((uint32_t)(EAX));
  /* 10cdffe1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdffe4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10cdffea push edx */
  push32((uint32_t)(EDX));
  /* 10cdffeb call 0x10ce0330 */
  push32(0x10cdfff0u); f_10ce0330();
  /* 10cdfff0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdfff3 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10cdfff8:;
  /* 10cdfff8 mov eax, dword ptr [0x10cfe768] */
  EAX = (r32((uint32_t)(0x10cfe768)));
  /* 10cdfffd mov dword ptr [0x10cfe778], eax */
  w32((uint32_t)(0x10cfe778), (EAX));
  /* 10ce0002 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0005 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ce0008 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ce0009 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10ce000e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ce0010 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ce0013 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0016 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0017 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce001a push eax */
  push32((uint32_t)(EAX));
  /* 10ce001b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce001d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0020 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0021 call 0x10ce01d0 */
  push32(0x10ce0026u); f_10ce01d0();
  /* 10ce0026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0029 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10ce002e:;
  /* 10ce002e mov edx, dword ptr [0x10cfe768] */
  EDX = (r32((uint32_t)(0x10cfe768)));
  /* 10ce0034 mov dword ptr [0x10cfe778], edx */
  w32((uint32_t)(0x10cfe778), (EDX));
  /* 10ce003a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce003d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ce0040 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ce0041 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10ce0046 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ce0048 mov ecx, eax */
  ECX = (EAX);
  /* 10ce004a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce004d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce0050 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0053 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ce0056 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ce0057 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10ce005c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ce005e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0060 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce0063 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0066 push eax */
  push32((uint32_t)(EAX));
  /* 10ce0067 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce006a push ecx */
  push32((uint32_t)(ECX));
  /* 10ce006b push 4 */
  push32((uint32_t)(0x4u));
  /* 10ce006d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0070 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0071 call 0x10ce01d0 */
  push32(0x10ce0076u); f_10ce01d0();
  /* 10ce0076 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0079 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10ce007b:;
  /* 10ce007b call 0x10ce1190 */
  push32(0x10ce0080u); f_10ce1190();
  /* 10ce0080 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0083 push eax */
  push32((uint32_t)(EAX));
  /* 10ce0084 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0087 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0088 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce008b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce008d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0091 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10ce0094 mov ecx, dword ptr [eax*4 + 0x10cfde1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cfde1c)));
  /* 10ce009b push ecx */
  push32((uint32_t)(ECX));
  /* 10ce009c call 0x10ce0180 */
  push32(0x10ce00a1u); f_10ce0180();
  /* 10ce00a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce00a4 jmp 0x10ce00c8 */
  goto L_10ce00c8;
L_10ce00a6:;
  /* 10ce00a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce00a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce00ab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10ce00ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce00b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce00b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce00b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce00b9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ce00bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce00be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce00c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce00c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce00c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ce00c8:;
  /* 10ce00c8 pop esi */
  ESI = (pop32());
  /* 10ce00c9 mov esp, ebp */
  ESP = (EBP);
  /* 10ce00cb pop ebp */
  EBP = (pop32());
  /* 10ce00cc ret  */
  ESPCHK(0x10cdfb60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10ce0180 (72 bytes, 30 insns) */
void f_10ce0180(void) {
  FTRACE(0x10ce0180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce0180 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce0181 mov ebp, esp */
  EBP = (ESP);
L_10ce0183:;
  /* 10ce0183 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0186 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0189 je 0x10ce01c6 */
  if (C.zf) goto L_10ce01c6;
  /* 10ce018b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce018e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ce0191 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce0193 je 0x10ce01c6 */
  if (C.zf) goto L_10ce01c6;
  /* 10ce0195 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0198 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce019a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce019d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce019f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ce01a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce01a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce01a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce01a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce01ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ce01ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce01b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce01b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ce01b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce01ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce01bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce01bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce01c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ce01c4 jmp 0x10ce0183 */
  goto L_10ce0183;
L_10ce01c6:;
  /* 10ce01c6 pop ebp */
  EBP = (pop32());
  /* 10ce01c7 ret  */
  ESPCHK(0x10ce0180u, _esp0);
  ESP += 4; return;
}

/* FUN_100101d0 @ 0x10ce01d0 (173 bytes, 64 insns) */
void f_10ce01d0(void) {
  FTRACE(0x10ce01d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce01d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce01d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce01d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce01d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ce01db cmp dword ptr [0x10cfe778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce01e2 je 0x10ce01fa */
  if (C.zf) goto L_10ce01fa;
  /* 10ce01e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce01e7 push eax */
  push32((uint32_t)(EAX));
  /* 10ce01e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce01eb push ecx */
  push32((uint32_t)(ECX));
  /* 10ce01ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce01ef push edx */
  push32((uint32_t)(EDX));
  /* 10ce01f0 call 0x10ce0280 */
  push32(0x10ce01f5u); f_10ce0280();
  /* 10ce01f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce01f8 jmp 0x10ce0279 */
  goto L_10ce0279;
L_10ce01fa:;
  /* 10ce01fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce01fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0200 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0202 jae 0x10ce0270 */
  if (!C.cf) goto L_10ce0270;
  /* 10ce0204 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0207 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce020a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10ce020d jmp 0x10ce0218 */
  goto L_10ce0218;
L_10ce020f:;
  /* 10ce020f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0212 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce0215 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10ce0218:;
  /* 10ce0218 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce021b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce021e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce0220 je 0x10ce0254 */
  if (C.zf) goto L_10ce0254;
  /* 10ce0222 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0225 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ce0226 mov ecx, 0xa */
  ECX = (0xau);
  /* 10ce022b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ce022d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0230 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0233 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce0235 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0238 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10ce023b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce023e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ce023f mov ecx, 0xa */
  ECX = (0xau);
  /* 10ce0244 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ce0246 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ce0249 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce024c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce024f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ce0252 jmp 0x10ce020f */
  goto L_10ce020f;
L_10ce0254:;
  /* 10ce0254 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0257 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce0259 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce025c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce025f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ce0261 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0264 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce0266 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce0269 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce026c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ce026e jmp 0x10ce0279 */
  goto L_10ce0279;
L_10ce0270:;
  /* 10ce0270 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0273 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ce0279:;
  /* 10ce0279 mov esp, ebp */
  ESP = (EBP);
  /* 10ce027b pop ebp */
  EBP = (pop32());
  /* 10ce027c ret  */
  ESPCHK(0x10ce01d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10ce0280 (172 bytes, 65 insns) */
void f_10ce0280(void) {
  FTRACE(0x10ce0280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce0280 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce0281 mov ebp, esp */
  EBP = (ESP);
  /* 10ce0283 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce0286 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0289 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce028b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce028e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0291 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0294 jbe 0x10ce02db */
  if ((C.cf||C.zf)) goto L_10ce02db;
L_10ce0296:;
  /* 10ce0296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0299 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ce029a mov ecx, 0xa */
  ECX = (0xau);
  /* 10ce029f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ce02a1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce02a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce02a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ce02a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce02ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce02af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce02b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce02b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce02b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce02ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce02bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ce02bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce02c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ce02c3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10ce02c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ce02ca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ce02cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce02d1 jle 0x10ce02db */
  if ((C.zf||C.sf!=C.of)) goto L_10ce02db;
  /* 10ce02d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce02d6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce02d9 ja 0x10ce0296 */
  if ((!C.cf&&!C.zf)) goto L_10ce0296;
L_10ce02db:;
  /* 10ce02db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce02de mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce02e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ce02e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce02e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce02e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ce02eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce02ee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce02f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ce02f4:;
  /* 10ce02f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce02f7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce02f9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10ce02fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce02ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce0302 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce0304 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ce0306 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0309 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce030c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce030f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce0312 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ce0315 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10ce0317 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce031a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce031d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ce0320 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce0323 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0326 jb 0x10ce02f4 */
  if (C.cf) goto L_10ce02f4;
  /* 10ce0328 mov esp, ebp */
  ESP = (EBP);
  /* 10ce032a pop ebp */
  EBP = (pop32());
  /* 10ce032b ret  */
  ESPCHK(0x10ce0280u, _esp0);
  ESP += 4; return;
}

/* FUN_10010330 @ 0x10ce0330 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10ce0330(void) {
  FTRACE(0x10ce0330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce0330 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce0331 mov ebp, esp */
  EBP = (ESP);
  /* 10ce0333 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10ce0336:;
  /* 10ce0336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0339 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ce033c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce033e je 0x10ce07ac */
  if (C.zf) goto L_10ce07ac;
  /* 10ce0344 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0347 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce034a je 0x10ce07ac */
  if (C.zf) goto L_10ce07ac;
  /* 10ce0350 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ce0354 mov dword ptr [0x10cfe778], 0 */
  w32((uint32_t)(0x10cfe778), (0x0u));
  /* 10ce035e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ce0365 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0368 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ce036b jmp 0x10ce0376 */
  goto L_10ce0376;
L_10ce036d:;
  /* 10ce036d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce0370 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0373 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ce0376:;
  /* 10ce0376 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0379 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ce037c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce037f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ce0382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0385 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0388 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce038b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce038d jne 0x10ce0391 */
  if (!C.zf) goto L_10ce0391;
  /* 10ce038f jmp 0x10ce036d */
  goto L_10ce036d;
L_10ce0391:;
  /* 10ce0391 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0394 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce0397 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ce039a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce039d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ce03a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ce03a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ce03a6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce03a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ce03ac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce03b0 ja 0x10ce0700 */
  if ((!C.cf&&!C.zf)) goto L_10ce0700;
  /* 10ce03b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ce03b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce03bb mov al, byte ptr [ecx + 0x10ce07dc] */
  AL = (r8((uint32_t)(ECX + 0x10ce07dc)));
  /* 10ce03c1 jmp dword ptr [eax*4 + 0x10ce07b0] */
  switch (EAX) {
    case 0: goto L_10ce061f;
    case 1: goto L_10ce0503;
    case 2: goto L_10ce048e;
    case 3: goto L_10ce03c8;
    case 4: goto L_10ce0406;
    case 5: goto L_10ce0467;
    case 6: goto L_10ce04b5;
    case 7: goto L_10ce04dc;
    case 8: goto L_10ce054a;
    case 9: goto L_10ce0444;
    case 10: goto L_10ce0700;
    default: x86_unimpl("switch@0x10ce03c1 out of table"); return;
  }
L_10ce03c8:;
  /* 10ce03c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce03cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ce03ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce03d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce03d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ce03d7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce03db ja 0x10ce0401 */
  if ((!C.cf&&!C.zf)) goto L_10ce0401;
  /* 10ce03dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce03e0 jmp dword ptr [ecx*4 + 0x10ce082f] */
  switch (ECX) {
    case 0: goto L_10ce03e7;
    case 1: goto L_10ce03f1;
    case 2: goto L_10ce03f7;
    case 3: goto L_10ce03fd;
    case 4: goto L_10ce0425;
    case 5: goto L_10ce042f;
    case 6: goto L_10ce0435;
    case 7: goto L_10ce043b;
    default: x86_unimpl("switch@0x10ce03e0 out of table"); return;
  }
L_10ce03e7:;
  /* 10ce03e7 mov dword ptr [0x10cfe778], 1 */
  w32((uint32_t)(0x10cfe778), (0x1u));
L_10ce03f1:;
  /* 10ce03f1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10ce03f5 jmp 0x10ce0401 */
  goto L_10ce0401;
L_10ce03f7:;
  /* 10ce03f7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10ce03fb jmp 0x10ce0401 */
  goto L_10ce0401;
L_10ce03fd:;
  /* 10ce03fd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10ce0401:;
  /* 10ce0401 jmp 0x10ce0700 */
  goto L_10ce0700;
L_10ce0406:;
  /* 10ce0406 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce0409 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ce040c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ce040f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce0412 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ce0415 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0419 ja 0x10ce043f */
  if ((!C.cf&&!C.zf)) goto L_10ce043f;
  /* 10ce041b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ce041e jmp dword ptr [ecx*4 + 0x10ce083f] */
  switch (ECX) {
    case 0: goto L_10ce0425;
    case 1: goto L_10ce042f;
    case 2: goto L_10ce0435;
    case 3: goto L_10ce043b;
    default: x86_unimpl("switch@0x10ce041e out of table"); return;
  }
L_10ce0425:;
  /* 10ce0425 mov dword ptr [0x10cfe778], 1 */
  w32((uint32_t)(0x10cfe778), (0x1u));
L_10ce042f:;
  /* 10ce042f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10ce0433 jmp 0x10ce043f */
  goto L_10ce043f;
L_10ce0435:;
  /* 10ce0435 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10ce0439 jmp 0x10ce043f */
  goto L_10ce043f;
L_10ce043b:;
  /* 10ce043b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10ce043f:;
  /* 10ce043f jmp 0x10ce0700 */
  goto L_10ce0700;
L_10ce0444:;
  /* 10ce0444 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce0447 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ce044a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce044e je 0x10ce0458 */
  if (C.zf) goto L_10ce0458;
  /* 10ce0450 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0454 je 0x10ce045e */
  if (C.zf) goto L_10ce045e;
  /* 10ce0456 jmp 0x10ce0462 */
  goto L_10ce0462;
L_10ce0458:;
  /* 10ce0458 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10ce045c jmp 0x10ce0462 */
  goto L_10ce0462;
L_10ce045e:;
  /* 10ce045e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10ce0462:;
  /* 10ce0462 jmp 0x10ce0700 */
  goto L_10ce0700;
L_10ce0467:;
  /* 10ce0467 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce046a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ce046d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0471 je 0x10ce047b */
  if (C.zf) goto L_10ce047b;
  /* 10ce0473 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0477 je 0x10ce0485 */
  if (C.zf) goto L_10ce0485;
  /* 10ce0479 jmp 0x10ce0489 */
  goto L_10ce0489;
L_10ce047b:;
  /* 10ce047b mov dword ptr [0x10cfe778], 1 */
  w32((uint32_t)(0x10cfe778), (0x1u));
L_10ce0485:;
  /* 10ce0485 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10ce0489:;
  /* 10ce0489 jmp 0x10ce0700 */
  goto L_10ce0700;
L_10ce048e:;
  /* 10ce048e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce0491 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10ce0494 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0498 je 0x10ce04a2 */
  if (C.zf) goto L_10ce04a2;
  /* 10ce049a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce049e je 0x10ce04ac */
  if (C.zf) goto L_10ce04ac;
  /* 10ce04a0 jmp 0x10ce04b0 */
  goto L_10ce04b0;
L_10ce04a2:;
  /* 10ce04a2 mov dword ptr [0x10cfe778], 1 */
  w32((uint32_t)(0x10cfe778), (0x1u));
L_10ce04ac:;
  /* 10ce04ac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10ce04b0:;
  /* 10ce04b0 jmp 0x10ce0700 */
  goto L_10ce0700;
L_10ce04b5:;
  /* 10ce04b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce04b8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10ce04bb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce04bf je 0x10ce04c9 */
  if (C.zf) goto L_10ce04c9;
  /* 10ce04c1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce04c5 je 0x10ce04d3 */
  if (C.zf) goto L_10ce04d3;
  /* 10ce04c7 jmp 0x10ce04d7 */
  goto L_10ce04d7;
L_10ce04c9:;
  /* 10ce04c9 mov dword ptr [0x10cfe778], 1 */
  w32((uint32_t)(0x10cfe778), (0x1u));
L_10ce04d3:;
  /* 10ce04d3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10ce04d7:;
  /* 10ce04d7 jmp 0x10ce0700 */
  goto L_10ce0700;
L_10ce04dc:;
  /* 10ce04dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce04df mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10ce04e2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce04e6 je 0x10ce04f0 */
  if (C.zf) goto L_10ce04f0;
  /* 10ce04e8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce04ec je 0x10ce04fa */
  if (C.zf) goto L_10ce04fa;
  /* 10ce04ee jmp 0x10ce04fe */
  goto L_10ce04fe;
L_10ce04f0:;
  /* 10ce04f0 mov dword ptr [0x10cfe778], 1 */
  w32((uint32_t)(0x10cfe778), (0x1u));
L_10ce04fa:;
  /* 10ce04fa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10ce04fe:;
  /* 10ce04fe jmp 0x10ce0700 */
  goto L_10ce0700;
L_10ce0503:;
  /* 10ce0503 push 0x10cfa7b4 */
  push32((uint32_t)(0x10cfa7b4u));
  /* 10ce0508 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce050b push ecx */
  push32((uint32_t)(ECX));
  /* 10ce050c call 0x10ce0d60 */
  push32(0x10ce0511u); f_10ce0d60();
  /* 10ce0511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce0516 jne 0x10ce0523 */
  if (!C.zf) goto L_10ce0523;
  /* 10ce0518 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce051b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce051e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ce0521 jmp 0x10ce0541 */
  goto L_10ce0541;
L_10ce0523:;
  /* 10ce0523 push 0x10cfa7b0 */
  push32((uint32_t)(0x10cfa7b0u));
  /* 10ce0528 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce052b push eax */
  push32((uint32_t)(EAX));
  /* 10ce052c call 0x10ce0d60 */
  push32(0x10ce0531u); f_10ce0d60();
  /* 10ce0531 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0534 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce0536 jne 0x10ce0541 */
  if (!C.zf) goto L_10ce0541;
  /* 10ce0538 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce053b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce053e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ce0541:;
  /* 10ce0541 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10ce0545 jmp 0x10ce0700 */
  goto L_10ce0700;
L_10ce054a:;
  /* 10ce054a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce054d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0551 jg 0x10ce0561 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ce0561;
  /* 10ce0553 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce0556 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10ce055c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ce055f jmp 0x10ce056d */
  goto L_10ce056d;
L_10ce0561:;
  /* 10ce0561 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce0564 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10ce056a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ce056d:;
  /* 10ce056d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0571 jle 0x10ce0614 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce0614;
  /* 10ce0577 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce057a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce057d jbe 0x10ce0614 */
  if ((C.cf||C.zf)) goto L_10ce0614;
  /* 10ce0583 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce0586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0588 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce058a mov ecx, dword ptr [0x10cfcc98] */
  ECX = (r32((uint32_t)(0x10cfcc98)));
  /* 10ce0590 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0592 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ce0596 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ce059c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce059e je 0x10ce05d7 */
  if (C.zf) goto L_10ce05d7;
  /* 10ce05a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce05a3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce05a6 jbe 0x10ce05d7 */
  if ((C.cf||C.zf)) goto L_10ce05d7;
  /* 10ce05a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce05ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce05ad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce05b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ce05b2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ce05b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce05b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce05b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce05bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce05bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ce05c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce05c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce05c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ce05ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce05cd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce05cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce05d2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce05d5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ce05d7:;
  /* 10ce05d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce05da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce05dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce05df mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce05e1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ce05e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce05e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce05e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce05eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce05ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ce05f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce05f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce05f6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ce05f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce05fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce05fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce0601 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0604 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ce0606 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce0609 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce060c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ce060f jmp 0x10ce056d */
  goto L_10ce056d;
L_10ce0614:;
  /* 10ce0614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0617 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ce061a jmp 0x10ce0336 */
  goto L_10ce0336;
L_10ce061f:;
  /* 10ce061f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce0622 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ce0625 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce0627 je 0x10ce06f2 */
  if (C.zf) goto L_10ce06f2;
  /* 10ce062d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0630 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0633 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10ce0636:;
  /* 10ce0636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0639 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ce063c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce063e je 0x10ce06f0 */
  if (C.zf) goto L_10ce06f0;
  /* 10ce0644 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0647 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce064a je 0x10ce06f0 */
  if (C.zf) goto L_10ce06f0;
  /* 10ce0650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0653 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ce0656 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0659 jne 0x10ce0669 */
  if (!C.zf) goto L_10ce0669;
  /* 10ce065b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce065e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0661 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ce0664 jmp 0x10ce06f0 */
  goto L_10ce06f0;
L_10ce0669:;
  /* 10ce0669 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce066c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce066e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ce0670 mov edx, dword ptr [0x10cfcc98] */
  EDX = (r32((uint32_t)(0x10cfcc98)));
  /* 10ce0676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0678 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10ce067c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce0683 je 0x10ce06bc */
  if (C.zf) goto L_10ce06bc;
  /* 10ce0685 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0688 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce068b jbe 0x10ce06bc */
  if ((C.cf||C.zf)) goto L_10ce06bc;
  /* 10ce068d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0690 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce0692 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0695 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ce0697 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ce0699 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce069c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce069e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce06a1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce06a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ce06a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce06a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce06ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ce06af mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce06b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce06b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce06b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce06ba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ce06bc:;
  /* 10ce06bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce06bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce06c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce06c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ce06c6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ce06c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce06cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce06cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce06d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce06d3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ce06d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce06d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce06db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ce06de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce06e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce06e3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce06e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce06e9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ce06eb jmp 0x10ce0636 */
  goto L_10ce0636;
L_10ce06f0:;
  /* 10ce06f0 jmp 0x10ce06fb */
  goto L_10ce06fb;
L_10ce06f2:;
  /* 10ce06f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce06f5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce06f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ce06fb:;
  /* 10ce06fb jmp 0x10ce0336 */
  goto L_10ce0336;
L_10ce0700:;
  /* 10ce0700 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ce0704 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce0706 je 0x10ce072c */
  if (C.zf) goto L_10ce072c;
  /* 10ce0708 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce070b push edx */
  push32((uint32_t)(EDX));
  /* 10ce070c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce070f push eax */
  push32((uint32_t)(EAX));
  /* 10ce0710 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0713 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0714 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0717 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0718 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ce071b push eax */
  push32((uint32_t)(EAX));
  /* 10ce071c call 0x10cdfb60 */
  push32(0x10ce0721u); f_10cdfb60();
  /* 10ce0721 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0727 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ce072a jmp 0x10ce07a7 */
  goto L_10ce07a7;
L_10ce072c:;
  /* 10ce072c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce072f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0731 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce0733 mov ecx, dword ptr [0x10cfcc98] */
  ECX = (r32((uint32_t)(0x10cfcc98)));
  /* 10ce0739 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce073b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ce073f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce0747 je 0x10ce0778 */
  if (C.zf) goto L_10ce0778;
  /* 10ce0749 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce074c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce074e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0751 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce0753 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ce0755 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0758 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce075a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce075d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0760 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ce0762 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0765 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0768 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ce076b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce076e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce0770 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce0773 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0776 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ce0778:;
  /* 10ce0778 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce077b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce077d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0780 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ce0782 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ce0784 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0787 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce0789 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce078c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce078f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ce0791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0794 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0797 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ce079a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce079d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce079f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce07a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce07a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ce07a7:;
  /* 10ce07a7 jmp 0x10ce0336 */
  goto L_10ce0336;
L_10ce07ac:;
  /* 10ce07ac mov esp, ebp */
  ESP = (EBP);
  /* 10ce07ae pop ebp */
  EBP = (pop32());
  /* 10ce07af ret  */
  ESPCHK(0x10ce0330u, _esp0);
  ESP += 4; return;
}

/* FUN_10010850 @ 0x10ce0850 (650 bytes, 178 insns) */
void f_10ce0850(void) {
  FTRACE(0x10ce0850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce0850 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce0851 mov ebp, esp */
  EBP = (ESP);
  /* 10ce0853 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce0859 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce085d jne 0x10ce09b9 */
  if (!C.zf) goto L_10ce09b9;
  /* 10ce0863 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0866 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10ce086c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10ce0872 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ce0875 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ce087c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10ce0886 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0888 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ce088e push edx */
  push32((uint32_t)(EDX));
  /* 10ce088f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce0892 push eax */
  push32((uint32_t)(EAX));
  /* 10ce0893 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0896 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0897 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce089a push edx */
  push32((uint32_t)(EDX));
  /* 10ce089b call 0x10ce1c70 */
  push32(0x10ce08a0u); f_10ce1c70();
  /* 10ce08a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce08a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ce08a6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce08aa jne 0x10ce093f */
  if (!C.zf) goto L_10ce093f;
  /* 10ce08b0 call dword ptr [0x10d00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00270))), 0x10ce08b6u);
  /* 10ce08b6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce08b9 je 0x10ce08c0 */
  if (C.zf) goto L_10ce08c0;
  /* 10ce08bb jmp 0x10ce099d */
  goto L_10ce099d;
L_10ce08c0:;
  /* 10ce08c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce08c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce08c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce08c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce08c9 push eax */
  push32((uint32_t)(EAX));
  /* 10ce08ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce08cd push ecx */
  push32((uint32_t)(ECX));
  /* 10ce08ce call 0x10ce1c70 */
  push32(0x10ce08d3u); f_10ce1c70();
  /* 10ce08d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce08d6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10ce08dc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce08e3 jne 0x10ce08ea */
  if (!C.zf) goto L_10ce08ea;
  /* 10ce08e5 jmp 0x10ce099d */
  goto L_10ce099d;
L_10ce08ea:;
  /* 10ce08ea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10ce08ec push 0x10cfa7bc */
  push32((uint32_t)(0x10cfa7bcu));
  /* 10ce08f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce08f3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ce08f9 push edx */
  push32((uint32_t)(EDX));
  /* 10ce08fa call 0x10cd2690 */
  push32(0x10ce08ffu); f_10cd2690();
  /* 10ce08ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0902 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ce0905 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0909 jne 0x10ce0910 */
  if (!C.zf) goto L_10ce0910;
  /* 10ce090b jmp 0x10ce099d */
  goto L_10ce099d;
L_10ce0910:;
  /* 10ce0910 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ce0917 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0919 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ce091f push eax */
  push32((uint32_t)(EAX));
  /* 10ce0920 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce0923 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0924 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0927 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0928 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce092b push eax */
  push32((uint32_t)(EAX));
  /* 10ce092c call 0x10ce1c70 */
  push32(0x10ce0931u); f_10ce1c70();
  /* 10ce0931 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0934 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ce0937 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce093b jne 0x10ce093f */
  if (!C.zf) goto L_10ce093f;
  /* 10ce093d jmp 0x10ce099d */
  goto L_10ce099d;
L_10ce093f:;
  /* 10ce093f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10ce0941 push 0x10cfa7bc */
  push32((uint32_t)(0x10cfa7bcu));
  /* 10ce0946 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce0948 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce094b push ecx */
  push32((uint32_t)(ECX));
  /* 10ce094c call 0x10cd2690 */
  push32(0x10ce0951u); f_10cd2690();
  /* 10ce0951 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0954 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ce095a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ce095c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ce0962 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0965 jne 0x10ce0969 */
  if (!C.zf) goto L_10ce0969;
  /* 10ce0967 jmp 0x10ce099d */
  goto L_10ce099d;
L_10ce0969:;
  /* 10ce0969 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce096c push ecx */
  push32((uint32_t)(ECX));
  /* 10ce096d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce0970 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0971 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ce0977 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce0979 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce097a call 0x10cd5eb0 */
  push32(0x10ce097fu); f_10cd5eb0();
  /* 10ce097f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0982 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0986 je 0x10ce0996 */
  if (C.zf) goto L_10ce0996;
  /* 10ce0988 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce098a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce098d push edx */
  push32((uint32_t)(EDX));
  /* 10ce098e call 0x10cd3120 */
  push32(0x10ce0993u); f_10cd3120();
  /* 10ce0993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ce0996:;
  /* 10ce0996 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0998 jmp 0x10ce0ad6 */
  goto L_10ce0ad6;
L_10ce099d:;
  /* 10ce099d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce09a1 je 0x10ce09b1 */
  if (C.zf) goto L_10ce09b1;
  /* 10ce09a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce09a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce09a8 push eax */
  push32((uint32_t)(EAX));
  /* 10ce09a9 call 0x10cd3120 */
  push32(0x10ce09aeu); f_10cd3120();
  /* 10ce09ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ce09b1:;
  /* 10ce09b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce09b4 jmp 0x10ce0ad6 */
  goto L_10ce0ad6;
L_10ce09b9:;
  /* 10ce09b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce09bd jne 0x10ce0ad3 */
  if (!C.zf) goto L_10ce0ad3;
  /* 10ce09c3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10ce09cd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce09d0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10ce09d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce09d8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10ce09de push edx */
  push32((uint32_t)(EDX));
  /* 10ce09df push 0x10cfe690 */
  push32((uint32_t)(0x10cfe690u));
  /* 10ce09e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce09e7 push eax */
  push32((uint32_t)(EAX));
  /* 10ce09e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce09eb push ecx */
  push32((uint32_t)(ECX));
  /* 10ce09ec call 0x10ce1ad0 */
  push32(0x10ce09f1u); f_10ce1ad0();
  /* 10ce09f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce09f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce09f6 jne 0x10ce0a00 */
  if (!C.zf) goto L_10ce0a00;
  /* 10ce09f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce09fb jmp 0x10ce0ad6 */
  goto L_10ce0ad6;
L_10ce0a00:;
  /* 10ce0a00 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ce0a06 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10ce0a09 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10ce0a13 jmp 0x10ce0a24 */
  goto L_10ce0a24;
L_10ce0a15:;
  /* 10ce0a15 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ce0a1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0a1e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10ce0a24:;
  /* 10ce0a24 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0a2b jge 0x10ce0acf */
  if ((C.sf==C.of)) goto L_10ce0acf;
  /* 10ce0a31 cmp dword ptr [0x10cfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0a38 jle 0x10ce0a6b */
  if ((C.zf||C.sf!=C.of)) goto L_10ce0a6b;
  /* 10ce0a3a push 4 */
  push32((uint32_t)(0x4u));
  /* 10ce0a3c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ce0a42 mov dl, byte ptr [ecx*2 + 0x10cfe690] */
  DL = (r8((uint32_t)(ECX*2 + 0x10cfe690)));
  /* 10ce0a49 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10ce0a4f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10ce0a55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0a5a push eax */
  push32((uint32_t)(EAX));
  /* 10ce0a5b call 0x10cd86a0 */
  push32(0x10ce0a60u); f_10cd86a0();
  /* 10ce0a60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0a63 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10ce0a69 jmp 0x10ce0a9e */
  goto L_10ce0a9e;
L_10ce0a6b:;
  /* 10ce0a6b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ce0a71 mov dl, byte ptr [ecx*2 + 0x10cfe690] */
  DL = (r8((uint32_t)(ECX*2 + 0x10cfe690)));
  /* 10ce0a78 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10ce0a7e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10ce0a84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0a89 mov ecx, dword ptr [0x10cfcc98] */
  ECX = (r32((uint32_t)(0x10cfcc98)));
  /* 10ce0a8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0a91 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ce0a95 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0a98 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10ce0a9e:;
  /* 10ce0a9e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0aa5 je 0x10ce0ac8 */
  if (C.zf) goto L_10ce0ac8;
  /* 10ce0aa7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ce0aad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ce0ab0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce0ab3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10ce0aba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10ce0abe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ce0ac4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ce0ac6 jmp 0x10ce0aca */
  goto L_10ce0aca;
L_10ce0ac8:;
  /* 10ce0ac8 jmp 0x10ce0acf */
  goto L_10ce0acf;
L_10ce0aca:;
  /* 10ce0aca jmp 0x10ce0a15 */
  goto L_10ce0a15;
L_10ce0acf:;
  /* 10ce0acf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0ad1 jmp 0x10ce0ad6 */
  goto L_10ce0ad6;
L_10ce0ad3:;
  /* 10ce0ad3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ce0ad6:;
  /* 10ce0ad6 mov esp, ebp */
  ESP = (EBP);
  /* 10ce0ad8 pop ebp */
  EBP = (pop32());
  /* 10ce0ad9 ret  */
  ESPCHK(0x10ce0850u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ae0 @ 0x10ce0ae0 (10 bytes, 5 insns) */
void f_10ce0ae0(void) {
  FTRACE(0x10ce0ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce0ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce0ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce0ae3 mov eax, dword ptr [0x10cfdd88] */
  EAX = (r32((uint32_t)(0x10cfdd88)));
  /* 10ce0ae8 pop ebp */
  EBP = (pop32());
  /* 10ce0ae9 ret  */
  ESPCHK(0x10ce0ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010af0 @ 0x10ce0af0 (575 bytes, 196 insns) */
void f_10ce0af0(void) {
  FTRACE(0x10ce0af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce0af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce0af1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce0af3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce0af5 push 0x10cfa7c8 */
  push32((uint32_t)(0x10cfa7c8u));
  /* 10ce0afa push 0x10cdb798 */
  push32((uint32_t)(0x10cdb798u));
  /* 10ce0aff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ce0b05 push eax */
  push32((uint32_t)(EAX));
  /* 10ce0b06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ce0b0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0b10 push ebx */
  push32((uint32_t)(EBX));
  /* 10ce0b11 push esi */
  push32((uint32_t)(ESI));
  /* 10ce0b12 push edi */
  push32((uint32_t)(EDI));
  /* 10ce0b13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ce0b16 cmp dword ptr [0x10cfe69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0b1d jne 0x10ce0b6e */
  if (!C.zf) goto L_10ce0b6e;
  /* 10ce0b1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10ce0b22 push eax */
  push32((uint32_t)(EAX));
  /* 10ce0b23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce0b25 push 0x10cf9efc */
  push32((uint32_t)(0x10cf9efcu));
  /* 10ce0b2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce0b2c call dword ptr [0x10d002f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002f0))), 0x10ce0b32u);
  /* 10ce0b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce0b34 je 0x10ce0b42 */
  if (C.zf) goto L_10ce0b42;
  /* 10ce0b36 mov dword ptr [0x10cfe69c], 1 */
  w32((uint32_t)(0x10cfe69c), (0x1u));
  /* 10ce0b40 jmp 0x10ce0b6e */
  goto L_10ce0b6e;
L_10ce0b42:;
  /* 10ce0b42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10ce0b45 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0b46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce0b48 push 0x10cf9ef8 */
  push32((uint32_t)(0x10cf9ef8u));
  /* 10ce0b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce0b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0b51 call dword ptr [0x10d002ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002ec))), 0x10ce0b57u);
  /* 10ce0b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce0b59 je 0x10ce0b67 */
  if (C.zf) goto L_10ce0b67;
  /* 10ce0b5b mov dword ptr [0x10cfe69c], 2 */
  w32((uint32_t)(0x10cfe69c), (0x2u));
  /* 10ce0b65 jmp 0x10ce0b6e */
  goto L_10ce0b6e;
L_10ce0b67:;
  /* 10ce0b67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0b69 jmp 0x10ce0d49 */
  goto L_10ce0d49;
L_10ce0b6e:;
  /* 10ce0b6e cmp dword ptr [0x10cfe69c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe69c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0b75 jne 0x10ce0b92 */
  if (!C.zf) goto L_10ce0b92;
  /* 10ce0b77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0b7a push edx */
  push32((uint32_t)(EDX));
  /* 10ce0b7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0b7e push eax */
  push32((uint32_t)(EAX));
  /* 10ce0b7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0b82 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0b83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0b86 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0b87 call dword ptr [0x10d002f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002f0))), 0x10ce0b8du);
  /* 10ce0b8d jmp 0x10ce0d49 */
  goto L_10ce0d49;
L_10ce0b92:;
  /* 10ce0b92 cmp dword ptr [0x10cfe69c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe69c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0b99 jne 0x10ce0d47 */
  if (!C.zf) goto L_10ce0d47;
  /* 10ce0b9f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0ba3 jne 0x10ce0bad */
  if (!C.zf) goto L_10ce0bad;
  /* 10ce0ba5 mov eax, dword ptr [0x10cfe610] */
  EAX = (r32((uint32_t)(0x10cfe610)));
  /* 10ce0baa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10ce0bad:;
  /* 10ce0bad push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0baf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0bb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0bb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0bb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0bbc push edx */
  push32((uint32_t)(EDX));
  /* 10ce0bbd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ce0bc2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce0bc5 push eax */
  push32((uint32_t)(EAX));
  /* 10ce0bc6 call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10ce0bccu);
  /* 10ce0bcc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ce0bcf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0bd3 jne 0x10ce0bdc */
  if (!C.zf) goto L_10ce0bdc;
  /* 10ce0bd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0bd7 jmp 0x10ce0d49 */
  goto L_10ce0d49;
L_10ce0bdc:;
  /* 10ce0bdc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ce0be3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ce0be6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0be9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ce0beb call 0x10cd5830 */
  push32(0x10ce0bf0u); f_10cd5830();
  /* 10ce0bf0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10ce0bf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ce0bf6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ce0bf9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ce0bfc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ce0bff push edx */
  push32((uint32_t)(EDX));
  /* 10ce0c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0c02 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ce0c05 push eax */
  push32((uint32_t)(EAX));
  /* 10ce0c06 call 0x10cd6400 */
  push32(0x10ce0c0bu); f_10cd6400();
  /* 10ce0c0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0c0e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ce0c15 jmp 0x10ce0c2e */
  goto L_10ce0c2e;
  /* 10ce0c17 mov eax, 1 */
  EAX = (0x1u);
  /* 10ce0c1c ret  */
  ESPCHK(0x10ce0af0u, _esp0);
  ESP += 4; return;
  /* 10ce0c1d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce0c20 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10ce0c27 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ce0c2e:;
  /* 10ce0c2e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0c32 jne 0x10ce0c3b */
  if (!C.zf) goto L_10ce0c3b;
  /* 10ce0c34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0c36 jmp 0x10ce0d49 */
  goto L_10ce0d49;
L_10ce0c3b:;
  /* 10ce0c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0c3f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ce0c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0c43 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ce0c46 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0c47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0c4a push eax */
  push32((uint32_t)(EAX));
  /* 10ce0c4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0c4e push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0c4f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ce0c54 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce0c57 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0c58 call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10ce0c5eu);
  /* 10ce0c5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce0c60 jne 0x10ce0c69 */
  if (!C.zf) goto L_10ce0c69;
  /* 10ce0c62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0c64 jmp 0x10ce0d49 */
  goto L_10ce0d49;
L_10ce0c69:;
  /* 10ce0c69 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ce0c70 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ce0c73 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10ce0c77 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0c7a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ce0c7c call 0x10cd5830 */
  push32(0x10ce0c81u); f_10cd5830();
  /* 10ce0c81 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10ce0c84 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ce0c87 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ce0c8a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ce0c8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ce0c94 jmp 0x10ce0cad */
  goto L_10ce0cad;
  /* 10ce0c96 mov eax, 1 */
  EAX = (0x1u);
  /* 10ce0c9b ret  */
  ESPCHK(0x10ce0af0u, _esp0);
  ESP += 4; return;
  /* 10ce0c9c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce0c9f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ce0ca6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ce0cad:;
  /* 10ce0cad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0cb1 jne 0x10ce0cba */
  if (!C.zf) goto L_10ce0cba;
  /* 10ce0cb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0cb5 jmp 0x10ce0d49 */
  goto L_10ce0d49;
L_10ce0cba:;
  /* 10ce0cba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0cbe jne 0x10ce0cc9 */
  if (!C.zf) goto L_10ce0cc9;
  /* 10ce0cc0 mov edx, dword ptr [0x10cfe600] */
  EDX = (r32((uint32_t)(0x10cfe600)));
  /* 10ce0cc6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10ce0cc9:;
  /* 10ce0cc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0ccc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ce0ccf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10ce0cd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0cd8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ce0cdb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10ce0ce2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ce0ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0ce6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ce0ce9 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0cea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ce0ced push eax */
  push32((uint32_t)(EAX));
  /* 10ce0cee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0cf1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0cf2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ce0cf5 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0cf6 call dword ptr [0x10d002ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002ec))), 0x10ce0cfcu);
  /* 10ce0cfc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ce0cff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0d02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ce0d05 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0d07 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10ce0d0c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0d12 je 0x10ce0d28 */
  if (C.zf) goto L_10ce0d28;
  /* 10ce0d14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0d17 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ce0d1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0d1c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ce0d20 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0d26 je 0x10ce0d2c */
  if (C.zf) goto L_10ce0d2c;
L_10ce0d28:;
  /* 10ce0d28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0d2a jmp 0x10ce0d49 */
  goto L_10ce0d49;
L_10ce0d2c:;
  /* 10ce0d2c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0d2f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ce0d31 push eax */
  push32((uint32_t)(EAX));
  /* 10ce0d32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ce0d35 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0d36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce0d39 push edx */
  push32((uint32_t)(EDX));
  /* 10ce0d3a call 0x10cda580 */
  push32(0x10ce0d3fu); f_10cda580();
  /* 10ce0d3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0d42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ce0d45 jmp 0x10ce0d49 */
  goto L_10ce0d49;
L_10ce0d47:;
  /* 10ce0d47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ce0d49:;
  /* 10ce0d49 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10ce0d4c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce0d4f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ce0d56 pop edi */
  EDI = (pop32());
  /* 10ce0d57 pop esi */
  ESI = (pop32());
  /* 10ce0d58 pop ebx */
  EBX = (pop32());
  /* 10ce0d59 mov esp, ebp */
  ESP = (EBP);
  /* 10ce0d5b pop ebp */
  EBP = (pop32());
  /* 10ce0d5c ret  */
  ESPCHK(0x10ce0af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d60 @ 0x10ce0d60 (208 bytes, 85 insns) */
void f_10ce0d60(void) {
  FTRACE(0x10ce0d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce0d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce0d61 mov ebp, esp */
  EBP = (ESP);
  /* 10ce0d63 push edi */
  push32((uint32_t)(EDI));
  /* 10ce0d64 push esi */
  push32((uint32_t)(ESI));
  /* 10ce0d65 push ebx */
  push32((uint32_t)(EBX));
  /* 10ce0d66 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0d69 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0d6c lea eax, [0x10cfe5f8] */
  EAX = ((uint32_t)(0x10cfe5f8));
  /* 10ce0d72 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0d76 jne 0x10ce0db3 */
  if (!C.zf) goto L_10ce0db3;
  /* 10ce0d78 mov al, 0xff */
  AL = (0xffu);
  /* 10ce0d7a mov edi, edi */
  EDI = (EDI);
L_10ce0d7c:;
  /* 10ce0d7c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ce0d7e je 0x10ce0dae */
  if (C.zf) goto L_10ce0dae;
  /* 10ce0d80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ce0d82 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ce0d83 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10ce0d85 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ce0d86 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0d88 je 0x10ce0d7c */
  if (C.zf) goto L_10ce0d7c;
  /* 10ce0d8a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ce0d8c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0d8e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ce0d90 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10ce0d93 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ce0d95 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ce0d97 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10ce0d99 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ce0d9b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0d9d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ce0d9f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10ce0da2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ce0da4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ce0da6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0da8 je 0x10ce0d7c */
  if (C.zf) goto L_10ce0d7c;
  /* 10ce0daa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ce0dac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10ce0dae:;
  /* 10ce0dae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10ce0db1 jmp 0x10ce0e2b */
  goto L_10ce0e2b;
L_10ce0db3:;
  /* 10ce0db3 lock inc dword ptr [0x10cfe78c] */
  x86_unimpl("lock inc @ 0x10ce0db3");
  /* 10ce0dba cmp dword ptr [0x10cfe77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0dc1 jg 0x10ce0dc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ce0dc7;
  /* 10ce0dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0dc5 jmp 0x10ce0ddc */
  goto L_10ce0ddc;
L_10ce0dc7:;
  /* 10ce0dc7 lock dec dword ptr [0x10cfe78c] */
  x86_unimpl("lock dec @ 0x10ce0dc7");
  /* 10ce0dce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ce0dd0 call 0x10cd6090 */
  push32(0x10ce0dd5u); f_10cd6090();
  /* 10ce0dd5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10ce0ddc:;
  /* 10ce0ddc mov eax, 0xff */
  EAX = (0xffu);
  /* 10ce0de1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ce0de3 nop  */
  /* nop */
L_10ce0de4:;
  /* 10ce0de4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ce0de6 je 0x10ce0e0f */
  if (C.zf) goto L_10ce0e0f;
  /* 10ce0de8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ce0dea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ce0deb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10ce0ded inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ce0dee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0df0 je 0x10ce0de4 */
  if (C.zf) goto L_10ce0de4;
  /* 10ce0df2 push eax */
  push32((uint32_t)(EAX));
  /* 10ce0df3 push ebx */
  push32((uint32_t)(EBX));
  /* 10ce0df4 call 0x10ce1ed0 */
  push32(0x10ce0df9u); f_10ce1ed0();
  /* 10ce0df9 mov ebx, eax */
  EBX = (EAX);
  /* 10ce0dfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0dfe call 0x10ce1ed0 */
  push32(0x10ce0e03u); f_10ce1ed0();
  /* 10ce0e03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0e06 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0e08 je 0x10ce0de4 */
  if (C.zf) goto L_10ce0de4;
  /* 10ce0e0a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce0e0c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10ce0e0f:;
  /* 10ce0e0f mov ebx, eax */
  EBX = (EAX);
  /* 10ce0e11 pop eax */
  EAX = (pop32());
  /* 10ce0e12 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0e14 jne 0x10ce0e1f */
  if (!C.zf) goto L_10ce0e1f;
  /* 10ce0e16 lock dec dword ptr [0x10cfe78c] */
  x86_unimpl("lock dec @ 0x10ce0e16");
  /* 10ce0e1d jmp 0x10ce0e29 */
  goto L_10ce0e29;
L_10ce0e1f:;
  /* 10ce0e1f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ce0e21 call 0x10cd6130 */
  push32(0x10ce0e26u); f_10cd6130();
  /* 10ce0e26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ce0e29:;
  /* 10ce0e29 mov eax, ebx */
  EAX = (EBX);
L_10ce0e2b:;
  /* 10ce0e2b pop ebx */
  EBX = (pop32());
  /* 10ce0e2c pop esi */
  ESI = (pop32());
  /* 10ce0e2d pop edi */
  EDI = (pop32());
  /* 10ce0e2e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ce0e2f ret  */
  ESPCHK(0x10ce0d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e30 @ 0x10ce0e30 (257 bytes, 103 insns) */
void f_10ce0e30(void) {
  FTRACE(0x10ce0e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce0e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce0e31 mov ebp, esp */
  EBP = (ESP);
  /* 10ce0e33 push edi */
  push32((uint32_t)(EDI));
  /* 10ce0e34 push esi */
  push32((uint32_t)(ESI));
  /* 10ce0e35 push ebx */
  push32((uint32_t)(EBX));
  /* 10ce0e36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce0e39 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce0e3b je 0x10ce0f2a */
  if (C.zf) goto L_10ce0f2a;
  /* 10ce0e41 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0e44 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce0e47 lea eax, [0x10cfe5f8] */
  EAX = ((uint32_t)(0x10cfe5f8));
  /* 10ce0e4d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0e51 jne 0x10ce0ea1 */
  if (!C.zf) goto L_10ce0ea1;
  /* 10ce0e53 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10ce0e55 mov bl, 0x5a */
  BL = (0x5au);
  /* 10ce0e57 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10ce0e59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ce0e5c:;
  /* 10ce0e5c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10ce0e5e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10ce0e60 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10ce0e62 je 0x10ce0e85 */
  if (C.zf) goto L_10ce0e85;
  /* 10ce0e64 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ce0e66 je 0x10ce0e85 */
  if (C.zf) goto L_10ce0e85;
  /* 10ce0e68 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ce0e69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ce0e6a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0e6c jb 0x10ce0e74 */
  if (C.cf) goto L_10ce0e74;
  /* 10ce0e6e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0e70 ja 0x10ce0e74 */
  if ((!C.cf&&!C.zf)) goto L_10ce0e74;
  /* 10ce0e72 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10ce0e74:;
  /* 10ce0e74 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0e76 jb 0x10ce0e7e */
  if (C.cf) goto L_10ce0e7e;
  /* 10ce0e78 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0e7a ja 0x10ce0e7e */
  if ((!C.cf&&!C.zf)) goto L_10ce0e7e;
  /* 10ce0e7c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10ce0e7e:;
  /* 10ce0e7e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0e80 jne 0x10ce0e8f */
  if (!C.zf) goto L_10ce0e8f;
  /* 10ce0e82 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ce0e83 jne 0x10ce0e5c */
  if (!C.zf) goto L_10ce0e5c;
L_10ce0e85:;
  /* 10ce0e85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce0e87 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce0e89 je 0x10ce0f2a */
  if (C.zf) goto L_10ce0f2a;
L_10ce0e8f:;
  /* 10ce0e8f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10ce0e94 jb 0x10ce0f2a */
  if (C.cf) goto L_10ce0f2a;
  /* 10ce0e9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ce0e9c jmp 0x10ce0f2a */
  goto L_10ce0f2a;
L_10ce0ea1:;
  /* 10ce0ea1 lock inc dword ptr [0x10cfe78c] */
  x86_unimpl("lock inc @ 0x10ce0ea1");
  /* 10ce0ea8 cmp dword ptr [0x10cfe77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0eaf jg 0x10ce0eb5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ce0eb5;
  /* 10ce0eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce0eb3 jmp 0x10ce0ece */
  goto L_10ce0ece;
L_10ce0eb5:;
  /* 10ce0eb5 lock dec dword ptr [0x10cfe78c] */
  x86_unimpl("lock dec @ 0x10ce0eb5");
  /* 10ce0ebc mov ebx, ecx */
  EBX = (ECX);
  /* 10ce0ebe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ce0ec0 call 0x10cd6090 */
  push32(0x10ce0ec5u); f_10cd6090();
  /* 10ce0ec5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10ce0ecc mov ecx, ebx */
  ECX = (EBX);
L_10ce0ece:;
  /* 10ce0ece xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0ed0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ce0ed2 mov edi, edi */
  EDI = (EDI);
L_10ce0ed4:;
  /* 10ce0ed4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ce0ed6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0ed8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10ce0eda je 0x10ce0eff */
  if (C.zf) goto L_10ce0eff;
  /* 10ce0edc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ce0ede je 0x10ce0eff */
  if (C.zf) goto L_10ce0eff;
  /* 10ce0ee0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ce0ee1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ce0ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0ee3 push eax */
  push32((uint32_t)(EAX));
  /* 10ce0ee4 push ebx */
  push32((uint32_t)(EBX));
  /* 10ce0ee5 call 0x10ce1ed0 */
  push32(0x10ce0eeau); f_10ce1ed0();
  /* 10ce0eea mov ebx, eax */
  EBX = (EAX);
  /* 10ce0eec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0eef call 0x10ce1ed0 */
  push32(0x10ce0ef4u); f_10ce1ed0();
  /* 10ce0ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0ef7 pop ecx */
  ECX = (pop32());
  /* 10ce0ef8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0efa jne 0x10ce0f05 */
  if (!C.zf) goto L_10ce0f05;
  /* 10ce0efc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ce0efd jne 0x10ce0ed4 */
  if (!C.zf) goto L_10ce0ed4;
L_10ce0eff:;
  /* 10ce0eff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce0f01 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0f03 je 0x10ce0f0e */
  if (C.zf) goto L_10ce0f0e;
L_10ce0f05:;
  /* 10ce0f05 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10ce0f0a jb 0x10ce0f0e */
  if (C.cf) goto L_10ce0f0e;
  /* 10ce0f0c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10ce0f0e:;
  /* 10ce0f0e pop eax */
  EAX = (pop32());
  /* 10ce0f0f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0f11 jne 0x10ce0f1c */
  if (!C.zf) goto L_10ce0f1c;
  /* 10ce0f13 lock dec dword ptr [0x10cfe78c] */
  x86_unimpl("lock dec @ 0x10ce0f13");
  /* 10ce0f1a jmp 0x10ce0f2a */
  goto L_10ce0f2a;
L_10ce0f1c:;
  /* 10ce0f1c mov ebx, ecx */
  EBX = (ECX);
  /* 10ce0f1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ce0f20 call 0x10cd6130 */
  push32(0x10ce0f25u); f_10cd6130();
  /* 10ce0f25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0f28 mov ecx, ebx */
  ECX = (EBX);
L_10ce0f2a:;
  /* 10ce0f2a mov eax, ecx */
  EAX = (ECX);
  /* 10ce0f2c pop ebx */
  EBX = (pop32());
  /* 10ce0f2d pop esi */
  ESI = (pop32());
  /* 10ce0f2e pop edi */
  EDI = (pop32());
  /* 10ce0f2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ce0f30 ret  */
  ESPCHK(0x10ce0e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f40 @ 0x10ce0f40 (255 bytes, 88 insns) */
void f_10ce0f40(void) {
  FTRACE(0x10ce0f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce0f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce0f41 mov ebp, esp */
  EBP = (ESP);
  /* 10ce0f43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10ce0f46:;
  /* 10ce0f46 cmp dword ptr [0x10cfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0f4d jle 0x10ce0f66 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce0f66;
  /* 10ce0f4f push 8 */
  push32((uint32_t)(0x8u));
  /* 10ce0f51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0f54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce0f56 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ce0f58 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce0f59 call 0x10cd86a0 */
  push32(0x10ce0f5eu); f_10cd86a0();
  /* 10ce0f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0f61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ce0f64 jmp 0x10ce0f7f */
  goto L_10ce0f7f;
L_10ce0f66:;
  /* 10ce0f66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0f69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0f6b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce0f6d mov ecx, dword ptr [0x10cfcc98] */
  ECX = (r32((uint32_t)(0x10cfcc98)));
  /* 10ce0f73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0f75 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ce0f79 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0f7c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ce0f7f:;
  /* 10ce0f7f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0f83 je 0x10ce0f90 */
  if (C.zf) goto L_10ce0f90;
  /* 10ce0f85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0f88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0f8b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ce0f8e jmp 0x10ce0f46 */
  goto L_10ce0f46;
L_10ce0f90:;
  /* 10ce0f90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0f93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0f95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ce0f97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ce0f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0f9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0fa0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ce0fa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0fa6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ce0fa9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0fad je 0x10ce0fb5 */
  if (C.zf) goto L_10ce0fb5;
  /* 10ce0faf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0fb3 jne 0x10ce0fc8 */
  if (!C.zf) goto L_10ce0fc8;
L_10ce0fb5:;
  /* 10ce0fb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0fb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce0fba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce0fbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ce0fbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce0fc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0fc5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ce0fc8:;
  /* 10ce0fc8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ce0fcf:;
  /* 10ce0fcf cmp dword ptr [0x10cfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce0fd6 jle 0x10ce0feb */
  if ((C.zf||C.sf!=C.of)) goto L_10ce0feb;
  /* 10ce0fd8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ce0fda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0fdd push edx */
  push32((uint32_t)(EDX));
  /* 10ce0fde call 0x10cd86a0 */
  push32(0x10ce0fe3u); f_10cd86a0();
  /* 10ce0fe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce0fe6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ce0fe9 jmp 0x10ce1000 */
  goto L_10ce1000;
L_10ce0feb:;
  /* 10ce0feb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce0fee mov ecx, dword ptr [0x10cfcc98] */
  ECX = (r32((uint32_t)(0x10cfcc98)));
  /* 10ce0ff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0ff6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ce0ffa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ce0ffd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ce1000:;
  /* 10ce1000 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1004 je 0x10ce102b */
  if (C.zf) goto L_10ce102b;
  /* 10ce1006 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce1009 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce100c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce100f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10ce1013 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ce1016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1019 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce101b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ce101d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce1020 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1023 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1026 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ce1029 jmp 0x10ce0fcf */
  goto L_10ce0fcf;
L_10ce102b:;
  /* 10ce102b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce102f jne 0x10ce1038 */
  if (!C.zf) goto L_10ce1038;
  /* 10ce1031 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce1034 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ce1036 jmp 0x10ce103b */
  goto L_10ce103b;
L_10ce1038:;
  /* 10ce1038 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ce103b:;
  /* 10ce103b mov esp, ebp */
  ESP = (EBP);
  /* 10ce103d pop ebp */
  EBP = (pop32());
  /* 10ce103e ret  */
  ESPCHK(0x10ce0f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011040 @ 0x10ce1040 (17 bytes, 8 insns) */
void f_10ce1040(void) {
  FTRACE(0x10ce1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce1040 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce1041 mov ebp, esp */
  EBP = (ESP);
  /* 10ce1043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1046 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1047 call 0x10ce0f40 */
  push32(0x10ce104cu); f_10ce0f40();
  /* 10ce104c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce104f pop ebp */
  EBP = (pop32());
  /* 10ce1050 ret  */
  ESPCHK(0x10ce1040u, _esp0);
  ESP += 4; return;
}

/* FUN_10011060 @ 0x10ce1060 (297 bytes, 106 insns) */
void f_10ce1060(void) {
  FTRACE(0x10ce1060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce1060 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce1061 mov ebp, esp */
  EBP = (ESP);
  /* 10ce1063 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce1066 push esi */
  push32((uint32_t)(ESI));
L_10ce1067:;
  /* 10ce1067 cmp dword ptr [0x10cfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce106e jle 0x10ce1087 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce1087;
  /* 10ce1070 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ce1072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1075 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1077 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ce1079 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce107a call 0x10cd86a0 */
  push32(0x10ce107fu); f_10cd86a0();
  /* 10ce107f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1082 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ce1085 jmp 0x10ce10a0 */
  goto L_10ce10a0;
L_10ce1087:;
  /* 10ce1087 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce108a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce108c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce108e mov ecx, dword ptr [0x10cfcc98] */
  ECX = (r32((uint32_t)(0x10cfcc98)));
  /* 10ce1094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1096 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ce109a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ce109d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ce10a0:;
  /* 10ce10a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce10a4 je 0x10ce10b1 */
  if (C.zf) goto L_10ce10b1;
  /* 10ce10a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce10a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce10ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ce10af jmp 0x10ce1067 */
  goto L_10ce1067;
L_10ce10b1:;
  /* 10ce10b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce10b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce10b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ce10b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ce10bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce10be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce10c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ce10c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce10c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ce10ca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce10ce je 0x10ce10d6 */
  if (C.zf) goto L_10ce10d6;
  /* 10ce10d0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce10d4 jne 0x10ce10e9 */
  if (!C.zf) goto L_10ce10e9;
L_10ce10d6:;
  /* 10ce10d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce10d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce10db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce10dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ce10e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce10e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce10e6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ce10e9:;
  /* 10ce10e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ce10f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ce10f7:;
  /* 10ce10f7 cmp dword ptr [0x10cfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce10fe jle 0x10ce1113 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce1113;
  /* 10ce1100 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ce1102 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce1105 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1106 call 0x10cd86a0 */
  push32(0x10ce110bu); f_10cd86a0();
  /* 10ce110b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce110e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ce1111 jmp 0x10ce1128 */
  goto L_10ce1128;
L_10ce1113:;
  /* 10ce1113 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce1116 mov ecx, dword ptr [0x10cfcc98] */
  ECX = (r32((uint32_t)(0x10cfcc98)));
  /* 10ce111c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce111e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ce1122 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1125 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10ce1128:;
  /* 10ce1128 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce112c je 0x10ce1169 */
  if (C.zf) goto L_10ce1169;
  /* 10ce112e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1130 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ce1132 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce1135 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1136 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1139 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce113a call 0x10ce2000 */
  push32(0x10ce113fu); f_10ce2000();
  /* 10ce113f mov ecx, eax */
  ECX = (EAX);
  /* 10ce1141 mov esi, edx */
  ESI = (EDX);
  /* 10ce1143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce1146 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce1149 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ce114a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce114c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce114e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ce1151 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10ce1154 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1157 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1159 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce115b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ce115e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1161 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1164 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ce1167 jmp 0x10ce10f7 */
  goto L_10ce10f7;
L_10ce1169:;
  /* 10ce1169 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce116d jne 0x10ce117e */
  if (!C.zf) goto L_10ce117e;
  /* 10ce116f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1172 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ce1174 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce1177 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce117a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ce117c jmp 0x10ce1184 */
  goto L_10ce1184;
L_10ce117e:;
  /* 10ce117e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1181 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10ce1184:;
  /* 10ce1184 pop esi */
  ESI = (pop32());
  /* 10ce1185 mov esp, ebp */
  ESP = (EBP);
  /* 10ce1187 pop ebp */
  EBP = (pop32());
  /* 10ce1188 ret  */
  ESPCHK(0x10ce1060u, _esp0);
  ESP += 4; return;
}

/* FUN_10011190 @ 0x10ce1190 (61 bytes, 18 insns) */
void f_10ce1190(void) {
  FTRACE(0x10ce1190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce1190 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce1191 mov ebp, esp */
  EBP = (ESP);
  /* 10ce1193 cmp dword ptr [0x10cfe758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce119a jne 0x10ce11cb */
  if (!C.zf) goto L_10ce11cb;
  /* 10ce119c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ce119e call 0x10cd6090 */
  push32(0x10ce11a3u); f_10cd6090();
  /* 10ce11a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce11a6 cmp dword ptr [0x10cfe758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce11ad jne 0x10ce11c1 */
  if (!C.zf) goto L_10ce11c1;
  /* 10ce11af call 0x10ce11f0 */
  push32(0x10ce11b4u); f_10ce11f0();
  /* 10ce11b4 mov eax, dword ptr [0x10cfe758] */
  EAX = (r32((uint32_t)(0x10cfe758)));
  /* 10ce11b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce11bc mov dword ptr [0x10cfe758], eax */
  w32((uint32_t)(0x10cfe758), (EAX));
L_10ce11c1:;
  /* 10ce11c1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ce11c3 call 0x10cd6130 */
  push32(0x10ce11c8u); f_10cd6130();
  /* 10ce11c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ce11cb:;
  /* 10ce11cb pop ebp */
  EBP = (pop32());
  /* 10ce11cc ret  */
  ESPCHK(0x10ce1190u, _esp0);
  ESP += 4; return;
}

/* FUN_100111d0 @ 0x10ce11d0 (30 bytes, 11 insns) */
void f_10ce11d0(void) {
  FTRACE(0x10ce11d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce11d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce11d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce11d3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ce11d5 call 0x10cd6090 */
  push32(0x10ce11dau); f_10cd6090();
  /* 10ce11da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce11dd call 0x10ce11f0 */
  push32(0x10ce11e2u); f_10ce11f0();
  /* 10ce11e2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ce11e4 call 0x10cd6130 */
  push32(0x10ce11e9u); f_10cd6130();
  /* 10ce11e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce11ec pop ebp */
  EBP = (pop32());
  /* 10ce11ed ret  */
  ESPCHK(0x10ce11d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111f0 @ 0x10ce11f0 (939 bytes, 266 insns) */
void f_10ce11f0(void) {
  FTRACE(0x10ce11f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce11f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce11f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce11f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce11f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ce11fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ce11ff call 0x10cd6090 */
  push32(0x10ce1204u); f_10cd6090();
  /* 10ce1204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1207 mov dword ptr [0x10cfe6a0], 0 */
  w32((uint32_t)(0x10cfe6a0), (0x0u));
  /* 10ce1211 mov dword ptr [0x10cfde38], 0xffffffff */
  w32((uint32_t)(0x10cfde38), (0xffffffffu));
  /* 10ce121b mov eax, dword ptr [0x10cfde38] */
  EAX = (r32((uint32_t)(0x10cfde38)));
  /* 10ce1220 mov dword ptr [0x10cfde28], eax */
  w32((uint32_t)(0x10cfde28), (EAX));
  /* 10ce1225 push 0x10cfa828 */
  push32((uint32_t)(0x10cfa828u));
  /* 10ce122a call 0x10ce2070 */
  push32(0x10ce122fu); f_10ce2070();
  /* 10ce122f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1232 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ce1235 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1239 jne 0x10ce1373 */
  if (!C.zf) goto L_10ce1373;
  /* 10ce123f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ce1241 call 0x10cd6130 */
  push32(0x10ce1246u); f_10cd6130();
  /* 10ce1246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1249 push 0x10cfe6a8 */
  push32((uint32_t)(0x10cfe6a8u));
  /* 10ce124e call dword ptr [0x10d002a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a0))), 0x10ce1254u);
  /* 10ce1254 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1257 je 0x10ce136e */
  if (C.zf) goto L_10ce136e;
  /* 10ce125d mov dword ptr [0x10cfe6a0], 1 */
  w32((uint32_t)(0x10cfe6a0), (0x1u));
  /* 10ce1267 mov ecx, dword ptr [0x10cfe6a8] */
  ECX = (r32((uint32_t)(0x10cfe6a8)));
  /* 10ce126d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce1270 mov dword ptr [0x10cfdd90], ecx */
  w32((uint32_t)(0x10cfdd90), (ECX));
  /* 10ce1276 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1278 mov dx, word ptr [0x10cfe6ee] */
  DX = (r16((uint32_t)(0x10cfe6ee)));
  /* 10ce127f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce1281 je 0x10ce1299 */
  if (C.zf) goto L_10ce1299;
  /* 10ce1283 mov eax, dword ptr [0x10cfe6fc] */
  EAX = (r32((uint32_t)(0x10cfe6fc)));
  /* 10ce1288 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce128b mov ecx, dword ptr [0x10cfdd90] */
  ECX = (r32((uint32_t)(0x10cfdd90)));
  /* 10ce1291 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1293 mov dword ptr [0x10cfdd90], ecx */
  w32((uint32_t)(0x10cfdd90), (ECX));
L_10ce1299:;
  /* 10ce1299 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce129b mov dx, word ptr [0x10cfe742] */
  DX = (r16((uint32_t)(0x10cfe742)));
  /* 10ce12a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce12a4 je 0x10ce12ce */
  if (C.zf) goto L_10ce12ce;
  /* 10ce12a6 cmp dword ptr [0x10cfe750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce12ad je 0x10ce12ce */
  if (C.zf) goto L_10ce12ce;
  /* 10ce12af mov dword ptr [0x10cfdd94], 1 */
  w32((uint32_t)(0x10cfdd94), (0x1u));
  /* 10ce12b9 mov eax, dword ptr [0x10cfe750] */
  EAX = (r32((uint32_t)(0x10cfe750)));
  /* 10ce12be sub eax, dword ptr [0x10cfe6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfe6fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce12c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce12c7 mov dword ptr [0x10cfdd98], eax */
  w32((uint32_t)(0x10cfdd98), (EAX));
  /* 10ce12cc jmp 0x10ce12e2 */
  goto L_10ce12e2;
L_10ce12ce:;
  /* 10ce12ce mov dword ptr [0x10cfdd94], 0 */
  w32((uint32_t)(0x10cfdd94), (0x0u));
  /* 10ce12d8 mov dword ptr [0x10cfdd98], 0 */
  w32((uint32_t)(0x10cfdd98), (0x0u));
L_10ce12e2:;
  /* 10ce12e2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ce12e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce12e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce12e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ce12ea mov edx, dword ptr [0x10cfde1c] */
  EDX = (r32((uint32_t)(0x10cfde1c)));
  /* 10ce12f0 push edx */
  push32((uint32_t)(EDX));
  /* 10ce12f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce12f3 push 0x10cfe6ac */
  push32((uint32_t)(0x10cfe6acu));
  /* 10ce12f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ce12fd mov eax, dword ptr [0x10cfe610] */
  EAX = (r32((uint32_t)(0x10cfe610)));
  /* 10ce1302 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1303 call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10ce1309u);
  /* 10ce1309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce130b je 0x10ce131f */
  if (C.zf) goto L_10ce131f;
  /* 10ce130d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1311 jne 0x10ce131f */
  if (!C.zf) goto L_10ce131f;
  /* 10ce1313 mov ecx, dword ptr [0x10cfde1c] */
  ECX = (r32((uint32_t)(0x10cfde1c)));
  /* 10ce1319 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10ce131d jmp 0x10ce1328 */
  goto L_10ce1328;
L_10ce131f:;
  /* 10ce131f mov edx, dword ptr [0x10cfde1c] */
  EDX = (r32((uint32_t)(0x10cfde1c)));
  /* 10ce1325 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10ce1328:;
  /* 10ce1328 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10ce132b push eax */
  push32((uint32_t)(EAX));
  /* 10ce132c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce132e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ce1330 mov ecx, dword ptr [0x10cfde20] */
  ECX = (r32((uint32_t)(0x10cfde20)));
  /* 10ce1336 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1337 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce1339 push 0x10cfe700 */
  push32((uint32_t)(0x10cfe700u));
  /* 10ce133e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ce1343 mov edx, dword ptr [0x10cfe610] */
  EDX = (r32((uint32_t)(0x10cfe610)));
  /* 10ce1349 push edx */
  push32((uint32_t)(EDX));
  /* 10ce134a call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10ce1350u);
  /* 10ce1350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce1352 je 0x10ce1365 */
  if (C.zf) goto L_10ce1365;
  /* 10ce1354 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1358 jne 0x10ce1365 */
  if (!C.zf) goto L_10ce1365;
  /* 10ce135a mov eax, dword ptr [0x10cfde20] */
  EAX = (r32((uint32_t)(0x10cfde20)));
  /* 10ce135f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10ce1363 jmp 0x10ce136e */
  goto L_10ce136e;
L_10ce1365:;
  /* 10ce1365 mov ecx, dword ptr [0x10cfde20] */
  ECX = (r32((uint32_t)(0x10cfde20)));
  /* 10ce136b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10ce136e:;
  /* 10ce136e jmp 0x10ce1597 */
  goto L_10ce1597;
L_10ce1373:;
  /* 10ce1373 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1376 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ce1379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce137b je 0x10ce139d */
  if (C.zf) goto L_10ce139d;
  /* 10ce137d cmp dword ptr [0x10cfe754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1384 je 0x10ce13ac */
  if (C.zf) goto L_10ce13ac;
  /* 10ce1386 mov ecx, dword ptr [0x10cfe754] */
  ECX = (r32((uint32_t)(0x10cfe754)));
  /* 10ce138c push ecx */
  push32((uint32_t)(ECX));
  /* 10ce138d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1390 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1391 call 0x10cde320 */
  push32(0x10ce1396u); f_10cde320();
  /* 10ce1396 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce139b jne 0x10ce13ac */
  if (!C.zf) goto L_10ce13ac;
L_10ce139d:;
  /* 10ce139d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ce139f call 0x10cd6130 */
  push32(0x10ce13a4u); f_10cd6130();
  /* 10ce13a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce13a7 jmp 0x10ce1597 */
  goto L_10ce1597;
L_10ce13ac:;
  /* 10ce13ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce13ae mov eax, dword ptr [0x10cfe754] */
  EAX = (r32((uint32_t)(0x10cfe754)));
  /* 10ce13b3 push eax */
  push32((uint32_t)(EAX));
  /* 10ce13b4 call 0x10cd3120 */
  push32(0x10ce13b9u); f_10cd3120();
  /* 10ce13b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce13bc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10ce13c1 push 0x10cfa820 */
  push32((uint32_t)(0x10cfa820u));
  /* 10ce13c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce13c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce13cb push ecx */
  push32((uint32_t)(ECX));
  /* 10ce13cc call 0x10cd54c0 */
  push32(0x10ce13d1u); f_10cd54c0();
  /* 10ce13d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce13d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce13d7 push eax */
  push32((uint32_t)(EAX));
  /* 10ce13d8 call 0x10cd2690 */
  push32(0x10ce13ddu); f_10cd2690();
  /* 10ce13dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce13e0 mov dword ptr [0x10cfe754], eax */
  w32((uint32_t)(0x10cfe754), (EAX));
  /* 10ce13e5 cmp dword ptr [0x10cfe754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce13ec jne 0x10ce13fd */
  if (!C.zf) goto L_10ce13fd;
  /* 10ce13ee push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ce13f0 call 0x10cd6130 */
  push32(0x10ce13f5u); f_10cd6130();
  /* 10ce13f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce13f8 jmp 0x10ce1597 */
  goto L_10ce1597;
L_10ce13fd:;
  /* 10ce13fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1400 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1401 mov eax, dword ptr [0x10cfe754] */
  EAX = (r32((uint32_t)(0x10cfe754)));
  /* 10ce1406 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1407 call 0x10cd5640 */
  push32(0x10ce140cu); f_10cd5640();
  /* 10ce140c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce140f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ce1411 call 0x10cd6130 */
  push32(0x10ce1416u); f_10cd6130();
  /* 10ce1416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1419 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ce141b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce141e push ecx */
  push32((uint32_t)(ECX));
  /* 10ce141f mov edx, dword ptr [0x10cfde1c] */
  EDX = (r32((uint32_t)(0x10cfde1c)));
  /* 10ce1425 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1426 call 0x10cd5eb0 */
  push32(0x10ce142bu); f_10cd5eb0();
  /* 10ce142b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce142e mov eax, dword ptr [0x10cfde1c] */
  EAX = (r32((uint32_t)(0x10cfde1c)));
  /* 10ce1433 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10ce1437 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce143a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce143d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ce1440 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1443 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ce1446 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1449 jne 0x10ce145d */
  if (!C.zf) goto L_10ce145d;
  /* 10ce144b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce144e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1451 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce1454 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1457 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce145a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ce145d:;
  /* 10ce145d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1460 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1461 call 0x10ce0f40 */
  push32(0x10ce1466u); f_10ce0f40();
  /* 10ce1466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1469 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce146f mov dword ptr [0x10cfdd90], eax */
  w32((uint32_t)(0x10cfdd90), (EAX));
L_10ce1474:;
  /* 10ce1474 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1477 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ce147a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce147d je 0x10ce1495 */
  if (C.zf) goto L_10ce1495;
  /* 10ce147f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1482 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ce1485 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1488 jl 0x10ce14a0 */
  if ((C.sf!=C.of)) goto L_10ce14a0;
  /* 10ce148a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce148d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ce1490 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1493 jg 0x10ce14a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ce14a0;
L_10ce1495:;
  /* 10ce1495 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1498 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce149b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ce149e jmp 0x10ce1474 */
  goto L_10ce1474;
L_10ce14a0:;
  /* 10ce14a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce14a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ce14a6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce14a9 jne 0x10ce1545 */
  if (!C.zf) goto L_10ce1545;
  /* 10ce14af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce14b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce14b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ce14b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce14bb push edx */
  push32((uint32_t)(EDX));
  /* 10ce14bc call 0x10ce0f40 */
  push32(0x10ce14c1u); f_10ce0f40();
  /* 10ce14c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce14c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce14c7 mov ecx, dword ptr [0x10cfdd90] */
  ECX = (r32((uint32_t)(0x10cfdd90)));
  /* 10ce14cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce14cf mov dword ptr [0x10cfdd90], ecx */
  w32((uint32_t)(0x10cfdd90), (ECX));
L_10ce14d5:;
  /* 10ce14d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce14d8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ce14db cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce14de jl 0x10ce14f6 */
  if ((C.sf!=C.of)) goto L_10ce14f6;
  /* 10ce14e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce14e3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ce14e6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce14e9 jg 0x10ce14f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ce14f6;
  /* 10ce14eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce14ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce14f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ce14f4 jmp 0x10ce14d5 */
  goto L_10ce14d5;
L_10ce14f6:;
  /* 10ce14f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce14f9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ce14fc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce14ff jne 0x10ce1545 */
  if (!C.zf) goto L_10ce1545;
  /* 10ce1501 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1504 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1507 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ce150a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce150d push ecx */
  push32((uint32_t)(ECX));
  /* 10ce150e call 0x10ce0f40 */
  push32(0x10ce1513u); f_10ce0f40();
  /* 10ce1513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1516 mov edx, dword ptr [0x10cfdd90] */
  EDX = (r32((uint32_t)(0x10cfdd90)));
  /* 10ce151c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce151e mov dword ptr [0x10cfdd90], edx */
  w32((uint32_t)(0x10cfdd90), (EDX));
L_10ce1524:;
  /* 10ce1524 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1527 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ce152a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce152d jl 0x10ce1545 */
  if ((C.sf!=C.of)) goto L_10ce1545;
  /* 10ce152f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1532 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ce1535 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1538 jg 0x10ce1545 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ce1545;
  /* 10ce153a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce153d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ce1543 jmp 0x10ce1524 */
  goto L_10ce1524;
L_10ce1545:;
  /* 10ce1545 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1549 je 0x10ce1559 */
  if (C.zf) goto L_10ce1559;
  /* 10ce154b mov edx, dword ptr [0x10cfdd90] */
  EDX = (r32((uint32_t)(0x10cfdd90)));
  /* 10ce1551 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ce1553 mov dword ptr [0x10cfdd90], edx */
  w32((uint32_t)(0x10cfdd90), (EDX));
L_10ce1559:;
  /* 10ce1559 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce155c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ce155f mov dword ptr [0x10cfdd94], ecx */
  w32((uint32_t)(0x10cfdd94), (ECX));
  /* 10ce1565 cmp dword ptr [0x10cfdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce156c je 0x10ce158e */
  if (C.zf) goto L_10ce158e;
  /* 10ce156e push 3 */
  push32((uint32_t)(0x3u));
  /* 10ce1570 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1573 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1574 mov eax, dword ptr [0x10cfde20] */
  EAX = (r32((uint32_t)(0x10cfde20)));
  /* 10ce1579 push eax */
  push32((uint32_t)(EAX));
  /* 10ce157a call 0x10cd5eb0 */
  push32(0x10ce157fu); f_10cd5eb0();
  /* 10ce157f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1582 mov ecx, dword ptr [0x10cfde20] */
  ECX = (r32((uint32_t)(0x10cfde20)));
  /* 10ce1588 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10ce158c jmp 0x10ce1597 */
  goto L_10ce1597;
L_10ce158e:;
  /* 10ce158e mov edx, dword ptr [0x10cfde20] */
  EDX = (r32((uint32_t)(0x10cfde20)));
  /* 10ce1594 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10ce1597:;
  /* 10ce1597 mov esp, ebp */
  ESP = (EBP);
  /* 10ce1599 pop ebp */
  EBP = (pop32());
  /* 10ce159a ret  */
  ESPCHK(0x10ce11f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100115a0 @ 0x10ce15a0 (46 bytes, 18 insns) */
void f_10ce15a0(void) {
  FTRACE(0x10ce15a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce15a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce15a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce15a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce15a4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ce15a6 call 0x10cd6090 */
  push32(0x10ce15abu); f_10cd6090();
  /* 10ce15ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce15ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce15b1 push eax */
  push32((uint32_t)(EAX));
  /* 10ce15b2 call 0x10ce15d0 */
  push32(0x10ce15b7u); f_10ce15d0();
  /* 10ce15b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce15ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ce15bd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ce15bf call 0x10cd6130 */
  push32(0x10ce15c4u); f_10cd6130();
  /* 10ce15c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce15c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce15ca mov esp, ebp */
  ESP = (EBP);
  /* 10ce15cc pop ebp */
  EBP = (pop32());
  /* 10ce15cd ret  */
  ESPCHK(0x10ce15a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100115d0 @ 0x10ce15d0 (762 bytes, 246 insns) */
void f_10ce15d0(void) {
  FTRACE(0x10ce15d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce15d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce15d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce15d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce15d4 cmp dword ptr [0x10cfdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce15db jne 0x10ce15e4 */
  if (!C.zf) goto L_10ce15e4;
  /* 10ce15dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce15df jmp 0x10ce18c6 */
  goto L_10ce18c6;
L_10ce15e4:;
  /* 10ce15e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce15e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ce15ea cmp ecx, dword ptr [0x10cfde28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cfde28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce15f0 jne 0x10ce1604 */
  if (!C.zf) goto L_10ce1604;
  /* 10ce15f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce15f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ce15f8 cmp eax, dword ptr [0x10cfde38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfde38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce15fe je 0x10ce17cb */
  if (C.zf) goto L_10ce17cb;
L_10ce1604:;
  /* 10ce1604 cmp dword ptr [0x10cfe6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce160b je 0x10ce1785 */
  if (C.zf) goto L_10ce1785;
  /* 10ce1611 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1613 mov cx, word ptr [0x10cfe740] */
  CX = (r16((uint32_t)(0x10cfe740)));
  /* 10ce161a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce161c jne 0x10ce1679 */
  if (!C.zf) goto L_10ce1679;
  /* 10ce161e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1620 mov dx, word ptr [0x10cfe74e] */
  DX = (r16((uint32_t)(0x10cfe74e)));
  /* 10ce1627 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1628 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce162a mov ax, word ptr [0x10cfe74c] */
  AX = (r16((uint32_t)(0x10cfe74c)));
  /* 10ce1630 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1631 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1633 mov cx, word ptr [0x10cfe74a] */
  CX = (r16((uint32_t)(0x10cfe74a)));
  /* 10ce163a push ecx */
  push32((uint32_t)(ECX));
  /* 10ce163b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce163d mov dx, word ptr [0x10cfe748] */
  DX = (r16((uint32_t)(0x10cfe748)));
  /* 10ce1644 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1645 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1649 mov ax, word ptr [0x10cfe744] */
  AX = (r16((uint32_t)(0x10cfe744)));
  /* 10ce164f push eax */
  push32((uint32_t)(EAX));
  /* 10ce1650 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1652 mov cx, word ptr [0x10cfe746] */
  CX = (r16((uint32_t)(0x10cfe746)));
  /* 10ce1659 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce165a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce165c mov dx, word ptr [0x10cfe742] */
  DX = (r16((uint32_t)(0x10cfe742)));
  /* 10ce1663 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1667 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ce166a push ecx */
  push32((uint32_t)(ECX));
  /* 10ce166b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce166d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce166f call 0x10ce18d0 */
  push32(0x10ce1674u); f_10ce18d0();
  /* 10ce1674 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1677 jmp 0x10ce16ca */
  goto L_10ce16ca;
L_10ce1679:;
  /* 10ce1679 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce167b mov dx, word ptr [0x10cfe74e] */
  DX = (r16((uint32_t)(0x10cfe74e)));
  /* 10ce1682 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1685 mov ax, word ptr [0x10cfe74c] */
  AX = (r16((uint32_t)(0x10cfe74c)));
  /* 10ce168b push eax */
  push32((uint32_t)(EAX));
  /* 10ce168c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce168e mov cx, word ptr [0x10cfe74a] */
  CX = (r16((uint32_t)(0x10cfe74a)));
  /* 10ce1695 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1696 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1698 mov dx, word ptr [0x10cfe748] */
  DX = (r16((uint32_t)(0x10cfe748)));
  /* 10ce169f push edx */
  push32((uint32_t)(EDX));
  /* 10ce16a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce16a2 mov ax, word ptr [0x10cfe746] */
  AX = (r16((uint32_t)(0x10cfe746)));
  /* 10ce16a8 push eax */
  push32((uint32_t)(EAX));
  /* 10ce16a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce16ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce16ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce16af mov cx, word ptr [0x10cfe742] */
  CX = (r16((uint32_t)(0x10cfe742)));
  /* 10ce16b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce16b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce16ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ce16bd push eax */
  push32((uint32_t)(EAX));
  /* 10ce16be push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce16c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce16c2 call 0x10ce18d0 */
  push32(0x10ce16c7u); f_10ce18d0();
  /* 10ce16c7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ce16ca:;
  /* 10ce16ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce16cc mov cx, word ptr [0x10cfe6ec] */
  CX = (r16((uint32_t)(0x10cfe6ec)));
  /* 10ce16d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce16d5 jne 0x10ce1732 */
  if (!C.zf) goto L_10ce1732;
  /* 10ce16d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce16d9 mov dx, word ptr [0x10cfe6fa] */
  DX = (r16((uint32_t)(0x10cfe6fa)));
  /* 10ce16e0 push edx */
  push32((uint32_t)(EDX));
  /* 10ce16e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce16e3 mov ax, word ptr [0x10cfe6f8] */
  AX = (r16((uint32_t)(0x10cfe6f8)));
  /* 10ce16e9 push eax */
  push32((uint32_t)(EAX));
  /* 10ce16ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce16ec mov cx, word ptr [0x10cfe6f6] */
  CX = (r16((uint32_t)(0x10cfe6f6)));
  /* 10ce16f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce16f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce16f6 mov dx, word ptr [0x10cfe6f4] */
  DX = (r16((uint32_t)(0x10cfe6f4)));
  /* 10ce16fd push edx */
  push32((uint32_t)(EDX));
  /* 10ce16fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1702 mov ax, word ptr [0x10cfe6f0] */
  AX = (r16((uint32_t)(0x10cfe6f0)));
  /* 10ce1708 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1709 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce170b mov cx, word ptr [0x10cfe6f2] */
  CX = (r16((uint32_t)(0x10cfe6f2)));
  /* 10ce1712 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1713 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1715 mov dx, word ptr [0x10cfe6ee] */
  DX = (r16((uint32_t)(0x10cfe6ee)));
  /* 10ce171c push edx */
  push32((uint32_t)(EDX));
  /* 10ce171d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1720 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ce1723 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1724 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce1726 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1728 call 0x10ce18d0 */
  push32(0x10ce172du); f_10ce18d0();
  /* 10ce172d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1730 jmp 0x10ce1783 */
  goto L_10ce1783;
L_10ce1732:;
  /* 10ce1732 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1734 mov dx, word ptr [0x10cfe6fa] */
  DX = (r16((uint32_t)(0x10cfe6fa)));
  /* 10ce173b push edx */
  push32((uint32_t)(EDX));
  /* 10ce173c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce173e mov ax, word ptr [0x10cfe6f8] */
  AX = (r16((uint32_t)(0x10cfe6f8)));
  /* 10ce1744 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1745 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1747 mov cx, word ptr [0x10cfe6f6] */
  CX = (r16((uint32_t)(0x10cfe6f6)));
  /* 10ce174e push ecx */
  push32((uint32_t)(ECX));
  /* 10ce174f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1751 mov dx, word ptr [0x10cfe6f4] */
  DX = (r16((uint32_t)(0x10cfe6f4)));
  /* 10ce1758 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1759 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce175b mov ax, word ptr [0x10cfe6f2] */
  AX = (r16((uint32_t)(0x10cfe6f2)));
  /* 10ce1761 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1762 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1764 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1766 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1768 mov cx, word ptr [0x10cfe6ee] */
  CX = (r16((uint32_t)(0x10cfe6ee)));
  /* 10ce176f push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1770 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1773 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ce1776 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1777 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1779 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce177b call 0x10ce18d0 */
  push32(0x10ce1780u); f_10ce18d0();
  /* 10ce1780 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ce1783:;
  /* 10ce1783 jmp 0x10ce17cb */
  goto L_10ce17cb;
L_10ce1785:;
  /* 10ce1785 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1787 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1789 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce178b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce178d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce178f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1791 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce1793 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ce1795 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1798 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ce179b push edx */
  push32((uint32_t)(EDX));
  /* 10ce179c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce179e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce17a0 call 0x10ce18d0 */
  push32(0x10ce17a5u); f_10ce18d0();
  /* 10ce17a5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce17a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce17aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce17ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce17ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce17b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce17b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce17b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ce17b6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ce17b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce17bb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ce17be push ecx */
  push32((uint32_t)(ECX));
  /* 10ce17bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce17c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce17c3 call 0x10ce18d0 */
  push32(0x10ce17c8u); f_10ce18d0();
  /* 10ce17c8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ce17cb:;
  /* 10ce17cb mov edx, dword ptr [0x10cfde2c] */
  EDX = (r32((uint32_t)(0x10cfde2c)));
  /* 10ce17d1 cmp edx, dword ptr [0x10cfde3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cfde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce17d7 jge 0x10ce1824 */
  if ((C.sf==C.of)) goto L_10ce1824;
  /* 10ce17d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce17dc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ce17df cmp ecx, dword ptr [0x10cfde2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cfde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce17e5 jl 0x10ce17f5 */
  if ((C.sf!=C.of)) goto L_10ce17f5;
  /* 10ce17e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce17ea mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ce17ed cmp eax, dword ptr [0x10cfde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce17f3 jle 0x10ce17fc */
  if ((C.zf||C.sf!=C.of)) goto L_10ce17fc;
L_10ce17f5:;
  /* 10ce17f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce17f7 jmp 0x10ce18c6 */
  goto L_10ce18c6;
L_10ce17fc:;
  /* 10ce17fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce17ff mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ce1802 cmp edx, dword ptr [0x10cfde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cfde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1808 jle 0x10ce1822 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce1822;
  /* 10ce180a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce180d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ce1810 cmp ecx, dword ptr [0x10cfde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cfde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1816 jge 0x10ce1822 */
  if ((C.sf==C.of)) goto L_10ce1822;
  /* 10ce1818 mov eax, 1 */
  EAX = (0x1u);
  /* 10ce181d jmp 0x10ce18c6 */
  goto L_10ce18c6;
L_10ce1822:;
  /* 10ce1822 jmp 0x10ce1867 */
  goto L_10ce1867;
L_10ce1824:;
  /* 10ce1824 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1827 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ce182a cmp eax, dword ptr [0x10cfde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1830 jl 0x10ce1840 */
  if ((C.sf!=C.of)) goto L_10ce1840;
  /* 10ce1832 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1835 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ce1838 cmp edx, dword ptr [0x10cfde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cfde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce183e jle 0x10ce1847 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce1847;
L_10ce1840:;
  /* 10ce1840 mov eax, 1 */
  EAX = (0x1u);
  /* 10ce1845 jmp 0x10ce18c6 */
  goto L_10ce18c6;
L_10ce1847:;
  /* 10ce1847 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce184a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ce184d cmp ecx, dword ptr [0x10cfde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cfde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1853 jle 0x10ce1867 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce1867;
  /* 10ce1855 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1858 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ce185b cmp eax, dword ptr [0x10cfde2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1861 jge 0x10ce1867 */
  if ((C.sf==C.of)) goto L_10ce1867;
  /* 10ce1863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1865 jmp 0x10ce18c6 */
  goto L_10ce18c6;
L_10ce1867:;
  /* 10ce1867 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce186a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ce186d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce1870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1873 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce1875 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1877 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce187a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ce187d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce1883 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1885 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce188b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce188e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1891 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ce1894 cmp edx, dword ptr [0x10cfde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cfde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce189a jne 0x10ce18b2 */
  if (!C.zf) goto L_10ce18b2;
  /* 10ce189c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce189f cmp eax, dword ptr [0x10cfde30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfde30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce18a5 jl 0x10ce18ae */
  if ((C.sf!=C.of)) goto L_10ce18ae;
  /* 10ce18a7 mov eax, 1 */
  EAX = (0x1u);
  /* 10ce18ac jmp 0x10ce18c6 */
  goto L_10ce18c6;
L_10ce18ae:;
  /* 10ce18ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce18b0 jmp 0x10ce18c6 */
  goto L_10ce18c6;
L_10ce18b2:;
  /* 10ce18b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce18b5 cmp ecx, dword ptr [0x10cfde40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cfde40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce18bb jge 0x10ce18c4 */
  if ((C.sf==C.of)) goto L_10ce18c4;
  /* 10ce18bd mov eax, 1 */
  EAX = (0x1u);
  /* 10ce18c2 jmp 0x10ce18c6 */
  goto L_10ce18c6;
L_10ce18c4:;
  /* 10ce18c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ce18c6:;
  /* 10ce18c6 mov esp, ebp */
  ESP = (EBP);
  /* 10ce18c8 pop ebp */
  EBP = (pop32());
  /* 10ce18c9 ret  */
  ESPCHK(0x10ce15d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118d0 @ 0x10ce18d0 (504 bytes, 145 insns) */
void f_10ce18d0(void) {
  FTRACE(0x10ce18d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce18d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce18d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce18d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce18d6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce18da jne 0x10ce19ac */
  if (!C.zf) goto L_10ce19ac;
  /* 10ce18e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce18e3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ce18e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce18e8 jne 0x10ce18f9 */
  if (!C.zf) goto L_10ce18f9;
  /* 10ce18ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce18ed mov edx, dword ptr [ecx*4 + 0x10cfde4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfde4c)));
  /* 10ce18f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ce18f7 jmp 0x10ce1906 */
  goto L_10ce1906;
L_10ce18f9:;
  /* 10ce18f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce18fc mov ecx, dword ptr [eax*4 + 0x10cfde80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cfde80)));
  /* 10ce1903 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ce1906:;
  /* 10ce1906 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1909 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce190c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ce190f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce1912 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce1915 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce191b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce191e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1920 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce1923 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce1926 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10ce1929 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10ce192d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ce192e mov ecx, 7 */
  ECX = (0x7u);
  /* 10ce1933 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ce1935 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ce1938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce193b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce193e jge 0x10ce1959 */
  if ((C.sf==C.of)) goto L_10ce1959;
  /* 10ce1940 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ce1943 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce1946 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce1949 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce194c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce194f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1952 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1954 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ce1957 jmp 0x10ce196d */
  goto L_10ce196d;
L_10ce1959:;
  /* 10ce1959 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ce195c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce195f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce1962 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce1965 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1968 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce196a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ce196d:;
  /* 10ce196d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1971 jne 0x10ce19aa */
  if (!C.zf) goto L_10ce19aa;
  /* 10ce1973 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce1976 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1979 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce197b jne 0x10ce198c */
  if (!C.zf) goto L_10ce198c;
  /* 10ce197d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce1980 mov eax, dword ptr [edx*4 + 0x10cfde50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cfde50)));
  /* 10ce1987 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ce198a jmp 0x10ce1999 */
  goto L_10ce1999;
L_10ce198c:;
  /* 10ce198c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce198f mov edx, dword ptr [ecx*4 + 0x10cfde84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfde84)));
  /* 10ce1996 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ce1999:;
  /* 10ce1999 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce199c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce199f jle 0x10ce19aa */
  if ((C.zf||C.sf!=C.of)) goto L_10ce19aa;
  /* 10ce19a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce19a4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce19a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ce19aa:;
  /* 10ce19aa jmp 0x10ce19e1 */
  goto L_10ce19e1;
L_10ce19ac:;
  /* 10ce19ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce19af and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ce19b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce19b4 jne 0x10ce19c5 */
  if (!C.zf) goto L_10ce19c5;
  /* 10ce19b6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce19b9 mov ecx, dword ptr [eax*4 + 0x10cfde4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cfde4c)));
  /* 10ce19c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ce19c3 jmp 0x10ce19d2 */
  goto L_10ce19d2;
L_10ce19c5:;
  /* 10ce19c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce19c8 mov eax, dword ptr [edx*4 + 0x10cfde80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cfde80)));
  /* 10ce19cf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10ce19d2:;
  /* 10ce19d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ce19d5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ce19d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce19db add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce19de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ce19e1:;
  /* 10ce19e1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce19e5 jne 0x10ce1a21 */
  if (!C.zf) goto L_10ce1a21;
  /* 10ce19e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce19ea mov dword ptr [0x10cfde2c], eax */
  w32((uint32_t)(0x10cfde2c), (EAX));
  /* 10ce19ef mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ce19f2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce19f5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ce19f8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce19fa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce19fd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10ce1a00 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1a02 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce1a08 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10ce1a0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1a0d mov dword ptr [0x10cfde30], ecx */
  w32((uint32_t)(0x10cfde30), (ECX));
  /* 10ce1a13 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce1a16 mov dword ptr [0x10cfde28], edx */
  w32((uint32_t)(0x10cfde28), (EDX));
  /* 10ce1a1c jmp 0x10ce1ac4 */
  goto L_10ce1ac4;
L_10ce1a21:;
  /* 10ce1a21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce1a24 mov dword ptr [0x10cfde3c], eax */
  w32((uint32_t)(0x10cfde3c), (EAX));
  /* 10ce1a29 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ce1a2c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce1a2f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ce1a32 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1a34 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce1a37 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10ce1a3a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1a3c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce1a42 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10ce1a45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1a47 mov dword ptr [0x10cfde40], ecx */
  w32((uint32_t)(0x10cfde40), (ECX));
  /* 10ce1a4d mov edx, dword ptr [0x10cfdd98] */
  EDX = (r32((uint32_t)(0x10cfdd98)));
  /* 10ce1a53 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ce1a59 mov eax, dword ptr [0x10cfde40] */
  EAX = (r32((uint32_t)(0x10cfde40)));
  /* 10ce1a5e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1a60 mov dword ptr [0x10cfde40], eax */
  w32((uint32_t)(0x10cfde40), (EAX));
  /* 10ce1a65 cmp dword ptr [0x10cfde40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfde40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1a6c jge 0x10ce1a91 */
  if ((C.sf==C.of)) goto L_10ce1a91;
  /* 10ce1a6e mov ecx, dword ptr [0x10cfde40] */
  ECX = (r32((uint32_t)(0x10cfde40)));
  /* 10ce1a74 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1a7a mov dword ptr [0x10cfde40], ecx */
  w32((uint32_t)(0x10cfde40), (ECX));
  /* 10ce1a80 mov edx, dword ptr [0x10cfde3c] */
  EDX = (r32((uint32_t)(0x10cfde3c)));
  /* 10ce1a86 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce1a89 mov dword ptr [0x10cfde3c], edx */
  w32((uint32_t)(0x10cfde3c), (EDX));
  /* 10ce1a8f jmp 0x10ce1abb */
  goto L_10ce1abb;
L_10ce1a91:;
  /* 10ce1a91 cmp dword ptr [0x10cfde40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10cfde40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1a9b jl 0x10ce1abb */
  if ((C.sf!=C.of)) goto L_10ce1abb;
  /* 10ce1a9d mov eax, dword ptr [0x10cfde40] */
  EAX = (r32((uint32_t)(0x10cfde40)));
  /* 10ce1aa2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce1aa7 mov dword ptr [0x10cfde40], eax */
  w32((uint32_t)(0x10cfde40), (EAX));
  /* 10ce1aac mov ecx, dword ptr [0x10cfde3c] */
  ECX = (r32((uint32_t)(0x10cfde3c)));
  /* 10ce1ab2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1ab5 mov dword ptr [0x10cfde3c], ecx */
  w32((uint32_t)(0x10cfde3c), (ECX));
L_10ce1abb:;
  /* 10ce1abb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce1abe mov dword ptr [0x10cfde38], edx */
  w32((uint32_t)(0x10cfde38), (EDX));
L_10ce1ac4:;
  /* 10ce1ac4 mov esp, ebp */
  ESP = (EBP);
  /* 10ce1ac6 pop ebp */
  EBP = (pop32());
  /* 10ce1ac7 ret  */
  ESPCHK(0x10ce18d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ad0 @ 0x10ce1ad0 (382 bytes, 135 insns) */
void f_10ce1ad0(void) {
  FTRACE(0x10ce1ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce1ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce1ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce1ad3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce1ad5 push 0x10cfa830 */
  push32((uint32_t)(0x10cfa830u));
  /* 10ce1ada push 0x10cdb798 */
  push32((uint32_t)(0x10cdb798u));
  /* 10ce1adf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ce1ae5 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1ae6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ce1aed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1af0 push ebx */
  push32((uint32_t)(EBX));
  /* 10ce1af1 push esi */
  push32((uint32_t)(ESI));
  /* 10ce1af2 push edi */
  push32((uint32_t)(EDI));
  /* 10ce1af3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ce1af6 cmp dword ptr [0x10cfe75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1afd jne 0x10ce1b42 */
  if (!C.zf) goto L_10ce1b42;
  /* 10ce1aff push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce1b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1b07 call dword ptr [0x10d0021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0021c))), 0x10ce1b0du);
  /* 10ce1b0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce1b0f je 0x10ce1b1d */
  if (C.zf) goto L_10ce1b1d;
  /* 10ce1b11 mov dword ptr [0x10cfe75c], 1 */
  w32((uint32_t)(0x10cfe75c), (0x1u));
  /* 10ce1b1b jmp 0x10ce1b42 */
  goto L_10ce1b42;
L_10ce1b1d:;
  /* 10ce1b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1b21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce1b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1b25 call dword ptr [0x10d00308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00308))), 0x10ce1b2bu);
  /* 10ce1b2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce1b2d je 0x10ce1b3b */
  if (C.zf) goto L_10ce1b3b;
  /* 10ce1b2f mov dword ptr [0x10cfe75c], 2 */
  w32((uint32_t)(0x10cfe75c), (0x2u));
  /* 10ce1b39 jmp 0x10ce1b42 */
  goto L_10ce1b42;
L_10ce1b3b:;
  /* 10ce1b3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1b3d jmp 0x10ce1c51 */
  goto L_10ce1c51;
L_10ce1b42:;
  /* 10ce1b42 cmp dword ptr [0x10cfe75c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe75c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1b49 jne 0x10ce1b66 */
  if (!C.zf) goto L_10ce1b66;
  /* 10ce1b4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce1b4e push eax */
  push32((uint32_t)(EAX));
  /* 10ce1b4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce1b52 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1b53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce1b56 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1b57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1b5a push eax */
  push32((uint32_t)(EAX));
  /* 10ce1b5b call dword ptr [0x10d0021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0021c))), 0x10ce1b61u);
  /* 10ce1b61 jmp 0x10ce1c51 */
  goto L_10ce1c51;
L_10ce1b66:;
  /* 10ce1b66 cmp dword ptr [0x10cfe75c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe75c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1b6d jne 0x10ce1c4f */
  if (!C.zf) goto L_10ce1c4f;
  /* 10ce1b73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1b77 jne 0x10ce1b82 */
  if (!C.zf) goto L_10ce1b82;
  /* 10ce1b79 mov ecx, dword ptr [0x10cfe610] */
  ECX = (r32((uint32_t)(0x10cfe610)));
  /* 10ce1b7f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10ce1b82:;
  /* 10ce1b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1b86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce1b89 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1b8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1b8d push eax */
  push32((uint32_t)(EAX));
  /* 10ce1b8e call dword ptr [0x10d00308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00308))), 0x10ce1b94u);
  /* 10ce1b94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ce1b97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1b9b jne 0x10ce1ba4 */
  if (!C.zf) goto L_10ce1ba4;
  /* 10ce1b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1b9f jmp 0x10ce1c51 */
  goto L_10ce1c51;
L_10ce1ba4:;
  /* 10ce1ba4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ce1bab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ce1bae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1bb1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ce1bb3 call 0x10cd5830 */
  push32(0x10ce1bb8u); f_10cd5830();
  /* 10ce1bb8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10ce1bbb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ce1bbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ce1bc1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ce1bc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ce1bcb jmp 0x10ce1be4 */
  goto L_10ce1be4;
  /* 10ce1bcd mov eax, 1 */
  EAX = (0x1u);
  /* 10ce1bd2 ret  */
  ESPCHK(0x10ce1ad0u, _esp0);
  ESP += 4; return;
  /* 10ce1bd3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce1bd6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ce1bdd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ce1be4:;
  /* 10ce1be4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1be8 jne 0x10ce1bee */
  if (!C.zf) goto L_10ce1bee;
  /* 10ce1bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1bec jmp 0x10ce1c51 */
  goto L_10ce1c51;
L_10ce1bee:;
  /* 10ce1bee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ce1bf1 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1bf2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ce1bf5 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1bf6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce1bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1bfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1bfd push edx */
  push32((uint32_t)(EDX));
  /* 10ce1bfe call dword ptr [0x10d00308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00308))), 0x10ce1c04u);
  /* 10ce1c04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce1c06 jne 0x10ce1c0c */
  if (!C.zf) goto L_10ce1c0c;
  /* 10ce1c08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1c0a jmp 0x10ce1c51 */
  goto L_10ce1c51;
L_10ce1c0c:;
  /* 10ce1c0c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1c10 jne 0x10ce1c2d */
  if (!C.zf) goto L_10ce1c2d;
  /* 10ce1c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1c16 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce1c18 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ce1c1b push eax */
  push32((uint32_t)(EAX));
  /* 10ce1c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce1c1e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce1c21 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1c22 call dword ptr [0x10d002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a4))), 0x10ce1c28u);
  /* 10ce1c28 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ce1c2b jmp 0x10ce1c4a */
  goto L_10ce1c4a;
L_10ce1c2d:;
  /* 10ce1c2d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce1c30 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1c31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce1c34 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1c35 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce1c37 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ce1c3a push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1c3b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce1c3d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce1c40 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1c41 call dword ptr [0x10d002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a4))), 0x10ce1c47u);
  /* 10ce1c47 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ce1c4a:;
  /* 10ce1c4a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ce1c4d jmp 0x10ce1c51 */
  goto L_10ce1c51;
L_10ce1c4f:;
  /* 10ce1c4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ce1c51:;
  /* 10ce1c51 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ce1c54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce1c57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ce1c5e pop edi */
  EDI = (pop32());
  /* 10ce1c5f pop esi */
  ESI = (pop32());
  /* 10ce1c60 pop ebx */
  EBX = (pop32());
  /* 10ce1c61 mov esp, ebp */
  ESP = (EBP);
  /* 10ce1c63 pop ebp */
  EBP = (pop32());
  /* 10ce1c64 ret  */
  ESPCHK(0x10ce1ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c70 @ 0x10ce1c70 (398 bytes, 140 insns) */
void f_10ce1c70(void) {
  FTRACE(0x10ce1c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce1c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce1c71 mov ebp, esp */
  EBP = (ESP);
  /* 10ce1c73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce1c75 push 0x10cfa840 */
  push32((uint32_t)(0x10cfa840u));
  /* 10ce1c7a push 0x10cdb798 */
  push32((uint32_t)(0x10cdb798u));
  /* 10ce1c7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ce1c85 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1c86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ce1c8d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1c90 push ebx */
  push32((uint32_t)(EBX));
  /* 10ce1c91 push esi */
  push32((uint32_t)(ESI));
  /* 10ce1c92 push edi */
  push32((uint32_t)(EDI));
  /* 10ce1c93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ce1c96 cmp dword ptr [0x10cfe760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1c9d jne 0x10ce1ce2 */
  if (!C.zf) goto L_10ce1ce2;
  /* 10ce1c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1ca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce1ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1ca7 call dword ptr [0x10d0021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0021c))), 0x10ce1cadu);
  /* 10ce1cad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce1caf je 0x10ce1cbd */
  if (C.zf) goto L_10ce1cbd;
  /* 10ce1cb1 mov dword ptr [0x10cfe760], 1 */
  w32((uint32_t)(0x10cfe760), (0x1u));
  /* 10ce1cbb jmp 0x10ce1ce2 */
  goto L_10ce1ce2;
L_10ce1cbd:;
  /* 10ce1cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1cc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce1cc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1cc5 call dword ptr [0x10d00308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00308))), 0x10ce1ccbu);
  /* 10ce1ccb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce1ccd je 0x10ce1cdb */
  if (C.zf) goto L_10ce1cdb;
  /* 10ce1ccf mov dword ptr [0x10cfe760], 2 */
  w32((uint32_t)(0x10cfe760), (0x2u));
  /* 10ce1cd9 jmp 0x10ce1ce2 */
  goto L_10ce1ce2;
L_10ce1cdb:;
  /* 10ce1cdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1cdd jmp 0x10ce1e01 */
  goto L_10ce1e01;
L_10ce1ce2:;
  /* 10ce1ce2 cmp dword ptr [0x10cfe760], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe760))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1ce9 jne 0x10ce1d06 */
  if (!C.zf) goto L_10ce1d06;
  /* 10ce1ceb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce1cee push eax */
  push32((uint32_t)(EAX));
  /* 10ce1cef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce1cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1cf3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce1cf6 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1cf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1cfa push eax */
  push32((uint32_t)(EAX));
  /* 10ce1cfb call dword ptr [0x10d00308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00308))), 0x10ce1d01u);
  /* 10ce1d01 jmp 0x10ce1e01 */
  goto L_10ce1e01;
L_10ce1d06:;
  /* 10ce1d06 cmp dword ptr [0x10cfe760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1d0d jne 0x10ce1dff */
  if (!C.zf) goto L_10ce1dff;
  /* 10ce1d13 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1d17 jne 0x10ce1d22 */
  if (!C.zf) goto L_10ce1d22;
  /* 10ce1d19 mov ecx, dword ptr [0x10cfe610] */
  ECX = (r32((uint32_t)(0x10cfe610)));
  /* 10ce1d1f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10ce1d22:;
  /* 10ce1d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1d26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce1d29 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1d2d push eax */
  push32((uint32_t)(EAX));
  /* 10ce1d2e call dword ptr [0x10d0021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0021c))), 0x10ce1d34u);
  /* 10ce1d34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ce1d37 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1d3b jne 0x10ce1d44 */
  if (!C.zf) goto L_10ce1d44;
  /* 10ce1d3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1d3f jmp 0x10ce1e01 */
  goto L_10ce1e01;
L_10ce1d44:;
  /* 10ce1d44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ce1d4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ce1d4e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ce1d50 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1d53 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ce1d55 call 0x10cd5830 */
  push32(0x10ce1d5au); f_10cd5830();
  /* 10ce1d5a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10ce1d5d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ce1d60 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ce1d63 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ce1d66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ce1d6d jmp 0x10ce1d86 */
  goto L_10ce1d86;
  /* 10ce1d6f mov eax, 1 */
  EAX = (0x1u);
  /* 10ce1d74 ret  */
  ESPCHK(0x10ce1c70u, _esp0);
  ESP += 4; return;
  /* 10ce1d75 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce1d78 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ce1d7f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ce1d86:;
  /* 10ce1d86 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1d8a jne 0x10ce1d90 */
  if (!C.zf) goto L_10ce1d90;
  /* 10ce1d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1d8e jmp 0x10ce1e01 */
  goto L_10ce1e01;
L_10ce1d90:;
  /* 10ce1d90 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ce1d93 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1d94 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ce1d97 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1d98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce1d9b push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1d9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1d9f push edx */
  push32((uint32_t)(EDX));
  /* 10ce1da0 call dword ptr [0x10d0021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0021c))), 0x10ce1da6u);
  /* 10ce1da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce1da8 jne 0x10ce1dae */
  if (!C.zf) goto L_10ce1dae;
  /* 10ce1daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1dac jmp 0x10ce1e01 */
  goto L_10ce1e01;
L_10ce1dae:;
  /* 10ce1dae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1db2 jne 0x10ce1dd6 */
  if (!C.zf) goto L_10ce1dd6;
  /* 10ce1db4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1db8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1dba push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1dbc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce1dbe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ce1dc1 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1dc2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ce1dc7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce1dca push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1dcb call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10ce1dd1u);
  /* 10ce1dd1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ce1dd4 jmp 0x10ce1dfa */
  goto L_10ce1dfa;
L_10ce1dd6:;
  /* 10ce1dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1dda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce1ddd push edx */
  push32((uint32_t)(EDX));
  /* 10ce1dde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce1de1 push eax */
  push32((uint32_t)(EAX));
  /* 10ce1de2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce1de4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ce1de7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1de8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ce1ded mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce1df0 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1df1 call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10ce1df7u);
  /* 10ce1df7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ce1dfa:;
  /* 10ce1dfa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ce1dfd jmp 0x10ce1e01 */
  goto L_10ce1e01;
L_10ce1dff:;
  /* 10ce1dff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ce1e01:;
  /* 10ce1e01 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ce1e04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce1e07 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ce1e0e pop edi */
  EDI = (pop32());
  /* 10ce1e0f pop esi */
  ESI = (pop32());
  /* 10ce1e10 pop ebx */
  EBX = (pop32());
  /* 10ce1e11 mov esp, ebp */
  ESP = (EBP);
  /* 10ce1e13 pop ebp */
  EBP = (pop32());
  /* 10ce1e14 ret  */
  ESPCHK(0x10ce1c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e20 @ 0x10ce1e20 (11 bytes, 6 insns) */
void f_10ce1e20(void) {
  FTRACE(0x10ce1e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce1e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce1e21 mov ebp, esp */
  EBP = (ESP);
  /* 10ce1e23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1e26 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1e29 pop ebp */
  EBP = (pop32());
  /* 10ce1e2a ret  */
  ESPCHK(0x10ce1e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e30 @ 0x10ce1e30 (147 bytes, 43 insns) */
void f_10ce1e30(void) {
  FTRACE(0x10ce1e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce1e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce1e31 mov ebp, esp */
  EBP = (ESP);
  /* 10ce1e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1e34 cmp dword ptr [0x10cfe600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1e3b jne 0x10ce1e57 */
  if (!C.zf) goto L_10ce1e57;
  /* 10ce1e3d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1e41 jl 0x10ce1e52 */
  if ((C.sf!=C.of)) goto L_10ce1e52;
  /* 10ce1e43 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1e47 jg 0x10ce1e52 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ce1e52;
  /* 10ce1e49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1e4c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1e4f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ce1e52:;
  /* 10ce1e52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1e55 jmp 0x10ce1ebf */
  goto L_10ce1ebf;
L_10ce1e57:;
  /* 10ce1e57 push 0x10cfe78c */
  push32((uint32_t)(0x10cfe78cu));
  /* 10ce1e5c call dword ptr [0x10d00244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00244))), 0x10ce1e62u);
  /* 10ce1e62 cmp dword ptr [0x10cfe77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1e69 je 0x10ce1e89 */
  if (C.zf) goto L_10ce1e89;
  /* 10ce1e6b push 0x10cfe78c */
  push32((uint32_t)(0x10cfe78cu));
  /* 10ce1e70 call dword ptr [0x10d00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00234))), 0x10ce1e76u);
  /* 10ce1e76 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ce1e78 call 0x10cd6090 */
  push32(0x10ce1e7du); f_10cd6090();
  /* 10ce1e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1e80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ce1e87 jmp 0x10ce1e90 */
  goto L_10ce1e90;
L_10ce1e89:;
  /* 10ce1e89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ce1e90:;
  /* 10ce1e90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1e93 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1e94 call 0x10ce1ed0 */
  push32(0x10ce1e99u); f_10ce1ed0();
  /* 10ce1e99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1e9c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ce1e9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1ea3 je 0x10ce1eb1 */
  if (C.zf) goto L_10ce1eb1;
  /* 10ce1ea5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ce1ea7 call 0x10cd6130 */
  push32(0x10ce1eacu); f_10cd6130();
  /* 10ce1eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1eaf jmp 0x10ce1ebc */
  goto L_10ce1ebc;
L_10ce1eb1:;
  /* 10ce1eb1 push 0x10cfe78c */
  push32((uint32_t)(0x10cfe78cu));
  /* 10ce1eb6 call dword ptr [0x10d00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00234))), 0x10ce1ebcu);
L_10ce1ebc:;
  /* 10ce1ebc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10ce1ebf:;
  /* 10ce1ebf mov esp, ebp */
  ESP = (EBP);
  /* 10ce1ec1 pop ebp */
  EBP = (pop32());
  /* 10ce1ec2 ret  */
  ESPCHK(0x10ce1e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ed0 @ 0x10ce1ed0 (299 bytes, 91 insns) */
void f_10ce1ed0(void) {
  FTRACE(0x10ce1ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce1ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce1ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce1ed3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce1ed6 cmp dword ptr [0x10cfe600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1edd jne 0x10ce1efc */
  if (!C.zf) goto L_10ce1efc;
  /* 10ce1edf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1ee3 jl 0x10ce1ef4 */
  if ((C.sf!=C.of)) goto L_10ce1ef4;
  /* 10ce1ee5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1ee9 jg 0x10ce1ef4 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ce1ef4;
  /* 10ce1eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1eee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1ef1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ce1ef4:;
  /* 10ce1ef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1ef7 jmp 0x10ce1ff7 */
  goto L_10ce1ff7;
L_10ce1efc:;
  /* 10ce1efc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1f03 jge 0x10ce1f43 */
  if ((C.sf==C.of)) goto L_10ce1f43;
  /* 10ce1f05 cmp dword ptr [0x10cfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1f0c jle 0x10ce1f21 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce1f21;
  /* 10ce1f0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce1f10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1f13 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1f14 call 0x10cd86a0 */
  push32(0x10ce1f19u); f_10cd86a0();
  /* 10ce1f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1f1c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ce1f1f jmp 0x10ce1f35 */
  goto L_10ce1f35;
L_10ce1f21:;
  /* 10ce1f21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1f24 mov eax, dword ptr [0x10cfcc98] */
  EAX = (r32((uint32_t)(0x10cfcc98)));
  /* 10ce1f29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1f2b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ce1f2f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1f32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ce1f35:;
  /* 10ce1f35 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1f39 jne 0x10ce1f43 */
  if (!C.zf) goto L_10ce1f43;
  /* 10ce1f3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1f3e jmp 0x10ce1ff7 */
  goto L_10ce1ff7;
L_10ce1f43:;
  /* 10ce1f43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1f46 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ce1f49 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1f4f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1f55 mov eax, dword ptr [0x10cfcc98] */
  EAX = (r32((uint32_t)(0x10cfcc98)));
  /* 10ce1f5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1f5c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ce1f60 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1f66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce1f68 je 0x10ce1f8c */
  if (C.zf) goto L_10ce1f8c;
  /* 10ce1f6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1f6d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ce1f70 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ce1f76 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10ce1f79 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ce1f7c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10ce1f7f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10ce1f83 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ce1f8a jmp 0x10ce1f9d */
  goto L_10ce1f9d;
L_10ce1f8c:;
  /* 10ce1f8c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ce1f8f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10ce1f92 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10ce1f96 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10ce1f9d:;
  /* 10ce1f9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce1f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce1fa1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ce1fa3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ce1fa6 push edx */
  push32((uint32_t)(EDX));
  /* 10ce1fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce1faa push eax */
  push32((uint32_t)(EAX));
  /* 10ce1fab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ce1fae push ecx */
  push32((uint32_t)(ECX));
  /* 10ce1faf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ce1fb4 mov edx, dword ptr [0x10cfe600] */
  EDX = (r32((uint32_t)(0x10cfe600)));
  /* 10ce1fba push edx */
  push32((uint32_t)(EDX));
  /* 10ce1fbb call 0x10cdaa80 */
  push32(0x10ce1fc0u); f_10cdaa80();
  /* 10ce1fc0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce1fc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ce1fc6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1fca jne 0x10ce1fd1 */
  if (!C.zf) goto L_10ce1fd1;
  /* 10ce1fcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce1fcf jmp 0x10ce1ff7 */
  goto L_10ce1ff7;
L_10ce1fd1:;
  /* 10ce1fd1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce1fd5 jne 0x10ce1fe1 */
  if (!C.zf) goto L_10ce1fe1;
  /* 10ce1fd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1fda and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1fdf jmp 0x10ce1ff7 */
  goto L_10ce1ff7;
L_10ce1fe1:;
  /* 10ce1fe1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce1fe4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce1fe9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10ce1fec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ce1ff2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10ce1ff5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10ce1ff7:;
  /* 10ce1ff7 mov esp, ebp */
  ESP = (EBP);
  /* 10ce1ff9 pop ebp */
  EBP = (pop32());
  /* 10ce1ffa ret  */
  ESPCHK(0x10ce1ed0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10ce2000 (52 bytes, 19 insns) */
void f_10ce2000(void) {
  FTRACE(0x10ce2000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ce2004 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ce2008 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce200a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ce200e jne 0x10ce2019 */
  if (!C.zf) goto L_10ce2019;
  /* 10ce2010 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ce2014 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ce2016 ret 0x10 */
  ESPCHK(0x10ce2000u, _esp0);
  ESP += 20; return;
L_10ce2019:;
  /* 10ce2019 push ebx */
  push32((uint32_t)(EBX));
  /* 10ce201a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ce201c mov ebx, eax */
  EBX = (EAX);
  /* 10ce201e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ce2022 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ce2026 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2028 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ce202c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ce202e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2030 pop ebx */
  EBX = (pop32());
  /* 10ce2031 ret 0x10 */
  ESPCHK(0x10ce2000u, _esp0);
  ESP += 20; return;
}

/* FUN_10012040 @ 0x10ce2040 (46 bytes, 18 insns) */
void f_10ce2040(void) {
  FTRACE(0x10ce2040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2040 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce2041 mov ebp, esp */
  EBP = (ESP);
  /* 10ce2043 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2044 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ce2046 call 0x10cd6090 */
  push32(0x10ce204bu); f_10cd6090();
  /* 10ce204b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce204e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2051 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2052 call 0x10ce2070 */
  push32(0x10ce2057u); f_10ce2070();
  /* 10ce2057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce205a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ce205d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ce205f call 0x10cd6130 */
  push32(0x10ce2064u); f_10cd6130();
  /* 10ce2064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2067 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce206a mov esp, ebp */
  ESP = (EBP);
  /* 10ce206c pop ebp */
  EBP = (pop32());
  /* 10ce206d ret  */
  ESPCHK(0x10ce2040u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10ce2070 (198 bytes, 69 insns) */
void f_10ce2070(void) {
  FTRACE(0x10ce2070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2070 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce2071 mov ebp, esp */
  EBP = (ESP);
  /* 10ce2073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce2076 mov eax, dword ptr [0x10cfe41c] */
  EAX = (r32((uint32_t)(0x10cfe41c)));
  /* 10ce207b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ce207e cmp dword ptr [0x10cfff20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfff20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2085 jne 0x10ce208e */
  if (!C.zf) goto L_10ce208e;
  /* 10ce2087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2089 jmp 0x10ce2132 */
  goto L_10ce2132;
L_10ce208e:;
  /* 10ce208e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2092 jne 0x10ce20b6 */
  if (!C.zf) goto L_10ce20b6;
  /* 10ce2094 cmp dword ptr [0x10cfe424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce209b je 0x10ce20b6 */
  if (C.zf) goto L_10ce20b6;
  /* 10ce209d call 0x10ce2190 */
  push32(0x10ce20a2u); f_10ce2190();
  /* 10ce20a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce20a4 je 0x10ce20ad */
  if (C.zf) goto L_10ce20ad;
  /* 10ce20a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce20a8 jmp 0x10ce2132 */
  goto L_10ce2132;
L_10ce20ad:;
  /* 10ce20ad mov ecx, dword ptr [0x10cfe41c] */
  ECX = (r32((uint32_t)(0x10cfe41c)));
  /* 10ce20b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ce20b6:;
  /* 10ce20b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce20ba je 0x10ce2130 */
  if (C.zf) goto L_10ce2130;
  /* 10ce20bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce20c0 je 0x10ce2130 */
  if (C.zf) goto L_10ce2130;
  /* 10ce20c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce20c5 push edx */
  push32((uint32_t)(EDX));
  /* 10ce20c6 call 0x10cd54c0 */
  push32(0x10ce20cbu); f_10cd54c0();
  /* 10ce20cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce20ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ce20d1:;
  /* 10ce20d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce20d4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce20d7 je 0x10ce2130 */
  if (C.zf) goto L_10ce2130;
  /* 10ce20d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce20dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce20de push edx */
  push32((uint32_t)(EDX));
  /* 10ce20df call 0x10cd54c0 */
  push32(0x10ce20e4u); f_10cd54c0();
  /* 10ce20e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce20e7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce20ea jbe 0x10ce2125 */
  if ((C.cf||C.zf)) goto L_10ce2125;
  /* 10ce20ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce20ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce20f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce20f4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10ce20f8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce20fb jne 0x10ce2125 */
  if (!C.zf) goto L_10ce2125;
  /* 10ce20fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2100 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2104 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2105 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2108 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce210a push ecx */
  push32((uint32_t)(ECX));
  /* 10ce210b call 0x10ce2140 */
  push32(0x10ce2110u); f_10ce2140();
  /* 10ce2110 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce2115 jne 0x10ce2125 */
  if (!C.zf) goto L_10ce2125;
  /* 10ce2117 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce211a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce211c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce211f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10ce2123 jmp 0x10ce2132 */
  goto L_10ce2132;
L_10ce2125:;
  /* 10ce2125 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2128 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce212b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ce212e jmp 0x10ce20d1 */
  goto L_10ce20d1;
L_10ce2130:;
  /* 10ce2130 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ce2132:;
  /* 10ce2132 mov esp, ebp */
  ESP = (EBP);
  /* 10ce2134 pop ebp */
  EBP = (pop32());
  /* 10ce2135 ret  */
  ESPCHK(0x10ce2070u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10ce2140 (79 bytes, 32 insns) */
void f_10ce2140(void) {
  FTRACE(0x10ce2140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2140 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce2141 mov ebp, esp */
  EBP = (ESP);
  /* 10ce2143 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2144 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2148 jne 0x10ce214e */
  if (!C.zf) goto L_10ce214e;
  /* 10ce214a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce214c jmp 0x10ce218b */
  goto L_10ce218b;
L_10ce214e:;
  /* 10ce214e mov eax, dword ptr [0x10cffae4] */
  EAX = (r32((uint32_t)(0x10cffae4)));
  /* 10ce2153 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2154 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce2157 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2158 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce215b push edx */
  push32((uint32_t)(EDX));
  /* 10ce215c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce215f push eax */
  push32((uint32_t)(EAX));
  /* 10ce2160 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2163 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2164 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce2166 mov edx, dword ptr [0x10cffd84] */
  EDX = (r32((uint32_t)(0x10cffd84)));
  /* 10ce216c push edx */
  push32((uint32_t)(EDX));
  /* 10ce216d call 0x10ce2240 */
  push32(0x10ce2172u); f_10ce2240();
  /* 10ce2172 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ce2178 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce217c jne 0x10ce2185 */
  if (!C.zf) goto L_10ce2185;
  /* 10ce217e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10ce2183 jmp 0x10ce218b */
  goto L_10ce218b;
L_10ce2185:;
  /* 10ce2185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2188 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10ce218b:;
  /* 10ce218b mov esp, ebp */
  ESP = (EBP);
  /* 10ce218d pop ebp */
  EBP = (pop32());
  /* 10ce218e ret  */
  ESPCHK(0x10ce2140u, _esp0);
  ESP += 4; return;
}

/* FUN_10012190 @ 0x10ce2190 (174 bytes, 66 insns) */
void f_10ce2190(void) {
  FTRACE(0x10ce2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2190 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce2191 mov ebp, esp */
  EBP = (ESP);
  /* 10ce2193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce2196 mov eax, dword ptr [0x10cfe424] */
  EAX = (r32((uint32_t)(0x10cfe424)));
  /* 10ce219b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ce219e:;
  /* 10ce219e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce21a1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce21a4 je 0x10ce2238 */
  if (C.zf) goto L_10ce2238;
  /* 10ce21aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce21ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce21ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce21b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce21b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce21b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce21b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce21b9 push eax */
  push32((uint32_t)(EAX));
  /* 10ce21ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce21bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce21be call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10ce21c4u);
  /* 10ce21c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ce21c7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce21cb jne 0x10ce21d2 */
  if (!C.zf) goto L_10ce21d2;
  /* 10ce21cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce21d0 jmp 0x10ce223a */
  goto L_10ce223a;
L_10ce21d2:;
  /* 10ce21d2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10ce21d4 push 0x10cfa84c */
  push32((uint32_t)(0x10cfa84cu));
  /* 10ce21d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce21db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce21de push ecx */
  push32((uint32_t)(ECX));
  /* 10ce21df call 0x10cd2690 */
  push32(0x10ce21e4u); f_10cd2690();
  /* 10ce21e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce21e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ce21ea cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce21ee jne 0x10ce21f5 */
  if (!C.zf) goto L_10ce21f5;
  /* 10ce21f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce21f3 jmp 0x10ce223a */
  goto L_10ce223a;
L_10ce21f5:;
  /* 10ce21f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce21f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce21f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce21fc push edx */
  push32((uint32_t)(EDX));
  /* 10ce21fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2200 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2201 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce2203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2206 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce2208 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2209 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce220b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce220d call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10ce2213u);
  /* 10ce2213 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce2215 jne 0x10ce221c */
  if (!C.zf) goto L_10ce221c;
  /* 10ce2217 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce221a jmp 0x10ce223a */
  goto L_10ce223a;
L_10ce221c:;
  /* 10ce221c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce221e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2221 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2222 call 0x10ce2690 */
  push32(0x10ce2227u); f_10ce2690();
  /* 10ce2227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce222a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce222d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2230 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce2233 jmp 0x10ce219e */
  goto L_10ce219e;
L_10ce2238:;
  /* 10ce2238 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ce223a:;
  /* 10ce223a mov esp, ebp */
  ESP = (EBP);
  /* 10ce223c pop ebp */
  EBP = (pop32());
  /* 10ce223d ret  */
  ESPCHK(0x10ce2190u, _esp0);
  ESP += 4; return;
}

/* FUN_10012240 @ 0x10ce2240 (970 bytes, 340 insns) */
void f_10ce2240(void) {
  FTRACE(0x10ce2240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2240 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce2241 mov ebp, esp */
  EBP = (ESP);
  /* 10ce2243 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ce2245 push 0x10cfa8a0 */
  push32((uint32_t)(0x10cfa8a0u));
  /* 10ce224a push 0x10cdb798 */
  push32((uint32_t)(0x10cdb798u));
  /* 10ce224f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ce2255 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2256 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ce225d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2260 push ebx */
  push32((uint32_t)(EBX));
  /* 10ce2261 push esi */
  push32((uint32_t)(ESI));
  /* 10ce2262 push edi */
  push32((uint32_t)(EDI));
  /* 10ce2263 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ce2266 cmp dword ptr [0x10cfe764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce226d jne 0x10ce22c6 */
  if (!C.zf) goto L_10ce22c6;
  /* 10ce226f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce2271 push 0x10cf9efc */
  push32((uint32_t)(0x10cf9efcu));
  /* 10ce2276 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce2278 push 0x10cf9efc */
  push32((uint32_t)(0x10cf9efcu));
  /* 10ce227d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce227f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce2281 call dword ptr [0x10d00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00214))), 0x10ce2287u);
  /* 10ce2287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce2289 je 0x10ce2297 */
  if (C.zf) goto L_10ce2297;
  /* 10ce228b mov dword ptr [0x10cfe764], 1 */
  w32((uint32_t)(0x10cfe764), (0x1u));
  /* 10ce2295 jmp 0x10ce22c6 */
  goto L_10ce22c6;
L_10ce2297:;
  /* 10ce2297 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce2299 push 0x10cf9ef8 */
  push32((uint32_t)(0x10cf9ef8u));
  /* 10ce229e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce22a0 push 0x10cf9ef8 */
  push32((uint32_t)(0x10cf9ef8u));
  /* 10ce22a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce22a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce22a9 call dword ptr [0x10d00218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00218))), 0x10ce22afu);
  /* 10ce22af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce22b1 je 0x10ce22bf */
  if (C.zf) goto L_10ce22bf;
  /* 10ce22b3 mov dword ptr [0x10cfe764], 2 */
  w32((uint32_t)(0x10cfe764), (0x2u));
  /* 10ce22bd jmp 0x10ce22c6 */
  goto L_10ce22c6;
L_10ce22bf:;
  /* 10ce22bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce22c1 jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce22c6:;
  /* 10ce22c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce22ca jle 0x10ce22df */
  if ((C.zf||C.sf!=C.of)) goto L_10ce22df;
  /* 10ce22cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce22cf push eax */
  push32((uint32_t)(EAX));
  /* 10ce22d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce22d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce22d4 call 0x10ce2640 */
  push32(0x10ce22d9u); f_10ce2640();
  /* 10ce22d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce22dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10ce22df:;
  /* 10ce22df cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce22e3 jle 0x10ce22f8 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce22f8;
  /* 10ce22e5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ce22e8 push edx */
  push32((uint32_t)(EDX));
  /* 10ce22e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce22ec push eax */
  push32((uint32_t)(EAX));
  /* 10ce22ed call 0x10ce2640 */
  push32(0x10ce22f2u); f_10ce2640();
  /* 10ce22f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce22f5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10ce22f8:;
  /* 10ce22f8 cmp dword ptr [0x10cfe764], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe764))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce22ff jne 0x10ce2324 */
  if (!C.zf) goto L_10ce2324;
  /* 10ce2301 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ce2304 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2305 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce2308 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2309 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce230c push eax */
  push32((uint32_t)(EAX));
  /* 10ce230d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce2310 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2311 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce2314 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2315 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2318 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2319 call dword ptr [0x10d00218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00218))), 0x10ce231fu);
  /* 10ce231f jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2324:;
  /* 10ce2324 cmp dword ptr [0x10cfe764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce232b jne 0x10ce2622 */
  if (!C.zf) goto L_10ce2622;
  /* 10ce2331 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2335 jne 0x10ce2340 */
  if (!C.zf) goto L_10ce2340;
  /* 10ce2337 mov ecx, dword ptr [0x10cfe610] */
  ECX = (r32((uint32_t)(0x10cfe610)));
  /* 10ce233d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10ce2340:;
  /* 10ce2340 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2344 je 0x10ce2350 */
  if (C.zf) goto L_10ce2350;
  /* 10ce2346 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce234a jne 0x10ce24cc */
  if (!C.zf) goto L_10ce24cc;
L_10ce2350:;
  /* 10ce2350 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce2353 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2356 jne 0x10ce2362 */
  if (!C.zf) goto L_10ce2362;
  /* 10ce2358 mov eax, 2 */
  EAX = (0x2u);
  /* 10ce235d jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2362:;
  /* 10ce2362 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2366 jle 0x10ce2372 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce2372;
  /* 10ce2368 mov eax, 1 */
  EAX = (0x1u);
  /* 10ce236d jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2372:;
  /* 10ce2372 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2376 jle 0x10ce2382 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce2382;
  /* 10ce2378 mov eax, 3 */
  EAX = (0x3u);
  /* 10ce237d jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2382:;
  /* 10ce2382 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10ce2385 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2386 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ce2389 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce238a call dword ptr [0x10d002dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002dc))), 0x10ce2390u);
  /* 10ce2390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce2392 jne 0x10ce239b */
  if (!C.zf) goto L_10ce239b;
  /* 10ce2394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2396 jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce239b:;
  /* 10ce239b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce239f jne 0x10ce23a7 */
  if (!C.zf) goto L_10ce23a7;
  /* 10ce23a1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce23a5 je 0x10ce23d4 */
  if (C.zf) goto L_10ce23d4;
L_10ce23a7:;
  /* 10ce23a7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce23ab jne 0x10ce23b3 */
  if (!C.zf) goto L_10ce23b3;
  /* 10ce23ad cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce23b1 je 0x10ce23d4 */
  if (C.zf) goto L_10ce23d4;
L_10ce23b3:;
  /* 10ce23b3 push 0x10cfa860 */
  push32((uint32_t)(0x10cfa860u));
  /* 10ce23b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce23ba push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10ce23bf push 0x10cfa858 */
  push32((uint32_t)(0x10cfa858u));
  /* 10ce23c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce23c6 call 0x10cd1750 */
  push32(0x10ce23cbu); f_10cd1750();
  /* 10ce23cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce23ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce23d1 jne 0x10ce23d4 */
  if (!C.zf) goto L_10ce23d4;
  /* 10ce23d3 int3  */
  x86_unimpl("int3 @ 0x10ce23d3");
L_10ce23d4:;
  /* 10ce23d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce23d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce23d8 jne 0x10ce239b */
  if (!C.zf) goto L_10ce239b;
  /* 10ce23da cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce23de jle 0x10ce2453 */
  if ((C.zf||C.sf!=C.of)) goto L_10ce2453;
  /* 10ce23e0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce23e4 jae 0x10ce23f0 */
  if (!C.cf) goto L_10ce23f0;
  /* 10ce23e6 mov eax, 3 */
  EAX = (0x3u);
  /* 10ce23eb jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce23f0:;
  /* 10ce23f0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10ce23f3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10ce23f6 jmp 0x10ce2401 */
  goto L_10ce2401;
L_10ce23f8:;
  /* 10ce23f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ce23fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce23fe mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10ce2401:;
  /* 10ce2401 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ce2404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2406 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce2408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce240a je 0x10ce2449 */
  if (C.zf) goto L_10ce2449;
  /* 10ce240c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ce240f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce2411 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10ce2414 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce2416 je 0x10ce2449 */
  if (C.zf) goto L_10ce2449;
  /* 10ce2418 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce241b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce241d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ce241f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ce2422 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2424 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce2426 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2428 jl 0x10ce2447 */
  if ((C.sf!=C.of)) goto L_10ce2447;
  /* 10ce242a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce242d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce242f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ce2431 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ce2434 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce2436 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ce2439 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce243b jg 0x10ce2447 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ce2447;
  /* 10ce243d mov eax, 2 */
  EAX = (0x2u);
  /* 10ce2442 jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2447:;
  /* 10ce2447 jmp 0x10ce23f8 */
  goto L_10ce23f8;
L_10ce2449:;
  /* 10ce2449 mov eax, 3 */
  EAX = (0x3u);
  /* 10ce244e jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2453:;
  /* 10ce2453 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2457 jle 0x10ce24cc */
  if ((C.zf||C.sf!=C.of)) goto L_10ce24cc;
  /* 10ce2459 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce245d jae 0x10ce2469 */
  if (!C.cf) goto L_10ce2469;
  /* 10ce245f mov eax, 1 */
  EAX = (0x1u);
  /* 10ce2464 jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2469:;
  /* 10ce2469 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10ce246c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10ce246f jmp 0x10ce247a */
  goto L_10ce247a;
L_10ce2471:;
  /* 10ce2471 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ce2474 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2477 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10ce247a:;
  /* 10ce247a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ce247d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce247f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ce2481 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce2483 je 0x10ce24c2 */
  if (C.zf) goto L_10ce24c2;
  /* 10ce2485 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ce2488 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce248a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ce248d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce248f je 0x10ce24c2 */
  if (C.zf) goto L_10ce24c2;
  /* 10ce2491 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce2494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2496 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ce2498 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ce249b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce249d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ce249f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce24a1 jl 0x10ce24c0 */
  if ((C.sf!=C.of)) goto L_10ce24c0;
  /* 10ce24a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce24a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce24a8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ce24aa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ce24ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce24af mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ce24b2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce24b4 jg 0x10ce24c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ce24c0;
  /* 10ce24b6 mov eax, 2 */
  EAX = (0x2u);
  /* 10ce24bb jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce24c0:;
  /* 10ce24c0 jmp 0x10ce2471 */
  goto L_10ce2471;
L_10ce24c2:;
  /* 10ce24c2 mov eax, 1 */
  EAX = (0x1u);
  /* 10ce24c7 jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce24cc:;
  /* 10ce24cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce24ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce24d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce24d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce24d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce24d7 push edx */
  push32((uint32_t)(EDX));
  /* 10ce24d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ce24da mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ce24dd push eax */
  push32((uint32_t)(EAX));
  /* 10ce24de call dword ptr [0x10d002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a4))), 0x10ce24e4u);
  /* 10ce24e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ce24e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce24eb jne 0x10ce24f4 */
  if (!C.zf) goto L_10ce24f4;
  /* 10ce24ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce24ef jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce24f4:;
  /* 10ce24f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ce24fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ce24fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ce2500 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2503 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ce2505 call 0x10cd5830 */
  push32(0x10ce250au); f_10cd5830();
  /* 10ce250a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10ce250d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ce2510 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ce2513 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ce2516 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ce251d jmp 0x10ce2536 */
  goto L_10ce2536;
  /* 10ce251f mov eax, 1 */
  EAX = (0x1u);
  /* 10ce2524 ret  */
  ESPCHK(0x10ce2240u, _esp0);
  ESP += 4; return;
  /* 10ce2525 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce2528 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ce252f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ce2536:;
  /* 10ce2536 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce253a jne 0x10ce2543 */
  if (!C.zf) goto L_10ce2543;
  /* 10ce253c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce253e jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2543:;
  /* 10ce2543 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ce2546 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2547 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ce254a push eax */
  push32((uint32_t)(EAX));
  /* 10ce254b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ce254e push ecx */
  push32((uint32_t)(ECX));
  /* 10ce254f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ce2552 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2553 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce2555 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ce2558 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2559 call dword ptr [0x10d002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a4))), 0x10ce255fu);
  /* 10ce255f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce2561 jne 0x10ce256a */
  if (!C.zf) goto L_10ce256a;
  /* 10ce2563 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2565 jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce256a:;
  /* 10ce256a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce256c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ce256e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ce2571 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2572 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce2575 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2576 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ce2578 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ce257b push eax */
  push32((uint32_t)(EAX));
  /* 10ce257c call dword ptr [0x10d002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a4))), 0x10ce2582u);
  /* 10ce2582 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ce2585 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2589 jne 0x10ce2592 */
  if (!C.zf) goto L_10ce2592;
  /* 10ce258b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce258d jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2592:;
  /* 10ce2592 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ce2599 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ce259c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ce259e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce25a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ce25a3 call 0x10cd5830 */
  push32(0x10ce25a8u); f_10cd5830();
  /* 10ce25a8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10ce25ab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ce25ae mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ce25b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10ce25b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ce25bb jmp 0x10ce25d4 */
  goto L_10ce25d4;
  /* 10ce25bd mov eax, 1 */
  EAX = (0x1u);
  /* 10ce25c2 ret  */
  ESPCHK(0x10ce2240u, _esp0);
  ESP += 4; return;
  /* 10ce25c3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce25c6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10ce25cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ce25d4:;
  /* 10ce25d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce25d8 jne 0x10ce25de */
  if (!C.zf) goto L_10ce25de;
  /* 10ce25da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce25dc jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce25de:;
  /* 10ce25de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ce25e1 push edx */
  push32((uint32_t)(EDX));
  /* 10ce25e2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ce25e5 push eax */
  push32((uint32_t)(EAX));
  /* 10ce25e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ce25e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce25ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ce25ed push edx */
  push32((uint32_t)(EDX));
  /* 10ce25ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10ce25f0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ce25f3 push eax */
  push32((uint32_t)(EAX));
  /* 10ce25f4 call dword ptr [0x10d002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a4))), 0x10ce25fau);
  /* 10ce25fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce25fc jne 0x10ce2602 */
  if (!C.zf) goto L_10ce2602;
  /* 10ce25fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2600 jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2602:;
  /* 10ce2602 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ce2605 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2606 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ce2609 push edx */
  push32((uint32_t)(EDX));
  /* 10ce260a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ce260d push eax */
  push32((uint32_t)(EAX));
  /* 10ce260e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ce2611 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2612 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce2615 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2619 push eax */
  push32((uint32_t)(EAX));
  /* 10ce261a call dword ptr [0x10d00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00214))), 0x10ce2620u);
  /* 10ce2620 jmp 0x10ce2624 */
  goto L_10ce2624;
L_10ce2622:;
  /* 10ce2622 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ce2624:;
  /* 10ce2624 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10ce2627 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce262a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ce2631 pop edi */
  EDI = (pop32());
  /* 10ce2632 pop esi */
  ESI = (pop32());
  /* 10ce2633 pop ebx */
  EBX = (pop32());
  /* 10ce2634 mov esp, ebp */
  ESP = (EBP);
  /* 10ce2636 pop ebp */
  EBP = (pop32());
  /* 10ce2637 ret  */
  ESPCHK(0x10ce2240u, _esp0);
  ESP += 4; return;
}

/* FUN_10012640 @ 0x10ce2640 (80 bytes, 32 insns) */
void f_10ce2640(void) {
  FTRACE(0x10ce2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2640 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce2641 mov ebp, esp */
  EBP = (ESP);
  /* 10ce2643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce2646 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce2649 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ce264c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce264f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ce2652:;
  /* 10ce2652 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2655 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2658 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce265b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ce265e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce2660 je 0x10ce2677 */
  if (C.zf) goto L_10ce2677;
  /* 10ce2662 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2665 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ce2668 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce266a je 0x10ce2677 */
  if (C.zf) goto L_10ce2677;
  /* 10ce266c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce266f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2672 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ce2675 jmp 0x10ce2652 */
  goto L_10ce2652;
L_10ce2677:;
  /* 10ce2677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce267a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ce267d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce267f jne 0x10ce2689 */
  if (!C.zf) goto L_10ce2689;
  /* 10ce2681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2684 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce2687 jmp 0x10ce268c */
  goto L_10ce268c;
L_10ce2689:;
  /* 10ce2689 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10ce268c:;
  /* 10ce268c mov esp, ebp */
  ESP = (EBP);
  /* 10ce268e pop ebp */
  EBP = (pop32());
  /* 10ce268f ret  */
  ESPCHK(0x10ce2640u, _esp0);
  ESP += 4; return;
}

/* FUN_10012690 @ 0x10ce2690 (736 bytes, 224 insns) */
void f_10ce2690(void) {
  FTRACE(0x10ce2690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2690 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce2691 mov ebp, esp */
  EBP = (ESP);
  /* 10ce2693 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce2696 push esi */
  push32((uint32_t)(ESI));
  /* 10ce2697 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce269b je 0x10ce26bc */
  if (C.zf) goto L_10ce26bc;
  /* 10ce269d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10ce269f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce26a2 push eax */
  push32((uint32_t)(EAX));
  /* 10ce26a3 call 0x10ce2ae0 */
  push32(0x10ce26a8u); f_10ce2ae0();
  /* 10ce26a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce26ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ce26ae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce26b2 je 0x10ce26bc */
  if (C.zf) goto L_10ce26bc;
  /* 10ce26b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce26b7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce26ba jne 0x10ce26c4 */
  if (!C.zf) goto L_10ce26c4;
L_10ce26bc:;
  /* 10ce26bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce26bf jmp 0x10ce296b */
  goto L_10ce296b;
L_10ce26c4:;
  /* 10ce26c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce26c7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ce26cb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ce26cd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce26cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ce26d0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ce26d3 mov ecx, dword ptr [0x10cfe41c] */
  ECX = (r32((uint32_t)(0x10cfe41c)));
  /* 10ce26d9 cmp ecx, dword ptr [0x10cfe420] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cfe420))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce26df jne 0x10ce26f5 */
  if (!C.zf) goto L_10ce26f5;
  /* 10ce26e1 mov edx, dword ptr [0x10cfe41c] */
  EDX = (r32((uint32_t)(0x10cfe41c)));
  /* 10ce26e7 push edx */
  push32((uint32_t)(EDX));
  /* 10ce26e8 call 0x10ce29f0 */
  push32(0x10ce26edu); f_10ce29f0();
  /* 10ce26ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce26f0 mov dword ptr [0x10cfe41c], eax */
  w32((uint32_t)(0x10cfe41c), (EAX));
L_10ce26f5:;
  /* 10ce26f5 cmp dword ptr [0x10cfe41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce26fc jne 0x10ce27b5 */
  if (!C.zf) goto L_10ce27b5;
  /* 10ce2702 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2706 je 0x10ce2727 */
  if (C.zf) goto L_10ce2727;
  /* 10ce2708 cmp dword ptr [0x10cfe424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce270f je 0x10ce2727 */
  if (C.zf) goto L_10ce2727;
  /* 10ce2711 call 0x10ce2190 */
  push32(0x10ce2716u); f_10ce2190();
  /* 10ce2716 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce2718 je 0x10ce2722 */
  if (C.zf) goto L_10ce2722;
  /* 10ce271a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce271d jmp 0x10ce296b */
  goto L_10ce296b;
L_10ce2722:;
  /* 10ce2722 jmp 0x10ce27b5 */
  goto L_10ce27b5;
L_10ce2727:;
  /* 10ce2727 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce272b je 0x10ce2734 */
  if (C.zf) goto L_10ce2734;
  /* 10ce272d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce272f jmp 0x10ce296b */
  goto L_10ce296b;
L_10ce2734:;
  /* 10ce2734 cmp dword ptr [0x10cfe41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce273b jne 0x10ce2774 */
  if (!C.zf) goto L_10ce2774;
  /* 10ce273d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10ce2742 push 0x10cfa8b8 */
  push32((uint32_t)(0x10cfa8b8u));
  /* 10ce2747 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce2749 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ce274b call 0x10cd2690 */
  push32(0x10ce2750u); f_10cd2690();
  /* 10ce2750 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2753 mov dword ptr [0x10cfe41c], eax */
  w32((uint32_t)(0x10cfe41c), (EAX));
  /* 10ce2758 cmp dword ptr [0x10cfe41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce275f jne 0x10ce2769 */
  if (!C.zf) goto L_10ce2769;
  /* 10ce2761 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2764 jmp 0x10ce296b */
  goto L_10ce296b;
L_10ce2769:;
  /* 10ce2769 mov eax, dword ptr [0x10cfe41c] */
  EAX = (r32((uint32_t)(0x10cfe41c)));
  /* 10ce276e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ce2774:;
  /* 10ce2774 cmp dword ptr [0x10cfe424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce277b jne 0x10ce27b5 */
  if (!C.zf) goto L_10ce27b5;
  /* 10ce277d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10ce2782 push 0x10cfa8b8 */
  push32((uint32_t)(0x10cfa8b8u));
  /* 10ce2787 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce2789 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ce278b call 0x10cd2690 */
  push32(0x10ce2790u); f_10cd2690();
  /* 10ce2790 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2793 mov dword ptr [0x10cfe424], eax */
  w32((uint32_t)(0x10cfe424), (EAX));
  /* 10ce2798 cmp dword ptr [0x10cfe424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce279f jne 0x10ce27a9 */
  if (!C.zf) goto L_10ce27a9;
  /* 10ce27a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce27a4 jmp 0x10ce296b */
  goto L_10ce296b;
L_10ce27a9:;
  /* 10ce27a9 mov ecx, dword ptr [0x10cfe424] */
  ECX = (r32((uint32_t)(0x10cfe424)));
  /* 10ce27af mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10ce27b5:;
  /* 10ce27b5 mov edx, dword ptr [0x10cfe41c] */
  EDX = (r32((uint32_t)(0x10cfe41c)));
  /* 10ce27bb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ce27be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce27c1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce27c4 push eax */
  push32((uint32_t)(EAX));
  /* 10ce27c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce27c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce27c9 call 0x10ce2970 */
  push32(0x10ce27ceu); f_10ce2970();
  /* 10ce27ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce27d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ce27d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce27d8 jl 0x10ce2871 */
  if ((C.sf!=C.of)) goto L_10ce2871;
  /* 10ce27de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce27e1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce27e4 je 0x10ce2871 */
  if (C.zf) goto L_10ce2871;
  /* 10ce27ea cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce27ee je 0x10ce2863 */
  if (C.zf) goto L_10ce2863;
  /* 10ce27f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce27f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce27f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce27f8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ce27fb push edx */
  push32((uint32_t)(EDX));
  /* 10ce27fc call 0x10cd3120 */
  push32(0x10ce2801u); f_10cd3120();
  /* 10ce2801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2804 jmp 0x10ce280f */
  goto L_10ce280f;
L_10ce2806:;
  /* 10ce2806 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2809 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce280c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ce280f:;
  /* 10ce280f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2812 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2815 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2819 je 0x10ce2830 */
  if (C.zf) goto L_10ce2830;
  /* 10ce281b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce281e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2821 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2824 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2827 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10ce282b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10ce282e jmp 0x10ce2806 */
  goto L_10ce2806;
L_10ce2830:;
  /* 10ce2830 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10ce2835 push 0x10cfa8b8 */
  push32((uint32_t)(0x10cfa8b8u));
  /* 10ce283a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce283c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce283f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ce2842 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2843 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2846 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2847 call 0x10cd2b20 */
  push32(0x10ce284cu); f_10cd2b20();
  /* 10ce284c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce284f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ce2852 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2856 je 0x10ce2861 */
  if (C.zf) goto L_10ce2861;
  /* 10ce2858 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce285b mov dword ptr [0x10cfe41c], edx */
  w32((uint32_t)(0x10cfe41c), (EDX));
L_10ce2861:;
  /* 10ce2861 jmp 0x10ce286f */
  goto L_10ce286f;
L_10ce2863:;
  /* 10ce2863 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2866 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce286c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10ce286f:;
  /* 10ce286f jmp 0x10ce28e4 */
  goto L_10ce28e4;
L_10ce2871:;
  /* 10ce2871 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2875 jne 0x10ce28dd */
  if (!C.zf) goto L_10ce28dd;
  /* 10ce2877 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce287b jge 0x10ce2885 */
  if ((C.sf==C.of)) goto L_10ce2885;
  /* 10ce287d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2880 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ce2882 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ce2885:;
  /* 10ce2885 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10ce288a push 0x10cfa8b8 */
  push32((uint32_t)(0x10cfa8b8u));
  /* 10ce288f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce2891 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2894 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10ce289b push edx */
  push32((uint32_t)(EDX));
  /* 10ce289c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce289f push eax */
  push32((uint32_t)(EAX));
  /* 10ce28a0 call 0x10cd2b20 */
  push32(0x10ce28a5u); f_10cd2b20();
  /* 10ce28a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce28a8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ce28ab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce28af jne 0x10ce28b9 */
  if (!C.zf) goto L_10ce28b9;
  /* 10ce28b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce28b4 jmp 0x10ce296b */
  goto L_10ce296b;
L_10ce28b9:;
  /* 10ce28b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce28bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce28bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce28c2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10ce28c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce28c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce28cb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10ce28d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce28d6 mov dword ptr [0x10cfe41c], eax */
  w32((uint32_t)(0x10cfe41c), (EAX));
  /* 10ce28db jmp 0x10ce28e4 */
  goto L_10ce28e4;
L_10ce28dd:;
  /* 10ce28dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce28df jmp 0x10ce296b */
  goto L_10ce296b;
L_10ce28e4:;
  /* 10ce28e4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce28e8 je 0x10ce2969 */
  if (C.zf) goto L_10ce2969;
  /* 10ce28ea push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10ce28ef push 0x10cfa8b8 */
  push32((uint32_t)(0x10cfa8b8u));
  /* 10ce28f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce28f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce28f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce28fa call 0x10cd54c0 */
  push32(0x10ce28ffu); f_10cd54c0();
  /* 10ce28ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2902 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2905 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2906 call 0x10cd2690 */
  push32(0x10ce290bu); f_10cd2690();
  /* 10ce290b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce290e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ce2911 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2915 je 0x10ce2969 */
  if (C.zf) goto L_10ce2969;
  /* 10ce2917 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce291a push edx */
  push32((uint32_t)(EDX));
  /* 10ce291b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce291e push eax */
  push32((uint32_t)(EAX));
  /* 10ce291f call 0x10cd5640 */
  push32(0x10ce2924u); f_10cd5640();
  /* 10ce2924 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2927 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ce292a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce292d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce2930 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2932 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ce2935 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2938 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ce293b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce293e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2941 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce2944 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ce2947 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ce2949 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce294b not edx */
  EDX = (~(EDX));
  /* 10ce294d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ce2950 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2951 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce2954 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2955 call dword ptr [0x10d00210] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00210))), 0x10ce295bu);
  /* 10ce295b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce295d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce2960 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2961 call 0x10cd3120 */
  push32(0x10ce2966u); f_10cd3120();
  /* 10ce2966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ce2969:;
  /* 10ce2969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ce296b:;
  /* 10ce296b pop esi */
  ESI = (pop32());
  /* 10ce296c mov esp, ebp */
  ESP = (EBP);
  /* 10ce296e pop ebp */
  EBP = (pop32());
  /* 10ce296f ret  */
  ESPCHK(0x10ce2690u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10ce2970 (124 bytes, 47 insns) */
void f_10ce2970(void) {
  FTRACE(0x10ce2970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2970 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce2971 mov ebp, esp */
  EBP = (ESP);
  /* 10ce2973 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2974 mov eax, dword ptr [0x10cfe41c] */
  EAX = (r32((uint32_t)(0x10cfe41c)));
  /* 10ce2979 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ce297c jmp 0x10ce2987 */
  goto L_10ce2987;
L_10ce297e:;
  /* 10ce297e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2981 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2984 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ce2987:;
  /* 10ce2987 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce298a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce298d je 0x10ce29da */
  if (C.zf) goto L_10ce29da;
  /* 10ce298f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce2992 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce2998 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce299c push eax */
  push32((uint32_t)(EAX));
  /* 10ce299d call 0x10ce2140 */
  push32(0x10ce29a2u); f_10ce2140();
  /* 10ce29a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce29a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ce29a7 jne 0x10ce29d8 */
  if (!C.zf) goto L_10ce29d8;
  /* 10ce29a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce29ac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce29ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce29b1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10ce29b5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce29b8 je 0x10ce29ca */
  if (C.zf) goto L_10ce29ca;
  /* 10ce29ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce29bd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce29bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce29c2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10ce29c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce29c8 jne 0x10ce29d8 */
  if (!C.zf) goto L_10ce29d8;
L_10ce29ca:;
  /* 10ce29ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce29cd sub eax, dword ptr [0x10cfe41c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfe41c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce29d3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ce29d6 jmp 0x10ce29e8 */
  goto L_10ce29e8;
L_10ce29d8:;
  /* 10ce29d8 jmp 0x10ce297e */
  goto L_10ce297e;
L_10ce29da:;
  /* 10ce29da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce29dd sub eax, dword ptr [0x10cfe41c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfe41c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce29e3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ce29e6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10ce29e8:;
  /* 10ce29e8 mov esp, ebp */
  ESP = (EBP);
  /* 10ce29ea pop ebp */
  EBP = (pop32());
  /* 10ce29eb ret  */
  ESPCHK(0x10ce2970u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10ce29f0 (238 bytes, 80 insns) */
void f_10ce29f0(void) {
  FTRACE(0x10ce29f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce29f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce29f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce29f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce29f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ce29fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2a00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ce2a03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2a07 jne 0x10ce2a10 */
  if (!C.zf) goto L_10ce2a10;
  /* 10ce2a09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2a0b jmp 0x10ce2ada */
  goto L_10ce2ada;
L_10ce2a10:;
  /* 10ce2a10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2a13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce2a15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2a18 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2a1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ce2a1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce2a20 je 0x10ce2a2d */
  if (C.zf) goto L_10ce2a2d;
  /* 10ce2a22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce2a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2a28 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ce2a2b jmp 0x10ce2a10 */
  goto L_10ce2a10;
L_10ce2a2d:;
  /* 10ce2a2d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10ce2a32 push 0x10cfa8b8 */
  push32((uint32_t)(0x10cfa8b8u));
  /* 10ce2a37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce2a39 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ce2a3c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10ce2a43 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2a44 call 0x10cd2690 */
  push32(0x10ce2a49u); f_10cd2690();
  /* 10ce2a49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2a4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ce2a4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2a52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ce2a55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2a59 jne 0x10ce2a65 */
  if (!C.zf) goto L_10ce2a65;
  /* 10ce2a5b push 9 */
  push32((uint32_t)(0x9u));
  /* 10ce2a5d call 0x10cd1600 */
  push32(0x10ce2a62u); f_10cd1600();
  /* 10ce2a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ce2a65:;
  /* 10ce2a65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2a68 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ce2a6b:;
  /* 10ce2a6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2a6e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2a71 je 0x10ce2ace */
  if (C.zf) goto L_10ce2ace;
  /* 10ce2a73 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10ce2a78 push 0x10cfa8b8 */
  push32((uint32_t)(0x10cfa8b8u));
  /* 10ce2a7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ce2a7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2a82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ce2a84 push edx */
  push32((uint32_t)(EDX));
  /* 10ce2a85 call 0x10cd54c0 */
  push32(0x10ce2a8au); f_10cd54c0();
  /* 10ce2a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2a8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2a90 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2a91 call 0x10cd2690 */
  push32(0x10ce2a96u); f_10cd2690();
  /* 10ce2a96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2a99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2a9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ce2a9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2aa1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2aa4 je 0x10ce2aba */
  if (C.zf) goto L_10ce2aba;
  /* 10ce2aa6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2aa9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ce2aab push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2aac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2aaf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ce2ab1 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2ab2 call 0x10cd5640 */
  push32(0x10ce2ab7u); f_10cd5640();
  /* 10ce2ab7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ce2aba:;
  /* 10ce2aba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ce2abd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2ac0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ce2ac3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2ac6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2ac9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ce2acc jmp 0x10ce2a6b */
  goto L_10ce2a6b;
L_10ce2ace:;
  /* 10ce2ace mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ce2ad1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ce2ad7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ce2ada:;
  /* 10ce2ada mov esp, ebp */
  ESP = (EBP);
  /* 10ce2adc pop ebp */
  EBP = (pop32());
  /* 10ce2add ret  */
  ESPCHK(0x10ce29f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ae0 @ 0x10ce2ae0 (237 bytes, 81 insns) */
void f_10ce2ae0(void) {
  FTRACE(0x10ce2ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ce2ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10ce2ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2ae4 cmp dword ptr [0x10cffb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cffb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2aeb jne 0x10ce2b02 */
  if (!C.zf) goto L_10ce2b02;
  /* 10ce2aed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ce2af0 push eax */
  push32((uint32_t)(EAX));
  /* 10ce2af1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2af4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ce2af5 call 0x10ce2be0 */
  push32(0x10ce2afau); f_10ce2be0();
  /* 10ce2afa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2afd jmp 0x10ce2bc9 */
  goto L_10ce2bc9;
L_10ce2b02:;
  /* 10ce2b02 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ce2b04 call 0x10cd6090 */
  push32(0x10ce2b09u); f_10cd6090();
  /* 10ce2b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2b0c jmp 0x10ce2b17 */
  goto L_10ce2b17;
L_10ce2b0e:;
  /* 10ce2b0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2b11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2b14 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10ce2b17:;
  /* 10ce2b17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2b1a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10ce2b1e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10ce2b22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2b25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ce2b2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ce2b2d je 0x10ce2bab */
  if (C.zf) goto L_10ce2bab;
  /* 10ce2b2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2b32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2b37 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce2b39 mov cl, byte ptr [eax + 0x10cffc81] */
  CL = (r8((uint32_t)(EAX + 0x10cffc81)));
  /* 10ce2b3f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ce2b42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce2b44 je 0x10ce2b96 */
  if (C.zf) goto L_10ce2b96;
  /* 10ce2b46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2b49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2b4c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ce2b4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2b52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce2b54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ce2b56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ce2b58 jne 0x10ce2b68 */
  if (!C.zf) goto L_10ce2b68;
  /* 10ce2b5a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ce2b5c call 0x10cd6130 */
  push32(0x10ce2b61u); f_10cd6130();
  /* 10ce2b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2b64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2b66 jmp 0x10ce2bc9 */
  goto L_10ce2bc9;
L_10ce2b68:;
  /* 10ce2b68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2b6b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ce2b71 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ce2b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2b77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce2b79 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ce2b7b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ce2b7d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2b80 jne 0x10ce2b94 */
  if (!C.zf) goto L_10ce2b94;
  /* 10ce2b82 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ce2b84 call 0x10cd6130 */
  push32(0x10ce2b89u); f_10cd6130();
  /* 10ce2b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2b8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2b8f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ce2b92 jmp 0x10ce2bc9 */
  goto L_10ce2bc9;
L_10ce2b94:;
  /* 10ce2b94 jmp 0x10ce2ba6 */
  goto L_10ce2ba6;
L_10ce2b96:;
  /* 10ce2b96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2b99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ce2b9f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2ba2 jne 0x10ce2ba6 */
  if (!C.zf) goto L_10ce2ba6;
  /* 10ce2ba4 jmp 0x10ce2bab */
  goto L_10ce2bab;
L_10ce2ba6:;
  /* 10ce2ba6 jmp 0x10ce2b0e */
  goto L_10ce2b0e;
L_10ce2bab:;
  /* 10ce2bab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ce2bad call 0x10cd6130 */
  push32(0x10ce2bb2u); f_10cd6130();
  /* 10ce2bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2bb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ce2bb8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2bbd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ce2bc0 jne 0x10ce2bc7 */
  if (!C.zf) goto L_10ce2bc7;
  /* 10ce2bc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ce2bc5 jmp 0x10ce2bc9 */
  goto L_10ce2bc9;
L_10ce2bc7:;
  /* 10ce2bc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ce2bc9:;
  /* 10ce2bc9 mov esp, ebp */
  ESP = (EBP);
  /* 10ce2bcb pop ebp */
  EBP = (pop32());
  /* 10ce2bcc ret  */
  ESPCHK(0x10ce2ae0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10ce2be0 (193 bytes, 87 insns) */
void f_10ce2be0(void) {
  FTRACE(0x10ce2be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2be0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2be2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10ce2be6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ce2be7 mov ebx, eax */
  EBX = (EAX);
  /* 10ce2be9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ce2bec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ce2bf0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ce2bf6 je 0x10ce2c0b */
  if (C.zf) goto L_10ce2c0b;
L_10ce2bf8:;
  /* 10ce2bf8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10ce2bfa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ce2bfb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce2bfd je 0x10ce2bd0 */
  if (C.zf) { jmp_ind(0x10ce2bd0u); return; }
  /* 10ce2bff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10ce2c01 je 0x10ce2c54 */
  if (C.zf) goto L_10ce2c54;
  /* 10ce2c03 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ce2c09 jne 0x10ce2bf8 */
  if (!C.zf) goto L_10ce2bf8;
L_10ce2c0b:;
  /* 10ce2c0b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10ce2c0d push edi */
  push32((uint32_t)(EDI));
  /* 10ce2c0e mov eax, ebx */
  EAX = (EBX);
  /* 10ce2c10 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10ce2c13 push esi */
  push32((uint32_t)(ESI));
  /* 10ce2c14 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10ce2c16:;
  /* 10ce2c16 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10ce2c18 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10ce2c1d mov eax, ecx */
  EAX = (ECX);
  /* 10ce2c1f mov esi, edi */
  ESI = (EDI);
  /* 10ce2c21 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10ce2c23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2c25 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2c27 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ce2c2a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2c2d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10ce2c2f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2c31 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ce2c34 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10ce2c3a jne 0x10ce2c58 */
  if (!C.zf) goto L_10ce2c58;
  /* 10ce2c3c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2c41 je 0x10ce2c16 */
  if (C.zf) goto L_10ce2c16;
  /* 10ce2c43 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2c48 jne 0x10ce2c52 */
  if (!C.zf) goto L_10ce2c52;
  /* 10ce2c4a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10ce2c50 jne 0x10ce2c16 */
  if (!C.zf) goto L_10ce2c16;
L_10ce2c52:;
  /* 10ce2c52 pop esi */
  ESI = (pop32());
  /* 10ce2c53 pop edi */
  EDI = (pop32());
L_10ce2c54:;
  /* 10ce2c54 pop ebx */
  EBX = (pop32());
  /* 10ce2c55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ce2c57 ret  */
  ESPCHK(0x10ce2be0u, _esp0);
  ESP += 4; return;
L_10ce2c58:;
  /* 10ce2c58 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10ce2c5b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce2c5d je 0x10ce2c95 */
  if (C.zf) goto L_10ce2c95;
  /* 10ce2c5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ce2c61 je 0x10ce2c52 */
  if (C.zf) goto L_10ce2c52;
  /* 10ce2c63 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce2c65 je 0x10ce2c8e */
  if (C.zf) goto L_10ce2c8e;
  /* 10ce2c67 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ce2c69 je 0x10ce2c52 */
  if (C.zf) goto L_10ce2c52;
  /* 10ce2c6b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ce2c6e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce2c70 je 0x10ce2c87 */
  if (C.zf) goto L_10ce2c87;
  /* 10ce2c72 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ce2c74 je 0x10ce2c52 */
  if (C.zf) goto L_10ce2c52;
  /* 10ce2c76 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ce2c78 je 0x10ce2c80 */
  if (C.zf) goto L_10ce2c80;
  /* 10ce2c7a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ce2c7c je 0x10ce2c52 */
  if (C.zf) goto L_10ce2c52;
  /* 10ce2c7e jmp 0x10ce2c16 */
  goto L_10ce2c16;
L_10ce2c80:;
  /* 10ce2c80 pop esi */
  ESI = (pop32());
  /* 10ce2c81 pop edi */
  EDI = (pop32());
  /* 10ce2c82 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10ce2c85 pop ebx */
  EBX = (pop32());
  /* 10ce2c86 ret  */
  ESPCHK(0x10ce2be0u, _esp0);
  ESP += 4; return;
L_10ce2c87:;
  /* 10ce2c87 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10ce2c8a pop esi */
  ESI = (pop32());
  /* 10ce2c8b pop edi */
  EDI = (pop32());
  /* 10ce2c8c pop ebx */
  EBX = (pop32());
  /* 10ce2c8d ret  */
  ESPCHK(0x10ce2be0u, _esp0);
  ESP += 4; return;
L_10ce2c8e:;
  /* 10ce2c8e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10ce2c91 pop esi */
  ESI = (pop32());
  /* 10ce2c92 pop edi */
  EDI = (pop32());
  /* 10ce2c93 pop ebx */
  EBX = (pop32());
  /* 10ce2c94 ret  */
  ESPCHK(0x10ce2be0u, _esp0);
  ESP += 4; return;
L_10ce2c95:;
  /* 10ce2c95 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10ce2c98 pop esi */
  ESI = (pop32());
  /* 10ce2c99 pop edi */
  EDI = (pop32());
  /* 10ce2c9a pop ebx */
  EBX = (pop32());
  /* 10ce2c9b ret  */
  ESPCHK(0x10ce2be0u, _esp0);
  ESP += 4; return;
  /* 10ce2c9c jmp dword ptr [0x10d00220] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10d00220)))); return;
}

/* RtlUnwind @ 0x10ce2dec (6 bytes, 1 insns) */
void f_10ce2dec(void) {
  FTRACE(0x10ce2decu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ce2dec jmp dword ptr [0x10d00300] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10d00300)))); return;
}

