#include "recomp.h"

/* FUN_100138f0 @ 0x113138f0 (393 bytes, 123 insns) */
void f_113138f0(void) {
  FTRACE(0x113138f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113138f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113138f1 mov ebp, esp */
  EBP = (ESP);
  /* 113138f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113138f6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113138fa jne 0x11313906 */
  if (!C.zf) goto L_11313906;
  /* 113138fc mov eax, dword ptr [0x11331c98] */
  EAX = (r32((uint32_t)(0x11331c98)));
  /* 11313901 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11313904 jmp 0x1131390c */
  goto L_1131390c;
L_11313906:;
  /* 11313906 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313909 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1131390c:;
  /* 1131390c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1131390f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11313912 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313915 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11313918 push 0x11332b14 */
  push32((uint32_t)(0x11332b14u));
  /* 1131391d call dword ptr [0x113353bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353bc))), 0x11313923u);
  /* 11313923 cmp dword ptr [0x11332b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131392a je 0x1131394a */
  if (C.zf) goto L_1131394a;
  /* 1131392c push 0x11332b14 */
  push32((uint32_t)(0x11332b14u));
  /* 11313931 call dword ptr [0x113353ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ac))), 0x11313937u);
  /* 11313937 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11313939 call 0x11309fb0 */
  push32(0x1131393eu); f_11309fb0();
  /* 1131393e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313941 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11313948 jmp 0x11313951 */
  goto L_11313951;
L_1131394a:;
  /* 1131394a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11313951:;
  /* 11313951 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313955 jbe 0x11313a42 */
  if ((C.cf||C.zf)) goto L_11313a42;
  /* 1131395b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131395e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11313960 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11313963 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11313967 je 0x11313971 */
  if (C.zf) goto L_11313971;
  /* 11313969 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1131396d je 0x11313976 */
  if (C.zf) goto L_11313976;
  /* 1131396f jmp 0x113139d0 */
  goto L_113139d0;
L_11313971:;
  /* 11313971 jmp 0x11313a42 */
  goto L_11313a42;
L_11313976:;
  /* 11313976 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313979 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131397c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1131397f mov dword ptr [0x11332af0], 0 */
  w32((uint32_t)(0x11332af0), (0x0u));
  /* 11313989 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131398c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1131398f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313992 jne 0x113139a7 */
  if (!C.zf) goto L_113139a7;
  /* 11313994 mov dword ptr [0x11332af0], 1 */
  w32((uint32_t)(0x11332af0), (0x1u));
  /* 1131399e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113139a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113139a4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_113139a7:;
  /* 113139a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113139aa push ecx */
  push32((uint32_t)(ECX));
  /* 113139ab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 113139ae push edx */
  push32((uint32_t)(EDX));
  /* 113139af lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 113139b2 push eax */
  push32((uint32_t)(EAX));
  /* 113139b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113139b6 push ecx */
  push32((uint32_t)(ECX));
  /* 113139b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113139ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113139bc push eax */
  push32((uint32_t)(EAX));
  /* 113139bd call 0x11313a80 */
  push32(0x113139c2u); f_11313a80();
  /* 113139c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113139c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113139c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113139cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113139ce jmp 0x11313a3d */
  goto L_11313a3d;
L_113139d0:;
  /* 113139d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113139d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113139d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113139d7 mov ecx, dword ptr [0x11330c98] */
  ECX = (r32((uint32_t)(0x11330c98)));
  /* 113139dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113139df mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113139e3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 113139e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113139eb je 0x11313a18 */
  if (C.zf) goto L_11313a18;
  /* 113139ed cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113139f1 jbe 0x11313a18 */
  if ((C.cf||C.zf)) goto L_11313a18;
  /* 113139f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113139f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113139f9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113139fb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113139fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313a00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313a03 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11313a06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313a09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313a0c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11313a0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313a12 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313a15 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11313a18:;
  /* 11313a18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313a1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313a1e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11313a20 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11313a22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313a25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313a28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11313a2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313a2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313a31 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11313a34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313a37 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313a3a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11313a3d:;
  /* 11313a3d jmp 0x11313951 */
  goto L_11313951;
L_11313a42:;
  /* 11313a42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313a46 je 0x11313a54 */
  if (C.zf) goto L_11313a54;
  /* 11313a48 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11313a4a call 0x1130a050 */
  push32(0x11313a4fu); f_1130a050();
  /* 11313a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313a52 jmp 0x11313a5f */
  goto L_11313a5f;
L_11313a54:;
  /* 11313a54 push 0x11332b14 */
  push32((uint32_t)(0x11332b14u));
  /* 11313a59 call dword ptr [0x113353ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ac))), 0x11313a5fu);
L_11313a5f:;
  /* 11313a5f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313a63 jbe 0x11313a73 */
  if ((C.cf||C.zf)) goto L_11313a73;
  /* 11313a65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313a68 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11313a6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313a6e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313a71 jmp 0x11313a75 */
  goto L_11313a75;
L_11313a73:;
  /* 11313a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11313a75:;
  /* 11313a75 mov esp, ebp */
  ESP = (EBP);
  /* 11313a77 pop ebp */
  EBP = (pop32());
  /* 11313a78 ret  */
  ESPCHK(0x113138f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a80 @ 0x11313a80 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11313a80(void) {
  FTRACE(0x11313a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11313a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11313a81 mov ebp, esp */
  EBP = (ESP);
  /* 11313a83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313a86 push esi */
  push32((uint32_t)(ESI));
  /* 11313a87 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11313a8b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11313a8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313a91 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313a94 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11313a97 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313a9b ja 0x11313fe8 */
  if ((!C.cf&&!C.zf)) goto L_11313fe8;
  /* 11313aa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313aa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11313aa6 mov dl, byte ptr [eax + 0x11314049] */
  DL = (r8((uint32_t)(EAX + 0x11314049)));
  /* 11313aac jmp dword ptr [edx*4 + 0x11313fed] */
  switch (EDX) {
    case 0: goto L_11313fc6;
    case 1: goto L_11313ad5;
    case 2: goto L_11313b1b;
    case 3: goto L_11313c68;
    case 4: goto L_11313c90;
    case 5: goto L_11313d2f;
    case 6: goto L_11313d9b;
    case 7: goto L_11313dc4;
    case 8: goto L_11313e05;
    case 9: goto L_11313ee7;
    case 10: goto L_11313f4e;
    case 11: goto L_11313f9b;
    case 12: goto L_11313ab3;
    case 13: goto L_11313af8;
    case 14: goto L_11313b3e;
    case 15: goto L_11313c3e;
    case 16: goto L_11313cd5;
    case 17: goto L_11313d02;
    case 18: goto L_11313d57;
    case 19: goto L_11313ddb;
    case 20: goto L_11313e89;
    case 21: goto L_11313f18;
    case 22: goto L_11313fe8;
    default: x86_unimpl("switch@0x11313aac out of table"); return;
  }
L_11313ab3:;
  /* 11313ab3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 11313ab7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313aba push edx */
  push32((uint32_t)(EDX));
  /* 11313abb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313abe mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11313ac1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313ac4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11313ac7 push eax */
  push32((uint32_t)(EAX));
  /* 11313ac8 call 0x113140a0 */
  push32(0x11313acdu); f_113140a0();
  /* 11313acd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313ad0 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313ad5:;
  /* 11313ad5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313ad8 push ecx */
  push32((uint32_t)(ECX));
  /* 11313ad9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313adc push edx */
  push32((uint32_t)(EDX));
  /* 11313add mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313ae0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11313ae3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313ae6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11313aea push eax */
  push32((uint32_t)(EAX));
  /* 11313aeb call 0x113140a0 */
  push32(0x11313af0u); f_113140a0();
  /* 11313af0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313af3 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313af8:;
  /* 11313af8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313afb push ecx */
  push32((uint32_t)(ECX));
  /* 11313afc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313aff push edx */
  push32((uint32_t)(EDX));
  /* 11313b00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313b03 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11313b06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313b09 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11313b0d push eax */
  push32((uint32_t)(EAX));
  /* 11313b0e call 0x113140a0 */
  push32(0x11313b13u); f_113140a0();
  /* 11313b13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313b16 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313b1b:;
  /* 11313b1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313b1e push ecx */
  push32((uint32_t)(ECX));
  /* 11313b1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313b22 push edx */
  push32((uint32_t)(EDX));
  /* 11313b23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313b26 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11313b29 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313b2c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11313b30 push eax */
  push32((uint32_t)(EAX));
  /* 11313b31 call 0x113140a0 */
  push32(0x11313b36u); f_113140a0();
  /* 11313b36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313b39 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313b3e:;
  /* 11313b3e cmp dword ptr [0x11332af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313b45 je 0x11313bc6 */
  if (C.zf) goto L_11313bc6;
  /* 11313b47 mov dword ptr [0x11332af0], 0 */
  w32((uint32_t)(0x11332af0), (0x0u));
  /* 11313b51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313b54 push ecx */
  push32((uint32_t)(ECX));
  /* 11313b55 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313b58 push edx */
  push32((uint32_t)(EDX));
  /* 11313b59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313b5c push eax */
  push32((uint32_t)(EAX));
  /* 11313b5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313b60 push ecx */
  push32((uint32_t)(ECX));
  /* 11313b61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313b64 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11313b6a push eax */
  push32((uint32_t)(EAX));
  /* 11313b6b call 0x11314250 */
  push32(0x11313b70u); f_11314250();
  /* 11313b70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313b73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313b76 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313b79 jne 0x11313b80 */
  if (!C.zf) goto L_11313b80;
  /* 11313b7b jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313b80:;
  /* 11313b80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313b83 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11313b85 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11313b88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313b8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11313b8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313b90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313b93 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11313b95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313b98 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11313b9a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313b9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313ba0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11313ba2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313ba5 push ecx */
  push32((uint32_t)(ECX));
  /* 11313ba6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313ba9 push edx */
  push32((uint32_t)(EDX));
  /* 11313baa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313bad push eax */
  push32((uint32_t)(EAX));
  /* 11313bae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11313bb2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313bb5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11313bbb push eax */
  push32((uint32_t)(EAX));
  /* 11313bbc call 0x11314250 */
  push32(0x11313bc1u); f_11314250();
  /* 11313bc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313bc4 jmp 0x11313c39 */
  goto L_11313c39;
L_11313bc6:;
  /* 11313bc6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11313bca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313bcd push edx */
  push32((uint32_t)(EDX));
  /* 11313bce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313bd1 push eax */
  push32((uint32_t)(EAX));
  /* 11313bd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313bd5 push ecx */
  push32((uint32_t)(ECX));
  /* 11313bd6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313bd9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11313bdf push eax */
  push32((uint32_t)(EAX));
  /* 11313be0 call 0x11314250 */
  push32(0x11313be5u); f_11314250();
  /* 11313be5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313be8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313beb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313bee jne 0x11313bf5 */
  if (!C.zf) goto L_11313bf5;
  /* 11313bf0 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313bf5:;
  /* 11313bf5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313bf8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11313bfa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11313bfd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313c00 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11313c02 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313c05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313c08 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11313c0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313c0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11313c0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313c12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313c15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11313c17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313c1a push ecx */
  push32((uint32_t)(ECX));
  /* 11313c1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313c1e push edx */
  push32((uint32_t)(EDX));
  /* 11313c1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313c22 push eax */
  push32((uint32_t)(EAX));
  /* 11313c23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313c26 push ecx */
  push32((uint32_t)(ECX));
  /* 11313c27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313c2a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11313c30 push eax */
  push32((uint32_t)(EAX));
  /* 11313c31 call 0x11314250 */
  push32(0x11313c36u); f_11314250();
  /* 11313c36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11313c39:;
  /* 11313c39 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313c3e:;
  /* 11313c3e mov ecx, dword ptr [0x11332af0] */
  ECX = (r32((uint32_t)(0x11332af0)));
  /* 11313c44 mov dword ptr [0x11332b00], ecx */
  w32((uint32_t)(0x11332b00), (ECX));
  /* 11313c4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313c4d push edx */
  push32((uint32_t)(EDX));
  /* 11313c4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313c51 push eax */
  push32((uint32_t)(EAX));
  /* 11313c52 push 2 */
  push32((uint32_t)(0x2u));
  /* 11313c54 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313c57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11313c5a push edx */
  push32((uint32_t)(EDX));
  /* 11313c5b call 0x113140f0 */
  push32(0x11313c60u); f_113140f0();
  /* 11313c60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313c63 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313c68:;
  /* 11313c68 mov eax, dword ptr [0x11332af0] */
  EAX = (r32((uint32_t)(0x11332af0)));
  /* 11313c6d mov dword ptr [0x11332b00], eax */
  w32((uint32_t)(0x11332b00), (EAX));
  /* 11313c72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313c75 push ecx */
  push32((uint32_t)(ECX));
  /* 11313c76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313c79 push edx */
  push32((uint32_t)(EDX));
  /* 11313c7a push 2 */
  push32((uint32_t)(0x2u));
  /* 11313c7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313c7f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11313c82 push ecx */
  push32((uint32_t)(ECX));
  /* 11313c83 call 0x113140f0 */
  push32(0x11313c88u); f_113140f0();
  /* 11313c88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313c8b jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313c90:;
  /* 11313c90 mov edx, dword ptr [0x11332af0] */
  EDX = (r32((uint32_t)(0x11332af0)));
  /* 11313c96 mov dword ptr [0x11332b00], edx */
  w32((uint32_t)(0x11332b00), (EDX));
  /* 11313c9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313c9f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11313ca2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11313ca3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11313ca8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11313caa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11313cad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313cb1 jne 0x11313cba */
  if (!C.zf) goto L_11313cba;
  /* 11313cb3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11313cba:;
  /* 11313cba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313cbd push edx */
  push32((uint32_t)(EDX));
  /* 11313cbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313cc1 push eax */
  push32((uint32_t)(EAX));
  /* 11313cc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11313cc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11313cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11313cc8 call 0x113140f0 */
  push32(0x11313ccdu); f_113140f0();
  /* 11313ccd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313cd0 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313cd5:;
  /* 11313cd5 mov edx, dword ptr [0x11332af0] */
  EDX = (r32((uint32_t)(0x11332af0)));
  /* 11313cdb mov dword ptr [0x11332b00], edx */
  w32((uint32_t)(0x11332b00), (EDX));
  /* 11313ce1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313ce4 push eax */
  push32((uint32_t)(EAX));
  /* 11313ce5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 11313ce9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11313ceb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313cee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11313cf1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313cf4 push eax */
  push32((uint32_t)(EAX));
  /* 11313cf5 call 0x113140f0 */
  push32(0x11313cfau); f_113140f0();
  /* 11313cfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313cfd jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313d02:;
  /* 11313d02 mov ecx, dword ptr [0x11332af0] */
  ECX = (r32((uint32_t)(0x11332af0)));
  /* 11313d08 mov dword ptr [0x11332b00], ecx */
  w32((uint32_t)(0x11332b00), (ECX));
  /* 11313d0e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313d11 push edx */
  push32((uint32_t)(EDX));
  /* 11313d12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313d15 push eax */
  push32((uint32_t)(EAX));
  /* 11313d16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11313d18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313d1b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11313d1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313d21 push edx */
  push32((uint32_t)(EDX));
  /* 11313d22 call 0x113140f0 */
  push32(0x11313d27u); f_113140f0();
  /* 11313d27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313d2a jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313d2f:;
  /* 11313d2f mov eax, dword ptr [0x11332af0] */
  EAX = (r32((uint32_t)(0x11332af0)));
  /* 11313d34 mov dword ptr [0x11332b00], eax */
  w32((uint32_t)(0x11332b00), (EAX));
  /* 11313d39 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313d3c push ecx */
  push32((uint32_t)(ECX));
  /* 11313d3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313d40 push edx */
  push32((uint32_t)(EDX));
  /* 11313d41 push 2 */
  push32((uint32_t)(0x2u));
  /* 11313d43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313d46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11313d49 push ecx */
  push32((uint32_t)(ECX));
  /* 11313d4a call 0x113140f0 */
  push32(0x11313d4fu); f_113140f0();
  /* 11313d4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313d52 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313d57:;
  /* 11313d57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313d5a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313d5e jg 0x11313d7c */
  if ((!C.zf&&C.sf==C.of)) goto L_11313d7c;
  /* 11313d60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313d63 push eax */
  push32((uint32_t)(EAX));
  /* 11313d64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313d67 push ecx */
  push32((uint32_t)(ECX));
  /* 11313d68 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313d6b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11313d71 push eax */
  push32((uint32_t)(EAX));
  /* 11313d72 call 0x113140a0 */
  push32(0x11313d77u); f_113140a0();
  /* 11313d77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313d7a jmp 0x11313d96 */
  goto L_11313d96;
L_11313d7c:;
  /* 11313d7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313d7f push ecx */
  push32((uint32_t)(ECX));
  /* 11313d80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313d83 push edx */
  push32((uint32_t)(EDX));
  /* 11313d84 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313d87 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11313d8d push ecx */
  push32((uint32_t)(ECX));
  /* 11313d8e call 0x113140a0 */
  push32(0x11313d93u); f_113140a0();
  /* 11313d93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11313d96:;
  /* 11313d96 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313d9b:;
  /* 11313d9b mov edx, dword ptr [0x11332af0] */
  EDX = (r32((uint32_t)(0x11332af0)));
  /* 11313da1 mov dword ptr [0x11332b00], edx */
  w32((uint32_t)(0x11332b00), (EDX));
  /* 11313da7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313daa push eax */
  push32((uint32_t)(EAX));
  /* 11313dab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313dae push ecx */
  push32((uint32_t)(ECX));
  /* 11313daf push 2 */
  push32((uint32_t)(0x2u));
  /* 11313db1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313db4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11313db6 push eax */
  push32((uint32_t)(EAX));
  /* 11313db7 call 0x113140f0 */
  push32(0x11313dbcu); f_113140f0();
  /* 11313dbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313dbf jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313dc4:;
  /* 11313dc4 mov ecx, dword ptr [0x11332af0] */
  ECX = (r32((uint32_t)(0x11332af0)));
  /* 11313dca mov dword ptr [0x11332b00], ecx */
  w32((uint32_t)(0x11332b00), (ECX));
  /* 11313dd0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313dd3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11313dd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11313dd9 jmp 0x11313e2d */
  goto L_11313e2d;
L_11313ddb:;
  /* 11313ddb mov ecx, dword ptr [0x11332af0] */
  ECX = (r32((uint32_t)(0x11332af0)));
  /* 11313de1 mov dword ptr [0x11332b00], ecx */
  w32((uint32_t)(0x11332b00), (ECX));
  /* 11313de7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313dea push edx */
  push32((uint32_t)(EDX));
  /* 11313deb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313dee push eax */
  push32((uint32_t)(EAX));
  /* 11313def push 1 */
  push32((uint32_t)(0x1u));
  /* 11313df1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313df4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11313df7 push edx */
  push32((uint32_t)(EDX));
  /* 11313df8 call 0x113140f0 */
  push32(0x11313dfdu); f_113140f0();
  /* 11313dfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313e00 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313e05:;
  /* 11313e05 mov eax, dword ptr [0x11332af0] */
  EAX = (r32((uint32_t)(0x11332af0)));
  /* 11313e0a mov dword ptr [0x11332b00], eax */
  w32((uint32_t)(0x11332b00), (EAX));
  /* 11313e0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313e12 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313e16 jne 0x11313e21 */
  if (!C.zf) goto L_11313e21;
  /* 11313e18 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11313e1f jmp 0x11313e2d */
  goto L_11313e2d;
L_11313e21:;
  /* 11313e21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313e24 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11313e27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313e2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11313e2d:;
  /* 11313e2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313e30 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11313e33 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313e36 jge 0x11313e41 */
  if ((C.sf==C.of)) goto L_11313e41;
  /* 11313e38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11313e3f jmp 0x11313e6e */
  goto L_11313e6e;
L_11313e41:;
  /* 11313e41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313e44 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11313e47 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11313e48 mov ecx, 7 */
  ECX = (0x7u);
  /* 11313e4d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11313e4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11313e52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313e55 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11313e58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11313e59 mov ecx, 7 */
  ECX = (0x7u);
  /* 11313e5e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11313e60 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313e63 jl 0x11313e6e */
  if ((C.sf!=C.of)) goto L_11313e6e;
  /* 11313e65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11313e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313e6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11313e6e:;
  /* 11313e6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313e71 push eax */
  push32((uint32_t)(EAX));
  /* 11313e72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313e75 push ecx */
  push32((uint32_t)(ECX));
  /* 11313e76 push 2 */
  push32((uint32_t)(0x2u));
  /* 11313e78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11313e7b push edx */
  push32((uint32_t)(EDX));
  /* 11313e7c call 0x113140f0 */
  push32(0x11313e81u); f_113140f0();
  /* 11313e81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313e84 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313e89:;
  /* 11313e89 cmp dword ptr [0x11332af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313e90 je 0x11313ec0 */
  if (C.zf) goto L_11313ec0;
  /* 11313e92 mov dword ptr [0x11332af0], 0 */
  w32((uint32_t)(0x11332af0), (0x0u));
  /* 11313e9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313e9f push eax */
  push32((uint32_t)(EAX));
  /* 11313ea0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11313ea4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313ea7 push edx */
  push32((uint32_t)(EDX));
  /* 11313ea8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313eab push eax */
  push32((uint32_t)(EAX));
  /* 11313eac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313eaf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11313eb5 push edx */
  push32((uint32_t)(EDX));
  /* 11313eb6 call 0x11314250 */
  push32(0x11313ebbu); f_11314250();
  /* 11313ebb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313ebe jmp 0x11313ee2 */
  goto L_11313ee2;
L_11313ec0:;
  /* 11313ec0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313ec3 push eax */
  push32((uint32_t)(EAX));
  /* 11313ec4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 11313ec8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313ecb push edx */
  push32((uint32_t)(EDX));
  /* 11313ecc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313ecf push eax */
  push32((uint32_t)(EAX));
  /* 11313ed0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313ed3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11313ed9 push edx */
  push32((uint32_t)(EDX));
  /* 11313eda call 0x11314250 */
  push32(0x11313edfu); f_11314250();
  /* 11313edf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11313ee2:;
  /* 11313ee2 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313ee7:;
  /* 11313ee7 mov dword ptr [0x11332af0], 0 */
  w32((uint32_t)(0x11332af0), (0x0u));
  /* 11313ef1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313ef4 push eax */
  push32((uint32_t)(EAX));
  /* 11313ef5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313ef8 push ecx */
  push32((uint32_t)(ECX));
  /* 11313ef9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313efc push edx */
  push32((uint32_t)(EDX));
  /* 11313efd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313f00 push eax */
  push32((uint32_t)(EAX));
  /* 11313f01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11313f04 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11313f0a push edx */
  push32((uint32_t)(EDX));
  /* 11313f0b call 0x11314250 */
  push32(0x11313f10u); f_11314250();
  /* 11313f10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313f13 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313f18:;
  /* 11313f18 mov eax, dword ptr [0x11332af0] */
  EAX = (r32((uint32_t)(0x11332af0)));
  /* 11313f1d mov dword ptr [0x11332b00], eax */
  w32((uint32_t)(0x11332b00), (EAX));
  /* 11313f22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313f25 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11313f28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11313f29 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11313f2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11313f30 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11313f33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313f36 push edx */
  push32((uint32_t)(EDX));
  /* 11313f37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313f3a push eax */
  push32((uint32_t)(EAX));
  /* 11313f3b push 2 */
  push32((uint32_t)(0x2u));
  /* 11313f3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11313f40 push ecx */
  push32((uint32_t)(ECX));
  /* 11313f41 call 0x113140f0 */
  push32(0x11313f46u); f_113140f0();
  /* 11313f46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313f49 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313f4e:;
  /* 11313f4e mov edx, dword ptr [0x11332af0] */
  EDX = (r32((uint32_t)(0x11332af0)));
  /* 11313f54 mov dword ptr [0x11332b00], edx */
  w32((uint32_t)(0x11332b00), (EDX));
  /* 11313f5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313f5d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11313f60 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11313f61 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11313f66 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11313f68 mov ecx, eax */
  ECX = (EAX);
  /* 11313f6a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313f6d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11313f70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313f73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11313f76 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11313f77 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11313f7c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11313f7e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313f80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11313f83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313f86 push eax */
  push32((uint32_t)(EAX));
  /* 11313f87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313f8a push ecx */
  push32((uint32_t)(ECX));
  /* 11313f8b push 4 */
  push32((uint32_t)(0x4u));
  /* 11313f8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11313f90 push edx */
  push32((uint32_t)(EDX));
  /* 11313f91 call 0x113140f0 */
  push32(0x11313f96u); f_113140f0();
  /* 11313f96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313f99 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313f9b:;
  /* 11313f9b call 0x113150b0 */
  push32(0x11313fa0u); f_113150b0();
  /* 11313fa0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313fa3 push eax */
  push32((uint32_t)(EAX));
  /* 11313fa4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 11313fa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313fab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11313fad cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313fb1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11313fb4 mov ecx, dword ptr [eax*4 + 0x11331e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11331e1c)));
  /* 11313fbb push ecx */
  push32((uint32_t)(ECX));
  /* 11313fbc call 0x113140a0 */
  push32(0x11313fc1u); f_113140a0();
  /* 11313fc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313fc4 jmp 0x11313fe8 */
  goto L_11313fe8;
L_11313fc6:;
  /* 11313fc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313fc9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11313fcb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11313fce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313fd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11313fd3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313fd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11313fd9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11313fdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313fde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11313fe0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313fe3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11313fe6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11313fe8:;
  /* 11313fe8 pop esi */
  ESI = (pop32());
  /* 11313fe9 mov esp, ebp */
  ESP = (EBP);
  /* 11313feb pop ebp */
  EBP = (pop32());
  /* 11313fec ret  */
  ESPCHK(0x11313a80u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x113140a0 (72 bytes, 30 insns) */
void f_113140a0(void) {
  FTRACE(0x113140a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113140a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113140a1 mov ebp, esp */
  EBP = (ESP);
L_113140a3:;
  /* 113140a3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113140a6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113140a9 je 0x113140e6 */
  if (C.zf) goto L_113140e6;
  /* 113140ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113140ae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113140b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113140b3 je 0x113140e6 */
  if (C.zf) goto L_113140e6;
  /* 113140b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113140b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113140ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113140bd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113140bf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113140c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113140c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113140c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113140c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113140cc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113140ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113140d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113140d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113140d7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113140da mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113140dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113140df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113140e2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113140e4 jmp 0x113140a3 */
  goto L_113140a3;
L_113140e6:;
  /* 113140e6 pop ebp */
  EBP = (pop32());
  /* 113140e7 ret  */
  ESPCHK(0x113140a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100140f0 @ 0x113140f0 (173 bytes, 64 insns) */
void f_113140f0(void) {
  FTRACE(0x113140f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113140f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113140f1 mov ebp, esp */
  EBP = (ESP);
  /* 113140f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113140f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113140fb cmp dword ptr [0x11332b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314102 je 0x1131411a */
  if (C.zf) goto L_1131411a;
  /* 11314104 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314107 push eax */
  push32((uint32_t)(EAX));
  /* 11314108 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131410b push ecx */
  push32((uint32_t)(ECX));
  /* 1131410c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131410f push edx */
  push32((uint32_t)(EDX));
  /* 11314110 call 0x113141a0 */
  push32(0x11314115u); f_113141a0();
  /* 11314115 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314118 jmp 0x11314199 */
  goto L_11314199;
L_1131411a:;
  /* 1131411a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131411d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11314120 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314122 jae 0x11314190 */
  if (!C.cf) goto L_11314190;
  /* 11314124 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11314127 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1131412a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1131412d jmp 0x11314138 */
  goto L_11314138;
L_1131412f:;
  /* 1131412f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11314132 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11314135 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11314138:;
  /* 11314138 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1131413b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131413e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11314140 je 0x11314174 */
  if (C.zf) goto L_11314174;
  /* 11314142 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314145 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11314146 mov ecx, 0xa */
  ECX = (0xau);
  /* 1131414b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1131414d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314150 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314153 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11314155 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11314158 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1131415b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131415e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1131415f mov ecx, 0xa */
  ECX = (0xau);
  /* 11314164 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11314166 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11314169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131416c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131416f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11314172 jmp 0x1131412f */
  goto L_1131412f;
L_11314174:;
  /* 11314174 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314177 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11314179 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131417c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131417f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11314181 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314184 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11314186 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11314189 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131418c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1131418e jmp 0x11314199 */
  goto L_11314199;
L_11314190:;
  /* 11314190 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314193 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11314199:;
  /* 11314199 mov esp, ebp */
  ESP = (EBP);
  /* 1131419b pop ebp */
  EBP = (pop32());
  /* 1131419c ret  */
  ESPCHK(0x113140f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x113141a0 (172 bytes, 65 insns) */
void f_113141a0(void) {
  FTRACE(0x113141a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113141a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113141a1 mov ebp, esp */
  EBP = (ESP);
  /* 113141a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113141a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113141a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113141ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113141ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113141b1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113141b4 jbe 0x113141fb */
  if ((C.cf||C.zf)) goto L_113141fb;
L_113141b6:;
  /* 113141b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113141b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113141ba mov ecx, 0xa */
  ECX = (0xau);
  /* 113141bf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113141c1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113141c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113141c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113141c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113141cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113141cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113141d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113141d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113141d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113141da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113141dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113141df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113141e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113141e3 mov ecx, 0xa */
  ECX = (0xau);
  /* 113141e8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113141ea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113141ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113141f1 jle 0x113141fb */
  if ((C.zf||C.sf!=C.of)) goto L_113141fb;
  /* 113141f3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113141f6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113141f9 ja 0x113141b6 */
  if ((!C.cf&&!C.zf)) goto L_113141b6;
L_113141fb:;
  /* 113141fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113141fe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11314200 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11314203 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11314206 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314209 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1131420b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131420e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11314211 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11314214:;
  /* 11314214 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314217 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11314219 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1131421c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131421f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11314222 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11314224 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11314226 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314229 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1131422c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1131422f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11314232 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11314235 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11314237 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131423a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131423d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11314240 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11314243 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314246 jb 0x11314214 */
  if (C.cf) goto L_11314214;
  /* 11314248 mov esp, ebp */
  ESP = (EBP);
  /* 1131424a pop ebp */
  EBP = (pop32());
  /* 1131424b ret  */
  ESPCHK(0x113141a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014250 @ 0x11314250 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11314250(void) {
  FTRACE(0x11314250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11314250 push ebp */
  push32((uint32_t)(EBP));
  /* 11314251 mov ebp, esp */
  EBP = (ESP);
  /* 11314253 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11314256:;
  /* 11314256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314259 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1131425c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1131425e je 0x113146cc */
  if (C.zf) goto L_113146cc;
  /* 11314264 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314267 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131426a je 0x113146cc */
  if (C.zf) goto L_113146cc;
  /* 11314270 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11314274 mov dword ptr [0x11332b00], 0 */
  w32((uint32_t)(0x11332b00), (0x0u));
  /* 1131427e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11314285 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314288 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1131428b jmp 0x11314296 */
  goto L_11314296;
L_1131428d:;
  /* 1131428d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11314290 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314293 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11314296:;
  /* 11314296 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314299 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1131429c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131429f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113142a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113142a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113142a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113142ab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113142ad jne 0x113142b1 */
  if (!C.zf) goto L_113142b1;
  /* 113142af jmp 0x1131428d */
  goto L_1131428d;
L_113142b1:;
  /* 113142b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113142b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113142b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113142ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113142bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113142c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113142c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113142c6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113142c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113142cc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113142d0 ja 0x11314620 */
  if ((!C.cf&&!C.zf)) goto L_11314620;
  /* 113142d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113142d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113142db mov al, byte ptr [ecx + 0x113146fc] */
  AL = (r8((uint32_t)(ECX + 0x113146fc)));
  /* 113142e1 jmp dword ptr [eax*4 + 0x113146d0] */
  switch (EAX) {
    case 0: goto L_1131453f;
    case 1: goto L_11314423;
    case 2: goto L_113143ae;
    case 3: goto L_113142e8;
    case 4: goto L_11314326;
    case 5: goto L_11314387;
    case 6: goto L_113143d5;
    case 7: goto L_113143fc;
    case 8: goto L_1131446a;
    case 9: goto L_11314364;
    case 10: goto L_11314620;
    default: x86_unimpl("switch@0x113142e1 out of table"); return;
  }
L_113142e8:;
  /* 113142e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113142eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113142ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113142f1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113142f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113142f7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113142fb ja 0x11314321 */
  if ((!C.cf&&!C.zf)) goto L_11314321;
  /* 113142fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11314300 jmp dword ptr [ecx*4 + 0x1131474f] */
  switch (ECX) {
    case 0: goto L_11314307;
    case 1: goto L_11314311;
    case 2: goto L_11314317;
    case 3: goto L_1131431d;
    case 4: goto L_11314345;
    case 5: goto L_1131434f;
    case 6: goto L_11314355;
    case 7: goto L_1131435b;
    default: x86_unimpl("switch@0x11314300 out of table"); return;
  }
L_11314307:;
  /* 11314307 mov dword ptr [0x11332b00], 1 */
  w32((uint32_t)(0x11332b00), (0x1u));
L_11314311:;
  /* 11314311 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11314315 jmp 0x11314321 */
  goto L_11314321;
L_11314317:;
  /* 11314317 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1131431b jmp 0x11314321 */
  goto L_11314321;
L_1131431d:;
  /* 1131431d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11314321:;
  /* 11314321 jmp 0x11314620 */
  goto L_11314620;
L_11314326:;
  /* 11314326 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11314329 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1131432c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1131432f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11314332 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11314335 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314339 ja 0x1131435f */
  if ((!C.cf&&!C.zf)) goto L_1131435f;
  /* 1131433b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1131433e jmp dword ptr [ecx*4 + 0x1131475f] */
  switch (ECX) {
    case 0: goto L_11314345;
    case 1: goto L_1131434f;
    case 2: goto L_11314355;
    case 3: goto L_1131435b;
    default: x86_unimpl("switch@0x1131433e out of table"); return;
  }
L_11314345:;
  /* 11314345 mov dword ptr [0x11332b00], 1 */
  w32((uint32_t)(0x11332b00), (0x1u));
L_1131434f:;
  /* 1131434f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11314353 jmp 0x1131435f */
  goto L_1131435f;
L_11314355:;
  /* 11314355 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11314359 jmp 0x1131435f */
  goto L_1131435f;
L_1131435b:;
  /* 1131435b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1131435f:;
  /* 1131435f jmp 0x11314620 */
  goto L_11314620;
L_11314364:;
  /* 11314364 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11314367 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1131436a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131436e je 0x11314378 */
  if (C.zf) goto L_11314378;
  /* 11314370 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314374 je 0x1131437e */
  if (C.zf) goto L_1131437e;
  /* 11314376 jmp 0x11314382 */
  goto L_11314382;
L_11314378:;
  /* 11314378 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1131437c jmp 0x11314382 */
  goto L_11314382;
L_1131437e:;
  /* 1131437e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11314382:;
  /* 11314382 jmp 0x11314620 */
  goto L_11314620;
L_11314387:;
  /* 11314387 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131438a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1131438d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314391 je 0x1131439b */
  if (C.zf) goto L_1131439b;
  /* 11314393 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314397 je 0x113143a5 */
  if (C.zf) goto L_113143a5;
  /* 11314399 jmp 0x113143a9 */
  goto L_113143a9;
L_1131439b:;
  /* 1131439b mov dword ptr [0x11332b00], 1 */
  w32((uint32_t)(0x11332b00), (0x1u));
L_113143a5:;
  /* 113143a5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_113143a9:;
  /* 113143a9 jmp 0x11314620 */
  goto L_11314620;
L_113143ae:;
  /* 113143ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113143b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 113143b4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113143b8 je 0x113143c2 */
  if (C.zf) goto L_113143c2;
  /* 113143ba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113143be je 0x113143cc */
  if (C.zf) goto L_113143cc;
  /* 113143c0 jmp 0x113143d0 */
  goto L_113143d0;
L_113143c2:;
  /* 113143c2 mov dword ptr [0x11332b00], 1 */
  w32((uint32_t)(0x11332b00), (0x1u));
L_113143cc:;
  /* 113143cc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_113143d0:;
  /* 113143d0 jmp 0x11314620 */
  goto L_11314620;
L_113143d5:;
  /* 113143d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113143d8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 113143db cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113143df je 0x113143e9 */
  if (C.zf) goto L_113143e9;
  /* 113143e1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113143e5 je 0x113143f3 */
  if (C.zf) goto L_113143f3;
  /* 113143e7 jmp 0x113143f7 */
  goto L_113143f7;
L_113143e9:;
  /* 113143e9 mov dword ptr [0x11332b00], 1 */
  w32((uint32_t)(0x11332b00), (0x1u));
L_113143f3:;
  /* 113143f3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_113143f7:;
  /* 113143f7 jmp 0x11314620 */
  goto L_11314620;
L_113143fc:;
  /* 113143fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113143ff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11314402 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314406 je 0x11314410 */
  if (C.zf) goto L_11314410;
  /* 11314408 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131440c je 0x1131441a */
  if (C.zf) goto L_1131441a;
  /* 1131440e jmp 0x1131441e */
  goto L_1131441e;
L_11314410:;
  /* 11314410 mov dword ptr [0x11332b00], 1 */
  w32((uint32_t)(0x11332b00), (0x1u));
L_1131441a:;
  /* 1131441a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1131441e:;
  /* 1131441e jmp 0x11314620 */
  goto L_11314620;
L_11314423:;
  /* 11314423 push 0x1132ec84 */
  push32((uint32_t)(0x1132ec84u));
  /* 11314428 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131442b push ecx */
  push32((uint32_t)(ECX));
  /* 1131442c call 0x11314c80 */
  push32(0x11314431u); f_11314c80();
  /* 11314431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11314436 jne 0x11314443 */
  if (!C.zf) goto L_11314443;
  /* 11314438 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131443b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131443e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11314441 jmp 0x11314461 */
  goto L_11314461;
L_11314443:;
  /* 11314443 push 0x1132ec80 */
  push32((uint32_t)(0x1132ec80u));
  /* 11314448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131444b push eax */
  push32((uint32_t)(EAX));
  /* 1131444c call 0x11314c80 */
  push32(0x11314451u); f_11314c80();
  /* 11314451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11314456 jne 0x11314461 */
  if (!C.zf) goto L_11314461;
  /* 11314458 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131445b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131445e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11314461:;
  /* 11314461 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11314465 jmp 0x11314620 */
  goto L_11314620;
L_1131446a:;
  /* 1131446a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1131446d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314471 jg 0x11314481 */
  if ((!C.zf&&C.sf==C.of)) goto L_11314481;
  /* 11314473 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11314476 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1131447c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1131447f jmp 0x1131448d */
  goto L_1131448d;
L_11314481:;
  /* 11314481 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11314484 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1131448a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1131448d:;
  /* 1131448d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314491 jle 0x11314534 */
  if ((C.zf||C.sf!=C.of)) goto L_11314534;
  /* 11314497 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131449a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131449d jbe 0x11314534 */
  if ((C.cf||C.zf)) goto L_11314534;
  /* 113144a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113144a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113144a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113144aa mov ecx, dword ptr [0x11330c98] */
  ECX = (r32((uint32_t)(0x11330c98)));
  /* 113144b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113144b2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113144b6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 113144bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113144be je 0x113144f7 */
  if (C.zf) goto L_113144f7;
  /* 113144c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113144c3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113144c6 jbe 0x113144f7 */
  if ((C.cf||C.zf)) goto L_113144f7;
  /* 113144c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113144cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113144cd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113144d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113144d2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113144d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113144d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113144d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113144dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113144df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113144e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113144e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113144e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113144ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113144ed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113144ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113144f2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113144f5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113144f7:;
  /* 113144f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113144fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113144fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113144ff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11314501 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11314503 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314506 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11314508 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131450b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131450e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11314510 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11314513 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314516 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11314519 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131451c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1131451e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11314521 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314524 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11314526 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11314529 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1131452c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1131452f jmp 0x1131448d */
  goto L_1131448d;
L_11314534:;
  /* 11314534 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314537 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1131453a jmp 0x11314256 */
  goto L_11314256;
L_1131453f:;
  /* 1131453f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11314542 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11314545 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11314547 je 0x11314612 */
  if (C.zf) goto L_11314612;
  /* 1131454d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314550 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314553 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11314556:;
  /* 11314556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314559 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1131455c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1131455e je 0x11314610 */
  if (C.zf) goto L_11314610;
  /* 11314564 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314567 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131456a je 0x11314610 */
  if (C.zf) goto L_11314610;
  /* 11314570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314573 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11314576 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314579 jne 0x11314589 */
  if (!C.zf) goto L_11314589;
  /* 1131457b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131457e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314581 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11314584 jmp 0x11314610 */
  goto L_11314610;
L_11314589:;
  /* 11314589 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131458c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1131458e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11314590 mov edx, dword ptr [0x11330c98] */
  EDX = (r32((uint32_t)(0x11330c98)));
  /* 11314596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314598 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1131459c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 113145a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113145a3 je 0x113145dc */
  if (C.zf) goto L_113145dc;
  /* 113145a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113145a8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113145ab jbe 0x113145dc */
  if ((C.cf||C.zf)) goto L_113145dc;
  /* 113145ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113145b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113145b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113145b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113145b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113145b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113145bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113145be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113145c1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113145c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113145c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113145c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113145cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113145cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113145d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113145d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113145d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113145da mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113145dc:;
  /* 113145dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113145df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113145e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113145e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113145e6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113145e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113145eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113145ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113145f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113145f3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113145f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113145f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113145fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113145fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314601 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11314603 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11314606 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314609 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1131460b jmp 0x11314556 */
  goto L_11314556;
L_11314610:;
  /* 11314610 jmp 0x1131461b */
  goto L_1131461b;
L_11314612:;
  /* 11314612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314615 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314618 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1131461b:;
  /* 1131461b jmp 0x11314256 */
  goto L_11314256;
L_11314620:;
  /* 11314620 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11314624 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11314626 je 0x1131464c */
  if (C.zf) goto L_1131464c;
  /* 11314628 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1131462b push edx */
  push32((uint32_t)(EDX));
  /* 1131462c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131462f push eax */
  push32((uint32_t)(EAX));
  /* 11314630 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314633 push ecx */
  push32((uint32_t)(ECX));
  /* 11314634 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11314637 push edx */
  push32((uint32_t)(EDX));
  /* 11314638 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1131463b push eax */
  push32((uint32_t)(EAX));
  /* 1131463c call 0x11313a80 */
  push32(0x11314641u); f_11313a80();
  /* 11314641 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314644 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314647 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1131464a jmp 0x113146c7 */
  goto L_113146c7;
L_1131464c:;
  /* 1131464c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131464f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314651 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11314653 mov ecx, dword ptr [0x11330c98] */
  ECX = (r32((uint32_t)(0x11330c98)));
  /* 11314659 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1131465b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1131465f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11314665 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11314667 je 0x11314698 */
  if (C.zf) goto L_11314698;
  /* 11314669 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131466c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1131466e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314671 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11314673 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11314675 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314678 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1131467a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131467d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314680 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11314682 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314685 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314688 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1131468b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131468e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11314690 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11314693 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314696 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11314698:;
  /* 11314698 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131469b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1131469d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113146a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113146a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113146a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113146a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113146a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113146ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113146af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113146b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113146b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113146b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113146ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113146bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113146bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113146c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113146c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113146c7:;
  /* 113146c7 jmp 0x11314256 */
  goto L_11314256;
L_113146cc:;
  /* 113146cc mov esp, ebp */
  ESP = (EBP);
  /* 113146ce pop ebp */
  EBP = (pop32());
  /* 113146cf ret  */
  ESPCHK(0x11314250u, _esp0);
  ESP += 4; return;
}

/* FUN_10014770 @ 0x11314770 (650 bytes, 178 insns) */
void f_11314770(void) {
  FTRACE(0x11314770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11314770 push ebp */
  push32((uint32_t)(EBP));
  /* 11314771 mov ebp, esp */
  EBP = (ESP);
  /* 11314773 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11314779 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131477d jne 0x113148d9 */
  if (!C.zf) goto L_113148d9;
  /* 11314783 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314786 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1131478c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11314792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11314795 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1131479c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 113147a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113147a8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 113147ae push edx */
  push32((uint32_t)(EDX));
  /* 113147af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113147b2 push eax */
  push32((uint32_t)(EAX));
  /* 113147b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113147b6 push ecx */
  push32((uint32_t)(ECX));
  /* 113147b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113147ba push edx */
  push32((uint32_t)(EDX));
  /* 113147bb call 0x11315b90 */
  push32(0x113147c0u); f_11315b90();
  /* 113147c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113147c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113147c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113147ca jne 0x1131485f */
  if (!C.zf) goto L_1131485f;
  /* 113147d0 call dword ptr [0x113353e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e8))), 0x113147d6u);
  /* 113147d6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113147d9 je 0x113147e0 */
  if (C.zf) goto L_113147e0;
  /* 113147db jmp 0x113148bd */
  goto L_113148bd;
L_113147e0:;
  /* 113147e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113147e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113147e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113147e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113147e9 push eax */
  push32((uint32_t)(EAX));
  /* 113147ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113147ed push ecx */
  push32((uint32_t)(ECX));
  /* 113147ee call 0x11315b90 */
  push32(0x113147f3u); f_11315b90();
  /* 113147f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113147f6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 113147fc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314803 jne 0x1131480a */
  if (!C.zf) goto L_1131480a;
  /* 11314805 jmp 0x113148bd */
  goto L_113148bd;
L_1131480a:;
  /* 1131480a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1131480c push 0x1132ec8c */
  push32((uint32_t)(0x1132ec8cu));
  /* 11314811 push 2 */
  push32((uint32_t)(0x2u));
  /* 11314813 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11314819 push edx */
  push32((uint32_t)(EDX));
  /* 1131481a call 0x113065b0 */
  push32(0x1131481fu); f_113065b0();
  /* 1131481f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314822 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11314825 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314829 jne 0x11314830 */
  if (!C.zf) goto L_11314830;
  /* 1131482b jmp 0x113148bd */
  goto L_113148bd;
L_11314830:;
  /* 11314830 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11314837 push 0 */
  push32((uint32_t)(0x0u));
  /* 11314839 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1131483f push eax */
  push32((uint32_t)(EAX));
  /* 11314840 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11314843 push ecx */
  push32((uint32_t)(ECX));
  /* 11314844 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314847 push edx */
  push32((uint32_t)(EDX));
  /* 11314848 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1131484b push eax */
  push32((uint32_t)(EAX));
  /* 1131484c call 0x11315b90 */
  push32(0x11314851u); f_11315b90();
  /* 11314851 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314854 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11314857 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131485b jne 0x1131485f */
  if (!C.zf) goto L_1131485f;
  /* 1131485d jmp 0x113148bd */
  goto L_113148bd;
L_1131485f:;
  /* 1131485f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11314861 push 0x1132ec8c */
  push32((uint32_t)(0x1132ec8cu));
  /* 11314866 push 2 */
  push32((uint32_t)(0x2u));
  /* 11314868 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131486b push ecx */
  push32((uint32_t)(ECX));
  /* 1131486c call 0x113065b0 */
  push32(0x11314871u); f_113065b0();
  /* 11314871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314874 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1131487a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1131487c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11314882 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314885 jne 0x11314889 */
  if (!C.zf) goto L_11314889;
  /* 11314887 jmp 0x113148bd */
  goto L_113148bd;
L_11314889:;
  /* 11314889 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131488c push ecx */
  push32((uint32_t)(ECX));
  /* 1131488d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11314890 push edx */
  push32((uint32_t)(EDX));
  /* 11314891 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11314897 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11314899 push ecx */
  push32((uint32_t)(ECX));
  /* 1131489a call 0x11309dd0 */
  push32(0x1131489fu); f_11309dd0();
  /* 1131489f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113148a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113148a6 je 0x113148b6 */
  if (C.zf) goto L_113148b6;
  /* 113148a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113148aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113148ad push edx */
  push32((uint32_t)(EDX));
  /* 113148ae call 0x11307040 */
  push32(0x113148b3u); f_11307040();
  /* 113148b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113148b6:;
  /* 113148b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113148b8 jmp 0x113149f6 */
  goto L_113149f6;
L_113148bd:;
  /* 113148bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113148c1 je 0x113148d1 */
  if (C.zf) goto L_113148d1;
  /* 113148c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113148c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113148c8 push eax */
  push32((uint32_t)(EAX));
  /* 113148c9 call 0x11307040 */
  push32(0x113148ceu); f_11307040();
  /* 113148ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113148d1:;
  /* 113148d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113148d4 jmp 0x113149f6 */
  goto L_113149f6;
L_113148d9:;
  /* 113148d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113148dd jne 0x113149f3 */
  if (!C.zf) goto L_113149f3;
  /* 113148e3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 113148ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113148f0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 113148f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113148f8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 113148fe push edx */
  push32((uint32_t)(EDX));
  /* 113148ff push 0x11332a18 */
  push32((uint32_t)(0x11332a18u));
  /* 11314904 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314907 push eax */
  push32((uint32_t)(EAX));
  /* 11314908 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1131490b push ecx */
  push32((uint32_t)(ECX));
  /* 1131490c call 0x113159f0 */
  push32(0x11314911u); f_113159f0();
  /* 11314911 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11314916 jne 0x11314920 */
  if (!C.zf) goto L_11314920;
  /* 11314918 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1131491b jmp 0x113149f6 */
  goto L_113149f6;
L_11314920:;
  /* 11314920 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11314926 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11314929 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11314933 jmp 0x11314944 */
  goto L_11314944;
L_11314935:;
  /* 11314935 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1131493b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131493e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11314944:;
  /* 11314944 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131494b jge 0x113149ef */
  if ((C.sf==C.of)) goto L_113149ef;
  /* 11314951 cmp dword ptr [0x11330ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11330ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314958 jle 0x1131498b */
  if ((C.zf||C.sf!=C.of)) goto L_1131498b;
  /* 1131495a push 4 */
  push32((uint32_t)(0x4u));
  /* 1131495c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11314962 mov dl, byte ptr [ecx*2 + 0x11332a18] */
  DL = (r8((uint32_t)(ECX*2 + 0x11332a18)));
  /* 11314969 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1131496f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11314975 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1131497a push eax */
  push32((uint32_t)(EAX));
  /* 1131497b call 0x1130c5c0 */
  push32(0x11314980u); f_1130c5c0();
  /* 11314980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314983 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11314989 jmp 0x113149be */
  goto L_113149be;
L_1131498b:;
  /* 1131498b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11314991 mov dl, byte ptr [ecx*2 + 0x11332a18] */
  DL = (r8((uint32_t)(ECX*2 + 0x11332a18)));
  /* 11314998 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1131499e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 113149a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113149a9 mov ecx, dword ptr [0x11330c98] */
  ECX = (r32((uint32_t)(0x11330c98)));
  /* 113149af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113149b1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113149b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113149b8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_113149be:;
  /* 113149be cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113149c5 je 0x113149e8 */
  if (C.zf) goto L_113149e8;
  /* 113149c7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113149cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113149d0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113149d3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 113149da lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 113149de mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113149e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113149e6 jmp 0x113149ea */
  goto L_113149ea;
L_113149e8:;
  /* 113149e8 jmp 0x113149ef */
  goto L_113149ef;
L_113149ea:;
  /* 113149ea jmp 0x11314935 */
  goto L_11314935;
L_113149ef:;
  /* 113149ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113149f1 jmp 0x113149f6 */
  goto L_113149f6;
L_113149f3:;
  /* 113149f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113149f6:;
  /* 113149f6 mov esp, ebp */
  ESP = (EBP);
  /* 113149f8 pop ebp */
  EBP = (pop32());
  /* 113149f9 ret  */
  ESPCHK(0x11314770u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a00 @ 0x11314a00 (10 bytes, 5 insns) */
void f_11314a00(void) {
  FTRACE(0x11314a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11314a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11314a01 mov ebp, esp */
  EBP = (ESP);
  /* 11314a03 mov eax, dword ptr [0x11331d88] */
  EAX = (r32((uint32_t)(0x11331d88)));
  /* 11314a08 pop ebp */
  EBP = (pop32());
  /* 11314a09 ret  */
  ESPCHK(0x11314a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a10 @ 0x11314a10 (575 bytes, 196 insns) */
void f_11314a10(void) {
  FTRACE(0x11314a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11314a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11314a11 mov ebp, esp */
  EBP = (ESP);
  /* 11314a13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11314a15 push 0x1132ec98 */
  push32((uint32_t)(0x1132ec98u));
  /* 11314a1a push 0x1130f6b8 */
  push32((uint32_t)(0x1130f6b8u));
  /* 11314a1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11314a25 push eax */
  push32((uint32_t)(EAX));
  /* 11314a26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11314a2d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314a30 push ebx */
  push32((uint32_t)(EBX));
  /* 11314a31 push esi */
  push32((uint32_t)(ESI));
  /* 11314a32 push edi */
  push32((uint32_t)(EDI));
  /* 11314a33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11314a36 cmp dword ptr [0x11332a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314a3d jne 0x11314a8e */
  if (!C.zf) goto L_11314a8e;
  /* 11314a3f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11314a42 push eax */
  push32((uint32_t)(EAX));
  /* 11314a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11314a45 push 0x1132e3cc */
  push32((uint32_t)(0x1132e3ccu));
  /* 11314a4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11314a4c call dword ptr [0x11335324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335324))), 0x11314a52u);
  /* 11314a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11314a54 je 0x11314a62 */
  if (C.zf) goto L_11314a62;
  /* 11314a56 mov dword ptr [0x11332a24], 1 */
  w32((uint32_t)(0x11332a24), (0x1u));
  /* 11314a60 jmp 0x11314a8e */
  goto L_11314a8e;
L_11314a62:;
  /* 11314a62 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11314a65 push ecx */
  push32((uint32_t)(ECX));
  /* 11314a66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11314a68 push 0x1132e3c8 */
  push32((uint32_t)(0x1132e3c8u));
  /* 11314a6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11314a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11314a71 call dword ptr [0x11335334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335334))), 0x11314a77u);
  /* 11314a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11314a79 je 0x11314a87 */
  if (C.zf) goto L_11314a87;
  /* 11314a7b mov dword ptr [0x11332a24], 2 */
  w32((uint32_t)(0x11332a24), (0x2u));
  /* 11314a85 jmp 0x11314a8e */
  goto L_11314a8e;
L_11314a87:;
  /* 11314a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314a89 jmp 0x11314c69 */
  goto L_11314c69;
L_11314a8e:;
  /* 11314a8e cmp dword ptr [0x11332a24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11332a24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314a95 jne 0x11314ab2 */
  if (!C.zf) goto L_11314ab2;
  /* 11314a97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314a9a push edx */
  push32((uint32_t)(EDX));
  /* 11314a9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314a9e push eax */
  push32((uint32_t)(EAX));
  /* 11314a9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11314aa2 push ecx */
  push32((uint32_t)(ECX));
  /* 11314aa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314aa6 push edx */
  push32((uint32_t)(EDX));
  /* 11314aa7 call dword ptr [0x11335324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335324))), 0x11314aadu);
  /* 11314aad jmp 0x11314c69 */
  goto L_11314c69;
L_11314ab2:;
  /* 11314ab2 cmp dword ptr [0x11332a24], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11332a24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314ab9 jne 0x11314c67 */
  if (!C.zf) goto L_11314c67;
  /* 11314abf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314ac3 jne 0x11314acd */
  if (!C.zf) goto L_11314acd;
  /* 11314ac5 mov eax, dword ptr [0x11332998] */
  EAX = (r32((uint32_t)(0x11332998)));
  /* 11314aca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11314acd:;
  /* 11314acd push 0 */
  push32((uint32_t)(0x0u));
  /* 11314acf push 0 */
  push32((uint32_t)(0x0u));
  /* 11314ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11314ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11314ad5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314ad8 push ecx */
  push32((uint32_t)(ECX));
  /* 11314ad9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11314adc push edx */
  push32((uint32_t)(EDX));
  /* 11314add push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11314ae2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11314ae5 push eax */
  push32((uint32_t)(EAX));
  /* 11314ae6 call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x11314aecu);
  /* 11314aec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11314aef cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314af3 jne 0x11314afc */
  if (!C.zf) goto L_11314afc;
  /* 11314af5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314af7 jmp 0x11314c69 */
  goto L_11314c69;
L_11314afc:;
  /* 11314afc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11314b03 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11314b06 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314b09 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11314b0b call 0x11309750 */
  push32(0x11314b10u); f_11309750();
  /* 11314b10 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11314b13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11314b16 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11314b19 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11314b1c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11314b1f push edx */
  push32((uint32_t)(EDX));
  /* 11314b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11314b22 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11314b25 push eax */
  push32((uint32_t)(EAX));
  /* 11314b26 call 0x1130a320 */
  push32(0x11314b2bu); f_1130a320();
  /* 11314b2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314b2e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11314b35 jmp 0x11314b4e */
  goto L_11314b4e;
  /* 11314b37 mov eax, 1 */
  EAX = (0x1u);
  /* 11314b3c ret  */
  ESPCHK(0x11314a10u, _esp0);
  ESP += 4; return;
  /* 11314b3d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11314b40 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11314b47 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11314b4e:;
  /* 11314b4e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314b52 jne 0x11314b5b */
  if (!C.zf) goto L_11314b5b;
  /* 11314b54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314b56 jmp 0x11314c69 */
  goto L_11314c69;
L_11314b5b:;
  /* 11314b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11314b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11314b5f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11314b62 push ecx */
  push32((uint32_t)(ECX));
  /* 11314b63 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11314b66 push edx */
  push32((uint32_t)(EDX));
  /* 11314b67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314b6a push eax */
  push32((uint32_t)(EAX));
  /* 11314b6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11314b6e push ecx */
  push32((uint32_t)(ECX));
  /* 11314b6f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11314b74 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11314b77 push edx */
  push32((uint32_t)(EDX));
  /* 11314b78 call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x11314b7eu);
  /* 11314b7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11314b80 jne 0x11314b89 */
  if (!C.zf) goto L_11314b89;
  /* 11314b82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314b84 jmp 0x11314c69 */
  goto L_11314c69;
L_11314b89:;
  /* 11314b89 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11314b90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11314b93 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11314b97 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314b9a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11314b9c call 0x11309750 */
  push32(0x11314ba1u); f_11309750();
  /* 11314ba1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11314ba4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11314ba7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11314baa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11314bad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11314bb4 jmp 0x11314bcd */
  goto L_11314bcd;
  /* 11314bb6 mov eax, 1 */
  EAX = (0x1u);
  /* 11314bbb ret  */
  ESPCHK(0x11314a10u, _esp0);
  ESP += 4; return;
  /* 11314bbc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11314bbf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11314bc6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11314bcd:;
  /* 11314bcd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314bd1 jne 0x11314bda */
  if (!C.zf) goto L_11314bda;
  /* 11314bd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314bd5 jmp 0x11314c69 */
  goto L_11314c69;
L_11314bda:;
  /* 11314bda cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314bde jne 0x11314be9 */
  if (!C.zf) goto L_11314be9;
  /* 11314be0 mov edx, dword ptr [0x11332988] */
  EDX = (r32((uint32_t)(0x11332988)));
  /* 11314be6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11314be9:;
  /* 11314be9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314bec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11314bef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11314bf5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314bf8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11314bfb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11314c02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11314c05 push ecx */
  push32((uint32_t)(ECX));
  /* 11314c06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11314c09 push edx */
  push32((uint32_t)(EDX));
  /* 11314c0a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11314c0d push eax */
  push32((uint32_t)(EAX));
  /* 11314c0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314c11 push ecx */
  push32((uint32_t)(ECX));
  /* 11314c12 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11314c15 push edx */
  push32((uint32_t)(EDX));
  /* 11314c16 call dword ptr [0x11335334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335334))), 0x11314c1cu);
  /* 11314c1c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11314c1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314c22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11314c25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11314c27 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11314c2c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314c32 je 0x11314c48 */
  if (C.zf) goto L_11314c48;
  /* 11314c34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314c37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11314c3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11314c3c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11314c40 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314c46 je 0x11314c4c */
  if (C.zf) goto L_11314c4c;
L_11314c48:;
  /* 11314c48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314c4a jmp 0x11314c69 */
  goto L_11314c69;
L_11314c4c:;
  /* 11314c4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314c4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11314c51 push eax */
  push32((uint32_t)(EAX));
  /* 11314c52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11314c55 push ecx */
  push32((uint32_t)(ECX));
  /* 11314c56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11314c59 push edx */
  push32((uint32_t)(EDX));
  /* 11314c5a call 0x1130e4a0 */
  push32(0x11314c5fu); f_1130e4a0();
  /* 11314c5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314c62 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11314c65 jmp 0x11314c69 */
  goto L_11314c69;
L_11314c67:;
  /* 11314c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11314c69:;
  /* 11314c69 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11314c6c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11314c6f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11314c76 pop edi */
  EDI = (pop32());
  /* 11314c77 pop esi */
  ESI = (pop32());
  /* 11314c78 pop ebx */
  EBX = (pop32());
  /* 11314c79 mov esp, ebp */
  ESP = (EBP);
  /* 11314c7b pop ebp */
  EBP = (pop32());
  /* 11314c7c ret  */
  ESPCHK(0x11314a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c80 @ 0x11314c80 (208 bytes, 85 insns) */
void f_11314c80(void) {
  FTRACE(0x11314c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11314c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11314c81 mov ebp, esp */
  EBP = (ESP);
  /* 11314c83 push edi */
  push32((uint32_t)(EDI));
  /* 11314c84 push esi */
  push32((uint32_t)(ESI));
  /* 11314c85 push ebx */
  push32((uint32_t)(EBX));
  /* 11314c86 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11314c89 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11314c8c lea eax, [0x11332980] */
  EAX = ((uint32_t)(0x11332980));
  /* 11314c92 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314c96 jne 0x11314cd3 */
  if (!C.zf) goto L_11314cd3;
  /* 11314c98 mov al, 0xff */
  AL = (0xffu);
  /* 11314c9a mov edi, edi */
  EDI = (EDI);
L_11314c9c:;
  /* 11314c9c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11314c9e je 0x11314cce */
  if (C.zf) goto L_11314cce;
  /* 11314ca0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11314ca2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11314ca3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11314ca5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11314ca6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314ca8 je 0x11314c9c */
  if (C.zf) goto L_11314c9c;
  /* 11314caa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11314cac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314cae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11314cb0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11314cb3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11314cb5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11314cb7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11314cb9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11314cbb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314cbd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11314cbf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11314cc2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11314cc4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11314cc6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314cc8 je 0x11314c9c */
  if (C.zf) goto L_11314c9c;
  /* 11314cca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11314ccc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11314cce:;
  /* 11314cce movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11314cd1 jmp 0x11314d4b */
  goto L_11314d4b;
L_11314cd3:;
  /* 11314cd3 lock inc dword ptr [0x11332b14] */
  x86_unimpl("lock inc @ 0x11314cd3");
  /* 11314cda cmp dword ptr [0x11332b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314ce1 jg 0x11314ce7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11314ce7;
  /* 11314ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11314ce5 jmp 0x11314cfc */
  goto L_11314cfc;
L_11314ce7:;
  /* 11314ce7 lock dec dword ptr [0x11332b14] */
  x86_unimpl("lock dec @ 0x11314ce7");
  /* 11314cee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11314cf0 call 0x11309fb0 */
  push32(0x11314cf5u); f_11309fb0();
  /* 11314cf5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11314cfc:;
  /* 11314cfc mov eax, 0xff */
  EAX = (0xffu);
  /* 11314d01 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11314d03 nop  */
  /* nop */
L_11314d04:;
  /* 11314d04 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11314d06 je 0x11314d2f */
  if (C.zf) goto L_11314d2f;
  /* 11314d08 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11314d0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11314d0b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11314d0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11314d0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314d10 je 0x11314d04 */
  if (C.zf) goto L_11314d04;
  /* 11314d12 push eax */
  push32((uint32_t)(EAX));
  /* 11314d13 push ebx */
  push32((uint32_t)(EBX));
  /* 11314d14 call 0x11315df0 */
  push32(0x11314d19u); f_11315df0();
  /* 11314d19 mov ebx, eax */
  EBX = (EAX);
  /* 11314d1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314d1e call 0x11315df0 */
  push32(0x11314d23u); f_11315df0();
  /* 11314d23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314d26 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314d28 je 0x11314d04 */
  if (C.zf) goto L_11314d04;
  /* 11314d2a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11314d2c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11314d2f:;
  /* 11314d2f mov ebx, eax */
  EBX = (EAX);
  /* 11314d31 pop eax */
  EAX = (pop32());
  /* 11314d32 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314d34 jne 0x11314d3f */
  if (!C.zf) goto L_11314d3f;
  /* 11314d36 lock dec dword ptr [0x11332b14] */
  x86_unimpl("lock dec @ 0x11314d36");
  /* 11314d3d jmp 0x11314d49 */
  goto L_11314d49;
L_11314d3f:;
  /* 11314d3f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11314d41 call 0x1130a050 */
  push32(0x11314d46u); f_1130a050();
  /* 11314d46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11314d49:;
  /* 11314d49 mov eax, ebx */
  EAX = (EBX);
L_11314d4b:;
  /* 11314d4b pop ebx */
  EBX = (pop32());
  /* 11314d4c pop esi */
  ESI = (pop32());
  /* 11314d4d pop edi */
  EDI = (pop32());
  /* 11314d4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11314d4f ret  */
  ESPCHK(0x11314c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d50 @ 0x11314d50 (257 bytes, 103 insns) */
void f_11314d50(void) {
  FTRACE(0x11314d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11314d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11314d51 mov ebp, esp */
  EBP = (ESP);
  /* 11314d53 push edi */
  push32((uint32_t)(EDI));
  /* 11314d54 push esi */
  push32((uint32_t)(ESI));
  /* 11314d55 push ebx */
  push32((uint32_t)(EBX));
  /* 11314d56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11314d59 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11314d5b je 0x11314e4a */
  if (C.zf) goto L_11314e4a;
  /* 11314d61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11314d64 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11314d67 lea eax, [0x11332980] */
  EAX = ((uint32_t)(0x11332980));
  /* 11314d6d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314d71 jne 0x11314dc1 */
  if (!C.zf) goto L_11314dc1;
  /* 11314d73 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11314d75 mov bl, 0x5a */
  BL = (0x5au);
  /* 11314d77 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11314d79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11314d7c:;
  /* 11314d7c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11314d7e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11314d80 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11314d82 je 0x11314da5 */
  if (C.zf) goto L_11314da5;
  /* 11314d84 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11314d86 je 0x11314da5 */
  if (C.zf) goto L_11314da5;
  /* 11314d88 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11314d89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11314d8a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314d8c jb 0x11314d94 */
  if (C.cf) goto L_11314d94;
  /* 11314d8e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314d90 ja 0x11314d94 */
  if ((!C.cf&&!C.zf)) goto L_11314d94;
  /* 11314d92 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11314d94:;
  /* 11314d94 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314d96 jb 0x11314d9e */
  if (C.cf) goto L_11314d9e;
  /* 11314d98 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314d9a ja 0x11314d9e */
  if ((!C.cf&&!C.zf)) goto L_11314d9e;
  /* 11314d9c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11314d9e:;
  /* 11314d9e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314da0 jne 0x11314daf */
  if (!C.zf) goto L_11314daf;
  /* 11314da2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11314da3 jne 0x11314d7c */
  if (!C.zf) goto L_11314d7c;
L_11314da5:;
  /* 11314da5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11314da7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11314da9 je 0x11314e4a */
  if (C.zf) goto L_11314e4a;
L_11314daf:;
  /* 11314daf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11314db4 jb 0x11314e4a */
  if (C.cf) goto L_11314e4a;
  /* 11314dba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11314dbc jmp 0x11314e4a */
  goto L_11314e4a;
L_11314dc1:;
  /* 11314dc1 lock inc dword ptr [0x11332b14] */
  x86_unimpl("lock inc @ 0x11314dc1");
  /* 11314dc8 cmp dword ptr [0x11332b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314dcf jg 0x11314dd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11314dd5;
  /* 11314dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11314dd3 jmp 0x11314dee */
  goto L_11314dee;
L_11314dd5:;
  /* 11314dd5 lock dec dword ptr [0x11332b14] */
  x86_unimpl("lock dec @ 0x11314dd5");
  /* 11314ddc mov ebx, ecx */
  EBX = (ECX);
  /* 11314dde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11314de0 call 0x11309fb0 */
  push32(0x11314de5u); f_11309fb0();
  /* 11314de5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11314dec mov ecx, ebx */
  ECX = (EBX);
L_11314dee:;
  /* 11314dee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314df0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11314df2 mov edi, edi */
  EDI = (EDI);
L_11314df4:;
  /* 11314df4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11314df6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314df8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11314dfa je 0x11314e1f */
  if (C.zf) goto L_11314e1f;
  /* 11314dfc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11314dfe je 0x11314e1f */
  if (C.zf) goto L_11314e1f;
  /* 11314e00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11314e01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11314e02 push ecx */
  push32((uint32_t)(ECX));
  /* 11314e03 push eax */
  push32((uint32_t)(EAX));
  /* 11314e04 push ebx */
  push32((uint32_t)(EBX));
  /* 11314e05 call 0x11315df0 */
  push32(0x11314e0au); f_11315df0();
  /* 11314e0a mov ebx, eax */
  EBX = (EAX);
  /* 11314e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314e0f call 0x11315df0 */
  push32(0x11314e14u); f_11315df0();
  /* 11314e14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314e17 pop ecx */
  ECX = (pop32());
  /* 11314e18 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314e1a jne 0x11314e25 */
  if (!C.zf) goto L_11314e25;
  /* 11314e1c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11314e1d jne 0x11314df4 */
  if (!C.zf) goto L_11314df4;
L_11314e1f:;
  /* 11314e1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11314e21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314e23 je 0x11314e2e */
  if (C.zf) goto L_11314e2e;
L_11314e25:;
  /* 11314e25 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11314e2a jb 0x11314e2e */
  if (C.cf) goto L_11314e2e;
  /* 11314e2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11314e2e:;
  /* 11314e2e pop eax */
  EAX = (pop32());
  /* 11314e2f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314e31 jne 0x11314e3c */
  if (!C.zf) goto L_11314e3c;
  /* 11314e33 lock dec dword ptr [0x11332b14] */
  x86_unimpl("lock dec @ 0x11314e33");
  /* 11314e3a jmp 0x11314e4a */
  goto L_11314e4a;
L_11314e3c:;
  /* 11314e3c mov ebx, ecx */
  EBX = (ECX);
  /* 11314e3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11314e40 call 0x1130a050 */
  push32(0x11314e45u); f_1130a050();
  /* 11314e45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314e48 mov ecx, ebx */
  ECX = (EBX);
L_11314e4a:;
  /* 11314e4a mov eax, ecx */
  EAX = (ECX);
  /* 11314e4c pop ebx */
  EBX = (pop32());
  /* 11314e4d pop esi */
  ESI = (pop32());
  /* 11314e4e pop edi */
  EDI = (pop32());
  /* 11314e4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11314e50 ret  */
  ESPCHK(0x11314d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e60 @ 0x11314e60 (255 bytes, 88 insns) */
void f_11314e60(void) {
  FTRACE(0x11314e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11314e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11314e61 mov ebp, esp */
  EBP = (ESP);
  /* 11314e63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11314e66:;
  /* 11314e66 cmp dword ptr [0x11330ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11330ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314e6d jle 0x11314e86 */
  if ((C.zf||C.sf!=C.of)) goto L_11314e86;
  /* 11314e6f push 8 */
  push32((uint32_t)(0x8u));
  /* 11314e71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314e74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11314e76 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11314e78 push ecx */
  push32((uint32_t)(ECX));
  /* 11314e79 call 0x1130c5c0 */
  push32(0x11314e7eu); f_1130c5c0();
  /* 11314e7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314e81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11314e84 jmp 0x11314e9f */
  goto L_11314e9f;
L_11314e86:;
  /* 11314e86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314e89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314e8b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11314e8d mov ecx, dword ptr [0x11330c98] */
  ECX = (r32((uint32_t)(0x11330c98)));
  /* 11314e93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11314e95 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11314e99 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11314e9c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11314e9f:;
  /* 11314e9f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314ea3 je 0x11314eb0 */
  if (C.zf) goto L_11314eb0;
  /* 11314ea5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314ea8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314eab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11314eae jmp 0x11314e66 */
  goto L_11314e66;
L_11314eb0:;
  /* 11314eb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314eb3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11314eb5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11314eb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11314eba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314ebd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314ec0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11314ec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314ec6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11314ec9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314ecd je 0x11314ed5 */
  if (C.zf) goto L_11314ed5;
  /* 11314ecf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314ed3 jne 0x11314ee8 */
  if (!C.zf) goto L_11314ee8;
L_11314ed5:;
  /* 11314ed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314ed8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314eda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11314edc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11314edf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314ee2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314ee5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11314ee8:;
  /* 11314ee8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11314eef:;
  /* 11314eef cmp dword ptr [0x11330ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11330ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314ef6 jle 0x11314f0b */
  if ((C.zf||C.sf!=C.of)) goto L_11314f0b;
  /* 11314ef8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11314efa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314efd push edx */
  push32((uint32_t)(EDX));
  /* 11314efe call 0x1130c5c0 */
  push32(0x11314f03u); f_1130c5c0();
  /* 11314f03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314f06 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11314f09 jmp 0x11314f20 */
  goto L_11314f20;
L_11314f0b:;
  /* 11314f0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314f0e mov ecx, dword ptr [0x11330c98] */
  ECX = (r32((uint32_t)(0x11330c98)));
  /* 11314f14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11314f16 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11314f1a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11314f1d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11314f20:;
  /* 11314f20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314f24 je 0x11314f4b */
  if (C.zf) goto L_11314f4b;
  /* 11314f26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11314f29 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11314f2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314f2f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11314f33 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11314f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314f39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11314f3b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11314f3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11314f40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314f43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314f46 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11314f49 jmp 0x11314eef */
  goto L_11314eef;
L_11314f4b:;
  /* 11314f4b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314f4f jne 0x11314f58 */
  if (!C.zf) goto L_11314f58;
  /* 11314f51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11314f54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11314f56 jmp 0x11314f5b */
  goto L_11314f5b;
L_11314f58:;
  /* 11314f58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11314f5b:;
  /* 11314f5b mov esp, ebp */
  ESP = (EBP);
  /* 11314f5d pop ebp */
  EBP = (pop32());
  /* 11314f5e ret  */
  ESPCHK(0x11314e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f60 @ 0x11314f60 (17 bytes, 8 insns) */
void f_11314f60(void) {
  FTRACE(0x11314f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11314f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11314f61 mov ebp, esp */
  EBP = (ESP);
  /* 11314f63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314f66 push eax */
  push32((uint32_t)(EAX));
  /* 11314f67 call 0x11314e60 */
  push32(0x11314f6cu); f_11314e60();
  /* 11314f6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314f6f pop ebp */
  EBP = (pop32());
  /* 11314f70 ret  */
  ESPCHK(0x11314f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f80 @ 0x11314f80 (297 bytes, 106 insns) */
void f_11314f80(void) {
  FTRACE(0x11314f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11314f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11314f81 mov ebp, esp */
  EBP = (ESP);
  /* 11314f83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11314f86 push esi */
  push32((uint32_t)(ESI));
L_11314f87:;
  /* 11314f87 cmp dword ptr [0x11330ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11330ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314f8e jle 0x11314fa7 */
  if ((C.zf||C.sf!=C.of)) goto L_11314fa7;
  /* 11314f90 push 8 */
  push32((uint32_t)(0x8u));
  /* 11314f92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314f95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11314f97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11314f99 push ecx */
  push32((uint32_t)(ECX));
  /* 11314f9a call 0x1130c5c0 */
  push32(0x11314f9fu); f_1130c5c0();
  /* 11314f9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11314fa2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11314fa5 jmp 0x11314fc0 */
  goto L_11314fc0;
L_11314fa7:;
  /* 11314fa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314faa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314fac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11314fae mov ecx, dword ptr [0x11330c98] */
  ECX = (r32((uint32_t)(0x11330c98)));
  /* 11314fb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11314fb6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11314fba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11314fbd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11314fc0:;
  /* 11314fc0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314fc4 je 0x11314fd1 */
  if (C.zf) goto L_11314fd1;
  /* 11314fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314fc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314fcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11314fcf jmp 0x11314f87 */
  goto L_11314f87;
L_11314fd1:;
  /* 11314fd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314fd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11314fd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11314fd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11314fdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314fde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11314fe1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11314fe4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11314fe7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11314fea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314fee je 0x11314ff6 */
  if (C.zf) goto L_11314ff6;
  /* 11314ff0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11314ff4 jne 0x11315009 */
  if (!C.zf) goto L_11315009;
L_11314ff6:;
  /* 11314ff6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11314ff9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11314ffb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11314ffd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11315000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315003 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315006 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11315009:;
  /* 11315009 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11315010 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11315017:;
  /* 11315017 cmp dword ptr [0x11330ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11330ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131501e jle 0x11315033 */
  if ((C.zf||C.sf!=C.of)) goto L_11315033;
  /* 11315020 push 4 */
  push32((uint32_t)(0x4u));
  /* 11315022 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11315025 push edx */
  push32((uint32_t)(EDX));
  /* 11315026 call 0x1130c5c0 */
  push32(0x1131502bu); f_1130c5c0();
  /* 1131502b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131502e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11315031 jmp 0x11315048 */
  goto L_11315048;
L_11315033:;
  /* 11315033 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11315036 mov ecx, dword ptr [0x11330c98] */
  ECX = (r32((uint32_t)(0x11330c98)));
  /* 1131503c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1131503e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11315042 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11315045 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11315048:;
  /* 11315048 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131504c je 0x11315089 */
  if (C.zf) goto L_11315089;
  /* 1131504e push 0 */
  push32((uint32_t)(0x0u));
  /* 11315050 push 0xa */
  push32((uint32_t)(0xau));
  /* 11315052 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11315055 push eax */
  push32((uint32_t)(EAX));
  /* 11315056 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315059 push ecx */
  push32((uint32_t)(ECX));
  /* 1131505a call 0x11315f20 */
  push32(0x1131505fu); f_11315f20();
  /* 1131505f mov ecx, eax */
  ECX = (EAX);
  /* 11315061 mov esi, edx */
  ESI = (EDX);
  /* 11315063 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11315066 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11315069 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1131506a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131506c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1131506e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11315071 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11315074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315079 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1131507b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1131507e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315081 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315084 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11315087 jmp 0x11315017 */
  goto L_11315017;
L_11315089:;
  /* 11315089 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131508d jne 0x1131509e */
  if (!C.zf) goto L_1131509e;
  /* 1131508f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315092 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11315094 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11315097 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131509a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1131509c jmp 0x113150a4 */
  goto L_113150a4;
L_1131509e:;
  /* 1131509e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113150a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_113150a4:;
  /* 113150a4 pop esi */
  ESI = (pop32());
  /* 113150a5 mov esp, ebp */
  ESP = (EBP);
  /* 113150a7 pop ebp */
  EBP = (pop32());
  /* 113150a8 ret  */
  ESPCHK(0x11314f80u, _esp0);
  ESP += 4; return;
}

/* FUN_100150b0 @ 0x113150b0 (61 bytes, 18 insns) */
void f_113150b0(void) {
  FTRACE(0x113150b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113150b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113150b1 mov ebp, esp */
  EBP = (ESP);
  /* 113150b3 cmp dword ptr [0x11332ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113150ba jne 0x113150eb */
  if (!C.zf) goto L_113150eb;
  /* 113150bc push 0xb */
  push32((uint32_t)(0xbu));
  /* 113150be call 0x11309fb0 */
  push32(0x113150c3u); f_11309fb0();
  /* 113150c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113150c6 cmp dword ptr [0x11332ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113150cd jne 0x113150e1 */
  if (!C.zf) goto L_113150e1;
  /* 113150cf call 0x11315110 */
  push32(0x113150d4u); f_11315110();
  /* 113150d4 mov eax, dword ptr [0x11332ae0] */
  EAX = (r32((uint32_t)(0x11332ae0)));
  /* 113150d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113150dc mov dword ptr [0x11332ae0], eax */
  w32((uint32_t)(0x11332ae0), (EAX));
L_113150e1:;
  /* 113150e1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 113150e3 call 0x1130a050 */
  push32(0x113150e8u); f_1130a050();
  /* 113150e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113150eb:;
  /* 113150eb pop ebp */
  EBP = (pop32());
  /* 113150ec ret  */
  ESPCHK(0x113150b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100150f0 @ 0x113150f0 (30 bytes, 11 insns) */
void f_113150f0(void) {
  FTRACE(0x113150f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113150f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113150f1 mov ebp, esp */
  EBP = (ESP);
  /* 113150f3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 113150f5 call 0x11309fb0 */
  push32(0x113150fau); f_11309fb0();
  /* 113150fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113150fd call 0x11315110 */
  push32(0x11315102u); f_11315110();
  /* 11315102 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11315104 call 0x1130a050 */
  push32(0x11315109u); f_1130a050();
  /* 11315109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131510c pop ebp */
  EBP = (pop32());
  /* 1131510d ret  */
  ESPCHK(0x113150f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015110 @ 0x11315110 (939 bytes, 266 insns) */
void f_11315110(void) {
  FTRACE(0x11315110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11315110 push ebp */
  push32((uint32_t)(EBP));
  /* 11315111 mov ebp, esp */
  EBP = (ESP);
  /* 11315113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11315116 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1131511d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1131511f call 0x11309fb0 */
  push32(0x11315124u); f_11309fb0();
  /* 11315124 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315127 mov dword ptr [0x11332a28], 0 */
  w32((uint32_t)(0x11332a28), (0x0u));
  /* 11315131 mov dword ptr [0x11331e38], 0xffffffff */
  w32((uint32_t)(0x11331e38), (0xffffffffu));
  /* 1131513b mov eax, dword ptr [0x11331e38] */
  EAX = (r32((uint32_t)(0x11331e38)));
  /* 11315140 mov dword ptr [0x11331e28], eax */
  w32((uint32_t)(0x11331e28), (EAX));
  /* 11315145 push 0x1132ecf8 */
  push32((uint32_t)(0x1132ecf8u));
  /* 1131514a call 0x11315f90 */
  push32(0x1131514fu); f_11315f90();
  /* 1131514f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315152 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11315155 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315159 jne 0x11315293 */
  if (!C.zf) goto L_11315293;
  /* 1131515f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11315161 call 0x1130a050 */
  push32(0x11315166u); f_1130a050();
  /* 11315166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315169 push 0x11332a30 */
  push32((uint32_t)(0x11332a30u));
  /* 1131516e call dword ptr [0x113352e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352e8))), 0x11315174u);
  /* 11315174 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315177 je 0x1131528e */
  if (C.zf) goto L_1131528e;
  /* 1131517d mov dword ptr [0x11332a28], 1 */
  w32((uint32_t)(0x11332a28), (0x1u));
  /* 11315187 mov ecx, dword ptr [0x11332a30] */
  ECX = (r32((uint32_t)(0x11332a30)));
  /* 1131518d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11315190 mov dword ptr [0x11331d90], ecx */
  w32((uint32_t)(0x11331d90), (ECX));
  /* 11315196 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11315198 mov dx, word ptr [0x11332a76] */
  DX = (r16((uint32_t)(0x11332a76)));
  /* 1131519f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113151a1 je 0x113151b9 */
  if (C.zf) goto L_113151b9;
  /* 113151a3 mov eax, dword ptr [0x11332a84] */
  EAX = (r32((uint32_t)(0x11332a84)));
  /* 113151a8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113151ab mov ecx, dword ptr [0x11331d90] */
  ECX = (r32((uint32_t)(0x11331d90)));
  /* 113151b1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113151b3 mov dword ptr [0x11331d90], ecx */
  w32((uint32_t)(0x11331d90), (ECX));
L_113151b9:;
  /* 113151b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113151bb mov dx, word ptr [0x11332aca] */
  DX = (r16((uint32_t)(0x11332aca)));
  /* 113151c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113151c4 je 0x113151ee */
  if (C.zf) goto L_113151ee;
  /* 113151c6 cmp dword ptr [0x11332ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113151cd je 0x113151ee */
  if (C.zf) goto L_113151ee;
  /* 113151cf mov dword ptr [0x11331d94], 1 */
  w32((uint32_t)(0x11331d94), (0x1u));
  /* 113151d9 mov eax, dword ptr [0x11332ad8] */
  EAX = (r32((uint32_t)(0x11332ad8)));
  /* 113151de sub eax, dword ptr [0x11332a84] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11332a84))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113151e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113151e7 mov dword ptr [0x11331d98], eax */
  w32((uint32_t)(0x11331d98), (EAX));
  /* 113151ec jmp 0x11315202 */
  goto L_11315202;
L_113151ee:;
  /* 113151ee mov dword ptr [0x11331d94], 0 */
  w32((uint32_t)(0x11331d94), (0x0u));
  /* 113151f8 mov dword ptr [0x11331d98], 0 */
  w32((uint32_t)(0x11331d98), (0x0u));
L_11315202:;
  /* 11315202 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11315205 push ecx */
  push32((uint32_t)(ECX));
  /* 11315206 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315208 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1131520a mov edx, dword ptr [0x11331e1c] */
  EDX = (r32((uint32_t)(0x11331e1c)));
  /* 11315210 push edx */
  push32((uint32_t)(EDX));
  /* 11315211 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11315213 push 0x11332a34 */
  push32((uint32_t)(0x11332a34u));
  /* 11315218 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1131521d mov eax, dword ptr [0x11332998] */
  EAX = (r32((uint32_t)(0x11332998)));
  /* 11315222 push eax */
  push32((uint32_t)(EAX));
  /* 11315223 call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x11315229u);
  /* 11315229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131522b je 0x1131523f */
  if (C.zf) goto L_1131523f;
  /* 1131522d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315231 jne 0x1131523f */
  if (!C.zf) goto L_1131523f;
  /* 11315233 mov ecx, dword ptr [0x11331e1c] */
  ECX = (r32((uint32_t)(0x11331e1c)));
  /* 11315239 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1131523d jmp 0x11315248 */
  goto L_11315248;
L_1131523f:;
  /* 1131523f mov edx, dword ptr [0x11331e1c] */
  EDX = (r32((uint32_t)(0x11331e1c)));
  /* 11315245 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11315248:;
  /* 11315248 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1131524b push eax */
  push32((uint32_t)(EAX));
  /* 1131524c push 0 */
  push32((uint32_t)(0x0u));
  /* 1131524e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11315250 mov ecx, dword ptr [0x11331e20] */
  ECX = (r32((uint32_t)(0x11331e20)));
  /* 11315256 push ecx */
  push32((uint32_t)(ECX));
  /* 11315257 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11315259 push 0x11332a88 */
  push32((uint32_t)(0x11332a88u));
  /* 1131525e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11315263 mov edx, dword ptr [0x11332998] */
  EDX = (r32((uint32_t)(0x11332998)));
  /* 11315269 push edx */
  push32((uint32_t)(EDX));
  /* 1131526a call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x11315270u);
  /* 11315270 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11315272 je 0x11315285 */
  if (C.zf) goto L_11315285;
  /* 11315274 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315278 jne 0x11315285 */
  if (!C.zf) goto L_11315285;
  /* 1131527a mov eax, dword ptr [0x11331e20] */
  EAX = (r32((uint32_t)(0x11331e20)));
  /* 1131527f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11315283 jmp 0x1131528e */
  goto L_1131528e;
L_11315285:;
  /* 11315285 mov ecx, dword ptr [0x11331e20] */
  ECX = (r32((uint32_t)(0x11331e20)));
  /* 1131528b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1131528e:;
  /* 1131528e jmp 0x113154b7 */
  goto L_113154b7;
L_11315293:;
  /* 11315293 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315296 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11315299 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131529b je 0x113152bd */
  if (C.zf) goto L_113152bd;
  /* 1131529d cmp dword ptr [0x11332adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113152a4 je 0x113152cc */
  if (C.zf) goto L_113152cc;
  /* 113152a6 mov ecx, dword ptr [0x11332adc] */
  ECX = (r32((uint32_t)(0x11332adc)));
  /* 113152ac push ecx */
  push32((uint32_t)(ECX));
  /* 113152ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113152b0 push edx */
  push32((uint32_t)(EDX));
  /* 113152b1 call 0x11312240 */
  push32(0x113152b6u); f_11312240();
  /* 113152b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113152b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113152bb jne 0x113152cc */
  if (!C.zf) goto L_113152cc;
L_113152bd:;
  /* 113152bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 113152bf call 0x1130a050 */
  push32(0x113152c4u); f_1130a050();
  /* 113152c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113152c7 jmp 0x113154b7 */
  goto L_113154b7;
L_113152cc:;
  /* 113152cc push 2 */
  push32((uint32_t)(0x2u));
  /* 113152ce mov eax, dword ptr [0x11332adc] */
  EAX = (r32((uint32_t)(0x11332adc)));
  /* 113152d3 push eax */
  push32((uint32_t)(EAX));
  /* 113152d4 call 0x11307040 */
  push32(0x113152d9u); f_11307040();
  /* 113152d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113152dc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 113152e1 push 0x1132ecf0 */
  push32((uint32_t)(0x1132ecf0u));
  /* 113152e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113152e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113152eb push ecx */
  push32((uint32_t)(ECX));
  /* 113152ec call 0x113093e0 */
  push32(0x113152f1u); f_113093e0();
  /* 113152f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113152f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113152f7 push eax */
  push32((uint32_t)(EAX));
  /* 113152f8 call 0x113065b0 */
  push32(0x113152fdu); f_113065b0();
  /* 113152fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315300 mov dword ptr [0x11332adc], eax */
  w32((uint32_t)(0x11332adc), (EAX));
  /* 11315305 cmp dword ptr [0x11332adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131530c jne 0x1131531d */
  if (!C.zf) goto L_1131531d;
  /* 1131530e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11315310 call 0x1130a050 */
  push32(0x11315315u); f_1130a050();
  /* 11315315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315318 jmp 0x113154b7 */
  goto L_113154b7;
L_1131531d:;
  /* 1131531d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315320 push edx */
  push32((uint32_t)(EDX));
  /* 11315321 mov eax, dword ptr [0x11332adc] */
  EAX = (r32((uint32_t)(0x11332adc)));
  /* 11315326 push eax */
  push32((uint32_t)(EAX));
  /* 11315327 call 0x11309560 */
  push32(0x1131532cu); f_11309560();
  /* 1131532c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131532f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11315331 call 0x1130a050 */
  push32(0x11315336u); f_1130a050();
  /* 11315336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315339 push 3 */
  push32((uint32_t)(0x3u));
  /* 1131533b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131533e push ecx */
  push32((uint32_t)(ECX));
  /* 1131533f mov edx, dword ptr [0x11331e1c] */
  EDX = (r32((uint32_t)(0x11331e1c)));
  /* 11315345 push edx */
  push32((uint32_t)(EDX));
  /* 11315346 call 0x11309dd0 */
  push32(0x1131534bu); f_11309dd0();
  /* 1131534b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131534e mov eax, dword ptr [0x11331e1c] */
  EAX = (r32((uint32_t)(0x11331e1c)));
  /* 11315353 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11315357 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131535a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131535d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11315360 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315363 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11315366 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315369 jne 0x1131537d */
  if (!C.zf) goto L_1131537d;
  /* 1131536b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131536e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315371 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11315374 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315377 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131537a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1131537d:;
  /* 1131537d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315380 push eax */
  push32((uint32_t)(EAX));
  /* 11315381 call 0x11314e60 */
  push32(0x11315386u); f_11314e60();
  /* 11315386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315389 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1131538f mov dword ptr [0x11331d90], eax */
  w32((uint32_t)(0x11331d90), (EAX));
L_11315394:;
  /* 11315394 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315397 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1131539a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131539d je 0x113153b5 */
  if (C.zf) goto L_113153b5;
  /* 1131539f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113153a2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113153a5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113153a8 jl 0x113153c0 */
  if ((C.sf!=C.of)) goto L_113153c0;
  /* 113153aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113153ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113153b0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113153b3 jg 0x113153c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_113153c0;
L_113153b5:;
  /* 113153b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113153b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113153bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113153be jmp 0x11315394 */
  goto L_11315394;
L_113153c0:;
  /* 113153c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113153c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113153c6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113153c9 jne 0x11315465 */
  if (!C.zf) goto L_11315465;
  /* 113153cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113153d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113153d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113153d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113153db push edx */
  push32((uint32_t)(EDX));
  /* 113153dc call 0x11314e60 */
  push32(0x113153e1u); f_11314e60();
  /* 113153e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113153e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113153e7 mov ecx, dword ptr [0x11331d90] */
  ECX = (r32((uint32_t)(0x11331d90)));
  /* 113153ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113153ef mov dword ptr [0x11331d90], ecx */
  w32((uint32_t)(0x11331d90), (ECX));
L_113153f5:;
  /* 113153f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113153f8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113153fb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113153fe jl 0x11315416 */
  if ((C.sf!=C.of)) goto L_11315416;
  /* 11315400 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315403 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11315406 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315409 jg 0x11315416 */
  if ((!C.zf&&C.sf==C.of)) goto L_11315416;
  /* 1131540b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131540e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315411 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11315414 jmp 0x113153f5 */
  goto L_113153f5;
L_11315416:;
  /* 11315416 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315419 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1131541c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131541f jne 0x11315465 */
  if (!C.zf) goto L_11315465;
  /* 11315421 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315424 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315427 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1131542a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131542d push ecx */
  push32((uint32_t)(ECX));
  /* 1131542e call 0x11314e60 */
  push32(0x11315433u); f_11314e60();
  /* 11315433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315436 mov edx, dword ptr [0x11331d90] */
  EDX = (r32((uint32_t)(0x11331d90)));
  /* 1131543c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131543e mov dword ptr [0x11331d90], edx */
  w32((uint32_t)(0x11331d90), (EDX));
L_11315444:;
  /* 11315444 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315447 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1131544a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131544d jl 0x11315465 */
  if ((C.sf!=C.of)) goto L_11315465;
  /* 1131544f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315452 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11315455 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315458 jg 0x11315465 */
  if ((!C.zf&&C.sf==C.of)) goto L_11315465;
  /* 1131545a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131545d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315460 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11315463 jmp 0x11315444 */
  goto L_11315444;
L_11315465:;
  /* 11315465 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315469 je 0x11315479 */
  if (C.zf) goto L_11315479;
  /* 1131546b mov edx, dword ptr [0x11331d90] */
  EDX = (r32((uint32_t)(0x11331d90)));
  /* 11315471 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11315473 mov dword ptr [0x11331d90], edx */
  w32((uint32_t)(0x11331d90), (EDX));
L_11315479:;
  /* 11315479 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131547c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1131547f mov dword ptr [0x11331d94], ecx */
  w32((uint32_t)(0x11331d94), (ECX));
  /* 11315485 cmp dword ptr [0x11331d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11331d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131548c je 0x113154ae */
  if (C.zf) goto L_113154ae;
  /* 1131548e push 3 */
  push32((uint32_t)(0x3u));
  /* 11315490 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315493 push edx */
  push32((uint32_t)(EDX));
  /* 11315494 mov eax, dword ptr [0x11331e20] */
  EAX = (r32((uint32_t)(0x11331e20)));
  /* 11315499 push eax */
  push32((uint32_t)(EAX));
  /* 1131549a call 0x11309dd0 */
  push32(0x1131549fu); f_11309dd0();
  /* 1131549f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113154a2 mov ecx, dword ptr [0x11331e20] */
  ECX = (r32((uint32_t)(0x11331e20)));
  /* 113154a8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 113154ac jmp 0x113154b7 */
  goto L_113154b7;
L_113154ae:;
  /* 113154ae mov edx, dword ptr [0x11331e20] */
  EDX = (r32((uint32_t)(0x11331e20)));
  /* 113154b4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_113154b7:;
  /* 113154b7 mov esp, ebp */
  ESP = (EBP);
  /* 113154b9 pop ebp */
  EBP = (pop32());
  /* 113154ba ret  */
  ESPCHK(0x11315110u, _esp0);
  ESP += 4; return;
}

/* FUN_100154c0 @ 0x113154c0 (46 bytes, 18 insns) */
void f_113154c0(void) {
  FTRACE(0x113154c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113154c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113154c1 mov ebp, esp */
  EBP = (ESP);
  /* 113154c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113154c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 113154c6 call 0x11309fb0 */
  push32(0x113154cbu); f_11309fb0();
  /* 113154cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113154ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113154d1 push eax */
  push32((uint32_t)(EAX));
  /* 113154d2 call 0x113154f0 */
  push32(0x113154d7u); f_113154f0();
  /* 113154d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113154da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113154dd push 0xb */
  push32((uint32_t)(0xbu));
  /* 113154df call 0x1130a050 */
  push32(0x113154e4u); f_1130a050();
  /* 113154e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113154e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113154ea mov esp, ebp */
  ESP = (EBP);
  /* 113154ec pop ebp */
  EBP = (pop32());
  /* 113154ed ret  */
  ESPCHK(0x113154c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100154f0 @ 0x113154f0 (762 bytes, 246 insns) */
void f_113154f0(void) {
  FTRACE(0x113154f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113154f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113154f1 mov ebp, esp */
  EBP = (ESP);
  /* 113154f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113154f4 cmp dword ptr [0x11331d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11331d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113154fb jne 0x11315504 */
  if (!C.zf) goto L_11315504;
  /* 113154fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113154ff jmp 0x113157e6 */
  goto L_113157e6;
L_11315504:;
  /* 11315504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315507 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1131550a cmp ecx, dword ptr [0x11331e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11331e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315510 jne 0x11315524 */
  if (!C.zf) goto L_11315524;
  /* 11315512 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315515 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11315518 cmp eax, dword ptr [0x11331e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11331e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131551e je 0x113156eb */
  if (C.zf) goto L_113156eb;
L_11315524:;
  /* 11315524 cmp dword ptr [0x11332a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131552b je 0x113156a5 */
  if (C.zf) goto L_113156a5;
  /* 11315531 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11315533 mov cx, word ptr [0x11332ac8] */
  CX = (r16((uint32_t)(0x11332ac8)));
  /* 1131553a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1131553c jne 0x11315599 */
  if (!C.zf) goto L_11315599;
  /* 1131553e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11315540 mov dx, word ptr [0x11332ad6] */
  DX = (r16((uint32_t)(0x11332ad6)));
  /* 11315547 push edx */
  push32((uint32_t)(EDX));
  /* 11315548 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131554a mov ax, word ptr [0x11332ad4] */
  AX = (r16((uint32_t)(0x11332ad4)));
  /* 11315550 push eax */
  push32((uint32_t)(EAX));
  /* 11315551 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11315553 mov cx, word ptr [0x11332ad2] */
  CX = (r16((uint32_t)(0x11332ad2)));
  /* 1131555a push ecx */
  push32((uint32_t)(ECX));
  /* 1131555b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1131555d mov dx, word ptr [0x11332ad0] */
  DX = (r16((uint32_t)(0x11332ad0)));
  /* 11315564 push edx */
  push32((uint32_t)(EDX));
  /* 11315565 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315567 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315569 mov ax, word ptr [0x11332acc] */
  AX = (r16((uint32_t)(0x11332acc)));
  /* 1131556f push eax */
  push32((uint32_t)(EAX));
  /* 11315570 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11315572 mov cx, word ptr [0x11332ace] */
  CX = (r16((uint32_t)(0x11332ace)));
  /* 11315579 push ecx */
  push32((uint32_t)(ECX));
  /* 1131557a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1131557c mov dx, word ptr [0x11332aca] */
  DX = (r16((uint32_t)(0x11332aca)));
  /* 11315583 push edx */
  push32((uint32_t)(EDX));
  /* 11315584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315587 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1131558a push ecx */
  push32((uint32_t)(ECX));
  /* 1131558b push 1 */
  push32((uint32_t)(0x1u));
  /* 1131558d push 1 */
  push32((uint32_t)(0x1u));
  /* 1131558f call 0x113157f0 */
  push32(0x11315594u); f_113157f0();
  /* 11315594 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315597 jmp 0x113155ea */
  goto L_113155ea;
L_11315599:;
  /* 11315599 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1131559b mov dx, word ptr [0x11332ad6] */
  DX = (r16((uint32_t)(0x11332ad6)));
  /* 113155a2 push edx */
  push32((uint32_t)(EDX));
  /* 113155a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113155a5 mov ax, word ptr [0x11332ad4] */
  AX = (r16((uint32_t)(0x11332ad4)));
  /* 113155ab push eax */
  push32((uint32_t)(EAX));
  /* 113155ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113155ae mov cx, word ptr [0x11332ad2] */
  CX = (r16((uint32_t)(0x11332ad2)));
  /* 113155b5 push ecx */
  push32((uint32_t)(ECX));
  /* 113155b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113155b8 mov dx, word ptr [0x11332ad0] */
  DX = (r16((uint32_t)(0x11332ad0)));
  /* 113155bf push edx */
  push32((uint32_t)(EDX));
  /* 113155c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113155c2 mov ax, word ptr [0x11332ace] */
  AX = (r16((uint32_t)(0x11332ace)));
  /* 113155c8 push eax */
  push32((uint32_t)(EAX));
  /* 113155c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113155cb push 0 */
  push32((uint32_t)(0x0u));
  /* 113155cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113155cf mov cx, word ptr [0x11332aca] */
  CX = (r16((uint32_t)(0x11332aca)));
  /* 113155d6 push ecx */
  push32((uint32_t)(ECX));
  /* 113155d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113155da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113155dd push eax */
  push32((uint32_t)(EAX));
  /* 113155de push 0 */
  push32((uint32_t)(0x0u));
  /* 113155e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113155e2 call 0x113157f0 */
  push32(0x113155e7u); f_113157f0();
  /* 113155e7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113155ea:;
  /* 113155ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113155ec mov cx, word ptr [0x11332a74] */
  CX = (r16((uint32_t)(0x11332a74)));
  /* 113155f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113155f5 jne 0x11315652 */
  if (!C.zf) goto L_11315652;
  /* 113155f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113155f9 mov dx, word ptr [0x11332a82] */
  DX = (r16((uint32_t)(0x11332a82)));
  /* 11315600 push edx */
  push32((uint32_t)(EDX));
  /* 11315601 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315603 mov ax, word ptr [0x11332a80] */
  AX = (r16((uint32_t)(0x11332a80)));
  /* 11315609 push eax */
  push32((uint32_t)(EAX));
  /* 1131560a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1131560c mov cx, word ptr [0x11332a7e] */
  CX = (r16((uint32_t)(0x11332a7e)));
  /* 11315613 push ecx */
  push32((uint32_t)(ECX));
  /* 11315614 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11315616 mov dx, word ptr [0x11332a7c] */
  DX = (r16((uint32_t)(0x11332a7c)));
  /* 1131561d push edx */
  push32((uint32_t)(EDX));
  /* 1131561e push 0 */
  push32((uint32_t)(0x0u));
  /* 11315620 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315622 mov ax, word ptr [0x11332a78] */
  AX = (r16((uint32_t)(0x11332a78)));
  /* 11315628 push eax */
  push32((uint32_t)(EAX));
  /* 11315629 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1131562b mov cx, word ptr [0x11332a7a] */
  CX = (r16((uint32_t)(0x11332a7a)));
  /* 11315632 push ecx */
  push32((uint32_t)(ECX));
  /* 11315633 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11315635 mov dx, word ptr [0x11332a76] */
  DX = (r16((uint32_t)(0x11332a76)));
  /* 1131563c push edx */
  push32((uint32_t)(EDX));
  /* 1131563d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315640 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11315643 push ecx */
  push32((uint32_t)(ECX));
  /* 11315644 push 1 */
  push32((uint32_t)(0x1u));
  /* 11315646 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315648 call 0x113157f0 */
  push32(0x1131564du); f_113157f0();
  /* 1131564d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315650 jmp 0x113156a3 */
  goto L_113156a3;
L_11315652:;
  /* 11315652 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11315654 mov dx, word ptr [0x11332a82] */
  DX = (r16((uint32_t)(0x11332a82)));
  /* 1131565b push edx */
  push32((uint32_t)(EDX));
  /* 1131565c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131565e mov ax, word ptr [0x11332a80] */
  AX = (r16((uint32_t)(0x11332a80)));
  /* 11315664 push eax */
  push32((uint32_t)(EAX));
  /* 11315665 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11315667 mov cx, word ptr [0x11332a7e] */
  CX = (r16((uint32_t)(0x11332a7e)));
  /* 1131566e push ecx */
  push32((uint32_t)(ECX));
  /* 1131566f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11315671 mov dx, word ptr [0x11332a7c] */
  DX = (r16((uint32_t)(0x11332a7c)));
  /* 11315678 push edx */
  push32((uint32_t)(EDX));
  /* 11315679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131567b mov ax, word ptr [0x11332a7a] */
  AX = (r16((uint32_t)(0x11332a7a)));
  /* 11315681 push eax */
  push32((uint32_t)(EAX));
  /* 11315682 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315684 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315686 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11315688 mov cx, word ptr [0x11332a76] */
  CX = (r16((uint32_t)(0x11332a76)));
  /* 1131568f push ecx */
  push32((uint32_t)(ECX));
  /* 11315690 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315693 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11315696 push eax */
  push32((uint32_t)(EAX));
  /* 11315697 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315699 push 0 */
  push32((uint32_t)(0x0u));
  /* 1131569b call 0x113157f0 */
  push32(0x113156a0u); f_113157f0();
  /* 113156a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113156a3:;
  /* 113156a3 jmp 0x113156eb */
  goto L_113156eb;
L_113156a5:;
  /* 113156a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113156a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113156a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113156ab push 2 */
  push32((uint32_t)(0x2u));
  /* 113156ad push 0 */
  push32((uint32_t)(0x0u));
  /* 113156af push 0 */
  push32((uint32_t)(0x0u));
  /* 113156b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 113156b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 113156b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113156b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113156bb push edx */
  push32((uint32_t)(EDX));
  /* 113156bc push 1 */
  push32((uint32_t)(0x1u));
  /* 113156be push 1 */
  push32((uint32_t)(0x1u));
  /* 113156c0 call 0x113157f0 */
  push32(0x113156c5u); f_113157f0();
  /* 113156c5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113156c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113156ca push 0 */
  push32((uint32_t)(0x0u));
  /* 113156cc push 0 */
  push32((uint32_t)(0x0u));
  /* 113156ce push 2 */
  push32((uint32_t)(0x2u));
  /* 113156d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113156d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113156d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 113156d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 113156d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113156db mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113156de push ecx */
  push32((uint32_t)(ECX));
  /* 113156df push 1 */
  push32((uint32_t)(0x1u));
  /* 113156e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113156e3 call 0x113157f0 */
  push32(0x113156e8u); f_113157f0();
  /* 113156e8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113156eb:;
  /* 113156eb mov edx, dword ptr [0x11331e2c] */
  EDX = (r32((uint32_t)(0x11331e2c)));
  /* 113156f1 cmp edx, dword ptr [0x11331e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11331e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113156f7 jge 0x11315744 */
  if ((C.sf==C.of)) goto L_11315744;
  /* 113156f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113156fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113156ff cmp ecx, dword ptr [0x11331e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11331e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315705 jl 0x11315715 */
  if ((C.sf!=C.of)) goto L_11315715;
  /* 11315707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131570a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1131570d cmp eax, dword ptr [0x11331e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11331e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315713 jle 0x1131571c */
  if ((C.zf||C.sf!=C.of)) goto L_1131571c;
L_11315715:;
  /* 11315715 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315717 jmp 0x113157e6 */
  goto L_113157e6;
L_1131571c:;
  /* 1131571c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131571f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11315722 cmp edx, dword ptr [0x11331e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11331e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315728 jle 0x11315742 */
  if ((C.zf||C.sf!=C.of)) goto L_11315742;
  /* 1131572a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131572d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11315730 cmp ecx, dword ptr [0x11331e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11331e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315736 jge 0x11315742 */
  if ((C.sf==C.of)) goto L_11315742;
  /* 11315738 mov eax, 1 */
  EAX = (0x1u);
  /* 1131573d jmp 0x113157e6 */
  goto L_113157e6;
L_11315742:;
  /* 11315742 jmp 0x11315787 */
  goto L_11315787;
L_11315744:;
  /* 11315744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315747 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1131574a cmp eax, dword ptr [0x11331e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11331e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315750 jl 0x11315760 */
  if ((C.sf!=C.of)) goto L_11315760;
  /* 11315752 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315755 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11315758 cmp edx, dword ptr [0x11331e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11331e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131575e jle 0x11315767 */
  if ((C.zf||C.sf!=C.of)) goto L_11315767;
L_11315760:;
  /* 11315760 mov eax, 1 */
  EAX = (0x1u);
  /* 11315765 jmp 0x113157e6 */
  goto L_113157e6;
L_11315767:;
  /* 11315767 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131576a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1131576d cmp ecx, dword ptr [0x11331e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11331e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315773 jle 0x11315787 */
  if ((C.zf||C.sf!=C.of)) goto L_11315787;
  /* 11315775 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315778 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1131577b cmp eax, dword ptr [0x11331e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11331e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315781 jge 0x11315787 */
  if ((C.sf==C.of)) goto L_11315787;
  /* 11315783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315785 jmp 0x113157e6 */
  goto L_113157e6;
L_11315787:;
  /* 11315787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131578a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1131578d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11315790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315793 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11315795 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315797 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131579a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1131579d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113157a3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113157a5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113157ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113157ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113157b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113157b4 cmp edx, dword ptr [0x11331e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11331e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113157ba jne 0x113157d2 */
  if (!C.zf) goto L_113157d2;
  /* 113157bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113157bf cmp eax, dword ptr [0x11331e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11331e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113157c5 jl 0x113157ce */
  if ((C.sf!=C.of)) goto L_113157ce;
  /* 113157c7 mov eax, 1 */
  EAX = (0x1u);
  /* 113157cc jmp 0x113157e6 */
  goto L_113157e6;
L_113157ce:;
  /* 113157ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113157d0 jmp 0x113157e6 */
  goto L_113157e6;
L_113157d2:;
  /* 113157d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113157d5 cmp ecx, dword ptr [0x11331e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11331e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113157db jge 0x113157e4 */
  if ((C.sf==C.of)) goto L_113157e4;
  /* 113157dd mov eax, 1 */
  EAX = (0x1u);
  /* 113157e2 jmp 0x113157e6 */
  goto L_113157e6;
L_113157e4:;
  /* 113157e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113157e6:;
  /* 113157e6 mov esp, ebp */
  ESP = (EBP);
  /* 113157e8 pop ebp */
  EBP = (pop32());
  /* 113157e9 ret  */
  ESPCHK(0x113154f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157f0 @ 0x113157f0 (504 bytes, 145 insns) */
void f_113157f0(void) {
  FTRACE(0x113157f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113157f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113157f1 mov ebp, esp */
  EBP = (ESP);
  /* 113157f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113157f6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113157fa jne 0x113158cc */
  if (!C.zf) goto L_113158cc;
  /* 11315800 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11315803 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11315806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11315808 jne 0x11315819 */
  if (!C.zf) goto L_11315819;
  /* 1131580a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131580d mov edx, dword ptr [ecx*4 + 0x11331e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11331e4c)));
  /* 11315814 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11315817 jmp 0x11315826 */
  goto L_11315826;
L_11315819:;
  /* 11315819 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131581c mov ecx, dword ptr [eax*4 + 0x11331e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11331e80)));
  /* 11315823 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11315826:;
  /* 11315826 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315829 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131582c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1131582f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11315832 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11315835 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1131583b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131583e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315840 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11315843 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11315846 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11315849 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1131584d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1131584e mov ecx, 7 */
  ECX = (0x7u);
  /* 11315853 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11315855 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11315858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131585b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131585e jge 0x11315879 */
  if ((C.sf==C.of)) goto L_11315879;
  /* 11315860 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11315863 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11315866 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11315869 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1131586c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1131586f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315872 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315874 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11315877 jmp 0x1131588d */
  goto L_1131588d;
L_11315879:;
  /* 11315879 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1131587c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1131587f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11315882 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11315885 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315888 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131588a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1131588d:;
  /* 1131588d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315891 jne 0x113158ca */
  if (!C.zf) goto L_113158ca;
  /* 11315893 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11315896 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11315899 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1131589b jne 0x113158ac */
  if (!C.zf) goto L_113158ac;
  /* 1131589d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113158a0 mov eax, dword ptr [edx*4 + 0x11331e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11331e50)));
  /* 113158a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113158aa jmp 0x113158b9 */
  goto L_113158b9;
L_113158ac:;
  /* 113158ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113158af mov edx, dword ptr [ecx*4 + 0x11331e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11331e84)));
  /* 113158b6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113158b9:;
  /* 113158b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113158bc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113158bf jle 0x113158ca */
  if ((C.zf||C.sf!=C.of)) goto L_113158ca;
  /* 113158c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113158c4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113158c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113158ca:;
  /* 113158ca jmp 0x11315901 */
  goto L_11315901;
L_113158cc:;
  /* 113158cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113158cf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113158d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113158d4 jne 0x113158e5 */
  if (!C.zf) goto L_113158e5;
  /* 113158d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113158d9 mov ecx, dword ptr [eax*4 + 0x11331e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11331e4c)));
  /* 113158e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113158e3 jmp 0x113158f2 */
  goto L_113158f2;
L_113158e5:;
  /* 113158e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113158e8 mov eax, dword ptr [edx*4 + 0x11331e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11331e80)));
  /* 113158ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_113158f2:;
  /* 113158f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113158f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113158f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113158fb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113158fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11315901:;
  /* 11315901 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315905 jne 0x11315941 */
  if (!C.zf) goto L_11315941;
  /* 11315907 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131590a mov dword ptr [0x11331e2c], eax */
  w32((uint32_t)(0x11331e2c), (EAX));
  /* 1131590f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11315912 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11315915 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11315918 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131591a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1131591d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11315920 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315922 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11315928 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1131592b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131592d mov dword ptr [0x11331e30], ecx */
  w32((uint32_t)(0x11331e30), (ECX));
  /* 11315933 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11315936 mov dword ptr [0x11331e28], edx */
  w32((uint32_t)(0x11331e28), (EDX));
  /* 1131593c jmp 0x113159e4 */
  goto L_113159e4;
L_11315941:;
  /* 11315941 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11315944 mov dword ptr [0x11331e3c], eax */
  w32((uint32_t)(0x11331e3c), (EAX));
  /* 11315949 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1131594c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1131594f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11315952 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315954 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11315957 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1131595a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131595c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11315962 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11315965 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315967 mov dword ptr [0x11331e40], ecx */
  w32((uint32_t)(0x11331e40), (ECX));
  /* 1131596d mov edx, dword ptr [0x11331d98] */
  EDX = (r32((uint32_t)(0x11331d98)));
  /* 11315973 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11315979 mov eax, dword ptr [0x11331e40] */
  EAX = (r32((uint32_t)(0x11331e40)));
  /* 1131597e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315980 mov dword ptr [0x11331e40], eax */
  w32((uint32_t)(0x11331e40), (EAX));
  /* 11315985 cmp dword ptr [0x11331e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11331e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131598c jge 0x113159b1 */
  if ((C.sf==C.of)) goto L_113159b1;
  /* 1131598e mov ecx, dword ptr [0x11331e40] */
  ECX = (r32((uint32_t)(0x11331e40)));
  /* 11315994 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131599a mov dword ptr [0x11331e40], ecx */
  w32((uint32_t)(0x11331e40), (ECX));
  /* 113159a0 mov edx, dword ptr [0x11331e3c] */
  EDX = (r32((uint32_t)(0x11331e3c)));
  /* 113159a6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113159a9 mov dword ptr [0x11331e3c], edx */
  w32((uint32_t)(0x11331e3c), (EDX));
  /* 113159af jmp 0x113159db */
  goto L_113159db;
L_113159b1:;
  /* 113159b1 cmp dword ptr [0x11331e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11331e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113159bb jl 0x113159db */
  if ((C.sf!=C.of)) goto L_113159db;
  /* 113159bd mov eax, dword ptr [0x11331e40] */
  EAX = (r32((uint32_t)(0x11331e40)));
  /* 113159c2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113159c7 mov dword ptr [0x11331e40], eax */
  w32((uint32_t)(0x11331e40), (EAX));
  /* 113159cc mov ecx, dword ptr [0x11331e3c] */
  ECX = (r32((uint32_t)(0x11331e3c)));
  /* 113159d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113159d5 mov dword ptr [0x11331e3c], ecx */
  w32((uint32_t)(0x11331e3c), (ECX));
L_113159db:;
  /* 113159db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113159de mov dword ptr [0x11331e38], edx */
  w32((uint32_t)(0x11331e38), (EDX));
L_113159e4:;
  /* 113159e4 mov esp, ebp */
  ESP = (EBP);
  /* 113159e6 pop ebp */
  EBP = (pop32());
  /* 113159e7 ret  */
  ESPCHK(0x113157f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100159f0 @ 0x113159f0 (382 bytes, 135 insns) */
void f_113159f0(void) {
  FTRACE(0x113159f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113159f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113159f1 mov ebp, esp */
  EBP = (ESP);
  /* 113159f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113159f5 push 0x1132ed00 */
  push32((uint32_t)(0x1132ed00u));
  /* 113159fa push 0x1130f6b8 */
  push32((uint32_t)(0x1130f6b8u));
  /* 113159ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11315a05 push eax */
  push32((uint32_t)(EAX));
  /* 11315a06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11315a0d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315a10 push ebx */
  push32((uint32_t)(EBX));
  /* 11315a11 push esi */
  push32((uint32_t)(ESI));
  /* 11315a12 push edi */
  push32((uint32_t)(EDI));
  /* 11315a13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11315a16 cmp dword ptr [0x11332ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315a1d jne 0x11315a62 */
  if (!C.zf) goto L_11315a62;
  /* 11315a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11315a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11315a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315a27 call dword ptr [0x113352e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352e4))), 0x11315a2du);
  /* 11315a2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11315a2f je 0x11315a3d */
  if (C.zf) goto L_11315a3d;
  /* 11315a31 mov dword ptr [0x11332ae4], 1 */
  w32((uint32_t)(0x11332ae4), (0x1u));
  /* 11315a3b jmp 0x11315a62 */
  goto L_11315a62;
L_11315a3d:;
  /* 11315a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11315a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11315a41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11315a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315a45 call dword ptr [0x113352fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352fc))), 0x11315a4bu);
  /* 11315a4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11315a4d je 0x11315a5b */
  if (C.zf) goto L_11315a5b;
  /* 11315a4f mov dword ptr [0x11332ae4], 2 */
  w32((uint32_t)(0x11332ae4), (0x2u));
  /* 11315a59 jmp 0x11315a62 */
  goto L_11315a62;
L_11315a5b:;
  /* 11315a5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315a5d jmp 0x11315b71 */
  goto L_11315b71;
L_11315a62:;
  /* 11315a62 cmp dword ptr [0x11332ae4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11332ae4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315a69 jne 0x11315a86 */
  if (!C.zf) goto L_11315a86;
  /* 11315a6b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11315a6e push eax */
  push32((uint32_t)(EAX));
  /* 11315a6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11315a72 push ecx */
  push32((uint32_t)(ECX));
  /* 11315a73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11315a76 push edx */
  push32((uint32_t)(EDX));
  /* 11315a77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315a7a push eax */
  push32((uint32_t)(EAX));
  /* 11315a7b call dword ptr [0x113352e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352e4))), 0x11315a81u);
  /* 11315a81 jmp 0x11315b71 */
  goto L_11315b71;
L_11315a86:;
  /* 11315a86 cmp dword ptr [0x11332ae4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11332ae4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315a8d jne 0x11315b6f */
  if (!C.zf) goto L_11315b6f;
  /* 11315a93 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315a97 jne 0x11315aa2 */
  if (!C.zf) goto L_11315aa2;
  /* 11315a99 mov ecx, dword ptr [0x11332998] */
  ECX = (r32((uint32_t)(0x11332998)));
  /* 11315a9f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11315aa2:;
  /* 11315aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315aa6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11315aa9 push edx */
  push32((uint32_t)(EDX));
  /* 11315aaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315aad push eax */
  push32((uint32_t)(EAX));
  /* 11315aae call dword ptr [0x113352fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352fc))), 0x11315ab4u);
  /* 11315ab4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11315ab7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315abb jne 0x11315ac4 */
  if (!C.zf) goto L_11315ac4;
  /* 11315abd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315abf jmp 0x11315b71 */
  goto L_11315b71;
L_11315ac4:;
  /* 11315ac4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11315acb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11315ace add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315ad1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11315ad3 call 0x11309750 */
  push32(0x11315ad8u); f_11309750();
  /* 11315ad8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11315adb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11315ade mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11315ae1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11315ae4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11315aeb jmp 0x11315b04 */
  goto L_11315b04;
  /* 11315aed mov eax, 1 */
  EAX = (0x1u);
  /* 11315af2 ret  */
  ESPCHK(0x113159f0u, _esp0);
  ESP += 4; return;
  /* 11315af3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11315af6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11315afd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11315b04:;
  /* 11315b04 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315b08 jne 0x11315b0e */
  if (!C.zf) goto L_11315b0e;
  /* 11315b0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315b0c jmp 0x11315b71 */
  goto L_11315b71;
L_11315b0e:;
  /* 11315b0e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11315b11 push edx */
  push32((uint32_t)(EDX));
  /* 11315b12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11315b15 push eax */
  push32((uint32_t)(EAX));
  /* 11315b16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11315b19 push ecx */
  push32((uint32_t)(ECX));
  /* 11315b1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315b1d push edx */
  push32((uint32_t)(EDX));
  /* 11315b1e call dword ptr [0x113352fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352fc))), 0x11315b24u);
  /* 11315b24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11315b26 jne 0x11315b2c */
  if (!C.zf) goto L_11315b2c;
  /* 11315b28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315b2a jmp 0x11315b71 */
  goto L_11315b71;
L_11315b2c:;
  /* 11315b2c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315b30 jne 0x11315b4d */
  if (!C.zf) goto L_11315b4d;
  /* 11315b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315b36 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11315b38 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11315b3b push eax */
  push32((uint32_t)(EAX));
  /* 11315b3c push 1 */
  push32((uint32_t)(0x1u));
  /* 11315b3e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11315b41 push ecx */
  push32((uint32_t)(ECX));
  /* 11315b42 call dword ptr [0x1133532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133532c))), 0x11315b48u);
  /* 11315b48 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11315b4b jmp 0x11315b6a */
  goto L_11315b6a;
L_11315b4d:;
  /* 11315b4d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11315b50 push edx */
  push32((uint32_t)(EDX));
  /* 11315b51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11315b54 push eax */
  push32((uint32_t)(EAX));
  /* 11315b55 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11315b57 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11315b5a push ecx */
  push32((uint32_t)(ECX));
  /* 11315b5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11315b5d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11315b60 push edx */
  push32((uint32_t)(EDX));
  /* 11315b61 call dword ptr [0x1133532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133532c))), 0x11315b67u);
  /* 11315b67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11315b6a:;
  /* 11315b6a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11315b6d jmp 0x11315b71 */
  goto L_11315b71;
L_11315b6f:;
  /* 11315b6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11315b71:;
  /* 11315b71 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11315b74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11315b77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11315b7e pop edi */
  EDI = (pop32());
  /* 11315b7f pop esi */
  ESI = (pop32());
  /* 11315b80 pop ebx */
  EBX = (pop32());
  /* 11315b81 mov esp, ebp */
  ESP = (EBP);
  /* 11315b83 pop ebp */
  EBP = (pop32());
  /* 11315b84 ret  */
  ESPCHK(0x113159f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b90 @ 0x11315b90 (398 bytes, 140 insns) */
void f_11315b90(void) {
  FTRACE(0x11315b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11315b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11315b91 mov ebp, esp */
  EBP = (ESP);
  /* 11315b93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11315b95 push 0x1132ed10 */
  push32((uint32_t)(0x1132ed10u));
  /* 11315b9a push 0x1130f6b8 */
  push32((uint32_t)(0x1130f6b8u));
  /* 11315b9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11315ba5 push eax */
  push32((uint32_t)(EAX));
  /* 11315ba6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11315bad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315bb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11315bb1 push esi */
  push32((uint32_t)(ESI));
  /* 11315bb2 push edi */
  push32((uint32_t)(EDI));
  /* 11315bb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11315bb6 cmp dword ptr [0x11332ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315bbd jne 0x11315c02 */
  if (!C.zf) goto L_11315c02;
  /* 11315bbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11315bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315bc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11315bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315bc7 call dword ptr [0x113352e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352e4))), 0x11315bcdu);
  /* 11315bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11315bcf je 0x11315bdd */
  if (C.zf) goto L_11315bdd;
  /* 11315bd1 mov dword ptr [0x11332ae8], 1 */
  w32((uint32_t)(0x11332ae8), (0x1u));
  /* 11315bdb jmp 0x11315c02 */
  goto L_11315c02;
L_11315bdd:;
  /* 11315bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11315bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11315be1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11315be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315be5 call dword ptr [0x113352fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352fc))), 0x11315bebu);
  /* 11315beb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11315bed je 0x11315bfb */
  if (C.zf) goto L_11315bfb;
  /* 11315bef mov dword ptr [0x11332ae8], 2 */
  w32((uint32_t)(0x11332ae8), (0x2u));
  /* 11315bf9 jmp 0x11315c02 */
  goto L_11315c02;
L_11315bfb:;
  /* 11315bfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315bfd jmp 0x11315d21 */
  goto L_11315d21;
L_11315c02:;
  /* 11315c02 cmp dword ptr [0x11332ae8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11332ae8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315c09 jne 0x11315c26 */
  if (!C.zf) goto L_11315c26;
  /* 11315c0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11315c0e push eax */
  push32((uint32_t)(EAX));
  /* 11315c0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11315c12 push ecx */
  push32((uint32_t)(ECX));
  /* 11315c13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11315c16 push edx */
  push32((uint32_t)(EDX));
  /* 11315c17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315c1a push eax */
  push32((uint32_t)(EAX));
  /* 11315c1b call dword ptr [0x113352fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352fc))), 0x11315c21u);
  /* 11315c21 jmp 0x11315d21 */
  goto L_11315d21;
L_11315c26:;
  /* 11315c26 cmp dword ptr [0x11332ae8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11332ae8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315c2d jne 0x11315d1f */
  if (!C.zf) goto L_11315d1f;
  /* 11315c33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315c37 jne 0x11315c42 */
  if (!C.zf) goto L_11315c42;
  /* 11315c39 mov ecx, dword ptr [0x11332998] */
  ECX = (r32((uint32_t)(0x11332998)));
  /* 11315c3f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11315c42:;
  /* 11315c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315c46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11315c49 push edx */
  push32((uint32_t)(EDX));
  /* 11315c4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315c4d push eax */
  push32((uint32_t)(EAX));
  /* 11315c4e call dword ptr [0x113352e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352e4))), 0x11315c54u);
  /* 11315c54 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11315c57 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315c5b jne 0x11315c64 */
  if (!C.zf) goto L_11315c64;
  /* 11315c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315c5f jmp 0x11315d21 */
  goto L_11315d21;
L_11315c64:;
  /* 11315c64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11315c6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11315c6e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11315c70 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315c73 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11315c75 call 0x11309750 */
  push32(0x11315c7au); f_11309750();
  /* 11315c7a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11315c7d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11315c80 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11315c83 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11315c86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11315c8d jmp 0x11315ca6 */
  goto L_11315ca6;
  /* 11315c8f mov eax, 1 */
  EAX = (0x1u);
  /* 11315c94 ret  */
  ESPCHK(0x11315b90u, _esp0);
  ESP += 4; return;
  /* 11315c95 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11315c98 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11315c9f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11315ca6:;
  /* 11315ca6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315caa jne 0x11315cb0 */
  if (!C.zf) goto L_11315cb0;
  /* 11315cac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315cae jmp 0x11315d21 */
  goto L_11315d21;
L_11315cb0:;
  /* 11315cb0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11315cb3 push edx */
  push32((uint32_t)(EDX));
  /* 11315cb4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11315cb7 push eax */
  push32((uint32_t)(EAX));
  /* 11315cb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11315cbb push ecx */
  push32((uint32_t)(ECX));
  /* 11315cbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315cbf push edx */
  push32((uint32_t)(EDX));
  /* 11315cc0 call dword ptr [0x113352e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352e4))), 0x11315cc6u);
  /* 11315cc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11315cc8 jne 0x11315cce */
  if (!C.zf) goto L_11315cce;
  /* 11315cca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315ccc jmp 0x11315d21 */
  goto L_11315d21;
L_11315cce:;
  /* 11315cce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315cd2 jne 0x11315cf6 */
  if (!C.zf) goto L_11315cf6;
  /* 11315cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315cda push 0 */
  push32((uint32_t)(0x0u));
  /* 11315cdc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11315cde mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11315ce1 push eax */
  push32((uint32_t)(EAX));
  /* 11315ce2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11315ce7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11315cea push ecx */
  push32((uint32_t)(ECX));
  /* 11315ceb call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x11315cf1u);
  /* 11315cf1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11315cf4 jmp 0x11315d1a */
  goto L_11315d1a;
L_11315cf6:;
  /* 11315cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11315cfa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11315cfd push edx */
  push32((uint32_t)(EDX));
  /* 11315cfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11315d01 push eax */
  push32((uint32_t)(EAX));
  /* 11315d02 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11315d04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11315d07 push ecx */
  push32((uint32_t)(ECX));
  /* 11315d08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11315d0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11315d10 push edx */
  push32((uint32_t)(EDX));
  /* 11315d11 call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x11315d17u);
  /* 11315d17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11315d1a:;
  /* 11315d1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11315d1d jmp 0x11315d21 */
  goto L_11315d21;
L_11315d1f:;
  /* 11315d1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11315d21:;
  /* 11315d21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11315d24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11315d27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11315d2e pop edi */
  EDI = (pop32());
  /* 11315d2f pop esi */
  ESI = (pop32());
  /* 11315d30 pop ebx */
  EBX = (pop32());
  /* 11315d31 mov esp, ebp */
  ESP = (EBP);
  /* 11315d33 pop ebp */
  EBP = (pop32());
  /* 11315d34 ret  */
  ESPCHK(0x11315b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d40 @ 0x11315d40 (11 bytes, 6 insns) */
void f_11315d40(void) {
  FTRACE(0x11315d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11315d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11315d41 mov ebp, esp */
  EBP = (ESP);
  /* 11315d43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315d46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315d49 pop ebp */
  EBP = (pop32());
  /* 11315d4a ret  */
  ESPCHK(0x11315d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d50 @ 0x11315d50 (147 bytes, 43 insns) */
void f_11315d50(void) {
  FTRACE(0x11315d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11315d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11315d51 mov ebp, esp */
  EBP = (ESP);
  /* 11315d53 push ecx */
  push32((uint32_t)(ECX));
  /* 11315d54 cmp dword ptr [0x11332988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315d5b jne 0x11315d77 */
  if (!C.zf) goto L_11315d77;
  /* 11315d5d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315d61 jl 0x11315d72 */
  if ((C.sf!=C.of)) goto L_11315d72;
  /* 11315d63 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315d67 jg 0x11315d72 */
  if ((!C.zf&&C.sf==C.of)) goto L_11315d72;
  /* 11315d69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315d6c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315d6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11315d72:;
  /* 11315d72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315d75 jmp 0x11315ddf */
  goto L_11315ddf;
L_11315d77:;
  /* 11315d77 push 0x11332b14 */
  push32((uint32_t)(0x11332b14u));
  /* 11315d7c call dword ptr [0x113353bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353bc))), 0x11315d82u);
  /* 11315d82 cmp dword ptr [0x11332b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315d89 je 0x11315da9 */
  if (C.zf) goto L_11315da9;
  /* 11315d8b push 0x11332b14 */
  push32((uint32_t)(0x11332b14u));
  /* 11315d90 call dword ptr [0x113353ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ac))), 0x11315d96u);
  /* 11315d96 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11315d98 call 0x11309fb0 */
  push32(0x11315d9du); f_11309fb0();
  /* 11315d9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315da0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11315da7 jmp 0x11315db0 */
  goto L_11315db0;
L_11315da9:;
  /* 11315da9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11315db0:;
  /* 11315db0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315db3 push ecx */
  push32((uint32_t)(ECX));
  /* 11315db4 call 0x11315df0 */
  push32(0x11315db9u); f_11315df0();
  /* 11315db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315dbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11315dbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315dc3 je 0x11315dd1 */
  if (C.zf) goto L_11315dd1;
  /* 11315dc5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11315dc7 call 0x1130a050 */
  push32(0x11315dccu); f_1130a050();
  /* 11315dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315dcf jmp 0x11315ddc */
  goto L_11315ddc;
L_11315dd1:;
  /* 11315dd1 push 0x11332b14 */
  push32((uint32_t)(0x11332b14u));
  /* 11315dd6 call dword ptr [0x113353ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ac))), 0x11315ddcu);
L_11315ddc:;
  /* 11315ddc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11315ddf:;
  /* 11315ddf mov esp, ebp */
  ESP = (EBP);
  /* 11315de1 pop ebp */
  EBP = (pop32());
  /* 11315de2 ret  */
  ESPCHK(0x11315d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10015df0 @ 0x11315df0 (299 bytes, 91 insns) */
void f_11315df0(void) {
  FTRACE(0x11315df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11315df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11315df1 mov ebp, esp */
  EBP = (ESP);
  /* 11315df3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11315df6 cmp dword ptr [0x11332988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315dfd jne 0x11315e1c */
  if (!C.zf) goto L_11315e1c;
  /* 11315dff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315e03 jl 0x11315e14 */
  if ((C.sf!=C.of)) goto L_11315e14;
  /* 11315e05 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315e09 jg 0x11315e14 */
  if ((!C.zf&&C.sf==C.of)) goto L_11315e14;
  /* 11315e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315e0e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315e11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11315e14:;
  /* 11315e14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315e17 jmp 0x11315f17 */
  goto L_11315f17;
L_11315e1c:;
  /* 11315e1c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315e23 jge 0x11315e63 */
  if ((C.sf==C.of)) goto L_11315e63;
  /* 11315e25 cmp dword ptr [0x11330ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11330ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315e2c jle 0x11315e41 */
  if ((C.zf||C.sf!=C.of)) goto L_11315e41;
  /* 11315e2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11315e30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11315e34 call 0x1130c5c0 */
  push32(0x11315e39u); f_1130c5c0();
  /* 11315e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315e3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11315e3f jmp 0x11315e55 */
  goto L_11315e55;
L_11315e41:;
  /* 11315e41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315e44 mov eax, dword ptr [0x11330c98] */
  EAX = (r32((uint32_t)(0x11330c98)));
  /* 11315e49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11315e4b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11315e4f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11315e52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11315e55:;
  /* 11315e55 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315e59 jne 0x11315e63 */
  if (!C.zf) goto L_11315e63;
  /* 11315e5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315e5e jmp 0x11315f17 */
  goto L_11315f17;
L_11315e63:;
  /* 11315e63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315e66 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11315e69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11315e6f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11315e75 mov eax, dword ptr [0x11330c98] */
  EAX = (r32((uint32_t)(0x11330c98)));
  /* 11315e7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11315e7c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11315e80 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11315e86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11315e88 je 0x11315eac */
  if (C.zf) goto L_11315eac;
  /* 11315e8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315e8d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11315e90 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11315e96 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11315e99 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11315e9c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11315e9f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11315ea3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11315eaa jmp 0x11315ebd */
  goto L_11315ebd;
L_11315eac:;
  /* 11315eac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11315eaf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11315eb2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11315eb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11315ebd:;
  /* 11315ebd push 1 */
  push32((uint32_t)(0x1u));
  /* 11315ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 11315ec1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11315ec3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11315ec6 push edx */
  push32((uint32_t)(EDX));
  /* 11315ec7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11315eca push eax */
  push32((uint32_t)(EAX));
  /* 11315ecb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11315ece push ecx */
  push32((uint32_t)(ECX));
  /* 11315ecf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11315ed4 mov edx, dword ptr [0x11332988] */
  EDX = (r32((uint32_t)(0x11332988)));
  /* 11315eda push edx */
  push32((uint32_t)(EDX));
  /* 11315edb call 0x1130e9a0 */
  push32(0x11315ee0u); f_1130e9a0();
  /* 11315ee0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315ee3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11315ee6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315eea jne 0x11315ef1 */
  if (!C.zf) goto L_11315ef1;
  /* 11315eec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315eef jmp 0x11315f17 */
  goto L_11315f17;
L_11315ef1:;
  /* 11315ef1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315ef5 jne 0x11315f01 */
  if (!C.zf) goto L_11315f01;
  /* 11315ef7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315efa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11315eff jmp 0x11315f17 */
  goto L_11315f17;
L_11315f01:;
  /* 11315f01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11315f04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11315f09 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11315f0c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11315f12 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11315f15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11315f17:;
  /* 11315f17 mov esp, ebp */
  ESP = (EBP);
  /* 11315f19 pop ebp */
  EBP = (pop32());
  /* 11315f1a ret  */
  ESPCHK(0x11315df0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11315f20 (52 bytes, 19 insns) */
void f_11315f20(void) {
  FTRACE(0x11315f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11315f20 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11315f24 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11315f28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11315f2a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11315f2e jne 0x11315f39 */
  if (!C.zf) goto L_11315f39;
  /* 11315f30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11315f34 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11315f36 ret 0x10 */
  ESPCHK(0x11315f20u, _esp0);
  ESP += 20; return;
L_11315f39:;
  /* 11315f39 push ebx */
  push32((uint32_t)(EBX));
  /* 11315f3a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11315f3c mov ebx, eax */
  EBX = (EAX);
  /* 11315f3e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11315f42 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11315f46 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315f48 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11315f4c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11315f4e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11315f50 pop ebx */
  EBX = (pop32());
  /* 11315f51 ret 0x10 */
  ESPCHK(0x11315f20u, _esp0);
  ESP += 20; return;
}

/* FUN_10015f60 @ 0x11315f60 (46 bytes, 18 insns) */
void f_11315f60(void) {
  FTRACE(0x11315f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11315f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11315f61 mov ebp, esp */
  EBP = (ESP);
  /* 11315f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11315f64 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11315f66 call 0x11309fb0 */
  push32(0x11315f6bu); f_11309fb0();
  /* 11315f6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315f71 push eax */
  push32((uint32_t)(EAX));
  /* 11315f72 call 0x11315f90 */
  push32(0x11315f77u); f_11315f90();
  /* 11315f77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315f7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11315f7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11315f7f call 0x1130a050 */
  push32(0x11315f84u); f_1130a050();
  /* 11315f84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315f87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11315f8a mov esp, ebp */
  ESP = (EBP);
  /* 11315f8c pop ebp */
  EBP = (pop32());
  /* 11315f8d ret  */
  ESPCHK(0x11315f60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11315f90 (198 bytes, 69 insns) */
void f_11315f90(void) {
  FTRACE(0x11315f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11315f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11315f91 mov ebp, esp */
  EBP = (ESP);
  /* 11315f93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11315f96 mov eax, dword ptr [0x113327a4] */
  EAX = (r32((uint32_t)(0x113327a4)));
  /* 11315f9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11315f9e cmp dword ptr [0x113342a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113342a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315fa5 jne 0x11315fae */
  if (!C.zf) goto L_11315fae;
  /* 11315fa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315fa9 jmp 0x11316052 */
  goto L_11316052;
L_11315fae:;
  /* 11315fae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315fb2 jne 0x11315fd6 */
  if (!C.zf) goto L_11315fd6;
  /* 11315fb4 cmp dword ptr [0x113327ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315fbb je 0x11315fd6 */
  if (C.zf) goto L_11315fd6;
  /* 11315fbd call 0x113160b0 */
  push32(0x11315fc2u); f_113160b0();
  /* 11315fc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11315fc4 je 0x11315fcd */
  if (C.zf) goto L_11315fcd;
  /* 11315fc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11315fc8 jmp 0x11316052 */
  goto L_11316052;
L_11315fcd:;
  /* 11315fcd mov ecx, dword ptr [0x113327a4] */
  ECX = (r32((uint32_t)(0x113327a4)));
  /* 11315fd3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11315fd6:;
  /* 11315fd6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315fda je 0x11316050 */
  if (C.zf) goto L_11316050;
  /* 11315fdc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315fe0 je 0x11316050 */
  if (C.zf) goto L_11316050;
  /* 11315fe2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11315fe5 push edx */
  push32((uint32_t)(EDX));
  /* 11315fe6 call 0x113093e0 */
  push32(0x11315febu); f_113093e0();
  /* 11315feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11315fee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11315ff1:;
  /* 11315ff1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11315ff4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11315ff7 je 0x11316050 */
  if (C.zf) goto L_11316050;
  /* 11315ff9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11315ffc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11315ffe push edx */
  push32((uint32_t)(EDX));
  /* 11315fff call 0x113093e0 */
  push32(0x11316004u); f_113093e0();
  /* 11316004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316007 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131600a jbe 0x11316045 */
  if ((C.cf||C.zf)) goto L_11316045;
  /* 1131600c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131600f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11316011 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11316014 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11316018 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131601b jne 0x11316045 */
  if (!C.zf) goto L_11316045;
  /* 1131601d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11316020 push ecx */
  push32((uint32_t)(ECX));
  /* 11316021 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316024 push edx */
  push32((uint32_t)(EDX));
  /* 11316025 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316028 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1131602a push ecx */
  push32((uint32_t)(ECX));
  /* 1131602b call 0x11316060 */
  push32(0x11316030u); f_11316060();
  /* 11316030 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316033 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11316035 jne 0x11316045 */
  if (!C.zf) goto L_11316045;
  /* 11316037 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131603a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1131603c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131603f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11316043 jmp 0x11316052 */
  goto L_11316052;
L_11316045:;
  /* 11316045 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316048 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131604b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1131604e jmp 0x11315ff1 */
  goto L_11315ff1;
L_11316050:;
  /* 11316050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11316052:;
  /* 11316052 mov esp, ebp */
  ESP = (EBP);
  /* 11316054 pop ebp */
  EBP = (pop32());
  /* 11316055 ret  */
  ESPCHK(0x11315f90u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11316060 (79 bytes, 32 insns) */
void f_11316060(void) {
  FTRACE(0x11316060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11316060 push ebp */
  push32((uint32_t)(EBP));
  /* 11316061 mov ebp, esp */
  EBP = (ESP);
  /* 11316063 push ecx */
  push32((uint32_t)(ECX));
  /* 11316064 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316068 jne 0x1131606e */
  if (!C.zf) goto L_1131606e;
  /* 1131606a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131606c jmp 0x113160ab */
  goto L_113160ab;
L_1131606e:;
  /* 1131606e mov eax, dword ptr [0x11333e64] */
  EAX = (r32((uint32_t)(0x11333e64)));
  /* 11316073 push eax */
  push32((uint32_t)(EAX));
  /* 11316074 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11316077 push ecx */
  push32((uint32_t)(ECX));
  /* 11316078 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1131607b push edx */
  push32((uint32_t)(EDX));
  /* 1131607c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131607f push eax */
  push32((uint32_t)(EAX));
  /* 11316080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316083 push ecx */
  push32((uint32_t)(ECX));
  /* 11316084 push 1 */
  push32((uint32_t)(0x1u));
  /* 11316086 mov edx, dword ptr [0x11334104] */
  EDX = (r32((uint32_t)(0x11334104)));
  /* 1131608c push edx */
  push32((uint32_t)(EDX));
  /* 1131608d call 0x11316160 */
  push32(0x11316092u); f_11316160();
  /* 11316092 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11316098 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131609c jne 0x113160a5 */
  if (!C.zf) goto L_113160a5;
  /* 1131609e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 113160a3 jmp 0x113160ab */
  goto L_113160ab;
L_113160a5:;
  /* 113160a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113160a8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_113160ab:;
  /* 113160ab mov esp, ebp */
  ESP = (EBP);
  /* 113160ad pop ebp */
  EBP = (pop32());
  /* 113160ae ret  */
  ESPCHK(0x11316060u, _esp0);
  ESP += 4; return;
}

/* FUN_100160b0 @ 0x113160b0 (174 bytes, 66 insns) */
void f_113160b0(void) {
  FTRACE(0x113160b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113160b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113160b1 mov ebp, esp */
  EBP = (ESP);
  /* 113160b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113160b6 mov eax, dword ptr [0x113327ac] */
  EAX = (r32((uint32_t)(0x113327ac)));
  /* 113160bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113160be:;
  /* 113160be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113160c1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113160c4 je 0x11316158 */
  if (C.zf) goto L_11316158;
  /* 113160ca push 0 */
  push32((uint32_t)(0x0u));
  /* 113160cc push 0 */
  push32((uint32_t)(0x0u));
  /* 113160ce push 0 */
  push32((uint32_t)(0x0u));
  /* 113160d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113160d2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113160d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113160d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113160d9 push eax */
  push32((uint32_t)(EAX));
  /* 113160da push 0 */
  push32((uint32_t)(0x0u));
  /* 113160dc push 1 */
  push32((uint32_t)(0x1u));
  /* 113160de call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x113160e4u);
  /* 113160e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113160e7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113160eb jne 0x113160f2 */
  if (!C.zf) goto L_113160f2;
  /* 113160ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113160f0 jmp 0x1131615a */
  goto L_1131615a;
L_113160f2:;
  /* 113160f2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 113160f4 push 0x1132ed1c */
  push32((uint32_t)(0x1132ed1cu));
  /* 113160f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113160fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113160fe push ecx */
  push32((uint32_t)(ECX));
  /* 113160ff call 0x113065b0 */
  push32(0x11316104u); f_113065b0();
  /* 11316104 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316107 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1131610a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131610e jne 0x11316115 */
  if (!C.zf) goto L_11316115;
  /* 11316110 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11316113 jmp 0x1131615a */
  goto L_1131615a;
L_11316115:;
  /* 11316115 push 0 */
  push32((uint32_t)(0x0u));
  /* 11316117 push 0 */
  push32((uint32_t)(0x0u));
  /* 11316119 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131611c push edx */
  push32((uint32_t)(EDX));
  /* 1131611d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316120 push eax */
  push32((uint32_t)(EAX));
  /* 11316121 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11316123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11316126 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11316128 push edx */
  push32((uint32_t)(EDX));
  /* 11316129 push 0 */
  push32((uint32_t)(0x0u));
  /* 1131612b push 1 */
  push32((uint32_t)(0x1u));
  /* 1131612d call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x11316133u);
  /* 11316133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11316135 jne 0x1131613c */
  if (!C.zf) goto L_1131613c;
  /* 11316137 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1131613a jmp 0x1131615a */
  goto L_1131615a;
L_1131613c:;
  /* 1131613c push 0 */
  push32((uint32_t)(0x0u));
  /* 1131613e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316141 push eax */
  push32((uint32_t)(EAX));
  /* 11316142 call 0x113165b0 */
  push32(0x11316147u); f_113165b0();
  /* 11316147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131614a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131614d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316150 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11316153 jmp 0x113160be */
  goto L_113160be;
L_11316158:;
  /* 11316158 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1131615a:;
  /* 1131615a mov esp, ebp */
  ESP = (EBP);
  /* 1131615c pop ebp */
  EBP = (pop32());
  /* 1131615d ret  */
  ESPCHK(0x113160b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016160 @ 0x11316160 (970 bytes, 340 insns) */
void f_11316160(void) {
  FTRACE(0x11316160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11316160 push ebp */
  push32((uint32_t)(EBP));
  /* 11316161 mov ebp, esp */
  EBP = (ESP);
  /* 11316163 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11316165 push 0x1132ed70 */
  push32((uint32_t)(0x1132ed70u));
  /* 1131616a push 0x1130f6b8 */
  push32((uint32_t)(0x1130f6b8u));
  /* 1131616f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11316175 push eax */
  push32((uint32_t)(EAX));
  /* 11316176 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1131617d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316180 push ebx */
  push32((uint32_t)(EBX));
  /* 11316181 push esi */
  push32((uint32_t)(ESI));
  /* 11316182 push edi */
  push32((uint32_t)(EDI));
  /* 11316183 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11316186 cmp dword ptr [0x11332aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131618d jne 0x113161e6 */
  if (!C.zf) goto L_113161e6;
  /* 1131618f push 1 */
  push32((uint32_t)(0x1u));
  /* 11316191 push 0x1132e3cc */
  push32((uint32_t)(0x1132e3ccu));
  /* 11316196 push 1 */
  push32((uint32_t)(0x1u));
  /* 11316198 push 0x1132e3cc */
  push32((uint32_t)(0x1132e3ccu));
  /* 1131619d push 0 */
  push32((uint32_t)(0x0u));
  /* 1131619f push 0 */
  push32((uint32_t)(0x0u));
  /* 113161a1 call dword ptr [0x113352e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352e0))), 0x113161a7u);
  /* 113161a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113161a9 je 0x113161b7 */
  if (C.zf) goto L_113161b7;
  /* 113161ab mov dword ptr [0x11332aec], 1 */
  w32((uint32_t)(0x11332aec), (0x1u));
  /* 113161b5 jmp 0x113161e6 */
  goto L_113161e6;
L_113161b7:;
  /* 113161b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113161b9 push 0x1132e3c8 */
  push32((uint32_t)(0x1132e3c8u));
  /* 113161be push 1 */
  push32((uint32_t)(0x1u));
  /* 113161c0 push 0x1132e3c8 */
  push32((uint32_t)(0x1132e3c8u));
  /* 113161c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113161c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113161c9 call dword ptr [0x113352ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352ec))), 0x113161cfu);
  /* 113161cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113161d1 je 0x113161df */
  if (C.zf) goto L_113161df;
  /* 113161d3 mov dword ptr [0x11332aec], 2 */
  w32((uint32_t)(0x11332aec), (0x2u));
  /* 113161dd jmp 0x113161e6 */
  goto L_113161e6;
L_113161df:;
  /* 113161df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113161e1 jmp 0x11316544 */
  goto L_11316544;
L_113161e6:;
  /* 113161e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113161ea jle 0x113161ff */
  if ((C.zf||C.sf!=C.of)) goto L_113161ff;
  /* 113161ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113161ef push eax */
  push32((uint32_t)(EAX));
  /* 113161f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113161f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113161f4 call 0x11316560 */
  push32(0x113161f9u); f_11316560();
  /* 113161f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113161fc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_113161ff:;
  /* 113161ff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316203 jle 0x11316218 */
  if ((C.zf||C.sf!=C.of)) goto L_11316218;
  /* 11316205 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11316208 push edx */
  push32((uint32_t)(EDX));
  /* 11316209 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1131620c push eax */
  push32((uint32_t)(EAX));
  /* 1131620d call 0x11316560 */
  push32(0x11316212u); f_11316560();
  /* 11316212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316215 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11316218:;
  /* 11316218 cmp dword ptr [0x11332aec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11332aec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131621f jne 0x11316244 */
  if (!C.zf) goto L_11316244;
  /* 11316221 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11316224 push ecx */
  push32((uint32_t)(ECX));
  /* 11316225 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11316228 push edx */
  push32((uint32_t)(EDX));
  /* 11316229 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131622c push eax */
  push32((uint32_t)(EAX));
  /* 1131622d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11316230 push ecx */
  push32((uint32_t)(ECX));
  /* 11316231 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11316234 push edx */
  push32((uint32_t)(EDX));
  /* 11316235 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316238 push eax */
  push32((uint32_t)(EAX));
  /* 11316239 call dword ptr [0x113352ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352ec))), 0x1131623fu);
  /* 1131623f jmp 0x11316544 */
  goto L_11316544;
L_11316244:;
  /* 11316244 cmp dword ptr [0x11332aec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11332aec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131624b jne 0x11316542 */
  if (!C.zf) goto L_11316542;
  /* 11316251 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316255 jne 0x11316260 */
  if (!C.zf) goto L_11316260;
  /* 11316257 mov ecx, dword ptr [0x11332998] */
  ECX = (r32((uint32_t)(0x11332998)));
  /* 1131625d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11316260:;
  /* 11316260 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316264 je 0x11316270 */
  if (C.zf) goto L_11316270;
  /* 11316266 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131626a jne 0x113163ec */
  if (!C.zf) goto L_113163ec;
L_11316270:;
  /* 11316270 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11316273 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316276 jne 0x11316282 */
  if (!C.zf) goto L_11316282;
  /* 11316278 mov eax, 2 */
  EAX = (0x2u);
  /* 1131627d jmp 0x11316544 */
  goto L_11316544;
L_11316282:;
  /* 11316282 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316286 jle 0x11316292 */
  if ((C.zf||C.sf!=C.of)) goto L_11316292;
  /* 11316288 mov eax, 1 */
  EAX = (0x1u);
  /* 1131628d jmp 0x11316544 */
  goto L_11316544;
L_11316292:;
  /* 11316292 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316296 jle 0x113162a2 */
  if ((C.zf||C.sf!=C.of)) goto L_113162a2;
  /* 11316298 mov eax, 3 */
  EAX = (0x3u);
  /* 1131629d jmp 0x11316544 */
  goto L_11316544;
L_113162a2:;
  /* 113162a2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 113162a5 push eax */
  push32((uint32_t)(EAX));
  /* 113162a6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 113162a9 push ecx */
  push32((uint32_t)(ECX));
  /* 113162aa call dword ptr [0x11335338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335338))), 0x113162b0u);
  /* 113162b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113162b2 jne 0x113162bb */
  if (!C.zf) goto L_113162bb;
  /* 113162b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113162b6 jmp 0x11316544 */
  goto L_11316544;
L_113162bb:;
  /* 113162bb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113162bf jne 0x113162c7 */
  if (!C.zf) goto L_113162c7;
  /* 113162c1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113162c5 je 0x113162f4 */
  if (C.zf) goto L_113162f4;
L_113162c7:;
  /* 113162c7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113162cb jne 0x113162d3 */
  if (!C.zf) goto L_113162d3;
  /* 113162cd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113162d1 je 0x113162f4 */
  if (C.zf) goto L_113162f4;
L_113162d3:;
  /* 113162d3 push 0x1132ed30 */
  push32((uint32_t)(0x1132ed30u));
  /* 113162d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113162da push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 113162df push 0x1132ed28 */
  push32((uint32_t)(0x1132ed28u));
  /* 113162e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113162e6 call 0x11305670 */
  push32(0x113162ebu); f_11305670();
  /* 113162eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113162ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113162f1 jne 0x113162f4 */
  if (!C.zf) goto L_113162f4;
  /* 113162f3 int3  */
  x86_unimpl("int3 @ 0x113162f3");
L_113162f4:;
  /* 113162f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113162f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113162f8 jne 0x113162bb */
  if (!C.zf) goto L_113162bb;
  /* 113162fa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113162fe jle 0x11316373 */
  if ((C.zf||C.sf!=C.of)) goto L_11316373;
  /* 11316300 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316304 jae 0x11316310 */
  if (!C.cf) goto L_11316310;
  /* 11316306 mov eax, 3 */
  EAX = (0x3u);
  /* 1131630b jmp 0x11316544 */
  goto L_11316544;
L_11316310:;
  /* 11316310 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11316313 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11316316 jmp 0x11316321 */
  goto L_11316321;
L_11316318:;
  /* 11316318 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1131631b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131631e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11316321:;
  /* 11316321 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11316324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11316326 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11316328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131632a je 0x11316369 */
  if (C.zf) goto L_11316369;
  /* 1131632c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1131632f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11316331 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11316334 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11316336 je 0x11316369 */
  if (C.zf) goto L_11316369;
  /* 11316338 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131633b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1131633d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1131633f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11316342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11316344 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11316346 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316348 jl 0x11316367 */
  if ((C.sf!=C.of)) goto L_11316367;
  /* 1131634a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131634d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1131634f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11316351 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11316354 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11316356 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11316359 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131635b jg 0x11316367 */
  if ((!C.zf&&C.sf==C.of)) goto L_11316367;
  /* 1131635d mov eax, 2 */
  EAX = (0x2u);
  /* 11316362 jmp 0x11316544 */
  goto L_11316544;
L_11316367:;
  /* 11316367 jmp 0x11316318 */
  goto L_11316318;
L_11316369:;
  /* 11316369 mov eax, 3 */
  EAX = (0x3u);
  /* 1131636e jmp 0x11316544 */
  goto L_11316544;
L_11316373:;
  /* 11316373 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316377 jle 0x113163ec */
  if ((C.zf||C.sf!=C.of)) goto L_113163ec;
  /* 11316379 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131637d jae 0x11316389 */
  if (!C.cf) goto L_11316389;
  /* 1131637f mov eax, 1 */
  EAX = (0x1u);
  /* 11316384 jmp 0x11316544 */
  goto L_11316544;
L_11316389:;
  /* 11316389 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1131638c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1131638f jmp 0x1131639a */
  goto L_1131639a;
L_11316391:;
  /* 11316391 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11316394 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316397 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1131639a:;
  /* 1131639a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1131639d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1131639f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113163a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113163a3 je 0x113163e2 */
  if (C.zf) goto L_113163e2;
  /* 113163a5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 113163a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113163aa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113163ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113163af je 0x113163e2 */
  if (C.zf) goto L_113163e2;
  /* 113163b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113163b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113163b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113163b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113163bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113163bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113163bf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113163c1 jl 0x113163e0 */
  if ((C.sf!=C.of)) goto L_113163e0;
  /* 113163c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113163c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113163c8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113163ca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 113163cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113163cf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113163d2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113163d4 jg 0x113163e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_113163e0;
  /* 113163d6 mov eax, 2 */
  EAX = (0x2u);
  /* 113163db jmp 0x11316544 */
  goto L_11316544;
L_113163e0:;
  /* 113163e0 jmp 0x11316391 */
  goto L_11316391;
L_113163e2:;
  /* 113163e2 mov eax, 1 */
  EAX = (0x1u);
  /* 113163e7 jmp 0x11316544 */
  goto L_11316544;
L_113163ec:;
  /* 113163ec push 0 */
  push32((uint32_t)(0x0u));
  /* 113163ee push 0 */
  push32((uint32_t)(0x0u));
  /* 113163f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113163f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113163f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113163f7 push edx */
  push32((uint32_t)(EDX));
  /* 113163f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 113163fa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113163fd push eax */
  push32((uint32_t)(EAX));
  /* 113163fe call dword ptr [0x1133532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133532c))), 0x11316404u);
  /* 11316404 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11316407 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131640b jne 0x11316414 */
  if (!C.zf) goto L_11316414;
  /* 1131640d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131640f jmp 0x11316544 */
  goto L_11316544;
L_11316414:;
  /* 11316414 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1131641b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1131641e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11316420 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316423 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11316425 call 0x11309750 */
  push32(0x1131642au); f_11309750();
  /* 1131642a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1131642d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11316430 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11316433 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11316436 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1131643d jmp 0x11316456 */
  goto L_11316456;
  /* 1131643f mov eax, 1 */
  EAX = (0x1u);
  /* 11316444 ret  */
  ESPCHK(0x11316160u, _esp0);
  ESP += 4; return;
  /* 11316445 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11316448 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1131644f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11316456:;
  /* 11316456 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131645a jne 0x11316463 */
  if (!C.zf) goto L_11316463;
  /* 1131645c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131645e jmp 0x11316544 */
  goto L_11316544;
L_11316463:;
  /* 11316463 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11316466 push edx */
  push32((uint32_t)(EDX));
  /* 11316467 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1131646a push eax */
  push32((uint32_t)(EAX));
  /* 1131646b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131646e push ecx */
  push32((uint32_t)(ECX));
  /* 1131646f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11316472 push edx */
  push32((uint32_t)(EDX));
  /* 11316473 push 1 */
  push32((uint32_t)(0x1u));
  /* 11316475 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11316478 push eax */
  push32((uint32_t)(EAX));
  /* 11316479 call dword ptr [0x1133532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133532c))), 0x1131647fu);
  /* 1131647f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11316481 jne 0x1131648a */
  if (!C.zf) goto L_1131648a;
  /* 11316483 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11316485 jmp 0x11316544 */
  goto L_11316544;
L_1131648a:;
  /* 1131648a push 0 */
  push32((uint32_t)(0x0u));
  /* 1131648c push 0 */
  push32((uint32_t)(0x0u));
  /* 1131648e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11316491 push ecx */
  push32((uint32_t)(ECX));
  /* 11316492 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11316495 push edx */
  push32((uint32_t)(EDX));
  /* 11316496 push 9 */
  push32((uint32_t)(0x9u));
  /* 11316498 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1131649b push eax */
  push32((uint32_t)(EAX));
  /* 1131649c call dword ptr [0x1133532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133532c))), 0x113164a2u);
  /* 113164a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113164a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113164a9 jne 0x113164b2 */
  if (!C.zf) goto L_113164b2;
  /* 113164ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113164ad jmp 0x11316544 */
  goto L_11316544;
L_113164b2:;
  /* 113164b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113164b9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113164bc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113164be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113164c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113164c3 call 0x11309750 */
  push32(0x113164c8u); f_11309750();
  /* 113164c8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 113164cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113164ce mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 113164d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 113164d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113164db jmp 0x113164f4 */
  goto L_113164f4;
  /* 113164dd mov eax, 1 */
  EAX = (0x1u);
  /* 113164e2 ret  */
  ESPCHK(0x11316160u, _esp0);
  ESP += 4; return;
  /* 113164e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113164e6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 113164ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113164f4:;
  /* 113164f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113164f8 jne 0x113164fe */
  if (!C.zf) goto L_113164fe;
  /* 113164fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113164fc jmp 0x11316544 */
  goto L_11316544;
L_113164fe:;
  /* 113164fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11316501 push edx */
  push32((uint32_t)(EDX));
  /* 11316502 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11316505 push eax */
  push32((uint32_t)(EAX));
  /* 11316506 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11316509 push ecx */
  push32((uint32_t)(ECX));
  /* 1131650a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1131650d push edx */
  push32((uint32_t)(EDX));
  /* 1131650e push 1 */
  push32((uint32_t)(0x1u));
  /* 11316510 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11316513 push eax */
  push32((uint32_t)(EAX));
  /* 11316514 call dword ptr [0x1133532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133532c))), 0x1131651au);
  /* 1131651a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131651c jne 0x11316522 */
  if (!C.zf) goto L_11316522;
  /* 1131651e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11316520 jmp 0x11316544 */
  goto L_11316544;
L_11316522:;
  /* 11316522 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11316525 push ecx */
  push32((uint32_t)(ECX));
  /* 11316526 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11316529 push edx */
  push32((uint32_t)(EDX));
  /* 1131652a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1131652d push eax */
  push32((uint32_t)(EAX));
  /* 1131652e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11316531 push ecx */
  push32((uint32_t)(ECX));
  /* 11316532 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11316535 push edx */
  push32((uint32_t)(EDX));
  /* 11316536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316539 push eax */
  push32((uint32_t)(EAX));
  /* 1131653a call dword ptr [0x113352e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352e0))), 0x11316540u);
  /* 11316540 jmp 0x11316544 */
  goto L_11316544;
L_11316542:;
  /* 11316542 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11316544:;
  /* 11316544 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11316547 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1131654a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11316551 pop edi */
  EDI = (pop32());
  /* 11316552 pop esi */
  ESI = (pop32());
  /* 11316553 pop ebx */
  EBX = (pop32());
  /* 11316554 mov esp, ebp */
  ESP = (EBP);
  /* 11316556 pop ebp */
  EBP = (pop32());
  /* 11316557 ret  */
  ESPCHK(0x11316160u, _esp0);
  ESP += 4; return;
}

/* FUN_10016560 @ 0x11316560 (80 bytes, 32 insns) */
void f_11316560(void) {
  FTRACE(0x11316560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11316560 push ebp */
  push32((uint32_t)(EBP));
  /* 11316561 mov ebp, esp */
  EBP = (ESP);
  /* 11316563 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11316566 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11316569 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1131656c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131656f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11316572:;
  /* 11316572 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316575 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316578 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1131657b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1131657e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11316580 je 0x11316597 */
  if (C.zf) goto L_11316597;
  /* 11316582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11316585 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11316588 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1131658a je 0x11316597 */
  if (C.zf) goto L_11316597;
  /* 1131658c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131658f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316592 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11316595 jmp 0x11316572 */
  goto L_11316572;
L_11316597:;
  /* 11316597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131659a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1131659d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1131659f jne 0x113165a9 */
  if (!C.zf) goto L_113165a9;
  /* 113165a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113165a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113165a7 jmp 0x113165ac */
  goto L_113165ac;
L_113165a9:;
  /* 113165a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_113165ac:;
  /* 113165ac mov esp, ebp */
  ESP = (EBP);
  /* 113165ae pop ebp */
  EBP = (pop32());
  /* 113165af ret  */
  ESPCHK(0x11316560u, _esp0);
  ESP += 4; return;
}

/* FUN_100165b0 @ 0x113165b0 (736 bytes, 224 insns) */
void f_113165b0(void) {
  FTRACE(0x113165b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113165b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113165b1 mov ebp, esp */
  EBP = (ESP);
  /* 113165b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113165b6 push esi */
  push32((uint32_t)(ESI));
  /* 113165b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113165bb je 0x113165dc */
  if (C.zf) goto L_113165dc;
  /* 113165bd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 113165bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113165c2 push eax */
  push32((uint32_t)(EAX));
  /* 113165c3 call 0x11316a00 */
  push32(0x113165c8u); f_11316a00();
  /* 113165c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113165cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113165ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113165d2 je 0x113165dc */
  if (C.zf) goto L_113165dc;
  /* 113165d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113165d7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113165da jne 0x113165e4 */
  if (!C.zf) goto L_113165e4;
L_113165dc:;
  /* 113165dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113165df jmp 0x1131688b */
  goto L_1131688b;
L_113165e4:;
  /* 113165e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113165e7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113165eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113165ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113165ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113165f0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113165f3 mov ecx, dword ptr [0x113327a4] */
  ECX = (r32((uint32_t)(0x113327a4)));
  /* 113165f9 cmp ecx, dword ptr [0x113327a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113327a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113165ff jne 0x11316615 */
  if (!C.zf) goto L_11316615;
  /* 11316601 mov edx, dword ptr [0x113327a4] */
  EDX = (r32((uint32_t)(0x113327a4)));
  /* 11316607 push edx */
  push32((uint32_t)(EDX));
  /* 11316608 call 0x11316910 */
  push32(0x1131660du); f_11316910();
  /* 1131660d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316610 mov dword ptr [0x113327a4], eax */
  w32((uint32_t)(0x113327a4), (EAX));
L_11316615:;
  /* 11316615 cmp dword ptr [0x113327a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131661c jne 0x113166d5 */
  if (!C.zf) goto L_113166d5;
  /* 11316622 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316626 je 0x11316647 */
  if (C.zf) goto L_11316647;
  /* 11316628 cmp dword ptr [0x113327ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131662f je 0x11316647 */
  if (C.zf) goto L_11316647;
  /* 11316631 call 0x113160b0 */
  push32(0x11316636u); f_113160b0();
  /* 11316636 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11316638 je 0x11316642 */
  if (C.zf) goto L_11316642;
  /* 1131663a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1131663d jmp 0x1131688b */
  goto L_1131688b;
L_11316642:;
  /* 11316642 jmp 0x113166d5 */
  goto L_113166d5;
L_11316647:;
  /* 11316647 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131664b je 0x11316654 */
  if (C.zf) goto L_11316654;
  /* 1131664d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131664f jmp 0x1131688b */
  goto L_1131688b;
L_11316654:;
  /* 11316654 cmp dword ptr [0x113327a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131665b jne 0x11316694 */
  if (!C.zf) goto L_11316694;
  /* 1131665d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11316662 push 0x1132ed88 */
  push32((uint32_t)(0x1132ed88u));
  /* 11316667 push 2 */
  push32((uint32_t)(0x2u));
  /* 11316669 push 4 */
  push32((uint32_t)(0x4u));
  /* 1131666b call 0x113065b0 */
  push32(0x11316670u); f_113065b0();
  /* 11316670 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316673 mov dword ptr [0x113327a4], eax */
  w32((uint32_t)(0x113327a4), (EAX));
  /* 11316678 cmp dword ptr [0x113327a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131667f jne 0x11316689 */
  if (!C.zf) goto L_11316689;
  /* 11316681 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11316684 jmp 0x1131688b */
  goto L_1131688b;
L_11316689:;
  /* 11316689 mov eax, dword ptr [0x113327a4] */
  EAX = (r32((uint32_t)(0x113327a4)));
  /* 1131668e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11316694:;
  /* 11316694 cmp dword ptr [0x113327ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131669b jne 0x113166d5 */
  if (!C.zf) goto L_113166d5;
  /* 1131669d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 113166a2 push 0x1132ed88 */
  push32((uint32_t)(0x1132ed88u));
  /* 113166a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113166a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 113166ab call 0x113065b0 */
  push32(0x113166b0u); f_113065b0();
  /* 113166b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113166b3 mov dword ptr [0x113327ac], eax */
  w32((uint32_t)(0x113327ac), (EAX));
  /* 113166b8 cmp dword ptr [0x113327ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113166bf jne 0x113166c9 */
  if (!C.zf) goto L_113166c9;
  /* 113166c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113166c4 jmp 0x1131688b */
  goto L_1131688b;
L_113166c9:;
  /* 113166c9 mov ecx, dword ptr [0x113327ac] */
  ECX = (r32((uint32_t)(0x113327ac)));
  /* 113166cf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_113166d5:;
  /* 113166d5 mov edx, dword ptr [0x113327a4] */
  EDX = (r32((uint32_t)(0x113327a4)));
  /* 113166db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113166de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113166e1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113166e4 push eax */
  push32((uint32_t)(EAX));
  /* 113166e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113166e8 push ecx */
  push32((uint32_t)(ECX));
  /* 113166e9 call 0x11316890 */
  push32(0x113166eeu); f_11316890();
  /* 113166ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113166f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113166f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113166f8 jl 0x11316791 */
  if ((C.sf!=C.of)) goto L_11316791;
  /* 113166fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11316701 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316704 je 0x11316791 */
  if (C.zf) goto L_11316791;
  /* 1131670a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131670e je 0x11316783 */
  if (C.zf) goto L_11316783;
  /* 11316710 push 2 */
  push32((uint32_t)(0x2u));
  /* 11316712 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316715 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11316718 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1131671b push edx */
  push32((uint32_t)(EDX));
  /* 1131671c call 0x11307040 */
  push32(0x11316721u); f_11307040();
  /* 11316721 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316724 jmp 0x1131672f */
  goto L_1131672f;
L_11316726:;
  /* 11316726 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316729 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131672c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1131672f:;
  /* 1131672f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316732 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11316735 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316739 je 0x11316750 */
  if (C.zf) goto L_11316750;
  /* 1131673b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131673e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11316741 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316744 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11316747 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1131674b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1131674e jmp 0x11316726 */
  goto L_11316726;
L_11316750:;
  /* 11316750 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11316755 push 0x1132ed88 */
  push32((uint32_t)(0x1132ed88u));
  /* 1131675a push 2 */
  push32((uint32_t)(0x2u));
  /* 1131675c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131675f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11316762 push eax */
  push32((uint32_t)(EAX));
  /* 11316763 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11316766 push ecx */
  push32((uint32_t)(ECX));
  /* 11316767 call 0x11306a40 */
  push32(0x1131676cu); f_11306a40();
  /* 1131676c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131676f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11316772 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316776 je 0x11316781 */
  if (C.zf) goto L_11316781;
  /* 11316778 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131677b mov dword ptr [0x113327a4], edx */
  w32((uint32_t)(0x113327a4), (EDX));
L_11316781:;
  /* 11316781 jmp 0x1131678f */
  goto L_1131678f;
L_11316783:;
  /* 11316783 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316786 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11316789 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131678c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1131678f:;
  /* 1131678f jmp 0x11316804 */
  goto L_11316804;
L_11316791:;
  /* 11316791 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316795 jne 0x113167fd */
  if (!C.zf) goto L_113167fd;
  /* 11316797 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131679b jge 0x113167a5 */
  if ((C.sf==C.of)) goto L_113167a5;
  /* 1131679d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113167a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113167a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113167a5:;
  /* 113167a5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 113167aa push 0x1132ed88 */
  push32((uint32_t)(0x1132ed88u));
  /* 113167af push 2 */
  push32((uint32_t)(0x2u));
  /* 113167b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113167b4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 113167bb push edx */
  push32((uint32_t)(EDX));
  /* 113167bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113167bf push eax */
  push32((uint32_t)(EAX));
  /* 113167c0 call 0x11306a40 */
  push32(0x113167c5u); f_11306a40();
  /* 113167c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113167c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113167cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113167cf jne 0x113167d9 */
  if (!C.zf) goto L_113167d9;
  /* 113167d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113167d4 jmp 0x1131688b */
  goto L_1131688b;
L_113167d9:;
  /* 113167d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113167dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113167df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113167e2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 113167e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113167e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113167eb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 113167f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113167f6 mov dword ptr [0x113327a4], eax */
  w32((uint32_t)(0x113327a4), (EAX));
  /* 113167fb jmp 0x11316804 */
  goto L_11316804;
L_113167fd:;
  /* 113167fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113167ff jmp 0x1131688b */
  goto L_1131688b;
L_11316804:;
  /* 11316804 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316808 je 0x11316889 */
  if (C.zf) goto L_11316889;
  /* 1131680a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1131680f push 0x1132ed88 */
  push32((uint32_t)(0x1132ed88u));
  /* 11316814 push 2 */
  push32((uint32_t)(0x2u));
  /* 11316816 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316819 push ecx */
  push32((uint32_t)(ECX));
  /* 1131681a call 0x113093e0 */
  push32(0x1131681fu); f_113093e0();
  /* 1131681f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316822 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316825 push eax */
  push32((uint32_t)(EAX));
  /* 11316826 call 0x113065b0 */
  push32(0x1131682bu); f_113065b0();
  /* 1131682b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131682e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11316831 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316835 je 0x11316889 */
  if (C.zf) goto L_11316889;
  /* 11316837 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131683a push edx */
  push32((uint32_t)(EDX));
  /* 1131683b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1131683e push eax */
  push32((uint32_t)(EAX));
  /* 1131683f call 0x11309560 */
  push32(0x11316844u); f_11309560();
  /* 11316844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316847 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1131684a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1131684d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11316850 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316852 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11316855 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11316858 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1131685b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131685e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316861 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11316864 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11316867 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11316869 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1131686b not edx */
  EDX = (~(EDX));
  /* 1131686d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11316870 push edx */
  push32((uint32_t)(EDX));
  /* 11316871 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11316874 push eax */
  push32((uint32_t)(EAX));
  /* 11316875 call dword ptr [0x113352dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352dc))), 0x1131687bu);
  /* 1131687b push 2 */
  push32((uint32_t)(0x2u));
  /* 1131687d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11316880 push ecx */
  push32((uint32_t)(ECX));
  /* 11316881 call 0x11307040 */
  push32(0x11316886u); f_11307040();
  /* 11316886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11316889:;
  /* 11316889 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1131688b:;
  /* 1131688b pop esi */
  ESI = (pop32());
  /* 1131688c mov esp, ebp */
  ESP = (EBP);
  /* 1131688e pop ebp */
  EBP = (pop32());
  /* 1131688f ret  */
  ESPCHK(0x113165b0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11316890 (124 bytes, 47 insns) */
void f_11316890(void) {
  FTRACE(0x11316890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11316890 push ebp */
  push32((uint32_t)(EBP));
  /* 11316891 mov ebp, esp */
  EBP = (ESP);
  /* 11316893 push ecx */
  push32((uint32_t)(ECX));
  /* 11316894 mov eax, dword ptr [0x113327a4] */
  EAX = (r32((uint32_t)(0x113327a4)));
  /* 11316899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1131689c jmp 0x113168a7 */
  goto L_113168a7;
L_1131689e:;
  /* 1131689e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113168a1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113168a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113168a7:;
  /* 113168a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113168aa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113168ad je 0x113168fa */
  if (C.zf) goto L_113168fa;
  /* 113168af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113168b2 push eax */
  push32((uint32_t)(EAX));
  /* 113168b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113168b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113168b8 push edx */
  push32((uint32_t)(EDX));
  /* 113168b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113168bc push eax */
  push32((uint32_t)(EAX));
  /* 113168bd call 0x11316060 */
  push32(0x113168c2u); f_11316060();
  /* 113168c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113168c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113168c7 jne 0x113168f8 */
  if (!C.zf) goto L_113168f8;
  /* 113168c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113168cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113168ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113168d1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 113168d5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113168d8 je 0x113168ea */
  if (C.zf) goto L_113168ea;
  /* 113168da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113168dd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113168df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113168e2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 113168e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113168e8 jne 0x113168f8 */
  if (!C.zf) goto L_113168f8;
L_113168ea:;
  /* 113168ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113168ed sub eax, dword ptr [0x113327a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113327a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113168f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 113168f6 jmp 0x11316908 */
  goto L_11316908;
L_113168f8:;
  /* 113168f8 jmp 0x1131689e */
  goto L_1131689e;
L_113168fa:;
  /* 113168fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113168fd sub eax, dword ptr [0x113327a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113327a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11316903 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11316906 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11316908:;
  /* 11316908 mov esp, ebp */
  ESP = (EBP);
  /* 1131690a pop ebp */
  EBP = (pop32());
  /* 1131690b ret  */
  ESPCHK(0x11316890u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11316910 (238 bytes, 80 insns) */
void f_11316910(void) {
  FTRACE(0x11316910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11316910 push ebp */
  push32((uint32_t)(EBP));
  /* 11316911 mov ebp, esp */
  EBP = (ESP);
  /* 11316913 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11316916 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1131691d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316920 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11316923 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316927 jne 0x11316930 */
  if (!C.zf) goto L_11316930;
  /* 11316929 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131692b jmp 0x113169fa */
  goto L_113169fa;
L_11316930:;
  /* 11316930 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11316933 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11316935 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11316938 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131693b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1131693e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11316940 je 0x1131694d */
  if (C.zf) goto L_1131694d;
  /* 11316942 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11316945 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316948 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1131694b jmp 0x11316930 */
  goto L_11316930;
L_1131694d:;
  /* 1131694d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11316952 push 0x1132ed88 */
  push32((uint32_t)(0x1132ed88u));
  /* 11316957 push 2 */
  push32((uint32_t)(0x2u));
  /* 11316959 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1131695c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11316963 push eax */
  push32((uint32_t)(EAX));
  /* 11316964 call 0x113065b0 */
  push32(0x11316969u); f_113065b0();
  /* 11316969 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131696c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1131696f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11316972 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11316975 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316979 jne 0x11316985 */
  if (!C.zf) goto L_11316985;
  /* 1131697b push 9 */
  push32((uint32_t)(0x9u));
  /* 1131697d call 0x11305520 */
  push32(0x11316982u); f_11305520();
  /* 11316982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11316985:;
  /* 11316985 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316988 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1131698b:;
  /* 1131698b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131698e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316991 je 0x113169ee */
  if (C.zf) goto L_113169ee;
  /* 11316993 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11316998 push 0x1132ed88 */
  push32((uint32_t)(0x1132ed88u));
  /* 1131699d push 2 */
  push32((uint32_t)(0x2u));
  /* 1131699f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113169a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113169a4 push edx */
  push32((uint32_t)(EDX));
  /* 113169a5 call 0x113093e0 */
  push32(0x113169aau); f_113093e0();
  /* 113169aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113169ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113169b0 push eax */
  push32((uint32_t)(EAX));
  /* 113169b1 call 0x113065b0 */
  push32(0x113169b6u); f_113065b0();
  /* 113169b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113169b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113169bc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113169be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113169c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113169c4 je 0x113169da */
  if (C.zf) goto L_113169da;
  /* 113169c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113169c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113169cb push ecx */
  push32((uint32_t)(ECX));
  /* 113169cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113169cf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113169d1 push eax */
  push32((uint32_t)(EAX));
  /* 113169d2 call 0x11309560 */
  push32(0x113169d7u); f_11309560();
  /* 113169d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113169da:;
  /* 113169da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113169dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113169e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113169e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113169e6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113169e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113169ec jmp 0x1131698b */
  goto L_1131698b;
L_113169ee:;
  /* 113169ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113169f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113169f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113169fa:;
  /* 113169fa mov esp, ebp */
  ESP = (EBP);
  /* 113169fc pop ebp */
  EBP = (pop32());
  /* 113169fd ret  */
  ESPCHK(0x11316910u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a00 @ 0x11316a00 (237 bytes, 81 insns) */
void f_11316a00(void) {
  FTRACE(0x11316a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11316a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11316a01 mov ebp, esp */
  EBP = (ESP);
  /* 11316a03 push ecx */
  push32((uint32_t)(ECX));
  /* 11316a04 cmp dword ptr [0x11333eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11333eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316a0b jne 0x11316a22 */
  if (!C.zf) goto L_11316a22;
  /* 11316a0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11316a10 push eax */
  push32((uint32_t)(EAX));
  /* 11316a11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316a14 push ecx */
  push32((uint32_t)(ECX));
  /* 11316a15 call 0x11316b00 */
  push32(0x11316a1au); f_11316b00();
  /* 11316a1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316a1d jmp 0x11316ae9 */
  goto L_11316ae9;
L_11316a22:;
  /* 11316a22 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11316a24 call 0x11309fb0 */
  push32(0x11316a29u); f_11309fb0();
  /* 11316a29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316a2c jmp 0x11316a37 */
  goto L_11316a37;
L_11316a2e:;
  /* 11316a2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316a31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316a34 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11316a37:;
  /* 11316a37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316a3a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11316a3e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11316a42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11316a45 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11316a4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11316a4d je 0x11316acb */
  if (C.zf) goto L_11316acb;
  /* 11316a4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11316a52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11316a57 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11316a59 mov cl, byte ptr [eax + 0x11334001] */
  CL = (r8((uint32_t)(EAX + 0x11334001)));
  /* 11316a5f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11316a62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11316a64 je 0x11316ab6 */
  if (C.zf) goto L_11316ab6;
  /* 11316a66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316a69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316a6c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11316a6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316a72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11316a74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11316a76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11316a78 jne 0x11316a88 */
  if (!C.zf) goto L_11316a88;
  /* 11316a7a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11316a7c call 0x1130a050 */
  push32(0x11316a81u); f_1130a050();
  /* 11316a81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11316a86 jmp 0x11316ae9 */
  goto L_11316ae9;
L_11316a88:;
  /* 11316a88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11316a8b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11316a91 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11316a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316a97 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11316a99 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11316a9b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11316a9d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316aa0 jne 0x11316ab4 */
  if (!C.zf) goto L_11316ab4;
  /* 11316aa2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11316aa4 call 0x1130a050 */
  push32(0x11316aa9u); f_1130a050();
  /* 11316aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316aac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316aaf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11316ab2 jmp 0x11316ae9 */
  goto L_11316ae9;
L_11316ab4:;
  /* 11316ab4 jmp 0x11316ac6 */
  goto L_11316ac6;
L_11316ab6:;
  /* 11316ab6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11316ab9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11316abf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316ac2 jne 0x11316ac6 */
  if (!C.zf) goto L_11316ac6;
  /* 11316ac4 jmp 0x11316acb */
  goto L_11316acb;
L_11316ac6:;
  /* 11316ac6 jmp 0x11316a2e */
  goto L_11316a2e;
L_11316acb:;
  /* 11316acb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11316acd call 0x1130a050 */
  push32(0x11316ad2u); f_1130a050();
  /* 11316ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11316ad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11316ad8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11316add cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11316ae0 jne 0x11316ae7 */
  if (!C.zf) goto L_11316ae7;
  /* 11316ae2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11316ae5 jmp 0x11316ae9 */
  goto L_11316ae9;
L_11316ae7:;
  /* 11316ae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11316ae9:;
  /* 11316ae9 mov esp, ebp */
  ESP = (EBP);
  /* 11316aeb pop ebp */
  EBP = (pop32());
  /* 11316aec ret  */
  ESPCHK(0x11316a00u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11316b00 (193 bytes, 87 insns) */
void f_11316b00(void) {
  FTRACE(0x11316b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11316b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11316b02 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11316b06 push ebx */
  push32((uint32_t)(EBX));
  /* 11316b07 mov ebx, eax */
  EBX = (EAX);
  /* 11316b09 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11316b0c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11316b10 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11316b16 je 0x11316b2b */
  if (C.zf) goto L_11316b2b;
L_11316b18:;
  /* 11316b18 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11316b1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11316b1b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11316b1d je 0x11316af0 */
  if (C.zf) { jmp_ind(0x11316af0u); return; }
  /* 11316b1f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11316b21 je 0x11316b74 */
  if (C.zf) goto L_11316b74;
  /* 11316b23 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11316b29 jne 0x11316b18 */
  if (!C.zf) goto L_11316b18;
L_11316b2b:;
  /* 11316b2b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11316b2d push edi */
  push32((uint32_t)(EDI));
  /* 11316b2e mov eax, ebx */
  EAX = (EBX);
  /* 11316b30 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11316b33 push esi */
  push32((uint32_t)(ESI));
  /* 11316b34 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11316b36:;
  /* 11316b36 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11316b38 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11316b3d mov eax, ecx */
  EAX = (ECX);
  /* 11316b3f mov esi, edi */
  ESI = (EDI);
  /* 11316b41 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11316b43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11316b45 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11316b47 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11316b4a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11316b4d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11316b4f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11316b51 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11316b54 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11316b5a jne 0x11316b78 */
  if (!C.zf) goto L_11316b78;
  /* 11316b5c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11316b61 je 0x11316b36 */
  if (C.zf) goto L_11316b36;
  /* 11316b63 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11316b68 jne 0x11316b72 */
  if (!C.zf) goto L_11316b72;
  /* 11316b6a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11316b70 jne 0x11316b36 */
  if (!C.zf) goto L_11316b36;
L_11316b72:;
  /* 11316b72 pop esi */
  ESI = (pop32());
  /* 11316b73 pop edi */
  EDI = (pop32());
L_11316b74:;
  /* 11316b74 pop ebx */
  EBX = (pop32());
  /* 11316b75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11316b77 ret  */
  ESPCHK(0x11316b00u, _esp0);
  ESP += 4; return;
L_11316b78:;
  /* 11316b78 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11316b7b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11316b7d je 0x11316bb5 */
  if (C.zf) goto L_11316bb5;
  /* 11316b7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11316b81 je 0x11316b72 */
  if (C.zf) goto L_11316b72;
  /* 11316b83 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11316b85 je 0x11316bae */
  if (C.zf) goto L_11316bae;
  /* 11316b87 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11316b89 je 0x11316b72 */
  if (C.zf) goto L_11316b72;
  /* 11316b8b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11316b8e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11316b90 je 0x11316ba7 */
  if (C.zf) goto L_11316ba7;
  /* 11316b92 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11316b94 je 0x11316b72 */
  if (C.zf) goto L_11316b72;
  /* 11316b96 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11316b98 je 0x11316ba0 */
  if (C.zf) goto L_11316ba0;
  /* 11316b9a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11316b9c je 0x11316b72 */
  if (C.zf) goto L_11316b72;
  /* 11316b9e jmp 0x11316b36 */
  goto L_11316b36;
L_11316ba0:;
  /* 11316ba0 pop esi */
  ESI = (pop32());
  /* 11316ba1 pop edi */
  EDI = (pop32());
  /* 11316ba2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11316ba5 pop ebx */
  EBX = (pop32());
  /* 11316ba6 ret  */
  ESPCHK(0x11316b00u, _esp0);
  ESP += 4; return;
L_11316ba7:;
  /* 11316ba7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11316baa pop esi */
  ESI = (pop32());
  /* 11316bab pop edi */
  EDI = (pop32());
  /* 11316bac pop ebx */
  EBX = (pop32());
  /* 11316bad ret  */
  ESPCHK(0x11316b00u, _esp0);
  ESP += 4; return;
L_11316bae:;
  /* 11316bae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11316bb1 pop esi */
  ESI = (pop32());
  /* 11316bb2 pop edi */
  EDI = (pop32());
  /* 11316bb3 pop ebx */
  EBX = (pop32());
  /* 11316bb4 ret  */
  ESPCHK(0x11316b00u, _esp0);
  ESP += 4; return;
L_11316bb5:;
  /* 11316bb5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11316bb8 pop esi */
  ESI = (pop32());
  /* 11316bb9 pop edi */
  EDI = (pop32());
  /* 11316bba pop ebx */
  EBX = (pop32());
  /* 11316bbb ret  */
  ESPCHK(0x11316b00u, _esp0);
  ESP += 4; return;
  /* 11316bbc jmp dword ptr [0x11335398] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11335398)))); return;
}

/* RtlUnwind @ 0x11316d0c (6 bytes, 1 insns) */
void f_11316d0c(void) {
  FTRACE(0x11316d0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11316d0c jmp dword ptr [0x11335314] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11335314)))); return;
}

