#include "recomp.h"

/* FUN_1000fb20 @ 0x10c9fb20 (393 bytes, 123 insns) */
void f_10c9fb20(void) {
  FTRACE(0x10c9fb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9fb20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9fb21 mov ebp, esp */
  EBP = (ESP);
  /* 10c9fb23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9fb26 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fb2a jne 0x10c9fb36 */
  if (!C.zf) goto L_10c9fb36;
  /* 10c9fb2c mov eax, dword ptr [0x10cbdc98] */
  EAX = (r32((uint32_t)(0x10cbdc98)));
  /* 10c9fb31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c9fb34 jmp 0x10c9fb3c */
  goto L_10c9fb3c;
L_10c9fb36:;
  /* 10c9fb36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fb39 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c9fb3c:;
  /* 10c9fb3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9fb3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9fb42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fb45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c9fb48 push 0x10cbe78c */
  push32((uint32_t)(0x10cbe78cu));
  /* 10c9fb4d call dword ptr [0x10cc024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc024c))), 0x10c9fb53u);
  /* 10c9fb53 cmp dword ptr [0x10cbe77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fb5a je 0x10c9fb7a */
  if (C.zf) goto L_10c9fb7a;
  /* 10c9fb5c push 0x10cbe78c */
  push32((uint32_t)(0x10cbe78cu));
  /* 10c9fb61 call dword ptr [0x10cc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc023c))), 0x10c9fb67u);
  /* 10c9fb67 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c9fb69 call 0x10c961e0 */
  push32(0x10c9fb6eu); f_10c961e0();
  /* 10c9fb6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fb71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c9fb78 jmp 0x10c9fb81 */
  goto L_10c9fb81;
L_10c9fb7a:;
  /* 10c9fb7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c9fb81:;
  /* 10c9fb81 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fb85 jbe 0x10c9fc72 */
  if ((C.cf||C.zf)) goto L_10c9fc72;
  /* 10c9fb8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fb8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c9fb90 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10c9fb93 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c9fb97 je 0x10c9fba1 */
  if (C.zf) goto L_10c9fba1;
  /* 10c9fb99 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c9fb9d je 0x10c9fba6 */
  if (C.zf) goto L_10c9fba6;
  /* 10c9fb9f jmp 0x10c9fc00 */
  goto L_10c9fc00;
L_10c9fba1:;
  /* 10c9fba1 jmp 0x10c9fc72 */
  goto L_10c9fc72;
L_10c9fba6:;
  /* 10c9fba6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fba9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fbac mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10c9fbaf mov dword ptr [0x10cbe768], 0 */
  w32((uint32_t)(0x10cbe768), (0x0u));
  /* 10c9fbb9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fbbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9fbbf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fbc2 jne 0x10c9fbd7 */
  if (!C.zf) goto L_10c9fbd7;
  /* 10c9fbc4 mov dword ptr [0x10cbe768], 1 */
  w32((uint32_t)(0x10cbe768), (0x1u));
  /* 10c9fbce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fbd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fbd4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c9fbd7:;
  /* 10c9fbd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9fbda push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fbdb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10c9fbde push edx */
  push32((uint32_t)(EDX));
  /* 10c9fbdf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10c9fbe2 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fbe3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fbe6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fbe7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fbea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c9fbec push eax */
  push32((uint32_t)(EAX));
  /* 10c9fbed call 0x10c9fcb0 */
  push32(0x10c9fbf2u); f_10c9fcb0();
  /* 10c9fbf2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fbf5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fbf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fbfb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c9fbfe jmp 0x10c9fc6d */
  goto L_10c9fc6d;
L_10c9fc00:;
  /* 10c9fc00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fc03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9fc05 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c9fc07 mov ecx, dword ptr [0x10cbcc98] */
  ECX = (r32((uint32_t)(0x10cbcc98)));
  /* 10c9fc0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9fc0f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c9fc13 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9fc19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9fc1b je 0x10c9fc48 */
  if (C.zf) goto L_10c9fc48;
  /* 10c9fc1d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fc21 jbe 0x10c9fc48 */
  if ((C.cf||C.zf)) goto L_10c9fc48;
  /* 10c9fc23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9fc26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fc29 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c9fc2b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c9fc2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9fc30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fc33 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c9fc36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fc39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fc3c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c9fc3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9fc42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9fc45 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c9fc48:;
  /* 10c9fc48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9fc4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fc4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c9fc50 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c9fc52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9fc55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fc58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c9fc5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fc5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fc61 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c9fc64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9fc67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9fc6a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c9fc6d:;
  /* 10c9fc6d jmp 0x10c9fb81 */
  goto L_10c9fb81;
L_10c9fc72:;
  /* 10c9fc72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fc76 je 0x10c9fc84 */
  if (C.zf) goto L_10c9fc84;
  /* 10c9fc78 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c9fc7a call 0x10c96280 */
  push32(0x10c9fc7fu); f_10c96280();
  /* 10c9fc7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fc82 jmp 0x10c9fc8f */
  goto L_10c9fc8f;
L_10c9fc84:;
  /* 10c9fc84 push 0x10cbe78c */
  push32((uint32_t)(0x10cbe78cu));
  /* 10c9fc89 call dword ptr [0x10cc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc023c))), 0x10c9fc8fu);
L_10c9fc8f:;
  /* 10c9fc8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fc93 jbe 0x10c9fca3 */
  if ((C.cf||C.zf)) goto L_10c9fca3;
  /* 10c9fc95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9fc98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c9fc9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fc9e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9fca1 jmp 0x10c9fca5 */
  goto L_10c9fca5;
L_10c9fca3:;
  /* 10c9fca3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9fca5:;
  /* 10c9fca5 mov esp, ebp */
  ESP = (EBP);
  /* 10c9fca7 pop ebp */
  EBP = (pop32());
  /* 10c9fca8 ret  */
  ESPCHK(0x10c9fb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcb0 @ 0x10c9fcb0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10c9fcb0(void) {
  FTRACE(0x10c9fcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9fcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9fcb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9fcb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9fcb6 push esi */
  push32((uint32_t)(ESI));
  /* 10c9fcb7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10c9fcbb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c9fcbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9fcc1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9fcc4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9fcc7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fccb ja 0x10ca0218 */
  if ((!C.cf&&!C.zf)) goto L_10ca0218;
  /* 10c9fcd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9fcd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9fcd6 mov dl, byte ptr [eax + 0x10ca0279] */
  DL = (r8((uint32_t)(EAX + 0x10ca0279)));
  /* 10c9fcdc jmp dword ptr [edx*4 + 0x10ca021d] */
  switch (EDX) {
    case 0: goto L_10ca01f6;
    case 1: goto L_10c9fd05;
    case 2: goto L_10c9fd4b;
    case 3: goto L_10c9fe98;
    case 4: goto L_10c9fec0;
    case 5: goto L_10c9ff5f;
    case 6: goto L_10c9ffcb;
    case 7: goto L_10c9fff4;
    case 8: goto L_10ca0035;
    case 9: goto L_10ca0117;
    case 10: goto L_10ca017e;
    case 11: goto L_10ca01cb;
    case 12: goto L_10c9fce3;
    case 13: goto L_10c9fd28;
    case 14: goto L_10c9fd6e;
    case 15: goto L_10c9fe6e;
    case 16: goto L_10c9ff05;
    case 17: goto L_10c9ff32;
    case 18: goto L_10c9ff87;
    case 19: goto L_10ca000b;
    case 20: goto L_10ca00b9;
    case 21: goto L_10ca0148;
    case 22: goto L_10ca0218;
    default: x86_unimpl("switch@0x10c9fcdc out of table"); return;
  }
L_10c9fce3:;
  /* 10c9fce3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fce6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fce7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fcea push edx */
  push32((uint32_t)(EDX));
  /* 10c9fceb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fcee mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c9fcf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fcf4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c9fcf7 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fcf8 call 0x10ca02d0 */
  push32(0x10c9fcfdu); f_10ca02d0();
  /* 10c9fcfd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fd00 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9fd05:;
  /* 10c9fd05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fd08 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fd09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fd0c push edx */
  push32((uint32_t)(EDX));
  /* 10c9fd0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fd10 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c9fd13 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fd16 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10c9fd1a push eax */
  push32((uint32_t)(EAX));
  /* 10c9fd1b call 0x10ca02d0 */
  push32(0x10c9fd20u); f_10ca02d0();
  /* 10c9fd20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fd23 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9fd28:;
  /* 10c9fd28 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fd2b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fd2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fd2f push edx */
  push32((uint32_t)(EDX));
  /* 10c9fd30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fd33 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9fd36 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fd39 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10c9fd3d push eax */
  push32((uint32_t)(EAX));
  /* 10c9fd3e call 0x10ca02d0 */
  push32(0x10c9fd43u); f_10ca02d0();
  /* 10c9fd43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fd46 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9fd4b:;
  /* 10c9fd4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fd4e push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fd4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fd52 push edx */
  push32((uint32_t)(EDX));
  /* 10c9fd53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fd56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9fd59 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fd5c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c9fd60 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fd61 call 0x10ca02d0 */
  push32(0x10c9fd66u); f_10ca02d0();
  /* 10c9fd66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fd69 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9fd6e:;
  /* 10c9fd6e cmp dword ptr [0x10cbe768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fd75 je 0x10c9fdf6 */
  if (C.zf) goto L_10c9fdf6;
  /* 10c9fd77 mov dword ptr [0x10cbe768], 0 */
  w32((uint32_t)(0x10cbe768), (0x0u));
  /* 10c9fd81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fd84 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fd85 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fd88 push edx */
  push32((uint32_t)(EDX));
  /* 10c9fd89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fd8c push eax */
  push32((uint32_t)(EAX));
  /* 10c9fd8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fd90 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fd91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fd94 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10c9fd9a push eax */
  push32((uint32_t)(EAX));
  /* 10c9fd9b call 0x10ca0480 */
  push32(0x10c9fda0u); f_10ca0480();
  /* 10c9fda0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fda3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fda6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fda9 jne 0x10c9fdb0 */
  if (!C.zf) goto L_10c9fdb0;
  /* 10c9fdab jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9fdb0:;
  /* 10c9fdb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fdb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c9fdb5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10c9fdb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fdbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9fdbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fdc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fdc3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c9fdc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fdc8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9fdca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9fdcd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fdd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c9fdd2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fdd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fdd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fdd9 push edx */
  push32((uint32_t)(EDX));
  /* 10c9fdda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fddd push eax */
  push32((uint32_t)(EAX));
  /* 10c9fdde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fde1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fde2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fde5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10c9fdeb push eax */
  push32((uint32_t)(EAX));
  /* 10c9fdec call 0x10ca0480 */
  push32(0x10c9fdf1u); f_10ca0480();
  /* 10c9fdf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fdf4 jmp 0x10c9fe69 */
  goto L_10c9fe69;
L_10c9fdf6:;
  /* 10c9fdf6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fdf9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fdfa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fdfd push edx */
  push32((uint32_t)(EDX));
  /* 10c9fdfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fe01 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fe02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fe05 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fe06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fe09 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10c9fe0f push eax */
  push32((uint32_t)(EAX));
  /* 10c9fe10 call 0x10ca0480 */
  push32(0x10c9fe15u); f_10ca0480();
  /* 10c9fe15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fe18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fe1b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fe1e jne 0x10c9fe25 */
  if (!C.zf) goto L_10c9fe25;
  /* 10c9fe20 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9fe25:;
  /* 10c9fe25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fe28 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c9fe2a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10c9fe2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fe30 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9fe32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fe35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fe38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c9fe3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fe3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9fe3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9fe42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fe45 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c9fe47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fe4a push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fe4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fe4e push edx */
  push32((uint32_t)(EDX));
  /* 10c9fe4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fe52 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fe53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fe56 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fe57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9fe5a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10c9fe60 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fe61 call 0x10ca0480 */
  push32(0x10c9fe66u); f_10ca0480();
  /* 10c9fe66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9fe69:;
  /* 10c9fe69 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9fe6e:;
  /* 10c9fe6e mov ecx, dword ptr [0x10cbe768] */
  ECX = (r32((uint32_t)(0x10cbe768)));
  /* 10c9fe74 mov dword ptr [0x10cbe778], ecx */
  w32((uint32_t)(0x10cbe778), (ECX));
  /* 10c9fe7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fe7d push edx */
  push32((uint32_t)(EDX));
  /* 10c9fe7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fe81 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fe82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9fe84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fe87 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9fe8a push edx */
  push32((uint32_t)(EDX));
  /* 10c9fe8b call 0x10ca0320 */
  push32(0x10c9fe90u); f_10ca0320();
  /* 10c9fe90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fe93 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9fe98:;
  /* 10c9fe98 mov eax, dword ptr [0x10cbe768] */
  EAX = (r32((uint32_t)(0x10cbe768)));
  /* 10c9fe9d mov dword ptr [0x10cbe778], eax */
  w32((uint32_t)(0x10cbe778), (EAX));
  /* 10c9fea2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fea5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fea6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fea9 push edx */
  push32((uint32_t)(EDX));
  /* 10c9feaa push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9feac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9feaf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c9feb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9feb3 call 0x10ca0320 */
  push32(0x10c9feb8u); f_10ca0320();
  /* 10c9feb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9febb jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9fec0:;
  /* 10c9fec0 mov edx, dword ptr [0x10cbe768] */
  EDX = (r32((uint32_t)(0x10cbe768)));
  /* 10c9fec6 mov dword ptr [0x10cbe778], edx */
  w32((uint32_t)(0x10cbe778), (EDX));
  /* 10c9fecc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fecf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c9fed2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c9fed3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10c9fed8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c9feda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9fedd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9fee1 jne 0x10c9feea */
  if (!C.zf) goto L_10c9feea;
  /* 10c9fee3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10c9feea:;
  /* 10c9feea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9feed push edx */
  push32((uint32_t)(EDX));
  /* 10c9feee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fef1 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fef2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9fef4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9fef7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fef8 call 0x10ca0320 */
  push32(0x10c9fefdu); f_10ca0320();
  /* 10c9fefd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ff00 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9ff05:;
  /* 10c9ff05 mov edx, dword ptr [0x10cbe768] */
  EDX = (r32((uint32_t)(0x10cbe768)));
  /* 10c9ff0b mov dword ptr [0x10cbe778], edx */
  w32((uint32_t)(0x10cbe778), (EDX));
  /* 10c9ff11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9ff14 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ff15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ff18 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ff19 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c9ff1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ff1e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c9ff21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ff24 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ff25 call 0x10ca0320 */
  push32(0x10c9ff2au); f_10ca0320();
  /* 10c9ff2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ff2d jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9ff32:;
  /* 10c9ff32 mov ecx, dword ptr [0x10cbe768] */
  ECX = (r32((uint32_t)(0x10cbe768)));
  /* 10c9ff38 mov dword ptr [0x10cbe778], ecx */
  w32((uint32_t)(0x10cbe778), (ECX));
  /* 10c9ff3e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9ff41 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ff42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ff45 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ff46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9ff48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ff4b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c9ff4e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ff51 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ff52 call 0x10ca0320 */
  push32(0x10c9ff57u); f_10ca0320();
  /* 10c9ff57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ff5a jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9ff5f:;
  /* 10c9ff5f mov eax, dword ptr [0x10cbe768] */
  EAX = (r32((uint32_t)(0x10cbe768)));
  /* 10c9ff64 mov dword ptr [0x10cbe778], eax */
  w32((uint32_t)(0x10cbe778), (EAX));
  /* 10c9ff69 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9ff6c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ff6d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ff70 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ff71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9ff73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ff76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c9ff79 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ff7a call 0x10ca0320 */
  push32(0x10c9ff7fu); f_10ca0320();
  /* 10c9ff7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ff82 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9ff87:;
  /* 10c9ff87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ff8a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ff8e jg 0x10c9ffac */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9ffac;
  /* 10c9ff90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9ff93 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ff94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ff97 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ff98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9ff9b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10c9ffa1 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ffa2 call 0x10ca02d0 */
  push32(0x10c9ffa7u); f_10ca02d0();
  /* 10c9ffa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ffaa jmp 0x10c9ffc6 */
  goto L_10c9ffc6;
L_10c9ffac:;
  /* 10c9ffac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9ffaf push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ffb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ffb3 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ffb4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9ffb7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10c9ffbd push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ffbe call 0x10ca02d0 */
  push32(0x10c9ffc3u); f_10ca02d0();
  /* 10c9ffc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9ffc6:;
  /* 10c9ffc6 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9ffcb:;
  /* 10c9ffcb mov edx, dword ptr [0x10cbe768] */
  EDX = (r32((uint32_t)(0x10cbe768)));
  /* 10c9ffd1 mov dword ptr [0x10cbe778], edx */
  w32((uint32_t)(0x10cbe778), (EDX));
  /* 10c9ffd7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9ffda push eax */
  push32((uint32_t)(EAX));
  /* 10c9ffdb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ffde push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ffdf push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9ffe1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ffe4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c9ffe6 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ffe7 call 0x10ca0320 */
  push32(0x10c9ffecu); f_10ca0320();
  /* 10c9ffec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ffef jmp 0x10ca0218 */
  goto L_10ca0218;
L_10c9fff4:;
  /* 10c9fff4 mov ecx, dword ptr [0x10cbe768] */
  ECX = (r32((uint32_t)(0x10cbe768)));
  /* 10c9fffa mov dword ptr [0x10cbe778], ecx */
  w32((uint32_t)(0x10cbe778), (ECX));
  /* 10ca0000 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0003 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ca0006 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ca0009 jmp 0x10ca005d */
  goto L_10ca005d;
L_10ca000b:;
  /* 10ca000b mov ecx, dword ptr [0x10cbe768] */
  ECX = (r32((uint32_t)(0x10cbe768)));
  /* 10ca0011 mov dword ptr [0x10cbe778], ecx */
  w32((uint32_t)(0x10cbe778), (ECX));
  /* 10ca0017 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca001a push edx */
  push32((uint32_t)(EDX));
  /* 10ca001b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca001e push eax */
  push32((uint32_t)(EAX));
  /* 10ca001f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca0021 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0024 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ca0027 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0028 call 0x10ca0320 */
  push32(0x10ca002du); f_10ca0320();
  /* 10ca002d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0030 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10ca0035:;
  /* 10ca0035 mov eax, dword ptr [0x10cbe768] */
  EAX = (r32((uint32_t)(0x10cbe768)));
  /* 10ca003a mov dword ptr [0x10cbe778], eax */
  w32((uint32_t)(0x10cbe778), (EAX));
  /* 10ca003f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0042 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0046 jne 0x10ca0051 */
  if (!C.zf) goto L_10ca0051;
  /* 10ca0048 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10ca004f jmp 0x10ca005d */
  goto L_10ca005d;
L_10ca0051:;
  /* 10ca0051 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0054 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ca0057 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca005a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ca005d:;
  /* 10ca005d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0060 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ca0063 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0066 jge 0x10ca0071 */
  if ((C.sf==C.of)) goto L_10ca0071;
  /* 10ca0068 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ca006f jmp 0x10ca009e */
  goto L_10ca009e;
L_10ca0071:;
  /* 10ca0071 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0074 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ca0077 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca0078 mov ecx, 7 */
  ECX = (0x7u);
  /* 10ca007d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ca007f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca0082 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0085 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ca0088 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca0089 mov ecx, 7 */
  ECX = (0x7u);
  /* 10ca008e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ca0090 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0093 jl 0x10ca009e */
  if ((C.sf!=C.of)) goto L_10ca009e;
  /* 10ca0095 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca0098 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca009b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ca009e:;
  /* 10ca009e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca00a1 push eax */
  push32((uint32_t)(EAX));
  /* 10ca00a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca00a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca00a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca00a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca00ab push edx */
  push32((uint32_t)(EDX));
  /* 10ca00ac call 0x10ca0320 */
  push32(0x10ca00b1u); f_10ca0320();
  /* 10ca00b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca00b4 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10ca00b9:;
  /* 10ca00b9 cmp dword ptr [0x10cbe768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca00c0 je 0x10ca00f0 */
  if (C.zf) goto L_10ca00f0;
  /* 10ca00c2 mov dword ptr [0x10cbe768], 0 */
  w32((uint32_t)(0x10cbe768), (0x0u));
  /* 10ca00cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca00cf push eax */
  push32((uint32_t)(EAX));
  /* 10ca00d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca00d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca00d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca00d7 push edx */
  push32((uint32_t)(EDX));
  /* 10ca00d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca00db push eax */
  push32((uint32_t)(EAX));
  /* 10ca00dc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca00df mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10ca00e5 push edx */
  push32((uint32_t)(EDX));
  /* 10ca00e6 call 0x10ca0480 */
  push32(0x10ca00ebu); f_10ca0480();
  /* 10ca00eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca00ee jmp 0x10ca0112 */
  goto L_10ca0112;
L_10ca00f0:;
  /* 10ca00f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca00f3 push eax */
  push32((uint32_t)(EAX));
  /* 10ca00f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca00f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca00f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca00fb push edx */
  push32((uint32_t)(EDX));
  /* 10ca00fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca00ff push eax */
  push32((uint32_t)(EAX));
  /* 10ca0100 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca0103 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10ca0109 push edx */
  push32((uint32_t)(EDX));
  /* 10ca010a call 0x10ca0480 */
  push32(0x10ca010fu); f_10ca0480();
  /* 10ca010f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca0112:;
  /* 10ca0112 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10ca0117:;
  /* 10ca0117 mov dword ptr [0x10cbe768], 0 */
  w32((uint32_t)(0x10cbe768), (0x0u));
  /* 10ca0121 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca0124 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0125 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0128 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0129 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca012c push edx */
  push32((uint32_t)(EDX));
  /* 10ca012d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0130 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0131 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca0134 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10ca013a push edx */
  push32((uint32_t)(EDX));
  /* 10ca013b call 0x10ca0480 */
  push32(0x10ca0140u); f_10ca0480();
  /* 10ca0140 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0143 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10ca0148:;
  /* 10ca0148 mov eax, dword ptr [0x10cbe768] */
  EAX = (r32((uint32_t)(0x10cbe768)));
  /* 10ca014d mov dword ptr [0x10cbe778], eax */
  w32((uint32_t)(0x10cbe778), (EAX));
  /* 10ca0152 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0155 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ca0158 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca0159 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10ca015e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ca0160 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ca0163 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0166 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0167 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca016a push eax */
  push32((uint32_t)(EAX));
  /* 10ca016b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca016d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca0170 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0171 call 0x10ca0320 */
  push32(0x10ca0176u); f_10ca0320();
  /* 10ca0176 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0179 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10ca017e:;
  /* 10ca017e mov edx, dword ptr [0x10cbe768] */
  EDX = (r32((uint32_t)(0x10cbe768)));
  /* 10ca0184 mov dword ptr [0x10cbe778], edx */
  w32((uint32_t)(0x10cbe778), (EDX));
  /* 10ca018a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca018d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ca0190 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca0191 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10ca0196 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ca0198 mov ecx, eax */
  ECX = (EAX);
  /* 10ca019a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca019d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca01a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca01a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ca01a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca01a7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10ca01ac idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ca01ae add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca01b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca01b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca01b6 push eax */
  push32((uint32_t)(EAX));
  /* 10ca01b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca01ba push ecx */
  push32((uint32_t)(ECX));
  /* 10ca01bb push 4 */
  push32((uint32_t)(0x4u));
  /* 10ca01bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca01c0 push edx */
  push32((uint32_t)(EDX));
  /* 10ca01c1 call 0x10ca0320 */
  push32(0x10ca01c6u); f_10ca0320();
  /* 10ca01c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca01c9 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10ca01cb:;
  /* 10ca01cb call 0x10ca12e0 */
  push32(0x10ca01d0u); f_10ca12e0();
  /* 10ca01d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca01d3 push eax */
  push32((uint32_t)(EAX));
  /* 10ca01d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca01d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca01d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca01db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca01dd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca01e1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10ca01e4 mov ecx, dword ptr [eax*4 + 0x10cbde1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cbde1c)));
  /* 10ca01eb push ecx */
  push32((uint32_t)(ECX));
  /* 10ca01ec call 0x10ca02d0 */
  push32(0x10ca01f1u); f_10ca02d0();
  /* 10ca01f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca01f4 jmp 0x10ca0218 */
  goto L_10ca0218;
L_10ca01f6:;
  /* 10ca01f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca01f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca01fb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10ca01fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0201 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca0203 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0206 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0209 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ca020b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca020e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca0210 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca0213 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0216 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ca0218:;
  /* 10ca0218 pop esi */
  ESI = (pop32());
  /* 10ca0219 mov esp, ebp */
  ESP = (EBP);
  /* 10ca021b pop ebp */
  EBP = (pop32());
  /* 10ca021c ret  */
  ESPCHK(0x10c9fcb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10ca02d0 (72 bytes, 30 insns) */
void f_10ca02d0(void) {
  FTRACE(0x10ca02d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca02d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca02d1 mov ebp, esp */
  EBP = (ESP);
L_10ca02d3:;
  /* 10ca02d3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca02d6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca02d9 je 0x10ca0316 */
  if (C.zf) goto L_10ca0316;
  /* 10ca02db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca02de movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ca02e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca02e3 je 0x10ca0316 */
  if (C.zf) goto L_10ca0316;
  /* 10ca02e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca02e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca02ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca02ed mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca02ef mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ca02f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca02f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca02f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca02f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca02fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ca02fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0301 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0304 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ca0307 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca030a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca030c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca030f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0312 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ca0314 jmp 0x10ca02d3 */
  goto L_10ca02d3;
L_10ca0316:;
  /* 10ca0316 pop ebp */
  EBP = (pop32());
  /* 10ca0317 ret  */
  ESPCHK(0x10ca02d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010320 @ 0x10ca0320 (173 bytes, 64 insns) */
void f_10ca0320(void) {
  FTRACE(0x10ca0320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca0320 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca0321 mov ebp, esp */
  EBP = (ESP);
  /* 10ca0323 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ca032b cmp dword ptr [0x10cbe778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0332 je 0x10ca034a */
  if (C.zf) goto L_10ca034a;
  /* 10ca0334 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0337 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0338 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca033b push ecx */
  push32((uint32_t)(ECX));
  /* 10ca033c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca033f push edx */
  push32((uint32_t)(EDX));
  /* 10ca0340 call 0x10ca03d0 */
  push32(0x10ca0345u); f_10ca03d0();
  /* 10ca0345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0348 jmp 0x10ca03c9 */
  goto L_10ca03c9;
L_10ca034a:;
  /* 10ca034a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca034d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0350 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0352 jae 0x10ca03c0 */
  if (!C.cf) goto L_10ca03c0;
  /* 10ca0354 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0357 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca035a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10ca035d jmp 0x10ca0368 */
  goto L_10ca0368;
L_10ca035f:;
  /* 10ca035f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0362 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca0365 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10ca0368:;
  /* 10ca0368 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca036b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca036e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca0370 je 0x10ca03a4 */
  if (C.zf) goto L_10ca03a4;
  /* 10ca0372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0375 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca0376 mov ecx, 0xa */
  ECX = (0xau);
  /* 10ca037b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ca037d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0380 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0383 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca0385 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0388 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10ca038b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca038e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca038f mov ecx, 0xa */
  ECX = (0xau);
  /* 10ca0394 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ca0396 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ca0399 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca039c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca039f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ca03a2 jmp 0x10ca035f */
  goto L_10ca035f;
L_10ca03a4:;
  /* 10ca03a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca03a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca03a9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca03ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca03af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ca03b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca03b4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca03b6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca03b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca03bc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ca03be jmp 0x10ca03c9 */
  goto L_10ca03c9;
L_10ca03c0:;
  /* 10ca03c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca03c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ca03c9:;
  /* 10ca03c9 mov esp, ebp */
  ESP = (EBP);
  /* 10ca03cb pop ebp */
  EBP = (pop32());
  /* 10ca03cc ret  */
  ESPCHK(0x10ca0320u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10ca03d0 (172 bytes, 65 insns) */
void f_10ca03d0(void) {
  FTRACE(0x10ca03d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca03d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca03d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca03d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca03d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca03d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca03db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca03de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca03e1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca03e4 jbe 0x10ca042b */
  if ((C.cf||C.zf)) goto L_10ca042b;
L_10ca03e6:;
  /* 10ca03e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca03e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca03ea mov ecx, 0xa */
  ECX = (0xau);
  /* 10ca03ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ca03f1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca03f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca03f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ca03f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca03fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca03ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca0402 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0405 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca0407 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca040a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca040d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ca040f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0412 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca0413 mov ecx, 0xa */
  ECX = (0xau);
  /* 10ca0418 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ca041a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ca041d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0421 jle 0x10ca042b */
  if ((C.zf||C.sf!=C.of)) goto L_10ca042b;
  /* 10ca0423 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0426 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0429 ja 0x10ca03e6 */
  if ((!C.cf&&!C.zf)) goto L_10ca03e6;
L_10ca042b:;
  /* 10ca042b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca042e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca0430 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ca0433 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0436 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca0439 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ca043b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca043e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca0441 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ca0444:;
  /* 10ca0444 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca0447 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca0449 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10ca044c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca044f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca0452 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca0454 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ca0456 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca0459 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca045c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca045f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca0462 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ca0465 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10ca0467 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca046a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca046d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ca0470 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca0473 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0476 jb 0x10ca0444 */
  if (C.cf) goto L_10ca0444;
  /* 10ca0478 mov esp, ebp */
  ESP = (EBP);
  /* 10ca047a pop ebp */
  EBP = (pop32());
  /* 10ca047b ret  */
  ESPCHK(0x10ca03d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010480 @ 0x10ca0480 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10ca0480(void) {
  FTRACE(0x10ca0480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca0480 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca0481 mov ebp, esp */
  EBP = (ESP);
  /* 10ca0483 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10ca0486:;
  /* 10ca0486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0489 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ca048c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca048e je 0x10ca08fc */
  if (C.zf) goto L_10ca08fc;
  /* 10ca0494 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0497 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca049a je 0x10ca08fc */
  if (C.zf) goto L_10ca08fc;
  /* 10ca04a0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ca04a4 mov dword ptr [0x10cbe778], 0 */
  w32((uint32_t)(0x10cbe778), (0x0u));
  /* 10ca04ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ca04b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca04b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca04bb jmp 0x10ca04c6 */
  goto L_10ca04c6;
L_10ca04bd:;
  /* 10ca04bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca04c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca04c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ca04c6:;
  /* 10ca04c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca04c9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ca04cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca04cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ca04d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca04d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca04d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca04db cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca04dd jne 0x10ca04e1 */
  if (!C.zf) goto L_10ca04e1;
  /* 10ca04df jmp 0x10ca04bd */
  goto L_10ca04bd;
L_10ca04e1:;
  /* 10ca04e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca04e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca04e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ca04ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca04ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ca04f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ca04f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ca04f6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca04f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ca04fc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0500 ja 0x10ca0850 */
  if ((!C.cf&&!C.zf)) goto L_10ca0850;
  /* 10ca0506 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ca0509 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca050b mov al, byte ptr [ecx + 0x10ca092c] */
  AL = (r8((uint32_t)(ECX + 0x10ca092c)));
  /* 10ca0511 jmp dword ptr [eax*4 + 0x10ca0900] */
  switch (EAX) {
    case 0: goto L_10ca076f;
    case 1: goto L_10ca0653;
    case 2: goto L_10ca05de;
    case 3: goto L_10ca0518;
    case 4: goto L_10ca0556;
    case 5: goto L_10ca05b7;
    case 6: goto L_10ca0605;
    case 7: goto L_10ca062c;
    case 8: goto L_10ca069a;
    case 9: goto L_10ca0594;
    case 10: goto L_10ca0850;
    default: x86_unimpl("switch@0x10ca0511 out of table"); return;
  }
L_10ca0518:;
  /* 10ca0518 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca051b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ca051e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca0521 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca0524 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ca0527 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca052b ja 0x10ca0551 */
  if ((!C.cf&&!C.zf)) goto L_10ca0551;
  /* 10ca052d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca0530 jmp dword ptr [ecx*4 + 0x10ca097f] */
  switch (ECX) {
    case 0: goto L_10ca0537;
    case 1: goto L_10ca0541;
    case 2: goto L_10ca0547;
    case 3: goto L_10ca054d;
    case 4: goto L_10ca0575;
    case 5: goto L_10ca057f;
    case 6: goto L_10ca0585;
    case 7: goto L_10ca058b;
    default: x86_unimpl("switch@0x10ca0530 out of table"); return;
  }
L_10ca0537:;
  /* 10ca0537 mov dword ptr [0x10cbe778], 1 */
  w32((uint32_t)(0x10cbe778), (0x1u));
L_10ca0541:;
  /* 10ca0541 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10ca0545 jmp 0x10ca0551 */
  goto L_10ca0551;
L_10ca0547:;
  /* 10ca0547 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10ca054b jmp 0x10ca0551 */
  goto L_10ca0551;
L_10ca054d:;
  /* 10ca054d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10ca0551:;
  /* 10ca0551 jmp 0x10ca0850 */
  goto L_10ca0850;
L_10ca0556:;
  /* 10ca0556 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca0559 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ca055c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ca055f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca0562 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ca0565 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0569 ja 0x10ca058f */
  if ((!C.cf&&!C.zf)) goto L_10ca058f;
  /* 10ca056b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ca056e jmp dword ptr [ecx*4 + 0x10ca098f] */
  switch (ECX) {
    case 0: goto L_10ca0575;
    case 1: goto L_10ca057f;
    case 2: goto L_10ca0585;
    case 3: goto L_10ca058b;
    default: x86_unimpl("switch@0x10ca056e out of table"); return;
  }
L_10ca0575:;
  /* 10ca0575 mov dword ptr [0x10cbe778], 1 */
  w32((uint32_t)(0x10cbe778), (0x1u));
L_10ca057f:;
  /* 10ca057f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10ca0583 jmp 0x10ca058f */
  goto L_10ca058f;
L_10ca0585:;
  /* 10ca0585 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10ca0589 jmp 0x10ca058f */
  goto L_10ca058f;
L_10ca058b:;
  /* 10ca058b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10ca058f:;
  /* 10ca058f jmp 0x10ca0850 */
  goto L_10ca0850;
L_10ca0594:;
  /* 10ca0594 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca0597 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ca059a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca059e je 0x10ca05a8 */
  if (C.zf) goto L_10ca05a8;
  /* 10ca05a0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca05a4 je 0x10ca05ae */
  if (C.zf) goto L_10ca05ae;
  /* 10ca05a6 jmp 0x10ca05b2 */
  goto L_10ca05b2;
L_10ca05a8:;
  /* 10ca05a8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10ca05ac jmp 0x10ca05b2 */
  goto L_10ca05b2;
L_10ca05ae:;
  /* 10ca05ae mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10ca05b2:;
  /* 10ca05b2 jmp 0x10ca0850 */
  goto L_10ca0850;
L_10ca05b7:;
  /* 10ca05b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca05ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ca05bd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca05c1 je 0x10ca05cb */
  if (C.zf) goto L_10ca05cb;
  /* 10ca05c3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca05c7 je 0x10ca05d5 */
  if (C.zf) goto L_10ca05d5;
  /* 10ca05c9 jmp 0x10ca05d9 */
  goto L_10ca05d9;
L_10ca05cb:;
  /* 10ca05cb mov dword ptr [0x10cbe778], 1 */
  w32((uint32_t)(0x10cbe778), (0x1u));
L_10ca05d5:;
  /* 10ca05d5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10ca05d9:;
  /* 10ca05d9 jmp 0x10ca0850 */
  goto L_10ca0850;
L_10ca05de:;
  /* 10ca05de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca05e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10ca05e4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca05e8 je 0x10ca05f2 */
  if (C.zf) goto L_10ca05f2;
  /* 10ca05ea cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca05ee je 0x10ca05fc */
  if (C.zf) goto L_10ca05fc;
  /* 10ca05f0 jmp 0x10ca0600 */
  goto L_10ca0600;
L_10ca05f2:;
  /* 10ca05f2 mov dword ptr [0x10cbe778], 1 */
  w32((uint32_t)(0x10cbe778), (0x1u));
L_10ca05fc:;
  /* 10ca05fc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10ca0600:;
  /* 10ca0600 jmp 0x10ca0850 */
  goto L_10ca0850;
L_10ca0605:;
  /* 10ca0605 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca0608 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10ca060b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca060f je 0x10ca0619 */
  if (C.zf) goto L_10ca0619;
  /* 10ca0611 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0615 je 0x10ca0623 */
  if (C.zf) goto L_10ca0623;
  /* 10ca0617 jmp 0x10ca0627 */
  goto L_10ca0627;
L_10ca0619:;
  /* 10ca0619 mov dword ptr [0x10cbe778], 1 */
  w32((uint32_t)(0x10cbe778), (0x1u));
L_10ca0623:;
  /* 10ca0623 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10ca0627:;
  /* 10ca0627 jmp 0x10ca0850 */
  goto L_10ca0850;
L_10ca062c:;
  /* 10ca062c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca062f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10ca0632 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0636 je 0x10ca0640 */
  if (C.zf) goto L_10ca0640;
  /* 10ca0638 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca063c je 0x10ca064a */
  if (C.zf) goto L_10ca064a;
  /* 10ca063e jmp 0x10ca064e */
  goto L_10ca064e;
L_10ca0640:;
  /* 10ca0640 mov dword ptr [0x10cbe778], 1 */
  w32((uint32_t)(0x10cbe778), (0x1u));
L_10ca064a:;
  /* 10ca064a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10ca064e:;
  /* 10ca064e jmp 0x10ca0850 */
  goto L_10ca0850;
L_10ca0653:;
  /* 10ca0653 push 0x10cba7bc */
  push32((uint32_t)(0x10cba7bcu));
  /* 10ca0658 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca065b push ecx */
  push32((uint32_t)(ECX));
  /* 10ca065c call 0x10ca0eb0 */
  push32(0x10ca0661u); f_10ca0eb0();
  /* 10ca0661 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca0666 jne 0x10ca0673 */
  if (!C.zf) goto L_10ca0673;
  /* 10ca0668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca066b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca066e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ca0671 jmp 0x10ca0691 */
  goto L_10ca0691;
L_10ca0673:;
  /* 10ca0673 push 0x10cba7b8 */
  push32((uint32_t)(0x10cba7b8u));
  /* 10ca0678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca067b push eax */
  push32((uint32_t)(EAX));
  /* 10ca067c call 0x10ca0eb0 */
  push32(0x10ca0681u); f_10ca0eb0();
  /* 10ca0681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca0686 jne 0x10ca0691 */
  if (!C.zf) goto L_10ca0691;
  /* 10ca0688 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca068b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca068e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ca0691:;
  /* 10ca0691 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10ca0695 jmp 0x10ca0850 */
  goto L_10ca0850;
L_10ca069a:;
  /* 10ca069a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca069d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca06a1 jg 0x10ca06b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ca06b1;
  /* 10ca06a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca06a6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10ca06ac mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ca06af jmp 0x10ca06bd */
  goto L_10ca06bd;
L_10ca06b1:;
  /* 10ca06b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca06b4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10ca06ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ca06bd:;
  /* 10ca06bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca06c1 jle 0x10ca0764 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca0764;
  /* 10ca06c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca06ca cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca06cd jbe 0x10ca0764 */
  if ((C.cf||C.zf)) goto L_10ca0764;
  /* 10ca06d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca06d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca06d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca06da mov ecx, dword ptr [0x10cbcc98] */
  ECX = (r32((uint32_t)(0x10cbcc98)));
  /* 10ca06e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca06e2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ca06e6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ca06ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca06ee je 0x10ca0727 */
  if (C.zf) goto L_10ca0727;
  /* 10ca06f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca06f3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca06f6 jbe 0x10ca0727 */
  if ((C.cf||C.zf)) goto L_10ca0727;
  /* 10ca06f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca06fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca06fd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca0700 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ca0702 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ca0704 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0707 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca0709 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca070c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca070f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ca0711 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca0714 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0717 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ca071a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca071d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca071f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca0722 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0725 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ca0727:;
  /* 10ca0727 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca072a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca072c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca072f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca0731 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ca0733 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0736 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca0738 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca073b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca073e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ca0740 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca0743 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0746 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ca0749 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca074c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca074e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca0751 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0754 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ca0756 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca0759 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca075c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ca075f jmp 0x10ca06bd */
  goto L_10ca06bd;
L_10ca0764:;
  /* 10ca0764 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca0767 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ca076a jmp 0x10ca0486 */
  goto L_10ca0486;
L_10ca076f:;
  /* 10ca076f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca0772 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ca0775 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca0777 je 0x10ca0842 */
  if (C.zf) goto L_10ca0842;
  /* 10ca077d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0780 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0783 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10ca0786:;
  /* 10ca0786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0789 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ca078c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca078e je 0x10ca0840 */
  if (C.zf) goto L_10ca0840;
  /* 10ca0794 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0797 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca079a je 0x10ca0840 */
  if (C.zf) goto L_10ca0840;
  /* 10ca07a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca07a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ca07a6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca07a9 jne 0x10ca07b9 */
  if (!C.zf) goto L_10ca07b9;
  /* 10ca07ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca07ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca07b1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ca07b4 jmp 0x10ca0840 */
  goto L_10ca0840;
L_10ca07b9:;
  /* 10ca07b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca07bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca07be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ca07c0 mov edx, dword ptr [0x10cbcc98] */
  EDX = (r32((uint32_t)(0x10cbcc98)));
  /* 10ca07c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca07c8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10ca07cc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ca07d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca07d3 je 0x10ca080c */
  if (C.zf) goto L_10ca080c;
  /* 10ca07d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca07d8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca07db jbe 0x10ca080c */
  if ((C.cf||C.zf)) goto L_10ca080c;
  /* 10ca07dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca07e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca07e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca07e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ca07e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ca07e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca07ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca07ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca07f1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca07f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ca07f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca07f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca07fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ca07ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0802 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca0804 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca0807 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca080a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ca080c:;
  /* 10ca080c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca080f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca0811 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0814 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ca0816 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ca0818 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca081b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca081d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0820 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0823 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ca0825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0828 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca082b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ca082e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0831 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca0833 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca0836 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0839 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ca083b jmp 0x10ca0786 */
  goto L_10ca0786;
L_10ca0840:;
  /* 10ca0840 jmp 0x10ca084b */
  goto L_10ca084b;
L_10ca0842:;
  /* 10ca0842 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0845 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0848 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ca084b:;
  /* 10ca084b jmp 0x10ca0486 */
  goto L_10ca0486;
L_10ca0850:;
  /* 10ca0850 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ca0854 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca0856 je 0x10ca087c */
  if (C.zf) goto L_10ca087c;
  /* 10ca0858 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca085b push edx */
  push32((uint32_t)(EDX));
  /* 10ca085c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca085f push eax */
  push32((uint32_t)(EAX));
  /* 10ca0860 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0863 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0864 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0867 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0868 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ca086b push eax */
  push32((uint32_t)(EAX));
  /* 10ca086c call 0x10c9fcb0 */
  push32(0x10ca0871u); f_10c9fcb0();
  /* 10ca0871 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0874 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca0877 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ca087a jmp 0x10ca08f7 */
  goto L_10ca08f7;
L_10ca087c:;
  /* 10ca087c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca087f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0881 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca0883 mov ecx, dword ptr [0x10cbcc98] */
  ECX = (r32((uint32_t)(0x10cbcc98)));
  /* 10ca0889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca088b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ca088f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ca0895 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca0897 je 0x10ca08c8 */
  if (C.zf) goto L_10ca08c8;
  /* 10ca0899 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca089c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca089e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca08a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca08a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ca08a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca08a8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca08aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca08ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca08b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ca08b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca08b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca08b8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ca08bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca08be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca08c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca08c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca08c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ca08c8:;
  /* 10ca08c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca08cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca08cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca08d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ca08d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ca08d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca08d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca08d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca08dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca08df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ca08e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca08e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca08e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ca08ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca08ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca08ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca08f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca08f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ca08f7:;
  /* 10ca08f7 jmp 0x10ca0486 */
  goto L_10ca0486;
L_10ca08fc:;
  /* 10ca08fc mov esp, ebp */
  ESP = (EBP);
  /* 10ca08fe pop ebp */
  EBP = (pop32());
  /* 10ca08ff ret  */
  ESPCHK(0x10ca0480u, _esp0);
  ESP += 4; return;
}

/* FUN_100109a0 @ 0x10ca09a0 (650 bytes, 178 insns) */
void f_10ca09a0(void) {
  FTRACE(0x10ca09a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca09a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca09a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca09a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca09a9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca09ad jne 0x10ca0b09 */
  if (!C.zf) goto L_10ca0b09;
  /* 10ca09b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca09b6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10ca09bc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10ca09c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ca09c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ca09cc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10ca09d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca09d8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ca09de push edx */
  push32((uint32_t)(EDX));
  /* 10ca09df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca09e2 push eax */
  push32((uint32_t)(EAX));
  /* 10ca09e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca09e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca09e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca09ea push edx */
  push32((uint32_t)(EDX));
  /* 10ca09eb call 0x10ca1dc0 */
  push32(0x10ca09f0u); f_10ca1dc0();
  /* 10ca09f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca09f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ca09f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca09fa jne 0x10ca0a8f */
  if (!C.zf) goto L_10ca0a8f;
  /* 10ca0a00 call dword ptr [0x10cc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0278))), 0x10ca0a06u);
  /* 10ca0a06 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0a09 je 0x10ca0a10 */
  if (C.zf) goto L_10ca0a10;
  /* 10ca0a0b jmp 0x10ca0aed */
  goto L_10ca0aed;
L_10ca0a10:;
  /* 10ca0a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0a16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0a19 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0a1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0a1d push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0a1e call 0x10ca1dc0 */
  push32(0x10ca0a23u); f_10ca1dc0();
  /* 10ca0a23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0a26 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10ca0a2c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0a33 jne 0x10ca0a3a */
  if (!C.zf) goto L_10ca0a3a;
  /* 10ca0a35 jmp 0x10ca0aed */
  goto L_10ca0aed;
L_10ca0a3a:;
  /* 10ca0a3a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10ca0a3c push 0x10cba7c4 */
  push32((uint32_t)(0x10cba7c4u));
  /* 10ca0a41 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca0a43 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ca0a49 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0a4a call 0x10c927e0 */
  push32(0x10ca0a4fu); f_10c927e0();
  /* 10ca0a4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0a52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ca0a55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0a59 jne 0x10ca0a60 */
  if (!C.zf) goto L_10ca0a60;
  /* 10ca0a5b jmp 0x10ca0aed */
  goto L_10ca0aed;
L_10ca0a60:;
  /* 10ca0a60 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ca0a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0a69 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ca0a6f push eax */
  push32((uint32_t)(EAX));
  /* 10ca0a70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca0a73 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0a74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0a77 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0a78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0a7b push eax */
  push32((uint32_t)(EAX));
  /* 10ca0a7c call 0x10ca1dc0 */
  push32(0x10ca0a81u); f_10ca1dc0();
  /* 10ca0a81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0a84 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ca0a87 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0a8b jne 0x10ca0a8f */
  if (!C.zf) goto L_10ca0a8f;
  /* 10ca0a8d jmp 0x10ca0aed */
  goto L_10ca0aed;
L_10ca0a8f:;
  /* 10ca0a8f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10ca0a91 push 0x10cba7c4 */
  push32((uint32_t)(0x10cba7c4u));
  /* 10ca0a96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca0a98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca0a9b push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0a9c call 0x10c927e0 */
  push32(0x10ca0aa1u); f_10c927e0();
  /* 10ca0aa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0aa4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ca0aaa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ca0aac mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ca0ab2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0ab5 jne 0x10ca0ab9 */
  if (!C.zf) goto L_10ca0ab9;
  /* 10ca0ab7 jmp 0x10ca0aed */
  goto L_10ca0aed;
L_10ca0ab9:;
  /* 10ca0ab9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca0abc push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0abd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca0ac0 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0ac1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ca0ac7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca0ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0aca call 0x10c96000 */
  push32(0x10ca0acfu); f_10c96000();
  /* 10ca0acf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0ad2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0ad6 je 0x10ca0ae6 */
  if (C.zf) goto L_10ca0ae6;
  /* 10ca0ad8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca0ada mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca0add push edx */
  push32((uint32_t)(EDX));
  /* 10ca0ade call 0x10c93270 */
  push32(0x10ca0ae3u); f_10c93270();
  /* 10ca0ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca0ae6:;
  /* 10ca0ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0ae8 jmp 0x10ca0c26 */
  goto L_10ca0c26;
L_10ca0aed:;
  /* 10ca0aed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0af1 je 0x10ca0b01 */
  if (C.zf) goto L_10ca0b01;
  /* 10ca0af3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca0af5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca0af8 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0af9 call 0x10c93270 */
  push32(0x10ca0afeu); f_10c93270();
  /* 10ca0afe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca0b01:;
  /* 10ca0b01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0b04 jmp 0x10ca0c26 */
  goto L_10ca0c26;
L_10ca0b09:;
  /* 10ca0b09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0b0d jne 0x10ca0c23 */
  if (!C.zf) goto L_10ca0c23;
  /* 10ca0b13 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10ca0b1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0b20 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10ca0b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0b28 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10ca0b2e push edx */
  push32((uint32_t)(EDX));
  /* 10ca0b2f push 0x10cbe690 */
  push32((uint32_t)(0x10cbe690u));
  /* 10ca0b34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0b37 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0b38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0b3b push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0b3c call 0x10ca1c20 */
  push32(0x10ca0b41u); f_10ca1c20();
  /* 10ca0b41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca0b46 jne 0x10ca0b50 */
  if (!C.zf) goto L_10ca0b50;
  /* 10ca0b48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0b4b jmp 0x10ca0c26 */
  goto L_10ca0c26;
L_10ca0b50:;
  /* 10ca0b50 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ca0b56 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10ca0b59 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10ca0b63 jmp 0x10ca0b74 */
  goto L_10ca0b74;
L_10ca0b65:;
  /* 10ca0b65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ca0b6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0b6e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10ca0b74:;
  /* 10ca0b74 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0b7b jge 0x10ca0c1f */
  if ((C.sf==C.of)) goto L_10ca0c1f;
  /* 10ca0b81 cmp dword ptr [0x10cbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0b88 jle 0x10ca0bbb */
  if ((C.zf||C.sf!=C.of)) goto L_10ca0bbb;
  /* 10ca0b8a push 4 */
  push32((uint32_t)(0x4u));
  /* 10ca0b8c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ca0b92 mov dl, byte ptr [ecx*2 + 0x10cbe690] */
  DL = (r8((uint32_t)(ECX*2 + 0x10cbe690)));
  /* 10ca0b99 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10ca0b9f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10ca0ba5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0baa push eax */
  push32((uint32_t)(EAX));
  /* 10ca0bab call 0x10c987f0 */
  push32(0x10ca0bb0u); f_10c987f0();
  /* 10ca0bb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0bb3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10ca0bb9 jmp 0x10ca0bee */
  goto L_10ca0bee;
L_10ca0bbb:;
  /* 10ca0bbb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ca0bc1 mov dl, byte ptr [ecx*2 + 0x10cbe690] */
  DL = (r8((uint32_t)(ECX*2 + 0x10cbe690)));
  /* 10ca0bc8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10ca0bce mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10ca0bd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0bd9 mov ecx, dword ptr [0x10cbcc98] */
  ECX = (r32((uint32_t)(0x10cbcc98)));
  /* 10ca0bdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca0be1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ca0be5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ca0be8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10ca0bee:;
  /* 10ca0bee cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0bf5 je 0x10ca0c18 */
  if (C.zf) goto L_10ca0c18;
  /* 10ca0bf7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ca0bfd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ca0c00 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca0c03 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10ca0c0a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10ca0c0e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ca0c14 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ca0c16 jmp 0x10ca0c1a */
  goto L_10ca0c1a;
L_10ca0c18:;
  /* 10ca0c18 jmp 0x10ca0c1f */
  goto L_10ca0c1f;
L_10ca0c1a:;
  /* 10ca0c1a jmp 0x10ca0b65 */
  goto L_10ca0b65;
L_10ca0c1f:;
  /* 10ca0c1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0c21 jmp 0x10ca0c26 */
  goto L_10ca0c26;
L_10ca0c23:;
  /* 10ca0c23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ca0c26:;
  /* 10ca0c26 mov esp, ebp */
  ESP = (EBP);
  /* 10ca0c28 pop ebp */
  EBP = (pop32());
  /* 10ca0c29 ret  */
  ESPCHK(0x10ca09a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c30 @ 0x10ca0c30 (10 bytes, 5 insns) */
void f_10ca0c30(void) {
  FTRACE(0x10ca0c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca0c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca0c31 mov ebp, esp */
  EBP = (ESP);
  /* 10ca0c33 mov eax, dword ptr [0x10cbdd88] */
  EAX = (r32((uint32_t)(0x10cbdd88)));
  /* 10ca0c38 pop ebp */
  EBP = (pop32());
  /* 10ca0c39 ret  */
  ESPCHK(0x10ca0c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c40 @ 0x10ca0c40 (575 bytes, 196 insns) */
void f_10ca0c40(void) {
  FTRACE(0x10ca0c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca0c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca0c41 mov ebp, esp */
  EBP = (ESP);
  /* 10ca0c43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca0c45 push 0x10cba7d0 */
  push32((uint32_t)(0x10cba7d0u));
  /* 10ca0c4a push 0x10c9b8e8 */
  push32((uint32_t)(0x10c9b8e8u));
  /* 10ca0c4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ca0c55 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0c56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ca0c5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0c60 push ebx */
  push32((uint32_t)(EBX));
  /* 10ca0c61 push esi */
  push32((uint32_t)(ESI));
  /* 10ca0c62 push edi */
  push32((uint32_t)(EDI));
  /* 10ca0c63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ca0c66 cmp dword ptr [0x10cbe69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0c6d jne 0x10ca0cbe */
  if (!C.zf) goto L_10ca0cbe;
  /* 10ca0c6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10ca0c72 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0c73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca0c75 push 0x10cb9f04 */
  push32((uint32_t)(0x10cb9f04u));
  /* 10ca0c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca0c7c call dword ptr [0x10cc02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f8))), 0x10ca0c82u);
  /* 10ca0c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca0c84 je 0x10ca0c92 */
  if (C.zf) goto L_10ca0c92;
  /* 10ca0c86 mov dword ptr [0x10cbe69c], 1 */
  w32((uint32_t)(0x10cbe69c), (0x1u));
  /* 10ca0c90 jmp 0x10ca0cbe */
  goto L_10ca0cbe;
L_10ca0c92:;
  /* 10ca0c92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10ca0c95 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0c96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca0c98 push 0x10cb9f00 */
  push32((uint32_t)(0x10cb9f00u));
  /* 10ca0c9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca0c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0ca1 call dword ptr [0x10cc02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f4))), 0x10ca0ca7u);
  /* 10ca0ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca0ca9 je 0x10ca0cb7 */
  if (C.zf) goto L_10ca0cb7;
  /* 10ca0cab mov dword ptr [0x10cbe69c], 2 */
  w32((uint32_t)(0x10cbe69c), (0x2u));
  /* 10ca0cb5 jmp 0x10ca0cbe */
  goto L_10ca0cbe;
L_10ca0cb7:;
  /* 10ca0cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0cb9 jmp 0x10ca0e99 */
  goto L_10ca0e99;
L_10ca0cbe:;
  /* 10ca0cbe cmp dword ptr [0x10cbe69c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe69c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0cc5 jne 0x10ca0ce2 */
  if (!C.zf) goto L_10ca0ce2;
  /* 10ca0cc7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0cca push edx */
  push32((uint32_t)(EDX));
  /* 10ca0ccb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0cce push eax */
  push32((uint32_t)(EAX));
  /* 10ca0ccf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0cd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0cd6 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0cd7 call dword ptr [0x10cc02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f8))), 0x10ca0cddu);
  /* 10ca0cdd jmp 0x10ca0e99 */
  goto L_10ca0e99;
L_10ca0ce2:;
  /* 10ca0ce2 cmp dword ptr [0x10cbe69c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe69c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0ce9 jne 0x10ca0e97 */
  if (!C.zf) goto L_10ca0e97;
  /* 10ca0cef cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0cf3 jne 0x10ca0cfd */
  if (!C.zf) goto L_10ca0cfd;
  /* 10ca0cf5 mov eax, dword ptr [0x10cbe610] */
  EAX = (r32((uint32_t)(0x10cbe610)));
  /* 10ca0cfa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10ca0cfd:;
  /* 10ca0cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0cff push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0d05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0d08 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0d09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0d0c push edx */
  push32((uint32_t)(EDX));
  /* 10ca0d0d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ca0d12 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca0d15 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0d16 call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10ca0d1cu);
  /* 10ca0d1c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ca0d1f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0d23 jne 0x10ca0d2c */
  if (!C.zf) goto L_10ca0d2c;
  /* 10ca0d25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0d27 jmp 0x10ca0e99 */
  goto L_10ca0e99;
L_10ca0d2c:;
  /* 10ca0d2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ca0d33 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ca0d36 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0d39 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ca0d3b call 0x10c95980 */
  push32(0x10ca0d40u); f_10c95980();
  /* 10ca0d40 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10ca0d43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ca0d46 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ca0d49 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ca0d4c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ca0d4f push edx */
  push32((uint32_t)(EDX));
  /* 10ca0d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0d52 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ca0d55 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0d56 call 0x10c96550 */
  push32(0x10ca0d5bu); f_10c96550();
  /* 10ca0d5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0d5e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ca0d65 jmp 0x10ca0d7e */
  goto L_10ca0d7e;
  /* 10ca0d67 mov eax, 1 */
  EAX = (0x1u);
  /* 10ca0d6c ret  */
  ESPCHK(0x10ca0c40u, _esp0);
  ESP += 4; return;
  /* 10ca0d6d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca0d70 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10ca0d77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ca0d7e:;
  /* 10ca0d7e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0d82 jne 0x10ca0d8b */
  if (!C.zf) goto L_10ca0d8b;
  /* 10ca0d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0d86 jmp 0x10ca0e99 */
  goto L_10ca0e99;
L_10ca0d8b:;
  /* 10ca0d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0d8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0d8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ca0d92 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0d93 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ca0d96 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0d97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0d9a push eax */
  push32((uint32_t)(EAX));
  /* 10ca0d9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0d9e push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0d9f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ca0da4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca0da7 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0da8 call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10ca0daeu);
  /* 10ca0dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca0db0 jne 0x10ca0db9 */
  if (!C.zf) goto L_10ca0db9;
  /* 10ca0db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0db4 jmp 0x10ca0e99 */
  goto L_10ca0e99;
L_10ca0db9:;
  /* 10ca0db9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ca0dc0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ca0dc3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10ca0dc7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0dca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ca0dcc call 0x10c95980 */
  push32(0x10ca0dd1u); f_10c95980();
  /* 10ca0dd1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10ca0dd4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ca0dd7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ca0dda mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ca0ddd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ca0de4 jmp 0x10ca0dfd */
  goto L_10ca0dfd;
  /* 10ca0de6 mov eax, 1 */
  EAX = (0x1u);
  /* 10ca0deb ret  */
  ESPCHK(0x10ca0c40u, _esp0);
  ESP += 4; return;
  /* 10ca0dec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca0def mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ca0df6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ca0dfd:;
  /* 10ca0dfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0e01 jne 0x10ca0e0a */
  if (!C.zf) goto L_10ca0e0a;
  /* 10ca0e03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0e05 jmp 0x10ca0e99 */
  goto L_10ca0e99;
L_10ca0e0a:;
  /* 10ca0e0a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0e0e jne 0x10ca0e19 */
  if (!C.zf) goto L_10ca0e19;
  /* 10ca0e10 mov edx, dword ptr [0x10cbe600] */
  EDX = (r32((uint32_t)(0x10cbe600)));
  /* 10ca0e16 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10ca0e19:;
  /* 10ca0e19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0e1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ca0e1f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10ca0e25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0e28 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ca0e2b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10ca0e32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ca0e35 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0e36 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ca0e39 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0e3a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ca0e3d push eax */
  push32((uint32_t)(EAX));
  /* 10ca0e3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0e41 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0e42 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ca0e45 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0e46 call dword ptr [0x10cc02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f4))), 0x10ca0e4cu);
  /* 10ca0e4c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ca0e4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0e52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ca0e55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca0e57 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10ca0e5c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0e62 je 0x10ca0e78 */
  if (C.zf) goto L_10ca0e78;
  /* 10ca0e64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0e67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ca0e6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca0e6c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ca0e70 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0e76 je 0x10ca0e7c */
  if (C.zf) goto L_10ca0e7c;
L_10ca0e78:;
  /* 10ca0e78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0e7a jmp 0x10ca0e99 */
  goto L_10ca0e99;
L_10ca0e7c:;
  /* 10ca0e7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0e7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ca0e81 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0e82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ca0e85 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca0e86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca0e89 push edx */
  push32((uint32_t)(EDX));
  /* 10ca0e8a call 0x10c9a6d0 */
  push32(0x10ca0e8fu); f_10c9a6d0();
  /* 10ca0e8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0e92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ca0e95 jmp 0x10ca0e99 */
  goto L_10ca0e99;
L_10ca0e97:;
  /* 10ca0e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ca0e99:;
  /* 10ca0e99 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10ca0e9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca0e9f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ca0ea6 pop edi */
  EDI = (pop32());
  /* 10ca0ea7 pop esi */
  ESI = (pop32());
  /* 10ca0ea8 pop ebx */
  EBX = (pop32());
  /* 10ca0ea9 mov esp, ebp */
  ESP = (EBP);
  /* 10ca0eab pop ebp */
  EBP = (pop32());
  /* 10ca0eac ret  */
  ESPCHK(0x10ca0c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010eb0 @ 0x10ca0eb0 (208 bytes, 85 insns) */
void f_10ca0eb0(void) {
  FTRACE(0x10ca0eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca0eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca0eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca0eb3 push edi */
  push32((uint32_t)(EDI));
  /* 10ca0eb4 push esi */
  push32((uint32_t)(ESI));
  /* 10ca0eb5 push ebx */
  push32((uint32_t)(EBX));
  /* 10ca0eb6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0eb9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0ebc lea eax, [0x10cbe5f8] */
  EAX = ((uint32_t)(0x10cbe5f8));
  /* 10ca0ec2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0ec6 jne 0x10ca0f03 */
  if (!C.zf) goto L_10ca0f03;
  /* 10ca0ec8 mov al, 0xff */
  AL = (0xffu);
  /* 10ca0eca mov edi, edi */
  EDI = (EDI);
L_10ca0ecc:;
  /* 10ca0ecc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ca0ece je 0x10ca0efe */
  if (C.zf) goto L_10ca0efe;
  /* 10ca0ed0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ca0ed2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ca0ed3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10ca0ed5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ca0ed6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0ed8 je 0x10ca0ecc */
  if (C.zf) goto L_10ca0ecc;
  /* 10ca0eda sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ca0edc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0ede sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ca0ee0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10ca0ee3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ca0ee5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ca0ee7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10ca0ee9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ca0eeb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0eed sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ca0eef and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10ca0ef2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ca0ef4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ca0ef6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0ef8 je 0x10ca0ecc */
  if (C.zf) goto L_10ca0ecc;
  /* 10ca0efa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ca0efc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10ca0efe:;
  /* 10ca0efe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10ca0f01 jmp 0x10ca0f7b */
  goto L_10ca0f7b;
L_10ca0f03:;
  /* 10ca0f03 lock inc dword ptr [0x10cbe78c] */
  x86_unimpl("lock inc @ 0x10ca0f03");
  /* 10ca0f0a cmp dword ptr [0x10cbe77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0f11 jg 0x10ca0f17 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ca0f17;
  /* 10ca0f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca0f15 jmp 0x10ca0f2c */
  goto L_10ca0f2c;
L_10ca0f17:;
  /* 10ca0f17 lock dec dword ptr [0x10cbe78c] */
  x86_unimpl("lock dec @ 0x10ca0f17");
  /* 10ca0f1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ca0f20 call 0x10c961e0 */
  push32(0x10ca0f25u); f_10c961e0();
  /* 10ca0f25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10ca0f2c:;
  /* 10ca0f2c mov eax, 0xff */
  EAX = (0xffu);
  /* 10ca0f31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ca0f33 nop  */
  /* nop */
L_10ca0f34:;
  /* 10ca0f34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ca0f36 je 0x10ca0f5f */
  if (C.zf) goto L_10ca0f5f;
  /* 10ca0f38 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ca0f3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ca0f3b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10ca0f3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ca0f3e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0f40 je 0x10ca0f34 */
  if (C.zf) goto L_10ca0f34;
  /* 10ca0f42 push eax */
  push32((uint32_t)(EAX));
  /* 10ca0f43 push ebx */
  push32((uint32_t)(EBX));
  /* 10ca0f44 call 0x10ca2020 */
  push32(0x10ca0f49u); f_10ca2020();
  /* 10ca0f49 mov ebx, eax */
  EBX = (EAX);
  /* 10ca0f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0f4e call 0x10ca2020 */
  push32(0x10ca0f53u); f_10ca2020();
  /* 10ca0f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca0f56 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0f58 je 0x10ca0f34 */
  if (C.zf) goto L_10ca0f34;
  /* 10ca0f5a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca0f5c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10ca0f5f:;
  /* 10ca0f5f mov ebx, eax */
  EBX = (EAX);
  /* 10ca0f61 pop eax */
  EAX = (pop32());
  /* 10ca0f62 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca0f64 jne 0x10ca0f6f */
  if (!C.zf) goto L_10ca0f6f;
  /* 10ca0f66 lock dec dword ptr [0x10cbe78c] */
  x86_unimpl("lock dec @ 0x10ca0f66");
  /* 10ca0f6d jmp 0x10ca0f79 */
  goto L_10ca0f79;
L_10ca0f6f:;
  /* 10ca0f6f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ca0f71 call 0x10c96280 */
  push32(0x10ca0f76u); f_10c96280();
  /* 10ca0f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca0f79:;
  /* 10ca0f79 mov eax, ebx */
  EAX = (EBX);
L_10ca0f7b:;
  /* 10ca0f7b pop ebx */
  EBX = (pop32());
  /* 10ca0f7c pop esi */
  ESI = (pop32());
  /* 10ca0f7d pop edi */
  EDI = (pop32());
  /* 10ca0f7e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ca0f7f ret  */
  ESPCHK(0x10ca0eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f80 @ 0x10ca0f80 (257 bytes, 103 insns) */
void f_10ca0f80(void) {
  FTRACE(0x10ca0f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca0f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca0f81 mov ebp, esp */
  EBP = (ESP);
  /* 10ca0f83 push edi */
  push32((uint32_t)(EDI));
  /* 10ca0f84 push esi */
  push32((uint32_t)(ESI));
  /* 10ca0f85 push ebx */
  push32((uint32_t)(EBX));
  /* 10ca0f86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca0f89 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca0f8b je 0x10ca107a */
  if (C.zf) goto L_10ca107a;
  /* 10ca0f91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca0f94 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca0f97 lea eax, [0x10cbe5f8] */
  EAX = ((uint32_t)(0x10cbe5f8));
  /* 10ca0f9d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0fa1 jne 0x10ca0ff1 */
  if (!C.zf) goto L_10ca0ff1;
  /* 10ca0fa3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10ca0fa5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10ca0fa7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10ca0fa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ca0fac:;
  /* 10ca0fac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10ca0fae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10ca0fb0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10ca0fb2 je 0x10ca0fd5 */
  if (C.zf) goto L_10ca0fd5;
  /* 10ca0fb4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ca0fb6 je 0x10ca0fd5 */
  if (C.zf) goto L_10ca0fd5;
  /* 10ca0fb8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ca0fb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ca0fba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0fbc jb 0x10ca0fc4 */
  if (C.cf) goto L_10ca0fc4;
  /* 10ca0fbe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0fc0 ja 0x10ca0fc4 */
  if ((!C.cf&&!C.zf)) goto L_10ca0fc4;
  /* 10ca0fc2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10ca0fc4:;
  /* 10ca0fc4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0fc6 jb 0x10ca0fce */
  if (C.cf) goto L_10ca0fce;
  /* 10ca0fc8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0fca ja 0x10ca0fce */
  if ((!C.cf&&!C.zf)) goto L_10ca0fce;
  /* 10ca0fcc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10ca0fce:;
  /* 10ca0fce cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0fd0 jne 0x10ca0fdf */
  if (!C.zf) goto L_10ca0fdf;
  /* 10ca0fd2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ca0fd3 jne 0x10ca0fac */
  if (!C.zf) goto L_10ca0fac;
L_10ca0fd5:;
  /* 10ca0fd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca0fd7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca0fd9 je 0x10ca107a */
  if (C.zf) goto L_10ca107a;
L_10ca0fdf:;
  /* 10ca0fdf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10ca0fe4 jb 0x10ca107a */
  if (C.cf) goto L_10ca107a;
  /* 10ca0fea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ca0fec jmp 0x10ca107a */
  goto L_10ca107a;
L_10ca0ff1:;
  /* 10ca0ff1 lock inc dword ptr [0x10cbe78c] */
  x86_unimpl("lock inc @ 0x10ca0ff1");
  /* 10ca0ff8 cmp dword ptr [0x10cbe77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca0fff jg 0x10ca1005 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ca1005;
  /* 10ca1001 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1003 jmp 0x10ca101e */
  goto L_10ca101e;
L_10ca1005:;
  /* 10ca1005 lock dec dword ptr [0x10cbe78c] */
  x86_unimpl("lock dec @ 0x10ca1005");
  /* 10ca100c mov ebx, ecx */
  EBX = (ECX);
  /* 10ca100e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ca1010 call 0x10c961e0 */
  push32(0x10ca1015u); f_10c961e0();
  /* 10ca1015 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10ca101c mov ecx, ebx */
  ECX = (EBX);
L_10ca101e:;
  /* 10ca101e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1020 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ca1022 mov edi, edi */
  EDI = (EDI);
L_10ca1024:;
  /* 10ca1024 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ca1026 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1028 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10ca102a je 0x10ca104f */
  if (C.zf) goto L_10ca104f;
  /* 10ca102c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ca102e je 0x10ca104f */
  if (C.zf) goto L_10ca104f;
  /* 10ca1030 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ca1031 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ca1032 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1033 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1034 push ebx */
  push32((uint32_t)(EBX));
  /* 10ca1035 call 0x10ca2020 */
  push32(0x10ca103au); f_10ca2020();
  /* 10ca103a mov ebx, eax */
  EBX = (EAX);
  /* 10ca103c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca103f call 0x10ca2020 */
  push32(0x10ca1044u); f_10ca2020();
  /* 10ca1044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1047 pop ecx */
  ECX = (pop32());
  /* 10ca1048 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca104a jne 0x10ca1055 */
  if (!C.zf) goto L_10ca1055;
  /* 10ca104c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ca104d jne 0x10ca1024 */
  if (!C.zf) goto L_10ca1024;
L_10ca104f:;
  /* 10ca104f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca1051 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1053 je 0x10ca105e */
  if (C.zf) goto L_10ca105e;
L_10ca1055:;
  /* 10ca1055 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10ca105a jb 0x10ca105e */
  if (C.cf) goto L_10ca105e;
  /* 10ca105c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10ca105e:;
  /* 10ca105e pop eax */
  EAX = (pop32());
  /* 10ca105f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1061 jne 0x10ca106c */
  if (!C.zf) goto L_10ca106c;
  /* 10ca1063 lock dec dword ptr [0x10cbe78c] */
  x86_unimpl("lock dec @ 0x10ca1063");
  /* 10ca106a jmp 0x10ca107a */
  goto L_10ca107a;
L_10ca106c:;
  /* 10ca106c mov ebx, ecx */
  EBX = (ECX);
  /* 10ca106e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ca1070 call 0x10c96280 */
  push32(0x10ca1075u); f_10c96280();
  /* 10ca1075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1078 mov ecx, ebx */
  ECX = (EBX);
L_10ca107a:;
  /* 10ca107a mov eax, ecx */
  EAX = (ECX);
  /* 10ca107c pop ebx */
  EBX = (pop32());
  /* 10ca107d pop esi */
  ESI = (pop32());
  /* 10ca107e pop edi */
  EDI = (pop32());
  /* 10ca107f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ca1080 ret  */
  ESPCHK(0x10ca0f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011090 @ 0x10ca1090 (255 bytes, 88 insns) */
void f_10ca1090(void) {
  FTRACE(0x10ca1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca1090 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca1091 mov ebp, esp */
  EBP = (ESP);
  /* 10ca1093 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10ca1096:;
  /* 10ca1096 cmp dword ptr [0x10cbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca109d jle 0x10ca10b6 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca10b6;
  /* 10ca109f push 8 */
  push32((uint32_t)(0x8u));
  /* 10ca10a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca10a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca10a6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ca10a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca10a9 call 0x10c987f0 */
  push32(0x10ca10aeu); f_10c987f0();
  /* 10ca10ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca10b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ca10b4 jmp 0x10ca10cf */
  goto L_10ca10cf;
L_10ca10b6:;
  /* 10ca10b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca10b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca10bb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca10bd mov ecx, dword ptr [0x10cbcc98] */
  ECX = (r32((uint32_t)(0x10cbcc98)));
  /* 10ca10c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca10c5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ca10c9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ca10cc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ca10cf:;
  /* 10ca10cf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca10d3 je 0x10ca10e0 */
  if (C.zf) goto L_10ca10e0;
  /* 10ca10d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca10d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca10db mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ca10de jmp 0x10ca1096 */
  goto L_10ca1096;
L_10ca10e0:;
  /* 10ca10e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca10e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca10e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ca10e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ca10ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca10ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca10f0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ca10f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca10f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ca10f9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca10fd je 0x10ca1105 */
  if (C.zf) goto L_10ca1105;
  /* 10ca10ff cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1103 jne 0x10ca1118 */
  if (!C.zf) goto L_10ca1118;
L_10ca1105:;
  /* 10ca1105 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca110a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca110c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca110f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1112 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1115 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ca1118:;
  /* 10ca1118 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ca111f:;
  /* 10ca111f cmp dword ptr [0x10cbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1126 jle 0x10ca113b */
  if ((C.zf||C.sf!=C.of)) goto L_10ca113b;
  /* 10ca1128 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ca112a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca112d push edx */
  push32((uint32_t)(EDX));
  /* 10ca112e call 0x10c987f0 */
  push32(0x10ca1133u); f_10c987f0();
  /* 10ca1133 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1136 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ca1139 jmp 0x10ca1150 */
  goto L_10ca1150;
L_10ca113b:;
  /* 10ca113b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca113e mov ecx, dword ptr [0x10cbcc98] */
  ECX = (r32((uint32_t)(0x10cbcc98)));
  /* 10ca1144 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca1146 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ca114a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ca114d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ca1150:;
  /* 10ca1150 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1154 je 0x10ca117b */
  if (C.zf) goto L_10ca117b;
  /* 10ca1156 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca1159 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca115c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca115f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10ca1163 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ca1166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1169 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca116b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ca116d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca1170 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1173 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1176 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ca1179 jmp 0x10ca111f */
  goto L_10ca111f;
L_10ca117b:;
  /* 10ca117b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca117f jne 0x10ca1188 */
  if (!C.zf) goto L_10ca1188;
  /* 10ca1181 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca1184 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ca1186 jmp 0x10ca118b */
  goto L_10ca118b;
L_10ca1188:;
  /* 10ca1188 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ca118b:;
  /* 10ca118b mov esp, ebp */
  ESP = (EBP);
  /* 10ca118d pop ebp */
  EBP = (pop32());
  /* 10ca118e ret  */
  ESPCHK(0x10ca1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10011190 @ 0x10ca1190 (17 bytes, 8 insns) */
void f_10ca1190(void) {
  FTRACE(0x10ca1190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca1190 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca1191 mov ebp, esp */
  EBP = (ESP);
  /* 10ca1193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1196 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1197 call 0x10ca1090 */
  push32(0x10ca119cu); f_10ca1090();
  /* 10ca119c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca119f pop ebp */
  EBP = (pop32());
  /* 10ca11a0 ret  */
  ESPCHK(0x10ca1190u, _esp0);
  ESP += 4; return;
}

/* FUN_100111b0 @ 0x10ca11b0 (297 bytes, 106 insns) */
void f_10ca11b0(void) {
  FTRACE(0x10ca11b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca11b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca11b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca11b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca11b6 push esi */
  push32((uint32_t)(ESI));
L_10ca11b7:;
  /* 10ca11b7 cmp dword ptr [0x10cbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca11be jle 0x10ca11d7 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca11d7;
  /* 10ca11c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ca11c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca11c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca11c7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ca11c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca11ca call 0x10c987f0 */
  push32(0x10ca11cfu); f_10c987f0();
  /* 10ca11cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca11d2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ca11d5 jmp 0x10ca11f0 */
  goto L_10ca11f0;
L_10ca11d7:;
  /* 10ca11d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca11da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca11dc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca11de mov ecx, dword ptr [0x10cbcc98] */
  ECX = (r32((uint32_t)(0x10cbcc98)));
  /* 10ca11e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca11e6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ca11ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ca11ed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ca11f0:;
  /* 10ca11f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca11f4 je 0x10ca1201 */
  if (C.zf) goto L_10ca1201;
  /* 10ca11f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca11f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca11fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ca11ff jmp 0x10ca11b7 */
  goto L_10ca11b7;
L_10ca1201:;
  /* 10ca1201 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca1206 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ca1208 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ca120b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca120e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1211 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ca1214 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca1217 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ca121a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca121e je 0x10ca1226 */
  if (C.zf) goto L_10ca1226;
  /* 10ca1220 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1224 jne 0x10ca1239 */
  if (!C.zf) goto L_10ca1239;
L_10ca1226:;
  /* 10ca1226 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1229 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca122b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca122d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca1230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1233 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1236 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ca1239:;
  /* 10ca1239 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ca1240 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ca1247:;
  /* 10ca1247 cmp dword ptr [0x10cbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca124e jle 0x10ca1263 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca1263;
  /* 10ca1250 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ca1252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca1255 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1256 call 0x10c987f0 */
  push32(0x10ca125bu); f_10c987f0();
  /* 10ca125b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca125e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ca1261 jmp 0x10ca1278 */
  goto L_10ca1278;
L_10ca1263:;
  /* 10ca1263 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca1266 mov ecx, dword ptr [0x10cbcc98] */
  ECX = (r32((uint32_t)(0x10cbcc98)));
  /* 10ca126c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca126e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ca1272 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ca1275 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10ca1278:;
  /* 10ca1278 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca127c je 0x10ca12b9 */
  if (C.zf) goto L_10ca12b9;
  /* 10ca127e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1280 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ca1282 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca1285 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1286 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1289 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca128a call 0x10ca2150 */
  push32(0x10ca128fu); f_10ca2150();
  /* 10ca128f mov ecx, eax */
  ECX = (EAX);
  /* 10ca1291 mov esi, edx */
  ESI = (EDX);
  /* 10ca1293 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca1296 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1299 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca129a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca129c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca129e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ca12a1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10ca12a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca12a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca12a9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca12ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca12ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca12b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca12b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ca12b7 jmp 0x10ca1247 */
  goto L_10ca1247;
L_10ca12b9:;
  /* 10ca12b9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca12bd jne 0x10ca12ce */
  if (!C.zf) goto L_10ca12ce;
  /* 10ca12bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca12c2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ca12c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca12c7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca12ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ca12cc jmp 0x10ca12d4 */
  goto L_10ca12d4;
L_10ca12ce:;
  /* 10ca12ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca12d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10ca12d4:;
  /* 10ca12d4 pop esi */
  ESI = (pop32());
  /* 10ca12d5 mov esp, ebp */
  ESP = (EBP);
  /* 10ca12d7 pop ebp */
  EBP = (pop32());
  /* 10ca12d8 ret  */
  ESPCHK(0x10ca11b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112e0 @ 0x10ca12e0 (61 bytes, 18 insns) */
void f_10ca12e0(void) {
  FTRACE(0x10ca12e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca12e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca12e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca12e3 cmp dword ptr [0x10cbe758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca12ea jne 0x10ca131b */
  if (!C.zf) goto L_10ca131b;
  /* 10ca12ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ca12ee call 0x10c961e0 */
  push32(0x10ca12f3u); f_10c961e0();
  /* 10ca12f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca12f6 cmp dword ptr [0x10cbe758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca12fd jne 0x10ca1311 */
  if (!C.zf) goto L_10ca1311;
  /* 10ca12ff call 0x10ca1340 */
  push32(0x10ca1304u); f_10ca1340();
  /* 10ca1304 mov eax, dword ptr [0x10cbe758] */
  EAX = (r32((uint32_t)(0x10cbe758)));
  /* 10ca1309 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca130c mov dword ptr [0x10cbe758], eax */
  w32((uint32_t)(0x10cbe758), (EAX));
L_10ca1311:;
  /* 10ca1311 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ca1313 call 0x10c96280 */
  push32(0x10ca1318u); f_10c96280();
  /* 10ca1318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca131b:;
  /* 10ca131b pop ebp */
  EBP = (pop32());
  /* 10ca131c ret  */
  ESPCHK(0x10ca12e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011320 @ 0x10ca1320 (30 bytes, 11 insns) */
void f_10ca1320(void) {
  FTRACE(0x10ca1320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca1320 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca1321 mov ebp, esp */
  EBP = (ESP);
  /* 10ca1323 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ca1325 call 0x10c961e0 */
  push32(0x10ca132au); f_10c961e0();
  /* 10ca132a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca132d call 0x10ca1340 */
  push32(0x10ca1332u); f_10ca1340();
  /* 10ca1332 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ca1334 call 0x10c96280 */
  push32(0x10ca1339u); f_10c96280();
  /* 10ca1339 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca133c pop ebp */
  EBP = (pop32());
  /* 10ca133d ret  */
  ESPCHK(0x10ca1320u, _esp0);
  ESP += 4; return;
}

/* FUN_10011340 @ 0x10ca1340 (939 bytes, 266 insns) */
void f_10ca1340(void) {
  FTRACE(0x10ca1340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca1340 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca1341 mov ebp, esp */
  EBP = (ESP);
  /* 10ca1343 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1346 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ca134d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ca134f call 0x10c961e0 */
  push32(0x10ca1354u); f_10c961e0();
  /* 10ca1354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1357 mov dword ptr [0x10cbe6a0], 0 */
  w32((uint32_t)(0x10cbe6a0), (0x0u));
  /* 10ca1361 mov dword ptr [0x10cbde38], 0xffffffff */
  w32((uint32_t)(0x10cbde38), (0xffffffffu));
  /* 10ca136b mov eax, dword ptr [0x10cbde38] */
  EAX = (r32((uint32_t)(0x10cbde38)));
  /* 10ca1370 mov dword ptr [0x10cbde28], eax */
  w32((uint32_t)(0x10cbde28), (EAX));
  /* 10ca1375 push 0x10cba830 */
  push32((uint32_t)(0x10cba830u));
  /* 10ca137a call 0x10ca21c0 */
  push32(0x10ca137fu); f_10ca21c0();
  /* 10ca137f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1382 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ca1385 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1389 jne 0x10ca14c3 */
  if (!C.zf) goto L_10ca14c3;
  /* 10ca138f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ca1391 call 0x10c96280 */
  push32(0x10ca1396u); f_10c96280();
  /* 10ca1396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1399 push 0x10cbe6a8 */
  push32((uint32_t)(0x10cbe6a8u));
  /* 10ca139e call dword ptr [0x10cc0220] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0220))), 0x10ca13a4u);
  /* 10ca13a4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca13a7 je 0x10ca14be */
  if (C.zf) goto L_10ca14be;
  /* 10ca13ad mov dword ptr [0x10cbe6a0], 1 */
  w32((uint32_t)(0x10cbe6a0), (0x1u));
  /* 10ca13b7 mov ecx, dword ptr [0x10cbe6a8] */
  ECX = (r32((uint32_t)(0x10cbe6a8)));
  /* 10ca13bd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca13c0 mov dword ptr [0x10cbdd90], ecx */
  w32((uint32_t)(0x10cbdd90), (ECX));
  /* 10ca13c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca13c8 mov dx, word ptr [0x10cbe6ee] */
  DX = (r16((uint32_t)(0x10cbe6ee)));
  /* 10ca13cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca13d1 je 0x10ca13e9 */
  if (C.zf) goto L_10ca13e9;
  /* 10ca13d3 mov eax, dword ptr [0x10cbe6fc] */
  EAX = (r32((uint32_t)(0x10cbe6fc)));
  /* 10ca13d8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca13db mov ecx, dword ptr [0x10cbdd90] */
  ECX = (r32((uint32_t)(0x10cbdd90)));
  /* 10ca13e1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca13e3 mov dword ptr [0x10cbdd90], ecx */
  w32((uint32_t)(0x10cbdd90), (ECX));
L_10ca13e9:;
  /* 10ca13e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca13eb mov dx, word ptr [0x10cbe742] */
  DX = (r16((uint32_t)(0x10cbe742)));
  /* 10ca13f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca13f4 je 0x10ca141e */
  if (C.zf) goto L_10ca141e;
  /* 10ca13f6 cmp dword ptr [0x10cbe750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca13fd je 0x10ca141e */
  if (C.zf) goto L_10ca141e;
  /* 10ca13ff mov dword ptr [0x10cbdd94], 1 */
  w32((uint32_t)(0x10cbdd94), (0x1u));
  /* 10ca1409 mov eax, dword ptr [0x10cbe750] */
  EAX = (r32((uint32_t)(0x10cbe750)));
  /* 10ca140e sub eax, dword ptr [0x10cbe6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbe6fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1414 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1417 mov dword ptr [0x10cbdd98], eax */
  w32((uint32_t)(0x10cbdd98), (EAX));
  /* 10ca141c jmp 0x10ca1432 */
  goto L_10ca1432;
L_10ca141e:;
  /* 10ca141e mov dword ptr [0x10cbdd94], 0 */
  w32((uint32_t)(0x10cbdd94), (0x0u));
  /* 10ca1428 mov dword ptr [0x10cbdd98], 0 */
  w32((uint32_t)(0x10cbdd98), (0x0u));
L_10ca1432:;
  /* 10ca1432 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ca1435 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1436 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1438 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ca143a mov edx, dword ptr [0x10cbde1c] */
  EDX = (r32((uint32_t)(0x10cbde1c)));
  /* 10ca1440 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1441 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca1443 push 0x10cbe6ac */
  push32((uint32_t)(0x10cbe6acu));
  /* 10ca1448 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ca144d mov eax, dword ptr [0x10cbe610] */
  EAX = (r32((uint32_t)(0x10cbe610)));
  /* 10ca1452 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1453 call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10ca1459u);
  /* 10ca1459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca145b je 0x10ca146f */
  if (C.zf) goto L_10ca146f;
  /* 10ca145d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1461 jne 0x10ca146f */
  if (!C.zf) goto L_10ca146f;
  /* 10ca1463 mov ecx, dword ptr [0x10cbde1c] */
  ECX = (r32((uint32_t)(0x10cbde1c)));
  /* 10ca1469 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10ca146d jmp 0x10ca1478 */
  goto L_10ca1478;
L_10ca146f:;
  /* 10ca146f mov edx, dword ptr [0x10cbde1c] */
  EDX = (r32((uint32_t)(0x10cbde1c)));
  /* 10ca1475 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10ca1478:;
  /* 10ca1478 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10ca147b push eax */
  push32((uint32_t)(EAX));
  /* 10ca147c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca147e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ca1480 mov ecx, dword ptr [0x10cbde20] */
  ECX = (r32((uint32_t)(0x10cbde20)));
  /* 10ca1486 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1487 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca1489 push 0x10cbe700 */
  push32((uint32_t)(0x10cbe700u));
  /* 10ca148e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ca1493 mov edx, dword ptr [0x10cbe610] */
  EDX = (r32((uint32_t)(0x10cbe610)));
  /* 10ca1499 push edx */
  push32((uint32_t)(EDX));
  /* 10ca149a call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10ca14a0u);
  /* 10ca14a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca14a2 je 0x10ca14b5 */
  if (C.zf) goto L_10ca14b5;
  /* 10ca14a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca14a8 jne 0x10ca14b5 */
  if (!C.zf) goto L_10ca14b5;
  /* 10ca14aa mov eax, dword ptr [0x10cbde20] */
  EAX = (r32((uint32_t)(0x10cbde20)));
  /* 10ca14af mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10ca14b3 jmp 0x10ca14be */
  goto L_10ca14be;
L_10ca14b5:;
  /* 10ca14b5 mov ecx, dword ptr [0x10cbde20] */
  ECX = (r32((uint32_t)(0x10cbde20)));
  /* 10ca14bb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10ca14be:;
  /* 10ca14be jmp 0x10ca16e7 */
  goto L_10ca16e7;
L_10ca14c3:;
  /* 10ca14c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca14c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ca14c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca14cb je 0x10ca14ed */
  if (C.zf) goto L_10ca14ed;
  /* 10ca14cd cmp dword ptr [0x10cbe754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca14d4 je 0x10ca14fc */
  if (C.zf) goto L_10ca14fc;
  /* 10ca14d6 mov ecx, dword ptr [0x10cbe754] */
  ECX = (r32((uint32_t)(0x10cbe754)));
  /* 10ca14dc push ecx */
  push32((uint32_t)(ECX));
  /* 10ca14dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca14e0 push edx */
  push32((uint32_t)(EDX));
  /* 10ca14e1 call 0x10c9e470 */
  push32(0x10ca14e6u); f_10c9e470();
  /* 10ca14e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca14e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca14eb jne 0x10ca14fc */
  if (!C.zf) goto L_10ca14fc;
L_10ca14ed:;
  /* 10ca14ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ca14ef call 0x10c96280 */
  push32(0x10ca14f4u); f_10c96280();
  /* 10ca14f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca14f7 jmp 0x10ca16e7 */
  goto L_10ca16e7;
L_10ca14fc:;
  /* 10ca14fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca14fe mov eax, dword ptr [0x10cbe754] */
  EAX = (r32((uint32_t)(0x10cbe754)));
  /* 10ca1503 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1504 call 0x10c93270 */
  push32(0x10ca1509u); f_10c93270();
  /* 10ca1509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca150c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10ca1511 push 0x10cba828 */
  push32((uint32_t)(0x10cba828u));
  /* 10ca1516 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca1518 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca151b push ecx */
  push32((uint32_t)(ECX));
  /* 10ca151c call 0x10c95610 */
  push32(0x10ca1521u); f_10c95610();
  /* 10ca1521 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1524 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1527 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1528 call 0x10c927e0 */
  push32(0x10ca152du); f_10c927e0();
  /* 10ca152d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1530 mov dword ptr [0x10cbe754], eax */
  w32((uint32_t)(0x10cbe754), (EAX));
  /* 10ca1535 cmp dword ptr [0x10cbe754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca153c jne 0x10ca154d */
  if (!C.zf) goto L_10ca154d;
  /* 10ca153e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ca1540 call 0x10c96280 */
  push32(0x10ca1545u); f_10c96280();
  /* 10ca1545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1548 jmp 0x10ca16e7 */
  goto L_10ca16e7;
L_10ca154d:;
  /* 10ca154d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1550 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1551 mov eax, dword ptr [0x10cbe754] */
  EAX = (r32((uint32_t)(0x10cbe754)));
  /* 10ca1556 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1557 call 0x10c95790 */
  push32(0x10ca155cu); f_10c95790();
  /* 10ca155c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca155f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ca1561 call 0x10c96280 */
  push32(0x10ca1566u); f_10c96280();
  /* 10ca1566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1569 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ca156b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca156e push ecx */
  push32((uint32_t)(ECX));
  /* 10ca156f mov edx, dword ptr [0x10cbde1c] */
  EDX = (r32((uint32_t)(0x10cbde1c)));
  /* 10ca1575 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1576 call 0x10c96000 */
  push32(0x10ca157bu); f_10c96000();
  /* 10ca157b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca157e mov eax, dword ptr [0x10cbde1c] */
  EAX = (r32((uint32_t)(0x10cbde1c)));
  /* 10ca1583 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10ca1587 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca158a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca158d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ca1590 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1593 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ca1596 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1599 jne 0x10ca15ad */
  if (!C.zf) goto L_10ca15ad;
  /* 10ca159b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca159e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca15a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca15a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca15a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca15aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ca15ad:;
  /* 10ca15ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca15b0 push eax */
  push32((uint32_t)(EAX));
  /* 10ca15b1 call 0x10ca1090 */
  push32(0x10ca15b6u); f_10ca1090();
  /* 10ca15b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca15b9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca15bf mov dword ptr [0x10cbdd90], eax */
  w32((uint32_t)(0x10cbdd90), (EAX));
L_10ca15c4:;
  /* 10ca15c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca15c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ca15ca cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca15cd je 0x10ca15e5 */
  if (C.zf) goto L_10ca15e5;
  /* 10ca15cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca15d2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ca15d5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca15d8 jl 0x10ca15f0 */
  if ((C.sf!=C.of)) goto L_10ca15f0;
  /* 10ca15da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca15dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ca15e0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca15e3 jg 0x10ca15f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ca15f0;
L_10ca15e5:;
  /* 10ca15e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca15e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca15eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ca15ee jmp 0x10ca15c4 */
  goto L_10ca15c4;
L_10ca15f0:;
  /* 10ca15f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca15f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ca15f6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca15f9 jne 0x10ca1695 */
  if (!C.zf) goto L_10ca1695;
  /* 10ca15ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1602 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1605 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ca1608 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca160b push edx */
  push32((uint32_t)(EDX));
  /* 10ca160c call 0x10ca1090 */
  push32(0x10ca1611u); f_10ca1090();
  /* 10ca1611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1614 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1617 mov ecx, dword ptr [0x10cbdd90] */
  ECX = (r32((uint32_t)(0x10cbdd90)));
  /* 10ca161d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca161f mov dword ptr [0x10cbdd90], ecx */
  w32((uint32_t)(0x10cbdd90), (ECX));
L_10ca1625:;
  /* 10ca1625 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1628 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ca162b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca162e jl 0x10ca1646 */
  if ((C.sf!=C.of)) goto L_10ca1646;
  /* 10ca1630 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1633 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ca1636 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1639 jg 0x10ca1646 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ca1646;
  /* 10ca163b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca163e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1641 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ca1644 jmp 0x10ca1625 */
  goto L_10ca1625;
L_10ca1646:;
  /* 10ca1646 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1649 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ca164c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca164f jne 0x10ca1695 */
  if (!C.zf) goto L_10ca1695;
  /* 10ca1651 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1654 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1657 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ca165a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca165d push ecx */
  push32((uint32_t)(ECX));
  /* 10ca165e call 0x10ca1090 */
  push32(0x10ca1663u); f_10ca1090();
  /* 10ca1663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1666 mov edx, dword ptr [0x10cbdd90] */
  EDX = (r32((uint32_t)(0x10cbdd90)));
  /* 10ca166c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca166e mov dword ptr [0x10cbdd90], edx */
  w32((uint32_t)(0x10cbdd90), (EDX));
L_10ca1674:;
  /* 10ca1674 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1677 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ca167a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca167d jl 0x10ca1695 */
  if ((C.sf!=C.of)) goto L_10ca1695;
  /* 10ca167f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1682 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ca1685 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1688 jg 0x10ca1695 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ca1695;
  /* 10ca168a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca168d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1690 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ca1693 jmp 0x10ca1674 */
  goto L_10ca1674;
L_10ca1695:;
  /* 10ca1695 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1699 je 0x10ca16a9 */
  if (C.zf) goto L_10ca16a9;
  /* 10ca169b mov edx, dword ptr [0x10cbdd90] */
  EDX = (r32((uint32_t)(0x10cbdd90)));
  /* 10ca16a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ca16a3 mov dword ptr [0x10cbdd90], edx */
  w32((uint32_t)(0x10cbdd90), (EDX));
L_10ca16a9:;
  /* 10ca16a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca16ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ca16af mov dword ptr [0x10cbdd94], ecx */
  w32((uint32_t)(0x10cbdd94), (ECX));
  /* 10ca16b5 cmp dword ptr [0x10cbdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca16bc je 0x10ca16de */
  if (C.zf) goto L_10ca16de;
  /* 10ca16be push 3 */
  push32((uint32_t)(0x3u));
  /* 10ca16c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca16c3 push edx */
  push32((uint32_t)(EDX));
  /* 10ca16c4 mov eax, dword ptr [0x10cbde20] */
  EAX = (r32((uint32_t)(0x10cbde20)));
  /* 10ca16c9 push eax */
  push32((uint32_t)(EAX));
  /* 10ca16ca call 0x10c96000 */
  push32(0x10ca16cfu); f_10c96000();
  /* 10ca16cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca16d2 mov ecx, dword ptr [0x10cbde20] */
  ECX = (r32((uint32_t)(0x10cbde20)));
  /* 10ca16d8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10ca16dc jmp 0x10ca16e7 */
  goto L_10ca16e7;
L_10ca16de:;
  /* 10ca16de mov edx, dword ptr [0x10cbde20] */
  EDX = (r32((uint32_t)(0x10cbde20)));
  /* 10ca16e4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10ca16e7:;
  /* 10ca16e7 mov esp, ebp */
  ESP = (EBP);
  /* 10ca16e9 pop ebp */
  EBP = (pop32());
  /* 10ca16ea ret  */
  ESPCHK(0x10ca1340u, _esp0);
  ESP += 4; return;
}

/* FUN_100116f0 @ 0x10ca16f0 (46 bytes, 18 insns) */
void f_10ca16f0(void) {
  FTRACE(0x10ca16f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca16f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca16f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca16f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca16f4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ca16f6 call 0x10c961e0 */
  push32(0x10ca16fbu); f_10c961e0();
  /* 10ca16fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca16fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1701 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1702 call 0x10ca1720 */
  push32(0x10ca1707u); f_10ca1720();
  /* 10ca1707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca170a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca170d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ca170f call 0x10c96280 */
  push32(0x10ca1714u); f_10c96280();
  /* 10ca1714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1717 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca171a mov esp, ebp */
  ESP = (EBP);
  /* 10ca171c pop ebp */
  EBP = (pop32());
  /* 10ca171d ret  */
  ESPCHK(0x10ca16f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011720 @ 0x10ca1720 (762 bytes, 246 insns) */
void f_10ca1720(void) {
  FTRACE(0x10ca1720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca1720 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca1721 mov ebp, esp */
  EBP = (ESP);
  /* 10ca1723 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1724 cmp dword ptr [0x10cbdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca172b jne 0x10ca1734 */
  if (!C.zf) goto L_10ca1734;
  /* 10ca172d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca172f jmp 0x10ca1a16 */
  goto L_10ca1a16;
L_10ca1734:;
  /* 10ca1734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1737 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ca173a cmp ecx, dword ptr [0x10cbde28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbde28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1740 jne 0x10ca1754 */
  if (!C.zf) goto L_10ca1754;
  /* 10ca1742 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1745 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ca1748 cmp eax, dword ptr [0x10cbde38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbde38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca174e je 0x10ca191b */
  if (C.zf) goto L_10ca191b;
L_10ca1754:;
  /* 10ca1754 cmp dword ptr [0x10cbe6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca175b je 0x10ca18d5 */
  if (C.zf) goto L_10ca18d5;
  /* 10ca1761 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca1763 mov cx, word ptr [0x10cbe740] */
  CX = (r16((uint32_t)(0x10cbe740)));
  /* 10ca176a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca176c jne 0x10ca17c9 */
  if (!C.zf) goto L_10ca17c9;
  /* 10ca176e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca1770 mov dx, word ptr [0x10cbe74e] */
  DX = (r16((uint32_t)(0x10cbe74e)));
  /* 10ca1777 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1778 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca177a mov ax, word ptr [0x10cbe74c] */
  AX = (r16((uint32_t)(0x10cbe74c)));
  /* 10ca1780 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1781 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca1783 mov cx, word ptr [0x10cbe74a] */
  CX = (r16((uint32_t)(0x10cbe74a)));
  /* 10ca178a push ecx */
  push32((uint32_t)(ECX));
  /* 10ca178b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca178d mov dx, word ptr [0x10cbe748] */
  DX = (r16((uint32_t)(0x10cbe748)));
  /* 10ca1794 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1795 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1797 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1799 mov ax, word ptr [0x10cbe744] */
  AX = (r16((uint32_t)(0x10cbe744)));
  /* 10ca179f push eax */
  push32((uint32_t)(EAX));
  /* 10ca17a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca17a2 mov cx, word ptr [0x10cbe746] */
  CX = (r16((uint32_t)(0x10cbe746)));
  /* 10ca17a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca17aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca17ac mov dx, word ptr [0x10cbe742] */
  DX = (r16((uint32_t)(0x10cbe742)));
  /* 10ca17b3 push edx */
  push32((uint32_t)(EDX));
  /* 10ca17b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca17b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ca17ba push ecx */
  push32((uint32_t)(ECX));
  /* 10ca17bb push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca17bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca17bf call 0x10ca1a20 */
  push32(0x10ca17c4u); f_10ca1a20();
  /* 10ca17c4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca17c7 jmp 0x10ca181a */
  goto L_10ca181a;
L_10ca17c9:;
  /* 10ca17c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca17cb mov dx, word ptr [0x10cbe74e] */
  DX = (r16((uint32_t)(0x10cbe74e)));
  /* 10ca17d2 push edx */
  push32((uint32_t)(EDX));
  /* 10ca17d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca17d5 mov ax, word ptr [0x10cbe74c] */
  AX = (r16((uint32_t)(0x10cbe74c)));
  /* 10ca17db push eax */
  push32((uint32_t)(EAX));
  /* 10ca17dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca17de mov cx, word ptr [0x10cbe74a] */
  CX = (r16((uint32_t)(0x10cbe74a)));
  /* 10ca17e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca17e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca17e8 mov dx, word ptr [0x10cbe748] */
  DX = (r16((uint32_t)(0x10cbe748)));
  /* 10ca17ef push edx */
  push32((uint32_t)(EDX));
  /* 10ca17f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca17f2 mov ax, word ptr [0x10cbe746] */
  AX = (r16((uint32_t)(0x10cbe746)));
  /* 10ca17f8 push eax */
  push32((uint32_t)(EAX));
  /* 10ca17f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca17fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca17fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca17ff mov cx, word ptr [0x10cbe742] */
  CX = (r16((uint32_t)(0x10cbe742)));
  /* 10ca1806 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1807 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca180a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ca180d push eax */
  push32((uint32_t)(EAX));
  /* 10ca180e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1810 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca1812 call 0x10ca1a20 */
  push32(0x10ca1817u); f_10ca1a20();
  /* 10ca1817 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca181a:;
  /* 10ca181a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca181c mov cx, word ptr [0x10cbe6ec] */
  CX = (r16((uint32_t)(0x10cbe6ec)));
  /* 10ca1823 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca1825 jne 0x10ca1882 */
  if (!C.zf) goto L_10ca1882;
  /* 10ca1827 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca1829 mov dx, word ptr [0x10cbe6fa] */
  DX = (r16((uint32_t)(0x10cbe6fa)));
  /* 10ca1830 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1831 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1833 mov ax, word ptr [0x10cbe6f8] */
  AX = (r16((uint32_t)(0x10cbe6f8)));
  /* 10ca1839 push eax */
  push32((uint32_t)(EAX));
  /* 10ca183a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca183c mov cx, word ptr [0x10cbe6f6] */
  CX = (r16((uint32_t)(0x10cbe6f6)));
  /* 10ca1843 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca1846 mov dx, word ptr [0x10cbe6f4] */
  DX = (r16((uint32_t)(0x10cbe6f4)));
  /* 10ca184d push edx */
  push32((uint32_t)(EDX));
  /* 10ca184e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1850 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1852 mov ax, word ptr [0x10cbe6f0] */
  AX = (r16((uint32_t)(0x10cbe6f0)));
  /* 10ca1858 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1859 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca185b mov cx, word ptr [0x10cbe6f2] */
  CX = (r16((uint32_t)(0x10cbe6f2)));
  /* 10ca1862 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1863 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca1865 mov dx, word ptr [0x10cbe6ee] */
  DX = (r16((uint32_t)(0x10cbe6ee)));
  /* 10ca186c push edx */
  push32((uint32_t)(EDX));
  /* 10ca186d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1870 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ca1873 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1874 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca1876 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1878 call 0x10ca1a20 */
  push32(0x10ca187du); f_10ca1a20();
  /* 10ca187d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1880 jmp 0x10ca18d3 */
  goto L_10ca18d3;
L_10ca1882:;
  /* 10ca1882 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca1884 mov dx, word ptr [0x10cbe6fa] */
  DX = (r16((uint32_t)(0x10cbe6fa)));
  /* 10ca188b push edx */
  push32((uint32_t)(EDX));
  /* 10ca188c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca188e mov ax, word ptr [0x10cbe6f8] */
  AX = (r16((uint32_t)(0x10cbe6f8)));
  /* 10ca1894 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1895 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca1897 mov cx, word ptr [0x10cbe6f6] */
  CX = (r16((uint32_t)(0x10cbe6f6)));
  /* 10ca189e push ecx */
  push32((uint32_t)(ECX));
  /* 10ca189f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca18a1 mov dx, word ptr [0x10cbe6f4] */
  DX = (r16((uint32_t)(0x10cbe6f4)));
  /* 10ca18a8 push edx */
  push32((uint32_t)(EDX));
  /* 10ca18a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca18ab mov ax, word ptr [0x10cbe6f2] */
  AX = (r16((uint32_t)(0x10cbe6f2)));
  /* 10ca18b1 push eax */
  push32((uint32_t)(EAX));
  /* 10ca18b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca18b8 mov cx, word ptr [0x10cbe6ee] */
  CX = (r16((uint32_t)(0x10cbe6ee)));
  /* 10ca18bf push ecx */
  push32((uint32_t)(ECX));
  /* 10ca18c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca18c3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ca18c6 push eax */
  push32((uint32_t)(EAX));
  /* 10ca18c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18cb call 0x10ca1a20 */
  push32(0x10ca18d0u); f_10ca1a20();
  /* 10ca18d0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca18d3:;
  /* 10ca18d3 jmp 0x10ca191b */
  goto L_10ca191b;
L_10ca18d5:;
  /* 10ca18d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18db push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca18dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18df push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca18e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ca18e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca18e8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ca18eb push edx */
  push32((uint32_t)(EDX));
  /* 10ca18ec push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca18ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca18f0 call 0x10ca1a20 */
  push32(0x10ca18f5u); f_10ca1a20();
  /* 10ca18f5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca18f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca18fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca1900 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1902 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1904 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ca1906 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ca1908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca190b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ca190e push ecx */
  push32((uint32_t)(ECX));
  /* 10ca190f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca1911 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1913 call 0x10ca1a20 */
  push32(0x10ca1918u); f_10ca1a20();
  /* 10ca1918 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca191b:;
  /* 10ca191b mov edx, dword ptr [0x10cbde2c] */
  EDX = (r32((uint32_t)(0x10cbde2c)));
  /* 10ca1921 cmp edx, dword ptr [0x10cbde3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cbde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1927 jge 0x10ca1974 */
  if ((C.sf==C.of)) goto L_10ca1974;
  /* 10ca1929 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca192c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ca192f cmp ecx, dword ptr [0x10cbde2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1935 jl 0x10ca1945 */
  if ((C.sf!=C.of)) goto L_10ca1945;
  /* 10ca1937 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca193a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ca193d cmp eax, dword ptr [0x10cbde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1943 jle 0x10ca194c */
  if ((C.zf||C.sf!=C.of)) goto L_10ca194c;
L_10ca1945:;
  /* 10ca1945 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1947 jmp 0x10ca1a16 */
  goto L_10ca1a16;
L_10ca194c:;
  /* 10ca194c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca194f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ca1952 cmp edx, dword ptr [0x10cbde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cbde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1958 jle 0x10ca1972 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca1972;
  /* 10ca195a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca195d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ca1960 cmp ecx, dword ptr [0x10cbde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1966 jge 0x10ca1972 */
  if ((C.sf==C.of)) goto L_10ca1972;
  /* 10ca1968 mov eax, 1 */
  EAX = (0x1u);
  /* 10ca196d jmp 0x10ca1a16 */
  goto L_10ca1a16;
L_10ca1972:;
  /* 10ca1972 jmp 0x10ca19b7 */
  goto L_10ca19b7;
L_10ca1974:;
  /* 10ca1974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1977 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ca197a cmp eax, dword ptr [0x10cbde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1980 jl 0x10ca1990 */
  if ((C.sf!=C.of)) goto L_10ca1990;
  /* 10ca1982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1985 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ca1988 cmp edx, dword ptr [0x10cbde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cbde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca198e jle 0x10ca1997 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca1997;
L_10ca1990:;
  /* 10ca1990 mov eax, 1 */
  EAX = (0x1u);
  /* 10ca1995 jmp 0x10ca1a16 */
  goto L_10ca1a16;
L_10ca1997:;
  /* 10ca1997 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca199a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ca199d cmp ecx, dword ptr [0x10cbde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca19a3 jle 0x10ca19b7 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca19b7;
  /* 10ca19a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca19a8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ca19ab cmp eax, dword ptr [0x10cbde2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca19b1 jge 0x10ca19b7 */
  if ((C.sf==C.of)) goto L_10ca19b7;
  /* 10ca19b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca19b5 jmp 0x10ca1a16 */
  goto L_10ca1a16;
L_10ca19b7:;
  /* 10ca19b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca19ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ca19bd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca19c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca19c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca19c5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca19c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca19ca mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ca19cd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca19d3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca19d5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca19db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca19de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca19e1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ca19e4 cmp edx, dword ptr [0x10cbde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cbde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca19ea jne 0x10ca1a02 */
  if (!C.zf) goto L_10ca1a02;
  /* 10ca19ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca19ef cmp eax, dword ptr [0x10cbde30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbde30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca19f5 jl 0x10ca19fe */
  if ((C.sf!=C.of)) goto L_10ca19fe;
  /* 10ca19f7 mov eax, 1 */
  EAX = (0x1u);
  /* 10ca19fc jmp 0x10ca1a16 */
  goto L_10ca1a16;
L_10ca19fe:;
  /* 10ca19fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1a00 jmp 0x10ca1a16 */
  goto L_10ca1a16;
L_10ca1a02:;
  /* 10ca1a02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca1a05 cmp ecx, dword ptr [0x10cbde40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbde40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1a0b jge 0x10ca1a14 */
  if ((C.sf==C.of)) goto L_10ca1a14;
  /* 10ca1a0d mov eax, 1 */
  EAX = (0x1u);
  /* 10ca1a12 jmp 0x10ca1a16 */
  goto L_10ca1a16;
L_10ca1a14:;
  /* 10ca1a14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ca1a16:;
  /* 10ca1a16 mov esp, ebp */
  ESP = (EBP);
  /* 10ca1a18 pop ebp */
  EBP = (pop32());
  /* 10ca1a19 ret  */
  ESPCHK(0x10ca1720u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a20 @ 0x10ca1a20 (504 bytes, 145 insns) */
void f_10ca1a20(void) {
  FTRACE(0x10ca1a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca1a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca1a21 mov ebp, esp */
  EBP = (ESP);
  /* 10ca1a23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1a26 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1a2a jne 0x10ca1afc */
  if (!C.zf) goto L_10ca1afc;
  /* 10ca1a30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1a33 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1a36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca1a38 jne 0x10ca1a49 */
  if (!C.zf) goto L_10ca1a49;
  /* 10ca1a3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca1a3d mov edx, dword ptr [ecx*4 + 0x10cbde4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbde4c)));
  /* 10ca1a44 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ca1a47 jmp 0x10ca1a56 */
  goto L_10ca1a56;
L_10ca1a49:;
  /* 10ca1a49 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca1a4c mov ecx, dword ptr [eax*4 + 0x10cbde80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cbde80)));
  /* 10ca1a53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ca1a56:;
  /* 10ca1a56 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca1a59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1a5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ca1a5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1a62 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1a65 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1a6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca1a6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1a70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1a73 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1a76 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10ca1a79 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10ca1a7d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ca1a7e mov ecx, 7 */
  ECX = (0x7u);
  /* 10ca1a83 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ca1a85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ca1a88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca1a8b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1a8e jge 0x10ca1aa9 */
  if ((C.sf==C.of)) goto L_10ca1aa9;
  /* 10ca1a90 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ca1a93 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1a96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca1a99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1a9c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1a9f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1aa2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1aa4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ca1aa7 jmp 0x10ca1abd */
  goto L_10ca1abd;
L_10ca1aa9:;
  /* 10ca1aa9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ca1aac sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1aaf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca1ab2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1ab5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1ab8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1aba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ca1abd:;
  /* 10ca1abd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1ac1 jne 0x10ca1afa */
  if (!C.zf) goto L_10ca1afa;
  /* 10ca1ac3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1ac6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ca1ac9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca1acb jne 0x10ca1adc */
  if (!C.zf) goto L_10ca1adc;
  /* 10ca1acd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca1ad0 mov eax, dword ptr [edx*4 + 0x10cbde50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cbde50)));
  /* 10ca1ad7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ca1ada jmp 0x10ca1ae9 */
  goto L_10ca1ae9;
L_10ca1adc:;
  /* 10ca1adc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca1adf mov edx, dword ptr [ecx*4 + 0x10cbde84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbde84)));
  /* 10ca1ae6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ca1ae9:;
  /* 10ca1ae9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca1aec cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1aef jle 0x10ca1afa */
  if ((C.zf||C.sf!=C.of)) goto L_10ca1afa;
  /* 10ca1af1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca1af4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1af7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ca1afa:;
  /* 10ca1afa jmp 0x10ca1b31 */
  goto L_10ca1b31;
L_10ca1afc:;
  /* 10ca1afc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1aff and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ca1b02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca1b04 jne 0x10ca1b15 */
  if (!C.zf) goto L_10ca1b15;
  /* 10ca1b06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca1b09 mov ecx, dword ptr [eax*4 + 0x10cbde4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cbde4c)));
  /* 10ca1b10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ca1b13 jmp 0x10ca1b22 */
  goto L_10ca1b22;
L_10ca1b15:;
  /* 10ca1b15 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca1b18 mov eax, dword ptr [edx*4 + 0x10cbde80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cbde80)));
  /* 10ca1b1f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10ca1b22:;
  /* 10ca1b22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ca1b25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ca1b28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca1b2b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1b2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ca1b31:;
  /* 10ca1b31 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1b35 jne 0x10ca1b71 */
  if (!C.zf) goto L_10ca1b71;
  /* 10ca1b37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca1b3a mov dword ptr [0x10cbde2c], eax */
  w32((uint32_t)(0x10cbde2c), (EAX));
  /* 10ca1b3f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ca1b42 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1b45 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ca1b48 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1b4a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1b4d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10ca1b50 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1b52 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1b58 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10ca1b5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1b5d mov dword ptr [0x10cbde30], ecx */
  w32((uint32_t)(0x10cbde30), (ECX));
  /* 10ca1b63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1b66 mov dword ptr [0x10cbde28], edx */
  w32((uint32_t)(0x10cbde28), (EDX));
  /* 10ca1b6c jmp 0x10ca1c14 */
  goto L_10ca1c14;
L_10ca1b71:;
  /* 10ca1b71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca1b74 mov dword ptr [0x10cbde3c], eax */
  w32((uint32_t)(0x10cbde3c), (EAX));
  /* 10ca1b79 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ca1b7c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1b7f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ca1b82 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1b84 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1b87 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10ca1b8a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1b8c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1b92 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10ca1b95 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1b97 mov dword ptr [0x10cbde40], ecx */
  w32((uint32_t)(0x10cbde40), (ECX));
  /* 10ca1b9d mov edx, dword ptr [0x10cbdd98] */
  EDX = (r32((uint32_t)(0x10cbdd98)));
  /* 10ca1ba3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ca1ba9 mov eax, dword ptr [0x10cbde40] */
  EAX = (r32((uint32_t)(0x10cbde40)));
  /* 10ca1bae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1bb0 mov dword ptr [0x10cbde40], eax */
  w32((uint32_t)(0x10cbde40), (EAX));
  /* 10ca1bb5 cmp dword ptr [0x10cbde40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbde40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1bbc jge 0x10ca1be1 */
  if ((C.sf==C.of)) goto L_10ca1be1;
  /* 10ca1bbe mov ecx, dword ptr [0x10cbde40] */
  ECX = (r32((uint32_t)(0x10cbde40)));
  /* 10ca1bc4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1bca mov dword ptr [0x10cbde40], ecx */
  w32((uint32_t)(0x10cbde40), (ECX));
  /* 10ca1bd0 mov edx, dword ptr [0x10cbde3c] */
  EDX = (r32((uint32_t)(0x10cbde3c)));
  /* 10ca1bd6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1bd9 mov dword ptr [0x10cbde3c], edx */
  w32((uint32_t)(0x10cbde3c), (EDX));
  /* 10ca1bdf jmp 0x10ca1c0b */
  goto L_10ca1c0b;
L_10ca1be1:;
  /* 10ca1be1 cmp dword ptr [0x10cbde40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10cbde40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1beb jl 0x10ca1c0b */
  if ((C.sf!=C.of)) goto L_10ca1c0b;
  /* 10ca1bed mov eax, dword ptr [0x10cbde40] */
  EAX = (r32((uint32_t)(0x10cbde40)));
  /* 10ca1bf2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca1bf7 mov dword ptr [0x10cbde40], eax */
  w32((uint32_t)(0x10cbde40), (EAX));
  /* 10ca1bfc mov ecx, dword ptr [0x10cbde3c] */
  ECX = (r32((uint32_t)(0x10cbde3c)));
  /* 10ca1c02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1c05 mov dword ptr [0x10cbde3c], ecx */
  w32((uint32_t)(0x10cbde3c), (ECX));
L_10ca1c0b:;
  /* 10ca1c0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1c0e mov dword ptr [0x10cbde38], edx */
  w32((uint32_t)(0x10cbde38), (EDX));
L_10ca1c14:;
  /* 10ca1c14 mov esp, ebp */
  ESP = (EBP);
  /* 10ca1c16 pop ebp */
  EBP = (pop32());
  /* 10ca1c17 ret  */
  ESPCHK(0x10ca1a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c20 @ 0x10ca1c20 (382 bytes, 135 insns) */
void f_10ca1c20(void) {
  FTRACE(0x10ca1c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca1c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca1c21 mov ebp, esp */
  EBP = (ESP);
  /* 10ca1c23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca1c25 push 0x10cba838 */
  push32((uint32_t)(0x10cba838u));
  /* 10ca1c2a push 0x10c9b8e8 */
  push32((uint32_t)(0x10c9b8e8u));
  /* 10ca1c2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ca1c35 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1c36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ca1c3d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1c40 push ebx */
  push32((uint32_t)(EBX));
  /* 10ca1c41 push esi */
  push32((uint32_t)(ESI));
  /* 10ca1c42 push edi */
  push32((uint32_t)(EDI));
  /* 10ca1c43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ca1c46 cmp dword ptr [0x10cbe75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1c4d jne 0x10ca1c92 */
  if (!C.zf) goto L_10ca1c92;
  /* 10ca1c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca1c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1c57 call dword ptr [0x10cc021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc021c))), 0x10ca1c5du);
  /* 10ca1c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca1c5f je 0x10ca1c6d */
  if (C.zf) goto L_10ca1c6d;
  /* 10ca1c61 mov dword ptr [0x10cbe75c], 1 */
  w32((uint32_t)(0x10cbe75c), (0x1u));
  /* 10ca1c6b jmp 0x10ca1c92 */
  goto L_10ca1c92;
L_10ca1c6d:;
  /* 10ca1c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1c71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca1c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1c75 call dword ptr [0x10cc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0320))), 0x10ca1c7bu);
  /* 10ca1c7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca1c7d je 0x10ca1c8b */
  if (C.zf) goto L_10ca1c8b;
  /* 10ca1c7f mov dword ptr [0x10cbe75c], 2 */
  w32((uint32_t)(0x10cbe75c), (0x2u));
  /* 10ca1c89 jmp 0x10ca1c92 */
  goto L_10ca1c92;
L_10ca1c8b:;
  /* 10ca1c8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1c8d jmp 0x10ca1da1 */
  goto L_10ca1da1;
L_10ca1c92:;
  /* 10ca1c92 cmp dword ptr [0x10cbe75c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe75c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1c99 jne 0x10ca1cb6 */
  if (!C.zf) goto L_10ca1cb6;
  /* 10ca1c9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca1c9e push eax */
  push32((uint32_t)(EAX));
  /* 10ca1c9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1ca2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1ca3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca1ca6 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1ca7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1caa push eax */
  push32((uint32_t)(EAX));
  /* 10ca1cab call dword ptr [0x10cc021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc021c))), 0x10ca1cb1u);
  /* 10ca1cb1 jmp 0x10ca1da1 */
  goto L_10ca1da1;
L_10ca1cb6:;
  /* 10ca1cb6 cmp dword ptr [0x10cbe75c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe75c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1cbd jne 0x10ca1d9f */
  if (!C.zf) goto L_10ca1d9f;
  /* 10ca1cc3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1cc7 jne 0x10ca1cd2 */
  if (!C.zf) goto L_10ca1cd2;
  /* 10ca1cc9 mov ecx, dword ptr [0x10cbe610] */
  ECX = (r32((uint32_t)(0x10cbe610)));
  /* 10ca1ccf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10ca1cd2:;
  /* 10ca1cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1cd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca1cd9 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1cda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1cdd push eax */
  push32((uint32_t)(EAX));
  /* 10ca1cde call dword ptr [0x10cc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0320))), 0x10ca1ce4u);
  /* 10ca1ce4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ca1ce7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1ceb jne 0x10ca1cf4 */
  if (!C.zf) goto L_10ca1cf4;
  /* 10ca1ced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1cef jmp 0x10ca1da1 */
  goto L_10ca1da1;
L_10ca1cf4:;
  /* 10ca1cf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ca1cfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ca1cfe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1d01 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ca1d03 call 0x10c95980 */
  push32(0x10ca1d08u); f_10c95980();
  /* 10ca1d08 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10ca1d0b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ca1d0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ca1d11 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ca1d14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ca1d1b jmp 0x10ca1d34 */
  goto L_10ca1d34;
  /* 10ca1d1d mov eax, 1 */
  EAX = (0x1u);
  /* 10ca1d22 ret  */
  ESPCHK(0x10ca1c20u, _esp0);
  ESP += 4; return;
  /* 10ca1d23 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca1d26 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ca1d2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ca1d34:;
  /* 10ca1d34 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1d38 jne 0x10ca1d3e */
  if (!C.zf) goto L_10ca1d3e;
  /* 10ca1d3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1d3c jmp 0x10ca1da1 */
  goto L_10ca1da1;
L_10ca1d3e:;
  /* 10ca1d3e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ca1d41 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1d42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ca1d45 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1d46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca1d49 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1d4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1d4d push edx */
  push32((uint32_t)(EDX));
  /* 10ca1d4e call dword ptr [0x10cc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0320))), 0x10ca1d54u);
  /* 10ca1d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca1d56 jne 0x10ca1d5c */
  if (!C.zf) goto L_10ca1d5c;
  /* 10ca1d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1d5a jmp 0x10ca1da1 */
  goto L_10ca1da1;
L_10ca1d5c:;
  /* 10ca1d5c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1d60 jne 0x10ca1d7d */
  if (!C.zf) goto L_10ca1d7d;
  /* 10ca1d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1d66 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca1d68 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ca1d6b push eax */
  push32((uint32_t)(EAX));
  /* 10ca1d6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca1d6e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca1d71 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1d72 call dword ptr [0x10cc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ac))), 0x10ca1d78u);
  /* 10ca1d78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ca1d7b jmp 0x10ca1d9a */
  goto L_10ca1d9a;
L_10ca1d7d:;
  /* 10ca1d7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca1d80 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1d81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1d84 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1d85 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca1d87 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ca1d8a push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1d8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca1d8d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca1d90 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1d91 call dword ptr [0x10cc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ac))), 0x10ca1d97u);
  /* 10ca1d97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ca1d9a:;
  /* 10ca1d9a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ca1d9d jmp 0x10ca1da1 */
  goto L_10ca1da1;
L_10ca1d9f:;
  /* 10ca1d9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ca1da1:;
  /* 10ca1da1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ca1da4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca1da7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ca1dae pop edi */
  EDI = (pop32());
  /* 10ca1daf pop esi */
  ESI = (pop32());
  /* 10ca1db0 pop ebx */
  EBX = (pop32());
  /* 10ca1db1 mov esp, ebp */
  ESP = (EBP);
  /* 10ca1db3 pop ebp */
  EBP = (pop32());
  /* 10ca1db4 ret  */
  ESPCHK(0x10ca1c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dc0 @ 0x10ca1dc0 (398 bytes, 140 insns) */
void f_10ca1dc0(void) {
  FTRACE(0x10ca1dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca1dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca1dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca1dc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca1dc5 push 0x10cba848 */
  push32((uint32_t)(0x10cba848u));
  /* 10ca1dca push 0x10c9b8e8 */
  push32((uint32_t)(0x10c9b8e8u));
  /* 10ca1dcf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ca1dd5 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1dd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ca1ddd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1de0 push ebx */
  push32((uint32_t)(EBX));
  /* 10ca1de1 push esi */
  push32((uint32_t)(ESI));
  /* 10ca1de2 push edi */
  push32((uint32_t)(EDI));
  /* 10ca1de3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ca1de6 cmp dword ptr [0x10cbe760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1ded jne 0x10ca1e32 */
  if (!C.zf) goto L_10ca1e32;
  /* 10ca1def push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1df1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca1df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1df7 call dword ptr [0x10cc021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc021c))), 0x10ca1dfdu);
  /* 10ca1dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca1dff je 0x10ca1e0d */
  if (C.zf) goto L_10ca1e0d;
  /* 10ca1e01 mov dword ptr [0x10cbe760], 1 */
  w32((uint32_t)(0x10cbe760), (0x1u));
  /* 10ca1e0b jmp 0x10ca1e32 */
  goto L_10ca1e32;
L_10ca1e0d:;
  /* 10ca1e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1e11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca1e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1e15 call dword ptr [0x10cc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0320))), 0x10ca1e1bu);
  /* 10ca1e1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca1e1d je 0x10ca1e2b */
  if (C.zf) goto L_10ca1e2b;
  /* 10ca1e1f mov dword ptr [0x10cbe760], 2 */
  w32((uint32_t)(0x10cbe760), (0x2u));
  /* 10ca1e29 jmp 0x10ca1e32 */
  goto L_10ca1e32;
L_10ca1e2b:;
  /* 10ca1e2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1e2d jmp 0x10ca1f51 */
  goto L_10ca1f51;
L_10ca1e32:;
  /* 10ca1e32 cmp dword ptr [0x10cbe760], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe760))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1e39 jne 0x10ca1e56 */
  if (!C.zf) goto L_10ca1e56;
  /* 10ca1e3b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca1e3e push eax */
  push32((uint32_t)(EAX));
  /* 10ca1e3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1e42 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1e43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca1e46 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1e47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1e4a push eax */
  push32((uint32_t)(EAX));
  /* 10ca1e4b call dword ptr [0x10cc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0320))), 0x10ca1e51u);
  /* 10ca1e51 jmp 0x10ca1f51 */
  goto L_10ca1f51;
L_10ca1e56:;
  /* 10ca1e56 cmp dword ptr [0x10cbe760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1e5d jne 0x10ca1f4f */
  if (!C.zf) goto L_10ca1f4f;
  /* 10ca1e63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1e67 jne 0x10ca1e72 */
  if (!C.zf) goto L_10ca1e72;
  /* 10ca1e69 mov ecx, dword ptr [0x10cbe610] */
  ECX = (r32((uint32_t)(0x10cbe610)));
  /* 10ca1e6f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10ca1e72:;
  /* 10ca1e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1e76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca1e79 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1e7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1e7d push eax */
  push32((uint32_t)(EAX));
  /* 10ca1e7e call dword ptr [0x10cc021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc021c))), 0x10ca1e84u);
  /* 10ca1e84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ca1e87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1e8b jne 0x10ca1e94 */
  if (!C.zf) goto L_10ca1e94;
  /* 10ca1e8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1e8f jmp 0x10ca1f51 */
  goto L_10ca1f51;
L_10ca1e94:;
  /* 10ca1e94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ca1e9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ca1e9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ca1ea0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1ea3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ca1ea5 call 0x10c95980 */
  push32(0x10ca1eaau); f_10c95980();
  /* 10ca1eaa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10ca1ead mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ca1eb0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ca1eb3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ca1eb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ca1ebd jmp 0x10ca1ed6 */
  goto L_10ca1ed6;
  /* 10ca1ebf mov eax, 1 */
  EAX = (0x1u);
  /* 10ca1ec4 ret  */
  ESPCHK(0x10ca1dc0u, _esp0);
  ESP += 4; return;
  /* 10ca1ec5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca1ec8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ca1ecf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ca1ed6:;
  /* 10ca1ed6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1eda jne 0x10ca1ee0 */
  if (!C.zf) goto L_10ca1ee0;
  /* 10ca1edc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1ede jmp 0x10ca1f51 */
  goto L_10ca1f51;
L_10ca1ee0:;
  /* 10ca1ee0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ca1ee3 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1ee4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ca1ee7 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1ee8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca1eeb push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1eec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1eef push edx */
  push32((uint32_t)(EDX));
  /* 10ca1ef0 call dword ptr [0x10cc021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc021c))), 0x10ca1ef6u);
  /* 10ca1ef6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca1ef8 jne 0x10ca1efe */
  if (!C.zf) goto L_10ca1efe;
  /* 10ca1efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca1efc jmp 0x10ca1f51 */
  goto L_10ca1f51;
L_10ca1efe:;
  /* 10ca1efe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1f02 jne 0x10ca1f26 */
  if (!C.zf) goto L_10ca1f26;
  /* 10ca1f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1f06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1f0c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca1f0e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ca1f11 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1f12 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ca1f17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca1f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1f1b call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10ca1f21u);
  /* 10ca1f21 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ca1f24 jmp 0x10ca1f4a */
  goto L_10ca1f4a;
L_10ca1f26:;
  /* 10ca1f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca1f2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca1f2d push edx */
  push32((uint32_t)(EDX));
  /* 10ca1f2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca1f31 push eax */
  push32((uint32_t)(EAX));
  /* 10ca1f32 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca1f34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ca1f37 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1f38 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ca1f3d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca1f40 push edx */
  push32((uint32_t)(EDX));
  /* 10ca1f41 call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10ca1f47u);
  /* 10ca1f47 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ca1f4a:;
  /* 10ca1f4a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ca1f4d jmp 0x10ca1f51 */
  goto L_10ca1f51;
L_10ca1f4f:;
  /* 10ca1f4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ca1f51:;
  /* 10ca1f51 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ca1f54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca1f57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ca1f5e pop edi */
  EDI = (pop32());
  /* 10ca1f5f pop esi */
  ESI = (pop32());
  /* 10ca1f60 pop ebx */
  EBX = (pop32());
  /* 10ca1f61 mov esp, ebp */
  ESP = (EBP);
  /* 10ca1f63 pop ebp */
  EBP = (pop32());
  /* 10ca1f64 ret  */
  ESPCHK(0x10ca1dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f70 @ 0x10ca1f70 (11 bytes, 6 insns) */
void f_10ca1f70(void) {
  FTRACE(0x10ca1f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca1f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca1f71 mov ebp, esp */
  EBP = (ESP);
  /* 10ca1f73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1f76 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1f79 pop ebp */
  EBP = (pop32());
  /* 10ca1f7a ret  */
  ESPCHK(0x10ca1f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f80 @ 0x10ca1f80 (147 bytes, 43 insns) */
void f_10ca1f80(void) {
  FTRACE(0x10ca1f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca1f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca1f81 mov ebp, esp */
  EBP = (ESP);
  /* 10ca1f83 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1f84 cmp dword ptr [0x10cbe600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1f8b jne 0x10ca1fa7 */
  if (!C.zf) goto L_10ca1fa7;
  /* 10ca1f8d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1f91 jl 0x10ca1fa2 */
  if ((C.sf!=C.of)) goto L_10ca1fa2;
  /* 10ca1f93 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1f97 jg 0x10ca1fa2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ca1fa2;
  /* 10ca1f99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1f9c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1f9f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ca1fa2:;
  /* 10ca1fa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1fa5 jmp 0x10ca200f */
  goto L_10ca200f;
L_10ca1fa7:;
  /* 10ca1fa7 push 0x10cbe78c */
  push32((uint32_t)(0x10cbe78cu));
  /* 10ca1fac call dword ptr [0x10cc024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc024c))), 0x10ca1fb2u);
  /* 10ca1fb2 cmp dword ptr [0x10cbe77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1fb9 je 0x10ca1fd9 */
  if (C.zf) goto L_10ca1fd9;
  /* 10ca1fbb push 0x10cbe78c */
  push32((uint32_t)(0x10cbe78cu));
  /* 10ca1fc0 call dword ptr [0x10cc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc023c))), 0x10ca1fc6u);
  /* 10ca1fc6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ca1fc8 call 0x10c961e0 */
  push32(0x10ca1fcdu); f_10c961e0();
  /* 10ca1fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1fd0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ca1fd7 jmp 0x10ca1fe0 */
  goto L_10ca1fe0;
L_10ca1fd9:;
  /* 10ca1fd9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ca1fe0:;
  /* 10ca1fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca1fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca1fe4 call 0x10ca2020 */
  push32(0x10ca1fe9u); f_10ca2020();
  /* 10ca1fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1fec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ca1fef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca1ff3 je 0x10ca2001 */
  if (C.zf) goto L_10ca2001;
  /* 10ca1ff5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ca1ff7 call 0x10c96280 */
  push32(0x10ca1ffcu); f_10c96280();
  /* 10ca1ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca1fff jmp 0x10ca200c */
  goto L_10ca200c;
L_10ca2001:;
  /* 10ca2001 push 0x10cbe78c */
  push32((uint32_t)(0x10cbe78cu));
  /* 10ca2006 call dword ptr [0x10cc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc023c))), 0x10ca200cu);
L_10ca200c:;
  /* 10ca200c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10ca200f:;
  /* 10ca200f mov esp, ebp */
  ESP = (EBP);
  /* 10ca2011 pop ebp */
  EBP = (pop32());
  /* 10ca2012 ret  */
  ESPCHK(0x10ca1f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012020 @ 0x10ca2020 (299 bytes, 91 insns) */
void f_10ca2020(void) {
  FTRACE(0x10ca2020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2020 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca2021 mov ebp, esp */
  EBP = (ESP);
  /* 10ca2023 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca2026 cmp dword ptr [0x10cbe600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca202d jne 0x10ca204c */
  if (!C.zf) goto L_10ca204c;
  /* 10ca202f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2033 jl 0x10ca2044 */
  if ((C.sf!=C.of)) goto L_10ca2044;
  /* 10ca2035 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2039 jg 0x10ca2044 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ca2044;
  /* 10ca203b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca203e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2041 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ca2044:;
  /* 10ca2044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2047 jmp 0x10ca2147 */
  goto L_10ca2147;
L_10ca204c:;
  /* 10ca204c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2053 jge 0x10ca2093 */
  if ((C.sf==C.of)) goto L_10ca2093;
  /* 10ca2055 cmp dword ptr [0x10cbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca205c jle 0x10ca2071 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca2071;
  /* 10ca205e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca2060 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2063 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2064 call 0x10c987f0 */
  push32(0x10ca2069u); f_10c987f0();
  /* 10ca2069 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca206c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ca206f jmp 0x10ca2085 */
  goto L_10ca2085;
L_10ca2071:;
  /* 10ca2071 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2074 mov eax, dword ptr [0x10cbcc98] */
  EAX = (r32((uint32_t)(0x10cbcc98)));
  /* 10ca2079 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca207b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ca207f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2082 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ca2085:;
  /* 10ca2085 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2089 jne 0x10ca2093 */
  if (!C.zf) goto L_10ca2093;
  /* 10ca208b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca208e jmp 0x10ca2147 */
  goto L_10ca2147;
L_10ca2093:;
  /* 10ca2093 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2096 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ca2099 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ca209f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ca20a5 mov eax, dword ptr [0x10cbcc98] */
  EAX = (r32((uint32_t)(0x10cbcc98)));
  /* 10ca20aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca20ac mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ca20b0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ca20b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca20b8 je 0x10ca20dc */
  if (C.zf) goto L_10ca20dc;
  /* 10ca20ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca20bd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ca20c0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ca20c6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10ca20c9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ca20cc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10ca20cf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10ca20d3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ca20da jmp 0x10ca20ed */
  goto L_10ca20ed;
L_10ca20dc:;
  /* 10ca20dc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ca20df mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10ca20e2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10ca20e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10ca20ed:;
  /* 10ca20ed push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca20ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca20f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ca20f3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ca20f6 push edx */
  push32((uint32_t)(EDX));
  /* 10ca20f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca20fa push eax */
  push32((uint32_t)(EAX));
  /* 10ca20fb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ca20fe push ecx */
  push32((uint32_t)(ECX));
  /* 10ca20ff push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ca2104 mov edx, dword ptr [0x10cbe600] */
  EDX = (r32((uint32_t)(0x10cbe600)));
  /* 10ca210a push edx */
  push32((uint32_t)(EDX));
  /* 10ca210b call 0x10c9abd0 */
  push32(0x10ca2110u); f_10c9abd0();
  /* 10ca2110 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2113 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca2116 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca211a jne 0x10ca2121 */
  if (!C.zf) goto L_10ca2121;
  /* 10ca211c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca211f jmp 0x10ca2147 */
  goto L_10ca2147;
L_10ca2121:;
  /* 10ca2121 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2125 jne 0x10ca2131 */
  if (!C.zf) goto L_10ca2131;
  /* 10ca2127 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca212a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca212f jmp 0x10ca2147 */
  goto L_10ca2147;
L_10ca2131:;
  /* 10ca2131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2134 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2139 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10ca213c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2142 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10ca2145 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10ca2147:;
  /* 10ca2147 mov esp, ebp */
  ESP = (EBP);
  /* 10ca2149 pop ebp */
  EBP = (pop32());
  /* 10ca214a ret  */
  ESPCHK(0x10ca2020u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10ca2150 (52 bytes, 19 insns) */
void f_10ca2150(void) {
  FTRACE(0x10ca2150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2150 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ca2154 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ca2158 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca215a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ca215e jne 0x10ca2169 */
  if (!C.zf) goto L_10ca2169;
  /* 10ca2160 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ca2164 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ca2166 ret 0x10 */
  ESPCHK(0x10ca2150u, _esp0);
  ESP += 20; return;
L_10ca2169:;
  /* 10ca2169 push ebx */
  push32((uint32_t)(EBX));
  /* 10ca216a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ca216c mov ebx, eax */
  EBX = (EAX);
  /* 10ca216e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ca2172 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ca2176 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2178 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ca217c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ca217e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2180 pop ebx */
  EBX = (pop32());
  /* 10ca2181 ret 0x10 */
  ESPCHK(0x10ca2150u, _esp0);
  ESP += 20; return;
}

/* FUN_10012190 @ 0x10ca2190 (46 bytes, 18 insns) */
void f_10ca2190(void) {
  FTRACE(0x10ca2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2190 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca2191 mov ebp, esp */
  EBP = (ESP);
  /* 10ca2193 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2194 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ca2196 call 0x10c961e0 */
  push32(0x10ca219bu); f_10c961e0();
  /* 10ca219b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca219e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca21a1 push eax */
  push32((uint32_t)(EAX));
  /* 10ca21a2 call 0x10ca21c0 */
  push32(0x10ca21a7u); f_10ca21c0();
  /* 10ca21a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca21aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca21ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ca21af call 0x10c96280 */
  push32(0x10ca21b4u); f_10c96280();
  /* 10ca21b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca21b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca21ba mov esp, ebp */
  ESP = (EBP);
  /* 10ca21bc pop ebp */
  EBP = (pop32());
  /* 10ca21bd ret  */
  ESPCHK(0x10ca2190u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10ca21c0 (198 bytes, 69 insns) */
void f_10ca21c0(void) {
  FTRACE(0x10ca21c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca21c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca21c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca21c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca21c6 mov eax, dword ptr [0x10cbe41c] */
  EAX = (r32((uint32_t)(0x10cbe41c)));
  /* 10ca21cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ca21ce cmp dword ptr [0x10cbff20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbff20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca21d5 jne 0x10ca21de */
  if (!C.zf) goto L_10ca21de;
  /* 10ca21d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca21d9 jmp 0x10ca2282 */
  goto L_10ca2282;
L_10ca21de:;
  /* 10ca21de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca21e2 jne 0x10ca2206 */
  if (!C.zf) goto L_10ca2206;
  /* 10ca21e4 cmp dword ptr [0x10cbe424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca21eb je 0x10ca2206 */
  if (C.zf) goto L_10ca2206;
  /* 10ca21ed call 0x10ca22e0 */
  push32(0x10ca21f2u); f_10ca22e0();
  /* 10ca21f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca21f4 je 0x10ca21fd */
  if (C.zf) goto L_10ca21fd;
  /* 10ca21f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca21f8 jmp 0x10ca2282 */
  goto L_10ca2282;
L_10ca21fd:;
  /* 10ca21fd mov ecx, dword ptr [0x10cbe41c] */
  ECX = (r32((uint32_t)(0x10cbe41c)));
  /* 10ca2203 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ca2206:;
  /* 10ca2206 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca220a je 0x10ca2280 */
  if (C.zf) goto L_10ca2280;
  /* 10ca220c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2210 je 0x10ca2280 */
  if (C.zf) goto L_10ca2280;
  /* 10ca2212 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2215 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2216 call 0x10c95610 */
  push32(0x10ca221bu); f_10c95610();
  /* 10ca221b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca221e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ca2221:;
  /* 10ca2221 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2224 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2227 je 0x10ca2280 */
  if (C.zf) goto L_10ca2280;
  /* 10ca2229 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca222c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca222e push edx */
  push32((uint32_t)(EDX));
  /* 10ca222f call 0x10c95610 */
  push32(0x10ca2234u); f_10c95610();
  /* 10ca2234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2237 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca223a jbe 0x10ca2275 */
  if ((C.cf||C.zf)) goto L_10ca2275;
  /* 10ca223c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca223f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca2241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2244 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10ca2248 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca224b jne 0x10ca2275 */
  if (!C.zf) goto L_10ca2275;
  /* 10ca224d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2250 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2254 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2255 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2258 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca225a push ecx */
  push32((uint32_t)(ECX));
  /* 10ca225b call 0x10ca2290 */
  push32(0x10ca2260u); f_10ca2290();
  /* 10ca2260 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2263 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca2265 jne 0x10ca2275 */
  if (!C.zf) goto L_10ca2275;
  /* 10ca2267 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca226a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca226c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca226f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10ca2273 jmp 0x10ca2282 */
  goto L_10ca2282;
L_10ca2275:;
  /* 10ca2275 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2278 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca227b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ca227e jmp 0x10ca2221 */
  goto L_10ca2221;
L_10ca2280:;
  /* 10ca2280 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ca2282:;
  /* 10ca2282 mov esp, ebp */
  ESP = (EBP);
  /* 10ca2284 pop ebp */
  EBP = (pop32());
  /* 10ca2285 ret  */
  ESPCHK(0x10ca21c0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10ca2290 (79 bytes, 32 insns) */
void f_10ca2290(void) {
  FTRACE(0x10ca2290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2290 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca2291 mov ebp, esp */
  EBP = (ESP);
  /* 10ca2293 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2294 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2298 jne 0x10ca229e */
  if (!C.zf) goto L_10ca229e;
  /* 10ca229a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca229c jmp 0x10ca22db */
  goto L_10ca22db;
L_10ca229e:;
  /* 10ca229e mov eax, dword ptr [0x10cbfae4] */
  EAX = (r32((uint32_t)(0x10cbfae4)));
  /* 10ca22a3 push eax */
  push32((uint32_t)(EAX));
  /* 10ca22a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca22a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca22a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca22ab push edx */
  push32((uint32_t)(EDX));
  /* 10ca22ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca22af push eax */
  push32((uint32_t)(EAX));
  /* 10ca22b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca22b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca22b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca22b6 mov edx, dword ptr [0x10cbfd84] */
  EDX = (r32((uint32_t)(0x10cbfd84)));
  /* 10ca22bc push edx */
  push32((uint32_t)(EDX));
  /* 10ca22bd call 0x10ca2390 */
  push32(0x10ca22c2u); f_10ca2390();
  /* 10ca22c2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca22c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca22c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca22cc jne 0x10ca22d5 */
  if (!C.zf) goto L_10ca22d5;
  /* 10ca22ce mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10ca22d3 jmp 0x10ca22db */
  goto L_10ca22db;
L_10ca22d5:;
  /* 10ca22d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca22d8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10ca22db:;
  /* 10ca22db mov esp, ebp */
  ESP = (EBP);
  /* 10ca22dd pop ebp */
  EBP = (pop32());
  /* 10ca22de ret  */
  ESPCHK(0x10ca2290u, _esp0);
  ESP += 4; return;
}

/* FUN_100122e0 @ 0x10ca22e0 (174 bytes, 66 insns) */
void f_10ca22e0(void) {
  FTRACE(0x10ca22e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca22e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca22e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca22e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca22e6 mov eax, dword ptr [0x10cbe424] */
  EAX = (r32((uint32_t)(0x10cbe424)));
  /* 10ca22eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ca22ee:;
  /* 10ca22ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca22f1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca22f4 je 0x10ca2388 */
  if (C.zf) goto L_10ca2388;
  /* 10ca22fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca22fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca22fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca2300 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca2302 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca2304 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2307 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca2309 push eax */
  push32((uint32_t)(EAX));
  /* 10ca230a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca230c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca230e call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10ca2314u);
  /* 10ca2314 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ca2317 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca231b jne 0x10ca2322 */
  if (!C.zf) goto L_10ca2322;
  /* 10ca231d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2320 jmp 0x10ca238a */
  goto L_10ca238a;
L_10ca2322:;
  /* 10ca2322 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10ca2324 push 0x10cba854 */
  push32((uint32_t)(0x10cba854u));
  /* 10ca2329 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca232b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca232e push ecx */
  push32((uint32_t)(ECX));
  /* 10ca232f call 0x10c927e0 */
  push32(0x10ca2334u); f_10c927e0();
  /* 10ca2334 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2337 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ca233a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca233e jne 0x10ca2345 */
  if (!C.zf) goto L_10ca2345;
  /* 10ca2340 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2343 jmp 0x10ca238a */
  goto L_10ca238a;
L_10ca2345:;
  /* 10ca2345 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca2347 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca2349 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca234c push edx */
  push32((uint32_t)(EDX));
  /* 10ca234d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2350 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2351 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca2353 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2356 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca2358 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2359 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca235b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca235d call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10ca2363u);
  /* 10ca2363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca2365 jne 0x10ca236c */
  if (!C.zf) goto L_10ca236c;
  /* 10ca2367 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca236a jmp 0x10ca238a */
  goto L_10ca238a;
L_10ca236c:;
  /* 10ca236c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca236e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2371 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2372 call 0x10ca27e0 */
  push32(0x10ca2377u); f_10ca27e0();
  /* 10ca2377 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca237a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca237d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2380 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca2383 jmp 0x10ca22ee */
  goto L_10ca22ee;
L_10ca2388:;
  /* 10ca2388 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ca238a:;
  /* 10ca238a mov esp, ebp */
  ESP = (EBP);
  /* 10ca238c pop ebp */
  EBP = (pop32());
  /* 10ca238d ret  */
  ESPCHK(0x10ca22e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012390 @ 0x10ca2390 (970 bytes, 340 insns) */
void f_10ca2390(void) {
  FTRACE(0x10ca2390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2390 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca2391 mov ebp, esp */
  EBP = (ESP);
  /* 10ca2393 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ca2395 push 0x10cba8a8 */
  push32((uint32_t)(0x10cba8a8u));
  /* 10ca239a push 0x10c9b8e8 */
  push32((uint32_t)(0x10c9b8e8u));
  /* 10ca239f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ca23a5 push eax */
  push32((uint32_t)(EAX));
  /* 10ca23a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ca23ad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca23b0 push ebx */
  push32((uint32_t)(EBX));
  /* 10ca23b1 push esi */
  push32((uint32_t)(ESI));
  /* 10ca23b2 push edi */
  push32((uint32_t)(EDI));
  /* 10ca23b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ca23b6 cmp dword ptr [0x10cbe764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca23bd jne 0x10ca2416 */
  if (!C.zf) goto L_10ca2416;
  /* 10ca23bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca23c1 push 0x10cb9f04 */
  push32((uint32_t)(0x10cb9f04u));
  /* 10ca23c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca23c8 push 0x10cb9f04 */
  push32((uint32_t)(0x10cb9f04u));
  /* 10ca23cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca23cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca23d1 call dword ptr [0x10cc0218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0218))), 0x10ca23d7u);
  /* 10ca23d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca23d9 je 0x10ca23e7 */
  if (C.zf) goto L_10ca23e7;
  /* 10ca23db mov dword ptr [0x10cbe764], 1 */
  w32((uint32_t)(0x10cbe764), (0x1u));
  /* 10ca23e5 jmp 0x10ca2416 */
  goto L_10ca2416;
L_10ca23e7:;
  /* 10ca23e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca23e9 push 0x10cb9f00 */
  push32((uint32_t)(0x10cb9f00u));
  /* 10ca23ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca23f0 push 0x10cb9f00 */
  push32((uint32_t)(0x10cb9f00u));
  /* 10ca23f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca23f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca23f9 call dword ptr [0x10cc0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0224))), 0x10ca23ffu);
  /* 10ca23ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca2401 je 0x10ca240f */
  if (C.zf) goto L_10ca240f;
  /* 10ca2403 mov dword ptr [0x10cbe764], 2 */
  w32((uint32_t)(0x10cbe764), (0x2u));
  /* 10ca240d jmp 0x10ca2416 */
  goto L_10ca2416;
L_10ca240f:;
  /* 10ca240f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2411 jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca2416:;
  /* 10ca2416 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca241a jle 0x10ca242f */
  if ((C.zf||C.sf!=C.of)) goto L_10ca242f;
  /* 10ca241c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca241f push eax */
  push32((uint32_t)(EAX));
  /* 10ca2420 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca2423 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2424 call 0x10ca2790 */
  push32(0x10ca2429u); f_10ca2790();
  /* 10ca2429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca242c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10ca242f:;
  /* 10ca242f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2433 jle 0x10ca2448 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca2448;
  /* 10ca2435 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ca2438 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2439 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca243c push eax */
  push32((uint32_t)(EAX));
  /* 10ca243d call 0x10ca2790 */
  push32(0x10ca2442u); f_10ca2790();
  /* 10ca2442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2445 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10ca2448:;
  /* 10ca2448 cmp dword ptr [0x10cbe764], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe764))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca244f jne 0x10ca2474 */
  if (!C.zf) goto L_10ca2474;
  /* 10ca2451 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ca2454 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2455 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca2458 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2459 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca245c push eax */
  push32((uint32_t)(EAX));
  /* 10ca245d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca2460 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2461 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca2464 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2465 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2468 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2469 call dword ptr [0x10cc0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0224))), 0x10ca246fu);
  /* 10ca246f jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca2474:;
  /* 10ca2474 cmp dword ptr [0x10cbe764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca247b jne 0x10ca2772 */
  if (!C.zf) goto L_10ca2772;
  /* 10ca2481 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2485 jne 0x10ca2490 */
  if (!C.zf) goto L_10ca2490;
  /* 10ca2487 mov ecx, dword ptr [0x10cbe610] */
  ECX = (r32((uint32_t)(0x10cbe610)));
  /* 10ca248d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10ca2490:;
  /* 10ca2490 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2494 je 0x10ca24a0 */
  if (C.zf) goto L_10ca24a0;
  /* 10ca2496 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca249a jne 0x10ca261c */
  if (!C.zf) goto L_10ca261c;
L_10ca24a0:;
  /* 10ca24a0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca24a3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca24a6 jne 0x10ca24b2 */
  if (!C.zf) goto L_10ca24b2;
  /* 10ca24a8 mov eax, 2 */
  EAX = (0x2u);
  /* 10ca24ad jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca24b2:;
  /* 10ca24b2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca24b6 jle 0x10ca24c2 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca24c2;
  /* 10ca24b8 mov eax, 1 */
  EAX = (0x1u);
  /* 10ca24bd jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca24c2:;
  /* 10ca24c2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca24c6 jle 0x10ca24d2 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca24d2;
  /* 10ca24c8 mov eax, 3 */
  EAX = (0x3u);
  /* 10ca24cd jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca24d2:;
  /* 10ca24d2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10ca24d5 push eax */
  push32((uint32_t)(EAX));
  /* 10ca24d6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ca24d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca24da call dword ptr [0x10cc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02e4))), 0x10ca24e0u);
  /* 10ca24e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca24e2 jne 0x10ca24eb */
  if (!C.zf) goto L_10ca24eb;
  /* 10ca24e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca24e6 jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca24eb:;
  /* 10ca24eb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca24ef jne 0x10ca24f7 */
  if (!C.zf) goto L_10ca24f7;
  /* 10ca24f1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca24f5 je 0x10ca2524 */
  if (C.zf) goto L_10ca2524;
L_10ca24f7:;
  /* 10ca24f7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca24fb jne 0x10ca2503 */
  if (!C.zf) goto L_10ca2503;
  /* 10ca24fd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2501 je 0x10ca2524 */
  if (C.zf) goto L_10ca2524;
L_10ca2503:;
  /* 10ca2503 push 0x10cba868 */
  push32((uint32_t)(0x10cba868u));
  /* 10ca2508 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca250a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10ca250f push 0x10cba860 */
  push32((uint32_t)(0x10cba860u));
  /* 10ca2514 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca2516 call 0x10c918a0 */
  push32(0x10ca251bu); f_10c918a0();
  /* 10ca251b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca251e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2521 jne 0x10ca2524 */
  if (!C.zf) goto L_10ca2524;
  /* 10ca2523 int3  */
  x86_unimpl("int3 @ 0x10ca2523");
L_10ca2524:;
  /* 10ca2524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca2526 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca2528 jne 0x10ca24eb */
  if (!C.zf) goto L_10ca24eb;
  /* 10ca252a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca252e jle 0x10ca25a3 */
  if ((C.zf||C.sf!=C.of)) goto L_10ca25a3;
  /* 10ca2530 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2534 jae 0x10ca2540 */
  if (!C.cf) goto L_10ca2540;
  /* 10ca2536 mov eax, 3 */
  EAX = (0x3u);
  /* 10ca253b jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca2540:;
  /* 10ca2540 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10ca2543 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10ca2546 jmp 0x10ca2551 */
  goto L_10ca2551;
L_10ca2548:;
  /* 10ca2548 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ca254b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca254e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10ca2551:;
  /* 10ca2551 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ca2554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2556 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca2558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca255a je 0x10ca2599 */
  if (C.zf) goto L_10ca2599;
  /* 10ca255c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ca255f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca2561 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10ca2564 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca2566 je 0x10ca2599 */
  if (C.zf) goto L_10ca2599;
  /* 10ca2568 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca256b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca256d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ca256f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ca2572 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2574 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca2576 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2578 jl 0x10ca2597 */
  if ((C.sf!=C.of)) goto L_10ca2597;
  /* 10ca257a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca257d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca257f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ca2581 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ca2584 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2586 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ca2589 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca258b jg 0x10ca2597 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ca2597;
  /* 10ca258d mov eax, 2 */
  EAX = (0x2u);
  /* 10ca2592 jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca2597:;
  /* 10ca2597 jmp 0x10ca2548 */
  goto L_10ca2548;
L_10ca2599:;
  /* 10ca2599 mov eax, 3 */
  EAX = (0x3u);
  /* 10ca259e jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca25a3:;
  /* 10ca25a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca25a7 jle 0x10ca261c */
  if ((C.zf||C.sf!=C.of)) goto L_10ca261c;
  /* 10ca25a9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca25ad jae 0x10ca25b9 */
  if (!C.cf) goto L_10ca25b9;
  /* 10ca25af mov eax, 1 */
  EAX = (0x1u);
  /* 10ca25b4 jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca25b9:;
  /* 10ca25b9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10ca25bc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10ca25bf jmp 0x10ca25ca */
  goto L_10ca25ca;
L_10ca25c1:;
  /* 10ca25c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ca25c4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca25c7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10ca25ca:;
  /* 10ca25ca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ca25cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca25cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ca25d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca25d3 je 0x10ca2612 */
  if (C.zf) goto L_10ca2612;
  /* 10ca25d5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ca25d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca25da mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ca25dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca25df je 0x10ca2612 */
  if (C.zf) goto L_10ca2612;
  /* 10ca25e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca25e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca25e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ca25e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ca25eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca25ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ca25ef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca25f1 jl 0x10ca2610 */
  if ((C.sf!=C.of)) goto L_10ca2610;
  /* 10ca25f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca25f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca25f8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ca25fa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ca25fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca25ff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ca2602 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2604 jg 0x10ca2610 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ca2610;
  /* 10ca2606 mov eax, 2 */
  EAX = (0x2u);
  /* 10ca260b jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca2610:;
  /* 10ca2610 jmp 0x10ca25c1 */
  goto L_10ca25c1;
L_10ca2612:;
  /* 10ca2612 mov eax, 1 */
  EAX = (0x1u);
  /* 10ca2617 jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca261c:;
  /* 10ca261c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca261e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca2620 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca2623 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2624 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca2627 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2628 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ca262a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ca262d push eax */
  push32((uint32_t)(EAX));
  /* 10ca262e call dword ptr [0x10cc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ac))), 0x10ca2634u);
  /* 10ca2634 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ca2637 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca263b jne 0x10ca2644 */
  if (!C.zf) goto L_10ca2644;
  /* 10ca263d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca263f jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca2644:;
  /* 10ca2644 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ca264b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ca264e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ca2650 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2653 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ca2655 call 0x10c95980 */
  push32(0x10ca265au); f_10c95980();
  /* 10ca265a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10ca265d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ca2660 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ca2663 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ca2666 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ca266d jmp 0x10ca2686 */
  goto L_10ca2686;
  /* 10ca266f mov eax, 1 */
  EAX = (0x1u);
  /* 10ca2674 ret  */
  ESPCHK(0x10ca2390u, _esp0);
  ESP += 4; return;
  /* 10ca2675 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca2678 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ca267f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ca2686:;
  /* 10ca2686 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca268a jne 0x10ca2693 */
  if (!C.zf) goto L_10ca2693;
  /* 10ca268c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca268e jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca2693:;
  /* 10ca2693 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ca2696 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2697 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ca269a push eax */
  push32((uint32_t)(EAX));
  /* 10ca269b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ca269e push ecx */
  push32((uint32_t)(ECX));
  /* 10ca269f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ca26a2 push edx */
  push32((uint32_t)(EDX));
  /* 10ca26a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca26a5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ca26a8 push eax */
  push32((uint32_t)(EAX));
  /* 10ca26a9 call dword ptr [0x10cc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ac))), 0x10ca26afu);
  /* 10ca26af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca26b1 jne 0x10ca26ba */
  if (!C.zf) goto L_10ca26ba;
  /* 10ca26b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca26b5 jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca26ba:;
  /* 10ca26ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca26bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ca26be mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ca26c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca26c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca26c5 push edx */
  push32((uint32_t)(EDX));
  /* 10ca26c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ca26c8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ca26cb push eax */
  push32((uint32_t)(EAX));
  /* 10ca26cc call dword ptr [0x10cc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ac))), 0x10ca26d2u);
  /* 10ca26d2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ca26d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca26d9 jne 0x10ca26e2 */
  if (!C.zf) goto L_10ca26e2;
  /* 10ca26db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca26dd jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca26e2:;
  /* 10ca26e2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ca26e9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ca26ec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ca26ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca26f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ca26f3 call 0x10c95980 */
  push32(0x10ca26f8u); f_10c95980();
  /* 10ca26f8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10ca26fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ca26fe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ca2701 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10ca2704 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ca270b jmp 0x10ca2724 */
  goto L_10ca2724;
  /* 10ca270d mov eax, 1 */
  EAX = (0x1u);
  /* 10ca2712 ret  */
  ESPCHK(0x10ca2390u, _esp0);
  ESP += 4; return;
  /* 10ca2713 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca2716 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10ca271d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ca2724:;
  /* 10ca2724 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2728 jne 0x10ca272e */
  if (!C.zf) goto L_10ca272e;
  /* 10ca272a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca272c jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca272e:;
  /* 10ca272e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ca2731 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2732 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ca2735 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2736 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ca2739 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca273a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ca273d push edx */
  push32((uint32_t)(EDX));
  /* 10ca273e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ca2740 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ca2743 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2744 call dword ptr [0x10cc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ac))), 0x10ca274au);
  /* 10ca274a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca274c jne 0x10ca2752 */
  if (!C.zf) goto L_10ca2752;
  /* 10ca274e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2750 jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca2752:;
  /* 10ca2752 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ca2755 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2756 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ca2759 push edx */
  push32((uint32_t)(EDX));
  /* 10ca275a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ca275d push eax */
  push32((uint32_t)(EAX));
  /* 10ca275e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ca2761 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2762 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca2765 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2769 push eax */
  push32((uint32_t)(EAX));
  /* 10ca276a call dword ptr [0x10cc0218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0218))), 0x10ca2770u);
  /* 10ca2770 jmp 0x10ca2774 */
  goto L_10ca2774;
L_10ca2772:;
  /* 10ca2772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ca2774:;
  /* 10ca2774 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10ca2777 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca277a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ca2781 pop edi */
  EDI = (pop32());
  /* 10ca2782 pop esi */
  ESI = (pop32());
  /* 10ca2783 pop ebx */
  EBX = (pop32());
  /* 10ca2784 mov esp, ebp */
  ESP = (EBP);
  /* 10ca2786 pop ebp */
  EBP = (pop32());
  /* 10ca2787 ret  */
  ESPCHK(0x10ca2390u, _esp0);
  ESP += 4; return;
}

/* FUN_10012790 @ 0x10ca2790 (80 bytes, 32 insns) */
void f_10ca2790(void) {
  FTRACE(0x10ca2790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2790 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca2791 mov ebp, esp */
  EBP = (ESP);
  /* 10ca2793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca2796 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca2799 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ca279c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca279f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ca27a2:;
  /* 10ca27a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca27a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca27a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca27ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ca27ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca27b0 je 0x10ca27c7 */
  if (C.zf) goto L_10ca27c7;
  /* 10ca27b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca27b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ca27b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca27ba je 0x10ca27c7 */
  if (C.zf) goto L_10ca27c7;
  /* 10ca27bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca27bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca27c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca27c5 jmp 0x10ca27a2 */
  goto L_10ca27a2;
L_10ca27c7:;
  /* 10ca27c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca27ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ca27cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca27cf jne 0x10ca27d9 */
  if (!C.zf) goto L_10ca27d9;
  /* 10ca27d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca27d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca27d7 jmp 0x10ca27dc */
  goto L_10ca27dc;
L_10ca27d9:;
  /* 10ca27d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10ca27dc:;
  /* 10ca27dc mov esp, ebp */
  ESP = (EBP);
  /* 10ca27de pop ebp */
  EBP = (pop32());
  /* 10ca27df ret  */
  ESPCHK(0x10ca2790u, _esp0);
  ESP += 4; return;
}

/* FUN_100127e0 @ 0x10ca27e0 (736 bytes, 224 insns) */
void f_10ca27e0(void) {
  FTRACE(0x10ca27e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca27e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca27e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca27e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca27e6 push esi */
  push32((uint32_t)(ESI));
  /* 10ca27e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca27eb je 0x10ca280c */
  if (C.zf) goto L_10ca280c;
  /* 10ca27ed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10ca27ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca27f2 push eax */
  push32((uint32_t)(EAX));
  /* 10ca27f3 call 0x10ca2c30 */
  push32(0x10ca27f8u); f_10ca2c30();
  /* 10ca27f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca27fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ca27fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2802 je 0x10ca280c */
  if (C.zf) goto L_10ca280c;
  /* 10ca2804 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2807 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca280a jne 0x10ca2814 */
  if (!C.zf) goto L_10ca2814;
L_10ca280c:;
  /* 10ca280c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca280f jmp 0x10ca2abb */
  goto L_10ca2abb;
L_10ca2814:;
  /* 10ca2814 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca2817 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ca281b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ca281d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca281f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ca2820 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ca2823 mov ecx, dword ptr [0x10cbe41c] */
  ECX = (r32((uint32_t)(0x10cbe41c)));
  /* 10ca2829 cmp ecx, dword ptr [0x10cbe420] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbe420))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca282f jne 0x10ca2845 */
  if (!C.zf) goto L_10ca2845;
  /* 10ca2831 mov edx, dword ptr [0x10cbe41c] */
  EDX = (r32((uint32_t)(0x10cbe41c)));
  /* 10ca2837 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2838 call 0x10ca2b40 */
  push32(0x10ca283du); f_10ca2b40();
  /* 10ca283d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2840 mov dword ptr [0x10cbe41c], eax */
  w32((uint32_t)(0x10cbe41c), (EAX));
L_10ca2845:;
  /* 10ca2845 cmp dword ptr [0x10cbe41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca284c jne 0x10ca2905 */
  if (!C.zf) goto L_10ca2905;
  /* 10ca2852 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2856 je 0x10ca2877 */
  if (C.zf) goto L_10ca2877;
  /* 10ca2858 cmp dword ptr [0x10cbe424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca285f je 0x10ca2877 */
  if (C.zf) goto L_10ca2877;
  /* 10ca2861 call 0x10ca22e0 */
  push32(0x10ca2866u); f_10ca22e0();
  /* 10ca2866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca2868 je 0x10ca2872 */
  if (C.zf) goto L_10ca2872;
  /* 10ca286a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca286d jmp 0x10ca2abb */
  goto L_10ca2abb;
L_10ca2872:;
  /* 10ca2872 jmp 0x10ca2905 */
  goto L_10ca2905;
L_10ca2877:;
  /* 10ca2877 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca287b je 0x10ca2884 */
  if (C.zf) goto L_10ca2884;
  /* 10ca287d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca287f jmp 0x10ca2abb */
  goto L_10ca2abb;
L_10ca2884:;
  /* 10ca2884 cmp dword ptr [0x10cbe41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca288b jne 0x10ca28c4 */
  if (!C.zf) goto L_10ca28c4;
  /* 10ca288d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10ca2892 push 0x10cba8c0 */
  push32((uint32_t)(0x10cba8c0u));
  /* 10ca2897 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca2899 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ca289b call 0x10c927e0 */
  push32(0x10ca28a0u); f_10c927e0();
  /* 10ca28a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca28a3 mov dword ptr [0x10cbe41c], eax */
  w32((uint32_t)(0x10cbe41c), (EAX));
  /* 10ca28a8 cmp dword ptr [0x10cbe41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca28af jne 0x10ca28b9 */
  if (!C.zf) goto L_10ca28b9;
  /* 10ca28b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca28b4 jmp 0x10ca2abb */
  goto L_10ca2abb;
L_10ca28b9:;
  /* 10ca28b9 mov eax, dword ptr [0x10cbe41c] */
  EAX = (r32((uint32_t)(0x10cbe41c)));
  /* 10ca28be mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ca28c4:;
  /* 10ca28c4 cmp dword ptr [0x10cbe424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca28cb jne 0x10ca2905 */
  if (!C.zf) goto L_10ca2905;
  /* 10ca28cd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10ca28d2 push 0x10cba8c0 */
  push32((uint32_t)(0x10cba8c0u));
  /* 10ca28d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca28d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ca28db call 0x10c927e0 */
  push32(0x10ca28e0u); f_10c927e0();
  /* 10ca28e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca28e3 mov dword ptr [0x10cbe424], eax */
  w32((uint32_t)(0x10cbe424), (EAX));
  /* 10ca28e8 cmp dword ptr [0x10cbe424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca28ef jne 0x10ca28f9 */
  if (!C.zf) goto L_10ca28f9;
  /* 10ca28f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca28f4 jmp 0x10ca2abb */
  goto L_10ca2abb;
L_10ca28f9:;
  /* 10ca28f9 mov ecx, dword ptr [0x10cbe424] */
  ECX = (r32((uint32_t)(0x10cbe424)));
  /* 10ca28ff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10ca2905:;
  /* 10ca2905 mov edx, dword ptr [0x10cbe41c] */
  EDX = (r32((uint32_t)(0x10cbe41c)));
  /* 10ca290b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ca290e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca2911 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca2914 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2915 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2918 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2919 call 0x10ca2ac0 */
  push32(0x10ca291eu); f_10ca2ac0();
  /* 10ca291e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2921 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ca2924 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2928 jl 0x10ca29c1 */
  if ((C.sf!=C.of)) goto L_10ca29c1;
  /* 10ca292e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2931 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2934 je 0x10ca29c1 */
  if (C.zf) goto L_10ca29c1;
  /* 10ca293a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca293e je 0x10ca29b3 */
  if (C.zf) goto L_10ca29b3;
  /* 10ca2940 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca2942 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2945 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2948 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ca294b push edx */
  push32((uint32_t)(EDX));
  /* 10ca294c call 0x10c93270 */
  push32(0x10ca2951u); f_10c93270();
  /* 10ca2951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2954 jmp 0x10ca295f */
  goto L_10ca295f;
L_10ca2956:;
  /* 10ca2956 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2959 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca295c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ca295f:;
  /* 10ca295f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2962 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2965 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2969 je 0x10ca2980 */
  if (C.zf) goto L_10ca2980;
  /* 10ca296b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca296e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2971 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2974 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2977 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10ca297b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10ca297e jmp 0x10ca2956 */
  goto L_10ca2956;
L_10ca2980:;
  /* 10ca2980 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10ca2985 push 0x10cba8c0 */
  push32((uint32_t)(0x10cba8c0u));
  /* 10ca298a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca298c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca298f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ca2992 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2993 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2996 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2997 call 0x10c92c70 */
  push32(0x10ca299cu); f_10c92c70();
  /* 10ca299c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca299f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ca29a2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca29a6 je 0x10ca29b1 */
  if (C.zf) goto L_10ca29b1;
  /* 10ca29a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca29ab mov dword ptr [0x10cbe41c], edx */
  w32((uint32_t)(0x10cbe41c), (EDX));
L_10ca29b1:;
  /* 10ca29b1 jmp 0x10ca29bf */
  goto L_10ca29bf;
L_10ca29b3:;
  /* 10ca29b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca29b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca29b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca29bc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10ca29bf:;
  /* 10ca29bf jmp 0x10ca2a34 */
  goto L_10ca2a34;
L_10ca29c1:;
  /* 10ca29c1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca29c5 jne 0x10ca2a2d */
  if (!C.zf) goto L_10ca2a2d;
  /* 10ca29c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca29cb jge 0x10ca29d5 */
  if ((C.sf==C.of)) goto L_10ca29d5;
  /* 10ca29cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca29d0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ca29d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ca29d5:;
  /* 10ca29d5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10ca29da push 0x10cba8c0 */
  push32((uint32_t)(0x10cba8c0u));
  /* 10ca29df push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca29e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca29e4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10ca29eb push edx */
  push32((uint32_t)(EDX));
  /* 10ca29ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca29ef push eax */
  push32((uint32_t)(EAX));
  /* 10ca29f0 call 0x10c92c70 */
  push32(0x10ca29f5u); f_10c92c70();
  /* 10ca29f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca29f8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ca29fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca29ff jne 0x10ca2a09 */
  if (!C.zf) goto L_10ca2a09;
  /* 10ca2a01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2a04 jmp 0x10ca2abb */
  goto L_10ca2abb;
L_10ca2a09:;
  /* 10ca2a09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2a0c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2a0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2a12 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10ca2a15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2a18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2a1b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10ca2a23 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2a26 mov dword ptr [0x10cbe41c], eax */
  w32((uint32_t)(0x10cbe41c), (EAX));
  /* 10ca2a2b jmp 0x10ca2a34 */
  goto L_10ca2a34;
L_10ca2a2d:;
  /* 10ca2a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2a2f jmp 0x10ca2abb */
  goto L_10ca2abb;
L_10ca2a34:;
  /* 10ca2a34 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2a38 je 0x10ca2ab9 */
  if (C.zf) goto L_10ca2ab9;
  /* 10ca2a3a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10ca2a3f push 0x10cba8c0 */
  push32((uint32_t)(0x10cba8c0u));
  /* 10ca2a44 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca2a46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2a49 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2a4a call 0x10c95610 */
  push32(0x10ca2a4fu); f_10c95610();
  /* 10ca2a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2a52 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2a55 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2a56 call 0x10c927e0 */
  push32(0x10ca2a5bu); f_10c927e0();
  /* 10ca2a5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2a5e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ca2a61 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2a65 je 0x10ca2ab9 */
  if (C.zf) goto L_10ca2ab9;
  /* 10ca2a67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2a6a push edx */
  push32((uint32_t)(EDX));
  /* 10ca2a6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca2a6e push eax */
  push32((uint32_t)(EAX));
  /* 10ca2a6f call 0x10c95790 */
  push32(0x10ca2a74u); f_10c95790();
  /* 10ca2a74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2a77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ca2a7a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca2a7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca2a80 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2a82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ca2a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2a88 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ca2a8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2a8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2a91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca2a94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ca2a97 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ca2a99 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca2a9b not edx */
  EDX = (~(EDX));
  /* 10ca2a9d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ca2aa0 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2aa1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca2aa4 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2aa5 call dword ptr [0x10cc0214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0214))), 0x10ca2aabu);
  /* 10ca2aab push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca2aad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca2ab0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2ab1 call 0x10c93270 */
  push32(0x10ca2ab6u); f_10c93270();
  /* 10ca2ab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca2ab9:;
  /* 10ca2ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ca2abb:;
  /* 10ca2abb pop esi */
  ESI = (pop32());
  /* 10ca2abc mov esp, ebp */
  ESP = (EBP);
  /* 10ca2abe pop ebp */
  EBP = (pop32());
  /* 10ca2abf ret  */
  ESPCHK(0x10ca27e0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10ca2ac0 (124 bytes, 47 insns) */
void f_10ca2ac0(void) {
  FTRACE(0x10ca2ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca2ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10ca2ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2ac4 mov eax, dword ptr [0x10cbe41c] */
  EAX = (r32((uint32_t)(0x10cbe41c)));
  /* 10ca2ac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ca2acc jmp 0x10ca2ad7 */
  goto L_10ca2ad7;
L_10ca2ace:;
  /* 10ca2ace mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2ad1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2ad4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ca2ad7:;
  /* 10ca2ad7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2ada cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2add je 0x10ca2b2a */
  if (C.zf) goto L_10ca2b2a;
  /* 10ca2adf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca2ae2 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2ae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2ae6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca2ae8 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2ae9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2aec push eax */
  push32((uint32_t)(EAX));
  /* 10ca2aed call 0x10ca2290 */
  push32(0x10ca2af2u); f_10ca2290();
  /* 10ca2af2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2af5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ca2af7 jne 0x10ca2b28 */
  if (!C.zf) goto L_10ca2b28;
  /* 10ca2af9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2afc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca2afe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca2b01 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10ca2b05 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2b08 je 0x10ca2b1a */
  if (C.zf) goto L_10ca2b1a;
  /* 10ca2b0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2b0d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca2b0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca2b12 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10ca2b16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca2b18 jne 0x10ca2b28 */
  if (!C.zf) goto L_10ca2b28;
L_10ca2b1a:;
  /* 10ca2b1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2b1d sub eax, dword ptr [0x10cbe41c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbe41c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca2b23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ca2b26 jmp 0x10ca2b38 */
  goto L_10ca2b38;
L_10ca2b28:;
  /* 10ca2b28 jmp 0x10ca2ace */
  goto L_10ca2ace;
L_10ca2b2a:;
  /* 10ca2b2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2b2d sub eax, dword ptr [0x10cbe41c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbe41c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca2b33 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ca2b36 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10ca2b38:;
  /* 10ca2b38 mov esp, ebp */
  ESP = (EBP);
  /* 10ca2b3a pop ebp */
  EBP = (pop32());
  /* 10ca2b3b ret  */
  ESPCHK(0x10ca2ac0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10ca2b40 (238 bytes, 80 insns) */
void f_10ca2b40(void) {
  FTRACE(0x10ca2b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca2b41 mov ebp, esp */
  EBP = (ESP);
  /* 10ca2b43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca2b46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ca2b4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2b50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ca2b53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2b57 jne 0x10ca2b60 */
  if (!C.zf) goto L_10ca2b60;
  /* 10ca2b59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2b5b jmp 0x10ca2c2a */
  goto L_10ca2c2a;
L_10ca2b60:;
  /* 10ca2b60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2b63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca2b65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2b68 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2b6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ca2b6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca2b70 je 0x10ca2b7d */
  if (C.zf) goto L_10ca2b7d;
  /* 10ca2b72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca2b75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2b78 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ca2b7b jmp 0x10ca2b60 */
  goto L_10ca2b60;
L_10ca2b7d:;
  /* 10ca2b7d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10ca2b82 push 0x10cba8c0 */
  push32((uint32_t)(0x10cba8c0u));
  /* 10ca2b87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca2b89 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ca2b8c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10ca2b93 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2b94 call 0x10c927e0 */
  push32(0x10ca2b99u); f_10c927e0();
  /* 10ca2b99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2b9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ca2b9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2ba2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ca2ba5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2ba9 jne 0x10ca2bb5 */
  if (!C.zf) goto L_10ca2bb5;
  /* 10ca2bab push 9 */
  push32((uint32_t)(0x9u));
  /* 10ca2bad call 0x10c91750 */
  push32(0x10ca2bb2u); f_10c91750();
  /* 10ca2bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca2bb5:;
  /* 10ca2bb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2bb8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ca2bbb:;
  /* 10ca2bbb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2bbe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2bc1 je 0x10ca2c1e */
  if (C.zf) goto L_10ca2c1e;
  /* 10ca2bc3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10ca2bc8 push 0x10cba8c0 */
  push32((uint32_t)(0x10cba8c0u));
  /* 10ca2bcd push 2 */
  push32((uint32_t)(0x2u));
  /* 10ca2bcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2bd2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ca2bd4 push edx */
  push32((uint32_t)(EDX));
  /* 10ca2bd5 call 0x10c95610 */
  push32(0x10ca2bdau); f_10c95610();
  /* 10ca2bda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2bdd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2be0 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2be1 call 0x10c927e0 */
  push32(0x10ca2be6u); f_10c927e0();
  /* 10ca2be6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2be9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2bec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ca2bee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2bf1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2bf4 je 0x10ca2c0a */
  if (C.zf) goto L_10ca2c0a;
  /* 10ca2bf6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2bf9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ca2bfb push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2bfc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2bff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ca2c01 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2c02 call 0x10c95790 */
  push32(0x10ca2c07u); f_10c95790();
  /* 10ca2c07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ca2c0a:;
  /* 10ca2c0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ca2c0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2c10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ca2c13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2c16 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2c19 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ca2c1c jmp 0x10ca2bbb */
  goto L_10ca2bbb;
L_10ca2c1e:;
  /* 10ca2c1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ca2c21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ca2c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ca2c2a:;
  /* 10ca2c2a mov esp, ebp */
  ESP = (EBP);
  /* 10ca2c2c pop ebp */
  EBP = (pop32());
  /* 10ca2c2d ret  */
  ESPCHK(0x10ca2b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c30 @ 0x10ca2c30 (237 bytes, 81 insns) */
void f_10ca2c30(void) {
  FTRACE(0x10ca2c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ca2c31 mov ebp, esp */
  EBP = (ESP);
  /* 10ca2c33 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2c34 cmp dword ptr [0x10cbfb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbfb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2c3b jne 0x10ca2c52 */
  if (!C.zf) goto L_10ca2c52;
  /* 10ca2c3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ca2c40 push eax */
  push32((uint32_t)(EAX));
  /* 10ca2c41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2c44 push ecx */
  push32((uint32_t)(ECX));
  /* 10ca2c45 call 0x10ca2d30 */
  push32(0x10ca2c4au); f_10ca2d30();
  /* 10ca2c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2c4d jmp 0x10ca2d19 */
  goto L_10ca2d19;
L_10ca2c52:;
  /* 10ca2c52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ca2c54 call 0x10c961e0 */
  push32(0x10ca2c59u); f_10c961e0();
  /* 10ca2c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2c5c jmp 0x10ca2c67 */
  goto L_10ca2c67;
L_10ca2c5e:;
  /* 10ca2c5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2c61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2c64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10ca2c67:;
  /* 10ca2c67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2c6a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10ca2c6e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10ca2c72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2c75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ca2c7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ca2c7d je 0x10ca2cfb */
  if (C.zf) goto L_10ca2cfb;
  /* 10ca2c7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2c82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2c87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2c89 mov cl, byte ptr [eax + 0x10cbfc81] */
  CL = (r8((uint32_t)(EAX + 0x10cbfc81)));
  /* 10ca2c8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2c92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca2c94 je 0x10ca2ce6 */
  if (C.zf) goto L_10ca2ce6;
  /* 10ca2c96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2c99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2c9c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ca2c9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2ca2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2ca4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ca2ca6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ca2ca8 jne 0x10ca2cb8 */
  if (!C.zf) goto L_10ca2cb8;
  /* 10ca2caa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ca2cac call 0x10c96280 */
  push32(0x10ca2cb1u); f_10c96280();
  /* 10ca2cb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2cb6 jmp 0x10ca2d19 */
  goto L_10ca2d19;
L_10ca2cb8:;
  /* 10ca2cb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2cbb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ca2cc1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ca2cc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2cc7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2cc9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ca2ccb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ca2ccd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2cd0 jne 0x10ca2ce4 */
  if (!C.zf) goto L_10ca2ce4;
  /* 10ca2cd2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ca2cd4 call 0x10c96280 */
  push32(0x10ca2cd9u); f_10c96280();
  /* 10ca2cd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2cdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2cdf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ca2ce2 jmp 0x10ca2d19 */
  goto L_10ca2d19;
L_10ca2ce4:;
  /* 10ca2ce4 jmp 0x10ca2cf6 */
  goto L_10ca2cf6;
L_10ca2ce6:;
  /* 10ca2ce6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2ce9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ca2cef cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2cf2 jne 0x10ca2cf6 */
  if (!C.zf) goto L_10ca2cf6;
  /* 10ca2cf4 jmp 0x10ca2cfb */
  goto L_10ca2cfb;
L_10ca2cf6:;
  /* 10ca2cf6 jmp 0x10ca2c5e */
  goto L_10ca2c5e;
L_10ca2cfb:;
  /* 10ca2cfb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ca2cfd call 0x10c96280 */
  push32(0x10ca2d02u); f_10c96280();
  /* 10ca2d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ca2d08 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2d0d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ca2d10 jne 0x10ca2d17 */
  if (!C.zf) goto L_10ca2d17;
  /* 10ca2d12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ca2d15 jmp 0x10ca2d19 */
  goto L_10ca2d19;
L_10ca2d17:;
  /* 10ca2d17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ca2d19:;
  /* 10ca2d19 mov esp, ebp */
  ESP = (EBP);
  /* 10ca2d1b pop ebp */
  EBP = (pop32());
  /* 10ca2d1c ret  */
  ESPCHK(0x10ca2c30u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10ca2d30 (193 bytes, 87 insns) */
void f_10ca2d30(void) {
  FTRACE(0x10ca2d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2d30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2d32 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10ca2d36 push ebx */
  push32((uint32_t)(EBX));
  /* 10ca2d37 mov ebx, eax */
  EBX = (EAX);
  /* 10ca2d39 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ca2d3c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ca2d40 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ca2d46 je 0x10ca2d5b */
  if (C.zf) goto L_10ca2d5b;
L_10ca2d48:;
  /* 10ca2d48 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10ca2d4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ca2d4b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca2d4d je 0x10ca2d20 */
  if (C.zf) { jmp_ind(0x10ca2d20u); return; }
  /* 10ca2d4f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10ca2d51 je 0x10ca2da4 */
  if (C.zf) goto L_10ca2da4;
  /* 10ca2d53 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ca2d59 jne 0x10ca2d48 */
  if (!C.zf) goto L_10ca2d48;
L_10ca2d5b:;
  /* 10ca2d5b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10ca2d5d push edi */
  push32((uint32_t)(EDI));
  /* 10ca2d5e mov eax, ebx */
  EAX = (EBX);
  /* 10ca2d60 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10ca2d63 push esi */
  push32((uint32_t)(ESI));
  /* 10ca2d64 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10ca2d66:;
  /* 10ca2d66 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10ca2d68 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10ca2d6d mov eax, ecx */
  EAX = (ECX);
  /* 10ca2d6f mov esi, edi */
  ESI = (EDI);
  /* 10ca2d71 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2d73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2d75 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2d77 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2d7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2d7d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2d7f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2d81 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ca2d84 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10ca2d8a jne 0x10ca2da8 */
  if (!C.zf) goto L_10ca2da8;
  /* 10ca2d8c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2d91 je 0x10ca2d66 */
  if (C.zf) goto L_10ca2d66;
  /* 10ca2d93 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2d98 jne 0x10ca2da2 */
  if (!C.zf) goto L_10ca2da2;
  /* 10ca2d9a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10ca2da0 jne 0x10ca2d66 */
  if (!C.zf) goto L_10ca2d66;
L_10ca2da2:;
  /* 10ca2da2 pop esi */
  ESI = (pop32());
  /* 10ca2da3 pop edi */
  EDI = (pop32());
L_10ca2da4:;
  /* 10ca2da4 pop ebx */
  EBX = (pop32());
  /* 10ca2da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ca2da7 ret  */
  ESPCHK(0x10ca2d30u, _esp0);
  ESP += 4; return;
L_10ca2da8:;
  /* 10ca2da8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10ca2dab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca2dad je 0x10ca2de5 */
  if (C.zf) goto L_10ca2de5;
  /* 10ca2daf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ca2db1 je 0x10ca2da2 */
  if (C.zf) goto L_10ca2da2;
  /* 10ca2db3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca2db5 je 0x10ca2dde */
  if (C.zf) goto L_10ca2dde;
  /* 10ca2db7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ca2db9 je 0x10ca2da2 */
  if (C.zf) goto L_10ca2da2;
  /* 10ca2dbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ca2dbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca2dc0 je 0x10ca2dd7 */
  if (C.zf) goto L_10ca2dd7;
  /* 10ca2dc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ca2dc4 je 0x10ca2da2 */
  if (C.zf) goto L_10ca2da2;
  /* 10ca2dc6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ca2dc8 je 0x10ca2dd0 */
  if (C.zf) goto L_10ca2dd0;
  /* 10ca2dca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ca2dcc je 0x10ca2da2 */
  if (C.zf) goto L_10ca2da2;
  /* 10ca2dce jmp 0x10ca2d66 */
  goto L_10ca2d66;
L_10ca2dd0:;
  /* 10ca2dd0 pop esi */
  ESI = (pop32());
  /* 10ca2dd1 pop edi */
  EDI = (pop32());
  /* 10ca2dd2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10ca2dd5 pop ebx */
  EBX = (pop32());
  /* 10ca2dd6 ret  */
  ESPCHK(0x10ca2d30u, _esp0);
  ESP += 4; return;
L_10ca2dd7:;
  /* 10ca2dd7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10ca2dda pop esi */
  ESI = (pop32());
  /* 10ca2ddb pop edi */
  EDI = (pop32());
  /* 10ca2ddc pop ebx */
  EBX = (pop32());
  /* 10ca2ddd ret  */
  ESPCHK(0x10ca2d30u, _esp0);
  ESP += 4; return;
L_10ca2dde:;
  /* 10ca2dde lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10ca2de1 pop esi */
  ESI = (pop32());
  /* 10ca2de2 pop edi */
  EDI = (pop32());
  /* 10ca2de3 pop ebx */
  EBX = (pop32());
  /* 10ca2de4 ret  */
  ESPCHK(0x10ca2d30u, _esp0);
  ESP += 4; return;
L_10ca2de5:;
  /* 10ca2de5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10ca2de8 pop esi */
  ESI = (pop32());
  /* 10ca2de9 pop edi */
  EDI = (pop32());
  /* 10ca2dea pop ebx */
  EBX = (pop32());
  /* 10ca2deb ret  */
  ESPCHK(0x10ca2d30u, _esp0);
  ESP += 4; return;
  /* 10ca2dec jmp dword ptr [0x10cc0228] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10cc0228)))); return;
}

/* RtlUnwind @ 0x10ca2f3c (6 bytes, 1 insns) */
void f_10ca2f3c(void) {
  FTRACE(0x10ca2f3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ca2f3c jmp dword ptr [0x10cc0308] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10cc0308)))); return;
}

