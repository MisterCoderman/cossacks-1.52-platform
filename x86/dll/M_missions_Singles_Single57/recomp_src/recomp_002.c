#include "recomp.h"

/* FUN_10014ab0 @ 0x11984ab0 (393 bytes, 123 insns) */
void f_11984ab0(void) {
  FTRACE(0x11984ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11984ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11984ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11984ab3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984ab6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984aba jne 0x11984ac6 */
  if (!C.zf) goto L_11984ac6;
  /* 11984abc mov eax, dword ptr [0x119a2c98] */
  EAX = (r32((uint32_t)(0x119a2c98)));
  /* 11984ac1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11984ac4 jmp 0x11984acc */
  goto L_11984acc;
L_11984ac6:;
  /* 11984ac6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984ac9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11984acc:;
  /* 11984acc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984acf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11984ad2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984ad5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11984ad8 push 0x119a3bfc */
  push32((uint32_t)(0x119a3bfcu));
  /* 11984add call dword ptr [0x119a63ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63ac))), 0x11984ae3u);
  /* 11984ae3 cmp dword ptr [0x119a3bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984aea je 0x11984b0a */
  if (C.zf) goto L_11984b0a;
  /* 11984aec push 0x119a3bfc */
  push32((uint32_t)(0x119a3bfcu));
  /* 11984af1 call dword ptr [0x119a639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a639c))), 0x11984af7u);
  /* 11984af7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11984af9 call 0x1197b170 */
  push32(0x11984afeu); f_1197b170();
  /* 11984afe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984b01 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11984b08 jmp 0x11984b11 */
  goto L_11984b11;
L_11984b0a:;
  /* 11984b0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11984b11:;
  /* 11984b11 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984b15 jbe 0x11984c02 */
  if ((C.cf||C.zf)) goto L_11984c02;
  /* 11984b1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984b1e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11984b20 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11984b23 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11984b27 je 0x11984b31 */
  if (C.zf) goto L_11984b31;
  /* 11984b29 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11984b2d je 0x11984b36 */
  if (C.zf) goto L_11984b36;
  /* 11984b2f jmp 0x11984b90 */
  goto L_11984b90;
L_11984b31:;
  /* 11984b31 jmp 0x11984c02 */
  goto L_11984c02;
L_11984b36:;
  /* 11984b36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984b39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984b3c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11984b3f mov dword ptr [0x119a3bd8], 0 */
  w32((uint32_t)(0x119a3bd8), (0x0u));
  /* 11984b49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984b4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11984b4f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984b52 jne 0x11984b67 */
  if (!C.zf) goto L_11984b67;
  /* 11984b54 mov dword ptr [0x119a3bd8], 1 */
  w32((uint32_t)(0x119a3bd8), (0x1u));
  /* 11984b5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984b61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984b64 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11984b67:;
  /* 11984b67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11984b6a push ecx */
  push32((uint32_t)(ECX));
  /* 11984b6b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11984b6e push edx */
  push32((uint32_t)(EDX));
  /* 11984b6f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11984b72 push eax */
  push32((uint32_t)(EAX));
  /* 11984b73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984b76 push ecx */
  push32((uint32_t)(ECX));
  /* 11984b77 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984b7a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11984b7c push eax */
  push32((uint32_t)(EAX));
  /* 11984b7d call 0x11984c40 */
  push32(0x11984b82u); f_11984c40();
  /* 11984b82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984b85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984b88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984b8b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11984b8e jmp 0x11984bfd */
  goto L_11984bfd;
L_11984b90:;
  /* 11984b90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984b93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11984b95 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11984b97 mov ecx, dword ptr [0x119a1c98] */
  ECX = (r32((uint32_t)(0x119a1c98)));
  /* 11984b9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11984b9f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11984ba3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11984ba9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11984bab je 0x11984bd8 */
  if (C.zf) goto L_11984bd8;
  /* 11984bad cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984bb1 jbe 0x11984bd8 */
  if ((C.cf||C.zf)) goto L_11984bd8;
  /* 11984bb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984bb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984bb9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11984bbb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11984bbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984bc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984bc3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11984bc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984bc9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984bcc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11984bcf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984bd2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984bd5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11984bd8:;
  /* 11984bd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984bdb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984bde mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11984be0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11984be2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984be5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984be8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11984beb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984bee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984bf1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11984bf4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984bf7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984bfa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11984bfd:;
  /* 11984bfd jmp 0x11984b11 */
  goto L_11984b11;
L_11984c02:;
  /* 11984c02 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984c06 je 0x11984c14 */
  if (C.zf) goto L_11984c14;
  /* 11984c08 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11984c0a call 0x1197b210 */
  push32(0x11984c0fu); f_1197b210();
  /* 11984c0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984c12 jmp 0x11984c1f */
  goto L_11984c1f;
L_11984c14:;
  /* 11984c14 push 0x119a3bfc */
  push32((uint32_t)(0x119a3bfcu));
  /* 11984c19 call dword ptr [0x119a639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a639c))), 0x11984c1fu);
L_11984c1f:;
  /* 11984c1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984c23 jbe 0x11984c33 */
  if ((C.cf||C.zf)) goto L_11984c33;
  /* 11984c25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984c28 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11984c2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984c2e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984c31 jmp 0x11984c35 */
  goto L_11984c35;
L_11984c33:;
  /* 11984c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11984c35:;
  /* 11984c35 mov esp, ebp */
  ESP = (EBP);
  /* 11984c37 pop ebp */
  EBP = (pop32());
  /* 11984c38 ret  */
  ESPCHK(0x11984ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c40 @ 0x11984c40 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11984c40(void) {
  FTRACE(0x11984c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11984c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11984c41 mov ebp, esp */
  EBP = (ESP);
  /* 11984c43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984c46 push esi */
  push32((uint32_t)(ESI));
  /* 11984c47 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11984c4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11984c4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984c51 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984c54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11984c57 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984c5b ja 0x119851a8 */
  if ((!C.cf&&!C.zf)) goto L_119851a8;
  /* 11984c61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984c64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11984c66 mov dl, byte ptr [eax + 0x11985209] */
  DL = (r8((uint32_t)(EAX + 0x11985209)));
  /* 11984c6c jmp dword ptr [edx*4 + 0x119851ad] */
  switch (EDX) {
    case 0: goto L_11985186;
    case 1: goto L_11984c95;
    case 2: goto L_11984cdb;
    case 3: goto L_11984e28;
    case 4: goto L_11984e50;
    case 5: goto L_11984eef;
    case 6: goto L_11984f5b;
    case 7: goto L_11984f84;
    case 8: goto L_11984fc5;
    case 9: goto L_119850a7;
    case 10: goto L_1198510e;
    case 11: goto L_1198515b;
    case 12: goto L_11984c73;
    case 13: goto L_11984cb8;
    case 14: goto L_11984cfe;
    case 15: goto L_11984dfe;
    case 16: goto L_11984e95;
    case 17: goto L_11984ec2;
    case 18: goto L_11984f17;
    case 19: goto L_11984f9b;
    case 20: goto L_11985049;
    case 21: goto L_119850d8;
    case 22: goto L_119851a8;
    default: x86_unimpl("switch@0x11984c6c out of table"); return;
  }
L_11984c73:;
  /* 11984c73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984c76 push ecx */
  push32((uint32_t)(ECX));
  /* 11984c77 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984c7a push edx */
  push32((uint32_t)(EDX));
  /* 11984c7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984c7e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11984c81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984c84 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11984c87 push eax */
  push32((uint32_t)(EAX));
  /* 11984c88 call 0x11985260 */
  push32(0x11984c8du); f_11985260();
  /* 11984c8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984c90 jmp 0x119851a8 */
  goto L_119851a8;
L_11984c95:;
  /* 11984c95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984c98 push ecx */
  push32((uint32_t)(ECX));
  /* 11984c99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984c9c push edx */
  push32((uint32_t)(EDX));
  /* 11984c9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984ca0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11984ca3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984ca6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11984caa push eax */
  push32((uint32_t)(EAX));
  /* 11984cab call 0x11985260 */
  push32(0x11984cb0u); f_11985260();
  /* 11984cb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984cb3 jmp 0x119851a8 */
  goto L_119851a8;
L_11984cb8:;
  /* 11984cb8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984cbb push ecx */
  push32((uint32_t)(ECX));
  /* 11984cbc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984cbf push edx */
  push32((uint32_t)(EDX));
  /* 11984cc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984cc3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11984cc6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984cc9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11984ccd push eax */
  push32((uint32_t)(EAX));
  /* 11984cce call 0x11985260 */
  push32(0x11984cd3u); f_11985260();
  /* 11984cd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984cd6 jmp 0x119851a8 */
  goto L_119851a8;
L_11984cdb:;
  /* 11984cdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984cde push ecx */
  push32((uint32_t)(ECX));
  /* 11984cdf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984ce2 push edx */
  push32((uint32_t)(EDX));
  /* 11984ce3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984ce6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11984ce9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984cec mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11984cf0 push eax */
  push32((uint32_t)(EAX));
  /* 11984cf1 call 0x11985260 */
  push32(0x11984cf6u); f_11985260();
  /* 11984cf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984cf9 jmp 0x119851a8 */
  goto L_119851a8;
L_11984cfe:;
  /* 11984cfe cmp dword ptr [0x119a3bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984d05 je 0x11984d86 */
  if (C.zf) goto L_11984d86;
  /* 11984d07 mov dword ptr [0x119a3bd8], 0 */
  w32((uint32_t)(0x119a3bd8), (0x0u));
  /* 11984d11 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984d14 push ecx */
  push32((uint32_t)(ECX));
  /* 11984d15 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984d18 push edx */
  push32((uint32_t)(EDX));
  /* 11984d19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984d1c push eax */
  push32((uint32_t)(EAX));
  /* 11984d1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984d20 push ecx */
  push32((uint32_t)(ECX));
  /* 11984d21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984d24 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11984d2a push eax */
  push32((uint32_t)(EAX));
  /* 11984d2b call 0x11985410 */
  push32(0x11984d30u); f_11985410();
  /* 11984d30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984d33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984d36 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984d39 jne 0x11984d40 */
  if (!C.zf) goto L_11984d40;
  /* 11984d3b jmp 0x119851a8 */
  goto L_119851a8;
L_11984d40:;
  /* 11984d40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984d43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11984d45 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11984d48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984d4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11984d4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984d53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11984d55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984d58 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11984d5a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984d5d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984d60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11984d62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984d65 push ecx */
  push32((uint32_t)(ECX));
  /* 11984d66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984d69 push edx */
  push32((uint32_t)(EDX));
  /* 11984d6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984d6d push eax */
  push32((uint32_t)(EAX));
  /* 11984d6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984d71 push ecx */
  push32((uint32_t)(ECX));
  /* 11984d72 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984d75 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11984d7b push eax */
  push32((uint32_t)(EAX));
  /* 11984d7c call 0x11985410 */
  push32(0x11984d81u); f_11985410();
  /* 11984d81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984d84 jmp 0x11984df9 */
  goto L_11984df9;
L_11984d86:;
  /* 11984d86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984d89 push ecx */
  push32((uint32_t)(ECX));
  /* 11984d8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984d8d push edx */
  push32((uint32_t)(EDX));
  /* 11984d8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984d91 push eax */
  push32((uint32_t)(EAX));
  /* 11984d92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984d95 push ecx */
  push32((uint32_t)(ECX));
  /* 11984d96 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984d99 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11984d9f push eax */
  push32((uint32_t)(EAX));
  /* 11984da0 call 0x11985410 */
  push32(0x11984da5u); f_11985410();
  /* 11984da5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984da8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984dab cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984dae jne 0x11984db5 */
  if (!C.zf) goto L_11984db5;
  /* 11984db0 jmp 0x119851a8 */
  goto L_119851a8;
L_11984db5:;
  /* 11984db5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984db8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11984dba mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11984dbd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984dc0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11984dc2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984dc5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984dc8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11984dca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984dcd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11984dcf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984dd2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984dd5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11984dd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984dda push ecx */
  push32((uint32_t)(ECX));
  /* 11984ddb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984dde push edx */
  push32((uint32_t)(EDX));
  /* 11984ddf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984de2 push eax */
  push32((uint32_t)(EAX));
  /* 11984de3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984de6 push ecx */
  push32((uint32_t)(ECX));
  /* 11984de7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984dea mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11984df0 push eax */
  push32((uint32_t)(EAX));
  /* 11984df1 call 0x11985410 */
  push32(0x11984df6u); f_11985410();
  /* 11984df6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11984df9:;
  /* 11984df9 jmp 0x119851a8 */
  goto L_119851a8;
L_11984dfe:;
  /* 11984dfe mov ecx, dword ptr [0x119a3bd8] */
  ECX = (r32((uint32_t)(0x119a3bd8)));
  /* 11984e04 mov dword ptr [0x119a3be8], ecx */
  w32((uint32_t)(0x119a3be8), (ECX));
  /* 11984e0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984e0d push edx */
  push32((uint32_t)(EDX));
  /* 11984e0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984e11 push eax */
  push32((uint32_t)(EAX));
  /* 11984e12 push 2 */
  push32((uint32_t)(0x2u));
  /* 11984e14 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984e17 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11984e1a push edx */
  push32((uint32_t)(EDX));
  /* 11984e1b call 0x119852b0 */
  push32(0x11984e20u); f_119852b0();
  /* 11984e20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984e23 jmp 0x119851a8 */
  goto L_119851a8;
L_11984e28:;
  /* 11984e28 mov eax, dword ptr [0x119a3bd8] */
  EAX = (r32((uint32_t)(0x119a3bd8)));
  /* 11984e2d mov dword ptr [0x119a3be8], eax */
  w32((uint32_t)(0x119a3be8), (EAX));
  /* 11984e32 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984e35 push ecx */
  push32((uint32_t)(ECX));
  /* 11984e36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984e39 push edx */
  push32((uint32_t)(EDX));
  /* 11984e3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11984e3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984e3f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11984e42 push ecx */
  push32((uint32_t)(ECX));
  /* 11984e43 call 0x119852b0 */
  push32(0x11984e48u); f_119852b0();
  /* 11984e48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984e4b jmp 0x119851a8 */
  goto L_119851a8;
L_11984e50:;
  /* 11984e50 mov edx, dword ptr [0x119a3bd8] */
  EDX = (r32((uint32_t)(0x119a3bd8)));
  /* 11984e56 mov dword ptr [0x119a3be8], edx */
  w32((uint32_t)(0x119a3be8), (EDX));
  /* 11984e5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984e5f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11984e62 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11984e63 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11984e68 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11984e6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11984e6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984e71 jne 0x11984e7a */
  if (!C.zf) goto L_11984e7a;
  /* 11984e73 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11984e7a:;
  /* 11984e7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984e7d push edx */
  push32((uint32_t)(EDX));
  /* 11984e7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984e81 push eax */
  push32((uint32_t)(EAX));
  /* 11984e82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11984e84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11984e87 push ecx */
  push32((uint32_t)(ECX));
  /* 11984e88 call 0x119852b0 */
  push32(0x11984e8du); f_119852b0();
  /* 11984e8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984e90 jmp 0x119851a8 */
  goto L_119851a8;
L_11984e95:;
  /* 11984e95 mov edx, dword ptr [0x119a3bd8] */
  EDX = (r32((uint32_t)(0x119a3bd8)));
  /* 11984e9b mov dword ptr [0x119a3be8], edx */
  w32((uint32_t)(0x119a3be8), (EDX));
  /* 11984ea1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984ea4 push eax */
  push32((uint32_t)(EAX));
  /* 11984ea5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 11984ea9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11984eab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984eae mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11984eb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984eb4 push eax */
  push32((uint32_t)(EAX));
  /* 11984eb5 call 0x119852b0 */
  push32(0x11984ebau); f_119852b0();
  /* 11984eba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984ebd jmp 0x119851a8 */
  goto L_119851a8;
L_11984ec2:;
  /* 11984ec2 mov ecx, dword ptr [0x119a3bd8] */
  ECX = (r32((uint32_t)(0x119a3bd8)));
  /* 11984ec8 mov dword ptr [0x119a3be8], ecx */
  w32((uint32_t)(0x119a3be8), (ECX));
  /* 11984ece mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984ed1 push edx */
  push32((uint32_t)(EDX));
  /* 11984ed2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984ed5 push eax */
  push32((uint32_t)(EAX));
  /* 11984ed6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11984ed8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984edb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11984ede add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984ee1 push edx */
  push32((uint32_t)(EDX));
  /* 11984ee2 call 0x119852b0 */
  push32(0x11984ee7u); f_119852b0();
  /* 11984ee7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984eea jmp 0x119851a8 */
  goto L_119851a8;
L_11984eef:;
  /* 11984eef mov eax, dword ptr [0x119a3bd8] */
  EAX = (r32((uint32_t)(0x119a3bd8)));
  /* 11984ef4 mov dword ptr [0x119a3be8], eax */
  w32((uint32_t)(0x119a3be8), (EAX));
  /* 11984ef9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984efc push ecx */
  push32((uint32_t)(ECX));
  /* 11984efd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984f00 push edx */
  push32((uint32_t)(EDX));
  /* 11984f01 push 2 */
  push32((uint32_t)(0x2u));
  /* 11984f03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984f06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11984f09 push ecx */
  push32((uint32_t)(ECX));
  /* 11984f0a call 0x119852b0 */
  push32(0x11984f0fu); f_119852b0();
  /* 11984f0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984f12 jmp 0x119851a8 */
  goto L_119851a8;
L_11984f17:;
  /* 11984f17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984f1a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984f1e jg 0x11984f3c */
  if ((!C.zf&&C.sf==C.of)) goto L_11984f3c;
  /* 11984f20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984f23 push eax */
  push32((uint32_t)(EAX));
  /* 11984f24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984f27 push ecx */
  push32((uint32_t)(ECX));
  /* 11984f28 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984f2b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11984f31 push eax */
  push32((uint32_t)(EAX));
  /* 11984f32 call 0x11985260 */
  push32(0x11984f37u); f_11985260();
  /* 11984f37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984f3a jmp 0x11984f56 */
  goto L_11984f56;
L_11984f3c:;
  /* 11984f3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984f3f push ecx */
  push32((uint32_t)(ECX));
  /* 11984f40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984f43 push edx */
  push32((uint32_t)(EDX));
  /* 11984f44 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11984f47 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11984f4d push ecx */
  push32((uint32_t)(ECX));
  /* 11984f4e call 0x11985260 */
  push32(0x11984f53u); f_11985260();
  /* 11984f53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11984f56:;
  /* 11984f56 jmp 0x119851a8 */
  goto L_119851a8;
L_11984f5b:;
  /* 11984f5b mov edx, dword ptr [0x119a3bd8] */
  EDX = (r32((uint32_t)(0x119a3bd8)));
  /* 11984f61 mov dword ptr [0x119a3be8], edx */
  w32((uint32_t)(0x119a3be8), (EDX));
  /* 11984f67 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984f6a push eax */
  push32((uint32_t)(EAX));
  /* 11984f6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984f6e push ecx */
  push32((uint32_t)(ECX));
  /* 11984f6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11984f71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984f74 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11984f76 push eax */
  push32((uint32_t)(EAX));
  /* 11984f77 call 0x119852b0 */
  push32(0x11984f7cu); f_119852b0();
  /* 11984f7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984f7f jmp 0x119851a8 */
  goto L_119851a8;
L_11984f84:;
  /* 11984f84 mov ecx, dword ptr [0x119a3bd8] */
  ECX = (r32((uint32_t)(0x119a3bd8)));
  /* 11984f8a mov dword ptr [0x119a3be8], ecx */
  w32((uint32_t)(0x119a3be8), (ECX));
  /* 11984f90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984f93 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11984f96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11984f99 jmp 0x11984fed */
  goto L_11984fed;
L_11984f9b:;
  /* 11984f9b mov ecx, dword ptr [0x119a3bd8] */
  ECX = (r32((uint32_t)(0x119a3bd8)));
  /* 11984fa1 mov dword ptr [0x119a3be8], ecx */
  w32((uint32_t)(0x119a3be8), (ECX));
  /* 11984fa7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984faa push edx */
  push32((uint32_t)(EDX));
  /* 11984fab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984fae push eax */
  push32((uint32_t)(EAX));
  /* 11984faf push 1 */
  push32((uint32_t)(0x1u));
  /* 11984fb1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984fb4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11984fb7 push edx */
  push32((uint32_t)(EDX));
  /* 11984fb8 call 0x119852b0 */
  push32(0x11984fbdu); f_119852b0();
  /* 11984fbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984fc0 jmp 0x119851a8 */
  goto L_119851a8;
L_11984fc5:;
  /* 11984fc5 mov eax, dword ptr [0x119a3bd8] */
  EAX = (r32((uint32_t)(0x119a3bd8)));
  /* 11984fca mov dword ptr [0x119a3be8], eax */
  w32((uint32_t)(0x119a3be8), (EAX));
  /* 11984fcf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984fd2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984fd6 jne 0x11984fe1 */
  if (!C.zf) goto L_11984fe1;
  /* 11984fd8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11984fdf jmp 0x11984fed */
  goto L_11984fed;
L_11984fe1:;
  /* 11984fe1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984fe4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11984fe7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984fea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11984fed:;
  /* 11984fed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984ff0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11984ff3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984ff6 jge 0x11985001 */
  if ((C.sf==C.of)) goto L_11985001;
  /* 11984ff8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11984fff jmp 0x1198502e */
  goto L_1198502e;
L_11985001:;
  /* 11985001 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985004 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11985007 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11985008 mov ecx, 7 */
  ECX = (0x7u);
  /* 1198500d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1198500f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11985012 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985015 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11985018 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11985019 mov ecx, 7 */
  ECX = (0x7u);
  /* 1198501e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11985020 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985023 jl 0x1198502e */
  if ((C.sf!=C.of)) goto L_1198502e;
  /* 11985025 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11985028 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198502b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1198502e:;
  /* 1198502e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985031 push eax */
  push32((uint32_t)(EAX));
  /* 11985032 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985035 push ecx */
  push32((uint32_t)(ECX));
  /* 11985036 push 2 */
  push32((uint32_t)(0x2u));
  /* 11985038 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198503b push edx */
  push32((uint32_t)(EDX));
  /* 1198503c call 0x119852b0 */
  push32(0x11985041u); f_119852b0();
  /* 11985041 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985044 jmp 0x119851a8 */
  goto L_119851a8;
L_11985049:;
  /* 11985049 cmp dword ptr [0x119a3bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985050 je 0x11985080 */
  if (C.zf) goto L_11985080;
  /* 11985052 mov dword ptr [0x119a3bd8], 0 */
  w32((uint32_t)(0x119a3bd8), (0x0u));
  /* 1198505c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1198505f push eax */
  push32((uint32_t)(EAX));
  /* 11985060 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985063 push ecx */
  push32((uint32_t)(ECX));
  /* 11985064 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985067 push edx */
  push32((uint32_t)(EDX));
  /* 11985068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198506b push eax */
  push32((uint32_t)(EAX));
  /* 1198506c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1198506f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11985075 push edx */
  push32((uint32_t)(EDX));
  /* 11985076 call 0x11985410 */
  push32(0x1198507bu); f_11985410();
  /* 1198507b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198507e jmp 0x119850a2 */
  goto L_119850a2;
L_11985080:;
  /* 11985080 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11985083 push eax */
  push32((uint32_t)(EAX));
  /* 11985084 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985087 push ecx */
  push32((uint32_t)(ECX));
  /* 11985088 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198508b push edx */
  push32((uint32_t)(EDX));
  /* 1198508c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198508f push eax */
  push32((uint32_t)(EAX));
  /* 11985090 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11985093 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11985099 push edx */
  push32((uint32_t)(EDX));
  /* 1198509a call 0x11985410 */
  push32(0x1198509fu); f_11985410();
  /* 1198509f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119850a2:;
  /* 119850a2 jmp 0x119851a8 */
  goto L_119851a8;
L_119850a7:;
  /* 119850a7 mov dword ptr [0x119a3bd8], 0 */
  w32((uint32_t)(0x119a3bd8), (0x0u));
  /* 119850b1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119850b4 push eax */
  push32((uint32_t)(EAX));
  /* 119850b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119850b8 push ecx */
  push32((uint32_t)(ECX));
  /* 119850b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119850bc push edx */
  push32((uint32_t)(EDX));
  /* 119850bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119850c0 push eax */
  push32((uint32_t)(EAX));
  /* 119850c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119850c4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 119850ca push edx */
  push32((uint32_t)(EDX));
  /* 119850cb call 0x11985410 */
  push32(0x119850d0u); f_11985410();
  /* 119850d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119850d3 jmp 0x119851a8 */
  goto L_119851a8;
L_119850d8:;
  /* 119850d8 mov eax, dword ptr [0x119a3bd8] */
  EAX = (r32((uint32_t)(0x119a3bd8)));
  /* 119850dd mov dword ptr [0x119a3be8], eax */
  w32((uint32_t)(0x119a3be8), (EAX));
  /* 119850e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119850e5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 119850e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119850e9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 119850ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119850f0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119850f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119850f6 push edx */
  push32((uint32_t)(EDX));
  /* 119850f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119850fa push eax */
  push32((uint32_t)(EAX));
  /* 119850fb push 2 */
  push32((uint32_t)(0x2u));
  /* 119850fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11985100 push ecx */
  push32((uint32_t)(ECX));
  /* 11985101 call 0x119852b0 */
  push32(0x11985106u); f_119852b0();
  /* 11985106 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985109 jmp 0x119851a8 */
  goto L_119851a8;
L_1198510e:;
  /* 1198510e mov edx, dword ptr [0x119a3bd8] */
  EDX = (r32((uint32_t)(0x119a3bd8)));
  /* 11985114 mov dword ptr [0x119a3be8], edx */
  w32((uint32_t)(0x119a3be8), (EDX));
  /* 1198511a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198511d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11985120 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11985121 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11985126 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11985128 mov ecx, eax */
  ECX = (EAX);
  /* 1198512a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198512d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11985130 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985133 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11985136 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11985137 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1198513c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1198513e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985140 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11985143 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985146 push eax */
  push32((uint32_t)(EAX));
  /* 11985147 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198514a push ecx */
  push32((uint32_t)(ECX));
  /* 1198514b push 4 */
  push32((uint32_t)(0x4u));
  /* 1198514d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11985150 push edx */
  push32((uint32_t)(EDX));
  /* 11985151 call 0x119852b0 */
  push32(0x11985156u); f_119852b0();
  /* 11985156 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985159 jmp 0x119851a8 */
  goto L_119851a8;
L_1198515b:;
  /* 1198515b call 0x11986270 */
  push32(0x11985160u); f_11986270();
  /* 11985160 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985163 push eax */
  push32((uint32_t)(EAX));
  /* 11985164 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985167 push ecx */
  push32((uint32_t)(ECX));
  /* 11985168 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198516b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198516d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985171 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11985174 mov ecx, dword ptr [eax*4 + 0x119a2e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119a2e1c)));
  /* 1198517b push ecx */
  push32((uint32_t)(ECX));
  /* 1198517c call 0x11985260 */
  push32(0x11985181u); f_11985260();
  /* 11985181 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985184 jmp 0x119851a8 */
  goto L_119851a8;
L_11985186:;
  /* 11985186 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985189 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1198518b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1198518e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985191 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11985193 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985196 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985199 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1198519b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1198519e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119851a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119851a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119851a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_119851a8:;
  /* 119851a8 pop esi */
  ESI = (pop32());
  /* 119851a9 mov esp, ebp */
  ESP = (EBP);
  /* 119851ab pop ebp */
  EBP = (pop32());
  /* 119851ac ret  */
  ESPCHK(0x11984c40u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11985260 (72 bytes, 30 insns) */
void f_11985260(void) {
  FTRACE(0x11985260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11985260 push ebp */
  push32((uint32_t)(EBP));
  /* 11985261 mov ebp, esp */
  EBP = (ESP);
L_11985263:;
  /* 11985263 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985266 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985269 je 0x119852a6 */
  if (C.zf) goto L_119852a6;
  /* 1198526b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198526e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11985271 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11985273 je 0x119852a6 */
  if (C.zf) goto L_119852a6;
  /* 11985275 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985278 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1198527a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198527d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1198527f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11985281 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985284 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11985286 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985289 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198528c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1198528e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985291 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985294 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11985297 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198529a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1198529c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198529f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119852a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119852a4 jmp 0x11985263 */
  goto L_11985263;
L_119852a6:;
  /* 119852a6 pop ebp */
  EBP = (pop32());
  /* 119852a7 ret  */
  ESPCHK(0x11985260u, _esp0);
  ESP += 4; return;
}

/* FUN_100152b0 @ 0x119852b0 (173 bytes, 64 insns) */
void f_119852b0(void) {
  FTRACE(0x119852b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119852b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119852b1 mov ebp, esp */
  EBP = (ESP);
  /* 119852b3 push ecx */
  push32((uint32_t)(ECX));
  /* 119852b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119852bb cmp dword ptr [0x119a3be8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3be8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119852c2 je 0x119852da */
  if (C.zf) goto L_119852da;
  /* 119852c4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119852c7 push eax */
  push32((uint32_t)(EAX));
  /* 119852c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119852cb push ecx */
  push32((uint32_t)(ECX));
  /* 119852cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119852cf push edx */
  push32((uint32_t)(EDX));
  /* 119852d0 call 0x11985360 */
  push32(0x119852d5u); f_11985360();
  /* 119852d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119852d8 jmp 0x11985359 */
  goto L_11985359;
L_119852da:;
  /* 119852da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119852dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119852e0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119852e2 jae 0x11985350 */
  if (!C.cf) goto L_11985350;
  /* 119852e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119852e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119852ea mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 119852ed jmp 0x119852f8 */
  goto L_119852f8;
L_119852ef:;
  /* 119852ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119852f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119852f5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_119852f8:;
  /* 119852f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119852fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119852fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11985300 je 0x11985334 */
  if (C.zf) goto L_11985334;
  /* 11985302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985305 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11985306 mov ecx, 0xa */
  ECX = (0xau);
  /* 1198530b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1198530d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985310 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985313 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11985315 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985318 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1198531b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198531e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1198531f mov ecx, 0xa */
  ECX = (0xau);
  /* 11985324 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11985326 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11985329 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198532c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198532f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11985332 jmp 0x119852ef */
  goto L_119852ef;
L_11985334:;
  /* 11985334 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985337 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11985339 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198533c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198533f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11985341 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985344 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11985346 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11985349 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1198534c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1198534e jmp 0x11985359 */
  goto L_11985359;
L_11985350:;
  /* 11985350 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985353 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11985359:;
  /* 11985359 mov esp, ebp */
  ESP = (EBP);
  /* 1198535b pop ebp */
  EBP = (pop32());
  /* 1198535c ret  */
  ESPCHK(0x119852b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11985360 (172 bytes, 65 insns) */
void f_11985360(void) {
  FTRACE(0x11985360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11985360 push ebp */
  push32((uint32_t)(EBP));
  /* 11985361 mov ebp, esp */
  EBP = (ESP);
  /* 11985363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11985366 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985369 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1198536b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1198536e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985371 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985374 jbe 0x119853bb */
  if ((C.cf||C.zf)) goto L_119853bb;
L_11985376:;
  /* 11985376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985379 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1198537a mov ecx, 0xa */
  ECX = (0xau);
  /* 1198537f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11985381 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985384 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11985387 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11985389 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198538c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198538f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11985392 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985395 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11985397 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198539a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198539d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1198539f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119853a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119853a3 mov ecx, 0xa */
  ECX = (0xau);
  /* 119853a8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119853aa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119853ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119853b1 jle 0x119853bb */
  if ((C.zf||C.sf!=C.of)) goto L_119853bb;
  /* 119853b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119853b6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119853b9 ja 0x11985376 */
  if ((!C.cf&&!C.zf)) goto L_11985376;
L_119853bb:;
  /* 119853bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119853be mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119853c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119853c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119853c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119853c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119853cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119853ce sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119853d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119853d4:;
  /* 119853d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119853d7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119853d9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 119853dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119853df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119853e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119853e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119853e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119853e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119853ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119853ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119853f2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 119853f5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 119853f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119853fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119853fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11985400 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11985403 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985406 jb 0x119853d4 */
  if (C.cf) goto L_119853d4;
  /* 11985408 mov esp, ebp */
  ESP = (EBP);
  /* 1198540a pop ebp */
  EBP = (pop32());
  /* 1198540b ret  */
  ESPCHK(0x11985360u, _esp0);
  ESP += 4; return;
}

/* FUN_10015410 @ 0x11985410 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11985410(void) {
  FTRACE(0x11985410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11985410 push ebp */
  push32((uint32_t)(EBP));
  /* 11985411 mov ebp, esp */
  EBP = (ESP);
  /* 11985413 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11985416:;
  /* 11985416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985419 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1198541c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1198541e je 0x1198588c */
  if (C.zf) goto L_1198588c;
  /* 11985424 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985427 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198542a je 0x1198588c */
  if (C.zf) goto L_1198588c;
  /* 11985430 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11985434 mov dword ptr [0x119a3be8], 0 */
  w32((uint32_t)(0x119a3be8), (0x0u));
  /* 1198543e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11985445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985448 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1198544b jmp 0x11985456 */
  goto L_11985456;
L_1198544d:;
  /* 1198544d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11985450 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985453 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11985456:;
  /* 11985456 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11985459 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1198545c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198545f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11985462 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11985465 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985468 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1198546b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198546d jne 0x11985471 */
  if (!C.zf) goto L_11985471;
  /* 1198546f jmp 0x1198544d */
  goto L_1198544d;
L_11985471:;
  /* 11985471 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11985474 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11985477 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1198547a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198547d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11985480 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11985483 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11985486 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11985489 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1198548c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985490 ja 0x119857e0 */
  if ((!C.cf&&!C.zf)) goto L_119857e0;
  /* 11985496 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11985499 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198549b mov al, byte ptr [ecx + 0x119858bc] */
  AL = (r8((uint32_t)(ECX + 0x119858bc)));
  /* 119854a1 jmp dword ptr [eax*4 + 0x11985890] */
  switch (EAX) {
    case 0: goto L_119856ff;
    case 1: goto L_119855e3;
    case 2: goto L_1198556e;
    case 3: goto L_119854a8;
    case 4: goto L_119854e6;
    case 5: goto L_11985547;
    case 6: goto L_11985595;
    case 7: goto L_119855bc;
    case 8: goto L_1198562a;
    case 9: goto L_11985524;
    case 10: goto L_119857e0;
    default: x86_unimpl("switch@0x119854a1 out of table"); return;
  }
L_119854a8:;
  /* 119854a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119854ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119854ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119854b1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119854b4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119854b7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119854bb ja 0x119854e1 */
  if ((!C.cf&&!C.zf)) goto L_119854e1;
  /* 119854bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119854c0 jmp dword ptr [ecx*4 + 0x1198590f] */
  switch (ECX) {
    case 0: goto L_119854c7;
    case 1: goto L_119854d1;
    case 2: goto L_119854d7;
    case 3: goto L_119854dd;
    case 4: goto L_11985505;
    case 5: goto L_1198550f;
    case 6: goto L_11985515;
    case 7: goto L_1198551b;
    default: x86_unimpl("switch@0x119854c0 out of table"); return;
  }
L_119854c7:;
  /* 119854c7 mov dword ptr [0x119a3be8], 1 */
  w32((uint32_t)(0x119a3be8), (0x1u));
L_119854d1:;
  /* 119854d1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 119854d5 jmp 0x119854e1 */
  goto L_119854e1;
L_119854d7:;
  /* 119854d7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 119854db jmp 0x119854e1 */
  goto L_119854e1;
L_119854dd:;
  /* 119854dd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_119854e1:;
  /* 119854e1 jmp 0x119857e0 */
  goto L_119857e0;
L_119854e6:;
  /* 119854e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119854e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119854ec mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119854ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119854f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119854f5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119854f9 ja 0x1198551f */
  if ((!C.cf&&!C.zf)) goto L_1198551f;
  /* 119854fb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119854fe jmp dword ptr [ecx*4 + 0x1198591f] */
  switch (ECX) {
    case 0: goto L_11985505;
    case 1: goto L_1198550f;
    case 2: goto L_11985515;
    case 3: goto L_1198551b;
    default: x86_unimpl("switch@0x119854fe out of table"); return;
  }
L_11985505:;
  /* 11985505 mov dword ptr [0x119a3be8], 1 */
  w32((uint32_t)(0x119a3be8), (0x1u));
L_1198550f:;
  /* 1198550f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11985513 jmp 0x1198551f */
  goto L_1198551f;
L_11985515:;
  /* 11985515 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11985519 jmp 0x1198551f */
  goto L_1198551f;
L_1198551b:;
  /* 1198551b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1198551f:;
  /* 1198551f jmp 0x119857e0 */
  goto L_119857e0;
L_11985524:;
  /* 11985524 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11985527 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1198552a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198552e je 0x11985538 */
  if (C.zf) goto L_11985538;
  /* 11985530 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985534 je 0x1198553e */
  if (C.zf) goto L_1198553e;
  /* 11985536 jmp 0x11985542 */
  goto L_11985542;
L_11985538:;
  /* 11985538 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1198553c jmp 0x11985542 */
  goto L_11985542;
L_1198553e:;
  /* 1198553e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11985542:;
  /* 11985542 jmp 0x119857e0 */
  goto L_119857e0;
L_11985547:;
  /* 11985547 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198554a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1198554d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985551 je 0x1198555b */
  if (C.zf) goto L_1198555b;
  /* 11985553 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985557 je 0x11985565 */
  if (C.zf) goto L_11985565;
  /* 11985559 jmp 0x11985569 */
  goto L_11985569;
L_1198555b:;
  /* 1198555b mov dword ptr [0x119a3be8], 1 */
  w32((uint32_t)(0x119a3be8), (0x1u));
L_11985565:;
  /* 11985565 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11985569:;
  /* 11985569 jmp 0x119857e0 */
  goto L_119857e0;
L_1198556e:;
  /* 1198556e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11985571 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11985574 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985578 je 0x11985582 */
  if (C.zf) goto L_11985582;
  /* 1198557a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198557e je 0x1198558c */
  if (C.zf) goto L_1198558c;
  /* 11985580 jmp 0x11985590 */
  goto L_11985590;
L_11985582:;
  /* 11985582 mov dword ptr [0x119a3be8], 1 */
  w32((uint32_t)(0x119a3be8), (0x1u));
L_1198558c:;
  /* 1198558c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11985590:;
  /* 11985590 jmp 0x119857e0 */
  goto L_119857e0;
L_11985595:;
  /* 11985595 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11985598 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1198559b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198559f je 0x119855a9 */
  if (C.zf) goto L_119855a9;
  /* 119855a1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119855a5 je 0x119855b3 */
  if (C.zf) goto L_119855b3;
  /* 119855a7 jmp 0x119855b7 */
  goto L_119855b7;
L_119855a9:;
  /* 119855a9 mov dword ptr [0x119a3be8], 1 */
  w32((uint32_t)(0x119a3be8), (0x1u));
L_119855b3:;
  /* 119855b3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_119855b7:;
  /* 119855b7 jmp 0x119857e0 */
  goto L_119857e0;
L_119855bc:;
  /* 119855bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119855bf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 119855c2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119855c6 je 0x119855d0 */
  if (C.zf) goto L_119855d0;
  /* 119855c8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119855cc je 0x119855da */
  if (C.zf) goto L_119855da;
  /* 119855ce jmp 0x119855de */
  goto L_119855de;
L_119855d0:;
  /* 119855d0 mov dword ptr [0x119a3be8], 1 */
  w32((uint32_t)(0x119a3be8), (0x1u));
L_119855da:;
  /* 119855da mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_119855de:;
  /* 119855de jmp 0x119857e0 */
  goto L_119857e0;
L_119855e3:;
  /* 119855e3 push 0x119a0504 */
  push32((uint32_t)(0x119a0504u));
  /* 119855e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119855eb push ecx */
  push32((uint32_t)(ECX));
  /* 119855ec call 0x11985e40 */
  push32(0x119855f1u); f_11985e40();
  /* 119855f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119855f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119855f6 jne 0x11985603 */
  if (!C.zf) goto L_11985603;
  /* 119855f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119855fb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119855fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11985601 jmp 0x11985621 */
  goto L_11985621;
L_11985603:;
  /* 11985603 push 0x119a0500 */
  push32((uint32_t)(0x119a0500u));
  /* 11985608 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198560b push eax */
  push32((uint32_t)(EAX));
  /* 1198560c call 0x11985e40 */
  push32(0x11985611u); f_11985e40();
  /* 11985611 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11985616 jne 0x11985621 */
  if (!C.zf) goto L_11985621;
  /* 11985618 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198561b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198561e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11985621:;
  /* 11985621 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11985625 jmp 0x119857e0 */
  goto L_119857e0;
L_1198562a:;
  /* 1198562a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198562d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985631 jg 0x11985641 */
  if ((!C.zf&&C.sf==C.of)) goto L_11985641;
  /* 11985633 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11985636 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1198563c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1198563f jmp 0x1198564d */
  goto L_1198564d;
L_11985641:;
  /* 11985641 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11985644 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1198564a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1198564d:;
  /* 1198564d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985651 jle 0x119856f4 */
  if ((C.zf||C.sf!=C.of)) goto L_119856f4;
  /* 11985657 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1198565a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198565d jbe 0x119856f4 */
  if ((C.cf||C.zf)) goto L_119856f4;
  /* 11985663 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11985666 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985668 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1198566a mov ecx, dword ptr [0x119a1c98] */
  ECX = (r32((uint32_t)(0x119a1c98)));
  /* 11985670 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11985672 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11985676 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1198567c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1198567e je 0x119856b7 */
  if (C.zf) goto L_119856b7;
  /* 11985680 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985683 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985686 jbe 0x119856b7 */
  if ((C.cf||C.zf)) goto L_119856b7;
  /* 11985688 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198568b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1198568d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11985690 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11985692 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11985694 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985697 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11985699 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198569c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198569f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119856a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119856a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119856a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119856aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119856ad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119856af sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119856b2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119856b5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119856b7:;
  /* 119856b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119856ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119856bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119856bf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119856c1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119856c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119856c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119856c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119856cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119856ce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119856d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119856d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119856d6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119856d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119856dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119856de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119856e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119856e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119856e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119856e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119856ec mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119856ef jmp 0x1198564d */
  goto L_1198564d;
L_119856f4:;
  /* 119856f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119856f7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119856fa jmp 0x11985416 */
  goto L_11985416;
L_119856ff:;
  /* 119856ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11985702 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11985705 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11985707 je 0x119857d2 */
  if (C.zf) goto L_119857d2;
  /* 1198570d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985710 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985713 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11985716:;
  /* 11985716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985719 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1198571c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1198571e je 0x119857d0 */
  if (C.zf) goto L_119857d0;
  /* 11985724 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985727 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198572a je 0x119857d0 */
  if (C.zf) goto L_119857d0;
  /* 11985730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985733 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11985736 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985739 jne 0x11985749 */
  if (!C.zf) goto L_11985749;
  /* 1198573b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198573e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985741 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11985744 jmp 0x119857d0 */
  goto L_119857d0;
L_11985749:;
  /* 11985749 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198574c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1198574e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11985750 mov edx, dword ptr [0x119a1c98] */
  EDX = (r32((uint32_t)(0x119a1c98)));
  /* 11985756 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985758 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1198575c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11985761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11985763 je 0x1198579c */
  if (C.zf) goto L_1198579c;
  /* 11985765 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985768 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198576b jbe 0x1198579c */
  if ((C.cf||C.zf)) goto L_1198579c;
  /* 1198576d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985770 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11985772 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985775 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11985777 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11985779 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198577c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1198577e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985781 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985784 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11985786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198578c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1198578f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985792 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11985794 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11985797 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1198579a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1198579c:;
  /* 1198579c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198579f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119857a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119857a4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119857a6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 119857a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119857ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119857ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119857b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119857b3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119857b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119857b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119857bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119857be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119857c1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119857c3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119857c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119857c9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119857cb jmp 0x11985716 */
  goto L_11985716;
L_119857d0:;
  /* 119857d0 jmp 0x119857db */
  goto L_119857db;
L_119857d2:;
  /* 119857d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119857d5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119857d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_119857db:;
  /* 119857db jmp 0x11985416 */
  goto L_11985416;
L_119857e0:;
  /* 119857e0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119857e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119857e6 je 0x1198580c */
  if (C.zf) goto L_1198580c;
  /* 119857e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119857eb push edx */
  push32((uint32_t)(EDX));
  /* 119857ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119857ef push eax */
  push32((uint32_t)(EAX));
  /* 119857f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119857f3 push ecx */
  push32((uint32_t)(ECX));
  /* 119857f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119857f7 push edx */
  push32((uint32_t)(EDX));
  /* 119857f8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 119857fb push eax */
  push32((uint32_t)(EAX));
  /* 119857fc call 0x11984c40 */
  push32(0x11985801u); f_11984c40();
  /* 11985801 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985804 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11985807 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1198580a jmp 0x11985887 */
  goto L_11985887;
L_1198580c:;
  /* 1198580c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198580f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985811 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11985813 mov ecx, dword ptr [0x119a1c98] */
  ECX = (r32((uint32_t)(0x119a1c98)));
  /* 11985819 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1198581b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1198581f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11985825 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11985827 je 0x11985858 */
  if (C.zf) goto L_11985858;
  /* 11985829 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198582c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1198582e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985831 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11985833 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11985835 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985838 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1198583a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198583d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985840 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11985842 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985845 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985848 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1198584b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1198584e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11985850 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11985853 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985856 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11985858:;
  /* 11985858 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198585b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1198585d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985860 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11985862 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11985864 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985867 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11985869 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198586c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198586f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11985871 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985874 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985877 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1198587a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1198587d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1198587f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11985882 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985885 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11985887:;
  /* 11985887 jmp 0x11985416 */
  goto L_11985416;
L_1198588c:;
  /* 1198588c mov esp, ebp */
  ESP = (EBP);
  /* 1198588e pop ebp */
  EBP = (pop32());
  /* 1198588f ret  */
  ESPCHK(0x11985410u, _esp0);
  ESP += 4; return;
}

/* FUN_10015930 @ 0x11985930 (650 bytes, 178 insns) */
void f_11985930(void) {
  FTRACE(0x11985930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11985930 push ebp */
  push32((uint32_t)(EBP));
  /* 11985931 mov ebp, esp */
  EBP = (ESP);
  /* 11985933 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11985939 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198593d jne 0x11985a99 */
  if (!C.zf) goto L_11985a99;
  /* 11985943 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985946 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1198594c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11985952 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11985955 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1198595c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11985966 push 0 */
  push32((uint32_t)(0x0u));
  /* 11985968 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1198596e push edx */
  push32((uint32_t)(EDX));
  /* 1198596f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11985972 push eax */
  push32((uint32_t)(EAX));
  /* 11985973 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985976 push ecx */
  push32((uint32_t)(ECX));
  /* 11985977 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198597a push edx */
  push32((uint32_t)(EDX));
  /* 1198597b call 0x11986d50 */
  push32(0x11985980u); f_11986d50();
  /* 11985980 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985983 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11985986 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198598a jne 0x11985a1f */
  if (!C.zf) goto L_11985a1f;
  /* 11985990 call dword ptr [0x119a63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d8))), 0x11985996u);
  /* 11985996 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985999 je 0x119859a0 */
  if (C.zf) goto L_119859a0;
  /* 1198599b jmp 0x11985a7d */
  goto L_11985a7d;
L_119859a0:;
  /* 119859a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119859a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119859a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119859a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119859a9 push eax */
  push32((uint32_t)(EAX));
  /* 119859aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119859ad push ecx */
  push32((uint32_t)(ECX));
  /* 119859ae call 0x11986d50 */
  push32(0x119859b3u); f_11986d50();
  /* 119859b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119859b6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 119859bc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119859c3 jne 0x119859ca */
  if (!C.zf) goto L_119859ca;
  /* 119859c5 jmp 0x11985a7d */
  goto L_11985a7d;
L_119859ca:;
  /* 119859ca push 0x58 */
  push32((uint32_t)(0x58u));
  /* 119859cc push 0x119a050c */
  push32((uint32_t)(0x119a050cu));
  /* 119859d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 119859d3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 119859d9 push edx */
  push32((uint32_t)(EDX));
  /* 119859da call 0x11977770 */
  push32(0x119859dfu); f_11977770();
  /* 119859df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119859e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119859e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119859e9 jne 0x119859f0 */
  if (!C.zf) goto L_119859f0;
  /* 119859eb jmp 0x11985a7d */
  goto L_11985a7d;
L_119859f0:;
  /* 119859f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119859f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119859f9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 119859ff push eax */
  push32((uint32_t)(EAX));
  /* 11985a00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11985a03 push ecx */
  push32((uint32_t)(ECX));
  /* 11985a04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985a07 push edx */
  push32((uint32_t)(EDX));
  /* 11985a08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985a0b push eax */
  push32((uint32_t)(EAX));
  /* 11985a0c call 0x11986d50 */
  push32(0x11985a11u); f_11986d50();
  /* 11985a11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985a14 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11985a17 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985a1b jne 0x11985a1f */
  if (!C.zf) goto L_11985a1f;
  /* 11985a1d jmp 0x11985a7d */
  goto L_11985a7d;
L_11985a1f:;
  /* 11985a1f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11985a21 push 0x119a050c */
  push32((uint32_t)(0x119a050cu));
  /* 11985a26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11985a28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11985a2b push ecx */
  push32((uint32_t)(ECX));
  /* 11985a2c call 0x11977770 */
  push32(0x11985a31u); f_11977770();
  /* 11985a31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985a34 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11985a3a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11985a3c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11985a42 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985a45 jne 0x11985a49 */
  if (!C.zf) goto L_11985a49;
  /* 11985a47 jmp 0x11985a7d */
  goto L_11985a7d;
L_11985a49:;
  /* 11985a49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11985a4c push ecx */
  push32((uint32_t)(ECX));
  /* 11985a4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11985a50 push edx */
  push32((uint32_t)(EDX));
  /* 11985a51 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11985a57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11985a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11985a5a call 0x1197af90 */
  push32(0x11985a5fu); f_1197af90();
  /* 11985a5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985a62 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985a66 je 0x11985a76 */
  if (C.zf) goto L_11985a76;
  /* 11985a68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11985a6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11985a6d push edx */
  push32((uint32_t)(EDX));
  /* 11985a6e call 0x11978200 */
  push32(0x11985a73u); f_11978200();
  /* 11985a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11985a76:;
  /* 11985a76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985a78 jmp 0x11985bb6 */
  goto L_11985bb6;
L_11985a7d:;
  /* 11985a7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985a81 je 0x11985a91 */
  if (C.zf) goto L_11985a91;
  /* 11985a83 push 2 */
  push32((uint32_t)(0x2u));
  /* 11985a85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11985a88 push eax */
  push32((uint32_t)(EAX));
  /* 11985a89 call 0x11978200 */
  push32(0x11985a8eu); f_11978200();
  /* 11985a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11985a91:;
  /* 11985a91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11985a94 jmp 0x11985bb6 */
  goto L_11985bb6;
L_11985a99:;
  /* 11985a99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985a9d jne 0x11985bb3 */
  if (!C.zf) goto L_11985bb3;
  /* 11985aa3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11985aad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985ab0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11985ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11985ab8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11985abe push edx */
  push32((uint32_t)(EDX));
  /* 11985abf push 0x119a3b00 */
  push32((uint32_t)(0x119a3b00u));
  /* 11985ac4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985ac7 push eax */
  push32((uint32_t)(EAX));
  /* 11985ac8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985acb push ecx */
  push32((uint32_t)(ECX));
  /* 11985acc call 0x11986bb0 */
  push32(0x11985ad1u); f_11986bb0();
  /* 11985ad1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985ad4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11985ad6 jne 0x11985ae0 */
  if (!C.zf) goto L_11985ae0;
  /* 11985ad8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11985adb jmp 0x11985bb6 */
  goto L_11985bb6;
L_11985ae0:;
  /* 11985ae0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11985ae6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11985ae9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11985af3 jmp 0x11985b04 */
  goto L_11985b04;
L_11985af5:;
  /* 11985af5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11985afb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985afe mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11985b04:;
  /* 11985b04 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985b0b jge 0x11985baf */
  if ((C.sf==C.of)) goto L_11985baf;
  /* 11985b11 cmp dword ptr [0x119a1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985b18 jle 0x11985b4b */
  if ((C.zf||C.sf!=C.of)) goto L_11985b4b;
  /* 11985b1a push 4 */
  push32((uint32_t)(0x4u));
  /* 11985b1c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11985b22 mov dl, byte ptr [ecx*2 + 0x119a3b00] */
  DL = (r8((uint32_t)(ECX*2 + 0x119a3b00)));
  /* 11985b29 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11985b2f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11985b35 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11985b3a push eax */
  push32((uint32_t)(EAX));
  /* 11985b3b call 0x1197d780 */
  push32(0x11985b40u); f_1197d780();
  /* 11985b40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985b43 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11985b49 jmp 0x11985b7e */
  goto L_11985b7e;
L_11985b4b:;
  /* 11985b4b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11985b51 mov dl, byte ptr [ecx*2 + 0x119a3b00] */
  DL = (r8((uint32_t)(ECX*2 + 0x119a3b00)));
  /* 11985b58 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11985b5e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11985b64 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11985b69 mov ecx, dword ptr [0x119a1c98] */
  ECX = (r32((uint32_t)(0x119a1c98)));
  /* 11985b6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11985b71 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11985b75 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11985b78 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11985b7e:;
  /* 11985b7e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985b85 je 0x11985ba8 */
  if (C.zf) goto L_11985ba8;
  /* 11985b87 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11985b8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11985b90 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11985b93 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11985b9a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11985b9e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11985ba4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11985ba6 jmp 0x11985baa */
  goto L_11985baa;
L_11985ba8:;
  /* 11985ba8 jmp 0x11985baf */
  goto L_11985baf;
L_11985baa:;
  /* 11985baa jmp 0x11985af5 */
  goto L_11985af5;
L_11985baf:;
  /* 11985baf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985bb1 jmp 0x11985bb6 */
  goto L_11985bb6;
L_11985bb3:;
  /* 11985bb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11985bb6:;
  /* 11985bb6 mov esp, ebp */
  ESP = (EBP);
  /* 11985bb8 pop ebp */
  EBP = (pop32());
  /* 11985bb9 ret  */
  ESPCHK(0x11985930u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bc0 @ 0x11985bc0 (10 bytes, 5 insns) */
void f_11985bc0(void) {
  FTRACE(0x11985bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11985bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11985bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11985bc3 mov eax, dword ptr [0x119a2d88] */
  EAX = (r32((uint32_t)(0x119a2d88)));
  /* 11985bc8 pop ebp */
  EBP = (pop32());
  /* 11985bc9 ret  */
  ESPCHK(0x11985bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bd0 @ 0x11985bd0 (575 bytes, 196 insns) */
void f_11985bd0(void) {
  FTRACE(0x11985bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11985bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11985bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11985bd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11985bd5 push 0x119a0518 */
  push32((uint32_t)(0x119a0518u));
  /* 11985bda push 0x11980878 */
  push32((uint32_t)(0x11980878u));
  /* 11985bdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11985be5 push eax */
  push32((uint32_t)(EAX));
  /* 11985be6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11985bed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985bf0 push ebx */
  push32((uint32_t)(EBX));
  /* 11985bf1 push esi */
  push32((uint32_t)(ESI));
  /* 11985bf2 push edi */
  push32((uint32_t)(EDI));
  /* 11985bf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11985bf6 cmp dword ptr [0x119a3b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985bfd jne 0x11985c4e */
  if (!C.zf) goto L_11985c4e;
  /* 11985bff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11985c02 push eax */
  push32((uint32_t)(EAX));
  /* 11985c03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11985c05 push 0x1199fc48 */
  push32((uint32_t)(0x1199fc48u));
  /* 11985c0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11985c0c call dword ptr [0x119a631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a631c))), 0x11985c12u);
  /* 11985c12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11985c14 je 0x11985c22 */
  if (C.zf) goto L_11985c22;
  /* 11985c16 mov dword ptr [0x119a3b0c], 1 */
  w32((uint32_t)(0x119a3b0c), (0x1u));
  /* 11985c20 jmp 0x11985c4e */
  goto L_11985c4e;
L_11985c22:;
  /* 11985c22 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11985c25 push ecx */
  push32((uint32_t)(ECX));
  /* 11985c26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11985c28 push 0x1199fc44 */
  push32((uint32_t)(0x1199fc44u));
  /* 11985c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11985c2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11985c31 call dword ptr [0x119a632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a632c))), 0x11985c37u);
  /* 11985c37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11985c39 je 0x11985c47 */
  if (C.zf) goto L_11985c47;
  /* 11985c3b mov dword ptr [0x119a3b0c], 2 */
  w32((uint32_t)(0x119a3b0c), (0x2u));
  /* 11985c45 jmp 0x11985c4e */
  goto L_11985c4e;
L_11985c47:;
  /* 11985c47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985c49 jmp 0x11985e29 */
  goto L_11985e29;
L_11985c4e:;
  /* 11985c4e cmp dword ptr [0x119a3b0c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3b0c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985c55 jne 0x11985c72 */
  if (!C.zf) goto L_11985c72;
  /* 11985c57 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985c5a push edx */
  push32((uint32_t)(EDX));
  /* 11985c5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985c5e push eax */
  push32((uint32_t)(EAX));
  /* 11985c5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985c62 push ecx */
  push32((uint32_t)(ECX));
  /* 11985c63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985c66 push edx */
  push32((uint32_t)(EDX));
  /* 11985c67 call dword ptr [0x119a631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a631c))), 0x11985c6du);
  /* 11985c6d jmp 0x11985e29 */
  goto L_11985e29;
L_11985c72:;
  /* 11985c72 cmp dword ptr [0x119a3b0c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119a3b0c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985c79 jne 0x11985e27 */
  if (!C.zf) goto L_11985e27;
  /* 11985c7f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985c83 jne 0x11985c8d */
  if (!C.zf) goto L_11985c8d;
  /* 11985c85 mov eax, dword ptr [0x119a3a80] */
  EAX = (r32((uint32_t)(0x119a3a80)));
  /* 11985c8a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11985c8d:;
  /* 11985c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11985c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11985c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11985c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11985c95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985c98 push ecx */
  push32((uint32_t)(ECX));
  /* 11985c99 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985c9c push edx */
  push32((uint32_t)(EDX));
  /* 11985c9d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11985ca2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11985ca5 push eax */
  push32((uint32_t)(EAX));
  /* 11985ca6 call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x11985cacu);
  /* 11985cac mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11985caf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985cb3 jne 0x11985cbc */
  if (!C.zf) goto L_11985cbc;
  /* 11985cb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985cb7 jmp 0x11985e29 */
  goto L_11985e29;
L_11985cbc:;
  /* 11985cbc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11985cc3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11985cc6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985cc9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11985ccb call 0x1197a910 */
  push32(0x11985cd0u); f_1197a910();
  /* 11985cd0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11985cd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11985cd6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11985cd9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11985cdc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11985cdf push edx */
  push32((uint32_t)(EDX));
  /* 11985ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11985ce2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11985ce5 push eax */
  push32((uint32_t)(EAX));
  /* 11985ce6 call 0x1197b4e0 */
  push32(0x11985cebu); f_1197b4e0();
  /* 11985ceb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985cee mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11985cf5 jmp 0x11985d0e */
  goto L_11985d0e;
  /* 11985cf7 mov eax, 1 */
  EAX = (0x1u);
  /* 11985cfc ret  */
  ESPCHK(0x11985bd0u, _esp0);
  ESP += 4; return;
  /* 11985cfd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11985d00 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11985d07 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11985d0e:;
  /* 11985d0e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985d12 jne 0x11985d1b */
  if (!C.zf) goto L_11985d1b;
  /* 11985d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985d16 jmp 0x11985e29 */
  goto L_11985e29;
L_11985d1b:;
  /* 11985d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11985d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11985d1f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11985d22 push ecx */
  push32((uint32_t)(ECX));
  /* 11985d23 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11985d26 push edx */
  push32((uint32_t)(EDX));
  /* 11985d27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985d2a push eax */
  push32((uint32_t)(EAX));
  /* 11985d2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11985d2e push ecx */
  push32((uint32_t)(ECX));
  /* 11985d2f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11985d34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11985d37 push edx */
  push32((uint32_t)(EDX));
  /* 11985d38 call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x11985d3eu);
  /* 11985d3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11985d40 jne 0x11985d49 */
  if (!C.zf) goto L_11985d49;
  /* 11985d42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985d44 jmp 0x11985e29 */
  goto L_11985e29;
L_11985d49:;
  /* 11985d49 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11985d50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11985d53 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11985d57 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11985d5a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11985d5c call 0x1197a910 */
  push32(0x11985d61u); f_1197a910();
  /* 11985d61 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11985d64 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11985d67 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11985d6a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11985d6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11985d74 jmp 0x11985d8d */
  goto L_11985d8d;
  /* 11985d76 mov eax, 1 */
  EAX = (0x1u);
  /* 11985d7b ret  */
  ESPCHK(0x11985bd0u, _esp0);
  ESP += 4; return;
  /* 11985d7c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11985d7f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11985d86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11985d8d:;
  /* 11985d8d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985d91 jne 0x11985d9a */
  if (!C.zf) goto L_11985d9a;
  /* 11985d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985d95 jmp 0x11985e29 */
  goto L_11985e29;
L_11985d9a:;
  /* 11985d9a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985d9e jne 0x11985da9 */
  if (!C.zf) goto L_11985da9;
  /* 11985da0 mov edx, dword ptr [0x119a3a70] */
  EDX = (r32((uint32_t)(0x119a3a70)));
  /* 11985da6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11985da9:;
  /* 11985da9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985dac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11985daf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11985db5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985db8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11985dbb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11985dc2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11985dc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11985dc6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11985dc9 push edx */
  push32((uint32_t)(EDX));
  /* 11985dca mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11985dcd push eax */
  push32((uint32_t)(EAX));
  /* 11985dce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11985dd1 push ecx */
  push32((uint32_t)(ECX));
  /* 11985dd2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11985dd5 push edx */
  push32((uint32_t)(EDX));
  /* 11985dd6 call dword ptr [0x119a632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a632c))), 0x11985ddcu);
  /* 11985ddc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11985ddf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985de2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11985de5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11985de7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11985dec cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985df2 je 0x11985e08 */
  if (C.zf) goto L_11985e08;
  /* 11985df4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985df7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11985dfa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11985dfc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11985e00 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985e06 je 0x11985e0c */
  if (C.zf) goto L_11985e0c;
L_11985e08:;
  /* 11985e08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985e0a jmp 0x11985e29 */
  goto L_11985e29;
L_11985e0c:;
  /* 11985e0c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985e0f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11985e11 push eax */
  push32((uint32_t)(EAX));
  /* 11985e12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11985e15 push ecx */
  push32((uint32_t)(ECX));
  /* 11985e16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11985e19 push edx */
  push32((uint32_t)(EDX));
  /* 11985e1a call 0x1197f660 */
  push32(0x11985e1fu); f_1197f660();
  /* 11985e1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985e22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11985e25 jmp 0x11985e29 */
  goto L_11985e29;
L_11985e27:;
  /* 11985e27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11985e29:;
  /* 11985e29 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11985e2c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11985e2f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11985e36 pop edi */
  EDI = (pop32());
  /* 11985e37 pop esi */
  ESI = (pop32());
  /* 11985e38 pop ebx */
  EBX = (pop32());
  /* 11985e39 mov esp, ebp */
  ESP = (EBP);
  /* 11985e3b pop ebp */
  EBP = (pop32());
  /* 11985e3c ret  */
  ESPCHK(0x11985bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e40 @ 0x11985e40 (208 bytes, 85 insns) */
void f_11985e40(void) {
  FTRACE(0x11985e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11985e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11985e41 mov ebp, esp */
  EBP = (ESP);
  /* 11985e43 push edi */
  push32((uint32_t)(EDI));
  /* 11985e44 push esi */
  push32((uint32_t)(ESI));
  /* 11985e45 push ebx */
  push32((uint32_t)(EBX));
  /* 11985e46 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11985e49 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11985e4c lea eax, [0x119a3a68] */
  EAX = ((uint32_t)(0x119a3a68));
  /* 11985e52 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985e56 jne 0x11985e93 */
  if (!C.zf) goto L_11985e93;
  /* 11985e58 mov al, 0xff */
  AL = (0xffu);
  /* 11985e5a mov edi, edi */
  EDI = (EDI);
L_11985e5c:;
  /* 11985e5c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11985e5e je 0x11985e8e */
  if (C.zf) goto L_11985e8e;
  /* 11985e60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11985e62 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11985e63 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11985e65 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11985e66 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985e68 je 0x11985e5c */
  if (C.zf) goto L_11985e5c;
  /* 11985e6a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11985e6c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985e6e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11985e70 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11985e73 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11985e75 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11985e77 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11985e79 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11985e7b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985e7d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11985e7f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11985e82 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11985e84 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11985e86 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985e88 je 0x11985e5c */
  if (C.zf) goto L_11985e5c;
  /* 11985e8a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11985e8c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11985e8e:;
  /* 11985e8e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11985e91 jmp 0x11985f0b */
  goto L_11985f0b;
L_11985e93:;
  /* 11985e93 lock inc dword ptr [0x119a3bfc] */
  x86_unimpl("lock inc @ 0x11985e93");
  /* 11985e9a cmp dword ptr [0x119a3bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985ea1 jg 0x11985ea7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11985ea7;
  /* 11985ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11985ea5 jmp 0x11985ebc */
  goto L_11985ebc;
L_11985ea7:;
  /* 11985ea7 lock dec dword ptr [0x119a3bfc] */
  x86_unimpl("lock dec @ 0x11985ea7");
  /* 11985eae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11985eb0 call 0x1197b170 */
  push32(0x11985eb5u); f_1197b170();
  /* 11985eb5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11985ebc:;
  /* 11985ebc mov eax, 0xff */
  EAX = (0xffu);
  /* 11985ec1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11985ec3 nop  */
  /* nop */
L_11985ec4:;
  /* 11985ec4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11985ec6 je 0x11985eef */
  if (C.zf) goto L_11985eef;
  /* 11985ec8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11985eca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11985ecb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11985ecd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11985ece cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985ed0 je 0x11985ec4 */
  if (C.zf) goto L_11985ec4;
  /* 11985ed2 push eax */
  push32((uint32_t)(EAX));
  /* 11985ed3 push ebx */
  push32((uint32_t)(EBX));
  /* 11985ed4 call 0x11986fb0 */
  push32(0x11985ed9u); f_11986fb0();
  /* 11985ed9 mov ebx, eax */
  EBX = (EAX);
  /* 11985edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985ede call 0x11986fb0 */
  push32(0x11985ee3u); f_11986fb0();
  /* 11985ee3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985ee6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985ee8 je 0x11985ec4 */
  if (C.zf) goto L_11985ec4;
  /* 11985eea sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11985eec sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11985eef:;
  /* 11985eef mov ebx, eax */
  EBX = (EAX);
  /* 11985ef1 pop eax */
  EAX = (pop32());
  /* 11985ef2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985ef4 jne 0x11985eff */
  if (!C.zf) goto L_11985eff;
  /* 11985ef6 lock dec dword ptr [0x119a3bfc] */
  x86_unimpl("lock dec @ 0x11985ef6");
  /* 11985efd jmp 0x11985f09 */
  goto L_11985f09;
L_11985eff:;
  /* 11985eff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11985f01 call 0x1197b210 */
  push32(0x11985f06u); f_1197b210();
  /* 11985f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11985f09:;
  /* 11985f09 mov eax, ebx */
  EAX = (EBX);
L_11985f0b:;
  /* 11985f0b pop ebx */
  EBX = (pop32());
  /* 11985f0c pop esi */
  ESI = (pop32());
  /* 11985f0d pop edi */
  EDI = (pop32());
  /* 11985f0e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11985f0f ret  */
  ESPCHK(0x11985e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f10 @ 0x11985f10 (257 bytes, 103 insns) */
void f_11985f10(void) {
  FTRACE(0x11985f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11985f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11985f11 mov ebp, esp */
  EBP = (ESP);
  /* 11985f13 push edi */
  push32((uint32_t)(EDI));
  /* 11985f14 push esi */
  push32((uint32_t)(ESI));
  /* 11985f15 push ebx */
  push32((uint32_t)(EBX));
  /* 11985f16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11985f19 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11985f1b je 0x1198600a */
  if (C.zf) goto L_1198600a;
  /* 11985f21 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11985f24 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11985f27 lea eax, [0x119a3a68] */
  EAX = ((uint32_t)(0x119a3a68));
  /* 11985f2d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985f31 jne 0x11985f81 */
  if (!C.zf) goto L_11985f81;
  /* 11985f33 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11985f35 mov bl, 0x5a */
  BL = (0x5au);
  /* 11985f37 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11985f39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11985f3c:;
  /* 11985f3c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11985f3e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11985f40 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11985f42 je 0x11985f65 */
  if (C.zf) goto L_11985f65;
  /* 11985f44 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11985f46 je 0x11985f65 */
  if (C.zf) goto L_11985f65;
  /* 11985f48 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11985f49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11985f4a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985f4c jb 0x11985f54 */
  if (C.cf) goto L_11985f54;
  /* 11985f4e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985f50 ja 0x11985f54 */
  if ((!C.cf&&!C.zf)) goto L_11985f54;
  /* 11985f52 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11985f54:;
  /* 11985f54 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985f56 jb 0x11985f5e */
  if (C.cf) goto L_11985f5e;
  /* 11985f58 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985f5a ja 0x11985f5e */
  if ((!C.cf&&!C.zf)) goto L_11985f5e;
  /* 11985f5c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11985f5e:;
  /* 11985f5e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985f60 jne 0x11985f6f */
  if (!C.zf) goto L_11985f6f;
  /* 11985f62 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11985f63 jne 0x11985f3c */
  if (!C.zf) goto L_11985f3c;
L_11985f65:;
  /* 11985f65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11985f67 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11985f69 je 0x1198600a */
  if (C.zf) goto L_1198600a;
L_11985f6f:;
  /* 11985f6f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11985f74 jb 0x1198600a */
  if (C.cf) goto L_1198600a;
  /* 11985f7a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11985f7c jmp 0x1198600a */
  goto L_1198600a;
L_11985f81:;
  /* 11985f81 lock inc dword ptr [0x119a3bfc] */
  x86_unimpl("lock inc @ 0x11985f81");
  /* 11985f88 cmp dword ptr [0x119a3bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985f8f jg 0x11985f95 */
  if ((!C.zf&&C.sf==C.of)) goto L_11985f95;
  /* 11985f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11985f93 jmp 0x11985fae */
  goto L_11985fae;
L_11985f95:;
  /* 11985f95 lock dec dword ptr [0x119a3bfc] */
  x86_unimpl("lock dec @ 0x11985f95");
  /* 11985f9c mov ebx, ecx */
  EBX = (ECX);
  /* 11985f9e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11985fa0 call 0x1197b170 */
  push32(0x11985fa5u); f_1197b170();
  /* 11985fa5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11985fac mov ecx, ebx */
  ECX = (EBX);
L_11985fae:;
  /* 11985fae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985fb0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11985fb2 mov edi, edi */
  EDI = (EDI);
L_11985fb4:;
  /* 11985fb4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11985fb6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985fb8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11985fba je 0x11985fdf */
  if (C.zf) goto L_11985fdf;
  /* 11985fbc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11985fbe je 0x11985fdf */
  if (C.zf) goto L_11985fdf;
  /* 11985fc0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11985fc1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11985fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11985fc3 push eax */
  push32((uint32_t)(EAX));
  /* 11985fc4 push ebx */
  push32((uint32_t)(EBX));
  /* 11985fc5 call 0x11986fb0 */
  push32(0x11985fcau); f_11986fb0();
  /* 11985fca mov ebx, eax */
  EBX = (EAX);
  /* 11985fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985fcf call 0x11986fb0 */
  push32(0x11985fd4u); f_11986fb0();
  /* 11985fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11985fd7 pop ecx */
  ECX = (pop32());
  /* 11985fd8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985fda jne 0x11985fe5 */
  if (!C.zf) goto L_11985fe5;
  /* 11985fdc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11985fdd jne 0x11985fb4 */
  if (!C.zf) goto L_11985fb4;
L_11985fdf:;
  /* 11985fdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11985fe1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11985fe3 je 0x11985fee */
  if (C.zf) goto L_11985fee;
L_11985fe5:;
  /* 11985fe5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11985fea jb 0x11985fee */
  if (C.cf) goto L_11985fee;
  /* 11985fec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11985fee:;
  /* 11985fee pop eax */
  EAX = (pop32());
  /* 11985fef or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11985ff1 jne 0x11985ffc */
  if (!C.zf) goto L_11985ffc;
  /* 11985ff3 lock dec dword ptr [0x119a3bfc] */
  x86_unimpl("lock dec @ 0x11985ff3");
  /* 11985ffa jmp 0x1198600a */
  goto L_1198600a;
L_11985ffc:;
  /* 11985ffc mov ebx, ecx */
  EBX = (ECX);
  /* 11985ffe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11986000 call 0x1197b210 */
  push32(0x11986005u); f_1197b210();
  /* 11986005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986008 mov ecx, ebx */
  ECX = (EBX);
L_1198600a:;
  /* 1198600a mov eax, ecx */
  EAX = (ECX);
  /* 1198600c pop ebx */
  EBX = (pop32());
  /* 1198600d pop esi */
  ESI = (pop32());
  /* 1198600e pop edi */
  EDI = (pop32());
  /* 1198600f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11986010 ret  */
  ESPCHK(0x11985f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016020 @ 0x11986020 (255 bytes, 88 insns) */
void f_11986020(void) {
  FTRACE(0x11986020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11986020 push ebp */
  push32((uint32_t)(EBP));
  /* 11986021 mov ebp, esp */
  EBP = (ESP);
  /* 11986023 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11986026:;
  /* 11986026 cmp dword ptr [0x119a1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198602d jle 0x11986046 */
  if ((C.zf||C.sf!=C.of)) goto L_11986046;
  /* 1198602f push 8 */
  push32((uint32_t)(0x8u));
  /* 11986031 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986034 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11986036 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11986038 push ecx */
  push32((uint32_t)(ECX));
  /* 11986039 call 0x1197d780 */
  push32(0x1198603eu); f_1197d780();
  /* 1198603e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986041 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11986044 jmp 0x1198605f */
  goto L_1198605f;
L_11986046:;
  /* 11986046 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986049 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198604b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1198604d mov ecx, dword ptr [0x119a1c98] */
  ECX = (r32((uint32_t)(0x119a1c98)));
  /* 11986053 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11986055 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11986059 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1198605c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1198605f:;
  /* 1198605f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986063 je 0x11986070 */
  if (C.zf) goto L_11986070;
  /* 11986065 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986068 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198606b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1198606e jmp 0x11986026 */
  goto L_11986026;
L_11986070:;
  /* 11986070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986073 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11986075 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11986077 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1198607a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198607d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986080 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11986083 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11986086 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11986089 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198608d je 0x11986095 */
  if (C.zf) goto L_11986095;
  /* 1198608f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986093 jne 0x119860a8 */
  if (!C.zf) goto L_119860a8;
L_11986095:;
  /* 11986095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986098 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198609a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1198609c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1198609f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119860a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119860a5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_119860a8:;
  /* 119860a8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_119860af:;
  /* 119860af cmp dword ptr [0x119a1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119860b6 jle 0x119860cb */
  if ((C.zf||C.sf!=C.of)) goto L_119860cb;
  /* 119860b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 119860ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119860bd push edx */
  push32((uint32_t)(EDX));
  /* 119860be call 0x1197d780 */
  push32(0x119860c3u); f_1197d780();
  /* 119860c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119860c6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119860c9 jmp 0x119860e0 */
  goto L_119860e0;
L_119860cb:;
  /* 119860cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119860ce mov ecx, dword ptr [0x119a1c98] */
  ECX = (r32((uint32_t)(0x119a1c98)));
  /* 119860d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119860d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119860da and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119860dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_119860e0:;
  /* 119860e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119860e4 je 0x1198610b */
  if (C.zf) goto L_1198610b;
  /* 119860e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119860e9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119860ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119860ef lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 119860f3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119860f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119860f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119860fb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119860fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11986100 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986103 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986106 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11986109 jmp 0x119860af */
  goto L_119860af;
L_1198610b:;
  /* 1198610b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198610f jne 0x11986118 */
  if (!C.zf) goto L_11986118;
  /* 11986111 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11986114 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11986116 jmp 0x1198611b */
  goto L_1198611b;
L_11986118:;
  /* 11986118 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1198611b:;
  /* 1198611b mov esp, ebp */
  ESP = (EBP);
  /* 1198611d pop ebp */
  EBP = (pop32());
  /* 1198611e ret  */
  ESPCHK(0x11986020u, _esp0);
  ESP += 4; return;
}

/* FUN_10016120 @ 0x11986120 (17 bytes, 8 insns) */
void f_11986120(void) {
  FTRACE(0x11986120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11986120 push ebp */
  push32((uint32_t)(EBP));
  /* 11986121 mov ebp, esp */
  EBP = (ESP);
  /* 11986123 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986126 push eax */
  push32((uint32_t)(EAX));
  /* 11986127 call 0x11986020 */
  push32(0x1198612cu); f_11986020();
  /* 1198612c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198612f pop ebp */
  EBP = (pop32());
  /* 11986130 ret  */
  ESPCHK(0x11986120u, _esp0);
  ESP += 4; return;
}

/* FUN_10016140 @ 0x11986140 (297 bytes, 106 insns) */
void f_11986140(void) {
  FTRACE(0x11986140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11986140 push ebp */
  push32((uint32_t)(EBP));
  /* 11986141 mov ebp, esp */
  EBP = (ESP);
  /* 11986143 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11986146 push esi */
  push32((uint32_t)(ESI));
L_11986147:;
  /* 11986147 cmp dword ptr [0x119a1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198614e jle 0x11986167 */
  if ((C.zf||C.sf!=C.of)) goto L_11986167;
  /* 11986150 push 8 */
  push32((uint32_t)(0x8u));
  /* 11986152 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986155 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11986157 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11986159 push ecx */
  push32((uint32_t)(ECX));
  /* 1198615a call 0x1197d780 */
  push32(0x1198615fu); f_1197d780();
  /* 1198615f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986162 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11986165 jmp 0x11986180 */
  goto L_11986180;
L_11986167:;
  /* 11986167 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198616a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198616c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1198616e mov ecx, dword ptr [0x119a1c98] */
  ECX = (r32((uint32_t)(0x119a1c98)));
  /* 11986174 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11986176 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1198617a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1198617d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11986180:;
  /* 11986180 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986184 je 0x11986191 */
  if (C.zf) goto L_11986191;
  /* 11986186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986189 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198618c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1198618f jmp 0x11986147 */
  goto L_11986147;
L_11986191:;
  /* 11986191 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986194 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11986196 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11986198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1198619b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198619e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119861a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119861a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119861a7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119861aa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119861ae je 0x119861b6 */
  if (C.zf) goto L_119861b6;
  /* 119861b0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119861b4 jne 0x119861c9 */
  if (!C.zf) goto L_119861c9;
L_119861b6:;
  /* 119861b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119861b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119861bb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119861bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119861c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119861c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119861c6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_119861c9:;
  /* 119861c9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119861d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_119861d7:;
  /* 119861d7 cmp dword ptr [0x119a1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119861de jle 0x119861f3 */
  if ((C.zf||C.sf!=C.of)) goto L_119861f3;
  /* 119861e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 119861e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119861e5 push edx */
  push32((uint32_t)(EDX));
  /* 119861e6 call 0x1197d780 */
  push32(0x119861ebu); f_1197d780();
  /* 119861eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119861ee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119861f1 jmp 0x11986208 */
  goto L_11986208;
L_119861f3:;
  /* 119861f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119861f6 mov ecx, dword ptr [0x119a1c98] */
  ECX = (r32((uint32_t)(0x119a1c98)));
  /* 119861fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119861fe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11986202 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11986205 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11986208:;
  /* 11986208 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198620c je 0x11986249 */
  if (C.zf) goto L_11986249;
  /* 1198620e push 0 */
  push32((uint32_t)(0x0u));
  /* 11986210 push 0xa */
  push32((uint32_t)(0xau));
  /* 11986212 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11986215 push eax */
  push32((uint32_t)(EAX));
  /* 11986216 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986219 push ecx */
  push32((uint32_t)(ECX));
  /* 1198621a call 0x119870e0 */
  push32(0x1198621fu); f_119870e0();
  /* 1198621f mov ecx, eax */
  ECX = (EAX);
  /* 11986221 mov esi, edx */
  ESI = (EDX);
  /* 11986223 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11986226 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11986229 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1198622a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198622c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1198622e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11986231 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11986234 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986239 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1198623b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1198623e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986241 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986244 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11986247 jmp 0x119861d7 */
  goto L_119861d7;
L_11986249:;
  /* 11986249 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198624d jne 0x1198625e */
  if (!C.zf) goto L_1198625e;
  /* 1198624f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986252 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11986254 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11986257 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198625a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1198625c jmp 0x11986264 */
  goto L_11986264;
L_1198625e:;
  /* 1198625e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986261 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11986264:;
  /* 11986264 pop esi */
  ESI = (pop32());
  /* 11986265 mov esp, ebp */
  ESP = (EBP);
  /* 11986267 pop ebp */
  EBP = (pop32());
  /* 11986268 ret  */
  ESPCHK(0x11986140u, _esp0);
  ESP += 4; return;
}

/* FUN_10016270 @ 0x11986270 (61 bytes, 18 insns) */
void f_11986270(void) {
  FTRACE(0x11986270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11986270 push ebp */
  push32((uint32_t)(EBP));
  /* 11986271 mov ebp, esp */
  EBP = (ESP);
  /* 11986273 cmp dword ptr [0x119a3bc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198627a jne 0x119862ab */
  if (!C.zf) goto L_119862ab;
  /* 1198627c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1198627e call 0x1197b170 */
  push32(0x11986283u); f_1197b170();
  /* 11986283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986286 cmp dword ptr [0x119a3bc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198628d jne 0x119862a1 */
  if (!C.zf) goto L_119862a1;
  /* 1198628f call 0x119862d0 */
  push32(0x11986294u); f_119862d0();
  /* 11986294 mov eax, dword ptr [0x119a3bc8] */
  EAX = (r32((uint32_t)(0x119a3bc8)));
  /* 11986299 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198629c mov dword ptr [0x119a3bc8], eax */
  w32((uint32_t)(0x119a3bc8), (EAX));
L_119862a1:;
  /* 119862a1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 119862a3 call 0x1197b210 */
  push32(0x119862a8u); f_1197b210();
  /* 119862a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119862ab:;
  /* 119862ab pop ebp */
  EBP = (pop32());
  /* 119862ac ret  */
  ESPCHK(0x11986270u, _esp0);
  ESP += 4; return;
}

/* FUN_100162b0 @ 0x119862b0 (30 bytes, 11 insns) */
void f_119862b0(void) {
  FTRACE(0x119862b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119862b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119862b1 mov ebp, esp */
  EBP = (ESP);
  /* 119862b3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 119862b5 call 0x1197b170 */
  push32(0x119862bau); f_1197b170();
  /* 119862ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119862bd call 0x119862d0 */
  push32(0x119862c2u); f_119862d0();
  /* 119862c2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 119862c4 call 0x1197b210 */
  push32(0x119862c9u); f_1197b210();
  /* 119862c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119862cc pop ebp */
  EBP = (pop32());
  /* 119862cd ret  */
  ESPCHK(0x119862b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100162d0 @ 0x119862d0 (939 bytes, 266 insns) */
void f_119862d0(void) {
  FTRACE(0x119862d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119862d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119862d1 mov ebp, esp */
  EBP = (ESP);
  /* 119862d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119862d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119862dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 119862df call 0x1197b170 */
  push32(0x119862e4u); f_1197b170();
  /* 119862e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119862e7 mov dword ptr [0x119a3b10], 0 */
  w32((uint32_t)(0x119a3b10), (0x0u));
  /* 119862f1 mov dword ptr [0x119a2e38], 0xffffffff */
  w32((uint32_t)(0x119a2e38), (0xffffffffu));
  /* 119862fb mov eax, dword ptr [0x119a2e38] */
  EAX = (r32((uint32_t)(0x119a2e38)));
  /* 11986300 mov dword ptr [0x119a2e28], eax */
  w32((uint32_t)(0x119a2e28), (EAX));
  /* 11986305 push 0x119a0578 */
  push32((uint32_t)(0x119a0578u));
  /* 1198630a call 0x11987150 */
  push32(0x1198630fu); f_11987150();
  /* 1198630f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986312 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11986315 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986319 jne 0x11986453 */
  if (!C.zf) goto L_11986453;
  /* 1198631f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11986321 call 0x1197b210 */
  push32(0x11986326u); f_1197b210();
  /* 11986326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986329 push 0x119a3b18 */
  push32((uint32_t)(0x119a3b18u));
  /* 1198632e call dword ptr [0x119a62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62e0))), 0x11986334u);
  /* 11986334 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986337 je 0x1198644e */
  if (C.zf) goto L_1198644e;
  /* 1198633d mov dword ptr [0x119a3b10], 1 */
  w32((uint32_t)(0x119a3b10), (0x1u));
  /* 11986347 mov ecx, dword ptr [0x119a3b18] */
  ECX = (r32((uint32_t)(0x119a3b18)));
  /* 1198634d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986350 mov dword ptr [0x119a2d90], ecx */
  w32((uint32_t)(0x119a2d90), (ECX));
  /* 11986356 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11986358 mov dx, word ptr [0x119a3b5e] */
  DX = (r16((uint32_t)(0x119a3b5e)));
  /* 1198635f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11986361 je 0x11986379 */
  if (C.zf) goto L_11986379;
  /* 11986363 mov eax, dword ptr [0x119a3b6c] */
  EAX = (r32((uint32_t)(0x119a3b6c)));
  /* 11986368 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198636b mov ecx, dword ptr [0x119a2d90] */
  ECX = (r32((uint32_t)(0x119a2d90)));
  /* 11986371 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986373 mov dword ptr [0x119a2d90], ecx */
  w32((uint32_t)(0x119a2d90), (ECX));
L_11986379:;
  /* 11986379 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1198637b mov dx, word ptr [0x119a3bb2] */
  DX = (r16((uint32_t)(0x119a3bb2)));
  /* 11986382 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11986384 je 0x119863ae */
  if (C.zf) goto L_119863ae;
  /* 11986386 cmp dword ptr [0x119a3bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198638d je 0x119863ae */
  if (C.zf) goto L_119863ae;
  /* 1198638f mov dword ptr [0x119a2d94], 1 */
  w32((uint32_t)(0x119a2d94), (0x1u));
  /* 11986399 mov eax, dword ptr [0x119a3bc0] */
  EAX = (r32((uint32_t)(0x119a3bc0)));
  /* 1198639e sub eax, dword ptr [0x119a3b6c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a3b6c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119863a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119863a7 mov dword ptr [0x119a2d98], eax */
  w32((uint32_t)(0x119a2d98), (EAX));
  /* 119863ac jmp 0x119863c2 */
  goto L_119863c2;
L_119863ae:;
  /* 119863ae mov dword ptr [0x119a2d94], 0 */
  w32((uint32_t)(0x119a2d94), (0x0u));
  /* 119863b8 mov dword ptr [0x119a2d98], 0 */
  w32((uint32_t)(0x119a2d98), (0x0u));
L_119863c2:;
  /* 119863c2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 119863c5 push ecx */
  push32((uint32_t)(ECX));
  /* 119863c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119863c8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 119863ca mov edx, dword ptr [0x119a2e1c] */
  EDX = (r32((uint32_t)(0x119a2e1c)));
  /* 119863d0 push edx */
  push32((uint32_t)(EDX));
  /* 119863d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119863d3 push 0x119a3b1c */
  push32((uint32_t)(0x119a3b1cu));
  /* 119863d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119863dd mov eax, dword ptr [0x119a3a80] */
  EAX = (r32((uint32_t)(0x119a3a80)));
  /* 119863e2 push eax */
  push32((uint32_t)(EAX));
  /* 119863e3 call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x119863e9u);
  /* 119863e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119863eb je 0x119863ff */
  if (C.zf) goto L_119863ff;
  /* 119863ed cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119863f1 jne 0x119863ff */
  if (!C.zf) goto L_119863ff;
  /* 119863f3 mov ecx, dword ptr [0x119a2e1c] */
  ECX = (r32((uint32_t)(0x119a2e1c)));
  /* 119863f9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 119863fd jmp 0x11986408 */
  goto L_11986408;
L_119863ff:;
  /* 119863ff mov edx, dword ptr [0x119a2e1c] */
  EDX = (r32((uint32_t)(0x119a2e1c)));
  /* 11986405 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11986408:;
  /* 11986408 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1198640b push eax */
  push32((uint32_t)(EAX));
  /* 1198640c push 0 */
  push32((uint32_t)(0x0u));
  /* 1198640e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11986410 mov ecx, dword ptr [0x119a2e20] */
  ECX = (r32((uint32_t)(0x119a2e20)));
  /* 11986416 push ecx */
  push32((uint32_t)(ECX));
  /* 11986417 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11986419 push 0x119a3b70 */
  push32((uint32_t)(0x119a3b70u));
  /* 1198641e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11986423 mov edx, dword ptr [0x119a3a80] */
  EDX = (r32((uint32_t)(0x119a3a80)));
  /* 11986429 push edx */
  push32((uint32_t)(EDX));
  /* 1198642a call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x11986430u);
  /* 11986430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11986432 je 0x11986445 */
  if (C.zf) goto L_11986445;
  /* 11986434 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986438 jne 0x11986445 */
  if (!C.zf) goto L_11986445;
  /* 1198643a mov eax, dword ptr [0x119a2e20] */
  EAX = (r32((uint32_t)(0x119a2e20)));
  /* 1198643f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11986443 jmp 0x1198644e */
  goto L_1198644e;
L_11986445:;
  /* 11986445 mov ecx, dword ptr [0x119a2e20] */
  ECX = (r32((uint32_t)(0x119a2e20)));
  /* 1198644b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1198644e:;
  /* 1198644e jmp 0x11986677 */
  goto L_11986677;
L_11986453:;
  /* 11986453 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986456 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11986459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198645b je 0x1198647d */
  if (C.zf) goto L_1198647d;
  /* 1198645d cmp dword ptr [0x119a3bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986464 je 0x1198648c */
  if (C.zf) goto L_1198648c;
  /* 11986466 mov ecx, dword ptr [0x119a3bc4] */
  ECX = (r32((uint32_t)(0x119a3bc4)));
  /* 1198646c push ecx */
  push32((uint32_t)(ECX));
  /* 1198646d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986470 push edx */
  push32((uint32_t)(EDX));
  /* 11986471 call 0x11983400 */
  push32(0x11986476u); f_11983400();
  /* 11986476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198647b jne 0x1198648c */
  if (!C.zf) goto L_1198648c;
L_1198647d:;
  /* 1198647d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1198647f call 0x1197b210 */
  push32(0x11986484u); f_1197b210();
  /* 11986484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986487 jmp 0x11986677 */
  goto L_11986677;
L_1198648c:;
  /* 1198648c push 2 */
  push32((uint32_t)(0x2u));
  /* 1198648e mov eax, dword ptr [0x119a3bc4] */
  EAX = (r32((uint32_t)(0x119a3bc4)));
  /* 11986493 push eax */
  push32((uint32_t)(EAX));
  /* 11986494 call 0x11978200 */
  push32(0x11986499u); f_11978200();
  /* 11986499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198649c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 119864a1 push 0x119a0570 */
  push32((uint32_t)(0x119a0570u));
  /* 119864a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 119864a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119864ab push ecx */
  push32((uint32_t)(ECX));
  /* 119864ac call 0x1197a5a0 */
  push32(0x119864b1u); f_1197a5a0();
  /* 119864b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119864b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119864b7 push eax */
  push32((uint32_t)(EAX));
  /* 119864b8 call 0x11977770 */
  push32(0x119864bdu); f_11977770();
  /* 119864bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119864c0 mov dword ptr [0x119a3bc4], eax */
  w32((uint32_t)(0x119a3bc4), (EAX));
  /* 119864c5 cmp dword ptr [0x119a3bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119864cc jne 0x119864dd */
  if (!C.zf) goto L_119864dd;
  /* 119864ce push 0xc */
  push32((uint32_t)(0xcu));
  /* 119864d0 call 0x1197b210 */
  push32(0x119864d5u); f_1197b210();
  /* 119864d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119864d8 jmp 0x11986677 */
  goto L_11986677;
L_119864dd:;
  /* 119864dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119864e0 push edx */
  push32((uint32_t)(EDX));
  /* 119864e1 mov eax, dword ptr [0x119a3bc4] */
  EAX = (r32((uint32_t)(0x119a3bc4)));
  /* 119864e6 push eax */
  push32((uint32_t)(EAX));
  /* 119864e7 call 0x1197a720 */
  push32(0x119864ecu); f_1197a720();
  /* 119864ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119864ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 119864f1 call 0x1197b210 */
  push32(0x119864f6u); f_1197b210();
  /* 119864f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119864f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 119864fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119864fe push ecx */
  push32((uint32_t)(ECX));
  /* 119864ff mov edx, dword ptr [0x119a2e1c] */
  EDX = (r32((uint32_t)(0x119a2e1c)));
  /* 11986505 push edx */
  push32((uint32_t)(EDX));
  /* 11986506 call 0x1197af90 */
  push32(0x1198650bu); f_1197af90();
  /* 1198650b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198650e mov eax, dword ptr [0x119a2e1c] */
  EAX = (r32((uint32_t)(0x119a2e1c)));
  /* 11986513 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11986517 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198651a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198651d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11986520 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986523 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11986526 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986529 jne 0x1198653d */
  if (!C.zf) goto L_1198653d;
  /* 1198652b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198652e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986531 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11986534 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986537 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198653a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1198653d:;
  /* 1198653d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986540 push eax */
  push32((uint32_t)(EAX));
  /* 11986541 call 0x11986020 */
  push32(0x11986546u); f_11986020();
  /* 11986546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986549 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198654f mov dword ptr [0x119a2d90], eax */
  w32((uint32_t)(0x119a2d90), (EAX));
L_11986554:;
  /* 11986554 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986557 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1198655a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198655d je 0x11986575 */
  if (C.zf) goto L_11986575;
  /* 1198655f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986562 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11986565 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986568 jl 0x11986580 */
  if ((C.sf!=C.of)) goto L_11986580;
  /* 1198656a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198656d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11986570 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986573 jg 0x11986580 */
  if ((!C.zf&&C.sf==C.of)) goto L_11986580;
L_11986575:;
  /* 11986575 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986578 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198657b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1198657e jmp 0x11986554 */
  goto L_11986554;
L_11986580:;
  /* 11986580 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986583 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11986586 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986589 jne 0x11986625 */
  if (!C.zf) goto L_11986625;
  /* 1198658f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986592 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986595 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11986598 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198659b push edx */
  push32((uint32_t)(EDX));
  /* 1198659c call 0x11986020 */
  push32(0x119865a1u); f_11986020();
  /* 119865a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119865a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119865a7 mov ecx, dword ptr [0x119a2d90] */
  ECX = (r32((uint32_t)(0x119a2d90)));
  /* 119865ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119865af mov dword ptr [0x119a2d90], ecx */
  w32((uint32_t)(0x119a2d90), (ECX));
L_119865b5:;
  /* 119865b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119865b8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119865bb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119865be jl 0x119865d6 */
  if ((C.sf!=C.of)) goto L_119865d6;
  /* 119865c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119865c3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119865c6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119865c9 jg 0x119865d6 */
  if ((!C.zf&&C.sf==C.of)) goto L_119865d6;
  /* 119865cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119865ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119865d1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119865d4 jmp 0x119865b5 */
  goto L_119865b5;
L_119865d6:;
  /* 119865d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119865d9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119865dc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119865df jne 0x11986625 */
  if (!C.zf) goto L_11986625;
  /* 119865e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119865e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119865e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119865ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119865ed push ecx */
  push32((uint32_t)(ECX));
  /* 119865ee call 0x11986020 */
  push32(0x119865f3u); f_11986020();
  /* 119865f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119865f6 mov edx, dword ptr [0x119a2d90] */
  EDX = (r32((uint32_t)(0x119a2d90)));
  /* 119865fc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119865fe mov dword ptr [0x119a2d90], edx */
  w32((uint32_t)(0x119a2d90), (EDX));
L_11986604:;
  /* 11986604 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986607 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1198660a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198660d jl 0x11986625 */
  if ((C.sf!=C.of)) goto L_11986625;
  /* 1198660f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986612 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11986615 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986618 jg 0x11986625 */
  if ((!C.zf&&C.sf==C.of)) goto L_11986625;
  /* 1198661a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198661d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986620 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11986623 jmp 0x11986604 */
  goto L_11986604;
L_11986625:;
  /* 11986625 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986629 je 0x11986639 */
  if (C.zf) goto L_11986639;
  /* 1198662b mov edx, dword ptr [0x119a2d90] */
  EDX = (r32((uint32_t)(0x119a2d90)));
  /* 11986631 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11986633 mov dword ptr [0x119a2d90], edx */
  w32((uint32_t)(0x119a2d90), (EDX));
L_11986639:;
  /* 11986639 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198663c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1198663f mov dword ptr [0x119a2d94], ecx */
  w32((uint32_t)(0x119a2d94), (ECX));
  /* 11986645 cmp dword ptr [0x119a2d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a2d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198664c je 0x1198666e */
  if (C.zf) goto L_1198666e;
  /* 1198664e push 3 */
  push32((uint32_t)(0x3u));
  /* 11986650 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11986653 push edx */
  push32((uint32_t)(EDX));
  /* 11986654 mov eax, dword ptr [0x119a2e20] */
  EAX = (r32((uint32_t)(0x119a2e20)));
  /* 11986659 push eax */
  push32((uint32_t)(EAX));
  /* 1198665a call 0x1197af90 */
  push32(0x1198665fu); f_1197af90();
  /* 1198665f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986662 mov ecx, dword ptr [0x119a2e20] */
  ECX = (r32((uint32_t)(0x119a2e20)));
  /* 11986668 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1198666c jmp 0x11986677 */
  goto L_11986677;
L_1198666e:;
  /* 1198666e mov edx, dword ptr [0x119a2e20] */
  EDX = (r32((uint32_t)(0x119a2e20)));
  /* 11986674 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11986677:;
  /* 11986677 mov esp, ebp */
  ESP = (EBP);
  /* 11986679 pop ebp */
  EBP = (pop32());
  /* 1198667a ret  */
  ESPCHK(0x119862d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016680 @ 0x11986680 (46 bytes, 18 insns) */
void f_11986680(void) {
  FTRACE(0x11986680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11986680 push ebp */
  push32((uint32_t)(EBP));
  /* 11986681 mov ebp, esp */
  EBP = (ESP);
  /* 11986683 push ecx */
  push32((uint32_t)(ECX));
  /* 11986684 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11986686 call 0x1197b170 */
  push32(0x1198668bu); f_1197b170();
  /* 1198668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198668e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986691 push eax */
  push32((uint32_t)(EAX));
  /* 11986692 call 0x119866b0 */
  push32(0x11986697u); f_119866b0();
  /* 11986697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198669a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1198669d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1198669f call 0x1197b210 */
  push32(0x119866a4u); f_1197b210();
  /* 119866a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119866a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119866aa mov esp, ebp */
  ESP = (EBP);
  /* 119866ac pop ebp */
  EBP = (pop32());
  /* 119866ad ret  */
  ESPCHK(0x11986680u, _esp0);
  ESP += 4; return;
}

/* FUN_100166b0 @ 0x119866b0 (762 bytes, 246 insns) */
void f_119866b0(void) {
  FTRACE(0x119866b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119866b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119866b1 mov ebp, esp */
  EBP = (ESP);
  /* 119866b3 push ecx */
  push32((uint32_t)(ECX));
  /* 119866b4 cmp dword ptr [0x119a2d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a2d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119866bb jne 0x119866c4 */
  if (!C.zf) goto L_119866c4;
  /* 119866bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119866bf jmp 0x119869a6 */
  goto L_119869a6;
L_119866c4:;
  /* 119866c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119866c7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119866ca cmp ecx, dword ptr [0x119a2e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a2e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119866d0 jne 0x119866e4 */
  if (!C.zf) goto L_119866e4;
  /* 119866d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119866d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119866d8 cmp eax, dword ptr [0x119a2e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a2e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119866de je 0x119868ab */
  if (C.zf) goto L_119868ab;
L_119866e4:;
  /* 119866e4 cmp dword ptr [0x119a3b10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3b10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119866eb je 0x11986865 */
  if (C.zf) goto L_11986865;
  /* 119866f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119866f3 mov cx, word ptr [0x119a3bb0] */
  CX = (r16((uint32_t)(0x119a3bb0)));
  /* 119866fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119866fc jne 0x11986759 */
  if (!C.zf) goto L_11986759;
  /* 119866fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11986700 mov dx, word ptr [0x119a3bbe] */
  DX = (r16((uint32_t)(0x119a3bbe)));
  /* 11986707 push edx */
  push32((uint32_t)(EDX));
  /* 11986708 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198670a mov ax, word ptr [0x119a3bbc] */
  AX = (r16((uint32_t)(0x119a3bbc)));
  /* 11986710 push eax */
  push32((uint32_t)(EAX));
  /* 11986711 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11986713 mov cx, word ptr [0x119a3bba] */
  CX = (r16((uint32_t)(0x119a3bba)));
  /* 1198671a push ecx */
  push32((uint32_t)(ECX));
  /* 1198671b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1198671d mov dx, word ptr [0x119a3bb8] */
  DX = (r16((uint32_t)(0x119a3bb8)));
  /* 11986724 push edx */
  push32((uint32_t)(EDX));
  /* 11986725 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986729 mov ax, word ptr [0x119a3bb4] */
  AX = (r16((uint32_t)(0x119a3bb4)));
  /* 1198672f push eax */
  push32((uint32_t)(EAX));
  /* 11986730 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11986732 mov cx, word ptr [0x119a3bb6] */
  CX = (r16((uint32_t)(0x119a3bb6)));
  /* 11986739 push ecx */
  push32((uint32_t)(ECX));
  /* 1198673a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1198673c mov dx, word ptr [0x119a3bb2] */
  DX = (r16((uint32_t)(0x119a3bb2)));
  /* 11986743 push edx */
  push32((uint32_t)(EDX));
  /* 11986744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986747 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1198674a push ecx */
  push32((uint32_t)(ECX));
  /* 1198674b push 1 */
  push32((uint32_t)(0x1u));
  /* 1198674d push 1 */
  push32((uint32_t)(0x1u));
  /* 1198674f call 0x119869b0 */
  push32(0x11986754u); f_119869b0();
  /* 11986754 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986757 jmp 0x119867aa */
  goto L_119867aa;
L_11986759:;
  /* 11986759 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1198675b mov dx, word ptr [0x119a3bbe] */
  DX = (r16((uint32_t)(0x119a3bbe)));
  /* 11986762 push edx */
  push32((uint32_t)(EDX));
  /* 11986763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986765 mov ax, word ptr [0x119a3bbc] */
  AX = (r16((uint32_t)(0x119a3bbc)));
  /* 1198676b push eax */
  push32((uint32_t)(EAX));
  /* 1198676c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1198676e mov cx, word ptr [0x119a3bba] */
  CX = (r16((uint32_t)(0x119a3bba)));
  /* 11986775 push ecx */
  push32((uint32_t)(ECX));
  /* 11986776 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11986778 mov dx, word ptr [0x119a3bb8] */
  DX = (r16((uint32_t)(0x119a3bb8)));
  /* 1198677f push edx */
  push32((uint32_t)(EDX));
  /* 11986780 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986782 mov ax, word ptr [0x119a3bb6] */
  AX = (r16((uint32_t)(0x119a3bb6)));
  /* 11986788 push eax */
  push32((uint32_t)(EAX));
  /* 11986789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1198678b push 0 */
  push32((uint32_t)(0x0u));
  /* 1198678d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1198678f mov cx, word ptr [0x119a3bb2] */
  CX = (r16((uint32_t)(0x119a3bb2)));
  /* 11986796 push ecx */
  push32((uint32_t)(ECX));
  /* 11986797 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198679a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1198679d push eax */
  push32((uint32_t)(EAX));
  /* 1198679e push 0 */
  push32((uint32_t)(0x0u));
  /* 119867a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 119867a2 call 0x119869b0 */
  push32(0x119867a7u); f_119869b0();
  /* 119867a7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119867aa:;
  /* 119867aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119867ac mov cx, word ptr [0x119a3b5c] */
  CX = (r16((uint32_t)(0x119a3b5c)));
  /* 119867b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119867b5 jne 0x11986812 */
  if (!C.zf) goto L_11986812;
  /* 119867b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119867b9 mov dx, word ptr [0x119a3b6a] */
  DX = (r16((uint32_t)(0x119a3b6a)));
  /* 119867c0 push edx */
  push32((uint32_t)(EDX));
  /* 119867c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119867c3 mov ax, word ptr [0x119a3b68] */
  AX = (r16((uint32_t)(0x119a3b68)));
  /* 119867c9 push eax */
  push32((uint32_t)(EAX));
  /* 119867ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119867cc mov cx, word ptr [0x119a3b66] */
  CX = (r16((uint32_t)(0x119a3b66)));
  /* 119867d3 push ecx */
  push32((uint32_t)(ECX));
  /* 119867d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119867d6 mov dx, word ptr [0x119a3b64] */
  DX = (r16((uint32_t)(0x119a3b64)));
  /* 119867dd push edx */
  push32((uint32_t)(EDX));
  /* 119867de push 0 */
  push32((uint32_t)(0x0u));
  /* 119867e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119867e2 mov ax, word ptr [0x119a3b60] */
  AX = (r16((uint32_t)(0x119a3b60)));
  /* 119867e8 push eax */
  push32((uint32_t)(EAX));
  /* 119867e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119867eb mov cx, word ptr [0x119a3b62] */
  CX = (r16((uint32_t)(0x119a3b62)));
  /* 119867f2 push ecx */
  push32((uint32_t)(ECX));
  /* 119867f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119867f5 mov dx, word ptr [0x119a3b5e] */
  DX = (r16((uint32_t)(0x119a3b5e)));
  /* 119867fc push edx */
  push32((uint32_t)(EDX));
  /* 119867fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986800 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11986803 push ecx */
  push32((uint32_t)(ECX));
  /* 11986804 push 1 */
  push32((uint32_t)(0x1u));
  /* 11986806 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986808 call 0x119869b0 */
  push32(0x1198680du); f_119869b0();
  /* 1198680d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986810 jmp 0x11986863 */
  goto L_11986863;
L_11986812:;
  /* 11986812 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11986814 mov dx, word ptr [0x119a3b6a] */
  DX = (r16((uint32_t)(0x119a3b6a)));
  /* 1198681b push edx */
  push32((uint32_t)(EDX));
  /* 1198681c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198681e mov ax, word ptr [0x119a3b68] */
  AX = (r16((uint32_t)(0x119a3b68)));
  /* 11986824 push eax */
  push32((uint32_t)(EAX));
  /* 11986825 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11986827 mov cx, word ptr [0x119a3b66] */
  CX = (r16((uint32_t)(0x119a3b66)));
  /* 1198682e push ecx */
  push32((uint32_t)(ECX));
  /* 1198682f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11986831 mov dx, word ptr [0x119a3b64] */
  DX = (r16((uint32_t)(0x119a3b64)));
  /* 11986838 push edx */
  push32((uint32_t)(EDX));
  /* 11986839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198683b mov ax, word ptr [0x119a3b62] */
  AX = (r16((uint32_t)(0x119a3b62)));
  /* 11986841 push eax */
  push32((uint32_t)(EAX));
  /* 11986842 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986844 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986846 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11986848 mov cx, word ptr [0x119a3b5e] */
  CX = (r16((uint32_t)(0x119a3b5e)));
  /* 1198684f push ecx */
  push32((uint32_t)(ECX));
  /* 11986850 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986853 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11986856 push eax */
  push32((uint32_t)(EAX));
  /* 11986857 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986859 push 0 */
  push32((uint32_t)(0x0u));
  /* 1198685b call 0x119869b0 */
  push32(0x11986860u); f_119869b0();
  /* 11986860 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11986863:;
  /* 11986863 jmp 0x119868ab */
  goto L_119868ab;
L_11986865:;
  /* 11986865 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986867 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986869 push 0 */
  push32((uint32_t)(0x0u));
  /* 1198686b push 2 */
  push32((uint32_t)(0x2u));
  /* 1198686d push 0 */
  push32((uint32_t)(0x0u));
  /* 1198686f push 0 */
  push32((uint32_t)(0x0u));
  /* 11986871 push 1 */
  push32((uint32_t)(0x1u));
  /* 11986873 push 4 */
  push32((uint32_t)(0x4u));
  /* 11986875 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986878 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1198687b push edx */
  push32((uint32_t)(EDX));
  /* 1198687c push 1 */
  push32((uint32_t)(0x1u));
  /* 1198687e push 1 */
  push32((uint32_t)(0x1u));
  /* 11986880 call 0x119869b0 */
  push32(0x11986885u); f_119869b0();
  /* 11986885 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986888 push 0 */
  push32((uint32_t)(0x0u));
  /* 1198688a push 0 */
  push32((uint32_t)(0x0u));
  /* 1198688c push 0 */
  push32((uint32_t)(0x0u));
  /* 1198688e push 2 */
  push32((uint32_t)(0x2u));
  /* 11986890 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986892 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986894 push 5 */
  push32((uint32_t)(0x5u));
  /* 11986896 push 0xa */
  push32((uint32_t)(0xau));
  /* 11986898 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198689b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1198689e push ecx */
  push32((uint32_t)(ECX));
  /* 1198689f push 1 */
  push32((uint32_t)(0x1u));
  /* 119868a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119868a3 call 0x119869b0 */
  push32(0x119868a8u); f_119869b0();
  /* 119868a8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119868ab:;
  /* 119868ab mov edx, dword ptr [0x119a2e2c] */
  EDX = (r32((uint32_t)(0x119a2e2c)));
  /* 119868b1 cmp edx, dword ptr [0x119a2e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119868b7 jge 0x11986904 */
  if ((C.sf==C.of)) goto L_11986904;
  /* 119868b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119868bc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 119868bf cmp ecx, dword ptr [0x119a2e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119868c5 jl 0x119868d5 */
  if ((C.sf!=C.of)) goto L_119868d5;
  /* 119868c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119868ca mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 119868cd cmp eax, dword ptr [0x119a2e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119868d3 jle 0x119868dc */
  if ((C.zf||C.sf!=C.of)) goto L_119868dc;
L_119868d5:;
  /* 119868d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119868d7 jmp 0x119869a6 */
  goto L_119869a6;
L_119868dc:;
  /* 119868dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119868df mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 119868e2 cmp edx, dword ptr [0x119a2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119868e8 jle 0x11986902 */
  if ((C.zf||C.sf!=C.of)) goto L_11986902;
  /* 119868ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119868ed mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 119868f0 cmp ecx, dword ptr [0x119a2e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119868f6 jge 0x11986902 */
  if ((C.sf==C.of)) goto L_11986902;
  /* 119868f8 mov eax, 1 */
  EAX = (0x1u);
  /* 119868fd jmp 0x119869a6 */
  goto L_119869a6;
L_11986902:;
  /* 11986902 jmp 0x11986947 */
  goto L_11986947;
L_11986904:;
  /* 11986904 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986907 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1198690a cmp eax, dword ptr [0x119a2e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986910 jl 0x11986920 */
  if ((C.sf!=C.of)) goto L_11986920;
  /* 11986912 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986915 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11986918 cmp edx, dword ptr [0x119a2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198691e jle 0x11986927 */
  if ((C.zf||C.sf!=C.of)) goto L_11986927;
L_11986920:;
  /* 11986920 mov eax, 1 */
  EAX = (0x1u);
  /* 11986925 jmp 0x119869a6 */
  goto L_119869a6;
L_11986927:;
  /* 11986927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198692a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1198692d cmp ecx, dword ptr [0x119a2e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986933 jle 0x11986947 */
  if ((C.zf||C.sf!=C.of)) goto L_11986947;
  /* 11986935 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986938 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1198693b cmp eax, dword ptr [0x119a2e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986941 jge 0x11986947 */
  if ((C.sf==C.of)) goto L_11986947;
  /* 11986943 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986945 jmp 0x119869a6 */
  goto L_119869a6;
L_11986947:;
  /* 11986947 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198694a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1198694d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986953 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11986955 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986957 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198695a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1198695d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986963 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986965 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198696b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1198696e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986971 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11986974 cmp edx, dword ptr [0x119a2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198697a jne 0x11986992 */
  if (!C.zf) goto L_11986992;
  /* 1198697c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198697f cmp eax, dword ptr [0x119a2e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a2e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986985 jl 0x1198698e */
  if ((C.sf!=C.of)) goto L_1198698e;
  /* 11986987 mov eax, 1 */
  EAX = (0x1u);
  /* 1198698c jmp 0x119869a6 */
  goto L_119869a6;
L_1198698e:;
  /* 1198698e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986990 jmp 0x119869a6 */
  goto L_119869a6;
L_11986992:;
  /* 11986992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11986995 cmp ecx, dword ptr [0x119a2e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a2e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198699b jge 0x119869a4 */
  if ((C.sf==C.of)) goto L_119869a4;
  /* 1198699d mov eax, 1 */
  EAX = (0x1u);
  /* 119869a2 jmp 0x119869a6 */
  goto L_119869a6;
L_119869a4:;
  /* 119869a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119869a6:;
  /* 119869a6 mov esp, ebp */
  ESP = (EBP);
  /* 119869a8 pop ebp */
  EBP = (pop32());
  /* 119869a9 ret  */
  ESPCHK(0x119866b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100169b0 @ 0x119869b0 (504 bytes, 145 insns) */
void f_119869b0(void) {
  FTRACE(0x119869b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119869b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119869b1 mov ebp, esp */
  EBP = (ESP);
  /* 119869b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119869b6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119869ba jne 0x11986a8c */
  if (!C.zf) goto L_11986a8c;
  /* 119869c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119869c3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119869c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119869c8 jne 0x119869d9 */
  if (!C.zf) goto L_119869d9;
  /* 119869ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119869cd mov edx, dword ptr [ecx*4 + 0x119a2e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a2e4c)));
  /* 119869d4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119869d7 jmp 0x119869e6 */
  goto L_119869e6;
L_119869d9:;
  /* 119869d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119869dc mov ecx, dword ptr [eax*4 + 0x119a2e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119a2e80)));
  /* 119869e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_119869e6:;
  /* 119869e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119869e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119869ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119869ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119869f2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119869f5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119869fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119869fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986a00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11986a03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11986a06 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11986a09 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11986a0d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11986a0e mov ecx, 7 */
  ECX = (0x7u);
  /* 11986a13 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11986a15 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11986a18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11986a1b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986a1e jge 0x11986a39 */
  if ((C.sf==C.of)) goto L_11986a39;
  /* 11986a20 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11986a23 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11986a26 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11986a29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11986a2c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986a2f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986a32 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986a34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11986a37 jmp 0x11986a4d */
  goto L_11986a4d;
L_11986a39:;
  /* 11986a39 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11986a3c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11986a3f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11986a42 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986a45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986a48 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986a4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11986a4d:;
  /* 11986a4d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986a51 jne 0x11986a8a */
  if (!C.zf) goto L_11986a8a;
  /* 11986a53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11986a56 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11986a59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11986a5b jne 0x11986a6c */
  if (!C.zf) goto L_11986a6c;
  /* 11986a5d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11986a60 mov eax, dword ptr [edx*4 + 0x119a2e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119a2e50)));
  /* 11986a67 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11986a6a jmp 0x11986a79 */
  goto L_11986a79;
L_11986a6c:;
  /* 11986a6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11986a6f mov edx, dword ptr [ecx*4 + 0x119a2e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a2e84)));
  /* 11986a76 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11986a79:;
  /* 11986a79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11986a7c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986a7f jle 0x11986a8a */
  if ((C.zf||C.sf!=C.of)) goto L_11986a8a;
  /* 11986a81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11986a84 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11986a87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11986a8a:;
  /* 11986a8a jmp 0x11986ac1 */
  goto L_11986ac1;
L_11986a8c:;
  /* 11986a8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11986a8f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11986a92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11986a94 jne 0x11986aa5 */
  if (!C.zf) goto L_11986aa5;
  /* 11986a96 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11986a99 mov ecx, dword ptr [eax*4 + 0x119a2e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119a2e4c)));
  /* 11986aa0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11986aa3 jmp 0x11986ab2 */
  goto L_11986ab2;
L_11986aa5:;
  /* 11986aa5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11986aa8 mov eax, dword ptr [edx*4 + 0x119a2e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119a2e80)));
  /* 11986aaf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11986ab2:;
  /* 11986ab2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11986ab5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11986ab8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11986abb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986abe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11986ac1:;
  /* 11986ac1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986ac5 jne 0x11986b01 */
  if (!C.zf) goto L_11986b01;
  /* 11986ac7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11986aca mov dword ptr [0x119a2e2c], eax */
  w32((uint32_t)(0x119a2e2c), (EAX));
  /* 11986acf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11986ad2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986ad5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11986ad8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986ada imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986add mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11986ae0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986ae2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986ae8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11986aeb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986aed mov dword ptr [0x119a2e30], ecx */
  w32((uint32_t)(0x119a2e30), (ECX));
  /* 11986af3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11986af6 mov dword ptr [0x119a2e28], edx */
  w32((uint32_t)(0x119a2e28), (EDX));
  /* 11986afc jmp 0x11986ba4 */
  goto L_11986ba4;
L_11986b01:;
  /* 11986b01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11986b04 mov dword ptr [0x119a2e3c], eax */
  w32((uint32_t)(0x119a2e3c), (EAX));
  /* 11986b09 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11986b0c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986b0f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11986b12 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986b14 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986b17 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11986b1a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986b1c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986b22 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11986b25 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986b27 mov dword ptr [0x119a2e40], ecx */
  w32((uint32_t)(0x119a2e40), (ECX));
  /* 11986b2d mov edx, dword ptr [0x119a2d98] */
  EDX = (r32((uint32_t)(0x119a2d98)));
  /* 11986b33 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11986b39 mov eax, dword ptr [0x119a2e40] */
  EAX = (r32((uint32_t)(0x119a2e40)));
  /* 11986b3e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986b40 mov dword ptr [0x119a2e40], eax */
  w32((uint32_t)(0x119a2e40), (EAX));
  /* 11986b45 cmp dword ptr [0x119a2e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a2e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986b4c jge 0x11986b71 */
  if ((C.sf==C.of)) goto L_11986b71;
  /* 11986b4e mov ecx, dword ptr [0x119a2e40] */
  ECX = (r32((uint32_t)(0x119a2e40)));
  /* 11986b54 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986b5a mov dword ptr [0x119a2e40], ecx */
  w32((uint32_t)(0x119a2e40), (ECX));
  /* 11986b60 mov edx, dword ptr [0x119a2e3c] */
  EDX = (r32((uint32_t)(0x119a2e3c)));
  /* 11986b66 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11986b69 mov dword ptr [0x119a2e3c], edx */
  w32((uint32_t)(0x119a2e3c), (EDX));
  /* 11986b6f jmp 0x11986b9b */
  goto L_11986b9b;
L_11986b71:;
  /* 11986b71 cmp dword ptr [0x119a2e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x119a2e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986b7b jl 0x11986b9b */
  if ((C.sf!=C.of)) goto L_11986b9b;
  /* 11986b7d mov eax, dword ptr [0x119a2e40] */
  EAX = (r32((uint32_t)(0x119a2e40)));
  /* 11986b82 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11986b87 mov dword ptr [0x119a2e40], eax */
  w32((uint32_t)(0x119a2e40), (EAX));
  /* 11986b8c mov ecx, dword ptr [0x119a2e3c] */
  ECX = (r32((uint32_t)(0x119a2e3c)));
  /* 11986b92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986b95 mov dword ptr [0x119a2e3c], ecx */
  w32((uint32_t)(0x119a2e3c), (ECX));
L_11986b9b:;
  /* 11986b9b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11986b9e mov dword ptr [0x119a2e38], edx */
  w32((uint32_t)(0x119a2e38), (EDX));
L_11986ba4:;
  /* 11986ba4 mov esp, ebp */
  ESP = (EBP);
  /* 11986ba6 pop ebp */
  EBP = (pop32());
  /* 11986ba7 ret  */
  ESPCHK(0x119869b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016bb0 @ 0x11986bb0 (382 bytes, 135 insns) */
void f_11986bb0(void) {
  FTRACE(0x11986bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11986bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11986bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11986bb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11986bb5 push 0x119a0580 */
  push32((uint32_t)(0x119a0580u));
  /* 11986bba push 0x11980878 */
  push32((uint32_t)(0x11980878u));
  /* 11986bbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11986bc5 push eax */
  push32((uint32_t)(EAX));
  /* 11986bc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11986bcd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986bd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11986bd1 push esi */
  push32((uint32_t)(ESI));
  /* 11986bd2 push edi */
  push32((uint32_t)(EDI));
  /* 11986bd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11986bd6 cmp dword ptr [0x119a3bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986bdd jne 0x11986c22 */
  if (!C.zf) goto L_11986c22;
  /* 11986bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11986be1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986be3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11986be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986be7 call dword ptr [0x119a62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62dc))), 0x11986bedu);
  /* 11986bed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11986bef je 0x11986bfd */
  if (C.zf) goto L_11986bfd;
  /* 11986bf1 mov dword ptr [0x119a3bcc], 1 */
  w32((uint32_t)(0x119a3bcc), (0x1u));
  /* 11986bfb jmp 0x11986c22 */
  goto L_11986c22;
L_11986bfd:;
  /* 11986bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11986bff push 0 */
  push32((uint32_t)(0x0u));
  /* 11986c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11986c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986c05 call dword ptr [0x119a62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62f4))), 0x11986c0bu);
  /* 11986c0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11986c0d je 0x11986c1b */
  if (C.zf) goto L_11986c1b;
  /* 11986c0f mov dword ptr [0x119a3bcc], 2 */
  w32((uint32_t)(0x119a3bcc), (0x2u));
  /* 11986c19 jmp 0x11986c22 */
  goto L_11986c22;
L_11986c1b:;
  /* 11986c1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986c1d jmp 0x11986d31 */
  goto L_11986d31;
L_11986c22:;
  /* 11986c22 cmp dword ptr [0x119a3bcc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bcc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986c29 jne 0x11986c46 */
  if (!C.zf) goto L_11986c46;
  /* 11986c2b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11986c2e push eax */
  push32((uint32_t)(EAX));
  /* 11986c2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11986c32 push ecx */
  push32((uint32_t)(ECX));
  /* 11986c33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11986c36 push edx */
  push32((uint32_t)(EDX));
  /* 11986c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986c3a push eax */
  push32((uint32_t)(EAX));
  /* 11986c3b call dword ptr [0x119a62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62dc))), 0x11986c41u);
  /* 11986c41 jmp 0x11986d31 */
  goto L_11986d31;
L_11986c46:;
  /* 11986c46 cmp dword ptr [0x119a3bcc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bcc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986c4d jne 0x11986d2f */
  if (!C.zf) goto L_11986d2f;
  /* 11986c53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986c57 jne 0x11986c62 */
  if (!C.zf) goto L_11986c62;
  /* 11986c59 mov ecx, dword ptr [0x119a3a80] */
  ECX = (r32((uint32_t)(0x119a3a80)));
  /* 11986c5f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11986c62:;
  /* 11986c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986c66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11986c69 push edx */
  push32((uint32_t)(EDX));
  /* 11986c6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986c6d push eax */
  push32((uint32_t)(EAX));
  /* 11986c6e call dword ptr [0x119a62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62f4))), 0x11986c74u);
  /* 11986c74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11986c77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986c7b jne 0x11986c84 */
  if (!C.zf) goto L_11986c84;
  /* 11986c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986c7f jmp 0x11986d31 */
  goto L_11986d31;
L_11986c84:;
  /* 11986c84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11986c8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11986c8e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986c91 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11986c93 call 0x1197a910 */
  push32(0x11986c98u); f_1197a910();
  /* 11986c98 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11986c9b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11986c9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11986ca1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11986ca4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11986cab jmp 0x11986cc4 */
  goto L_11986cc4;
  /* 11986cad mov eax, 1 */
  EAX = (0x1u);
  /* 11986cb2 ret  */
  ESPCHK(0x11986bb0u, _esp0);
  ESP += 4; return;
  /* 11986cb3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11986cb6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11986cbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11986cc4:;
  /* 11986cc4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986cc8 jne 0x11986cce */
  if (!C.zf) goto L_11986cce;
  /* 11986cca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986ccc jmp 0x11986d31 */
  goto L_11986d31;
L_11986cce:;
  /* 11986cce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11986cd1 push edx */
  push32((uint32_t)(EDX));
  /* 11986cd2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11986cd5 push eax */
  push32((uint32_t)(EAX));
  /* 11986cd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11986cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11986cda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986cdd push edx */
  push32((uint32_t)(EDX));
  /* 11986cde call dword ptr [0x119a62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62f4))), 0x11986ce4u);
  /* 11986ce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11986ce6 jne 0x11986cec */
  if (!C.zf) goto L_11986cec;
  /* 11986ce8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986cea jmp 0x11986d31 */
  goto L_11986d31;
L_11986cec:;
  /* 11986cec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986cf0 jne 0x11986d0d */
  if (!C.zf) goto L_11986d0d;
  /* 11986cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986cf6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11986cf8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11986cfb push eax */
  push32((uint32_t)(EAX));
  /* 11986cfc push 1 */
  push32((uint32_t)(0x1u));
  /* 11986cfe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11986d01 push ecx */
  push32((uint32_t)(ECX));
  /* 11986d02 call dword ptr [0x119a6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6324))), 0x11986d08u);
  /* 11986d08 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11986d0b jmp 0x11986d2a */
  goto L_11986d2a;
L_11986d0d:;
  /* 11986d0d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11986d10 push edx */
  push32((uint32_t)(EDX));
  /* 11986d11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11986d14 push eax */
  push32((uint32_t)(EAX));
  /* 11986d15 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11986d17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11986d1a push ecx */
  push32((uint32_t)(ECX));
  /* 11986d1b push 1 */
  push32((uint32_t)(0x1u));
  /* 11986d1d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11986d20 push edx */
  push32((uint32_t)(EDX));
  /* 11986d21 call dword ptr [0x119a6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6324))), 0x11986d27u);
  /* 11986d27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11986d2a:;
  /* 11986d2a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11986d2d jmp 0x11986d31 */
  goto L_11986d31;
L_11986d2f:;
  /* 11986d2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11986d31:;
  /* 11986d31 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11986d34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11986d37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11986d3e pop edi */
  EDI = (pop32());
  /* 11986d3f pop esi */
  ESI = (pop32());
  /* 11986d40 pop ebx */
  EBX = (pop32());
  /* 11986d41 mov esp, ebp */
  ESP = (EBP);
  /* 11986d43 pop ebp */
  EBP = (pop32());
  /* 11986d44 ret  */
  ESPCHK(0x11986bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d50 @ 0x11986d50 (398 bytes, 140 insns) */
void f_11986d50(void) {
  FTRACE(0x11986d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11986d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11986d51 mov ebp, esp */
  EBP = (ESP);
  /* 11986d53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11986d55 push 0x119a0590 */
  push32((uint32_t)(0x119a0590u));
  /* 11986d5a push 0x11980878 */
  push32((uint32_t)(0x11980878u));
  /* 11986d5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11986d65 push eax */
  push32((uint32_t)(EAX));
  /* 11986d66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11986d6d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986d70 push ebx */
  push32((uint32_t)(EBX));
  /* 11986d71 push esi */
  push32((uint32_t)(ESI));
  /* 11986d72 push edi */
  push32((uint32_t)(EDI));
  /* 11986d73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11986d76 cmp dword ptr [0x119a3bd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986d7d jne 0x11986dc2 */
  if (!C.zf) goto L_11986dc2;
  /* 11986d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11986d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986d83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11986d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986d87 call dword ptr [0x119a62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62dc))), 0x11986d8du);
  /* 11986d8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11986d8f je 0x11986d9d */
  if (C.zf) goto L_11986d9d;
  /* 11986d91 mov dword ptr [0x119a3bd0], 1 */
  w32((uint32_t)(0x119a3bd0), (0x1u));
  /* 11986d9b jmp 0x11986dc2 */
  goto L_11986dc2;
L_11986d9d:;
  /* 11986d9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11986d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11986da1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11986da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986da5 call dword ptr [0x119a62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62f4))), 0x11986dabu);
  /* 11986dab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11986dad je 0x11986dbb */
  if (C.zf) goto L_11986dbb;
  /* 11986daf mov dword ptr [0x119a3bd0], 2 */
  w32((uint32_t)(0x119a3bd0), (0x2u));
  /* 11986db9 jmp 0x11986dc2 */
  goto L_11986dc2;
L_11986dbb:;
  /* 11986dbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986dbd jmp 0x11986ee1 */
  goto L_11986ee1;
L_11986dc2:;
  /* 11986dc2 cmp dword ptr [0x119a3bd0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bd0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986dc9 jne 0x11986de6 */
  if (!C.zf) goto L_11986de6;
  /* 11986dcb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11986dce push eax */
  push32((uint32_t)(EAX));
  /* 11986dcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11986dd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11986dd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11986dd6 push edx */
  push32((uint32_t)(EDX));
  /* 11986dd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986dda push eax */
  push32((uint32_t)(EAX));
  /* 11986ddb call dword ptr [0x119a62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62f4))), 0x11986de1u);
  /* 11986de1 jmp 0x11986ee1 */
  goto L_11986ee1;
L_11986de6:;
  /* 11986de6 cmp dword ptr [0x119a3bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986ded jne 0x11986edf */
  if (!C.zf) goto L_11986edf;
  /* 11986df3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986df7 jne 0x11986e02 */
  if (!C.zf) goto L_11986e02;
  /* 11986df9 mov ecx, dword ptr [0x119a3a80] */
  ECX = (r32((uint32_t)(0x119a3a80)));
  /* 11986dff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11986e02:;
  /* 11986e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986e06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11986e09 push edx */
  push32((uint32_t)(EDX));
  /* 11986e0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986e0d push eax */
  push32((uint32_t)(EAX));
  /* 11986e0e call dword ptr [0x119a62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62dc))), 0x11986e14u);
  /* 11986e14 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11986e17 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986e1b jne 0x11986e24 */
  if (!C.zf) goto L_11986e24;
  /* 11986e1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986e1f jmp 0x11986ee1 */
  goto L_11986ee1;
L_11986e24:;
  /* 11986e24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11986e2b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11986e2e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11986e30 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986e33 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11986e35 call 0x1197a910 */
  push32(0x11986e3au); f_1197a910();
  /* 11986e3a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11986e3d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11986e40 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11986e43 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11986e46 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11986e4d jmp 0x11986e66 */
  goto L_11986e66;
  /* 11986e4f mov eax, 1 */
  EAX = (0x1u);
  /* 11986e54 ret  */
  ESPCHK(0x11986d50u, _esp0);
  ESP += 4; return;
  /* 11986e55 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11986e58 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11986e5f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11986e66:;
  /* 11986e66 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986e6a jne 0x11986e70 */
  if (!C.zf) goto L_11986e70;
  /* 11986e6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986e6e jmp 0x11986ee1 */
  goto L_11986ee1;
L_11986e70:;
  /* 11986e70 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11986e73 push edx */
  push32((uint32_t)(EDX));
  /* 11986e74 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11986e77 push eax */
  push32((uint32_t)(EAX));
  /* 11986e78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11986e7b push ecx */
  push32((uint32_t)(ECX));
  /* 11986e7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986e7f push edx */
  push32((uint32_t)(EDX));
  /* 11986e80 call dword ptr [0x119a62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62dc))), 0x11986e86u);
  /* 11986e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11986e88 jne 0x11986e8e */
  if (!C.zf) goto L_11986e8e;
  /* 11986e8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11986e8c jmp 0x11986ee1 */
  goto L_11986ee1;
L_11986e8e:;
  /* 11986e8e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986e92 jne 0x11986eb6 */
  if (!C.zf) goto L_11986eb6;
  /* 11986e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11986e9c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11986e9e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11986ea1 push eax */
  push32((uint32_t)(EAX));
  /* 11986ea2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11986ea7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11986eaa push ecx */
  push32((uint32_t)(ECX));
  /* 11986eab call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x11986eb1u);
  /* 11986eb1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11986eb4 jmp 0x11986eda */
  goto L_11986eda;
L_11986eb6:;
  /* 11986eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11986eba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11986ebd push edx */
  push32((uint32_t)(EDX));
  /* 11986ebe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11986ec1 push eax */
  push32((uint32_t)(EAX));
  /* 11986ec2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11986ec4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11986ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 11986ec8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11986ecd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11986ed0 push edx */
  push32((uint32_t)(EDX));
  /* 11986ed1 call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x11986ed7u);
  /* 11986ed7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11986eda:;
  /* 11986eda mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11986edd jmp 0x11986ee1 */
  goto L_11986ee1;
L_11986edf:;
  /* 11986edf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11986ee1:;
  /* 11986ee1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11986ee4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11986ee7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11986eee pop edi */
  EDI = (pop32());
  /* 11986eef pop esi */
  ESI = (pop32());
  /* 11986ef0 pop ebx */
  EBX = (pop32());
  /* 11986ef1 mov esp, ebp */
  ESP = (EBP);
  /* 11986ef3 pop ebp */
  EBP = (pop32());
  /* 11986ef4 ret  */
  ESPCHK(0x11986d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f00 @ 0x11986f00 (11 bytes, 6 insns) */
void f_11986f00(void) {
  FTRACE(0x11986f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11986f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11986f01 mov ebp, esp */
  EBP = (ESP);
  /* 11986f03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986f06 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986f09 pop ebp */
  EBP = (pop32());
  /* 11986f0a ret  */
  ESPCHK(0x11986f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f10 @ 0x11986f10 (147 bytes, 43 insns) */
void f_11986f10(void) {
  FTRACE(0x11986f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11986f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11986f11 mov ebp, esp */
  EBP = (ESP);
  /* 11986f13 push ecx */
  push32((uint32_t)(ECX));
  /* 11986f14 cmp dword ptr [0x119a3a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986f1b jne 0x11986f37 */
  if (!C.zf) goto L_11986f37;
  /* 11986f1d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986f21 jl 0x11986f32 */
  if ((C.sf!=C.of)) goto L_11986f32;
  /* 11986f23 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986f27 jg 0x11986f32 */
  if ((!C.zf&&C.sf==C.of)) goto L_11986f32;
  /* 11986f29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986f2c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986f2f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11986f32:;
  /* 11986f32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986f35 jmp 0x11986f9f */
  goto L_11986f9f;
L_11986f37:;
  /* 11986f37 push 0x119a3bfc */
  push32((uint32_t)(0x119a3bfcu));
  /* 11986f3c call dword ptr [0x119a63ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63ac))), 0x11986f42u);
  /* 11986f42 cmp dword ptr [0x119a3bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986f49 je 0x11986f69 */
  if (C.zf) goto L_11986f69;
  /* 11986f4b push 0x119a3bfc */
  push32((uint32_t)(0x119a3bfcu));
  /* 11986f50 call dword ptr [0x119a639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a639c))), 0x11986f56u);
  /* 11986f56 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11986f58 call 0x1197b170 */
  push32(0x11986f5du); f_1197b170();
  /* 11986f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986f60 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11986f67 jmp 0x11986f70 */
  goto L_11986f70;
L_11986f69:;
  /* 11986f69 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11986f70:;
  /* 11986f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11986f74 call 0x11986fb0 */
  push32(0x11986f79u); f_11986fb0();
  /* 11986f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986f7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11986f7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986f83 je 0x11986f91 */
  if (C.zf) goto L_11986f91;
  /* 11986f85 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11986f87 call 0x1197b210 */
  push32(0x11986f8cu); f_1197b210();
  /* 11986f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986f8f jmp 0x11986f9c */
  goto L_11986f9c;
L_11986f91:;
  /* 11986f91 push 0x119a3bfc */
  push32((uint32_t)(0x119a3bfcu));
  /* 11986f96 call dword ptr [0x119a639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a639c))), 0x11986f9cu);
L_11986f9c:;
  /* 11986f9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11986f9f:;
  /* 11986f9f mov esp, ebp */
  ESP = (EBP);
  /* 11986fa1 pop ebp */
  EBP = (pop32());
  /* 11986fa2 ret  */
  ESPCHK(0x11986f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016fb0 @ 0x11986fb0 (299 bytes, 91 insns) */
void f_11986fb0(void) {
  FTRACE(0x11986fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11986fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11986fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11986fb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11986fb6 cmp dword ptr [0x119a3a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986fbd jne 0x11986fdc */
  if (!C.zf) goto L_11986fdc;
  /* 11986fbf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986fc3 jl 0x11986fd4 */
  if ((C.sf!=C.of)) goto L_11986fd4;
  /* 11986fc5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986fc9 jg 0x11986fd4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11986fd4;
  /* 11986fcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986fce add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11986fd1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11986fd4:;
  /* 11986fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986fd7 jmp 0x119870d7 */
  goto L_119870d7;
L_11986fdc:;
  /* 11986fdc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986fe3 jge 0x11987023 */
  if ((C.sf==C.of)) goto L_11987023;
  /* 11986fe5 cmp dword ptr [0x119a1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11986fec jle 0x11987001 */
  if ((C.zf||C.sf!=C.of)) goto L_11987001;
  /* 11986fee push 1 */
  push32((uint32_t)(0x1u));
  /* 11986ff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11986ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11986ff4 call 0x1197d780 */
  push32(0x11986ff9u); f_1197d780();
  /* 11986ff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11986ffc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11986fff jmp 0x11987015 */
  goto L_11987015;
L_11987001:;
  /* 11987001 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987004 mov eax, dword ptr [0x119a1c98] */
  EAX = (r32((uint32_t)(0x119a1c98)));
  /* 11987009 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1198700b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1198700f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11987012 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11987015:;
  /* 11987015 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987019 jne 0x11987023 */
  if (!C.zf) goto L_11987023;
  /* 1198701b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198701e jmp 0x119870d7 */
  goto L_119870d7;
L_11987023:;
  /* 11987023 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987026 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11987029 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1198702f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11987035 mov eax, dword ptr [0x119a1c98] */
  EAX = (r32((uint32_t)(0x119a1c98)));
  /* 1198703a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1198703c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11987040 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11987046 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11987048 je 0x1198706c */
  if (C.zf) goto L_1198706c;
  /* 1198704a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198704d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11987050 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11987056 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11987059 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1198705c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1198705f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11987063 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1198706a jmp 0x1198707d */
  goto L_1198707d;
L_1198706c:;
  /* 1198706c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1198706f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11987072 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11987076 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1198707d:;
  /* 1198707d push 1 */
  push32((uint32_t)(0x1u));
  /* 1198707f push 0 */
  push32((uint32_t)(0x0u));
  /* 11987081 push 3 */
  push32((uint32_t)(0x3u));
  /* 11987083 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11987086 push edx */
  push32((uint32_t)(EDX));
  /* 11987087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198708a push eax */
  push32((uint32_t)(EAX));
  /* 1198708b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1198708e push ecx */
  push32((uint32_t)(ECX));
  /* 1198708f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11987094 mov edx, dword ptr [0x119a3a70] */
  EDX = (r32((uint32_t)(0x119a3a70)));
  /* 1198709a push edx */
  push32((uint32_t)(EDX));
  /* 1198709b call 0x1197fb60 */
  push32(0x119870a0u); f_1197fb60();
  /* 119870a0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119870a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119870a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119870aa jne 0x119870b1 */
  if (!C.zf) goto L_119870b1;
  /* 119870ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119870af jmp 0x119870d7 */
  goto L_119870d7;
L_119870b1:;
  /* 119870b1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119870b5 jne 0x119870c1 */
  if (!C.zf) goto L_119870c1;
  /* 119870b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119870ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119870bf jmp 0x119870d7 */
  goto L_119870d7;
L_119870c1:;
  /* 119870c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119870c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119870c9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 119870cc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119870d2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 119870d5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_119870d7:;
  /* 119870d7 mov esp, ebp */
  ESP = (EBP);
  /* 119870d9 pop ebp */
  EBP = (pop32());
  /* 119870da ret  */
  ESPCHK(0x11986fb0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x119870e0 (52 bytes, 19 insns) */
void f_119870e0(void) {
  FTRACE(0x119870e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119870e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119870e4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 119870e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119870ea mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 119870ee jne 0x119870f9 */
  if (!C.zf) goto L_119870f9;
  /* 119870f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119870f4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 119870f6 ret 0x10 */
  ESPCHK(0x119870e0u, _esp0);
  ESP += 20; return;
L_119870f9:;
  /* 119870f9 push ebx */
  push32((uint32_t)(EBX));
  /* 119870fa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 119870fc mov ebx, eax */
  EBX = (EAX);
  /* 119870fe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11987102 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11987106 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987108 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1198710c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1198710e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987110 pop ebx */
  EBX = (pop32());
  /* 11987111 ret 0x10 */
  ESPCHK(0x119870e0u, _esp0);
  ESP += 20; return;
}

/* FUN_10017120 @ 0x11987120 (46 bytes, 18 insns) */
void f_11987120(void) {
  FTRACE(0x11987120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987120 push ebp */
  push32((uint32_t)(EBP));
  /* 11987121 mov ebp, esp */
  EBP = (ESP);
  /* 11987123 push ecx */
  push32((uint32_t)(ECX));
  /* 11987124 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11987126 call 0x1197b170 */
  push32(0x1198712bu); f_1197b170();
  /* 1198712b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198712e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987131 push eax */
  push32((uint32_t)(EAX));
  /* 11987132 call 0x11987150 */
  push32(0x11987137u); f_11987150();
  /* 11987137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198713a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1198713d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1198713f call 0x1197b210 */
  push32(0x11987144u); f_1197b210();
  /* 11987144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198714a mov esp, ebp */
  ESP = (EBP);
  /* 1198714c pop ebp */
  EBP = (pop32());
  /* 1198714d ret  */
  ESPCHK(0x11987120u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11987150 (198 bytes, 69 insns) */
void f_11987150(void) {
  FTRACE(0x11987150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987150 push ebp */
  push32((uint32_t)(EBP));
  /* 11987151 mov ebp, esp */
  EBP = (ESP);
  /* 11987153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987156 mov eax, dword ptr [0x119a388c] */
  EAX = (r32((uint32_t)(0x119a388c)));
  /* 1198715b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1198715e cmp dword ptr [0x119a5380], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a5380))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987165 jne 0x1198716e */
  if (!C.zf) goto L_1198716e;
  /* 11987167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11987169 jmp 0x11987212 */
  goto L_11987212;
L_1198716e:;
  /* 1198716e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987172 jne 0x11987196 */
  if (!C.zf) goto L_11987196;
  /* 11987174 cmp dword ptr [0x119a3894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198717b je 0x11987196 */
  if (C.zf) goto L_11987196;
  /* 1198717d call 0x11987270 */
  push32(0x11987182u); f_11987270();
  /* 11987182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11987184 je 0x1198718d */
  if (C.zf) goto L_1198718d;
  /* 11987186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11987188 jmp 0x11987212 */
  goto L_11987212;
L_1198718d:;
  /* 1198718d mov ecx, dword ptr [0x119a388c] */
  ECX = (r32((uint32_t)(0x119a388c)));
  /* 11987193 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11987196:;
  /* 11987196 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198719a je 0x11987210 */
  if (C.zf) goto L_11987210;
  /* 1198719c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119871a0 je 0x11987210 */
  if (C.zf) goto L_11987210;
  /* 119871a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119871a5 push edx */
  push32((uint32_t)(EDX));
  /* 119871a6 call 0x1197a5a0 */
  push32(0x119871abu); f_1197a5a0();
  /* 119871ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119871ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119871b1:;
  /* 119871b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119871b4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119871b7 je 0x11987210 */
  if (C.zf) goto L_11987210;
  /* 119871b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119871bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119871be push edx */
  push32((uint32_t)(EDX));
  /* 119871bf call 0x1197a5a0 */
  push32(0x119871c4u); f_1197a5a0();
  /* 119871c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119871c7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119871ca jbe 0x11987205 */
  if ((C.cf||C.zf)) goto L_11987205;
  /* 119871cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119871cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119871d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119871d4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 119871d8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119871db jne 0x11987205 */
  if (!C.zf) goto L_11987205;
  /* 119871dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119871e0 push ecx */
  push32((uint32_t)(ECX));
  /* 119871e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119871e4 push edx */
  push32((uint32_t)(EDX));
  /* 119871e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119871e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119871ea push ecx */
  push32((uint32_t)(ECX));
  /* 119871eb call 0x11987220 */
  push32(0x119871f0u); f_11987220();
  /* 119871f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119871f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119871f5 jne 0x11987205 */
  if (!C.zf) goto L_11987205;
  /* 119871f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119871fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119871fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119871ff lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11987203 jmp 0x11987212 */
  goto L_11987212;
L_11987205:;
  /* 11987205 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987208 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198720b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1198720e jmp 0x119871b1 */
  goto L_119871b1;
L_11987210:;
  /* 11987210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11987212:;
  /* 11987212 mov esp, ebp */
  ESP = (EBP);
  /* 11987214 pop ebp */
  EBP = (pop32());
  /* 11987215 ret  */
  ESPCHK(0x11987150u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11987220 (79 bytes, 32 insns) */
void f_11987220(void) {
  FTRACE(0x11987220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987220 push ebp */
  push32((uint32_t)(EBP));
  /* 11987221 mov ebp, esp */
  EBP = (ESP);
  /* 11987223 push ecx */
  push32((uint32_t)(ECX));
  /* 11987224 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987228 jne 0x1198722e */
  if (!C.zf) goto L_1198722e;
  /* 1198722a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198722c jmp 0x1198726b */
  goto L_1198726b;
L_1198722e:;
  /* 1198722e mov eax, dword ptr [0x119a4f44] */
  EAX = (r32((uint32_t)(0x119a4f44)));
  /* 11987233 push eax */
  push32((uint32_t)(EAX));
  /* 11987234 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11987237 push ecx */
  push32((uint32_t)(ECX));
  /* 11987238 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198723b push edx */
  push32((uint32_t)(EDX));
  /* 1198723c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198723f push eax */
  push32((uint32_t)(EAX));
  /* 11987240 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987243 push ecx */
  push32((uint32_t)(ECX));
  /* 11987244 push 1 */
  push32((uint32_t)(0x1u));
  /* 11987246 mov edx, dword ptr [0x119a51e4] */
  EDX = (r32((uint32_t)(0x119a51e4)));
  /* 1198724c push edx */
  push32((uint32_t)(EDX));
  /* 1198724d call 0x11987320 */
  push32(0x11987252u); f_11987320();
  /* 11987252 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987255 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11987258 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198725c jne 0x11987265 */
  if (!C.zf) goto L_11987265;
  /* 1198725e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11987263 jmp 0x1198726b */
  goto L_1198726b;
L_11987265:;
  /* 11987265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987268 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1198726b:;
  /* 1198726b mov esp, ebp */
  ESP = (EBP);
  /* 1198726d pop ebp */
  EBP = (pop32());
  /* 1198726e ret  */
  ESPCHK(0x11987220u, _esp0);
  ESP += 4; return;
}

/* FUN_10017270 @ 0x11987270 (174 bytes, 66 insns) */
void f_11987270(void) {
  FTRACE(0x11987270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987270 push ebp */
  push32((uint32_t)(EBP));
  /* 11987271 mov ebp, esp */
  EBP = (ESP);
  /* 11987273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987276 mov eax, dword ptr [0x119a3894] */
  EAX = (r32((uint32_t)(0x119a3894)));
  /* 1198727b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1198727e:;
  /* 1198727e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987281 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987284 je 0x11987318 */
  if (C.zf) goto L_11987318;
  /* 1198728a push 0 */
  push32((uint32_t)(0x0u));
  /* 1198728c push 0 */
  push32((uint32_t)(0x0u));
  /* 1198728e push 0 */
  push32((uint32_t)(0x0u));
  /* 11987290 push 0 */
  push32((uint32_t)(0x0u));
  /* 11987292 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11987294 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987297 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11987299 push eax */
  push32((uint32_t)(EAX));
  /* 1198729a push 0 */
  push32((uint32_t)(0x0u));
  /* 1198729c push 1 */
  push32((uint32_t)(0x1u));
  /* 1198729e call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x119872a4u);
  /* 119872a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119872a7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119872ab jne 0x119872b2 */
  if (!C.zf) goto L_119872b2;
  /* 119872ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119872b0 jmp 0x1198731a */
  goto L_1198731a;
L_119872b2:;
  /* 119872b2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 119872b4 push 0x119a059c */
  push32((uint32_t)(0x119a059cu));
  /* 119872b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 119872bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119872be push ecx */
  push32((uint32_t)(ECX));
  /* 119872bf call 0x11977770 */
  push32(0x119872c4u); f_11977770();
  /* 119872c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119872c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119872ca cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119872ce jne 0x119872d5 */
  if (!C.zf) goto L_119872d5;
  /* 119872d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119872d3 jmp 0x1198731a */
  goto L_1198731a;
L_119872d5:;
  /* 119872d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119872d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119872d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119872dc push edx */
  push32((uint32_t)(EDX));
  /* 119872dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119872e0 push eax */
  push32((uint32_t)(EAX));
  /* 119872e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119872e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119872e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119872e8 push edx */
  push32((uint32_t)(EDX));
  /* 119872e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119872eb push 1 */
  push32((uint32_t)(0x1u));
  /* 119872ed call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x119872f3u);
  /* 119872f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119872f5 jne 0x119872fc */
  if (!C.zf) goto L_119872fc;
  /* 119872f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119872fa jmp 0x1198731a */
  goto L_1198731a;
L_119872fc:;
  /* 119872fc push 0 */
  push32((uint32_t)(0x0u));
  /* 119872fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987301 push eax */
  push32((uint32_t)(EAX));
  /* 11987302 call 0x11987770 */
  push32(0x11987307u); f_11987770();
  /* 11987307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198730a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198730d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987310 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11987313 jmp 0x1198727e */
  goto L_1198727e;
L_11987318:;
  /* 11987318 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1198731a:;
  /* 1198731a mov esp, ebp */
  ESP = (EBP);
  /* 1198731c pop ebp */
  EBP = (pop32());
  /* 1198731d ret  */
  ESPCHK(0x11987270u, _esp0);
  ESP += 4; return;
}

/* FUN_10017320 @ 0x11987320 (970 bytes, 340 insns) */
void f_11987320(void) {
  FTRACE(0x11987320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987320 push ebp */
  push32((uint32_t)(EBP));
  /* 11987321 mov ebp, esp */
  EBP = (ESP);
  /* 11987323 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11987325 push 0x119a05f0 */
  push32((uint32_t)(0x119a05f0u));
  /* 1198732a push 0x11980878 */
  push32((uint32_t)(0x11980878u));
  /* 1198732f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11987335 push eax */
  push32((uint32_t)(EAX));
  /* 11987336 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1198733d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987340 push ebx */
  push32((uint32_t)(EBX));
  /* 11987341 push esi */
  push32((uint32_t)(ESI));
  /* 11987342 push edi */
  push32((uint32_t)(EDI));
  /* 11987343 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11987346 cmp dword ptr [0x119a3bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198734d jne 0x119873a6 */
  if (!C.zf) goto L_119873a6;
  /* 1198734f push 1 */
  push32((uint32_t)(0x1u));
  /* 11987351 push 0x1199fc48 */
  push32((uint32_t)(0x1199fc48u));
  /* 11987356 push 1 */
  push32((uint32_t)(0x1u));
  /* 11987358 push 0x1199fc48 */
  push32((uint32_t)(0x1199fc48u));
  /* 1198735d push 0 */
  push32((uint32_t)(0x0u));
  /* 1198735f push 0 */
  push32((uint32_t)(0x0u));
  /* 11987361 call dword ptr [0x119a62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62d8))), 0x11987367u);
  /* 11987367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11987369 je 0x11987377 */
  if (C.zf) goto L_11987377;
  /* 1198736b mov dword ptr [0x119a3bd4], 1 */
  w32((uint32_t)(0x119a3bd4), (0x1u));
  /* 11987375 jmp 0x119873a6 */
  goto L_119873a6;
L_11987377:;
  /* 11987377 push 1 */
  push32((uint32_t)(0x1u));
  /* 11987379 push 0x1199fc44 */
  push32((uint32_t)(0x1199fc44u));
  /* 1198737e push 1 */
  push32((uint32_t)(0x1u));
  /* 11987380 push 0x1199fc44 */
  push32((uint32_t)(0x1199fc44u));
  /* 11987385 push 0 */
  push32((uint32_t)(0x0u));
  /* 11987387 push 0 */
  push32((uint32_t)(0x0u));
  /* 11987389 call dword ptr [0x119a62e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62e4))), 0x1198738fu);
  /* 1198738f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11987391 je 0x1198739f */
  if (C.zf) goto L_1198739f;
  /* 11987393 mov dword ptr [0x119a3bd4], 2 */
  w32((uint32_t)(0x119a3bd4), (0x2u));
  /* 1198739d jmp 0x119873a6 */
  goto L_119873a6;
L_1198739f:;
  /* 1198739f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119873a1 jmp 0x11987704 */
  goto L_11987704;
L_119873a6:;
  /* 119873a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119873aa jle 0x119873bf */
  if ((C.zf||C.sf!=C.of)) goto L_119873bf;
  /* 119873ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119873af push eax */
  push32((uint32_t)(EAX));
  /* 119873b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119873b3 push ecx */
  push32((uint32_t)(ECX));
  /* 119873b4 call 0x11987720 */
  push32(0x119873b9u); f_11987720();
  /* 119873b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119873bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_119873bf:;
  /* 119873bf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119873c3 jle 0x119873d8 */
  if ((C.zf||C.sf!=C.of)) goto L_119873d8;
  /* 119873c5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119873c8 push edx */
  push32((uint32_t)(EDX));
  /* 119873c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119873cc push eax */
  push32((uint32_t)(EAX));
  /* 119873cd call 0x11987720 */
  push32(0x119873d2u); f_11987720();
  /* 119873d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119873d5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_119873d8:;
  /* 119873d8 cmp dword ptr [0x119a3bd4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119873df jne 0x11987404 */
  if (!C.zf) goto L_11987404;
  /* 119873e1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119873e4 push ecx */
  push32((uint32_t)(ECX));
  /* 119873e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119873e8 push edx */
  push32((uint32_t)(EDX));
  /* 119873e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119873ec push eax */
  push32((uint32_t)(EAX));
  /* 119873ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119873f0 push ecx */
  push32((uint32_t)(ECX));
  /* 119873f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119873f4 push edx */
  push32((uint32_t)(EDX));
  /* 119873f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119873f8 push eax */
  push32((uint32_t)(EAX));
  /* 119873f9 call dword ptr [0x119a62e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62e4))), 0x119873ffu);
  /* 119873ff jmp 0x11987704 */
  goto L_11987704;
L_11987404:;
  /* 11987404 cmp dword ptr [0x119a3bd4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bd4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198740b jne 0x11987702 */
  if (!C.zf) goto L_11987702;
  /* 11987411 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987415 jne 0x11987420 */
  if (!C.zf) goto L_11987420;
  /* 11987417 mov ecx, dword ptr [0x119a3a80] */
  ECX = (r32((uint32_t)(0x119a3a80)));
  /* 1198741d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11987420:;
  /* 11987420 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987424 je 0x11987430 */
  if (C.zf) goto L_11987430;
  /* 11987426 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198742a jne 0x119875ac */
  if (!C.zf) goto L_119875ac;
L_11987430:;
  /* 11987430 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11987433 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987436 jne 0x11987442 */
  if (!C.zf) goto L_11987442;
  /* 11987438 mov eax, 2 */
  EAX = (0x2u);
  /* 1198743d jmp 0x11987704 */
  goto L_11987704;
L_11987442:;
  /* 11987442 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987446 jle 0x11987452 */
  if ((C.zf||C.sf!=C.of)) goto L_11987452;
  /* 11987448 mov eax, 1 */
  EAX = (0x1u);
  /* 1198744d jmp 0x11987704 */
  goto L_11987704;
L_11987452:;
  /* 11987452 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987456 jle 0x11987462 */
  if ((C.zf||C.sf!=C.of)) goto L_11987462;
  /* 11987458 mov eax, 3 */
  EAX = (0x3u);
  /* 1198745d jmp 0x11987704 */
  goto L_11987704;
L_11987462:;
  /* 11987462 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11987465 push eax */
  push32((uint32_t)(EAX));
  /* 11987466 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11987469 push ecx */
  push32((uint32_t)(ECX));
  /* 1198746a call dword ptr [0x119a6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6330))), 0x11987470u);
  /* 11987470 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11987472 jne 0x1198747b */
  if (!C.zf) goto L_1198747b;
  /* 11987474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11987476 jmp 0x11987704 */
  goto L_11987704;
L_1198747b:;
  /* 1198747b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198747f jne 0x11987487 */
  if (!C.zf) goto L_11987487;
  /* 11987481 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987485 je 0x119874b4 */
  if (C.zf) goto L_119874b4;
L_11987487:;
  /* 11987487 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198748b jne 0x11987493 */
  if (!C.zf) goto L_11987493;
  /* 1198748d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987491 je 0x119874b4 */
  if (C.zf) goto L_119874b4;
L_11987493:;
  /* 11987493 push 0x119a05b0 */
  push32((uint32_t)(0x119a05b0u));
  /* 11987498 push 0 */
  push32((uint32_t)(0x0u));
  /* 1198749a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1198749f push 0x119a05a8 */
  push32((uint32_t)(0x119a05a8u));
  /* 119874a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 119874a6 call 0x11976830 */
  push32(0x119874abu); f_11976830();
  /* 119874ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119874ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119874b1 jne 0x119874b4 */
  if (!C.zf) goto L_119874b4;
  /* 119874b3 int3  */
  x86_unimpl("int3 @ 0x119874b3");
L_119874b4:;
  /* 119874b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119874b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119874b8 jne 0x1198747b */
  if (!C.zf) goto L_1198747b;
  /* 119874ba cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119874be jle 0x11987533 */
  if ((C.zf||C.sf!=C.of)) goto L_11987533;
  /* 119874c0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119874c4 jae 0x119874d0 */
  if (!C.cf) goto L_119874d0;
  /* 119874c6 mov eax, 3 */
  EAX = (0x3u);
  /* 119874cb jmp 0x11987704 */
  goto L_11987704;
L_119874d0:;
  /* 119874d0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 119874d3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 119874d6 jmp 0x119874e1 */
  goto L_119874e1;
L_119874d8:;
  /* 119874d8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 119874db add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119874de mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_119874e1:;
  /* 119874e1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 119874e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119874e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119874e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119874ea je 0x11987529 */
  if (C.zf) goto L_11987529;
  /* 119874ec mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 119874ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119874f1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 119874f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119874f6 je 0x11987529 */
  if (C.zf) goto L_11987529;
  /* 119874f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119874fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119874fd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119874ff mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11987502 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11987504 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11987506 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987508 jl 0x11987527 */
  if ((C.sf!=C.of)) goto L_11987527;
  /* 1198750a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198750d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1198750f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11987511 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11987514 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11987516 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11987519 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198751b jg 0x11987527 */
  if ((!C.zf&&C.sf==C.of)) goto L_11987527;
  /* 1198751d mov eax, 2 */
  EAX = (0x2u);
  /* 11987522 jmp 0x11987704 */
  goto L_11987704;
L_11987527:;
  /* 11987527 jmp 0x119874d8 */
  goto L_119874d8;
L_11987529:;
  /* 11987529 mov eax, 3 */
  EAX = (0x3u);
  /* 1198752e jmp 0x11987704 */
  goto L_11987704;
L_11987533:;
  /* 11987533 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987537 jle 0x119875ac */
  if ((C.zf||C.sf!=C.of)) goto L_119875ac;
  /* 11987539 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198753d jae 0x11987549 */
  if (!C.cf) goto L_11987549;
  /* 1198753f mov eax, 1 */
  EAX = (0x1u);
  /* 11987544 jmp 0x11987704 */
  goto L_11987704;
L_11987549:;
  /* 11987549 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1198754c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1198754f jmp 0x1198755a */
  goto L_1198755a;
L_11987551:;
  /* 11987551 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11987554 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987557 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1198755a:;
  /* 1198755a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1198755d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1198755f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11987561 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11987563 je 0x119875a2 */
  if (C.zf) goto L_119875a2;
  /* 11987565 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11987568 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1198756a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1198756d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1198756f je 0x119875a2 */
  if (C.zf) goto L_119875a2;
  /* 11987571 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11987574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11987576 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11987578 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1198757b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1198757d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1198757f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987581 jl 0x119875a0 */
  if ((C.sf!=C.of)) goto L_119875a0;
  /* 11987583 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11987586 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11987588 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1198758a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1198758d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198758f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11987592 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987594 jg 0x119875a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_119875a0;
  /* 11987596 mov eax, 2 */
  EAX = (0x2u);
  /* 1198759b jmp 0x11987704 */
  goto L_11987704;
L_119875a0:;
  /* 119875a0 jmp 0x11987551 */
  goto L_11987551;
L_119875a2:;
  /* 119875a2 mov eax, 1 */
  EAX = (0x1u);
  /* 119875a7 jmp 0x11987704 */
  goto L_11987704;
L_119875ac:;
  /* 119875ac push 0 */
  push32((uint32_t)(0x0u));
  /* 119875ae push 0 */
  push32((uint32_t)(0x0u));
  /* 119875b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119875b3 push ecx */
  push32((uint32_t)(ECX));
  /* 119875b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119875b7 push edx */
  push32((uint32_t)(EDX));
  /* 119875b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 119875ba mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119875bd push eax */
  push32((uint32_t)(EAX));
  /* 119875be call dword ptr [0x119a6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6324))), 0x119875c4u);
  /* 119875c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119875c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119875cb jne 0x119875d4 */
  if (!C.zf) goto L_119875d4;
  /* 119875cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119875cf jmp 0x11987704 */
  goto L_11987704;
L_119875d4:;
  /* 119875d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119875db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119875de shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119875e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119875e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119875e5 call 0x1197a910 */
  push32(0x119875eau); f_1197a910();
  /* 119875ea mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 119875ed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119875f0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 119875f3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119875f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119875fd jmp 0x11987616 */
  goto L_11987616;
  /* 119875ff mov eax, 1 */
  EAX = (0x1u);
  /* 11987604 ret  */
  ESPCHK(0x11987320u, _esp0);
  ESP += 4; return;
  /* 11987605 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11987608 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1198760f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11987616:;
  /* 11987616 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198761a jne 0x11987623 */
  if (!C.zf) goto L_11987623;
  /* 1198761c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198761e jmp 0x11987704 */
  goto L_11987704;
L_11987623:;
  /* 11987623 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11987626 push edx */
  push32((uint32_t)(EDX));
  /* 11987627 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1198762a push eax */
  push32((uint32_t)(EAX));
  /* 1198762b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1198762e push ecx */
  push32((uint32_t)(ECX));
  /* 1198762f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11987632 push edx */
  push32((uint32_t)(EDX));
  /* 11987633 push 1 */
  push32((uint32_t)(0x1u));
  /* 11987635 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11987638 push eax */
  push32((uint32_t)(EAX));
  /* 11987639 call dword ptr [0x119a6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6324))), 0x1198763fu);
  /* 1198763f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11987641 jne 0x1198764a */
  if (!C.zf) goto L_1198764a;
  /* 11987643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11987645 jmp 0x11987704 */
  goto L_11987704;
L_1198764a:;
  /* 1198764a push 0 */
  push32((uint32_t)(0x0u));
  /* 1198764c push 0 */
  push32((uint32_t)(0x0u));
  /* 1198764e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11987651 push ecx */
  push32((uint32_t)(ECX));
  /* 11987652 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11987655 push edx */
  push32((uint32_t)(EDX));
  /* 11987656 push 9 */
  push32((uint32_t)(0x9u));
  /* 11987658 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1198765b push eax */
  push32((uint32_t)(EAX));
  /* 1198765c call dword ptr [0x119a6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6324))), 0x11987662u);
  /* 11987662 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11987665 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987669 jne 0x11987672 */
  if (!C.zf) goto L_11987672;
  /* 1198766b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198766d jmp 0x11987704 */
  goto L_11987704;
L_11987672:;
  /* 11987672 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11987679 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1198767c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1198767e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987681 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11987683 call 0x1197a910 */
  push32(0x11987688u); f_1197a910();
  /* 11987688 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1198768b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1198768e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11987691 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11987694 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1198769b jmp 0x119876b4 */
  goto L_119876b4;
  /* 1198769d mov eax, 1 */
  EAX = (0x1u);
  /* 119876a2 ret  */
  ESPCHK(0x11987320u, _esp0);
  ESP += 4; return;
  /* 119876a3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119876a6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 119876ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119876b4:;
  /* 119876b4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119876b8 jne 0x119876be */
  if (!C.zf) goto L_119876be;
  /* 119876ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119876bc jmp 0x11987704 */
  goto L_11987704;
L_119876be:;
  /* 119876be mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119876c1 push edx */
  push32((uint32_t)(EDX));
  /* 119876c2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119876c5 push eax */
  push32((uint32_t)(EAX));
  /* 119876c6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119876c9 push ecx */
  push32((uint32_t)(ECX));
  /* 119876ca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119876cd push edx */
  push32((uint32_t)(EDX));
  /* 119876ce push 1 */
  push32((uint32_t)(0x1u));
  /* 119876d0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119876d3 push eax */
  push32((uint32_t)(EAX));
  /* 119876d4 call dword ptr [0x119a6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6324))), 0x119876dau);
  /* 119876da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119876dc jne 0x119876e2 */
  if (!C.zf) goto L_119876e2;
  /* 119876de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119876e0 jmp 0x11987704 */
  goto L_11987704;
L_119876e2:;
  /* 119876e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119876e5 push ecx */
  push32((uint32_t)(ECX));
  /* 119876e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119876e9 push edx */
  push32((uint32_t)(EDX));
  /* 119876ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119876ed push eax */
  push32((uint32_t)(EAX));
  /* 119876ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119876f1 push ecx */
  push32((uint32_t)(ECX));
  /* 119876f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119876f5 push edx */
  push32((uint32_t)(EDX));
  /* 119876f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119876f9 push eax */
  push32((uint32_t)(EAX));
  /* 119876fa call dword ptr [0x119a62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62d8))), 0x11987700u);
  /* 11987700 jmp 0x11987704 */
  goto L_11987704;
L_11987702:;
  /* 11987702 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11987704:;
  /* 11987704 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11987707 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198770a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11987711 pop edi */
  EDI = (pop32());
  /* 11987712 pop esi */
  ESI = (pop32());
  /* 11987713 pop ebx */
  EBX = (pop32());
  /* 11987714 mov esp, ebp */
  ESP = (EBP);
  /* 11987716 pop ebp */
  EBP = (pop32());
  /* 11987717 ret  */
  ESPCHK(0x11987320u, _esp0);
  ESP += 4; return;
}

/* FUN_10017720 @ 0x11987720 (80 bytes, 32 insns) */
void f_11987720(void) {
  FTRACE(0x11987720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987720 push ebp */
  push32((uint32_t)(EBP));
  /* 11987721 mov ebp, esp */
  EBP = (ESP);
  /* 11987723 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987726 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11987729 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1198772c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198772f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11987732:;
  /* 11987732 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987735 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987738 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198773b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1198773e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11987740 je 0x11987757 */
  if (C.zf) goto L_11987757;
  /* 11987742 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987745 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11987748 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1198774a je 0x11987757 */
  if (C.zf) goto L_11987757;
  /* 1198774c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198774f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987752 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11987755 jmp 0x11987732 */
  goto L_11987732;
L_11987757:;
  /* 11987757 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198775a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1198775d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1198775f jne 0x11987769 */
  if (!C.zf) goto L_11987769;
  /* 11987761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987764 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987767 jmp 0x1198776c */
  goto L_1198776c;
L_11987769:;
  /* 11987769 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1198776c:;
  /* 1198776c mov esp, ebp */
  ESP = (EBP);
  /* 1198776e pop ebp */
  EBP = (pop32());
  /* 1198776f ret  */
  ESPCHK(0x11987720u, _esp0);
  ESP += 4; return;
}

/* FUN_10017770 @ 0x11987770 (736 bytes, 224 insns) */
void f_11987770(void) {
  FTRACE(0x11987770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987770 push ebp */
  push32((uint32_t)(EBP));
  /* 11987771 mov ebp, esp */
  EBP = (ESP);
  /* 11987773 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987776 push esi */
  push32((uint32_t)(ESI));
  /* 11987777 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198777b je 0x1198779c */
  if (C.zf) goto L_1198779c;
  /* 1198777d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1198777f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987782 push eax */
  push32((uint32_t)(EAX));
  /* 11987783 call 0x11987bc0 */
  push32(0x11987788u); f_11987bc0();
  /* 11987788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198778b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1198778e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987792 je 0x1198779c */
  if (C.zf) goto L_1198779c;
  /* 11987794 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987797 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198779a jne 0x119877a4 */
  if (!C.zf) goto L_119877a4;
L_1198779c:;
  /* 1198779c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1198779f jmp 0x11987a4b */
  goto L_11987a4b;
L_119877a4:;
  /* 119877a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119877a7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 119877ab neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119877ad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119877af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119877b0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119877b3 mov ecx, dword ptr [0x119a388c] */
  ECX = (r32((uint32_t)(0x119a388c)));
  /* 119877b9 cmp ecx, dword ptr [0x119a3890] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a3890))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119877bf jne 0x119877d5 */
  if (!C.zf) goto L_119877d5;
  /* 119877c1 mov edx, dword ptr [0x119a388c] */
  EDX = (r32((uint32_t)(0x119a388c)));
  /* 119877c7 push edx */
  push32((uint32_t)(EDX));
  /* 119877c8 call 0x11987ad0 */
  push32(0x119877cdu); f_11987ad0();
  /* 119877cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119877d0 mov dword ptr [0x119a388c], eax */
  w32((uint32_t)(0x119a388c), (EAX));
L_119877d5:;
  /* 119877d5 cmp dword ptr [0x119a388c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a388c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119877dc jne 0x11987895 */
  if (!C.zf) goto L_11987895;
  /* 119877e2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119877e6 je 0x11987807 */
  if (C.zf) goto L_11987807;
  /* 119877e8 cmp dword ptr [0x119a3894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119877ef je 0x11987807 */
  if (C.zf) goto L_11987807;
  /* 119877f1 call 0x11987270 */
  push32(0x119877f6u); f_11987270();
  /* 119877f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119877f8 je 0x11987802 */
  if (C.zf) goto L_11987802;
  /* 119877fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119877fd jmp 0x11987a4b */
  goto L_11987a4b;
L_11987802:;
  /* 11987802 jmp 0x11987895 */
  goto L_11987895;
L_11987807:;
  /* 11987807 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198780b je 0x11987814 */
  if (C.zf) goto L_11987814;
  /* 1198780d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198780f jmp 0x11987a4b */
  goto L_11987a4b;
L_11987814:;
  /* 11987814 cmp dword ptr [0x119a388c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a388c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198781b jne 0x11987854 */
  if (!C.zf) goto L_11987854;
  /* 1198781d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11987822 push 0x119a0608 */
  push32((uint32_t)(0x119a0608u));
  /* 11987827 push 2 */
  push32((uint32_t)(0x2u));
  /* 11987829 push 4 */
  push32((uint32_t)(0x4u));
  /* 1198782b call 0x11977770 */
  push32(0x11987830u); f_11977770();
  /* 11987830 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987833 mov dword ptr [0x119a388c], eax */
  w32((uint32_t)(0x119a388c), (EAX));
  /* 11987838 cmp dword ptr [0x119a388c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a388c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198783f jne 0x11987849 */
  if (!C.zf) goto L_11987849;
  /* 11987841 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11987844 jmp 0x11987a4b */
  goto L_11987a4b;
L_11987849:;
  /* 11987849 mov eax, dword ptr [0x119a388c] */
  EAX = (r32((uint32_t)(0x119a388c)));
  /* 1198784e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11987854:;
  /* 11987854 cmp dword ptr [0x119a3894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198785b jne 0x11987895 */
  if (!C.zf) goto L_11987895;
  /* 1198785d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11987862 push 0x119a0608 */
  push32((uint32_t)(0x119a0608u));
  /* 11987867 push 2 */
  push32((uint32_t)(0x2u));
  /* 11987869 push 4 */
  push32((uint32_t)(0x4u));
  /* 1198786b call 0x11977770 */
  push32(0x11987870u); f_11977770();
  /* 11987870 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987873 mov dword ptr [0x119a3894], eax */
  w32((uint32_t)(0x119a3894), (EAX));
  /* 11987878 cmp dword ptr [0x119a3894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198787f jne 0x11987889 */
  if (!C.zf) goto L_11987889;
  /* 11987881 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11987884 jmp 0x11987a4b */
  goto L_11987a4b;
L_11987889:;
  /* 11987889 mov ecx, dword ptr [0x119a3894] */
  ECX = (r32((uint32_t)(0x119a3894)));
  /* 1198788f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11987895:;
  /* 11987895 mov edx, dword ptr [0x119a388c] */
  EDX = (r32((uint32_t)(0x119a388c)));
  /* 1198789b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1198789e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119878a1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119878a4 push eax */
  push32((uint32_t)(EAX));
  /* 119878a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119878a8 push ecx */
  push32((uint32_t)(ECX));
  /* 119878a9 call 0x11987a50 */
  push32(0x119878aeu); f_11987a50();
  /* 119878ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119878b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119878b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119878b8 jl 0x11987951 */
  if ((C.sf!=C.of)) goto L_11987951;
  /* 119878be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119878c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119878c4 je 0x11987951 */
  if (C.zf) goto L_11987951;
  /* 119878ca cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119878ce je 0x11987943 */
  if (C.zf) goto L_11987943;
  /* 119878d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119878d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119878d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119878d8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119878db push edx */
  push32((uint32_t)(EDX));
  /* 119878dc call 0x11978200 */
  push32(0x119878e1u); f_11978200();
  /* 119878e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119878e4 jmp 0x119878ef */
  goto L_119878ef;
L_119878e6:;
  /* 119878e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119878e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119878ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119878ef:;
  /* 119878ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119878f2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119878f5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119878f9 je 0x11987910 */
  if (C.zf) goto L_11987910;
  /* 119878fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119878fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11987901 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987904 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11987907 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1198790b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1198790e jmp 0x119878e6 */
  goto L_119878e6;
L_11987910:;
  /* 11987910 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11987915 push 0x119a0608 */
  push32((uint32_t)(0x119a0608u));
  /* 1198791a push 2 */
  push32((uint32_t)(0x2u));
  /* 1198791c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1198791f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11987922 push eax */
  push32((uint32_t)(EAX));
  /* 11987923 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11987926 push ecx */
  push32((uint32_t)(ECX));
  /* 11987927 call 0x11977c00 */
  push32(0x1198792cu); f_11977c00();
  /* 1198792c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198792f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11987932 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987936 je 0x11987941 */
  if (C.zf) goto L_11987941;
  /* 11987938 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198793b mov dword ptr [0x119a388c], edx */
  w32((uint32_t)(0x119a388c), (EDX));
L_11987941:;
  /* 11987941 jmp 0x1198794f */
  goto L_1198794f;
L_11987943:;
  /* 11987943 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987946 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11987949 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198794c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1198794f:;
  /* 1198794f jmp 0x119879c4 */
  goto L_119879c4;
L_11987951:;
  /* 11987951 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987955 jne 0x119879bd */
  if (!C.zf) goto L_119879bd;
  /* 11987957 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198795b jge 0x11987965 */
  if ((C.sf==C.of)) goto L_11987965;
  /* 1198795d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987960 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11987962 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11987965:;
  /* 11987965 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1198796a push 0x119a0608 */
  push32((uint32_t)(0x119a0608u));
  /* 1198796f push 2 */
  push32((uint32_t)(0x2u));
  /* 11987971 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987974 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1198797b push edx */
  push32((uint32_t)(EDX));
  /* 1198797c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198797f push eax */
  push32((uint32_t)(EAX));
  /* 11987980 call 0x11977c00 */
  push32(0x11987985u); f_11977c00();
  /* 11987985 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987988 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1198798b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198798f jne 0x11987999 */
  if (!C.zf) goto L_11987999;
  /* 11987991 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11987994 jmp 0x11987a4b */
  goto L_11987a4b;
L_11987999:;
  /* 11987999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1198799c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198799f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119879a2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 119879a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119879a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119879ab mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 119879b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119879b6 mov dword ptr [0x119a388c], eax */
  w32((uint32_t)(0x119a388c), (EAX));
  /* 119879bb jmp 0x119879c4 */
  goto L_119879c4;
L_119879bd:;
  /* 119879bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119879bf jmp 0x11987a4b */
  goto L_11987a4b;
L_119879c4:;
  /* 119879c4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119879c8 je 0x11987a49 */
  if (C.zf) goto L_11987a49;
  /* 119879ca push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 119879cf push 0x119a0608 */
  push32((uint32_t)(0x119a0608u));
  /* 119879d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 119879d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119879d9 push ecx */
  push32((uint32_t)(ECX));
  /* 119879da call 0x1197a5a0 */
  push32(0x119879dfu); f_1197a5a0();
  /* 119879df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119879e2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119879e5 push eax */
  push32((uint32_t)(EAX));
  /* 119879e6 call 0x11977770 */
  push32(0x119879ebu); f_11977770();
  /* 119879eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119879ee mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119879f1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119879f5 je 0x11987a49 */
  if (C.zf) goto L_11987a49;
  /* 119879f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119879fa push edx */
  push32((uint32_t)(EDX));
  /* 119879fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119879fe push eax */
  push32((uint32_t)(EAX));
  /* 119879ff call 0x1197a720 */
  push32(0x11987a04u); f_1197a720();
  /* 11987a04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987a07 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11987a0a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987a0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11987a10 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987a12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11987a15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987a18 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11987a1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987a1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987a21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11987a24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11987a27 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11987a29 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987a2b not edx */
  EDX = (~(EDX));
  /* 11987a2d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11987a30 push edx */
  push32((uint32_t)(EDX));
  /* 11987a31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11987a34 push eax */
  push32((uint32_t)(EAX));
  /* 11987a35 call dword ptr [0x119a62d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62d4))), 0x11987a3bu);
  /* 11987a3b push 2 */
  push32((uint32_t)(0x2u));
  /* 11987a3d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11987a40 push ecx */
  push32((uint32_t)(ECX));
  /* 11987a41 call 0x11978200 */
  push32(0x11987a46u); f_11978200();
  /* 11987a46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11987a49:;
  /* 11987a49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11987a4b:;
  /* 11987a4b pop esi */
  ESI = (pop32());
  /* 11987a4c mov esp, ebp */
  ESP = (EBP);
  /* 11987a4e pop ebp */
  EBP = (pop32());
  /* 11987a4f ret  */
  ESPCHK(0x11987770u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11987a50 (124 bytes, 47 insns) */
void f_11987a50(void) {
  FTRACE(0x11987a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11987a51 mov ebp, esp */
  EBP = (ESP);
  /* 11987a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11987a54 mov eax, dword ptr [0x119a388c] */
  EAX = (r32((uint32_t)(0x119a388c)));
  /* 11987a59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11987a5c jmp 0x11987a67 */
  goto L_11987a67;
L_11987a5e:;
  /* 11987a5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987a61 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987a64 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11987a67:;
  /* 11987a67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987a6a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987a6d je 0x11987aba */
  if (C.zf) goto L_11987aba;
  /* 11987a6f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11987a72 push eax */
  push32((uint32_t)(EAX));
  /* 11987a73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987a76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11987a78 push edx */
  push32((uint32_t)(EDX));
  /* 11987a79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987a7c push eax */
  push32((uint32_t)(EAX));
  /* 11987a7d call 0x11987220 */
  push32(0x11987a82u); f_11987220();
  /* 11987a82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987a85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11987a87 jne 0x11987ab8 */
  if (!C.zf) goto L_11987ab8;
  /* 11987a89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987a8c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11987a8e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11987a91 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11987a95 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987a98 je 0x11987aaa */
  if (C.zf) goto L_11987aaa;
  /* 11987a9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987a9d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11987a9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11987aa2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11987aa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11987aa8 jne 0x11987ab8 */
  if (!C.zf) goto L_11987ab8;
L_11987aaa:;
  /* 11987aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987aad sub eax, dword ptr [0x119a388c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a388c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987ab3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11987ab6 jmp 0x11987ac8 */
  goto L_11987ac8;
L_11987ab8:;
  /* 11987ab8 jmp 0x11987a5e */
  goto L_11987a5e;
L_11987aba:;
  /* 11987aba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987abd sub eax, dword ptr [0x119a388c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a388c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987ac3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11987ac6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11987ac8:;
  /* 11987ac8 mov esp, ebp */
  ESP = (EBP);
  /* 11987aca pop ebp */
  EBP = (pop32());
  /* 11987acb ret  */
  ESPCHK(0x11987a50u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11987ad0 (238 bytes, 80 insns) */
void f_11987ad0(void) {
  FTRACE(0x11987ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11987ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11987ad3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987ad6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11987add mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987ae0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11987ae3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987ae7 jne 0x11987af0 */
  if (!C.zf) goto L_11987af0;
  /* 11987ae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11987aeb jmp 0x11987bba */
  goto L_11987bba;
L_11987af0:;
  /* 11987af0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11987af3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11987af5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11987af8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987afb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11987afe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11987b00 je 0x11987b0d */
  if (C.zf) goto L_11987b0d;
  /* 11987b02 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11987b05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987b08 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11987b0b jmp 0x11987af0 */
  goto L_11987af0;
L_11987b0d:;
  /* 11987b0d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11987b12 push 0x119a0608 */
  push32((uint32_t)(0x119a0608u));
  /* 11987b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11987b19 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11987b1c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11987b23 push eax */
  push32((uint32_t)(EAX));
  /* 11987b24 call 0x11977770 */
  push32(0x11987b29u); f_11977770();
  /* 11987b29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987b2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11987b2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987b32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11987b35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987b39 jne 0x11987b45 */
  if (!C.zf) goto L_11987b45;
  /* 11987b3b push 9 */
  push32((uint32_t)(0x9u));
  /* 11987b3d call 0x119766e0 */
  push32(0x11987b42u); f_119766e0();
  /* 11987b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11987b45:;
  /* 11987b45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987b48 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11987b4b:;
  /* 11987b4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11987b4e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987b51 je 0x11987bae */
  if (C.zf) goto L_11987bae;
  /* 11987b53 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11987b58 push 0x119a0608 */
  push32((uint32_t)(0x119a0608u));
  /* 11987b5d push 2 */
  push32((uint32_t)(0x2u));
  /* 11987b5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11987b62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11987b64 push edx */
  push32((uint32_t)(EDX));
  /* 11987b65 call 0x1197a5a0 */
  push32(0x11987b6au); f_1197a5a0();
  /* 11987b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987b6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987b70 push eax */
  push32((uint32_t)(EAX));
  /* 11987b71 call 0x11977770 */
  push32(0x11987b76u); f_11977770();
  /* 11987b76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987b79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987b7c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11987b7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987b81 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987b84 je 0x11987b9a */
  if (C.zf) goto L_11987b9a;
  /* 11987b86 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11987b89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11987b8b push ecx */
  push32((uint32_t)(ECX));
  /* 11987b8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987b8f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11987b91 push eax */
  push32((uint32_t)(EAX));
  /* 11987b92 call 0x1197a720 */
  push32(0x11987b97u); f_1197a720();
  /* 11987b97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11987b9a:;
  /* 11987b9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11987b9d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987ba0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11987ba3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987ba6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987ba9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11987bac jmp 0x11987b4b */
  goto L_11987b4b;
L_11987bae:;
  /* 11987bae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11987bb1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11987bb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11987bba:;
  /* 11987bba mov esp, ebp */
  ESP = (EBP);
  /* 11987bbc pop ebp */
  EBP = (pop32());
  /* 11987bbd ret  */
  ESPCHK(0x11987ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017bc0 @ 0x11987bc0 (237 bytes, 81 insns) */
void f_11987bc0(void) {
  FTRACE(0x11987bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11987bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11987bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11987bc4 cmp dword ptr [0x119a4fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a4fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987bcb jne 0x11987be2 */
  if (!C.zf) goto L_11987be2;
  /* 11987bcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11987bd0 push eax */
  push32((uint32_t)(EAX));
  /* 11987bd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11987bd5 call 0x11987cc0 */
  push32(0x11987bdau); f_11987cc0();
  /* 11987bda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987bdd jmp 0x11987ca9 */
  goto L_11987ca9;
L_11987be2:;
  /* 11987be2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11987be4 call 0x1197b170 */
  push32(0x11987be9u); f_1197b170();
  /* 11987be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987bec jmp 0x11987bf7 */
  goto L_11987bf7;
L_11987bee:;
  /* 11987bee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987bf1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987bf4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11987bf7:;
  /* 11987bf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987bfa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11987bfe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11987c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987c05 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11987c0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11987c0d je 0x11987c8b */
  if (C.zf) goto L_11987c8b;
  /* 11987c0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987c12 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11987c17 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11987c19 mov cl, byte ptr [eax + 0x119a50e1] */
  CL = (r8((uint32_t)(EAX + 0x119a50e1)));
  /* 11987c1f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11987c22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11987c24 je 0x11987c76 */
  if (C.zf) goto L_11987c76;
  /* 11987c26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987c29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987c2c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11987c2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987c32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11987c34 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11987c36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11987c38 jne 0x11987c48 */
  if (!C.zf) goto L_11987c48;
  /* 11987c3a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11987c3c call 0x1197b210 */
  push32(0x11987c41u); f_1197b210();
  /* 11987c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11987c46 jmp 0x11987ca9 */
  goto L_11987ca9;
L_11987c48:;
  /* 11987c48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987c4b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11987c51 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11987c54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987c57 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11987c59 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11987c5b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11987c5d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987c60 jne 0x11987c74 */
  if (!C.zf) goto L_11987c74;
  /* 11987c62 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11987c64 call 0x1197b210 */
  push32(0x11987c69u); f_1197b210();
  /* 11987c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987c6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987c6f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11987c72 jmp 0x11987ca9 */
  goto L_11987ca9;
L_11987c74:;
  /* 11987c74 jmp 0x11987c86 */
  goto L_11987c86;
L_11987c76:;
  /* 11987c76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987c79 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11987c7f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987c82 jne 0x11987c86 */
  if (!C.zf) goto L_11987c86;
  /* 11987c84 jmp 0x11987c8b */
  goto L_11987c8b;
L_11987c86:;
  /* 11987c86 jmp 0x11987bee */
  goto L_11987bee;
L_11987c8b:;
  /* 11987c8b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11987c8d call 0x1197b210 */
  push32(0x11987c92u); f_1197b210();
  /* 11987c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11987c95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11987c98 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11987c9d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11987ca0 jne 0x11987ca7 */
  if (!C.zf) goto L_11987ca7;
  /* 11987ca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11987ca5 jmp 0x11987ca9 */
  goto L_11987ca9;
L_11987ca7:;
  /* 11987ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11987ca9:;
  /* 11987ca9 mov esp, ebp */
  ESP = (EBP);
  /* 11987cab pop ebp */
  EBP = (pop32());
  /* 11987cac ret  */
  ESPCHK(0x11987bc0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11987cc0 (193 bytes, 87 insns) */
void f_11987cc0(void) {
  FTRACE(0x11987cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987cc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11987cc2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11987cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11987cc7 mov ebx, eax */
  EBX = (EAX);
  /* 11987cc9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11987ccc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11987cd0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11987cd6 je 0x11987ceb */
  if (C.zf) goto L_11987ceb;
L_11987cd8:;
  /* 11987cd8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11987cda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11987cdb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11987cdd je 0x11987cb0 */
  if (C.zf) { jmp_ind(0x11987cb0u); return; }
  /* 11987cdf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11987ce1 je 0x11987d34 */
  if (C.zf) goto L_11987d34;
  /* 11987ce3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11987ce9 jne 0x11987cd8 */
  if (!C.zf) goto L_11987cd8;
L_11987ceb:;
  /* 11987ceb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11987ced push edi */
  push32((uint32_t)(EDI));
  /* 11987cee mov eax, ebx */
  EAX = (EBX);
  /* 11987cf0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11987cf3 push esi */
  push32((uint32_t)(ESI));
  /* 11987cf4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11987cf6:;
  /* 11987cf6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11987cf8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11987cfd mov eax, ecx */
  EAX = (ECX);
  /* 11987cff mov esi, edi */
  ESI = (EDI);
  /* 11987d01 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11987d03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11987d05 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11987d07 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11987d0a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11987d0d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11987d0f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11987d11 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11987d14 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11987d1a jne 0x11987d38 */
  if (!C.zf) goto L_11987d38;
  /* 11987d1c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11987d21 je 0x11987cf6 */
  if (C.zf) goto L_11987cf6;
  /* 11987d23 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11987d28 jne 0x11987d32 */
  if (!C.zf) goto L_11987d32;
  /* 11987d2a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11987d30 jne 0x11987cf6 */
  if (!C.zf) goto L_11987cf6;
L_11987d32:;
  /* 11987d32 pop esi */
  ESI = (pop32());
  /* 11987d33 pop edi */
  EDI = (pop32());
L_11987d34:;
  /* 11987d34 pop ebx */
  EBX = (pop32());
  /* 11987d35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11987d37 ret  */
  ESPCHK(0x11987cc0u, _esp0);
  ESP += 4; return;
L_11987d38:;
  /* 11987d38 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11987d3b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11987d3d je 0x11987d75 */
  if (C.zf) goto L_11987d75;
  /* 11987d3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11987d41 je 0x11987d32 */
  if (C.zf) goto L_11987d32;
  /* 11987d43 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11987d45 je 0x11987d6e */
  if (C.zf) goto L_11987d6e;
  /* 11987d47 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11987d49 je 0x11987d32 */
  if (C.zf) goto L_11987d32;
  /* 11987d4b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11987d4e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11987d50 je 0x11987d67 */
  if (C.zf) goto L_11987d67;
  /* 11987d52 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11987d54 je 0x11987d32 */
  if (C.zf) goto L_11987d32;
  /* 11987d56 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11987d58 je 0x11987d60 */
  if (C.zf) goto L_11987d60;
  /* 11987d5a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11987d5c je 0x11987d32 */
  if (C.zf) goto L_11987d32;
  /* 11987d5e jmp 0x11987cf6 */
  goto L_11987cf6;
L_11987d60:;
  /* 11987d60 pop esi */
  ESI = (pop32());
  /* 11987d61 pop edi */
  EDI = (pop32());
  /* 11987d62 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11987d65 pop ebx */
  EBX = (pop32());
  /* 11987d66 ret  */
  ESPCHK(0x11987cc0u, _esp0);
  ESP += 4; return;
L_11987d67:;
  /* 11987d67 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11987d6a pop esi */
  ESI = (pop32());
  /* 11987d6b pop edi */
  EDI = (pop32());
  /* 11987d6c pop ebx */
  EBX = (pop32());
  /* 11987d6d ret  */
  ESPCHK(0x11987cc0u, _esp0);
  ESP += 4; return;
L_11987d6e:;
  /* 11987d6e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11987d71 pop esi */
  ESI = (pop32());
  /* 11987d72 pop edi */
  EDI = (pop32());
  /* 11987d73 pop ebx */
  EBX = (pop32());
  /* 11987d74 ret  */
  ESPCHK(0x11987cc0u, _esp0);
  ESP += 4; return;
L_11987d75:;
  /* 11987d75 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11987d78 pop esi */
  ESI = (pop32());
  /* 11987d79 pop edi */
  EDI = (pop32());
  /* 11987d7a pop ebx */
  EBX = (pop32());
  /* 11987d7b ret  */
  ESPCHK(0x11987cc0u, _esp0);
  ESP += 4; return;
  /* 11987d7c jmp dword ptr [0x119a6388] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x119a6388)))); return;
}

/* RtlUnwind @ 0x11987ecc (6 bytes, 1 insns) */
void f_11987ecc(void) {
  FTRACE(0x11987eccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11987ecc jmp dword ptr [0x119a630c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x119a630c)))); return;
}

