#include "recomp.h"

/* FUN_10010a00 @ 0x10320a00 (393 bytes, 123 insns) */
void f_10320a00(void) {
  FTRACE(0x10320a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10320a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10320a01 mov ebp, esp */
  EBP = (ESP);
  /* 10320a03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320a06 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320a0a jne 0x10320a16 */
  if (!C.zf) goto L_10320a16;
  /* 10320a0c mov eax, dword ptr [0x1033ec98] */
  EAX = (r32((uint32_t)(0x1033ec98)));
  /* 10320a11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10320a14 jmp 0x10320a1c */
  goto L_10320a1c;
L_10320a16:;
  /* 10320a16 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320a19 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10320a1c:;
  /* 10320a1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320a1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10320a22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320a25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10320a28 push 0x1033f844 */
  push32((uint32_t)(0x1033f844u));
  /* 10320a2d call dword ptr [0x103422d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422d0))), 0x10320a33u);
  /* 10320a33 cmp dword ptr [0x1033f834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320a3a je 0x10320a5a */
  if (C.zf) goto L_10320a5a;
  /* 10320a3c push 0x1033f844 */
  push32((uint32_t)(0x1033f844u));
  /* 10320a41 call dword ptr [0x103422c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c0))), 0x10320a47u);
  /* 10320a47 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10320a49 call 0x103170c0 */
  push32(0x10320a4eu); f_103170c0();
  /* 10320a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320a51 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10320a58 jmp 0x10320a61 */
  goto L_10320a61;
L_10320a5a:;
  /* 10320a5a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10320a61:;
  /* 10320a61 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320a65 jbe 0x10320b52 */
  if ((C.cf||C.zf)) goto L_10320b52;
  /* 10320a6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320a6e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10320a70 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10320a73 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10320a77 je 0x10320a81 */
  if (C.zf) goto L_10320a81;
  /* 10320a79 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10320a7d je 0x10320a86 */
  if (C.zf) goto L_10320a86;
  /* 10320a7f jmp 0x10320ae0 */
  goto L_10320ae0;
L_10320a81:;
  /* 10320a81 jmp 0x10320b52 */
  goto L_10320b52;
L_10320a86:;
  /* 10320a86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320a89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320a8c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10320a8f mov dword ptr [0x1033f820], 0 */
  w32((uint32_t)(0x1033f820), (0x0u));
  /* 10320a99 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320a9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10320a9f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320aa2 jne 0x10320ab7 */
  if (!C.zf) goto L_10320ab7;
  /* 10320aa4 mov dword ptr [0x1033f820], 1 */
  w32((uint32_t)(0x1033f820), (0x1u));
  /* 10320aae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320ab1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320ab4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10320ab7:;
  /* 10320ab7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10320aba push ecx */
  push32((uint32_t)(ECX));
  /* 10320abb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10320abe push edx */
  push32((uint32_t)(EDX));
  /* 10320abf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10320ac2 push eax */
  push32((uint32_t)(EAX));
  /* 10320ac3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 10320ac7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320aca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10320acc push eax */
  push32((uint32_t)(EAX));
  /* 10320acd call 0x10320b90 */
  push32(0x10320ad2u); f_10320b90();
  /* 10320ad2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320ad5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320ad8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320adb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10320ade jmp 0x10320b4d */
  goto L_10320b4d;
L_10320ae0:;
  /* 10320ae0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320ae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10320ae5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10320ae7 mov ecx, dword ptr [0x1033dc98] */
  ECX = (r32((uint32_t)(0x1033dc98)));
  /* 10320aed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10320aef mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10320af3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10320af9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10320afb je 0x10320b28 */
  if (C.zf) goto L_10320b28;
  /* 10320afd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320b01 jbe 0x10320b28 */
  if ((C.cf||C.zf)) goto L_10320b28;
  /* 10320b03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320b06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320b09 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10320b0b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10320b0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320b10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320b13 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10320b16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320b19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320b1c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10320b1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320b22 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320b25 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10320b28:;
  /* 10320b28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320b2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320b2e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10320b30 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10320b32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320b35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320b38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10320b3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320b3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320b41 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10320b44 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320b47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320b4a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10320b4d:;
  /* 10320b4d jmp 0x10320a61 */
  goto L_10320a61;
L_10320b52:;
  /* 10320b52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320b56 je 0x10320b64 */
  if (C.zf) goto L_10320b64;
  /* 10320b58 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10320b5a call 0x10317160 */
  push32(0x10320b5fu); f_10317160();
  /* 10320b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320b62 jmp 0x10320b6f */
  goto L_10320b6f;
L_10320b64:;
  /* 10320b64 push 0x1033f844 */
  push32((uint32_t)(0x1033f844u));
  /* 10320b69 call dword ptr [0x103422c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c0))), 0x10320b6fu);
L_10320b6f:;
  /* 10320b6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320b73 jbe 0x10320b83 */
  if ((C.cf||C.zf)) goto L_10320b83;
  /* 10320b75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320b78 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10320b7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320b7e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320b81 jmp 0x10320b85 */
  goto L_10320b85;
L_10320b83:;
  /* 10320b83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10320b85:;
  /* 10320b85 mov esp, ebp */
  ESP = (EBP);
  /* 10320b87 pop ebp */
  EBP = (pop32());
  /* 10320b88 ret  */
  ESPCHK(0x10320a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b90 @ 0x10320b90 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10320b90(void) {
  FTRACE(0x10320b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10320b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10320b91 mov ebp, esp */
  EBP = (ESP);
  /* 10320b93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320b96 push esi */
  push32((uint32_t)(ESI));
  /* 10320b97 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10320b9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10320b9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320ba1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320ba4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10320ba7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320bab ja 0x103210f8 */
  if ((!C.cf&&!C.zf)) goto L_103210f8;
  /* 10320bb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320bb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10320bb6 mov dl, byte ptr [eax + 0x10321159] */
  DL = (r8((uint32_t)(EAX + 0x10321159)));
  /* 10320bbc jmp dword ptr [edx*4 + 0x103210fd] */
  switch (EDX) {
    case 0: goto L_103210d6;
    case 1: goto L_10320be5;
    case 2: goto L_10320c2b;
    case 3: goto L_10320d78;
    case 4: goto L_10320da0;
    case 5: goto L_10320e3f;
    case 6: goto L_10320eab;
    case 7: goto L_10320ed4;
    case 8: goto L_10320f15;
    case 9: goto L_10320ff7;
    case 10: goto L_1032105e;
    case 11: goto L_103210ab;
    case 12: goto L_10320bc3;
    case 13: goto L_10320c08;
    case 14: goto L_10320c4e;
    case 15: goto L_10320d4e;
    case 16: goto L_10320de5;
    case 17: goto L_10320e12;
    case 18: goto L_10320e67;
    case 19: goto L_10320eeb;
    case 20: goto L_10320f99;
    case 21: goto L_10321028;
    case 22: goto L_103210f8;
    default: x86_unimpl("switch@0x10320bbc out of table"); return;
  }
L_10320bc3:;
  /* 10320bc3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320bc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10320bc7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320bca push edx */
  push32((uint32_t)(EDX));
  /* 10320bcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320bce mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10320bd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320bd4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10320bd7 push eax */
  push32((uint32_t)(EAX));
  /* 10320bd8 call 0x103211b0 */
  push32(0x10320bddu); f_103211b0();
  /* 10320bdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320be0 jmp 0x103210f8 */
  goto L_103210f8;
L_10320be5:;
  /* 10320be5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320be8 push ecx */
  push32((uint32_t)(ECX));
  /* 10320be9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320bec push edx */
  push32((uint32_t)(EDX));
  /* 10320bed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320bf0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10320bf3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320bf6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10320bfa push eax */
  push32((uint32_t)(EAX));
  /* 10320bfb call 0x103211b0 */
  push32(0x10320c00u); f_103211b0();
  /* 10320c00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320c03 jmp 0x103210f8 */
  goto L_103210f8;
L_10320c08:;
  /* 10320c08 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320c0b push ecx */
  push32((uint32_t)(ECX));
  /* 10320c0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320c0f push edx */
  push32((uint32_t)(EDX));
  /* 10320c10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320c13 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10320c16 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320c19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10320c1d push eax */
  push32((uint32_t)(EAX));
  /* 10320c1e call 0x103211b0 */
  push32(0x10320c23u); f_103211b0();
  /* 10320c23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320c26 jmp 0x103210f8 */
  goto L_103210f8;
L_10320c2b:;
  /* 10320c2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320c2e push ecx */
  push32((uint32_t)(ECX));
  /* 10320c2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320c32 push edx */
  push32((uint32_t)(EDX));
  /* 10320c33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320c36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10320c39 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320c3c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10320c40 push eax */
  push32((uint32_t)(EAX));
  /* 10320c41 call 0x103211b0 */
  push32(0x10320c46u); f_103211b0();
  /* 10320c46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320c49 jmp 0x103210f8 */
  goto L_103210f8;
L_10320c4e:;
  /* 10320c4e cmp dword ptr [0x1033f820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320c55 je 0x10320cd6 */
  if (C.zf) goto L_10320cd6;
  /* 10320c57 mov dword ptr [0x1033f820], 0 */
  w32((uint32_t)(0x1033f820), (0x0u));
  /* 10320c61 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320c64 push ecx */
  push32((uint32_t)(ECX));
  /* 10320c65 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320c68 push edx */
  push32((uint32_t)(EDX));
  /* 10320c69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320c6c push eax */
  push32((uint32_t)(EAX));
  /* 10320c6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320c70 push ecx */
  push32((uint32_t)(ECX));
  /* 10320c71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320c74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10320c7a push eax */
  push32((uint32_t)(EAX));
  /* 10320c7b call 0x10321360 */
  push32(0x10320c80u); f_10321360();
  /* 10320c80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320c83 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320c86 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320c89 jne 0x10320c90 */
  if (!C.zf) goto L_10320c90;
  /* 10320c8b jmp 0x103210f8 */
  goto L_103210f8;
L_10320c90:;
  /* 10320c90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320c93 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10320c95 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10320c98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320c9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10320c9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320ca0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320ca3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10320ca5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320ca8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10320caa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320cad mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320cb0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10320cb2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10320cb6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320cb9 push edx */
  push32((uint32_t)(EDX));
  /* 10320cba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320cbd push eax */
  push32((uint32_t)(EAX));
  /* 10320cbe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10320cc2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320cc5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10320ccb push eax */
  push32((uint32_t)(EAX));
  /* 10320ccc call 0x10321360 */
  push32(0x10320cd1u); f_10321360();
  /* 10320cd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320cd4 jmp 0x10320d49 */
  goto L_10320d49;
L_10320cd6:;
  /* 10320cd6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10320cda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320cdd push edx */
  push32((uint32_t)(EDX));
  /* 10320cde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320ce1 push eax */
  push32((uint32_t)(EAX));
  /* 10320ce2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 10320ce6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320ce9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10320cef push eax */
  push32((uint32_t)(EAX));
  /* 10320cf0 call 0x10321360 */
  push32(0x10320cf5u); f_10321360();
  /* 10320cf5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320cf8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320cfb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320cfe jne 0x10320d05 */
  if (!C.zf) goto L_10320d05;
  /* 10320d00 jmp 0x103210f8 */
  goto L_103210f8;
L_10320d05:;
  /* 10320d05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320d08 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10320d0a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10320d0d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320d10 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10320d12 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320d15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320d18 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10320d1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320d1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10320d1f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320d22 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320d25 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10320d27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320d2a push ecx */
  push32((uint32_t)(ECX));
  /* 10320d2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320d2e push edx */
  push32((uint32_t)(EDX));
  /* 10320d2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320d32 push eax */
  push32((uint32_t)(EAX));
  /* 10320d33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320d36 push ecx */
  push32((uint32_t)(ECX));
  /* 10320d37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320d3a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10320d40 push eax */
  push32((uint32_t)(EAX));
  /* 10320d41 call 0x10321360 */
  push32(0x10320d46u); f_10321360();
  /* 10320d46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10320d49:;
  /* 10320d49 jmp 0x103210f8 */
  goto L_103210f8;
L_10320d4e:;
  /* 10320d4e mov ecx, dword ptr [0x1033f820] */
  ECX = (r32((uint32_t)(0x1033f820)));
  /* 10320d54 mov dword ptr [0x1033f830], ecx */
  w32((uint32_t)(0x1033f830), (ECX));
  /* 10320d5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320d5d push edx */
  push32((uint32_t)(EDX));
  /* 10320d5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320d61 push eax */
  push32((uint32_t)(EAX));
  /* 10320d62 push 2 */
  push32((uint32_t)(0x2u));
  /* 10320d64 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320d67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10320d6a push edx */
  push32((uint32_t)(EDX));
  /* 10320d6b call 0x10321200 */
  push32(0x10320d70u); f_10321200();
  /* 10320d70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320d73 jmp 0x103210f8 */
  goto L_103210f8;
L_10320d78:;
  /* 10320d78 mov eax, dword ptr [0x1033f820] */
  EAX = (r32((uint32_t)(0x1033f820)));
  /* 10320d7d mov dword ptr [0x1033f830], eax */
  w32((uint32_t)(0x1033f830), (EAX));
  /* 10320d82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320d85 push ecx */
  push32((uint32_t)(ECX));
  /* 10320d86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320d89 push edx */
  push32((uint32_t)(EDX));
  /* 10320d8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10320d8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320d8f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10320d92 push ecx */
  push32((uint32_t)(ECX));
  /* 10320d93 call 0x10321200 */
  push32(0x10320d98u); f_10321200();
  /* 10320d98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320d9b jmp 0x103210f8 */
  goto L_103210f8;
L_10320da0:;
  /* 10320da0 mov edx, dword ptr [0x1033f820] */
  EDX = (r32((uint32_t)(0x1033f820)));
  /* 10320da6 mov dword ptr [0x1033f830], edx */
  w32((uint32_t)(0x1033f830), (EDX));
  /* 10320dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320daf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10320db2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10320db3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10320db8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10320dba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10320dbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320dc1 jne 0x10320dca */
  if (!C.zf) goto L_10320dca;
  /* 10320dc3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10320dca:;
  /* 10320dca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320dcd push edx */
  push32((uint32_t)(EDX));
  /* 10320dce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320dd1 push eax */
  push32((uint32_t)(EAX));
  /* 10320dd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10320dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10320dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10320dd8 call 0x10321200 */
  push32(0x10320dddu); f_10321200();
  /* 10320ddd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320de0 jmp 0x103210f8 */
  goto L_103210f8;
L_10320de5:;
  /* 10320de5 mov edx, dword ptr [0x1033f820] */
  EDX = (r32((uint32_t)(0x1033f820)));
  /* 10320deb mov dword ptr [0x1033f830], edx */
  w32((uint32_t)(0x1033f830), (EDX));
  /* 10320df1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320df4 push eax */
  push32((uint32_t)(EAX));
  /* 10320df5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320df8 push ecx */
  push32((uint32_t)(ECX));
  /* 10320df9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10320dfb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320dfe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10320e01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320e04 push eax */
  push32((uint32_t)(EAX));
  /* 10320e05 call 0x10321200 */
  push32(0x10320e0au); f_10321200();
  /* 10320e0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320e0d jmp 0x103210f8 */
  goto L_103210f8;
L_10320e12:;
  /* 10320e12 mov ecx, dword ptr [0x1033f820] */
  ECX = (r32((uint32_t)(0x1033f820)));
  /* 10320e18 mov dword ptr [0x1033f830], ecx */
  w32((uint32_t)(0x1033f830), (ECX));
  /* 10320e1e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320e21 push edx */
  push32((uint32_t)(EDX));
  /* 10320e22 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320e25 push eax */
  push32((uint32_t)(EAX));
  /* 10320e26 push 2 */
  push32((uint32_t)(0x2u));
  /* 10320e28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320e2b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10320e2e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320e31 push edx */
  push32((uint32_t)(EDX));
  /* 10320e32 call 0x10321200 */
  push32(0x10320e37u); f_10321200();
  /* 10320e37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320e3a jmp 0x103210f8 */
  goto L_103210f8;
L_10320e3f:;
  /* 10320e3f mov eax, dword ptr [0x1033f820] */
  EAX = (r32((uint32_t)(0x1033f820)));
  /* 10320e44 mov dword ptr [0x1033f830], eax */
  w32((uint32_t)(0x1033f830), (EAX));
  /* 10320e49 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320e4c push ecx */
  push32((uint32_t)(ECX));
  /* 10320e4d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320e50 push edx */
  push32((uint32_t)(EDX));
  /* 10320e51 push 2 */
  push32((uint32_t)(0x2u));
  /* 10320e53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320e56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10320e59 push ecx */
  push32((uint32_t)(ECX));
  /* 10320e5a call 0x10321200 */
  push32(0x10320e5fu); f_10321200();
  /* 10320e5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320e62 jmp 0x103210f8 */
  goto L_103210f8;
L_10320e67:;
  /* 10320e67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320e6a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320e6e jg 0x10320e8c */
  if ((!C.zf&&C.sf==C.of)) goto L_10320e8c;
  /* 10320e70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320e73 push eax */
  push32((uint32_t)(EAX));
  /* 10320e74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320e77 push ecx */
  push32((uint32_t)(ECX));
  /* 10320e78 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320e7b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10320e81 push eax */
  push32((uint32_t)(EAX));
  /* 10320e82 call 0x103211b0 */
  push32(0x10320e87u); f_103211b0();
  /* 10320e87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320e8a jmp 0x10320ea6 */
  goto L_10320ea6;
L_10320e8c:;
  /* 10320e8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320e8f push ecx */
  push32((uint32_t)(ECX));
  /* 10320e90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320e93 push edx */
  push32((uint32_t)(EDX));
  /* 10320e94 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320e97 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10320e9d push ecx */
  push32((uint32_t)(ECX));
  /* 10320e9e call 0x103211b0 */
  push32(0x10320ea3u); f_103211b0();
  /* 10320ea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10320ea6:;
  /* 10320ea6 jmp 0x103210f8 */
  goto L_103210f8;
L_10320eab:;
  /* 10320eab mov edx, dword ptr [0x1033f820] */
  EDX = (r32((uint32_t)(0x1033f820)));
  /* 10320eb1 mov dword ptr [0x1033f830], edx */
  w32((uint32_t)(0x1033f830), (EDX));
  /* 10320eb7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320eba push eax */
  push32((uint32_t)(EAX));
  /* 10320ebb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320ebe push ecx */
  push32((uint32_t)(ECX));
  /* 10320ebf push 2 */
  push32((uint32_t)(0x2u));
  /* 10320ec1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320ec4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10320ec6 push eax */
  push32((uint32_t)(EAX));
  /* 10320ec7 call 0x10321200 */
  push32(0x10320eccu); f_10321200();
  /* 10320ecc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320ecf jmp 0x103210f8 */
  goto L_103210f8;
L_10320ed4:;
  /* 10320ed4 mov ecx, dword ptr [0x1033f820] */
  ECX = (r32((uint32_t)(0x1033f820)));
  /* 10320eda mov dword ptr [0x1033f830], ecx */
  w32((uint32_t)(0x1033f830), (ECX));
  /* 10320ee0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320ee3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10320ee6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10320ee9 jmp 0x10320f3d */
  goto L_10320f3d;
L_10320eeb:;
  /* 10320eeb mov ecx, dword ptr [0x1033f820] */
  ECX = (r32((uint32_t)(0x1033f820)));
  /* 10320ef1 mov dword ptr [0x1033f830], ecx */
  w32((uint32_t)(0x1033f830), (ECX));
  /* 10320ef7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320efa push edx */
  push32((uint32_t)(EDX));
  /* 10320efb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320efe push eax */
  push32((uint32_t)(EAX));
  /* 10320eff push 1 */
  push32((uint32_t)(0x1u));
  /* 10320f01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320f04 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10320f07 push edx */
  push32((uint32_t)(EDX));
  /* 10320f08 call 0x10321200 */
  push32(0x10320f0du); f_10321200();
  /* 10320f0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320f10 jmp 0x103210f8 */
  goto L_103210f8;
L_10320f15:;
  /* 10320f15 mov eax, dword ptr [0x1033f820] */
  EAX = (r32((uint32_t)(0x1033f820)));
  /* 10320f1a mov dword ptr [0x1033f830], eax */
  w32((uint32_t)(0x1033f830), (EAX));
  /* 10320f1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320f22 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320f26 jne 0x10320f31 */
  if (!C.zf) goto L_10320f31;
  /* 10320f28 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10320f2f jmp 0x10320f3d */
  goto L_10320f3d;
L_10320f31:;
  /* 10320f31 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320f34 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10320f37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320f3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10320f3d:;
  /* 10320f3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320f40 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10320f43 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320f46 jge 0x10320f51 */
  if ((C.sf==C.of)) goto L_10320f51;
  /* 10320f48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10320f4f jmp 0x10320f7e */
  goto L_10320f7e;
L_10320f51:;
  /* 10320f51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320f54 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10320f57 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10320f58 mov ecx, 7 */
  ECX = (0x7u);
  /* 10320f5d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10320f5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10320f62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320f65 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10320f68 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10320f69 mov ecx, 7 */
  ECX = (0x7u);
  /* 10320f6e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10320f70 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320f73 jl 0x10320f7e */
  if ((C.sf!=C.of)) goto L_10320f7e;
  /* 10320f75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10320f78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320f7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10320f7e:;
  /* 10320f7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320f81 push eax */
  push32((uint32_t)(EAX));
  /* 10320f82 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320f85 push ecx */
  push32((uint32_t)(ECX));
  /* 10320f86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10320f88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10320f8b push edx */
  push32((uint32_t)(EDX));
  /* 10320f8c call 0x10321200 */
  push32(0x10320f91u); f_10321200();
  /* 10320f91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320f94 jmp 0x103210f8 */
  goto L_103210f8;
L_10320f99:;
  /* 10320f99 cmp dword ptr [0x1033f820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320fa0 je 0x10320fd0 */
  if (C.zf) goto L_10320fd0;
  /* 10320fa2 mov dword ptr [0x1033f820], 0 */
  w32((uint32_t)(0x1033f820), (0x0u));
  /* 10320fac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320faf push eax */
  push32((uint32_t)(EAX));
  /* 10320fb0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10320fb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320fb7 push edx */
  push32((uint32_t)(EDX));
  /* 10320fb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320fbb push eax */
  push32((uint32_t)(EAX));
  /* 10320fbc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320fbf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10320fc5 push edx */
  push32((uint32_t)(EDX));
  /* 10320fc6 call 0x10321360 */
  push32(0x10320fcbu); f_10321360();
  /* 10320fcb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320fce jmp 0x10320ff2 */
  goto L_10320ff2;
L_10320fd0:;
  /* 10320fd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320fd3 push eax */
  push32((uint32_t)(EAX));
  /* 10320fd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10320fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10320fd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10320fdb push edx */
  push32((uint32_t)(EDX));
  /* 10320fdc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320fdf push eax */
  push32((uint32_t)(EAX));
  /* 10320fe0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10320fe3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10320fe9 push edx */
  push32((uint32_t)(EDX));
  /* 10320fea call 0x10321360 */
  push32(0x10320fefu); f_10321360();
  /* 10320fef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10320ff2:;
  /* 10320ff2 jmp 0x103210f8 */
  goto L_103210f8;
L_10320ff7:;
  /* 10320ff7 mov dword ptr [0x1033f820], 0 */
  w32((uint32_t)(0x1033f820), (0x0u));
  /* 10321001 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10321004 push eax */
  push32((uint32_t)(EAX));
  /* 10321005 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321008 push ecx */
  push32((uint32_t)(ECX));
  /* 10321009 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032100c push edx */
  push32((uint32_t)(EDX));
  /* 1032100d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321010 push eax */
  push32((uint32_t)(EAX));
  /* 10321011 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10321014 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1032101a push edx */
  push32((uint32_t)(EDX));
  /* 1032101b call 0x10321360 */
  push32(0x10321020u); f_10321360();
  /* 10321020 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321023 jmp 0x103210f8 */
  goto L_103210f8;
L_10321028:;
  /* 10321028 mov eax, dword ptr [0x1033f820] */
  EAX = (r32((uint32_t)(0x1033f820)));
  /* 1032102d mov dword ptr [0x1033f830], eax */
  w32((uint32_t)(0x1033f830), (EAX));
  /* 10321032 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321035 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10321038 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10321039 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1032103e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10321040 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10321043 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321046 push edx */
  push32((uint32_t)(EDX));
  /* 10321047 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032104a push eax */
  push32((uint32_t)(EAX));
  /* 1032104b push 2 */
  push32((uint32_t)(0x2u));
  /* 1032104d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10321050 push ecx */
  push32((uint32_t)(ECX));
  /* 10321051 call 0x10321200 */
  push32(0x10321056u); f_10321200();
  /* 10321056 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321059 jmp 0x103210f8 */
  goto L_103210f8;
L_1032105e:;
  /* 1032105e mov edx, dword ptr [0x1033f820] */
  EDX = (r32((uint32_t)(0x1033f820)));
  /* 10321064 mov dword ptr [0x1033f830], edx */
  w32((uint32_t)(0x1033f830), (EDX));
  /* 1032106a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1032106d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10321070 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10321071 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10321076 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10321078 mov ecx, eax */
  ECX = (EAX);
  /* 1032107a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032107d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10321080 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321083 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10321086 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10321087 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1032108c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1032108e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321090 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10321093 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321096 push eax */
  push32((uint32_t)(EAX));
  /* 10321097 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032109a push ecx */
  push32((uint32_t)(ECX));
  /* 1032109b push 4 */
  push32((uint32_t)(0x4u));
  /* 1032109d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103210a0 push edx */
  push32((uint32_t)(EDX));
  /* 103210a1 call 0x10321200 */
  push32(0x103210a6u); f_10321200();
  /* 103210a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103210a9 jmp 0x103210f8 */
  goto L_103210f8;
L_103210ab:;
  /* 103210ab call 0x103221c0 */
  push32(0x103210b0u); f_103221c0();
  /* 103210b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103210b3 push eax */
  push32((uint32_t)(EAX));
  /* 103210b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103210b7 push ecx */
  push32((uint32_t)(ECX));
  /* 103210b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103210bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103210bd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103210c1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 103210c4 mov ecx, dword ptr [eax*4 + 0x1033ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1033ee1c)));
  /* 103210cb push ecx */
  push32((uint32_t)(ECX));
  /* 103210cc call 0x103211b0 */
  push32(0x103210d1u); f_103211b0();
  /* 103210d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103210d4 jmp 0x103210f8 */
  goto L_103210f8;
L_103210d6:;
  /* 103210d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103210d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103210db mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 103210de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103210e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103210e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103210e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103210e9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103210eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103210ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103210f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103210f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103210f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103210f8:;
  /* 103210f8 pop esi */
  ESI = (pop32());
  /* 103210f9 mov esp, ebp */
  ESP = (EBP);
  /* 103210fb pop ebp */
  EBP = (pop32());
  /* 103210fc ret  */
  ESPCHK(0x10320b90u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x103211b0 (72 bytes, 30 insns) */
void f_103211b0(void) {
  FTRACE(0x103211b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103211b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103211b1 mov ebp, esp */
  EBP = (ESP);
L_103211b3:;
  /* 103211b3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103211b6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103211b9 je 0x103211f6 */
  if (C.zf) goto L_103211f6;
  /* 103211bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103211be movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103211c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103211c3 je 0x103211f6 */
  if (C.zf) goto L_103211f6;
  /* 103211c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103211c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103211ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103211cd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103211cf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103211d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103211d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103211d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103211d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103211dc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103211de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103211e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103211e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103211e7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103211ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103211ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103211ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103211f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103211f4 jmp 0x103211b3 */
  goto L_103211b3;
L_103211f6:;
  /* 103211f6 pop ebp */
  EBP = (pop32());
  /* 103211f7 ret  */
  ESPCHK(0x103211b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x10321200 (173 bytes, 64 insns) */
void f_10321200(void) {
  FTRACE(0x10321200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10321200 push ebp */
  push32((uint32_t)(EBP));
  /* 10321201 mov ebp, esp */
  EBP = (ESP);
  /* 10321203 push ecx */
  push32((uint32_t)(ECX));
  /* 10321204 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1032120b cmp dword ptr [0x1033f830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321212 je 0x1032122a */
  if (C.zf) goto L_1032122a;
  /* 10321214 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321217 push eax */
  push32((uint32_t)(EAX));
  /* 10321218 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032121b push ecx */
  push32((uint32_t)(ECX));
  /* 1032121c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032121f push edx */
  push32((uint32_t)(EDX));
  /* 10321220 call 0x103212b0 */
  push32(0x10321225u); f_103212b0();
  /* 10321225 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321228 jmp 0x103212a9 */
  goto L_103212a9;
L_1032122a:;
  /* 1032122a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1032122d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321230 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321232 jae 0x103212a0 */
  if (!C.cf) goto L_103212a0;
  /* 10321234 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321237 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1032123a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1032123d jmp 0x10321248 */
  goto L_10321248;
L_1032123f:;
  /* 1032123f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321242 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10321245 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10321248:;
  /* 10321248 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1032124b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032124e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10321250 je 0x10321284 */
  if (C.zf) goto L_10321284;
  /* 10321252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321255 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10321256 mov ecx, 0xa */
  ECX = (0xau);
  /* 1032125b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1032125d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321260 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321263 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10321265 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321268 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1032126b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032126e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1032126f mov ecx, 0xa */
  ECX = (0xau);
  /* 10321274 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10321276 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10321279 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032127c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032127f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10321282 jmp 0x1032123f */
  goto L_1032123f;
L_10321284:;
  /* 10321284 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321287 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10321289 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032128c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032128f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10321291 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321294 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10321296 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10321299 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1032129c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1032129e jmp 0x103212a9 */
  goto L_103212a9;
L_103212a0:;
  /* 103212a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103212a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_103212a9:;
  /* 103212a9 mov esp, ebp */
  ESP = (EBP);
  /* 103212ab pop ebp */
  EBP = (pop32());
  /* 103212ac ret  */
  ESPCHK(0x10321200u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x103212b0 (172 bytes, 65 insns) */
void f_103212b0(void) {
  FTRACE(0x103212b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103212b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103212b1 mov ebp, esp */
  EBP = (ESP);
  /* 103212b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103212b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103212b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103212bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103212be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103212c1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103212c4 jbe 0x1032130b */
  if ((C.cf||C.zf)) goto L_1032130b;
L_103212c6:;
  /* 103212c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103212c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103212ca mov ecx, 0xa */
  ECX = (0xau);
  /* 103212cf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103212d1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103212d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103212d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103212d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103212dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103212df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103212e2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103212e5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103212e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103212ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103212ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103212ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103212f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103212f3 mov ecx, 0xa */
  ECX = (0xau);
  /* 103212f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103212fa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103212fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321301 jle 0x1032130b */
  if ((C.zf||C.sf!=C.of)) goto L_1032130b;
  /* 10321303 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321306 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321309 ja 0x103212c6 */
  if ((!C.cf&&!C.zf)) goto L_103212c6;
L_1032130b:;
  /* 1032130b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1032130e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10321310 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10321313 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321316 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10321319 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1032131b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032131e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10321321 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10321324:;
  /* 10321324 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10321327 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10321329 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1032132c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032132f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10321332 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10321334 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10321336 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10321339 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1032133c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1032133f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10321342 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10321345 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10321347 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032134a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032134d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10321350 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10321353 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321356 jb 0x10321324 */
  if (C.cf) goto L_10321324;
  /* 10321358 mov esp, ebp */
  ESP = (EBP);
  /* 1032135a pop ebp */
  EBP = (pop32());
  /* 1032135b ret  */
  ESPCHK(0x103212b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011360 @ 0x10321360 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10321360(void) {
  FTRACE(0x10321360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10321360 push ebp */
  push32((uint32_t)(EBP));
  /* 10321361 mov ebp, esp */
  EBP = (ESP);
  /* 10321363 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10321366:;
  /* 10321366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321369 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1032136c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1032136e je 0x103217dc */
  if (C.zf) goto L_103217dc;
  /* 10321374 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321377 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032137a je 0x103217dc */
  if (C.zf) goto L_103217dc;
  /* 10321380 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10321384 mov dword ptr [0x1033f830], 0 */
  w32((uint32_t)(0x1033f830), (0x0u));
  /* 1032138e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10321395 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321398 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1032139b jmp 0x103213a6 */
  goto L_103213a6;
L_1032139d:;
  /* 1032139d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103213a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103213a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103213a6:;
  /* 103213a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103213a9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103213ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103213af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103213b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103213b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103213b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103213bb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103213bd jne 0x103213c1 */
  if (!C.zf) goto L_103213c1;
  /* 103213bf jmp 0x1032139d */
  goto L_1032139d;
L_103213c1:;
  /* 103213c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103213c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103213c7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103213ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103213cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103213d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103213d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103213d6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103213d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103213dc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103213e0 ja 0x10321730 */
  if ((!C.cf&&!C.zf)) goto L_10321730;
  /* 103213e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103213e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103213eb mov al, byte ptr [ecx + 0x1032180c] */
  AL = (r8((uint32_t)(ECX + 0x1032180c)));
  /* 103213f1 jmp dword ptr [eax*4 + 0x103217e0] */
  switch (EAX) {
    case 0: goto L_1032164f;
    case 1: goto L_10321533;
    case 2: goto L_103214be;
    case 3: goto L_103213f8;
    case 4: goto L_10321436;
    case 5: goto L_10321497;
    case 6: goto L_103214e5;
    case 7: goto L_1032150c;
    case 8: goto L_1032157a;
    case 9: goto L_10321474;
    case 10: goto L_10321730;
    default: x86_unimpl("switch@0x103213f1 out of table"); return;
  }
L_103213f8:;
  /* 103213f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103213fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103213fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10321401 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10321404 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10321407 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032140b ja 0x10321431 */
  if ((!C.cf&&!C.zf)) goto L_10321431;
  /* 1032140d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10321410 jmp dword ptr [ecx*4 + 0x1032185f] */
  switch (ECX) {
    case 0: goto L_10321417;
    case 1: goto L_10321421;
    case 2: goto L_10321427;
    case 3: goto L_1032142d;
    case 4: goto L_10321455;
    case 5: goto L_1032145f;
    case 6: goto L_10321465;
    case 7: goto L_1032146b;
    default: x86_unimpl("switch@0x10321410 out of table"); return;
  }
L_10321417:;
  /* 10321417 mov dword ptr [0x1033f830], 1 */
  w32((uint32_t)(0x1033f830), (0x1u));
L_10321421:;
  /* 10321421 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10321425 jmp 0x10321431 */
  goto L_10321431;
L_10321427:;
  /* 10321427 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1032142b jmp 0x10321431 */
  goto L_10321431;
L_1032142d:;
  /* 1032142d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10321431:;
  /* 10321431 jmp 0x10321730 */
  goto L_10321730;
L_10321436:;
  /* 10321436 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10321439 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1032143c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1032143f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10321442 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10321445 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321449 ja 0x1032146f */
  if ((!C.cf&&!C.zf)) goto L_1032146f;
  /* 1032144b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1032144e jmp dword ptr [ecx*4 + 0x1032186f] */
  switch (ECX) {
    case 0: goto L_10321455;
    case 1: goto L_1032145f;
    case 2: goto L_10321465;
    case 3: goto L_1032146b;
    default: x86_unimpl("switch@0x1032144e out of table"); return;
  }
L_10321455:;
  /* 10321455 mov dword ptr [0x1033f830], 1 */
  w32((uint32_t)(0x1033f830), (0x1u));
L_1032145f:;
  /* 1032145f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10321463 jmp 0x1032146f */
  goto L_1032146f;
L_10321465:;
  /* 10321465 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10321469 jmp 0x1032146f */
  goto L_1032146f;
L_1032146b:;
  /* 1032146b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1032146f:;
  /* 1032146f jmp 0x10321730 */
  goto L_10321730;
L_10321474:;
  /* 10321474 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10321477 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1032147a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032147e je 0x10321488 */
  if (C.zf) goto L_10321488;
  /* 10321480 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321484 je 0x1032148e */
  if (C.zf) goto L_1032148e;
  /* 10321486 jmp 0x10321492 */
  goto L_10321492;
L_10321488:;
  /* 10321488 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1032148c jmp 0x10321492 */
  goto L_10321492;
L_1032148e:;
  /* 1032148e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10321492:;
  /* 10321492 jmp 0x10321730 */
  goto L_10321730;
L_10321497:;
  /* 10321497 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032149a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1032149d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103214a1 je 0x103214ab */
  if (C.zf) goto L_103214ab;
  /* 103214a3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103214a7 je 0x103214b5 */
  if (C.zf) goto L_103214b5;
  /* 103214a9 jmp 0x103214b9 */
  goto L_103214b9;
L_103214ab:;
  /* 103214ab mov dword ptr [0x1033f830], 1 */
  w32((uint32_t)(0x1033f830), (0x1u));
L_103214b5:;
  /* 103214b5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_103214b9:;
  /* 103214b9 jmp 0x10321730 */
  goto L_10321730;
L_103214be:;
  /* 103214be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103214c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 103214c4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103214c8 je 0x103214d2 */
  if (C.zf) goto L_103214d2;
  /* 103214ca cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103214ce je 0x103214dc */
  if (C.zf) goto L_103214dc;
  /* 103214d0 jmp 0x103214e0 */
  goto L_103214e0;
L_103214d2:;
  /* 103214d2 mov dword ptr [0x1033f830], 1 */
  w32((uint32_t)(0x1033f830), (0x1u));
L_103214dc:;
  /* 103214dc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_103214e0:;
  /* 103214e0 jmp 0x10321730 */
  goto L_10321730;
L_103214e5:;
  /* 103214e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103214e8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 103214eb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103214ef je 0x103214f9 */
  if (C.zf) goto L_103214f9;
  /* 103214f1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103214f5 je 0x10321503 */
  if (C.zf) goto L_10321503;
  /* 103214f7 jmp 0x10321507 */
  goto L_10321507;
L_103214f9:;
  /* 103214f9 mov dword ptr [0x1033f830], 1 */
  w32((uint32_t)(0x1033f830), (0x1u));
L_10321503:;
  /* 10321503 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10321507:;
  /* 10321507 jmp 0x10321730 */
  goto L_10321730;
L_1032150c:;
  /* 1032150c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032150f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10321512 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321516 je 0x10321520 */
  if (C.zf) goto L_10321520;
  /* 10321518 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032151c je 0x1032152a */
  if (C.zf) goto L_1032152a;
  /* 1032151e jmp 0x1032152e */
  goto L_1032152e;
L_10321520:;
  /* 10321520 mov dword ptr [0x1033f830], 1 */
  w32((uint32_t)(0x1033f830), (0x1u));
L_1032152a:;
  /* 1032152a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1032152e:;
  /* 1032152e jmp 0x10321730 */
  goto L_10321730;
L_10321533:;
  /* 10321533 push 0x1033b84c */
  push32((uint32_t)(0x1033b84cu));
  /* 10321538 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032153b push ecx */
  push32((uint32_t)(ECX));
  /* 1032153c call 0x10321d90 */
  push32(0x10321541u); f_10321d90();
  /* 10321541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10321546 jne 0x10321553 */
  if (!C.zf) goto L_10321553;
  /* 10321548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032154b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032154e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10321551 jmp 0x10321571 */
  goto L_10321571;
L_10321553:;
  /* 10321553 push 0x1033b848 */
  push32((uint32_t)(0x1033b848u));
  /* 10321558 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032155b push eax */
  push32((uint32_t)(EAX));
  /* 1032155c call 0x10321d90 */
  push32(0x10321561u); f_10321d90();
  /* 10321561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10321566 jne 0x10321571 */
  if (!C.zf) goto L_10321571;
  /* 10321568 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032156b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032156e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10321571:;
  /* 10321571 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10321575 jmp 0x10321730 */
  goto L_10321730;
L_1032157a:;
  /* 1032157a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1032157d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321581 jg 0x10321591 */
  if ((!C.zf&&C.sf==C.of)) goto L_10321591;
  /* 10321583 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10321586 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1032158c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1032158f jmp 0x1032159d */
  goto L_1032159d;
L_10321591:;
  /* 10321591 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10321594 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1032159a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1032159d:;
  /* 1032159d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103215a1 jle 0x10321644 */
  if ((C.zf||C.sf!=C.of)) goto L_10321644;
  /* 103215a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103215aa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103215ad jbe 0x10321644 */
  if ((C.cf||C.zf)) goto L_10321644;
  /* 103215b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103215b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103215b8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103215ba mov ecx, dword ptr [0x1033dc98] */
  ECX = (r32((uint32_t)(0x1033dc98)));
  /* 103215c0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103215c2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103215c6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 103215cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103215ce je 0x10321607 */
  if (C.zf) goto L_10321607;
  /* 103215d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103215d3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103215d6 jbe 0x10321607 */
  if ((C.cf||C.zf)) goto L_10321607;
  /* 103215d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103215db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103215dd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103215e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103215e2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103215e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103215e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103215e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103215ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103215ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103215f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103215f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103215f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103215fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103215fd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103215ff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10321602 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321605 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10321607:;
  /* 10321607 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032160a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1032160c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1032160f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10321611 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10321613 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321616 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10321618 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032161b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032161e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10321620 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10321623 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321626 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10321629 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1032162c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1032162e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10321631 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321634 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10321636 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10321639 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1032163c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1032163f jmp 0x1032159d */
  goto L_1032159d;
L_10321644:;
  /* 10321644 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10321647 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1032164a jmp 0x10321366 */
  goto L_10321366;
L_1032164f:;
  /* 1032164f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10321652 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10321655 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10321657 je 0x10321722 */
  if (C.zf) goto L_10321722;
  /* 1032165d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321660 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321663 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10321666:;
  /* 10321666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321669 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1032166c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1032166e je 0x10321720 */
  if (C.zf) goto L_10321720;
  /* 10321674 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321677 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032167a je 0x10321720 */
  if (C.zf) goto L_10321720;
  /* 10321680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321683 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10321686 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321689 jne 0x10321699 */
  if (!C.zf) goto L_10321699;
  /* 1032168b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032168e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321691 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10321694 jmp 0x10321720 */
  goto L_10321720;
L_10321699:;
  /* 10321699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032169c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1032169e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103216a0 mov edx, dword ptr [0x1033dc98] */
  EDX = (r32((uint32_t)(0x1033dc98)));
  /* 103216a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103216a8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 103216ac and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 103216b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103216b3 je 0x103216ec */
  if (C.zf) goto L_103216ec;
  /* 103216b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103216b8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103216bb jbe 0x103216ec */
  if ((C.cf||C.zf)) goto L_103216ec;
  /* 103216bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103216c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103216c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103216c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103216c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103216c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103216cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103216ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103216d1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103216d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103216d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103216d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103216dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103216df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103216e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103216e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103216e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103216ea mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103216ec:;
  /* 103216ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103216ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103216f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103216f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103216f6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103216f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103216fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103216fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321700 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321703 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10321705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321708 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032170b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1032170e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321711 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10321713 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10321716 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321719 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1032171b jmp 0x10321666 */
  goto L_10321666;
L_10321720:;
  /* 10321720 jmp 0x1032172b */
  goto L_1032172b;
L_10321722:;
  /* 10321722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321725 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321728 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1032172b:;
  /* 1032172b jmp 0x10321366 */
  goto L_10321366;
L_10321730:;
  /* 10321730 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10321734 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10321736 je 0x1032175c */
  if (C.zf) goto L_1032175c;
  /* 10321738 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1032173b push edx */
  push32((uint32_t)(EDX));
  /* 1032173c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1032173f push eax */
  push32((uint32_t)(EAX));
  /* 10321740 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321743 push ecx */
  push32((uint32_t)(ECX));
  /* 10321744 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321747 push edx */
  push32((uint32_t)(EDX));
  /* 10321748 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1032174b push eax */
  push32((uint32_t)(EAX));
  /* 1032174c call 0x10320b90 */
  push32(0x10321751u); f_10320b90();
  /* 10321751 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321754 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10321757 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1032175a jmp 0x103217d7 */
  goto L_103217d7;
L_1032175c:;
  /* 1032175c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032175f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321761 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10321763 mov ecx, dword ptr [0x1033dc98] */
  ECX = (r32((uint32_t)(0x1033dc98)));
  /* 10321769 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1032176b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1032176f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10321775 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10321777 je 0x103217a8 */
  if (C.zf) goto L_103217a8;
  /* 10321779 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032177c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1032177e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321781 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10321783 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10321785 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321788 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1032178a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032178d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321790 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10321792 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321795 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321798 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1032179b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1032179e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103217a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103217a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103217a6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_103217a8:;
  /* 103217a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103217ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103217ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103217b0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103217b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103217b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103217b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103217b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103217bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103217bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103217c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103217c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103217c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103217ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103217cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103217cf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103217d2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103217d5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103217d7:;
  /* 103217d7 jmp 0x10321366 */
  goto L_10321366;
L_103217dc:;
  /* 103217dc mov esp, ebp */
  ESP = (EBP);
  /* 103217de pop ebp */
  EBP = (pop32());
  /* 103217df ret  */
  ESPCHK(0x10321360u, _esp0);
  ESP += 4; return;
}

/* FUN_10011880 @ 0x10321880 (650 bytes, 178 insns) */
void f_10321880(void) {
  FTRACE(0x10321880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10321880 push ebp */
  push32((uint32_t)(EBP));
  /* 10321881 mov ebp, esp */
  EBP = (ESP);
  /* 10321883 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10321889 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032188d jne 0x103219e9 */
  if (!C.zf) goto L_103219e9;
  /* 10321893 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321896 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1032189c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 103218a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103218a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103218ac mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 103218b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103218b8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 103218be push edx */
  push32((uint32_t)(EDX));
  /* 103218bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103218c2 push eax */
  push32((uint32_t)(EAX));
  /* 103218c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103218c6 push ecx */
  push32((uint32_t)(ECX));
  /* 103218c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103218ca push edx */
  push32((uint32_t)(EDX));
  /* 103218cb call 0x10322ca0 */
  push32(0x103218d0u); f_10322ca0();
  /* 103218d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103218d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103218d6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103218da jne 0x1032196f */
  if (!C.zf) goto L_1032196f;
  /* 103218e0 call dword ptr [0x103422fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422fc))), 0x103218e6u);
  /* 103218e6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103218e9 je 0x103218f0 */
  if (C.zf) goto L_103218f0;
  /* 103218eb jmp 0x103219cd */
  goto L_103219cd;
L_103218f0:;
  /* 103218f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103218f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103218f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103218f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103218f9 push eax */
  push32((uint32_t)(EAX));
  /* 103218fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103218fd push ecx */
  push32((uint32_t)(ECX));
  /* 103218fe call 0x10322ca0 */
  push32(0x10321903u); f_10322ca0();
  /* 10321903 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321906 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1032190c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321913 jne 0x1032191a */
  if (!C.zf) goto L_1032191a;
  /* 10321915 jmp 0x103219cd */
  goto L_103219cd;
L_1032191a:;
  /* 1032191a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1032191c push 0x1033b854 */
  push32((uint32_t)(0x1033b854u));
  /* 10321921 push 2 */
  push32((uint32_t)(0x2u));
  /* 10321923 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10321929 push edx */
  push32((uint32_t)(EDX));
  /* 1032192a call 0x103136c0 */
  push32(0x1032192fu); f_103136c0();
  /* 1032192f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321932 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10321935 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321939 jne 0x10321940 */
  if (!C.zf) goto L_10321940;
  /* 1032193b jmp 0x103219cd */
  goto L_103219cd;
L_10321940:;
  /* 10321940 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10321947 push 0 */
  push32((uint32_t)(0x0u));
  /* 10321949 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1032194f push eax */
  push32((uint32_t)(EAX));
  /* 10321950 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10321953 push ecx */
  push32((uint32_t)(ECX));
  /* 10321954 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321957 push edx */
  push32((uint32_t)(EDX));
  /* 10321958 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1032195b push eax */
  push32((uint32_t)(EAX));
  /* 1032195c call 0x10322ca0 */
  push32(0x10321961u); f_10322ca0();
  /* 10321961 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321964 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10321967 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032196b jne 0x1032196f */
  if (!C.zf) goto L_1032196f;
  /* 1032196d jmp 0x103219cd */
  goto L_103219cd;
L_1032196f:;
  /* 1032196f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10321971 push 0x1033b854 */
  push32((uint32_t)(0x1033b854u));
  /* 10321976 push 2 */
  push32((uint32_t)(0x2u));
  /* 10321978 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032197b push ecx */
  push32((uint32_t)(ECX));
  /* 1032197c call 0x103136c0 */
  push32(0x10321981u); f_103136c0();
  /* 10321981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321984 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1032198a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1032198c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10321992 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321995 jne 0x10321999 */
  if (!C.zf) goto L_10321999;
  /* 10321997 jmp 0x103219cd */
  goto L_103219cd;
L_10321999:;
  /* 10321999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032199c push ecx */
  push32((uint32_t)(ECX));
  /* 1032199d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103219a0 push edx */
  push32((uint32_t)(EDX));
  /* 103219a1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 103219a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103219a9 push ecx */
  push32((uint32_t)(ECX));
  /* 103219aa call 0x10316ee0 */
  push32(0x103219afu); f_10316ee0();
  /* 103219af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103219b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103219b6 je 0x103219c6 */
  if (C.zf) goto L_103219c6;
  /* 103219b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103219ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103219bd push edx */
  push32((uint32_t)(EDX));
  /* 103219be call 0x10314150 */
  push32(0x103219c3u); f_10314150();
  /* 103219c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103219c6:;
  /* 103219c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103219c8 jmp 0x10321b06 */
  goto L_10321b06;
L_103219cd:;
  /* 103219cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103219d1 je 0x103219e1 */
  if (C.zf) goto L_103219e1;
  /* 103219d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103219d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103219d8 push eax */
  push32((uint32_t)(EAX));
  /* 103219d9 call 0x10314150 */
  push32(0x103219deu); f_10314150();
  /* 103219de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103219e1:;
  /* 103219e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103219e4 jmp 0x10321b06 */
  goto L_10321b06;
L_103219e9:;
  /* 103219e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103219ed jne 0x10321b03 */
  if (!C.zf) goto L_10321b03;
  /* 103219f3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 103219fd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321a00 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10321a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10321a08 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10321a0e push edx */
  push32((uint32_t)(EDX));
  /* 10321a0f push 0x1033f748 */
  push32((uint32_t)(0x1033f748u));
  /* 10321a14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321a17 push eax */
  push32((uint32_t)(EAX));
  /* 10321a18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321a1b push ecx */
  push32((uint32_t)(ECX));
  /* 10321a1c call 0x10322b00 */
  push32(0x10321a21u); f_10322b00();
  /* 10321a21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10321a26 jne 0x10321a30 */
  if (!C.zf) goto L_10321a30;
  /* 10321a28 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10321a2b jmp 0x10321b06 */
  goto L_10321b06;
L_10321a30:;
  /* 10321a30 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10321a36 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10321a39 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10321a43 jmp 0x10321a54 */
  goto L_10321a54;
L_10321a45:;
  /* 10321a45 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10321a4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321a4e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10321a54:;
  /* 10321a54 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321a5b jge 0x10321aff */
  if ((C.sf==C.of)) goto L_10321aff;
  /* 10321a61 cmp dword ptr [0x1033dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321a68 jle 0x10321a9b */
  if ((C.zf||C.sf!=C.of)) goto L_10321a9b;
  /* 10321a6a push 4 */
  push32((uint32_t)(0x4u));
  /* 10321a6c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10321a72 mov dl, byte ptr [ecx*2 + 0x1033f748] */
  DL = (r8((uint32_t)(ECX*2 + 0x1033f748)));
  /* 10321a79 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10321a7f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10321a85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10321a8a push eax */
  push32((uint32_t)(EAX));
  /* 10321a8b call 0x103196d0 */
  push32(0x10321a90u); f_103196d0();
  /* 10321a90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321a93 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10321a99 jmp 0x10321ace */
  goto L_10321ace;
L_10321a9b:;
  /* 10321a9b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10321aa1 mov dl, byte ptr [ecx*2 + 0x1033f748] */
  DL = (r8((uint32_t)(ECX*2 + 0x1033f748)));
  /* 10321aa8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10321aae mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10321ab4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10321ab9 mov ecx, dword ptr [0x1033dc98] */
  ECX = (r32((uint32_t)(0x1033dc98)));
  /* 10321abf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10321ac1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10321ac5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10321ac8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10321ace:;
  /* 10321ace cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321ad5 je 0x10321af8 */
  if (C.zf) goto L_10321af8;
  /* 10321ad7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10321add movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10321ae0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10321ae3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10321aea lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10321aee mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10321af4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10321af6 jmp 0x10321afa */
  goto L_10321afa;
L_10321af8:;
  /* 10321af8 jmp 0x10321aff */
  goto L_10321aff;
L_10321afa:;
  /* 10321afa jmp 0x10321a45 */
  goto L_10321a45;
L_10321aff:;
  /* 10321aff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321b01 jmp 0x10321b06 */
  goto L_10321b06;
L_10321b03:;
  /* 10321b03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10321b06:;
  /* 10321b06 mov esp, ebp */
  ESP = (EBP);
  /* 10321b08 pop ebp */
  EBP = (pop32());
  /* 10321b09 ret  */
  ESPCHK(0x10321880u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b10 @ 0x10321b10 (10 bytes, 5 insns) */
void f_10321b10(void) {
  FTRACE(0x10321b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10321b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10321b11 mov ebp, esp */
  EBP = (ESP);
  /* 10321b13 mov eax, dword ptr [0x1033ed88] */
  EAX = (r32((uint32_t)(0x1033ed88)));
  /* 10321b18 pop ebp */
  EBP = (pop32());
  /* 10321b19 ret  */
  ESPCHK(0x10321b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b20 @ 0x10321b20 (575 bytes, 196 insns) */
void f_10321b20(void) {
  FTRACE(0x10321b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10321b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10321b21 mov ebp, esp */
  EBP = (ESP);
  /* 10321b23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10321b25 push 0x1033b860 */
  push32((uint32_t)(0x1033b860u));
  /* 10321b2a push 0x1031c7c8 */
  push32((uint32_t)(0x1031c7c8u));
  /* 10321b2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10321b35 push eax */
  push32((uint32_t)(EAX));
  /* 10321b36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10321b3d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321b40 push ebx */
  push32((uint32_t)(EBX));
  /* 10321b41 push esi */
  push32((uint32_t)(ESI));
  /* 10321b42 push edi */
  push32((uint32_t)(EDI));
  /* 10321b43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10321b46 cmp dword ptr [0x1033f754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321b4d jne 0x10321b9e */
  if (!C.zf) goto L_10321b9e;
  /* 10321b4f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10321b52 push eax */
  push32((uint32_t)(EAX));
  /* 10321b53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10321b55 push 0x1033af90 */
  push32((uint32_t)(0x1033af90u));
  /* 10321b5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10321b5c call dword ptr [0x103422a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422a8))), 0x10321b62u);
  /* 10321b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10321b64 je 0x10321b72 */
  if (C.zf) goto L_10321b72;
  /* 10321b66 mov dword ptr [0x1033f754], 1 */
  w32((uint32_t)(0x1033f754), (0x1u));
  /* 10321b70 jmp 0x10321b9e */
  goto L_10321b9e;
L_10321b72:;
  /* 10321b72 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10321b75 push ecx */
  push32((uint32_t)(ECX));
  /* 10321b76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10321b78 push 0x1033af8c */
  push32((uint32_t)(0x1033af8cu));
  /* 10321b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10321b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10321b81 call dword ptr [0x1034230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034230c))), 0x10321b87u);
  /* 10321b87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10321b89 je 0x10321b97 */
  if (C.zf) goto L_10321b97;
  /* 10321b8b mov dword ptr [0x1033f754], 2 */
  w32((uint32_t)(0x1033f754), (0x2u));
  /* 10321b95 jmp 0x10321b9e */
  goto L_10321b9e;
L_10321b97:;
  /* 10321b97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321b99 jmp 0x10321d79 */
  goto L_10321d79;
L_10321b9e:;
  /* 10321b9e cmp dword ptr [0x1033f754], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f754))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321ba5 jne 0x10321bc2 */
  if (!C.zf) goto L_10321bc2;
  /* 10321ba7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321baa push edx */
  push32((uint32_t)(EDX));
  /* 10321bab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321bae push eax */
  push32((uint32_t)(EAX));
  /* 10321baf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10321bb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321bb6 push edx */
  push32((uint32_t)(EDX));
  /* 10321bb7 call dword ptr [0x103422a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422a8))), 0x10321bbdu);
  /* 10321bbd jmp 0x10321d79 */
  goto L_10321d79;
L_10321bc2:;
  /* 10321bc2 cmp dword ptr [0x1033f754], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1033f754))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321bc9 jne 0x10321d77 */
  if (!C.zf) goto L_10321d77;
  /* 10321bcf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321bd3 jne 0x10321bdd */
  if (!C.zf) goto L_10321bdd;
  /* 10321bd5 mov eax, dword ptr [0x1033f6c8] */
  EAX = (r32((uint32_t)(0x1033f6c8)));
  /* 10321bda mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10321bdd:;
  /* 10321bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 10321bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 10321be1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10321be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10321be5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321be8 push ecx */
  push32((uint32_t)(ECX));
  /* 10321be9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321bec push edx */
  push32((uint32_t)(EDX));
  /* 10321bed push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10321bf2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10321bf5 push eax */
  push32((uint32_t)(EAX));
  /* 10321bf6 call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x10321bfcu);
  /* 10321bfc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10321bff cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321c03 jne 0x10321c0c */
  if (!C.zf) goto L_10321c0c;
  /* 10321c05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321c07 jmp 0x10321d79 */
  goto L_10321d79;
L_10321c0c:;
  /* 10321c0c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10321c13 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10321c16 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321c19 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10321c1b call 0x10316860 */
  push32(0x10321c20u); f_10316860();
  /* 10321c20 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10321c23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10321c26 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10321c29 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10321c2c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10321c2f push edx */
  push32((uint32_t)(EDX));
  /* 10321c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10321c32 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10321c35 push eax */
  push32((uint32_t)(EAX));
  /* 10321c36 call 0x10317430 */
  push32(0x10321c3bu); f_10317430();
  /* 10321c3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321c3e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10321c45 jmp 0x10321c5e */
  goto L_10321c5e;
  /* 10321c47 mov eax, 1 */
  EAX = (0x1u);
  /* 10321c4c ret  */
  ESPCHK(0x10321b20u, _esp0);
  ESP += 4; return;
  /* 10321c4d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10321c50 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10321c57 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10321c5e:;
  /* 10321c5e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321c62 jne 0x10321c6b */
  if (!C.zf) goto L_10321c6b;
  /* 10321c64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321c66 jmp 0x10321d79 */
  goto L_10321d79;
L_10321c6b:;
  /* 10321c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10321c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10321c6f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10321c72 push ecx */
  push32((uint32_t)(ECX));
  /* 10321c73 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10321c76 push edx */
  push32((uint32_t)(EDX));
  /* 10321c77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321c7a push eax */
  push32((uint32_t)(EAX));
  /* 10321c7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10321c7e push ecx */
  push32((uint32_t)(ECX));
  /* 10321c7f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10321c84 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10321c87 push edx */
  push32((uint32_t)(EDX));
  /* 10321c88 call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x10321c8eu);
  /* 10321c8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10321c90 jne 0x10321c99 */
  if (!C.zf) goto L_10321c99;
  /* 10321c92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321c94 jmp 0x10321d79 */
  goto L_10321d79;
L_10321c99:;
  /* 10321c99 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10321ca0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10321ca3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10321ca7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321caa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10321cac call 0x10316860 */
  push32(0x10321cb1u); f_10316860();
  /* 10321cb1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10321cb4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10321cb7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10321cba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10321cbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10321cc4 jmp 0x10321cdd */
  goto L_10321cdd;
  /* 10321cc6 mov eax, 1 */
  EAX = (0x1u);
  /* 10321ccb ret  */
  ESPCHK(0x10321b20u, _esp0);
  ESP += 4; return;
  /* 10321ccc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10321ccf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10321cd6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10321cdd:;
  /* 10321cdd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321ce1 jne 0x10321cea */
  if (!C.zf) goto L_10321cea;
  /* 10321ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321ce5 jmp 0x10321d79 */
  goto L_10321d79;
L_10321cea:;
  /* 10321cea cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321cee jne 0x10321cf9 */
  if (!C.zf) goto L_10321cf9;
  /* 10321cf0 mov edx, dword ptr [0x1033f6b8] */
  EDX = (r32((uint32_t)(0x1033f6b8)));
  /* 10321cf6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10321cf9:;
  /* 10321cf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321cfc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10321cff mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10321d05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321d08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10321d0b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10321d12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10321d15 push ecx */
  push32((uint32_t)(ECX));
  /* 10321d16 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10321d19 push edx */
  push32((uint32_t)(EDX));
  /* 10321d1a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10321d1d push eax */
  push32((uint32_t)(EAX));
  /* 10321d1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321d21 push ecx */
  push32((uint32_t)(ECX));
  /* 10321d22 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10321d25 push edx */
  push32((uint32_t)(EDX));
  /* 10321d26 call dword ptr [0x1034230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034230c))), 0x10321d2cu);
  /* 10321d2c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10321d2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321d32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10321d35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10321d37 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10321d3c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321d42 je 0x10321d58 */
  if (C.zf) goto L_10321d58;
  /* 10321d44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321d47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10321d4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10321d4c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10321d50 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321d56 je 0x10321d5c */
  if (C.zf) goto L_10321d5c;
L_10321d58:;
  /* 10321d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321d5a jmp 0x10321d79 */
  goto L_10321d79;
L_10321d5c:;
  /* 10321d5c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321d5f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10321d61 push eax */
  push32((uint32_t)(EAX));
  /* 10321d62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10321d65 push ecx */
  push32((uint32_t)(ECX));
  /* 10321d66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10321d69 push edx */
  push32((uint32_t)(EDX));
  /* 10321d6a call 0x1031b5b0 */
  push32(0x10321d6fu); f_1031b5b0();
  /* 10321d6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321d72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10321d75 jmp 0x10321d79 */
  goto L_10321d79;
L_10321d77:;
  /* 10321d77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10321d79:;
  /* 10321d79 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10321d7c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10321d7f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10321d86 pop edi */
  EDI = (pop32());
  /* 10321d87 pop esi */
  ESI = (pop32());
  /* 10321d88 pop ebx */
  EBX = (pop32());
  /* 10321d89 mov esp, ebp */
  ESP = (EBP);
  /* 10321d8b pop ebp */
  EBP = (pop32());
  /* 10321d8c ret  */
  ESPCHK(0x10321b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d90 @ 0x10321d90 (208 bytes, 85 insns) */
void f_10321d90(void) {
  FTRACE(0x10321d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10321d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10321d91 mov ebp, esp */
  EBP = (ESP);
  /* 10321d93 push edi */
  push32((uint32_t)(EDI));
  /* 10321d94 push esi */
  push32((uint32_t)(ESI));
  /* 10321d95 push ebx */
  push32((uint32_t)(EBX));
  /* 10321d96 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10321d99 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10321d9c lea eax, [0x1033f6b0] */
  EAX = ((uint32_t)(0x1033f6b0));
  /* 10321da2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321da6 jne 0x10321de3 */
  if (!C.zf) goto L_10321de3;
  /* 10321da8 mov al, 0xff */
  AL = (0xffu);
  /* 10321daa mov edi, edi */
  EDI = (EDI);
L_10321dac:;
  /* 10321dac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10321dae je 0x10321dde */
  if (C.zf) goto L_10321dde;
  /* 10321db0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10321db2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10321db3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10321db5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10321db6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321db8 je 0x10321dac */
  if (C.zf) goto L_10321dac;
  /* 10321dba sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10321dbc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321dbe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10321dc0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10321dc3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10321dc5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10321dc7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10321dc9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10321dcb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321dcd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10321dcf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10321dd2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10321dd4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10321dd6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321dd8 je 0x10321dac */
  if (C.zf) goto L_10321dac;
  /* 10321dda sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10321ddc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10321dde:;
  /* 10321dde movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10321de1 jmp 0x10321e5b */
  goto L_10321e5b;
L_10321de3:;
  /* 10321de3 lock inc dword ptr [0x1033f844] */
  x86_unimpl("lock inc @ 0x10321de3");
  /* 10321dea cmp dword ptr [0x1033f834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321df1 jg 0x10321df7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10321df7;
  /* 10321df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10321df5 jmp 0x10321e0c */
  goto L_10321e0c;
L_10321df7:;
  /* 10321df7 lock dec dword ptr [0x1033f844] */
  x86_unimpl("lock dec @ 0x10321df7");
  /* 10321dfe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10321e00 call 0x103170c0 */
  push32(0x10321e05u); f_103170c0();
  /* 10321e05 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10321e0c:;
  /* 10321e0c mov eax, 0xff */
  EAX = (0xffu);
  /* 10321e11 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10321e13 nop  */
  /* nop */
L_10321e14:;
  /* 10321e14 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10321e16 je 0x10321e3f */
  if (C.zf) goto L_10321e3f;
  /* 10321e18 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10321e1a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10321e1b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10321e1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10321e1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321e20 je 0x10321e14 */
  if (C.zf) goto L_10321e14;
  /* 10321e22 push eax */
  push32((uint32_t)(EAX));
  /* 10321e23 push ebx */
  push32((uint32_t)(EBX));
  /* 10321e24 call 0x10322f00 */
  push32(0x10321e29u); f_10322f00();
  /* 10321e29 mov ebx, eax */
  EBX = (EAX);
  /* 10321e2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321e2e call 0x10322f00 */
  push32(0x10321e33u); f_10322f00();
  /* 10321e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321e36 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321e38 je 0x10321e14 */
  if (C.zf) goto L_10321e14;
  /* 10321e3a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10321e3c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10321e3f:;
  /* 10321e3f mov ebx, eax */
  EBX = (EAX);
  /* 10321e41 pop eax */
  EAX = (pop32());
  /* 10321e42 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321e44 jne 0x10321e4f */
  if (!C.zf) goto L_10321e4f;
  /* 10321e46 lock dec dword ptr [0x1033f844] */
  x86_unimpl("lock dec @ 0x10321e46");
  /* 10321e4d jmp 0x10321e59 */
  goto L_10321e59;
L_10321e4f:;
  /* 10321e4f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10321e51 call 0x10317160 */
  push32(0x10321e56u); f_10317160();
  /* 10321e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10321e59:;
  /* 10321e59 mov eax, ebx */
  EAX = (EBX);
L_10321e5b:;
  /* 10321e5b pop ebx */
  EBX = (pop32());
  /* 10321e5c pop esi */
  ESI = (pop32());
  /* 10321e5d pop edi */
  EDI = (pop32());
  /* 10321e5e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10321e5f ret  */
  ESPCHK(0x10321d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e60 @ 0x10321e60 (257 bytes, 103 insns) */
void f_10321e60(void) {
  FTRACE(0x10321e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10321e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10321e61 mov ebp, esp */
  EBP = (ESP);
  /* 10321e63 push edi */
  push32((uint32_t)(EDI));
  /* 10321e64 push esi */
  push32((uint32_t)(ESI));
  /* 10321e65 push ebx */
  push32((uint32_t)(EBX));
  /* 10321e66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10321e69 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10321e6b je 0x10321f5a */
  if (C.zf) goto L_10321f5a;
  /* 10321e71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10321e74 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10321e77 lea eax, [0x1033f6b0] */
  EAX = ((uint32_t)(0x1033f6b0));
  /* 10321e7d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321e81 jne 0x10321ed1 */
  if (!C.zf) goto L_10321ed1;
  /* 10321e83 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10321e85 mov bl, 0x5a */
  BL = (0x5au);
  /* 10321e87 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10321e89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10321e8c:;
  /* 10321e8c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10321e8e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10321e90 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10321e92 je 0x10321eb5 */
  if (C.zf) goto L_10321eb5;
  /* 10321e94 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10321e96 je 0x10321eb5 */
  if (C.zf) goto L_10321eb5;
  /* 10321e98 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10321e99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10321e9a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321e9c jb 0x10321ea4 */
  if (C.cf) goto L_10321ea4;
  /* 10321e9e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321ea0 ja 0x10321ea4 */
  if ((!C.cf&&!C.zf)) goto L_10321ea4;
  /* 10321ea2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10321ea4:;
  /* 10321ea4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321ea6 jb 0x10321eae */
  if (C.cf) goto L_10321eae;
  /* 10321ea8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321eaa ja 0x10321eae */
  if ((!C.cf&&!C.zf)) goto L_10321eae;
  /* 10321eac add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10321eae:;
  /* 10321eae cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321eb0 jne 0x10321ebf */
  if (!C.zf) goto L_10321ebf;
  /* 10321eb2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10321eb3 jne 0x10321e8c */
  if (!C.zf) goto L_10321e8c;
L_10321eb5:;
  /* 10321eb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10321eb7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10321eb9 je 0x10321f5a */
  if (C.zf) goto L_10321f5a;
L_10321ebf:;
  /* 10321ebf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10321ec4 jb 0x10321f5a */
  if (C.cf) goto L_10321f5a;
  /* 10321eca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10321ecc jmp 0x10321f5a */
  goto L_10321f5a;
L_10321ed1:;
  /* 10321ed1 lock inc dword ptr [0x1033f844] */
  x86_unimpl("lock inc @ 0x10321ed1");
  /* 10321ed8 cmp dword ptr [0x1033f834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321edf jg 0x10321ee5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10321ee5;
  /* 10321ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10321ee3 jmp 0x10321efe */
  goto L_10321efe;
L_10321ee5:;
  /* 10321ee5 lock dec dword ptr [0x1033f844] */
  x86_unimpl("lock dec @ 0x10321ee5");
  /* 10321eec mov ebx, ecx */
  EBX = (ECX);
  /* 10321eee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10321ef0 call 0x103170c0 */
  push32(0x10321ef5u); f_103170c0();
  /* 10321ef5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10321efc mov ecx, ebx */
  ECX = (EBX);
L_10321efe:;
  /* 10321efe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321f00 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10321f02 mov edi, edi */
  EDI = (EDI);
L_10321f04:;
  /* 10321f04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10321f06 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321f08 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10321f0a je 0x10321f2f */
  if (C.zf) goto L_10321f2f;
  /* 10321f0c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10321f0e je 0x10321f2f */
  if (C.zf) goto L_10321f2f;
  /* 10321f10 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10321f11 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10321f12 push ecx */
  push32((uint32_t)(ECX));
  /* 10321f13 push eax */
  push32((uint32_t)(EAX));
  /* 10321f14 push ebx */
  push32((uint32_t)(EBX));
  /* 10321f15 call 0x10322f00 */
  push32(0x10321f1au); f_10322f00();
  /* 10321f1a mov ebx, eax */
  EBX = (EAX);
  /* 10321f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321f1f call 0x10322f00 */
  push32(0x10321f24u); f_10322f00();
  /* 10321f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321f27 pop ecx */
  ECX = (pop32());
  /* 10321f28 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321f2a jne 0x10321f35 */
  if (!C.zf) goto L_10321f35;
  /* 10321f2c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10321f2d jne 0x10321f04 */
  if (!C.zf) goto L_10321f04;
L_10321f2f:;
  /* 10321f2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10321f31 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321f33 je 0x10321f3e */
  if (C.zf) goto L_10321f3e;
L_10321f35:;
  /* 10321f35 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10321f3a jb 0x10321f3e */
  if (C.cf) goto L_10321f3e;
  /* 10321f3c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10321f3e:;
  /* 10321f3e pop eax */
  EAX = (pop32());
  /* 10321f3f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321f41 jne 0x10321f4c */
  if (!C.zf) goto L_10321f4c;
  /* 10321f43 lock dec dword ptr [0x1033f844] */
  x86_unimpl("lock dec @ 0x10321f43");
  /* 10321f4a jmp 0x10321f5a */
  goto L_10321f5a;
L_10321f4c:;
  /* 10321f4c mov ebx, ecx */
  EBX = (ECX);
  /* 10321f4e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10321f50 call 0x10317160 */
  push32(0x10321f55u); f_10317160();
  /* 10321f55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321f58 mov ecx, ebx */
  ECX = (EBX);
L_10321f5a:;
  /* 10321f5a mov eax, ecx */
  EAX = (ECX);
  /* 10321f5c pop ebx */
  EBX = (pop32());
  /* 10321f5d pop esi */
  ESI = (pop32());
  /* 10321f5e pop edi */
  EDI = (pop32());
  /* 10321f5f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10321f60 ret  */
  ESPCHK(0x10321e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f70 @ 0x10321f70 (255 bytes, 88 insns) */
void f_10321f70(void) {
  FTRACE(0x10321f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10321f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10321f71 mov ebp, esp */
  EBP = (ESP);
  /* 10321f73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10321f76:;
  /* 10321f76 cmp dword ptr [0x1033dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321f7d jle 0x10321f96 */
  if ((C.zf||C.sf!=C.of)) goto L_10321f96;
  /* 10321f7f push 8 */
  push32((uint32_t)(0x8u));
  /* 10321f81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321f84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10321f86 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10321f88 push ecx */
  push32((uint32_t)(ECX));
  /* 10321f89 call 0x103196d0 */
  push32(0x10321f8eu); f_103196d0();
  /* 10321f8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10321f91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10321f94 jmp 0x10321faf */
  goto L_10321faf;
L_10321f96:;
  /* 10321f96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321f99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321f9b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10321f9d mov ecx, dword ptr [0x1033dc98] */
  ECX = (r32((uint32_t)(0x1033dc98)));
  /* 10321fa3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10321fa5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10321fa9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10321fac mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10321faf:;
  /* 10321faf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321fb3 je 0x10321fc0 */
  if (C.zf) goto L_10321fc0;
  /* 10321fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321fb8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321fbb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10321fbe jmp 0x10321f76 */
  goto L_10321f76;
L_10321fc0:;
  /* 10321fc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321fc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10321fc5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10321fc7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10321fca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321fcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321fd0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10321fd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10321fd6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10321fd9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321fdd je 0x10321fe5 */
  if (C.zf) goto L_10321fe5;
  /* 10321fdf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10321fe3 jne 0x10321ff8 */
  if (!C.zf) goto L_10321ff8;
L_10321fe5:;
  /* 10321fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321fe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10321fea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10321fec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10321fef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10321ff2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10321ff5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10321ff8:;
  /* 10321ff8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10321fff:;
  /* 10321fff cmp dword ptr [0x1033dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322006 jle 0x1032201b */
  if ((C.zf||C.sf!=C.of)) goto L_1032201b;
  /* 10322008 push 4 */
  push32((uint32_t)(0x4u));
  /* 1032200a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032200d push edx */
  push32((uint32_t)(EDX));
  /* 1032200e call 0x103196d0 */
  push32(0x10322013u); f_103196d0();
  /* 10322013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322016 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10322019 jmp 0x10322030 */
  goto L_10322030;
L_1032201b:;
  /* 1032201b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032201e mov ecx, dword ptr [0x1033dc98] */
  ECX = (r32((uint32_t)(0x1033dc98)));
  /* 10322024 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10322026 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1032202a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1032202d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10322030:;
  /* 10322030 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322034 je 0x1032205b */
  if (C.zf) goto L_1032205b;
  /* 10322036 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10322039 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1032203c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032203f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10322043 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10322046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322049 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1032204b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1032204d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10322050 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322053 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322056 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10322059 jmp 0x10321fff */
  goto L_10321fff;
L_1032205b:;
  /* 1032205b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032205f jne 0x10322068 */
  if (!C.zf) goto L_10322068;
  /* 10322061 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10322064 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10322066 jmp 0x1032206b */
  goto L_1032206b;
L_10322068:;
  /* 10322068 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1032206b:;
  /* 1032206b mov esp, ebp */
  ESP = (EBP);
  /* 1032206d pop ebp */
  EBP = (pop32());
  /* 1032206e ret  */
  ESPCHK(0x10321f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012070 @ 0x10322070 (17 bytes, 8 insns) */
void f_10322070(void) {
  FTRACE(0x10322070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322070 push ebp */
  push32((uint32_t)(EBP));
  /* 10322071 mov ebp, esp */
  EBP = (ESP);
  /* 10322073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322076 push eax */
  push32((uint32_t)(EAX));
  /* 10322077 call 0x10321f70 */
  push32(0x1032207cu); f_10321f70();
  /* 1032207c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032207f pop ebp */
  EBP = (pop32());
  /* 10322080 ret  */
  ESPCHK(0x10322070u, _esp0);
  ESP += 4; return;
}

/* FUN_10012090 @ 0x10322090 (297 bytes, 106 insns) */
void f_10322090(void) {
  FTRACE(0x10322090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322090 push ebp */
  push32((uint32_t)(EBP));
  /* 10322091 mov ebp, esp */
  EBP = (ESP);
  /* 10322093 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10322096 push esi */
  push32((uint32_t)(ESI));
L_10322097:;
  /* 10322097 cmp dword ptr [0x1033dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032209e jle 0x103220b7 */
  if ((C.zf||C.sf!=C.of)) goto L_103220b7;
  /* 103220a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 103220a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103220a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103220a7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103220a9 push ecx */
  push32((uint32_t)(ECX));
  /* 103220aa call 0x103196d0 */
  push32(0x103220afu); f_103196d0();
  /* 103220af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103220b2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103220b5 jmp 0x103220d0 */
  goto L_103220d0;
L_103220b7:;
  /* 103220b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103220ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103220bc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103220be mov ecx, dword ptr [0x1033dc98] */
  ECX = (r32((uint32_t)(0x1033dc98)));
  /* 103220c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103220c6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103220ca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 103220cd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_103220d0:;
  /* 103220d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103220d4 je 0x103220e1 */
  if (C.zf) goto L_103220e1;
  /* 103220d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103220d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103220dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103220df jmp 0x10322097 */
  goto L_10322097;
L_103220e1:;
  /* 103220e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103220e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103220e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103220e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103220eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103220ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103220f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103220f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103220f7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103220fa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103220fe je 0x10322106 */
  if (C.zf) goto L_10322106;
  /* 10322100 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322104 jne 0x10322119 */
  if (!C.zf) goto L_10322119;
L_10322106:;
  /* 10322106 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322109 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032210b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1032210d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10322110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322113 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322116 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10322119:;
  /* 10322119 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10322120 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10322127:;
  /* 10322127 cmp dword ptr [0x1033dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032212e jle 0x10322143 */
  if ((C.zf||C.sf!=C.of)) goto L_10322143;
  /* 10322130 push 4 */
  push32((uint32_t)(0x4u));
  /* 10322132 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10322135 push edx */
  push32((uint32_t)(EDX));
  /* 10322136 call 0x103196d0 */
  push32(0x1032213bu); f_103196d0();
  /* 1032213b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032213e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10322141 jmp 0x10322158 */
  goto L_10322158;
L_10322143:;
  /* 10322143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10322146 mov ecx, dword ptr [0x1033dc98] */
  ECX = (r32((uint32_t)(0x1033dc98)));
  /* 1032214c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1032214e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10322152 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10322155 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10322158:;
  /* 10322158 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032215c je 0x10322199 */
  if (C.zf) goto L_10322199;
  /* 1032215e push 0 */
  push32((uint32_t)(0x0u));
  /* 10322160 push 0xa */
  push32((uint32_t)(0xau));
  /* 10322162 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10322165 push eax */
  push32((uint32_t)(EAX));
  /* 10322166 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322169 push ecx */
  push32((uint32_t)(ECX));
  /* 1032216a call 0x10323030 */
  push32(0x1032216fu); f_10323030();
  /* 1032216f mov ecx, eax */
  ECX = (EAX);
  /* 10322171 mov esi, edx */
  ESI = (EDX);
  /* 10322173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10322176 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10322179 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1032217a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032217c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1032217e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10322181 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10322184 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322187 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322189 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1032218b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1032218e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322191 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322194 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10322197 jmp 0x10322127 */
  goto L_10322127;
L_10322199:;
  /* 10322199 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032219d jne 0x103221ae */
  if (!C.zf) goto L_103221ae;
  /* 1032219f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103221a2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103221a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103221a7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103221aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103221ac jmp 0x103221b4 */
  goto L_103221b4;
L_103221ae:;
  /* 103221ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103221b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_103221b4:;
  /* 103221b4 pop esi */
  ESI = (pop32());
  /* 103221b5 mov esp, ebp */
  ESP = (EBP);
  /* 103221b7 pop ebp */
  EBP = (pop32());
  /* 103221b8 ret  */
  ESPCHK(0x10322090u, _esp0);
  ESP += 4; return;
}

/* FUN_100121c0 @ 0x103221c0 (61 bytes, 18 insns) */
void f_103221c0(void) {
  FTRACE(0x103221c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103221c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103221c1 mov ebp, esp */
  EBP = (ESP);
  /* 103221c3 cmp dword ptr [0x1033f810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103221ca jne 0x103221fb */
  if (!C.zf) goto L_103221fb;
  /* 103221cc push 0xb */
  push32((uint32_t)(0xbu));
  /* 103221ce call 0x103170c0 */
  push32(0x103221d3u); f_103170c0();
  /* 103221d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103221d6 cmp dword ptr [0x1033f810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103221dd jne 0x103221f1 */
  if (!C.zf) goto L_103221f1;
  /* 103221df call 0x10322220 */
  push32(0x103221e4u); f_10322220();
  /* 103221e4 mov eax, dword ptr [0x1033f810] */
  EAX = (r32((uint32_t)(0x1033f810)));
  /* 103221e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103221ec mov dword ptr [0x1033f810], eax */
  w32((uint32_t)(0x1033f810), (EAX));
L_103221f1:;
  /* 103221f1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103221f3 call 0x10317160 */
  push32(0x103221f8u); f_10317160();
  /* 103221f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103221fb:;
  /* 103221fb pop ebp */
  EBP = (pop32());
  /* 103221fc ret  */
  ESPCHK(0x103221c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012200 @ 0x10322200 (30 bytes, 11 insns) */
void f_10322200(void) {
  FTRACE(0x10322200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322200 push ebp */
  push32((uint32_t)(EBP));
  /* 10322201 mov ebp, esp */
  EBP = (ESP);
  /* 10322203 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10322205 call 0x103170c0 */
  push32(0x1032220au); f_103170c0();
  /* 1032220a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032220d call 0x10322220 */
  push32(0x10322212u); f_10322220();
  /* 10322212 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10322214 call 0x10317160 */
  push32(0x10322219u); f_10317160();
  /* 10322219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032221c pop ebp */
  EBP = (pop32());
  /* 1032221d ret  */
  ESPCHK(0x10322200u, _esp0);
  ESP += 4; return;
}

/* FUN_10012220 @ 0x10322220 (939 bytes, 266 insns) */
void f_10322220(void) {
  FTRACE(0x10322220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322220 push ebp */
  push32((uint32_t)(EBP));
  /* 10322221 mov ebp, esp */
  EBP = (ESP);
  /* 10322223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10322226 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1032222d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1032222f call 0x103170c0 */
  push32(0x10322234u); f_103170c0();
  /* 10322234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322237 mov dword ptr [0x1033f758], 0 */
  w32((uint32_t)(0x1033f758), (0x0u));
  /* 10322241 mov dword ptr [0x1033ee38], 0xffffffff */
  w32((uint32_t)(0x1033ee38), (0xffffffffu));
  /* 1032224b mov eax, dword ptr [0x1033ee38] */
  EAX = (r32((uint32_t)(0x1033ee38)));
  /* 10322250 mov dword ptr [0x1033ee28], eax */
  w32((uint32_t)(0x1033ee28), (EAX));
  /* 10322255 push 0x1033b8c0 */
  push32((uint32_t)(0x1033b8c0u));
  /* 1032225a call 0x103230a0 */
  push32(0x1032225fu); f_103230a0();
  /* 1032225f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322262 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10322265 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322269 jne 0x103223a3 */
  if (!C.zf) goto L_103223a3;
  /* 1032226f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10322271 call 0x10317160 */
  push32(0x10322276u); f_10317160();
  /* 10322276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322279 push 0x1033f760 */
  push32((uint32_t)(0x1033f760u));
  /* 1032227e call dword ptr [0x1034226c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034226c))), 0x10322284u);
  /* 10322284 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322287 je 0x1032239e */
  if (C.zf) goto L_1032239e;
  /* 1032228d mov dword ptr [0x1033f758], 1 */
  w32((uint32_t)(0x1033f758), (0x1u));
  /* 10322297 mov ecx, dword ptr [0x1033f760] */
  ECX = (r32((uint32_t)(0x1033f760)));
  /* 1032229d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103222a0 mov dword ptr [0x1033ed90], ecx */
  w32((uint32_t)(0x1033ed90), (ECX));
  /* 103222a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103222a8 mov dx, word ptr [0x1033f7a6] */
  DX = (r16((uint32_t)(0x1033f7a6)));
  /* 103222af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103222b1 je 0x103222c9 */
  if (C.zf) goto L_103222c9;
  /* 103222b3 mov eax, dword ptr [0x1033f7b4] */
  EAX = (r32((uint32_t)(0x1033f7b4)));
  /* 103222b8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103222bb mov ecx, dword ptr [0x1033ed90] */
  ECX = (r32((uint32_t)(0x1033ed90)));
  /* 103222c1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103222c3 mov dword ptr [0x1033ed90], ecx */
  w32((uint32_t)(0x1033ed90), (ECX));
L_103222c9:;
  /* 103222c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103222cb mov dx, word ptr [0x1033f7fa] */
  DX = (r16((uint32_t)(0x1033f7fa)));
  /* 103222d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103222d4 je 0x103222fe */
  if (C.zf) goto L_103222fe;
  /* 103222d6 cmp dword ptr [0x1033f808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103222dd je 0x103222fe */
  if (C.zf) goto L_103222fe;
  /* 103222df mov dword ptr [0x1033ed94], 1 */
  w32((uint32_t)(0x1033ed94), (0x1u));
  /* 103222e9 mov eax, dword ptr [0x1033f808] */
  EAX = (r32((uint32_t)(0x1033f808)));
  /* 103222ee sub eax, dword ptr [0x1033f7b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033f7b4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103222f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103222f7 mov dword ptr [0x1033ed98], eax */
  w32((uint32_t)(0x1033ed98), (EAX));
  /* 103222fc jmp 0x10322312 */
  goto L_10322312;
L_103222fe:;
  /* 103222fe mov dword ptr [0x1033ed94], 0 */
  w32((uint32_t)(0x1033ed94), (0x0u));
  /* 10322308 mov dword ptr [0x1033ed98], 0 */
  w32((uint32_t)(0x1033ed98), (0x0u));
L_10322312:;
  /* 10322312 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10322315 push ecx */
  push32((uint32_t)(ECX));
  /* 10322316 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322318 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1032231a mov edx, dword ptr [0x1033ee1c] */
  EDX = (r32((uint32_t)(0x1033ee1c)));
  /* 10322320 push edx */
  push32((uint32_t)(EDX));
  /* 10322321 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10322323 push 0x1033f764 */
  push32((uint32_t)(0x1033f764u));
  /* 10322328 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1032232d mov eax, dword ptr [0x1033f6c8] */
  EAX = (r32((uint32_t)(0x1033f6c8)));
  /* 10322332 push eax */
  push32((uint32_t)(EAX));
  /* 10322333 call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x10322339u);
  /* 10322339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1032233b je 0x1032234f */
  if (C.zf) goto L_1032234f;
  /* 1032233d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322341 jne 0x1032234f */
  if (!C.zf) goto L_1032234f;
  /* 10322343 mov ecx, dword ptr [0x1033ee1c] */
  ECX = (r32((uint32_t)(0x1033ee1c)));
  /* 10322349 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1032234d jmp 0x10322358 */
  goto L_10322358;
L_1032234f:;
  /* 1032234f mov edx, dword ptr [0x1033ee1c] */
  EDX = (r32((uint32_t)(0x1033ee1c)));
  /* 10322355 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10322358:;
  /* 10322358 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1032235b push eax */
  push32((uint32_t)(EAX));
  /* 1032235c push 0 */
  push32((uint32_t)(0x0u));
  /* 1032235e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10322360 mov ecx, dword ptr [0x1033ee20] */
  ECX = (r32((uint32_t)(0x1033ee20)));
  /* 10322366 push ecx */
  push32((uint32_t)(ECX));
  /* 10322367 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10322369 push 0x1033f7b8 */
  push32((uint32_t)(0x1033f7b8u));
  /* 1032236e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10322373 mov edx, dword ptr [0x1033f6c8] */
  EDX = (r32((uint32_t)(0x1033f6c8)));
  /* 10322379 push edx */
  push32((uint32_t)(EDX));
  /* 1032237a call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x10322380u);
  /* 10322380 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10322382 je 0x10322395 */
  if (C.zf) goto L_10322395;
  /* 10322384 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322388 jne 0x10322395 */
  if (!C.zf) goto L_10322395;
  /* 1032238a mov eax, dword ptr [0x1033ee20] */
  EAX = (r32((uint32_t)(0x1033ee20)));
  /* 1032238f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10322393 jmp 0x1032239e */
  goto L_1032239e;
L_10322395:;
  /* 10322395 mov ecx, dword ptr [0x1033ee20] */
  ECX = (r32((uint32_t)(0x1033ee20)));
  /* 1032239b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1032239e:;
  /* 1032239e jmp 0x103225c7 */
  goto L_103225c7;
L_103223a3:;
  /* 103223a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103223a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103223a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103223ab je 0x103223cd */
  if (C.zf) goto L_103223cd;
  /* 103223ad cmp dword ptr [0x1033f80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103223b4 je 0x103223dc */
  if (C.zf) goto L_103223dc;
  /* 103223b6 mov ecx, dword ptr [0x1033f80c] */
  ECX = (r32((uint32_t)(0x1033f80c)));
  /* 103223bc push ecx */
  push32((uint32_t)(ECX));
  /* 103223bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103223c0 push edx */
  push32((uint32_t)(EDX));
  /* 103223c1 call 0x1031f350 */
  push32(0x103223c6u); f_1031f350();
  /* 103223c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103223c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103223cb jne 0x103223dc */
  if (!C.zf) goto L_103223dc;
L_103223cd:;
  /* 103223cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 103223cf call 0x10317160 */
  push32(0x103223d4u); f_10317160();
  /* 103223d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103223d7 jmp 0x103225c7 */
  goto L_103225c7;
L_103223dc:;
  /* 103223dc push 2 */
  push32((uint32_t)(0x2u));
  /* 103223de mov eax, dword ptr [0x1033f80c] */
  EAX = (r32((uint32_t)(0x1033f80c)));
  /* 103223e3 push eax */
  push32((uint32_t)(EAX));
  /* 103223e4 call 0x10314150 */
  push32(0x103223e9u); f_10314150();
  /* 103223e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103223ec push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 103223f1 push 0x1033b8b8 */
  push32((uint32_t)(0x1033b8b8u));
  /* 103223f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103223f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103223fb push ecx */
  push32((uint32_t)(ECX));
  /* 103223fc call 0x103164f0 */
  push32(0x10322401u); f_103164f0();
  /* 10322401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322404 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322407 push eax */
  push32((uint32_t)(EAX));
  /* 10322408 call 0x103136c0 */
  push32(0x1032240du); f_103136c0();
  /* 1032240d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322410 mov dword ptr [0x1033f80c], eax */
  w32((uint32_t)(0x1033f80c), (EAX));
  /* 10322415 cmp dword ptr [0x1033f80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032241c jne 0x1032242d */
  if (!C.zf) goto L_1032242d;
  /* 1032241e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10322420 call 0x10317160 */
  push32(0x10322425u); f_10317160();
  /* 10322425 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322428 jmp 0x103225c7 */
  goto L_103225c7;
L_1032242d:;
  /* 1032242d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322430 push edx */
  push32((uint32_t)(EDX));
  /* 10322431 mov eax, dword ptr [0x1033f80c] */
  EAX = (r32((uint32_t)(0x1033f80c)));
  /* 10322436 push eax */
  push32((uint32_t)(EAX));
  /* 10322437 call 0x10316670 */
  push32(0x1032243cu); f_10316670();
  /* 1032243c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032243f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10322441 call 0x10317160 */
  push32(0x10322446u); f_10317160();
  /* 10322446 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322449 push 3 */
  push32((uint32_t)(0x3u));
  /* 1032244b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032244e push ecx */
  push32((uint32_t)(ECX));
  /* 1032244f mov edx, dword ptr [0x1033ee1c] */
  EDX = (r32((uint32_t)(0x1033ee1c)));
  /* 10322455 push edx */
  push32((uint32_t)(EDX));
  /* 10322456 call 0x10316ee0 */
  push32(0x1032245bu); f_10316ee0();
  /* 1032245b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032245e mov eax, dword ptr [0x1033ee1c] */
  EAX = (r32((uint32_t)(0x1033ee1c)));
  /* 10322463 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10322467 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032246a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032246d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10322470 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322473 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10322476 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322479 jne 0x1032248d */
  if (!C.zf) goto L_1032248d;
  /* 1032247b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032247e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322481 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10322484 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322487 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032248a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1032248d:;
  /* 1032248d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322490 push eax */
  push32((uint32_t)(EAX));
  /* 10322491 call 0x10321f70 */
  push32(0x10322496u); f_10321f70();
  /* 10322496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322499 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1032249f mov dword ptr [0x1033ed90], eax */
  w32((uint32_t)(0x1033ed90), (EAX));
L_103224a4:;
  /* 103224a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103224a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103224aa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103224ad je 0x103224c5 */
  if (C.zf) goto L_103224c5;
  /* 103224af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103224b2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103224b5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103224b8 jl 0x103224d0 */
  if ((C.sf!=C.of)) goto L_103224d0;
  /* 103224ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103224bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103224c0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103224c3 jg 0x103224d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_103224d0;
L_103224c5:;
  /* 103224c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103224c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103224cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103224ce jmp 0x103224a4 */
  goto L_103224a4;
L_103224d0:;
  /* 103224d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103224d3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103224d6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103224d9 jne 0x10322575 */
  if (!C.zf) goto L_10322575;
  /* 103224df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103224e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103224e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103224e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103224eb push edx */
  push32((uint32_t)(EDX));
  /* 103224ec call 0x10321f70 */
  push32(0x103224f1u); f_10321f70();
  /* 103224f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103224f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103224f7 mov ecx, dword ptr [0x1033ed90] */
  ECX = (r32((uint32_t)(0x1033ed90)));
  /* 103224fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103224ff mov dword ptr [0x1033ed90], ecx */
  w32((uint32_t)(0x1033ed90), (ECX));
L_10322505:;
  /* 10322505 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322508 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1032250b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032250e jl 0x10322526 */
  if ((C.sf!=C.of)) goto L_10322526;
  /* 10322510 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322513 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10322516 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322519 jg 0x10322526 */
  if ((!C.zf&&C.sf==C.of)) goto L_10322526;
  /* 1032251b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032251e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322521 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10322524 jmp 0x10322505 */
  goto L_10322505;
L_10322526:;
  /* 10322526 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322529 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1032252c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032252f jne 0x10322575 */
  if (!C.zf) goto L_10322575;
  /* 10322531 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322534 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322537 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1032253a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032253d push ecx */
  push32((uint32_t)(ECX));
  /* 1032253e call 0x10321f70 */
  push32(0x10322543u); f_10321f70();
  /* 10322543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322546 mov edx, dword ptr [0x1033ed90] */
  EDX = (r32((uint32_t)(0x1033ed90)));
  /* 1032254c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032254e mov dword ptr [0x1033ed90], edx */
  w32((uint32_t)(0x1033ed90), (EDX));
L_10322554:;
  /* 10322554 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322557 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1032255a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032255d jl 0x10322575 */
  if ((C.sf!=C.of)) goto L_10322575;
  /* 1032255f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322562 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10322565 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322568 jg 0x10322575 */
  if ((!C.zf&&C.sf==C.of)) goto L_10322575;
  /* 1032256a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032256d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322570 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10322573 jmp 0x10322554 */
  goto L_10322554;
L_10322575:;
  /* 10322575 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322579 je 0x10322589 */
  if (C.zf) goto L_10322589;
  /* 1032257b mov edx, dword ptr [0x1033ed90] */
  EDX = (r32((uint32_t)(0x1033ed90)));
  /* 10322581 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10322583 mov dword ptr [0x1033ed90], edx */
  w32((uint32_t)(0x1033ed90), (EDX));
L_10322589:;
  /* 10322589 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032258c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1032258f mov dword ptr [0x1033ed94], ecx */
  w32((uint32_t)(0x1033ed94), (ECX));
  /* 10322595 cmp dword ptr [0x1033ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032259c je 0x103225be */
  if (C.zf) goto L_103225be;
  /* 1032259e push 3 */
  push32((uint32_t)(0x3u));
  /* 103225a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103225a3 push edx */
  push32((uint32_t)(EDX));
  /* 103225a4 mov eax, dword ptr [0x1033ee20] */
  EAX = (r32((uint32_t)(0x1033ee20)));
  /* 103225a9 push eax */
  push32((uint32_t)(EAX));
  /* 103225aa call 0x10316ee0 */
  push32(0x103225afu); f_10316ee0();
  /* 103225af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103225b2 mov ecx, dword ptr [0x1033ee20] */
  ECX = (r32((uint32_t)(0x1033ee20)));
  /* 103225b8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 103225bc jmp 0x103225c7 */
  goto L_103225c7;
L_103225be:;
  /* 103225be mov edx, dword ptr [0x1033ee20] */
  EDX = (r32((uint32_t)(0x1033ee20)));
  /* 103225c4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_103225c7:;
  /* 103225c7 mov esp, ebp */
  ESP = (EBP);
  /* 103225c9 pop ebp */
  EBP = (pop32());
  /* 103225ca ret  */
  ESPCHK(0x10322220u, _esp0);
  ESP += 4; return;
}

/* FUN_100125d0 @ 0x103225d0 (46 bytes, 18 insns) */
void f_103225d0(void) {
  FTRACE(0x103225d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103225d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103225d1 mov ebp, esp */
  EBP = (ESP);
  /* 103225d3 push ecx */
  push32((uint32_t)(ECX));
  /* 103225d4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103225d6 call 0x103170c0 */
  push32(0x103225dbu); f_103170c0();
  /* 103225db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103225de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103225e1 push eax */
  push32((uint32_t)(EAX));
  /* 103225e2 call 0x10322600 */
  push32(0x103225e7u); f_10322600();
  /* 103225e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103225ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103225ed push 0xb */
  push32((uint32_t)(0xbu));
  /* 103225ef call 0x10317160 */
  push32(0x103225f4u); f_10317160();
  /* 103225f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103225f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103225fa mov esp, ebp */
  ESP = (EBP);
  /* 103225fc pop ebp */
  EBP = (pop32());
  /* 103225fd ret  */
  ESPCHK(0x103225d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x10322600 (762 bytes, 246 insns) */
void f_10322600(void) {
  FTRACE(0x10322600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322600 push ebp */
  push32((uint32_t)(EBP));
  /* 10322601 mov ebp, esp */
  EBP = (ESP);
  /* 10322603 push ecx */
  push32((uint32_t)(ECX));
  /* 10322604 cmp dword ptr [0x1033ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032260b jne 0x10322614 */
  if (!C.zf) goto L_10322614;
  /* 1032260d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032260f jmp 0x103228f6 */
  goto L_103228f6;
L_10322614:;
  /* 10322614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322617 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1032261a cmp ecx, dword ptr [0x1033ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1033ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322620 jne 0x10322634 */
  if (!C.zf) goto L_10322634;
  /* 10322622 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322625 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10322628 cmp eax, dword ptr [0x1033ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032262e je 0x103227fb */
  if (C.zf) goto L_103227fb;
L_10322634:;
  /* 10322634 cmp dword ptr [0x1033f758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032263b je 0x103227b5 */
  if (C.zf) goto L_103227b5;
  /* 10322641 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10322643 mov cx, word ptr [0x1033f7f8] */
  CX = (r16((uint32_t)(0x1033f7f8)));
  /* 1032264a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1032264c jne 0x103226a9 */
  if (!C.zf) goto L_103226a9;
  /* 1032264e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10322650 mov dx, word ptr [0x1033f806] */
  DX = (r16((uint32_t)(0x1033f806)));
  /* 10322657 push edx */
  push32((uint32_t)(EDX));
  /* 10322658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032265a mov ax, word ptr [0x1033f804] */
  AX = (r16((uint32_t)(0x1033f804)));
  /* 10322660 push eax */
  push32((uint32_t)(EAX));
  /* 10322661 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10322663 mov cx, word ptr [0x1033f802] */
  CX = (r16((uint32_t)(0x1033f802)));
  /* 1032266a push ecx */
  push32((uint32_t)(ECX));
  /* 1032266b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1032266d mov dx, word ptr [0x1033f800] */
  DX = (r16((uint32_t)(0x1033f800)));
  /* 10322674 push edx */
  push32((uint32_t)(EDX));
  /* 10322675 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322679 mov ax, word ptr [0x1033f7fc] */
  AX = (r16((uint32_t)(0x1033f7fc)));
  /* 1032267f push eax */
  push32((uint32_t)(EAX));
  /* 10322680 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10322682 mov cx, word ptr [0x1033f7fe] */
  CX = (r16((uint32_t)(0x1033f7fe)));
  /* 10322689 push ecx */
  push32((uint32_t)(ECX));
  /* 1032268a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1032268c mov dx, word ptr [0x1033f7fa] */
  DX = (r16((uint32_t)(0x1033f7fa)));
  /* 10322693 push edx */
  push32((uint32_t)(EDX));
  /* 10322694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322697 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1032269a push ecx */
  push32((uint32_t)(ECX));
  /* 1032269b push 1 */
  push32((uint32_t)(0x1u));
  /* 1032269d push 1 */
  push32((uint32_t)(0x1u));
  /* 1032269f call 0x10322900 */
  push32(0x103226a4u); f_10322900();
  /* 103226a4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103226a7 jmp 0x103226fa */
  goto L_103226fa;
L_103226a9:;
  /* 103226a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103226ab mov dx, word ptr [0x1033f806] */
  DX = (r16((uint32_t)(0x1033f806)));
  /* 103226b2 push edx */
  push32((uint32_t)(EDX));
  /* 103226b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103226b5 mov ax, word ptr [0x1033f804] */
  AX = (r16((uint32_t)(0x1033f804)));
  /* 103226bb push eax */
  push32((uint32_t)(EAX));
  /* 103226bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103226be mov cx, word ptr [0x1033f802] */
  CX = (r16((uint32_t)(0x1033f802)));
  /* 103226c5 push ecx */
  push32((uint32_t)(ECX));
  /* 103226c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103226c8 mov dx, word ptr [0x1033f800] */
  DX = (r16((uint32_t)(0x1033f800)));
  /* 103226cf push edx */
  push32((uint32_t)(EDX));
  /* 103226d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103226d2 mov ax, word ptr [0x1033f7fe] */
  AX = (r16((uint32_t)(0x1033f7fe)));
  /* 103226d8 push eax */
  push32((uint32_t)(EAX));
  /* 103226d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103226db push 0 */
  push32((uint32_t)(0x0u));
  /* 103226dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103226df mov cx, word ptr [0x1033f7fa] */
  CX = (r16((uint32_t)(0x1033f7fa)));
  /* 103226e6 push ecx */
  push32((uint32_t)(ECX));
  /* 103226e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103226ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103226ed push eax */
  push32((uint32_t)(EAX));
  /* 103226ee push 0 */
  push32((uint32_t)(0x0u));
  /* 103226f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103226f2 call 0x10322900 */
  push32(0x103226f7u); f_10322900();
  /* 103226f7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103226fa:;
  /* 103226fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103226fc mov cx, word ptr [0x1033f7a4] */
  CX = (r16((uint32_t)(0x1033f7a4)));
  /* 10322703 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10322705 jne 0x10322762 */
  if (!C.zf) goto L_10322762;
  /* 10322707 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10322709 mov dx, word ptr [0x1033f7b2] */
  DX = (r16((uint32_t)(0x1033f7b2)));
  /* 10322710 push edx */
  push32((uint32_t)(EDX));
  /* 10322711 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322713 mov ax, word ptr [0x1033f7b0] */
  AX = (r16((uint32_t)(0x1033f7b0)));
  /* 10322719 push eax */
  push32((uint32_t)(EAX));
  /* 1032271a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1032271c mov cx, word ptr [0x1033f7ae] */
  CX = (r16((uint32_t)(0x1033f7ae)));
  /* 10322723 push ecx */
  push32((uint32_t)(ECX));
  /* 10322724 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10322726 mov dx, word ptr [0x1033f7ac] */
  DX = (r16((uint32_t)(0x1033f7ac)));
  /* 1032272d push edx */
  push32((uint32_t)(EDX));
  /* 1032272e push 0 */
  push32((uint32_t)(0x0u));
  /* 10322730 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322732 mov ax, word ptr [0x1033f7a8] */
  AX = (r16((uint32_t)(0x1033f7a8)));
  /* 10322738 push eax */
  push32((uint32_t)(EAX));
  /* 10322739 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1032273b mov cx, word ptr [0x1033f7aa] */
  CX = (r16((uint32_t)(0x1033f7aa)));
  /* 10322742 push ecx */
  push32((uint32_t)(ECX));
  /* 10322743 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10322745 mov dx, word ptr [0x1033f7a6] */
  DX = (r16((uint32_t)(0x1033f7a6)));
  /* 1032274c push edx */
  push32((uint32_t)(EDX));
  /* 1032274d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322750 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10322753 push ecx */
  push32((uint32_t)(ECX));
  /* 10322754 push 1 */
  push32((uint32_t)(0x1u));
  /* 10322756 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322758 call 0x10322900 */
  push32(0x1032275du); f_10322900();
  /* 1032275d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322760 jmp 0x103227b3 */
  goto L_103227b3;
L_10322762:;
  /* 10322762 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10322764 mov dx, word ptr [0x1033f7b2] */
  DX = (r16((uint32_t)(0x1033f7b2)));
  /* 1032276b push edx */
  push32((uint32_t)(EDX));
  /* 1032276c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032276e mov ax, word ptr [0x1033f7b0] */
  AX = (r16((uint32_t)(0x1033f7b0)));
  /* 10322774 push eax */
  push32((uint32_t)(EAX));
  /* 10322775 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10322777 mov cx, word ptr [0x1033f7ae] */
  CX = (r16((uint32_t)(0x1033f7ae)));
  /* 1032277e push ecx */
  push32((uint32_t)(ECX));
  /* 1032277f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10322781 mov dx, word ptr [0x1033f7ac] */
  DX = (r16((uint32_t)(0x1033f7ac)));
  /* 10322788 push edx */
  push32((uint32_t)(EDX));
  /* 10322789 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032278b mov ax, word ptr [0x1033f7aa] */
  AX = (r16((uint32_t)(0x1033f7aa)));
  /* 10322791 push eax */
  push32((uint32_t)(EAX));
  /* 10322792 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322794 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322796 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10322798 mov cx, word ptr [0x1033f7a6] */
  CX = (r16((uint32_t)(0x1033f7a6)));
  /* 1032279f push ecx */
  push32((uint32_t)(ECX));
  /* 103227a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103227a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103227a6 push eax */
  push32((uint32_t)(EAX));
  /* 103227a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103227a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103227ab call 0x10322900 */
  push32(0x103227b0u); f_10322900();
  /* 103227b0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103227b3:;
  /* 103227b3 jmp 0x103227fb */
  goto L_103227fb;
L_103227b5:;
  /* 103227b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103227b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103227b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103227bb push 2 */
  push32((uint32_t)(0x2u));
  /* 103227bd push 0 */
  push32((uint32_t)(0x0u));
  /* 103227bf push 0 */
  push32((uint32_t)(0x0u));
  /* 103227c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103227c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 103227c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103227c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103227cb push edx */
  push32((uint32_t)(EDX));
  /* 103227cc push 1 */
  push32((uint32_t)(0x1u));
  /* 103227ce push 1 */
  push32((uint32_t)(0x1u));
  /* 103227d0 call 0x10322900 */
  push32(0x103227d5u); f_10322900();
  /* 103227d5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103227d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103227da push 0 */
  push32((uint32_t)(0x0u));
  /* 103227dc push 0 */
  push32((uint32_t)(0x0u));
  /* 103227de push 2 */
  push32((uint32_t)(0x2u));
  /* 103227e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103227e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103227e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 103227e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 103227e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103227eb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103227ee push ecx */
  push32((uint32_t)(ECX));
  /* 103227ef push 1 */
  push32((uint32_t)(0x1u));
  /* 103227f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103227f3 call 0x10322900 */
  push32(0x103227f8u); f_10322900();
  /* 103227f8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103227fb:;
  /* 103227fb mov edx, dword ptr [0x1033ee2c] */
  EDX = (r32((uint32_t)(0x1033ee2c)));
  /* 10322801 cmp edx, dword ptr [0x1033ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1033ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322807 jge 0x10322854 */
  if ((C.sf==C.of)) goto L_10322854;
  /* 10322809 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032280c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1032280f cmp ecx, dword ptr [0x1033ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1033ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322815 jl 0x10322825 */
  if ((C.sf!=C.of)) goto L_10322825;
  /* 10322817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032281a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1032281d cmp eax, dword ptr [0x1033ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322823 jle 0x1032282c */
  if ((C.zf||C.sf!=C.of)) goto L_1032282c;
L_10322825:;
  /* 10322825 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322827 jmp 0x103228f6 */
  goto L_103228f6;
L_1032282c:;
  /* 1032282c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032282f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10322832 cmp edx, dword ptr [0x1033ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1033ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322838 jle 0x10322852 */
  if ((C.zf||C.sf!=C.of)) goto L_10322852;
  /* 1032283a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032283d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10322840 cmp ecx, dword ptr [0x1033ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1033ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322846 jge 0x10322852 */
  if ((C.sf==C.of)) goto L_10322852;
  /* 10322848 mov eax, 1 */
  EAX = (0x1u);
  /* 1032284d jmp 0x103228f6 */
  goto L_103228f6;
L_10322852:;
  /* 10322852 jmp 0x10322897 */
  goto L_10322897;
L_10322854:;
  /* 10322854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322857 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1032285a cmp eax, dword ptr [0x1033ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322860 jl 0x10322870 */
  if ((C.sf!=C.of)) goto L_10322870;
  /* 10322862 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322865 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10322868 cmp edx, dword ptr [0x1033ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1033ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032286e jle 0x10322877 */
  if ((C.zf||C.sf!=C.of)) goto L_10322877;
L_10322870:;
  /* 10322870 mov eax, 1 */
  EAX = (0x1u);
  /* 10322875 jmp 0x103228f6 */
  goto L_103228f6;
L_10322877:;
  /* 10322877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032287a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1032287d cmp ecx, dword ptr [0x1033ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1033ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322883 jle 0x10322897 */
  if ((C.zf||C.sf!=C.of)) goto L_10322897;
  /* 10322885 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322888 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1032288b cmp eax, dword ptr [0x1033ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322891 jge 0x10322897 */
  if ((C.sf==C.of)) goto L_10322897;
  /* 10322893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322895 jmp 0x103228f6 */
  goto L_103228f6;
L_10322897:;
  /* 10322897 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032289a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1032289d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103228a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103228a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103228a5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103228a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103228aa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103228ad imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103228b3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103228b5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103228bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103228be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103228c1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103228c4 cmp edx, dword ptr [0x1033ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1033ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103228ca jne 0x103228e2 */
  if (!C.zf) goto L_103228e2;
  /* 103228cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103228cf cmp eax, dword ptr [0x1033ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103228d5 jl 0x103228de */
  if ((C.sf!=C.of)) goto L_103228de;
  /* 103228d7 mov eax, 1 */
  EAX = (0x1u);
  /* 103228dc jmp 0x103228f6 */
  goto L_103228f6;
L_103228de:;
  /* 103228de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103228e0 jmp 0x103228f6 */
  goto L_103228f6;
L_103228e2:;
  /* 103228e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103228e5 cmp ecx, dword ptr [0x1033ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1033ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103228eb jge 0x103228f4 */
  if ((C.sf==C.of)) goto L_103228f4;
  /* 103228ed mov eax, 1 */
  EAX = (0x1u);
  /* 103228f2 jmp 0x103228f6 */
  goto L_103228f6;
L_103228f4:;
  /* 103228f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103228f6:;
  /* 103228f6 mov esp, ebp */
  ESP = (EBP);
  /* 103228f8 pop ebp */
  EBP = (pop32());
  /* 103228f9 ret  */
  ESPCHK(0x10322600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012900 @ 0x10322900 (504 bytes, 145 insns) */
void f_10322900(void) {
  FTRACE(0x10322900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322900 push ebp */
  push32((uint32_t)(EBP));
  /* 10322901 mov ebp, esp */
  EBP = (ESP);
  /* 10322903 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10322906 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032290a jne 0x103229dc */
  if (!C.zf) goto L_103229dc;
  /* 10322910 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10322913 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10322916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10322918 jne 0x10322929 */
  if (!C.zf) goto L_10322929;
  /* 1032291a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1032291d mov edx, dword ptr [ecx*4 + 0x1033ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033ee4c)));
  /* 10322924 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10322927 jmp 0x10322936 */
  goto L_10322936;
L_10322929:;
  /* 10322929 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1032292c mov ecx, dword ptr [eax*4 + 0x1033ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1033ee80)));
  /* 10322933 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10322936:;
  /* 10322936 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10322939 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032293c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1032293f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10322942 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10322945 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1032294b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032294e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322950 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10322953 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10322956 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10322959 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1032295d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1032295e mov ecx, 7 */
  ECX = (0x7u);
  /* 10322963 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10322965 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10322968 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032296b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032296e jge 0x10322989 */
  if ((C.sf==C.of)) goto L_10322989;
  /* 10322970 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10322973 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10322976 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10322979 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1032297c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1032297f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322982 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322984 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10322987 jmp 0x1032299d */
  goto L_1032299d;
L_10322989:;
  /* 10322989 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1032298c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1032298f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10322992 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10322995 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322998 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032299a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1032299d:;
  /* 1032299d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103229a1 jne 0x103229da */
  if (!C.zf) goto L_103229da;
  /* 103229a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103229a6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 103229a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103229ab jne 0x103229bc */
  if (!C.zf) goto L_103229bc;
  /* 103229ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103229b0 mov eax, dword ptr [edx*4 + 0x1033ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1033ee50)));
  /* 103229b7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103229ba jmp 0x103229c9 */
  goto L_103229c9;
L_103229bc:;
  /* 103229bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103229bf mov edx, dword ptr [ecx*4 + 0x1033ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033ee84)));
  /* 103229c6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103229c9:;
  /* 103229c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103229cc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103229cf jle 0x103229da */
  if ((C.zf||C.sf!=C.of)) goto L_103229da;
  /* 103229d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103229d4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103229d7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103229da:;
  /* 103229da jmp 0x10322a11 */
  goto L_10322a11;
L_103229dc:;
  /* 103229dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103229df and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103229e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103229e4 jne 0x103229f5 */
  if (!C.zf) goto L_103229f5;
  /* 103229e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103229e9 mov ecx, dword ptr [eax*4 + 0x1033ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1033ee4c)));
  /* 103229f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103229f3 jmp 0x10322a02 */
  goto L_10322a02;
L_103229f5:;
  /* 103229f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103229f8 mov eax, dword ptr [edx*4 + 0x1033ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1033ee80)));
  /* 103229ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10322a02:;
  /* 10322a02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10322a05 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10322a08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10322a0b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322a0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10322a11:;
  /* 10322a11 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322a15 jne 0x10322a51 */
  if (!C.zf) goto L_10322a51;
  /* 10322a17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10322a1a mov dword ptr [0x1033ee2c], eax */
  w32((uint32_t)(0x1033ee2c), (EAX));
  /* 10322a1f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10322a22 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10322a25 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10322a28 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322a2a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10322a2d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10322a30 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322a32 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10322a38 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10322a3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322a3d mov dword ptr [0x1033ee30], ecx */
  w32((uint32_t)(0x1033ee30), (ECX));
  /* 10322a43 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10322a46 mov dword ptr [0x1033ee28], edx */
  w32((uint32_t)(0x1033ee28), (EDX));
  /* 10322a4c jmp 0x10322af4 */
  goto L_10322af4;
L_10322a51:;
  /* 10322a51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10322a54 mov dword ptr [0x1033ee3c], eax */
  w32((uint32_t)(0x1033ee3c), (EAX));
  /* 10322a59 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10322a5c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10322a5f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10322a62 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322a64 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10322a67 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10322a6a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322a6c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10322a72 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10322a75 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322a77 mov dword ptr [0x1033ee40], ecx */
  w32((uint32_t)(0x1033ee40), (ECX));
  /* 10322a7d mov edx, dword ptr [0x1033ed98] */
  EDX = (r32((uint32_t)(0x1033ed98)));
  /* 10322a83 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10322a89 mov eax, dword ptr [0x1033ee40] */
  EAX = (r32((uint32_t)(0x1033ee40)));
  /* 10322a8e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322a90 mov dword ptr [0x1033ee40], eax */
  w32((uint32_t)(0x1033ee40), (EAX));
  /* 10322a95 cmp dword ptr [0x1033ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322a9c jge 0x10322ac1 */
  if ((C.sf==C.of)) goto L_10322ac1;
  /* 10322a9e mov ecx, dword ptr [0x1033ee40] */
  ECX = (r32((uint32_t)(0x1033ee40)));
  /* 10322aa4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322aaa mov dword ptr [0x1033ee40], ecx */
  w32((uint32_t)(0x1033ee40), (ECX));
  /* 10322ab0 mov edx, dword ptr [0x1033ee3c] */
  EDX = (r32((uint32_t)(0x1033ee3c)));
  /* 10322ab6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10322ab9 mov dword ptr [0x1033ee3c], edx */
  w32((uint32_t)(0x1033ee3c), (EDX));
  /* 10322abf jmp 0x10322aeb */
  goto L_10322aeb;
L_10322ac1:;
  /* 10322ac1 cmp dword ptr [0x1033ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1033ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322acb jl 0x10322aeb */
  if ((C.sf!=C.of)) goto L_10322aeb;
  /* 10322acd mov eax, dword ptr [0x1033ee40] */
  EAX = (r32((uint32_t)(0x1033ee40)));
  /* 10322ad2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10322ad7 mov dword ptr [0x1033ee40], eax */
  w32((uint32_t)(0x1033ee40), (EAX));
  /* 10322adc mov ecx, dword ptr [0x1033ee3c] */
  ECX = (r32((uint32_t)(0x1033ee3c)));
  /* 10322ae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322ae5 mov dword ptr [0x1033ee3c], ecx */
  w32((uint32_t)(0x1033ee3c), (ECX));
L_10322aeb:;
  /* 10322aeb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10322aee mov dword ptr [0x1033ee38], edx */
  w32((uint32_t)(0x1033ee38), (EDX));
L_10322af4:;
  /* 10322af4 mov esp, ebp */
  ESP = (EBP);
  /* 10322af6 pop ebp */
  EBP = (pop32());
  /* 10322af7 ret  */
  ESPCHK(0x10322900u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b00 @ 0x10322b00 (382 bytes, 135 insns) */
void f_10322b00(void) {
  FTRACE(0x10322b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10322b01 mov ebp, esp */
  EBP = (ESP);
  /* 10322b03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10322b05 push 0x1033b8c8 */
  push32((uint32_t)(0x1033b8c8u));
  /* 10322b0a push 0x1031c7c8 */
  push32((uint32_t)(0x1031c7c8u));
  /* 10322b0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10322b15 push eax */
  push32((uint32_t)(EAX));
  /* 10322b16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10322b1d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322b20 push ebx */
  push32((uint32_t)(EBX));
  /* 10322b21 push esi */
  push32((uint32_t)(ESI));
  /* 10322b22 push edi */
  push32((uint32_t)(EDI));
  /* 10322b23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10322b26 cmp dword ptr [0x1033f814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322b2d jne 0x10322b72 */
  if (!C.zf) goto L_10322b72;
  /* 10322b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10322b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322b33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10322b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322b37 call dword ptr [0x10342268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342268))), 0x10322b3du);
  /* 10322b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10322b3f je 0x10322b4d */
  if (C.zf) goto L_10322b4d;
  /* 10322b41 mov dword ptr [0x1033f814], 1 */
  w32((uint32_t)(0x1033f814), (0x1u));
  /* 10322b4b jmp 0x10322b72 */
  goto L_10322b72;
L_10322b4d:;
  /* 10322b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10322b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10322b51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10322b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322b55 call dword ptr [0x10342280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342280))), 0x10322b5bu);
  /* 10322b5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10322b5d je 0x10322b6b */
  if (C.zf) goto L_10322b6b;
  /* 10322b5f mov dword ptr [0x1033f814], 2 */
  w32((uint32_t)(0x1033f814), (0x2u));
  /* 10322b69 jmp 0x10322b72 */
  goto L_10322b72;
L_10322b6b:;
  /* 10322b6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322b6d jmp 0x10322c81 */
  goto L_10322c81;
L_10322b72:;
  /* 10322b72 cmp dword ptr [0x1033f814], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f814))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322b79 jne 0x10322b96 */
  if (!C.zf) goto L_10322b96;
  /* 10322b7b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10322b7e push eax */
  push32((uint32_t)(EAX));
  /* 10322b7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10322b82 push ecx */
  push32((uint32_t)(ECX));
  /* 10322b83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10322b86 push edx */
  push32((uint32_t)(EDX));
  /* 10322b87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322b8a push eax */
  push32((uint32_t)(EAX));
  /* 10322b8b call dword ptr [0x10342268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342268))), 0x10322b91u);
  /* 10322b91 jmp 0x10322c81 */
  goto L_10322c81;
L_10322b96:;
  /* 10322b96 cmp dword ptr [0x1033f814], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1033f814))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322b9d jne 0x10322c7f */
  if (!C.zf) goto L_10322c7f;
  /* 10322ba3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322ba7 jne 0x10322bb2 */
  if (!C.zf) goto L_10322bb2;
  /* 10322ba9 mov ecx, dword ptr [0x1033f6c8] */
  ECX = (r32((uint32_t)(0x1033f6c8)));
  /* 10322baf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10322bb2:;
  /* 10322bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322bb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10322bb9 push edx */
  push32((uint32_t)(EDX));
  /* 10322bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322bbd push eax */
  push32((uint32_t)(EAX));
  /* 10322bbe call dword ptr [0x10342280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342280))), 0x10322bc4u);
  /* 10322bc4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10322bc7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322bcb jne 0x10322bd4 */
  if (!C.zf) goto L_10322bd4;
  /* 10322bcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322bcf jmp 0x10322c81 */
  goto L_10322c81;
L_10322bd4:;
  /* 10322bd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10322bdb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10322bde add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322be1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10322be3 call 0x10316860 */
  push32(0x10322be8u); f_10316860();
  /* 10322be8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10322beb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10322bee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10322bf1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10322bf4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10322bfb jmp 0x10322c14 */
  goto L_10322c14;
  /* 10322bfd mov eax, 1 */
  EAX = (0x1u);
  /* 10322c02 ret  */
  ESPCHK(0x10322b00u, _esp0);
  ESP += 4; return;
  /* 10322c03 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10322c06 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10322c0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10322c14:;
  /* 10322c14 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322c18 jne 0x10322c1e */
  if (!C.zf) goto L_10322c1e;
  /* 10322c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322c1c jmp 0x10322c81 */
  goto L_10322c81;
L_10322c1e:;
  /* 10322c1e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10322c21 push edx */
  push32((uint32_t)(EDX));
  /* 10322c22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10322c25 push eax */
  push32((uint32_t)(EAX));
  /* 10322c26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10322c29 push ecx */
  push32((uint32_t)(ECX));
  /* 10322c2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322c2d push edx */
  push32((uint32_t)(EDX));
  /* 10322c2e call dword ptr [0x10342280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342280))), 0x10322c34u);
  /* 10322c34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10322c36 jne 0x10322c3c */
  if (!C.zf) goto L_10322c3c;
  /* 10322c38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322c3a jmp 0x10322c81 */
  goto L_10322c81;
L_10322c3c:;
  /* 10322c3c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322c40 jne 0x10322c5d */
  if (!C.zf) goto L_10322c5d;
  /* 10322c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322c46 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10322c48 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10322c4b push eax */
  push32((uint32_t)(EAX));
  /* 10322c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10322c4e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10322c51 push ecx */
  push32((uint32_t)(ECX));
  /* 10322c52 call dword ptr [0x10342370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342370))), 0x10322c58u);
  /* 10322c58 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10322c5b jmp 0x10322c7a */
  goto L_10322c7a;
L_10322c5d:;
  /* 10322c5d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10322c60 push edx */
  push32((uint32_t)(EDX));
  /* 10322c61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10322c64 push eax */
  push32((uint32_t)(EAX));
  /* 10322c65 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10322c67 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10322c6a push ecx */
  push32((uint32_t)(ECX));
  /* 10322c6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10322c6d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10322c70 push edx */
  push32((uint32_t)(EDX));
  /* 10322c71 call dword ptr [0x10342370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342370))), 0x10322c77u);
  /* 10322c77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10322c7a:;
  /* 10322c7a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10322c7d jmp 0x10322c81 */
  goto L_10322c81;
L_10322c7f:;
  /* 10322c7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10322c81:;
  /* 10322c81 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10322c84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10322c87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10322c8e pop edi */
  EDI = (pop32());
  /* 10322c8f pop esi */
  ESI = (pop32());
  /* 10322c90 pop ebx */
  EBX = (pop32());
  /* 10322c91 mov esp, ebp */
  ESP = (EBP);
  /* 10322c93 pop ebp */
  EBP = (pop32());
  /* 10322c94 ret  */
  ESPCHK(0x10322b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ca0 @ 0x10322ca0 (398 bytes, 140 insns) */
void f_10322ca0(void) {
  FTRACE(0x10322ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10322ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10322ca3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10322ca5 push 0x1033b8d8 */
  push32((uint32_t)(0x1033b8d8u));
  /* 10322caa push 0x1031c7c8 */
  push32((uint32_t)(0x1031c7c8u));
  /* 10322caf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10322cb5 push eax */
  push32((uint32_t)(EAX));
  /* 10322cb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10322cbd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322cc0 push ebx */
  push32((uint32_t)(EBX));
  /* 10322cc1 push esi */
  push32((uint32_t)(ESI));
  /* 10322cc2 push edi */
  push32((uint32_t)(EDI));
  /* 10322cc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10322cc6 cmp dword ptr [0x1033f818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322ccd jne 0x10322d12 */
  if (!C.zf) goto L_10322d12;
  /* 10322ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 10322cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10322cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322cd7 call dword ptr [0x10342268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342268))), 0x10322cddu);
  /* 10322cdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10322cdf je 0x10322ced */
  if (C.zf) goto L_10322ced;
  /* 10322ce1 mov dword ptr [0x1033f818], 1 */
  w32((uint32_t)(0x1033f818), (0x1u));
  /* 10322ceb jmp 0x10322d12 */
  goto L_10322d12;
L_10322ced:;
  /* 10322ced push 0 */
  push32((uint32_t)(0x0u));
  /* 10322cef push 0 */
  push32((uint32_t)(0x0u));
  /* 10322cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10322cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322cf5 call dword ptr [0x10342280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342280))), 0x10322cfbu);
  /* 10322cfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10322cfd je 0x10322d0b */
  if (C.zf) goto L_10322d0b;
  /* 10322cff mov dword ptr [0x1033f818], 2 */
  w32((uint32_t)(0x1033f818), (0x2u));
  /* 10322d09 jmp 0x10322d12 */
  goto L_10322d12;
L_10322d0b:;
  /* 10322d0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322d0d jmp 0x10322e31 */
  goto L_10322e31;
L_10322d12:;
  /* 10322d12 cmp dword ptr [0x1033f818], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1033f818))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322d19 jne 0x10322d36 */
  if (!C.zf) goto L_10322d36;
  /* 10322d1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10322d1e push eax */
  push32((uint32_t)(EAX));
  /* 10322d1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10322d22 push ecx */
  push32((uint32_t)(ECX));
  /* 10322d23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10322d26 push edx */
  push32((uint32_t)(EDX));
  /* 10322d27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322d2a push eax */
  push32((uint32_t)(EAX));
  /* 10322d2b call dword ptr [0x10342280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342280))), 0x10322d31u);
  /* 10322d31 jmp 0x10322e31 */
  goto L_10322e31;
L_10322d36:;
  /* 10322d36 cmp dword ptr [0x1033f818], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f818))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322d3d jne 0x10322e2f */
  if (!C.zf) goto L_10322e2f;
  /* 10322d43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322d47 jne 0x10322d52 */
  if (!C.zf) goto L_10322d52;
  /* 10322d49 mov ecx, dword ptr [0x1033f6c8] */
  ECX = (r32((uint32_t)(0x1033f6c8)));
  /* 10322d4f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10322d52:;
  /* 10322d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322d56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10322d59 push edx */
  push32((uint32_t)(EDX));
  /* 10322d5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322d5d push eax */
  push32((uint32_t)(EAX));
  /* 10322d5e call dword ptr [0x10342268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342268))), 0x10322d64u);
  /* 10322d64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10322d67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322d6b jne 0x10322d74 */
  if (!C.zf) goto L_10322d74;
  /* 10322d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322d6f jmp 0x10322e31 */
  goto L_10322e31;
L_10322d74:;
  /* 10322d74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10322d7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10322d7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10322d80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322d83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10322d85 call 0x10316860 */
  push32(0x10322d8au); f_10316860();
  /* 10322d8a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10322d8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10322d90 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10322d93 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10322d96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10322d9d jmp 0x10322db6 */
  goto L_10322db6;
  /* 10322d9f mov eax, 1 */
  EAX = (0x1u);
  /* 10322da4 ret  */
  ESPCHK(0x10322ca0u, _esp0);
  ESP += 4; return;
  /* 10322da5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10322da8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10322daf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10322db6:;
  /* 10322db6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322dba jne 0x10322dc0 */
  if (!C.zf) goto L_10322dc0;
  /* 10322dbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322dbe jmp 0x10322e31 */
  goto L_10322e31;
L_10322dc0:;
  /* 10322dc0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10322dc3 push edx */
  push32((uint32_t)(EDX));
  /* 10322dc4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10322dc7 push eax */
  push32((uint32_t)(EAX));
  /* 10322dc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10322dcb push ecx */
  push32((uint32_t)(ECX));
  /* 10322dcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322dcf push edx */
  push32((uint32_t)(EDX));
  /* 10322dd0 call dword ptr [0x10342268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342268))), 0x10322dd6u);
  /* 10322dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10322dd8 jne 0x10322dde */
  if (!C.zf) goto L_10322dde;
  /* 10322dda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10322ddc jmp 0x10322e31 */
  goto L_10322e31;
L_10322dde:;
  /* 10322dde cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322de2 jne 0x10322e06 */
  if (!C.zf) goto L_10322e06;
  /* 10322de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322dea push 0 */
  push32((uint32_t)(0x0u));
  /* 10322dec push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10322dee mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10322df1 push eax */
  push32((uint32_t)(EAX));
  /* 10322df2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10322df7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10322dfa push ecx */
  push32((uint32_t)(ECX));
  /* 10322dfb call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x10322e01u);
  /* 10322e01 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10322e04 jmp 0x10322e2a */
  goto L_10322e2a;
L_10322e06:;
  /* 10322e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10322e0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10322e0d push edx */
  push32((uint32_t)(EDX));
  /* 10322e0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10322e11 push eax */
  push32((uint32_t)(EAX));
  /* 10322e12 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10322e14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10322e17 push ecx */
  push32((uint32_t)(ECX));
  /* 10322e18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10322e1d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10322e20 push edx */
  push32((uint32_t)(EDX));
  /* 10322e21 call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x10322e27u);
  /* 10322e27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10322e2a:;
  /* 10322e2a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10322e2d jmp 0x10322e31 */
  goto L_10322e31;
L_10322e2f:;
  /* 10322e2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10322e31:;
  /* 10322e31 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10322e34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10322e37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10322e3e pop edi */
  EDI = (pop32());
  /* 10322e3f pop esi */
  ESI = (pop32());
  /* 10322e40 pop ebx */
  EBX = (pop32());
  /* 10322e41 mov esp, ebp */
  ESP = (EBP);
  /* 10322e43 pop ebp */
  EBP = (pop32());
  /* 10322e44 ret  */
  ESPCHK(0x10322ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e50 @ 0x10322e50 (11 bytes, 6 insns) */
void f_10322e50(void) {
  FTRACE(0x10322e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10322e51 mov ebp, esp */
  EBP = (ESP);
  /* 10322e53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322e56 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322e59 pop ebp */
  EBP = (pop32());
  /* 10322e5a ret  */
  ESPCHK(0x10322e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e60 @ 0x10322e60 (147 bytes, 43 insns) */
void f_10322e60(void) {
  FTRACE(0x10322e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10322e61 mov ebp, esp */
  EBP = (ESP);
  /* 10322e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10322e64 cmp dword ptr [0x1033f6b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322e6b jne 0x10322e87 */
  if (!C.zf) goto L_10322e87;
  /* 10322e6d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322e71 jl 0x10322e82 */
  if ((C.sf!=C.of)) goto L_10322e82;
  /* 10322e73 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322e77 jg 0x10322e82 */
  if ((!C.zf&&C.sf==C.of)) goto L_10322e82;
  /* 10322e79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322e7c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322e7f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10322e82:;
  /* 10322e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322e85 jmp 0x10322eef */
  goto L_10322eef;
L_10322e87:;
  /* 10322e87 push 0x1033f844 */
  push32((uint32_t)(0x1033f844u));
  /* 10322e8c call dword ptr [0x103422d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422d0))), 0x10322e92u);
  /* 10322e92 cmp dword ptr [0x1033f834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322e99 je 0x10322eb9 */
  if (C.zf) goto L_10322eb9;
  /* 10322e9b push 0x1033f844 */
  push32((uint32_t)(0x1033f844u));
  /* 10322ea0 call dword ptr [0x103422c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c0))), 0x10322ea6u);
  /* 10322ea6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10322ea8 call 0x103170c0 */
  push32(0x10322eadu); f_103170c0();
  /* 10322ead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322eb0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10322eb7 jmp 0x10322ec0 */
  goto L_10322ec0;
L_10322eb9:;
  /* 10322eb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10322ec0:;
  /* 10322ec0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 10322ec4 call 0x10322f00 */
  push32(0x10322ec9u); f_10322f00();
  /* 10322ec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322ecc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10322ecf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322ed3 je 0x10322ee1 */
  if (C.zf) goto L_10322ee1;
  /* 10322ed5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10322ed7 call 0x10317160 */
  push32(0x10322edcu); f_10317160();
  /* 10322edc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322edf jmp 0x10322eec */
  goto L_10322eec;
L_10322ee1:;
  /* 10322ee1 push 0x1033f844 */
  push32((uint32_t)(0x1033f844u));
  /* 10322ee6 call dword ptr [0x103422c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c0))), 0x10322eecu);
L_10322eec:;
  /* 10322eec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10322eef:;
  /* 10322eef mov esp, ebp */
  ESP = (EBP);
  /* 10322ef1 pop ebp */
  EBP = (pop32());
  /* 10322ef2 ret  */
  ESPCHK(0x10322e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f00 @ 0x10322f00 (299 bytes, 91 insns) */
void f_10322f00(void) {
  FTRACE(0x10322f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10322f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10322f01 mov ebp, esp */
  EBP = (ESP);
  /* 10322f03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10322f06 cmp dword ptr [0x1033f6b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322f0d jne 0x10322f2c */
  if (!C.zf) goto L_10322f2c;
  /* 10322f0f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322f13 jl 0x10322f24 */
  if ((C.sf!=C.of)) goto L_10322f24;
  /* 10322f15 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322f19 jg 0x10322f24 */
  if ((!C.zf&&C.sf==C.of)) goto L_10322f24;
  /* 10322f1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322f1e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10322f21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10322f24:;
  /* 10322f24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322f27 jmp 0x10323027 */
  goto L_10323027;
L_10322f2c:;
  /* 10322f2c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322f33 jge 0x10322f73 */
  if ((C.sf==C.of)) goto L_10322f73;
  /* 10322f35 cmp dword ptr [0x1033dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322f3c jle 0x10322f51 */
  if ((C.zf||C.sf!=C.of)) goto L_10322f51;
  /* 10322f3e push 1 */
  push32((uint32_t)(0x1u));
  /* 10322f40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322f43 push ecx */
  push32((uint32_t)(ECX));
  /* 10322f44 call 0x103196d0 */
  push32(0x10322f49u); f_103196d0();
  /* 10322f49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322f4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10322f4f jmp 0x10322f65 */
  goto L_10322f65;
L_10322f51:;
  /* 10322f51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322f54 mov eax, dword ptr [0x1033dc98] */
  EAX = (r32((uint32_t)(0x1033dc98)));
  /* 10322f59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10322f5b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10322f5f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10322f62 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10322f65:;
  /* 10322f65 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322f69 jne 0x10322f73 */
  if (!C.zf) goto L_10322f73;
  /* 10322f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322f6e jmp 0x10323027 */
  goto L_10323027;
L_10322f73:;
  /* 10322f73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322f76 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10322f79 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10322f7f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10322f85 mov eax, dword ptr [0x1033dc98] */
  EAX = (r32((uint32_t)(0x1033dc98)));
  /* 10322f8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10322f8c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10322f90 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10322f96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10322f98 je 0x10322fbc */
  if (C.zf) goto L_10322fbc;
  /* 10322f9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322f9d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10322fa0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10322fa6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10322fa9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10322fac mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10322faf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10322fb3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10322fba jmp 0x10322fcd */
  goto L_10322fcd;
L_10322fbc:;
  /* 10322fbc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10322fbf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10322fc2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10322fc6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10322fcd:;
  /* 10322fcd push 1 */
  push32((uint32_t)(0x1u));
  /* 10322fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 10322fd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10322fd3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10322fd6 push edx */
  push32((uint32_t)(EDX));
  /* 10322fd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10322fda push eax */
  push32((uint32_t)(EAX));
  /* 10322fdb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10322fde push ecx */
  push32((uint32_t)(ECX));
  /* 10322fdf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10322fe4 mov edx, dword ptr [0x1033f6b8] */
  EDX = (r32((uint32_t)(0x1033f6b8)));
  /* 10322fea push edx */
  push32((uint32_t)(EDX));
  /* 10322feb call 0x1031bab0 */
  push32(0x10322ff0u); f_1031bab0();
  /* 10322ff0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10322ff3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10322ff6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10322ffa jne 0x10323001 */
  if (!C.zf) goto L_10323001;
  /* 10322ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10322fff jmp 0x10323027 */
  goto L_10323027;
L_10323001:;
  /* 10323001 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323005 jne 0x10323011 */
  if (!C.zf) goto L_10323011;
  /* 10323007 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032300a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1032300f jmp 0x10323027 */
  goto L_10323027;
L_10323011:;
  /* 10323011 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323014 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10323019 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1032301c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10323022 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10323025 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10323027:;
  /* 10323027 mov esp, ebp */
  ESP = (EBP);
  /* 10323029 pop ebp */
  EBP = (pop32());
  /* 1032302a ret  */
  ESPCHK(0x10322f00u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10323030 (52 bytes, 19 insns) */
void f_10323030(void) {
  FTRACE(0x10323030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10323030 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10323034 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10323038 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1032303a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1032303e jne 0x10323049 */
  if (!C.zf) goto L_10323049;
  /* 10323040 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10323044 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10323046 ret 0x10 */
  ESPCHK(0x10323030u, _esp0);
  ESP += 20; return;
L_10323049:;
  /* 10323049 push ebx */
  push32((uint32_t)(EBX));
  /* 1032304a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1032304c mov ebx, eax */
  EBX = (EAX);
  /* 1032304e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10323052 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10323056 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323058 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1032305c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1032305e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323060 pop ebx */
  EBX = (pop32());
  /* 10323061 ret 0x10 */
  ESPCHK(0x10323030u, _esp0);
  ESP += 20; return;
}

/* FUN_10013070 @ 0x10323070 (46 bytes, 18 insns) */
void f_10323070(void) {
  FTRACE(0x10323070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10323070 push ebp */
  push32((uint32_t)(EBP));
  /* 10323071 mov ebp, esp */
  EBP = (ESP);
  /* 10323073 push ecx */
  push32((uint32_t)(ECX));
  /* 10323074 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10323076 call 0x103170c0 */
  push32(0x1032307bu); f_103170c0();
  /* 1032307b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032307e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323081 push eax */
  push32((uint32_t)(EAX));
  /* 10323082 call 0x103230a0 */
  push32(0x10323087u); f_103230a0();
  /* 10323087 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032308a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1032308d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1032308f call 0x10317160 */
  push32(0x10323094u); f_10317160();
  /* 10323094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323097 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032309a mov esp, ebp */
  ESP = (EBP);
  /* 1032309c pop ebp */
  EBP = (pop32());
  /* 1032309d ret  */
  ESPCHK(0x10323070u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x103230a0 (198 bytes, 69 insns) */
void f_103230a0(void) {
  FTRACE(0x103230a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103230a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103230a1 mov ebp, esp */
  EBP = (ESP);
  /* 103230a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103230a6 mov eax, dword ptr [0x1033f4d4] */
  EAX = (r32((uint32_t)(0x1033f4d4)));
  /* 103230ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103230ae cmp dword ptr [0x10340fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103230b5 jne 0x103230be */
  if (!C.zf) goto L_103230be;
  /* 103230b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103230b9 jmp 0x10323162 */
  goto L_10323162;
L_103230be:;
  /* 103230be cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103230c2 jne 0x103230e6 */
  if (!C.zf) goto L_103230e6;
  /* 103230c4 cmp dword ptr [0x1033f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103230cb je 0x103230e6 */
  if (C.zf) goto L_103230e6;
  /* 103230cd call 0x103231c0 */
  push32(0x103230d2u); f_103231c0();
  /* 103230d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103230d4 je 0x103230dd */
  if (C.zf) goto L_103230dd;
  /* 103230d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103230d8 jmp 0x10323162 */
  goto L_10323162;
L_103230dd:;
  /* 103230dd mov ecx, dword ptr [0x1033f4d4] */
  ECX = (r32((uint32_t)(0x1033f4d4)));
  /* 103230e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103230e6:;
  /* 103230e6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103230ea je 0x10323160 */
  if (C.zf) goto L_10323160;
  /* 103230ec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103230f0 je 0x10323160 */
  if (C.zf) goto L_10323160;
  /* 103230f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103230f5 push edx */
  push32((uint32_t)(EDX));
  /* 103230f6 call 0x103164f0 */
  push32(0x103230fbu); f_103164f0();
  /* 103230fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103230fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10323101:;
  /* 10323101 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323104 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323107 je 0x10323160 */
  if (C.zf) goto L_10323160;
  /* 10323109 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032310c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1032310e push edx */
  push32((uint32_t)(EDX));
  /* 1032310f call 0x103164f0 */
  push32(0x10323114u); f_103164f0();
  /* 10323114 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323117 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032311a jbe 0x10323155 */
  if ((C.cf||C.zf)) goto L_10323155;
  /* 1032311c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032311f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10323121 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323124 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10323128 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032312b jne 0x10323155 */
  if (!C.zf) goto L_10323155;
  /* 1032312d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323130 push ecx */
  push32((uint32_t)(ECX));
  /* 10323131 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323134 push edx */
  push32((uint32_t)(EDX));
  /* 10323135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323138 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1032313a push ecx */
  push32((uint32_t)(ECX));
  /* 1032313b call 0x10323170 */
  push32(0x10323140u); f_10323170();
  /* 10323140 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10323145 jne 0x10323155 */
  if (!C.zf) goto L_10323155;
  /* 10323147 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032314a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1032314c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032314f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10323153 jmp 0x10323162 */
  goto L_10323162;
L_10323155:;
  /* 10323155 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323158 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032315b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1032315e jmp 0x10323101 */
  goto L_10323101;
L_10323160:;
  /* 10323160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10323162:;
  /* 10323162 mov esp, ebp */
  ESP = (EBP);
  /* 10323164 pop ebp */
  EBP = (pop32());
  /* 10323165 ret  */
  ESPCHK(0x103230a0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10323170 (79 bytes, 32 insns) */
void f_10323170(void) {
  FTRACE(0x10323170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10323170 push ebp */
  push32((uint32_t)(EBP));
  /* 10323171 mov ebp, esp */
  EBP = (ESP);
  /* 10323173 push ecx */
  push32((uint32_t)(ECX));
  /* 10323174 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323178 jne 0x1032317e */
  if (!C.zf) goto L_1032317e;
  /* 1032317a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032317c jmp 0x103231bb */
  goto L_103231bb;
L_1032317e:;
  /* 1032317e mov eax, dword ptr [0x10340ba4] */
  EAX = (r32((uint32_t)(0x10340ba4)));
  /* 10323183 push eax */
  push32((uint32_t)(EAX));
  /* 10323184 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10323187 push ecx */
  push32((uint32_t)(ECX));
  /* 10323188 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1032318b push edx */
  push32((uint32_t)(EDX));
  /* 1032318c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032318f push eax */
  push32((uint32_t)(EAX));
  /* 10323190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323193 push ecx */
  push32((uint32_t)(ECX));
  /* 10323194 push 1 */
  push32((uint32_t)(0x1u));
  /* 10323196 mov edx, dword ptr [0x10340e44] */
  EDX = (r32((uint32_t)(0x10340e44)));
  /* 1032319c push edx */
  push32((uint32_t)(EDX));
  /* 1032319d call 0x10323270 */
  push32(0x103231a2u); f_10323270();
  /* 103231a2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103231a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103231a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103231ac jne 0x103231b5 */
  if (!C.zf) goto L_103231b5;
  /* 103231ae mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 103231b3 jmp 0x103231bb */
  goto L_103231bb;
L_103231b5:;
  /* 103231b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103231b8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_103231bb:;
  /* 103231bb mov esp, ebp */
  ESP = (EBP);
  /* 103231bd pop ebp */
  EBP = (pop32());
  /* 103231be ret  */
  ESPCHK(0x10323170u, _esp0);
  ESP += 4; return;
}

/* FUN_100131c0 @ 0x103231c0 (174 bytes, 66 insns) */
void f_103231c0(void) {
  FTRACE(0x103231c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103231c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103231c1 mov ebp, esp */
  EBP = (ESP);
  /* 103231c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103231c6 mov eax, dword ptr [0x1033f4dc] */
  EAX = (r32((uint32_t)(0x1033f4dc)));
  /* 103231cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103231ce:;
  /* 103231ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103231d1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103231d4 je 0x10323268 */
  if (C.zf) goto L_10323268;
  /* 103231da push 0 */
  push32((uint32_t)(0x0u));
  /* 103231dc push 0 */
  push32((uint32_t)(0x0u));
  /* 103231de push 0 */
  push32((uint32_t)(0x0u));
  /* 103231e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103231e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103231e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103231e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103231e9 push eax */
  push32((uint32_t)(EAX));
  /* 103231ea push 0 */
  push32((uint32_t)(0x0u));
  /* 103231ec push 1 */
  push32((uint32_t)(0x1u));
  /* 103231ee call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x103231f4u);
  /* 103231f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103231f7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103231fb jne 0x10323202 */
  if (!C.zf) goto L_10323202;
  /* 103231fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10323200 jmp 0x1032326a */
  goto L_1032326a;
L_10323202:;
  /* 10323202 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10323204 push 0x1033b8e4 */
  push32((uint32_t)(0x1033b8e4u));
  /* 10323209 push 2 */
  push32((uint32_t)(0x2u));
  /* 1032320b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032320e push ecx */
  push32((uint32_t)(ECX));
  /* 1032320f call 0x103136c0 */
  push32(0x10323214u); f_103136c0();
  /* 10323214 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323217 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1032321a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032321e jne 0x10323225 */
  if (!C.zf) goto L_10323225;
  /* 10323220 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10323223 jmp 0x1032326a */
  goto L_1032326a;
L_10323225:;
  /* 10323225 push 0 */
  push32((uint32_t)(0x0u));
  /* 10323227 push 0 */
  push32((uint32_t)(0x0u));
  /* 10323229 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032322c push edx */
  push32((uint32_t)(EDX));
  /* 1032322d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323230 push eax */
  push32((uint32_t)(EAX));
  /* 10323231 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10323233 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323236 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10323238 push edx */
  push32((uint32_t)(EDX));
  /* 10323239 push 0 */
  push32((uint32_t)(0x0u));
  /* 1032323b push 1 */
  push32((uint32_t)(0x1u));
  /* 1032323d call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x10323243u);
  /* 10323243 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10323245 jne 0x1032324c */
  if (!C.zf) goto L_1032324c;
  /* 10323247 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1032324a jmp 0x1032326a */
  goto L_1032326a;
L_1032324c:;
  /* 1032324c push 0 */
  push32((uint32_t)(0x0u));
  /* 1032324e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323251 push eax */
  push32((uint32_t)(EAX));
  /* 10323252 call 0x103236c0 */
  push32(0x10323257u); f_103236c0();
  /* 10323257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032325a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032325d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323260 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10323263 jmp 0x103231ce */
  goto L_103231ce;
L_10323268:;
  /* 10323268 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1032326a:;
  /* 1032326a mov esp, ebp */
  ESP = (EBP);
  /* 1032326c pop ebp */
  EBP = (pop32());
  /* 1032326d ret  */
  ESPCHK(0x103231c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x10323270 (970 bytes, 340 insns) */
void f_10323270(void) {
  FTRACE(0x10323270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10323270 push ebp */
  push32((uint32_t)(EBP));
  /* 10323271 mov ebp, esp */
  EBP = (ESP);
  /* 10323273 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10323275 push 0x1033b938 */
  push32((uint32_t)(0x1033b938u));
  /* 1032327a push 0x1031c7c8 */
  push32((uint32_t)(0x1031c7c8u));
  /* 1032327f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10323285 push eax */
  push32((uint32_t)(EAX));
  /* 10323286 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1032328d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323290 push ebx */
  push32((uint32_t)(EBX));
  /* 10323291 push esi */
  push32((uint32_t)(ESI));
  /* 10323292 push edi */
  push32((uint32_t)(EDI));
  /* 10323293 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10323296 cmp dword ptr [0x1033f81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032329d jne 0x103232f6 */
  if (!C.zf) goto L_103232f6;
  /* 1032329f push 1 */
  push32((uint32_t)(0x1u));
  /* 103232a1 push 0x1033af90 */
  push32((uint32_t)(0x1033af90u));
  /* 103232a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103232a8 push 0x1033af90 */
  push32((uint32_t)(0x1033af90u));
  /* 103232ad push 0 */
  push32((uint32_t)(0x0u));
  /* 103232af push 0 */
  push32((uint32_t)(0x0u));
  /* 103232b1 call dword ptr [0x10342260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342260))), 0x103232b7u);
  /* 103232b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103232b9 je 0x103232c7 */
  if (C.zf) goto L_103232c7;
  /* 103232bb mov dword ptr [0x1033f81c], 1 */
  w32((uint32_t)(0x1033f81c), (0x1u));
  /* 103232c5 jmp 0x103232f6 */
  goto L_103232f6;
L_103232c7:;
  /* 103232c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103232c9 push 0x1033af8c */
  push32((uint32_t)(0x1033af8cu));
  /* 103232ce push 1 */
  push32((uint32_t)(0x1u));
  /* 103232d0 push 0x1033af8c */
  push32((uint32_t)(0x1033af8cu));
  /* 103232d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103232d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103232d9 call dword ptr [0x10342264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342264))), 0x103232dfu);
  /* 103232df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103232e1 je 0x103232ef */
  if (C.zf) goto L_103232ef;
  /* 103232e3 mov dword ptr [0x1033f81c], 2 */
  w32((uint32_t)(0x1033f81c), (0x2u));
  /* 103232ed jmp 0x103232f6 */
  goto L_103232f6;
L_103232ef:;
  /* 103232ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103232f1 jmp 0x10323654 */
  goto L_10323654;
L_103232f6:;
  /* 103232f6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103232fa jle 0x1032330f */
  if ((C.zf||C.sf!=C.of)) goto L_1032330f;
  /* 103232fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103232ff push eax */
  push32((uint32_t)(EAX));
  /* 10323300 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10323303 push ecx */
  push32((uint32_t)(ECX));
  /* 10323304 call 0x10323670 */
  push32(0x10323309u); f_10323670();
  /* 10323309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032330c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1032330f:;
  /* 1032330f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323313 jle 0x10323328 */
  if ((C.zf||C.sf!=C.of)) goto L_10323328;
  /* 10323315 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10323318 push edx */
  push32((uint32_t)(EDX));
  /* 10323319 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1032331c push eax */
  push32((uint32_t)(EAX));
  /* 1032331d call 0x10323670 */
  push32(0x10323322u); f_10323670();
  /* 10323322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323325 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10323328:;
  /* 10323328 cmp dword ptr [0x1033f81c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1033f81c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032332f jne 0x10323354 */
  if (!C.zf) goto L_10323354;
  /* 10323331 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10323334 push ecx */
  push32((uint32_t)(ECX));
  /* 10323335 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10323338 push edx */
  push32((uint32_t)(EDX));
  /* 10323339 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1032333c push eax */
  push32((uint32_t)(EAX));
  /* 1032333d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10323340 push ecx */
  push32((uint32_t)(ECX));
  /* 10323341 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10323344 push edx */
  push32((uint32_t)(EDX));
  /* 10323345 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323348 push eax */
  push32((uint32_t)(EAX));
  /* 10323349 call dword ptr [0x10342264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342264))), 0x1032334fu);
  /* 1032334f jmp 0x10323654 */
  goto L_10323654;
L_10323354:;
  /* 10323354 cmp dword ptr [0x1033f81c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f81c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032335b jne 0x10323652 */
  if (!C.zf) goto L_10323652;
  /* 10323361 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323365 jne 0x10323370 */
  if (!C.zf) goto L_10323370;
  /* 10323367 mov ecx, dword ptr [0x1033f6c8] */
  ECX = (r32((uint32_t)(0x1033f6c8)));
  /* 1032336d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10323370:;
  /* 10323370 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323374 je 0x10323380 */
  if (C.zf) goto L_10323380;
  /* 10323376 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032337a jne 0x103234fc */
  if (!C.zf) goto L_103234fc;
L_10323380:;
  /* 10323380 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10323383 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323386 jne 0x10323392 */
  if (!C.zf) goto L_10323392;
  /* 10323388 mov eax, 2 */
  EAX = (0x2u);
  /* 1032338d jmp 0x10323654 */
  goto L_10323654;
L_10323392:;
  /* 10323392 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323396 jle 0x103233a2 */
  if ((C.zf||C.sf!=C.of)) goto L_103233a2;
  /* 10323398 mov eax, 1 */
  EAX = (0x1u);
  /* 1032339d jmp 0x10323654 */
  goto L_10323654;
L_103233a2:;
  /* 103233a2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103233a6 jle 0x103233b2 */
  if ((C.zf||C.sf!=C.of)) goto L_103233b2;
  /* 103233a8 mov eax, 3 */
  EAX = (0x3u);
  /* 103233ad jmp 0x10323654 */
  goto L_10323654;
L_103233b2:;
  /* 103233b2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 103233b5 push eax */
  push32((uint32_t)(EAX));
  /* 103233b6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 103233b9 push ecx */
  push32((uint32_t)(ECX));
  /* 103233ba call dword ptr [0x10342364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342364))), 0x103233c0u);
  /* 103233c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103233c2 jne 0x103233cb */
  if (!C.zf) goto L_103233cb;
  /* 103233c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103233c6 jmp 0x10323654 */
  goto L_10323654;
L_103233cb:;
  /* 103233cb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103233cf jne 0x103233d7 */
  if (!C.zf) goto L_103233d7;
  /* 103233d1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103233d5 je 0x10323404 */
  if (C.zf) goto L_10323404;
L_103233d7:;
  /* 103233d7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103233db jne 0x103233e3 */
  if (!C.zf) goto L_103233e3;
  /* 103233dd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103233e1 je 0x10323404 */
  if (C.zf) goto L_10323404;
L_103233e3:;
  /* 103233e3 push 0x1033b8f8 */
  push32((uint32_t)(0x1033b8f8u));
  /* 103233e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103233ea push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 103233ef push 0x1033b8f0 */
  push32((uint32_t)(0x1033b8f0u));
  /* 103233f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 103233f6 call 0x10312780 */
  push32(0x103233fbu); f_10312780();
  /* 103233fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103233fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323401 jne 0x10323404 */
  if (!C.zf) goto L_10323404;
  /* 10323403 int3  */
  x86_unimpl("int3 @ 0x10323403");
L_10323404:;
  /* 10323404 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10323406 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10323408 jne 0x103233cb */
  if (!C.zf) goto L_103233cb;
  /* 1032340a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032340e jle 0x10323483 */
  if ((C.zf||C.sf!=C.of)) goto L_10323483;
  /* 10323410 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323414 jae 0x10323420 */
  if (!C.cf) goto L_10323420;
  /* 10323416 mov eax, 3 */
  EAX = (0x3u);
  /* 1032341b jmp 0x10323654 */
  goto L_10323654;
L_10323420:;
  /* 10323420 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10323423 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10323426 jmp 0x10323431 */
  goto L_10323431;
L_10323428:;
  /* 10323428 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1032342b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032342e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10323431:;
  /* 10323431 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10323434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10323436 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10323438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1032343a je 0x10323479 */
  if (C.zf) goto L_10323479;
  /* 1032343c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1032343f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10323441 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10323444 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10323446 je 0x10323479 */
  if (C.zf) goto L_10323479;
  /* 10323448 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032344b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1032344d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1032344f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10323452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10323454 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10323456 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323458 jl 0x10323477 */
  if ((C.sf!=C.of)) goto L_10323477;
  /* 1032345a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032345d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1032345f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10323461 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10323464 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10323466 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10323469 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032346b jg 0x10323477 */
  if ((!C.zf&&C.sf==C.of)) goto L_10323477;
  /* 1032346d mov eax, 2 */
  EAX = (0x2u);
  /* 10323472 jmp 0x10323654 */
  goto L_10323654;
L_10323477:;
  /* 10323477 jmp 0x10323428 */
  goto L_10323428;
L_10323479:;
  /* 10323479 mov eax, 3 */
  EAX = (0x3u);
  /* 1032347e jmp 0x10323654 */
  goto L_10323654;
L_10323483:;
  /* 10323483 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323487 jle 0x103234fc */
  if ((C.zf||C.sf!=C.of)) goto L_103234fc;
  /* 10323489 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032348d jae 0x10323499 */
  if (!C.cf) goto L_10323499;
  /* 1032348f mov eax, 1 */
  EAX = (0x1u);
  /* 10323494 jmp 0x10323654 */
  goto L_10323654;
L_10323499:;
  /* 10323499 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1032349c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1032349f jmp 0x103234aa */
  goto L_103234aa;
L_103234a1:;
  /* 103234a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 103234a4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103234a7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_103234aa:;
  /* 103234aa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 103234ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103234af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103234b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103234b3 je 0x103234f2 */
  if (C.zf) goto L_103234f2;
  /* 103234b5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 103234b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103234ba mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103234bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103234bf je 0x103234f2 */
  if (C.zf) goto L_103234f2;
  /* 103234c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103234c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103234c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103234c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 103234cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103234cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103234cf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103234d1 jl 0x103234f0 */
  if ((C.sf!=C.of)) goto L_103234f0;
  /* 103234d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103234d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103234d8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103234da mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 103234dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103234df mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103234e2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103234e4 jg 0x103234f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_103234f0;
  /* 103234e6 mov eax, 2 */
  EAX = (0x2u);
  /* 103234eb jmp 0x10323654 */
  goto L_10323654;
L_103234f0:;
  /* 103234f0 jmp 0x103234a1 */
  goto L_103234a1;
L_103234f2:;
  /* 103234f2 mov eax, 1 */
  EAX = (0x1u);
  /* 103234f7 jmp 0x10323654 */
  goto L_10323654;
L_103234fc:;
  /* 103234fc push 0 */
  push32((uint32_t)(0x0u));
  /* 103234fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10323500 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10323503 push ecx */
  push32((uint32_t)(ECX));
  /* 10323504 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10323507 push edx */
  push32((uint32_t)(EDX));
  /* 10323508 push 9 */
  push32((uint32_t)(0x9u));
  /* 1032350a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1032350d push eax */
  push32((uint32_t)(EAX));
  /* 1032350e call dword ptr [0x10342370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342370))), 0x10323514u);
  /* 10323514 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10323517 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032351b jne 0x10323524 */
  if (!C.zf) goto L_10323524;
  /* 1032351d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032351f jmp 0x10323654 */
  goto L_10323654;
L_10323524:;
  /* 10323524 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1032352b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1032352e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10323530 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323533 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10323535 call 0x10316860 */
  push32(0x1032353au); f_10316860();
  /* 1032353a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1032353d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10323540 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10323543 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10323546 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1032354d jmp 0x10323566 */
  goto L_10323566;
  /* 1032354f mov eax, 1 */
  EAX = (0x1u);
  /* 10323554 ret  */
  ESPCHK(0x10323270u, _esp0);
  ESP += 4; return;
  /* 10323555 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10323558 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1032355f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10323566:;
  /* 10323566 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032356a jne 0x10323573 */
  if (!C.zf) goto L_10323573;
  /* 1032356c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032356e jmp 0x10323654 */
  goto L_10323654;
L_10323573:;
  /* 10323573 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10323576 push edx */
  push32((uint32_t)(EDX));
  /* 10323577 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1032357a push eax */
  push32((uint32_t)(EAX));
  /* 1032357b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1032357e push ecx */
  push32((uint32_t)(ECX));
  /* 1032357f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10323582 push edx */
  push32((uint32_t)(EDX));
  /* 10323583 push 1 */
  push32((uint32_t)(0x1u));
  /* 10323585 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10323588 push eax */
  push32((uint32_t)(EAX));
  /* 10323589 call dword ptr [0x10342370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342370))), 0x1032358fu);
  /* 1032358f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10323591 jne 0x1032359a */
  if (!C.zf) goto L_1032359a;
  /* 10323593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10323595 jmp 0x10323654 */
  goto L_10323654;
L_1032359a:;
  /* 1032359a push 0 */
  push32((uint32_t)(0x0u));
  /* 1032359c push 0 */
  push32((uint32_t)(0x0u));
  /* 1032359e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103235a1 push ecx */
  push32((uint32_t)(ECX));
  /* 103235a2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103235a5 push edx */
  push32((uint32_t)(EDX));
  /* 103235a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 103235a8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103235ab push eax */
  push32((uint32_t)(EAX));
  /* 103235ac call dword ptr [0x10342370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342370))), 0x103235b2u);
  /* 103235b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103235b5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103235b9 jne 0x103235c2 */
  if (!C.zf) goto L_103235c2;
  /* 103235bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103235bd jmp 0x10323654 */
  goto L_10323654;
L_103235c2:;
  /* 103235c2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103235c9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103235cc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103235ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103235d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103235d3 call 0x10316860 */
  push32(0x103235d8u); f_10316860();
  /* 103235d8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 103235db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103235de mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 103235e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 103235e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103235eb jmp 0x10323604 */
  goto L_10323604;
  /* 103235ed mov eax, 1 */
  EAX = (0x1u);
  /* 103235f2 ret  */
  ESPCHK(0x10323270u, _esp0);
  ESP += 4; return;
  /* 103235f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103235f6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 103235fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10323604:;
  /* 10323604 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323608 jne 0x1032360e */
  if (!C.zf) goto L_1032360e;
  /* 1032360a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032360c jmp 0x10323654 */
  goto L_10323654;
L_1032360e:;
  /* 1032360e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10323611 push edx */
  push32((uint32_t)(EDX));
  /* 10323612 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10323615 push eax */
  push32((uint32_t)(EAX));
  /* 10323616 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10323619 push ecx */
  push32((uint32_t)(ECX));
  /* 1032361a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1032361d push edx */
  push32((uint32_t)(EDX));
  /* 1032361e push 1 */
  push32((uint32_t)(0x1u));
  /* 10323620 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10323623 push eax */
  push32((uint32_t)(EAX));
  /* 10323624 call dword ptr [0x10342370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342370))), 0x1032362au);
  /* 1032362a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1032362c jne 0x10323632 */
  if (!C.zf) goto L_10323632;
  /* 1032362e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10323630 jmp 0x10323654 */
  goto L_10323654;
L_10323632:;
  /* 10323632 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10323635 push ecx */
  push32((uint32_t)(ECX));
  /* 10323636 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10323639 push edx */
  push32((uint32_t)(EDX));
  /* 1032363a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1032363d push eax */
  push32((uint32_t)(EAX));
  /* 1032363e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10323641 push ecx */
  push32((uint32_t)(ECX));
  /* 10323642 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10323645 push edx */
  push32((uint32_t)(EDX));
  /* 10323646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323649 push eax */
  push32((uint32_t)(EAX));
  /* 1032364a call dword ptr [0x10342260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342260))), 0x10323650u);
  /* 10323650 jmp 0x10323654 */
  goto L_10323654;
L_10323652:;
  /* 10323652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10323654:;
  /* 10323654 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10323657 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1032365a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10323661 pop edi */
  EDI = (pop32());
  /* 10323662 pop esi */
  ESI = (pop32());
  /* 10323663 pop ebx */
  EBX = (pop32());
  /* 10323664 mov esp, ebp */
  ESP = (EBP);
  /* 10323666 pop ebp */
  EBP = (pop32());
  /* 10323667 ret  */
  ESPCHK(0x10323270u, _esp0);
  ESP += 4; return;
}

/* FUN_10013670 @ 0x10323670 (80 bytes, 32 insns) */
void f_10323670(void) {
  FTRACE(0x10323670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10323670 push ebp */
  push32((uint32_t)(EBP));
  /* 10323671 mov ebp, esp */
  EBP = (ESP);
  /* 10323673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10323676 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10323679 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1032367c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032367f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10323682:;
  /* 10323682 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323685 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323688 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1032368b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1032368e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10323690 je 0x103236a7 */
  if (C.zf) goto L_103236a7;
  /* 10323692 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323695 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10323698 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1032369a je 0x103236a7 */
  if (C.zf) goto L_103236a7;
  /* 1032369c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032369f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103236a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103236a5 jmp 0x10323682 */
  goto L_10323682;
L_103236a7:;
  /* 103236a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103236aa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103236ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103236af jne 0x103236b9 */
  if (!C.zf) goto L_103236b9;
  /* 103236b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103236b4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103236b7 jmp 0x103236bc */
  goto L_103236bc;
L_103236b9:;
  /* 103236b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_103236bc:;
  /* 103236bc mov esp, ebp */
  ESP = (EBP);
  /* 103236be pop ebp */
  EBP = (pop32());
  /* 103236bf ret  */
  ESPCHK(0x10323670u, _esp0);
  ESP += 4; return;
}

/* FUN_100136c0 @ 0x103236c0 (736 bytes, 224 insns) */
void f_103236c0(void) {
  FTRACE(0x103236c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103236c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103236c1 mov ebp, esp */
  EBP = (ESP);
  /* 103236c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103236c6 push esi */
  push32((uint32_t)(ESI));
  /* 103236c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103236cb je 0x103236ec */
  if (C.zf) goto L_103236ec;
  /* 103236cd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 103236cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103236d2 push eax */
  push32((uint32_t)(EAX));
  /* 103236d3 call 0x10323b10 */
  push32(0x103236d8u); f_10323b10();
  /* 103236d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103236db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103236de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103236e2 je 0x103236ec */
  if (C.zf) goto L_103236ec;
  /* 103236e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103236e7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103236ea jne 0x103236f4 */
  if (!C.zf) goto L_103236f4;
L_103236ec:;
  /* 103236ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103236ef jmp 0x1032399b */
  goto L_1032399b;
L_103236f4:;
  /* 103236f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103236f7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103236fb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103236fd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103236ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10323700 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10323703 mov ecx, dword ptr [0x1033f4d4] */
  ECX = (r32((uint32_t)(0x1033f4d4)));
  /* 10323709 cmp ecx, dword ptr [0x1033f4d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1033f4d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032370f jne 0x10323725 */
  if (!C.zf) goto L_10323725;
  /* 10323711 mov edx, dword ptr [0x1033f4d4] */
  EDX = (r32((uint32_t)(0x1033f4d4)));
  /* 10323717 push edx */
  push32((uint32_t)(EDX));
  /* 10323718 call 0x10323a20 */
  push32(0x1032371du); f_10323a20();
  /* 1032371d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323720 mov dword ptr [0x1033f4d4], eax */
  w32((uint32_t)(0x1033f4d4), (EAX));
L_10323725:;
  /* 10323725 cmp dword ptr [0x1033f4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032372c jne 0x103237e5 */
  if (!C.zf) goto L_103237e5;
  /* 10323732 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323736 je 0x10323757 */
  if (C.zf) goto L_10323757;
  /* 10323738 cmp dword ptr [0x1033f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032373f je 0x10323757 */
  if (C.zf) goto L_10323757;
  /* 10323741 call 0x103231c0 */
  push32(0x10323746u); f_103231c0();
  /* 10323746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10323748 je 0x10323752 */
  if (C.zf) goto L_10323752;
  /* 1032374a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1032374d jmp 0x1032399b */
  goto L_1032399b;
L_10323752:;
  /* 10323752 jmp 0x103237e5 */
  goto L_103237e5;
L_10323757:;
  /* 10323757 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032375b je 0x10323764 */
  if (C.zf) goto L_10323764;
  /* 1032375d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032375f jmp 0x1032399b */
  goto L_1032399b;
L_10323764:;
  /* 10323764 cmp dword ptr [0x1033f4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032376b jne 0x103237a4 */
  if (!C.zf) goto L_103237a4;
  /* 1032376d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10323772 push 0x1033b950 */
  push32((uint32_t)(0x1033b950u));
  /* 10323777 push 2 */
  push32((uint32_t)(0x2u));
  /* 10323779 push 4 */
  push32((uint32_t)(0x4u));
  /* 1032377b call 0x103136c0 */
  push32(0x10323780u); f_103136c0();
  /* 10323780 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323783 mov dword ptr [0x1033f4d4], eax */
  w32((uint32_t)(0x1033f4d4), (EAX));
  /* 10323788 cmp dword ptr [0x1033f4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032378f jne 0x10323799 */
  if (!C.zf) goto L_10323799;
  /* 10323791 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10323794 jmp 0x1032399b */
  goto L_1032399b;
L_10323799:;
  /* 10323799 mov eax, dword ptr [0x1033f4d4] */
  EAX = (r32((uint32_t)(0x1033f4d4)));
  /* 1032379e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_103237a4:;
  /* 103237a4 cmp dword ptr [0x1033f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103237ab jne 0x103237e5 */
  if (!C.zf) goto L_103237e5;
  /* 103237ad push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 103237b2 push 0x1033b950 */
  push32((uint32_t)(0x1033b950u));
  /* 103237b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103237b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 103237bb call 0x103136c0 */
  push32(0x103237c0u); f_103136c0();
  /* 103237c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103237c3 mov dword ptr [0x1033f4dc], eax */
  w32((uint32_t)(0x1033f4dc), (EAX));
  /* 103237c8 cmp dword ptr [0x1033f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103237cf jne 0x103237d9 */
  if (!C.zf) goto L_103237d9;
  /* 103237d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103237d4 jmp 0x1032399b */
  goto L_1032399b;
L_103237d9:;
  /* 103237d9 mov ecx, dword ptr [0x1033f4dc] */
  ECX = (r32((uint32_t)(0x1033f4dc)));
  /* 103237df mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_103237e5:;
  /* 103237e5 mov edx, dword ptr [0x1033f4d4] */
  EDX = (r32((uint32_t)(0x1033f4d4)));
  /* 103237eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103237ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103237f1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103237f4 push eax */
  push32((uint32_t)(EAX));
  /* 103237f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103237f8 push ecx */
  push32((uint32_t)(ECX));
  /* 103237f9 call 0x103239a0 */
  push32(0x103237feu); f_103239a0();
  /* 103237fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323801 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10323804 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323808 jl 0x103238a1 */
  if ((C.sf!=C.of)) goto L_103238a1;
  /* 1032380e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323811 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323814 je 0x103238a1 */
  if (C.zf) goto L_103238a1;
  /* 1032381a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032381e je 0x10323893 */
  if (C.zf) goto L_10323893;
  /* 10323820 push 2 */
  push32((uint32_t)(0x2u));
  /* 10323822 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323825 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323828 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1032382b push edx */
  push32((uint32_t)(EDX));
  /* 1032382c call 0x10314150 */
  push32(0x10323831u); f_10314150();
  /* 10323831 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323834 jmp 0x1032383f */
  goto L_1032383f;
L_10323836:;
  /* 10323836 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323839 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032383c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1032383f:;
  /* 1032383f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323842 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323845 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323849 je 0x10323860 */
  if (C.zf) goto L_10323860;
  /* 1032384b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032384e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323851 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323854 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10323857 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1032385b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1032385e jmp 0x10323836 */
  goto L_10323836;
L_10323860:;
  /* 10323860 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10323865 push 0x1033b950 */
  push32((uint32_t)(0x1033b950u));
  /* 1032386a push 2 */
  push32((uint32_t)(0x2u));
  /* 1032386c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032386f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10323872 push eax */
  push32((uint32_t)(EAX));
  /* 10323873 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323876 push ecx */
  push32((uint32_t)(ECX));
  /* 10323877 call 0x10313b50 */
  push32(0x1032387cu); f_10313b50();
  /* 1032387c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032387f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10323882 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323886 je 0x10323891 */
  if (C.zf) goto L_10323891;
  /* 10323888 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032388b mov dword ptr [0x1033f4d4], edx */
  w32((uint32_t)(0x1033f4d4), (EDX));
L_10323891:;
  /* 10323891 jmp 0x1032389f */
  goto L_1032389f;
L_10323893:;
  /* 10323893 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323896 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323899 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032389c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1032389f:;
  /* 1032389f jmp 0x10323914 */
  goto L_10323914;
L_103238a1:;
  /* 103238a1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103238a5 jne 0x1032390d */
  if (!C.zf) goto L_1032390d;
  /* 103238a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103238ab jge 0x103238b5 */
  if ((C.sf==C.of)) goto L_103238b5;
  /* 103238ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103238b0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103238b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103238b5:;
  /* 103238b5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 103238ba push 0x1033b950 */
  push32((uint32_t)(0x1033b950u));
  /* 103238bf push 2 */
  push32((uint32_t)(0x2u));
  /* 103238c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103238c4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 103238cb push edx */
  push32((uint32_t)(EDX));
  /* 103238cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103238cf push eax */
  push32((uint32_t)(EAX));
  /* 103238d0 call 0x10313b50 */
  push32(0x103238d5u); f_10313b50();
  /* 103238d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103238d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103238db cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103238df jne 0x103238e9 */
  if (!C.zf) goto L_103238e9;
  /* 103238e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103238e4 jmp 0x1032399b */
  goto L_1032399b;
L_103238e9:;
  /* 103238e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103238ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103238ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103238f2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 103238f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103238f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103238fb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10323903 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323906 mov dword ptr [0x1033f4d4], eax */
  w32((uint32_t)(0x1033f4d4), (EAX));
  /* 1032390b jmp 0x10323914 */
  goto L_10323914;
L_1032390d:;
  /* 1032390d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032390f jmp 0x1032399b */
  goto L_1032399b;
L_10323914:;
  /* 10323914 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323918 je 0x10323999 */
  if (C.zf) goto L_10323999;
  /* 1032391a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1032391f push 0x1033b950 */
  push32((uint32_t)(0x1033b950u));
  /* 10323924 push 2 */
  push32((uint32_t)(0x2u));
  /* 10323926 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323929 push ecx */
  push32((uint32_t)(ECX));
  /* 1032392a call 0x103164f0 */
  push32(0x1032392fu); f_103164f0();
  /* 1032392f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323932 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323935 push eax */
  push32((uint32_t)(EAX));
  /* 10323936 call 0x103136c0 */
  push32(0x1032393bu); f_103136c0();
  /* 1032393b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032393e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10323941 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323945 je 0x10323999 */
  if (C.zf) goto L_10323999;
  /* 10323947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032394a push edx */
  push32((uint32_t)(EDX));
  /* 1032394b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1032394e push eax */
  push32((uint32_t)(EAX));
  /* 1032394f call 0x10316670 */
  push32(0x10323954u); f_10316670();
  /* 10323954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323957 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1032395a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1032395d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10323960 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323962 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10323965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323968 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1032396b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032396e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323971 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10323974 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10323977 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10323979 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1032397b not edx */
  EDX = (~(EDX));
  /* 1032397d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10323980 push edx */
  push32((uint32_t)(EDX));
  /* 10323981 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10323984 push eax */
  push32((uint32_t)(EAX));
  /* 10323985 call dword ptr [0x1034225c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034225c))), 0x1032398bu);
  /* 1032398b push 2 */
  push32((uint32_t)(0x2u));
  /* 1032398d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10323990 push ecx */
  push32((uint32_t)(ECX));
  /* 10323991 call 0x10314150 */
  push32(0x10323996u); f_10314150();
  /* 10323996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10323999:;
  /* 10323999 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1032399b:;
  /* 1032399b pop esi */
  ESI = (pop32());
  /* 1032399c mov esp, ebp */
  ESP = (EBP);
  /* 1032399e pop ebp */
  EBP = (pop32());
  /* 1032399f ret  */
  ESPCHK(0x103236c0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x103239a0 (124 bytes, 47 insns) */
void f_103239a0(void) {
  FTRACE(0x103239a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103239a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103239a1 mov ebp, esp */
  EBP = (ESP);
  /* 103239a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103239a4 mov eax, dword ptr [0x1033f4d4] */
  EAX = (r32((uint32_t)(0x1033f4d4)));
  /* 103239a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103239ac jmp 0x103239b7 */
  goto L_103239b7;
L_103239ae:;
  /* 103239ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103239b1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103239b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103239b7:;
  /* 103239b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103239ba cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103239bd je 0x10323a0a */
  if (C.zf) goto L_10323a0a;
  /* 103239bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103239c2 push eax */
  push32((uint32_t)(EAX));
  /* 103239c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103239c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103239c8 push edx */
  push32((uint32_t)(EDX));
  /* 103239c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103239cc push eax */
  push32((uint32_t)(EAX));
  /* 103239cd call 0x10323170 */
  push32(0x103239d2u); f_10323170();
  /* 103239d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103239d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103239d7 jne 0x10323a08 */
  if (!C.zf) goto L_10323a08;
  /* 103239d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103239dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103239de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103239e1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 103239e5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103239e8 je 0x103239fa */
  if (C.zf) goto L_103239fa;
  /* 103239ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103239ed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103239ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103239f2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 103239f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103239f8 jne 0x10323a08 */
  if (!C.zf) goto L_10323a08;
L_103239fa:;
  /* 103239fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103239fd sub eax, dword ptr [0x1033f4d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033f4d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10323a03 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10323a06 jmp 0x10323a18 */
  goto L_10323a18;
L_10323a08:;
  /* 10323a08 jmp 0x103239ae */
  goto L_103239ae;
L_10323a0a:;
  /* 10323a0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323a0d sub eax, dword ptr [0x1033f4d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033f4d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10323a13 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10323a16 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10323a18:;
  /* 10323a18 mov esp, ebp */
  ESP = (EBP);
  /* 10323a1a pop ebp */
  EBP = (pop32());
  /* 10323a1b ret  */
  ESPCHK(0x103239a0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10323a20 (238 bytes, 80 insns) */
void f_10323a20(void) {
  FTRACE(0x10323a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10323a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10323a21 mov ebp, esp */
  EBP = (ESP);
  /* 10323a23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10323a26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10323a2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323a30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10323a33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323a37 jne 0x10323a40 */
  if (!C.zf) goto L_10323a40;
  /* 10323a39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10323a3b jmp 0x10323b0a */
  goto L_10323b0a;
L_10323a40:;
  /* 10323a40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323a43 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10323a45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323a48 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323a4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10323a4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10323a50 je 0x10323a5d */
  if (C.zf) goto L_10323a5d;
  /* 10323a52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10323a55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323a58 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10323a5b jmp 0x10323a40 */
  goto L_10323a40;
L_10323a5d:;
  /* 10323a5d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10323a62 push 0x1033b950 */
  push32((uint32_t)(0x1033b950u));
  /* 10323a67 push 2 */
  push32((uint32_t)(0x2u));
  /* 10323a69 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10323a6c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10323a73 push eax */
  push32((uint32_t)(EAX));
  /* 10323a74 call 0x103136c0 */
  push32(0x10323a79u); f_103136c0();
  /* 10323a79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323a7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10323a7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323a82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10323a85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323a89 jne 0x10323a95 */
  if (!C.zf) goto L_10323a95;
  /* 10323a8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10323a8d call 0x10312630 */
  push32(0x10323a92u); f_10312630();
  /* 10323a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10323a95:;
  /* 10323a95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323a98 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10323a9b:;
  /* 10323a9b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323a9e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323aa1 je 0x10323afe */
  if (C.zf) goto L_10323afe;
  /* 10323aa3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10323aa8 push 0x1033b950 */
  push32((uint32_t)(0x1033b950u));
  /* 10323aad push 2 */
  push32((uint32_t)(0x2u));
  /* 10323aaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323ab2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10323ab4 push edx */
  push32((uint32_t)(EDX));
  /* 10323ab5 call 0x103164f0 */
  push32(0x10323abau); f_103164f0();
  /* 10323aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323abd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323ac0 push eax */
  push32((uint32_t)(EAX));
  /* 10323ac1 call 0x103136c0 */
  push32(0x10323ac6u); f_103136c0();
  /* 10323ac6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323ac9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323acc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10323ace mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323ad1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323ad4 je 0x10323aea */
  if (C.zf) goto L_10323aea;
  /* 10323ad6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323ad9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10323adb push ecx */
  push32((uint32_t)(ECX));
  /* 10323adc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323adf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10323ae1 push eax */
  push32((uint32_t)(EAX));
  /* 10323ae2 call 0x10316670 */
  push32(0x10323ae7u); f_10316670();
  /* 10323ae7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10323aea:;
  /* 10323aea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10323aed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323af0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10323af3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323af6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323af9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10323afc jmp 0x10323a9b */
  goto L_10323a9b;
L_10323afe:;
  /* 10323afe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10323b01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10323b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10323b0a:;
  /* 10323b0a mov esp, ebp */
  ESP = (EBP);
  /* 10323b0c pop ebp */
  EBP = (pop32());
  /* 10323b0d ret  */
  ESPCHK(0x10323a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b10 @ 0x10323b10 (237 bytes, 81 insns) */
void f_10323b10(void) {
  FTRACE(0x10323b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10323b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10323b11 mov ebp, esp */
  EBP = (ESP);
  /* 10323b13 push ecx */
  push32((uint32_t)(ECX));
  /* 10323b14 cmp dword ptr [0x10340c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323b1b jne 0x10323b32 */
  if (!C.zf) goto L_10323b32;
  /* 10323b1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10323b20 push eax */
  push32((uint32_t)(EAX));
  /* 10323b21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323b24 push ecx */
  push32((uint32_t)(ECX));
  /* 10323b25 call 0x10323c10 */
  push32(0x10323b2au); f_10323c10();
  /* 10323b2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323b2d jmp 0x10323bf9 */
  goto L_10323bf9;
L_10323b32:;
  /* 10323b32 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10323b34 call 0x103170c0 */
  push32(0x10323b39u); f_103170c0();
  /* 10323b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323b3c jmp 0x10323b47 */
  goto L_10323b47;
L_10323b3e:;
  /* 10323b3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323b41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323b44 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10323b47:;
  /* 10323b47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323b4a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10323b4e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10323b52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323b55 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10323b5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10323b5d je 0x10323bdb */
  if (C.zf) goto L_10323bdb;
  /* 10323b5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323b62 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10323b67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10323b69 mov cl, byte ptr [eax + 0x10340d41] */
  CL = (r8((uint32_t)(EAX + 0x10340d41)));
  /* 10323b6f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10323b72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10323b74 je 0x10323bc6 */
  if (C.zf) goto L_10323bc6;
  /* 10323b76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323b79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323b7c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10323b7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323b82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10323b84 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10323b86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10323b88 jne 0x10323b98 */
  if (!C.zf) goto L_10323b98;
  /* 10323b8a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10323b8c call 0x10317160 */
  push32(0x10323b91u); f_10317160();
  /* 10323b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323b94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10323b96 jmp 0x10323bf9 */
  goto L_10323bf9;
L_10323b98:;
  /* 10323b98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323b9b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10323ba1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10323ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323ba7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10323ba9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10323bab or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10323bad cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323bb0 jne 0x10323bc4 */
  if (!C.zf) goto L_10323bc4;
  /* 10323bb2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10323bb4 call 0x10317160 */
  push32(0x10323bb9u); f_10317160();
  /* 10323bb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323bbf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10323bc2 jmp 0x10323bf9 */
  goto L_10323bf9;
L_10323bc4:;
  /* 10323bc4 jmp 0x10323bd6 */
  goto L_10323bd6;
L_10323bc6:;
  /* 10323bc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323bc9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10323bcf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323bd2 jne 0x10323bd6 */
  if (!C.zf) goto L_10323bd6;
  /* 10323bd4 jmp 0x10323bdb */
  goto L_10323bdb;
L_10323bd6:;
  /* 10323bd6 jmp 0x10323b3e */
  goto L_10323b3e;
L_10323bdb:;
  /* 10323bdb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10323bdd call 0x10317160 */
  push32(0x10323be2u); f_10317160();
  /* 10323be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10323be5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10323be8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10323bed cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10323bf0 jne 0x10323bf7 */
  if (!C.zf) goto L_10323bf7;
  /* 10323bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10323bf5 jmp 0x10323bf9 */
  goto L_10323bf9;
L_10323bf7:;
  /* 10323bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10323bf9:;
  /* 10323bf9 mov esp, ebp */
  ESP = (EBP);
  /* 10323bfb pop ebp */
  EBP = (pop32());
  /* 10323bfc ret  */
  ESPCHK(0x10323b10u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10323c10 (193 bytes, 87 insns) */
void f_10323c10(void) {
  FTRACE(0x10323c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10323c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10323c12 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10323c16 push ebx */
  push32((uint32_t)(EBX));
  /* 10323c17 mov ebx, eax */
  EBX = (EAX);
  /* 10323c19 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10323c1c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10323c20 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10323c26 je 0x10323c3b */
  if (C.zf) goto L_10323c3b;
L_10323c28:;
  /* 10323c28 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10323c2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10323c2b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10323c2d je 0x10323c00 */
  if (C.zf) { jmp_ind(0x10323c00u); return; }
  /* 10323c2f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10323c31 je 0x10323c84 */
  if (C.zf) goto L_10323c84;
  /* 10323c33 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10323c39 jne 0x10323c28 */
  if (!C.zf) goto L_10323c28;
L_10323c3b:;
  /* 10323c3b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10323c3d push edi */
  push32((uint32_t)(EDI));
  /* 10323c3e mov eax, ebx */
  EAX = (EBX);
  /* 10323c40 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10323c43 push esi */
  push32((uint32_t)(ESI));
  /* 10323c44 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10323c46:;
  /* 10323c46 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10323c48 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10323c4d mov eax, ecx */
  EAX = (ECX);
  /* 10323c4f mov esi, edi */
  ESI = (EDI);
  /* 10323c51 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10323c53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10323c55 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10323c57 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10323c5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10323c5d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10323c5f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10323c61 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10323c64 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10323c6a jne 0x10323c88 */
  if (!C.zf) goto L_10323c88;
  /* 10323c6c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10323c71 je 0x10323c46 */
  if (C.zf) goto L_10323c46;
  /* 10323c73 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10323c78 jne 0x10323c82 */
  if (!C.zf) goto L_10323c82;
  /* 10323c7a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10323c80 jne 0x10323c46 */
  if (!C.zf) goto L_10323c46;
L_10323c82:;
  /* 10323c82 pop esi */
  ESI = (pop32());
  /* 10323c83 pop edi */
  EDI = (pop32());
L_10323c84:;
  /* 10323c84 pop ebx */
  EBX = (pop32());
  /* 10323c85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10323c87 ret  */
  ESPCHK(0x10323c10u, _esp0);
  ESP += 4; return;
L_10323c88:;
  /* 10323c88 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10323c8b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10323c8d je 0x10323cc5 */
  if (C.zf) goto L_10323cc5;
  /* 10323c8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10323c91 je 0x10323c82 */
  if (C.zf) goto L_10323c82;
  /* 10323c93 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10323c95 je 0x10323cbe */
  if (C.zf) goto L_10323cbe;
  /* 10323c97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10323c99 je 0x10323c82 */
  if (C.zf) goto L_10323c82;
  /* 10323c9b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10323c9e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10323ca0 je 0x10323cb7 */
  if (C.zf) goto L_10323cb7;
  /* 10323ca2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10323ca4 je 0x10323c82 */
  if (C.zf) goto L_10323c82;
  /* 10323ca6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10323ca8 je 0x10323cb0 */
  if (C.zf) goto L_10323cb0;
  /* 10323caa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10323cac je 0x10323c82 */
  if (C.zf) goto L_10323c82;
  /* 10323cae jmp 0x10323c46 */
  goto L_10323c46;
L_10323cb0:;
  /* 10323cb0 pop esi */
  ESI = (pop32());
  /* 10323cb1 pop edi */
  EDI = (pop32());
  /* 10323cb2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10323cb5 pop ebx */
  EBX = (pop32());
  /* 10323cb6 ret  */
  ESPCHK(0x10323c10u, _esp0);
  ESP += 4; return;
L_10323cb7:;
  /* 10323cb7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10323cba pop esi */
  ESI = (pop32());
  /* 10323cbb pop edi */
  EDI = (pop32());
  /* 10323cbc pop ebx */
  EBX = (pop32());
  /* 10323cbd ret  */
  ESPCHK(0x10323c10u, _esp0);
  ESP += 4; return;
L_10323cbe:;
  /* 10323cbe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10323cc1 pop esi */
  ESI = (pop32());
  /* 10323cc2 pop edi */
  EDI = (pop32());
  /* 10323cc3 pop ebx */
  EBX = (pop32());
  /* 10323cc4 ret  */
  ESPCHK(0x10323c10u, _esp0);
  ESP += 4; return;
L_10323cc5:;
  /* 10323cc5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10323cc8 pop esi */
  ESI = (pop32());
  /* 10323cc9 pop edi */
  EDI = (pop32());
  /* 10323cca pop ebx */
  EBX = (pop32());
  /* 10323ccb ret  */
  ESPCHK(0x10323c10u, _esp0);
  ESP += 4; return;
  /* 10323ccc jmp dword ptr [0x103422ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x103422ac)))); return;
}

/* RtlUnwind @ 0x10323e1c (6 bytes, 1 insns) */
void f_10323e1c(void) {
  FTRACE(0x10323e1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10323e1c jmp dword ptr [0x10342298] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10342298)))); return;
}

