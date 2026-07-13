#include "recomp.h"

/* FUN_10015ba0 @ 0x11495ba0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11495ba0(void) {
  FTRACE(0x11495ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11495ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11495ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11495ba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495ba6 push esi */
  push32((uint32_t)(ESI));
  /* 11495ba7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11495bab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11495bae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495bb1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495bb4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11495bb7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495bbb ja 0x11496108 */
  if ((!C.cf&&!C.zf)) goto L_11496108;
  /* 11495bc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495bc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11495bc6 mov dl, byte ptr [eax + 0x11496169] */
  DL = (r8((uint32_t)(EAX + 0x11496169)));
  /* 11495bcc jmp dword ptr [edx*4 + 0x1149610d] */
  switch (EDX) {
    case 0: goto L_114960e6;
    case 1: goto L_11495bf5;
    case 2: goto L_11495c3b;
    case 3: goto L_11495d88;
    case 4: goto L_11495db0;
    case 5: goto L_11495e4f;
    case 6: goto L_11495ebb;
    case 7: goto L_11495ee4;
    case 8: goto L_11495f25;
    case 9: goto L_11496007;
    case 10: goto L_1149606e;
    case 11: goto L_114960bb;
    case 12: goto L_11495bd3;
    case 13: goto L_11495c18;
    case 14: goto L_11495c5e;
    case 15: goto L_11495d5e;
    case 16: goto L_11495df5;
    case 17: goto L_11495e22;
    case 18: goto L_11495e77;
    case 19: goto L_11495efb;
    case 20: goto L_11495fa9;
    case 21: goto L_11496038;
    case 22: goto L_11496108;
    default: x86_unimpl("switch@0x11495bcc out of table"); return;
  }
L_11495bd3:;
  /* 11495bd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495bd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11495bd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495bda push edx */
  push32((uint32_t)(EDX));
  /* 11495bdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495bde mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11495be1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495be4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11495be7 push eax */
  push32((uint32_t)(EAX));
  /* 11495be8 call 0x114961c0 */
  push32(0x11495bedu); f_114961c0();
  /* 11495bed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495bf0 jmp 0x11496108 */
  goto L_11496108;
L_11495bf5:;
  /* 11495bf5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 11495bf9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495bfc push edx */
  push32((uint32_t)(EDX));
  /* 11495bfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495c00 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11495c03 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495c06 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11495c0a push eax */
  push32((uint32_t)(EAX));
  /* 11495c0b call 0x114961c0 */
  push32(0x11495c10u); f_114961c0();
  /* 11495c10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495c13 jmp 0x11496108 */
  goto L_11496108;
L_11495c18:;
  /* 11495c18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495c1b push ecx */
  push32((uint32_t)(ECX));
  /* 11495c1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495c1f push edx */
  push32((uint32_t)(EDX));
  /* 11495c20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495c23 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11495c26 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495c29 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11495c2d push eax */
  push32((uint32_t)(EAX));
  /* 11495c2e call 0x114961c0 */
  push32(0x11495c33u); f_114961c0();
  /* 11495c33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495c36 jmp 0x11496108 */
  goto L_11496108;
L_11495c3b:;
  /* 11495c3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495c3e push ecx */
  push32((uint32_t)(ECX));
  /* 11495c3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495c42 push edx */
  push32((uint32_t)(EDX));
  /* 11495c43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495c46 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11495c49 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495c4c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11495c50 push eax */
  push32((uint32_t)(EAX));
  /* 11495c51 call 0x114961c0 */
  push32(0x11495c56u); f_114961c0();
  /* 11495c56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495c59 jmp 0x11496108 */
  goto L_11496108;
L_11495c5e:;
  /* 11495c5e cmp dword ptr [0x114b6860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495c65 je 0x11495ce6 */
  if (C.zf) goto L_11495ce6;
  /* 11495c67 mov dword ptr [0x114b6860], 0 */
  w32((uint32_t)(0x114b6860), (0x0u));
  /* 11495c71 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495c74 push ecx */
  push32((uint32_t)(ECX));
  /* 11495c75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495c78 push edx */
  push32((uint32_t)(EDX));
  /* 11495c79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495c7c push eax */
  push32((uint32_t)(EAX));
  /* 11495c7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495c80 push ecx */
  push32((uint32_t)(ECX));
  /* 11495c81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495c84 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11495c8a push eax */
  push32((uint32_t)(EAX));
  /* 11495c8b call 0x11496370 */
  push32(0x11495c90u); f_11496370();
  /* 11495c90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495c93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495c96 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495c99 jne 0x11495ca0 */
  if (!C.zf) goto L_11495ca0;
  /* 11495c9b jmp 0x11496108 */
  goto L_11496108;
L_11495ca0:;
  /* 11495ca0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495ca3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11495ca5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11495ca8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495cab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11495cad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495cb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495cb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11495cb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495cb8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11495cba sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495cbd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495cc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11495cc2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11495cc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495cc9 push edx */
  push32((uint32_t)(EDX));
  /* 11495cca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495ccd push eax */
  push32((uint32_t)(EAX));
  /* 11495cce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 11495cd2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495cd5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11495cdb push eax */
  push32((uint32_t)(EAX));
  /* 11495cdc call 0x11496370 */
  push32(0x11495ce1u); f_11496370();
  /* 11495ce1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495ce4 jmp 0x11495d59 */
  goto L_11495d59;
L_11495ce6:;
  /* 11495ce6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 11495cea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495ced push edx */
  push32((uint32_t)(EDX));
  /* 11495cee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495cf1 push eax */
  push32((uint32_t)(EAX));
  /* 11495cf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11495cf6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495cf9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11495cff push eax */
  push32((uint32_t)(EAX));
  /* 11495d00 call 0x11496370 */
  push32(0x11495d05u); f_11496370();
  /* 11495d05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495d08 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495d0b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495d0e jne 0x11495d15 */
  if (!C.zf) goto L_11495d15;
  /* 11495d10 jmp 0x11496108 */
  goto L_11496108;
L_11495d15:;
  /* 11495d15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495d18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11495d1a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11495d1d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495d20 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11495d22 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495d25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495d28 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11495d2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495d2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11495d2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495d32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495d35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11495d37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495d3a push ecx */
  push32((uint32_t)(ECX));
  /* 11495d3b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495d3e push edx */
  push32((uint32_t)(EDX));
  /* 11495d3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495d42 push eax */
  push32((uint32_t)(EAX));
  /* 11495d43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495d46 push ecx */
  push32((uint32_t)(ECX));
  /* 11495d47 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495d4a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11495d50 push eax */
  push32((uint32_t)(EAX));
  /* 11495d51 call 0x11496370 */
  push32(0x11495d56u); f_11496370();
  /* 11495d56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11495d59:;
  /* 11495d59 jmp 0x11496108 */
  goto L_11496108;
L_11495d5e:;
  /* 11495d5e mov ecx, dword ptr [0x114b6860] */
  ECX = (r32((uint32_t)(0x114b6860)));
  /* 11495d64 mov dword ptr [0x114b6870], ecx */
  w32((uint32_t)(0x114b6870), (ECX));
  /* 11495d6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495d6d push edx */
  push32((uint32_t)(EDX));
  /* 11495d6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495d71 push eax */
  push32((uint32_t)(EAX));
  /* 11495d72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11495d74 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495d77 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11495d7a push edx */
  push32((uint32_t)(EDX));
  /* 11495d7b call 0x11496210 */
  push32(0x11495d80u); f_11496210();
  /* 11495d80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495d83 jmp 0x11496108 */
  goto L_11496108;
L_11495d88:;
  /* 11495d88 mov eax, dword ptr [0x114b6860] */
  EAX = (r32((uint32_t)(0x114b6860)));
  /* 11495d8d mov dword ptr [0x114b6870], eax */
  w32((uint32_t)(0x114b6870), (EAX));
  /* 11495d92 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495d95 push ecx */
  push32((uint32_t)(ECX));
  /* 11495d96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495d99 push edx */
  push32((uint32_t)(EDX));
  /* 11495d9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11495d9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495d9f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11495da2 push ecx */
  push32((uint32_t)(ECX));
  /* 11495da3 call 0x11496210 */
  push32(0x11495da8u); f_11496210();
  /* 11495da8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495dab jmp 0x11496108 */
  goto L_11496108;
L_11495db0:;
  /* 11495db0 mov edx, dword ptr [0x114b6860] */
  EDX = (r32((uint32_t)(0x114b6860)));
  /* 11495db6 mov dword ptr [0x114b6870], edx */
  w32((uint32_t)(0x114b6870), (EDX));
  /* 11495dbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495dbf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11495dc2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11495dc3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11495dc8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11495dca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11495dcd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495dd1 jne 0x11495dda */
  if (!C.zf) goto L_11495dda;
  /* 11495dd3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11495dda:;
  /* 11495dda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495ddd push edx */
  push32((uint32_t)(EDX));
  /* 11495dde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495de1 push eax */
  push32((uint32_t)(EAX));
  /* 11495de2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11495de4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11495de7 push ecx */
  push32((uint32_t)(ECX));
  /* 11495de8 call 0x11496210 */
  push32(0x11495dedu); f_11496210();
  /* 11495ded add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495df0 jmp 0x11496108 */
  goto L_11496108;
L_11495df5:;
  /* 11495df5 mov edx, dword ptr [0x114b6860] */
  EDX = (r32((uint32_t)(0x114b6860)));
  /* 11495dfb mov dword ptr [0x114b6870], edx */
  w32((uint32_t)(0x114b6870), (EDX));
  /* 11495e01 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495e04 push eax */
  push32((uint32_t)(EAX));
  /* 11495e05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495e08 push ecx */
  push32((uint32_t)(ECX));
  /* 11495e09 push 3 */
  push32((uint32_t)(0x3u));
  /* 11495e0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495e0e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11495e11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495e14 push eax */
  push32((uint32_t)(EAX));
  /* 11495e15 call 0x11496210 */
  push32(0x11495e1au); f_11496210();
  /* 11495e1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495e1d jmp 0x11496108 */
  goto L_11496108;
L_11495e22:;
  /* 11495e22 mov ecx, dword ptr [0x114b6860] */
  ECX = (r32((uint32_t)(0x114b6860)));
  /* 11495e28 mov dword ptr [0x114b6870], ecx */
  w32((uint32_t)(0x114b6870), (ECX));
  /* 11495e2e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495e31 push edx */
  push32((uint32_t)(EDX));
  /* 11495e32 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495e35 push eax */
  push32((uint32_t)(EAX));
  /* 11495e36 push 2 */
  push32((uint32_t)(0x2u));
  /* 11495e38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495e3b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11495e3e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495e41 push edx */
  push32((uint32_t)(EDX));
  /* 11495e42 call 0x11496210 */
  push32(0x11495e47u); f_11496210();
  /* 11495e47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495e4a jmp 0x11496108 */
  goto L_11496108;
L_11495e4f:;
  /* 11495e4f mov eax, dword ptr [0x114b6860] */
  EAX = (r32((uint32_t)(0x114b6860)));
  /* 11495e54 mov dword ptr [0x114b6870], eax */
  w32((uint32_t)(0x114b6870), (EAX));
  /* 11495e59 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495e5c push ecx */
  push32((uint32_t)(ECX));
  /* 11495e5d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495e60 push edx */
  push32((uint32_t)(EDX));
  /* 11495e61 push 2 */
  push32((uint32_t)(0x2u));
  /* 11495e63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495e66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11495e69 push ecx */
  push32((uint32_t)(ECX));
  /* 11495e6a call 0x11496210 */
  push32(0x11495e6fu); f_11496210();
  /* 11495e6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495e72 jmp 0x11496108 */
  goto L_11496108;
L_11495e77:;
  /* 11495e77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495e7a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495e7e jg 0x11495e9c */
  if ((!C.zf&&C.sf==C.of)) goto L_11495e9c;
  /* 11495e80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495e83 push eax */
  push32((uint32_t)(EAX));
  /* 11495e84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495e87 push ecx */
  push32((uint32_t)(ECX));
  /* 11495e88 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495e8b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11495e91 push eax */
  push32((uint32_t)(EAX));
  /* 11495e92 call 0x114961c0 */
  push32(0x11495e97u); f_114961c0();
  /* 11495e97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495e9a jmp 0x11495eb6 */
  goto L_11495eb6;
L_11495e9c:;
  /* 11495e9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495e9f push ecx */
  push32((uint32_t)(ECX));
  /* 11495ea0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495ea3 push edx */
  push32((uint32_t)(EDX));
  /* 11495ea4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495ea7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11495ead push ecx */
  push32((uint32_t)(ECX));
  /* 11495eae call 0x114961c0 */
  push32(0x11495eb3u); f_114961c0();
  /* 11495eb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11495eb6:;
  /* 11495eb6 jmp 0x11496108 */
  goto L_11496108;
L_11495ebb:;
  /* 11495ebb mov edx, dword ptr [0x114b6860] */
  EDX = (r32((uint32_t)(0x114b6860)));
  /* 11495ec1 mov dword ptr [0x114b6870], edx */
  w32((uint32_t)(0x114b6870), (EDX));
  /* 11495ec7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495eca push eax */
  push32((uint32_t)(EAX));
  /* 11495ecb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495ece push ecx */
  push32((uint32_t)(ECX));
  /* 11495ecf push 2 */
  push32((uint32_t)(0x2u));
  /* 11495ed1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495ed4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11495ed6 push eax */
  push32((uint32_t)(EAX));
  /* 11495ed7 call 0x11496210 */
  push32(0x11495edcu); f_11496210();
  /* 11495edc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495edf jmp 0x11496108 */
  goto L_11496108;
L_11495ee4:;
  /* 11495ee4 mov ecx, dword ptr [0x114b6860] */
  ECX = (r32((uint32_t)(0x114b6860)));
  /* 11495eea mov dword ptr [0x114b6870], ecx */
  w32((uint32_t)(0x114b6870), (ECX));
  /* 11495ef0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495ef3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11495ef6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11495ef9 jmp 0x11495f4d */
  goto L_11495f4d;
L_11495efb:;
  /* 11495efb mov ecx, dword ptr [0x114b6860] */
  ECX = (r32((uint32_t)(0x114b6860)));
  /* 11495f01 mov dword ptr [0x114b6870], ecx */
  w32((uint32_t)(0x114b6870), (ECX));
  /* 11495f07 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495f0a push edx */
  push32((uint32_t)(EDX));
  /* 11495f0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495f0e push eax */
  push32((uint32_t)(EAX));
  /* 11495f0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11495f11 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495f14 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11495f17 push edx */
  push32((uint32_t)(EDX));
  /* 11495f18 call 0x11496210 */
  push32(0x11495f1du); f_11496210();
  /* 11495f1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495f20 jmp 0x11496108 */
  goto L_11496108;
L_11495f25:;
  /* 11495f25 mov eax, dword ptr [0x114b6860] */
  EAX = (r32((uint32_t)(0x114b6860)));
  /* 11495f2a mov dword ptr [0x114b6870], eax */
  w32((uint32_t)(0x114b6870), (EAX));
  /* 11495f2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495f32 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495f36 jne 0x11495f41 */
  if (!C.zf) goto L_11495f41;
  /* 11495f38 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11495f3f jmp 0x11495f4d */
  goto L_11495f4d;
L_11495f41:;
  /* 11495f41 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495f44 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11495f47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495f4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11495f4d:;
  /* 11495f4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495f50 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11495f53 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495f56 jge 0x11495f61 */
  if ((C.sf==C.of)) goto L_11495f61;
  /* 11495f58 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11495f5f jmp 0x11495f8e */
  goto L_11495f8e;
L_11495f61:;
  /* 11495f61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495f64 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11495f67 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11495f68 mov ecx, 7 */
  ECX = (0x7u);
  /* 11495f6d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11495f6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11495f72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495f75 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11495f78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11495f79 mov ecx, 7 */
  ECX = (0x7u);
  /* 11495f7e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11495f80 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495f83 jl 0x11495f8e */
  if ((C.sf!=C.of)) goto L_11495f8e;
  /* 11495f85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11495f88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495f8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11495f8e:;
  /* 11495f8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495f91 push eax */
  push32((uint32_t)(EAX));
  /* 11495f92 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495f95 push ecx */
  push32((uint32_t)(ECX));
  /* 11495f96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11495f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11495f9b push edx */
  push32((uint32_t)(EDX));
  /* 11495f9c call 0x11496210 */
  push32(0x11495fa1u); f_11496210();
  /* 11495fa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495fa4 jmp 0x11496108 */
  goto L_11496108;
L_11495fa9:;
  /* 11495fa9 cmp dword ptr [0x114b6860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495fb0 je 0x11495fe0 */
  if (C.zf) goto L_11495fe0;
  /* 11495fb2 mov dword ptr [0x114b6860], 0 */
  w32((uint32_t)(0x114b6860), (0x0u));
  /* 11495fbc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495fbf push eax */
  push32((uint32_t)(EAX));
  /* 11495fc0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11495fc4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495fc7 push edx */
  push32((uint32_t)(EDX));
  /* 11495fc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495fcb push eax */
  push32((uint32_t)(EAX));
  /* 11495fcc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495fcf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11495fd5 push edx */
  push32((uint32_t)(EDX));
  /* 11495fd6 call 0x11496370 */
  push32(0x11495fdbu); f_11496370();
  /* 11495fdb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495fde jmp 0x11496002 */
  goto L_11496002;
L_11495fe0:;
  /* 11495fe0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495fe3 push eax */
  push32((uint32_t)(EAX));
  /* 11495fe4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 11495fe8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495feb push edx */
  push32((uint32_t)(EDX));
  /* 11495fec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495fef push eax */
  push32((uint32_t)(EAX));
  /* 11495ff0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495ff3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11495ff9 push edx */
  push32((uint32_t)(EDX));
  /* 11495ffa call 0x11496370 */
  push32(0x11495fffu); f_11496370();
  /* 11495fff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11496002:;
  /* 11496002 jmp 0x11496108 */
  goto L_11496108;
L_11496007:;
  /* 11496007 mov dword ptr [0x114b6860], 0 */
  w32((uint32_t)(0x114b6860), (0x0u));
  /* 11496011 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11496014 push eax */
  push32((uint32_t)(EAX));
  /* 11496015 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496018 push ecx */
  push32((uint32_t)(ECX));
  /* 11496019 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149601c push edx */
  push32((uint32_t)(EDX));
  /* 1149601d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496020 push eax */
  push32((uint32_t)(EAX));
  /* 11496021 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11496024 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1149602a push edx */
  push32((uint32_t)(EDX));
  /* 1149602b call 0x11496370 */
  push32(0x11496030u); f_11496370();
  /* 11496030 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496033 jmp 0x11496108 */
  goto L_11496108;
L_11496038:;
  /* 11496038 mov eax, dword ptr [0x114b6860] */
  EAX = (r32((uint32_t)(0x114b6860)));
  /* 1149603d mov dword ptr [0x114b6870], eax */
  w32((uint32_t)(0x114b6870), (EAX));
  /* 11496042 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496045 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11496048 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11496049 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1149604e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11496050 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11496053 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496056 push edx */
  push32((uint32_t)(EDX));
  /* 11496057 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149605a push eax */
  push32((uint32_t)(EAX));
  /* 1149605b push 2 */
  push32((uint32_t)(0x2u));
  /* 1149605d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11496060 push ecx */
  push32((uint32_t)(ECX));
  /* 11496061 call 0x11496210 */
  push32(0x11496066u); f_11496210();
  /* 11496066 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496069 jmp 0x11496108 */
  goto L_11496108;
L_1149606e:;
  /* 1149606e mov edx, dword ptr [0x114b6860] */
  EDX = (r32((uint32_t)(0x114b6860)));
  /* 11496074 mov dword ptr [0x114b6870], edx */
  w32((uint32_t)(0x114b6870), (EDX));
  /* 1149607a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149607d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11496080 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11496081 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11496086 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11496088 mov ecx, eax */
  ECX = (EAX);
  /* 1149608a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149608d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11496090 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496093 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11496096 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11496097 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1149609c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1149609e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114960a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114960a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114960a6 push eax */
  push32((uint32_t)(EAX));
  /* 114960a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114960aa push ecx */
  push32((uint32_t)(ECX));
  /* 114960ab push 4 */
  push32((uint32_t)(0x4u));
  /* 114960ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114960b0 push edx */
  push32((uint32_t)(EDX));
  /* 114960b1 call 0x11496210 */
  push32(0x114960b6u); f_11496210();
  /* 114960b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114960b9 jmp 0x11496108 */
  goto L_11496108;
L_114960bb:;
  /* 114960bb call 0x114973a0 */
  push32(0x114960c0u); f_114973a0();
  /* 114960c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114960c3 push eax */
  push32((uint32_t)(EAX));
  /* 114960c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114960c7 push ecx */
  push32((uint32_t)(ECX));
  /* 114960c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114960cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114960cd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114960d1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 114960d4 mov ecx, dword ptr [eax*4 + 0x114b5128] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114b5128)));
  /* 114960db push ecx */
  push32((uint32_t)(ECX));
  /* 114960dc call 0x114961c0 */
  push32(0x114960e1u); f_114961c0();
  /* 114960e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114960e4 jmp 0x11496108 */
  goto L_11496108;
L_114960e6:;
  /* 114960e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114960e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114960eb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 114960ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114960f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114960f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114960f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114960f9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114960fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114960fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11496100 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11496103 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496106 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11496108:;
  /* 11496108 pop esi */
  ESI = (pop32());
  /* 11496109 mov esp, ebp */
  ESP = (EBP);
  /* 1149610b pop ebp */
  EBP = (pop32());
  /* 1149610c ret  */
  ESPCHK(0x11495ba0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x114961c0 (72 bytes, 30 insns) */
void f_114961c0(void) {
  FTRACE(0x114961c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114961c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114961c1 mov ebp, esp */
  EBP = (ESP);
L_114961c3:;
  /* 114961c3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114961c6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114961c9 je 0x11496206 */
  if (C.zf) goto L_11496206;
  /* 114961cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114961ce movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114961d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114961d3 je 0x11496206 */
  if (C.zf) goto L_11496206;
  /* 114961d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114961d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114961da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114961dd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114961df mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114961e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114961e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114961e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114961e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114961ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114961ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114961f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114961f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114961f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114961fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114961fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114961ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496202 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11496204 jmp 0x114961c3 */
  goto L_114961c3;
L_11496206:;
  /* 11496206 pop ebp */
  EBP = (pop32());
  /* 11496207 ret  */
  ESPCHK(0x114961c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016210 @ 0x11496210 (173 bytes, 64 insns) */
void f_11496210(void) {
  FTRACE(0x11496210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11496210 push ebp */
  push32((uint32_t)(EBP));
  /* 11496211 mov ebp, esp */
  EBP = (ESP);
  /* 11496213 push ecx */
  push32((uint32_t)(ECX));
  /* 11496214 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1149621b cmp dword ptr [0x114b6870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496222 je 0x1149623a */
  if (C.zf) goto L_1149623a;
  /* 11496224 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496227 push eax */
  push32((uint32_t)(EAX));
  /* 11496228 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149622b push ecx */
  push32((uint32_t)(ECX));
  /* 1149622c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149622f push edx */
  push32((uint32_t)(EDX));
  /* 11496230 call 0x114962c0 */
  push32(0x11496235u); f_114962c0();
  /* 11496235 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496238 jmp 0x114962b9 */
  goto L_114962b9;
L_1149623a:;
  /* 1149623a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1149623d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496240 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496242 jae 0x114962b0 */
  if (!C.cf) goto L_114962b0;
  /* 11496244 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496247 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149624a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1149624d jmp 0x11496258 */
  goto L_11496258;
L_1149624f:;
  /* 1149624f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496252 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11496255 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11496258:;
  /* 11496258 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149625b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149625e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11496260 je 0x11496294 */
  if (C.zf) goto L_11496294;
  /* 11496262 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496265 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11496266 mov ecx, 0xa */
  ECX = (0xau);
  /* 1149626b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1149626d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496270 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496273 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11496275 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496278 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1149627b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149627e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1149627f mov ecx, 0xa */
  ECX = (0xau);
  /* 11496284 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11496286 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11496289 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149628c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149628f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11496292 jmp 0x1149624f */
  goto L_1149624f;
L_11496294:;
  /* 11496294 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496297 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11496299 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149629c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149629f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114962a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114962a4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114962a6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114962a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114962ac mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114962ae jmp 0x114962b9 */
  goto L_114962b9;
L_114962b0:;
  /* 114962b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114962b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_114962b9:;
  /* 114962b9 mov esp, ebp */
  ESP = (EBP);
  /* 114962bb pop ebp */
  EBP = (pop32());
  /* 114962bc ret  */
  ESPCHK(0x11496210u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x114962c0 (172 bytes, 65 insns) */
void f_114962c0(void) {
  FTRACE(0x114962c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114962c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114962c1 mov ebp, esp */
  EBP = (ESP);
  /* 114962c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114962c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114962c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114962cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114962ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114962d1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114962d4 jbe 0x1149631b */
  if ((C.cf||C.zf)) goto L_1149631b;
L_114962d6:;
  /* 114962d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114962d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114962da mov ecx, 0xa */
  ECX = (0xau);
  /* 114962df idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114962e1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114962e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114962e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114962e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114962ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114962ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114962f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114962f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114962f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114962fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114962fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114962ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496302 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11496303 mov ecx, 0xa */
  ECX = (0xau);
  /* 11496308 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1149630a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1149630d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496311 jle 0x1149631b */
  if ((C.zf||C.sf!=C.of)) goto L_1149631b;
  /* 11496313 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496316 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496319 ja 0x114962d6 */
  if ((!C.cf&&!C.zf)) goto L_114962d6;
L_1149631b:;
  /* 1149631b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149631e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11496320 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11496323 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496326 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11496329 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1149632b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149632e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11496331 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11496334:;
  /* 11496334 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11496337 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11496339 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1149633c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149633f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11496342 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11496344 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11496346 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11496349 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149634c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1149634f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11496352 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11496355 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11496357 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149635a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149635d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11496360 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11496363 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496366 jb 0x11496334 */
  if (C.cf) goto L_11496334;
  /* 11496368 mov esp, ebp */
  ESP = (EBP);
  /* 1149636a pop ebp */
  EBP = (pop32());
  /* 1149636b ret  */
  ESPCHK(0x114962c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016370 @ 0x11496370 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11496370(void) {
  FTRACE(0x11496370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11496370 push ebp */
  push32((uint32_t)(EBP));
  /* 11496371 mov ebp, esp */
  EBP = (ESP);
  /* 11496373 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11496376:;
  /* 11496376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496379 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149637c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149637e je 0x114967ec */
  if (C.zf) goto L_114967ec;
  /* 11496384 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496387 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149638a je 0x114967ec */
  if (C.zf) goto L_114967ec;
  /* 11496390 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11496394 mov dword ptr [0x114b6870], 0 */
  w32((uint32_t)(0x114b6870), (0x0u));
  /* 1149639e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114963a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114963a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114963ab jmp 0x114963b6 */
  goto L_114963b6;
L_114963ad:;
  /* 114963ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114963b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114963b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_114963b6:;
  /* 114963b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114963b9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114963bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114963bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114963c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114963c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114963c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114963cb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114963cd jne 0x114963d1 */
  if (!C.zf) goto L_114963d1;
  /* 114963cf jmp 0x114963ad */
  goto L_114963ad;
L_114963d1:;
  /* 114963d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114963d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114963d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114963da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114963dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114963e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114963e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114963e6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114963e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114963ec cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114963f0 ja 0x11496740 */
  if ((!C.cf&&!C.zf)) goto L_11496740;
  /* 114963f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114963f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114963fb mov al, byte ptr [ecx + 0x1149681c] */
  AL = (r8((uint32_t)(ECX + 0x1149681c)));
  /* 11496401 jmp dword ptr [eax*4 + 0x114967f0] */
  switch (EAX) {
    case 0: goto L_1149665f;
    case 1: goto L_11496543;
    case 2: goto L_114964ce;
    case 3: goto L_11496408;
    case 4: goto L_11496446;
    case 5: goto L_114964a7;
    case 6: goto L_114964f5;
    case 7: goto L_1149651c;
    case 8: goto L_1149658a;
    case 9: goto L_11496484;
    case 10: goto L_11496740;
    default: x86_unimpl("switch@0x11496401 out of table"); return;
  }
L_11496408:;
  /* 11496408 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149640b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1149640e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11496411 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11496414 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11496417 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149641b ja 0x11496441 */
  if ((!C.cf&&!C.zf)) goto L_11496441;
  /* 1149641d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11496420 jmp dword ptr [ecx*4 + 0x1149686f] */
  switch (ECX) {
    case 0: goto L_11496427;
    case 1: goto L_11496431;
    case 2: goto L_11496437;
    case 3: goto L_1149643d;
    case 4: goto L_11496465;
    case 5: goto L_1149646f;
    case 6: goto L_11496475;
    case 7: goto L_1149647b;
    default: x86_unimpl("switch@0x11496420 out of table"); return;
  }
L_11496427:;
  /* 11496427 mov dword ptr [0x114b6870], 1 */
  w32((uint32_t)(0x114b6870), (0x1u));
L_11496431:;
  /* 11496431 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11496435 jmp 0x11496441 */
  goto L_11496441;
L_11496437:;
  /* 11496437 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1149643b jmp 0x11496441 */
  goto L_11496441;
L_1149643d:;
  /* 1149643d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11496441:;
  /* 11496441 jmp 0x11496740 */
  goto L_11496740;
L_11496446:;
  /* 11496446 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11496449 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1149644c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1149644f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11496452 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11496455 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496459 ja 0x1149647f */
  if ((!C.cf&&!C.zf)) goto L_1149647f;
  /* 1149645b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1149645e jmp dword ptr [ecx*4 + 0x1149687f] */
  switch (ECX) {
    case 0: goto L_11496465;
    case 1: goto L_1149646f;
    case 2: goto L_11496475;
    case 3: goto L_1149647b;
    default: x86_unimpl("switch@0x1149645e out of table"); return;
  }
L_11496465:;
  /* 11496465 mov dword ptr [0x114b6870], 1 */
  w32((uint32_t)(0x114b6870), (0x1u));
L_1149646f:;
  /* 1149646f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11496473 jmp 0x1149647f */
  goto L_1149647f;
L_11496475:;
  /* 11496475 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11496479 jmp 0x1149647f */
  goto L_1149647f;
L_1149647b:;
  /* 1149647b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1149647f:;
  /* 1149647f jmp 0x11496740 */
  goto L_11496740;
L_11496484:;
  /* 11496484 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11496487 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1149648a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149648e je 0x11496498 */
  if (C.zf) goto L_11496498;
  /* 11496490 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496494 je 0x1149649e */
  if (C.zf) goto L_1149649e;
  /* 11496496 jmp 0x114964a2 */
  goto L_114964a2;
L_11496498:;
  /* 11496498 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1149649c jmp 0x114964a2 */
  goto L_114964a2;
L_1149649e:;
  /* 1149649e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_114964a2:;
  /* 114964a2 jmp 0x11496740 */
  goto L_11496740;
L_114964a7:;
  /* 114964a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114964aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114964ad cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114964b1 je 0x114964bb */
  if (C.zf) goto L_114964bb;
  /* 114964b3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114964b7 je 0x114964c5 */
  if (C.zf) goto L_114964c5;
  /* 114964b9 jmp 0x114964c9 */
  goto L_114964c9;
L_114964bb:;
  /* 114964bb mov dword ptr [0x114b6870], 1 */
  w32((uint32_t)(0x114b6870), (0x1u));
L_114964c5:;
  /* 114964c5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_114964c9:;
  /* 114964c9 jmp 0x11496740 */
  goto L_11496740;
L_114964ce:;
  /* 114964ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114964d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 114964d4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114964d8 je 0x114964e2 */
  if (C.zf) goto L_114964e2;
  /* 114964da cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114964de je 0x114964ec */
  if (C.zf) goto L_114964ec;
  /* 114964e0 jmp 0x114964f0 */
  goto L_114964f0;
L_114964e2:;
  /* 114964e2 mov dword ptr [0x114b6870], 1 */
  w32((uint32_t)(0x114b6870), (0x1u));
L_114964ec:;
  /* 114964ec mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_114964f0:;
  /* 114964f0 jmp 0x11496740 */
  goto L_11496740;
L_114964f5:;
  /* 114964f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114964f8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 114964fb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114964ff je 0x11496509 */
  if (C.zf) goto L_11496509;
  /* 11496501 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496505 je 0x11496513 */
  if (C.zf) goto L_11496513;
  /* 11496507 jmp 0x11496517 */
  goto L_11496517;
L_11496509:;
  /* 11496509 mov dword ptr [0x114b6870], 1 */
  w32((uint32_t)(0x114b6870), (0x1u));
L_11496513:;
  /* 11496513 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11496517:;
  /* 11496517 jmp 0x11496740 */
  goto L_11496740;
L_1149651c:;
  /* 1149651c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149651f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11496522 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496526 je 0x11496530 */
  if (C.zf) goto L_11496530;
  /* 11496528 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149652c je 0x1149653a */
  if (C.zf) goto L_1149653a;
  /* 1149652e jmp 0x1149653e */
  goto L_1149653e;
L_11496530:;
  /* 11496530 mov dword ptr [0x114b6870], 1 */
  w32((uint32_t)(0x114b6870), (0x1u));
L_1149653a:;
  /* 1149653a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1149653e:;
  /* 1149653e jmp 0x11496740 */
  goto L_11496740;
L_11496543:;
  /* 11496543 push 0x114b1ae8 */
  push32((uint32_t)(0x114b1ae8u));
  /* 11496548 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149654b push ecx */
  push32((uint32_t)(ECX));
  /* 1149654c call 0x11496da0 */
  push32(0x11496551u); f_11496da0();
  /* 11496551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11496556 jne 0x11496563 */
  if (!C.zf) goto L_11496563;
  /* 11496558 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149655b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149655e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11496561 jmp 0x11496581 */
  goto L_11496581;
L_11496563:;
  /* 11496563 push 0x114b1ae4 */
  push32((uint32_t)(0x114b1ae4u));
  /* 11496568 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149656b push eax */
  push32((uint32_t)(EAX));
  /* 1149656c call 0x11496da0 */
  push32(0x11496571u); f_11496da0();
  /* 11496571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496574 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11496576 jne 0x11496581 */
  if (!C.zf) goto L_11496581;
  /* 11496578 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149657b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149657e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11496581:;
  /* 11496581 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11496585 jmp 0x11496740 */
  goto L_11496740;
L_1149658a:;
  /* 1149658a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149658d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496591 jg 0x114965a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_114965a1;
  /* 11496593 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11496596 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1149659c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1149659f jmp 0x114965ad */
  goto L_114965ad;
L_114965a1:;
  /* 114965a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114965a4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 114965aa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114965ad:;
  /* 114965ad cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114965b1 jle 0x11496654 */
  if ((C.zf||C.sf!=C.of)) goto L_11496654;
  /* 114965b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114965ba cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114965bd jbe 0x11496654 */
  if ((C.cf||C.zf)) goto L_11496654;
  /* 114965c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114965c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114965c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114965ca mov ecx, dword ptr [0x114b3b8c] */
  ECX = (r32((uint32_t)(0x114b3b8c)));
  /* 114965d0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114965d2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114965d6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 114965dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114965de je 0x11496617 */
  if (C.zf) goto L_11496617;
  /* 114965e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114965e3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114965e6 jbe 0x11496617 */
  if ((C.cf||C.zf)) goto L_11496617;
  /* 114965e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114965eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114965ed mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114965f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114965f2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114965f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114965f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114965f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114965fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114965ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11496601 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11496604 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496607 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1149660a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1149660d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1149660f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11496612 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496615 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11496617:;
  /* 11496617 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149661a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1149661c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1149661f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11496621 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11496623 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496626 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11496628 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149662b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149662e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11496630 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11496633 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496636 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11496639 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1149663c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1149663e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11496641 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496644 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11496646 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11496649 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149664c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1149664f jmp 0x114965ad */
  goto L_114965ad;
L_11496654:;
  /* 11496654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11496657 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1149665a jmp 0x11496376 */
  goto L_11496376;
L_1149665f:;
  /* 1149665f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11496662 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11496665 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11496667 je 0x11496732 */
  if (C.zf) goto L_11496732;
  /* 1149666d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496670 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496673 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11496676:;
  /* 11496676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496679 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149667c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149667e je 0x11496730 */
  if (C.zf) goto L_11496730;
  /* 11496684 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496687 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149668a je 0x11496730 */
  if (C.zf) goto L_11496730;
  /* 11496690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496693 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11496696 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496699 jne 0x114966a9 */
  if (!C.zf) goto L_114966a9;
  /* 1149669b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149669e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114966a1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114966a4 jmp 0x11496730 */
  goto L_11496730;
L_114966a9:;
  /* 114966a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114966ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114966ae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114966b0 mov edx, dword ptr [0x114b3b8c] */
  EDX = (r32((uint32_t)(0x114b3b8c)));
  /* 114966b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114966b8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 114966bc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 114966c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114966c3 je 0x114966fc */
  if (C.zf) goto L_114966fc;
  /* 114966c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114966c8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114966cb jbe 0x114966fc */
  if ((C.cf||C.zf)) goto L_114966fc;
  /* 114966cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114966d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114966d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114966d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114966d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114966d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114966dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114966de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114966e1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114966e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114966e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114966e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114966ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114966ef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114966f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114966f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114966f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114966fa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114966fc:;
  /* 114966fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114966ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11496701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496704 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11496706 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11496708 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149670b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1149670d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496710 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496713 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11496715 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496718 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149671b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1149671e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496721 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11496723 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11496726 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496729 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1149672b jmp 0x11496676 */
  goto L_11496676;
L_11496730:;
  /* 11496730 jmp 0x1149673b */
  goto L_1149673b;
L_11496732:;
  /* 11496732 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496735 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496738 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1149673b:;
  /* 1149673b jmp 0x11496376 */
  goto L_11496376;
L_11496740:;
  /* 11496740 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11496744 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11496746 je 0x1149676c */
  if (C.zf) goto L_1149676c;
  /* 11496748 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1149674b push edx */
  push32((uint32_t)(EDX));
  /* 1149674c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1149674f push eax */
  push32((uint32_t)(EAX));
  /* 11496750 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496753 push ecx */
  push32((uint32_t)(ECX));
  /* 11496754 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496757 push edx */
  push32((uint32_t)(EDX));
  /* 11496758 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1149675b push eax */
  push32((uint32_t)(EAX));
  /* 1149675c call 0x11495ba0 */
  push32(0x11496761u); f_11495ba0();
  /* 11496761 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496764 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11496767 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1149676a jmp 0x114967e7 */
  goto L_114967e7;
L_1149676c:;
  /* 1149676c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149676f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496771 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11496773 mov ecx, dword ptr [0x114b3b8c] */
  ECX = (r32((uint32_t)(0x114b3b8c)));
  /* 11496779 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1149677b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1149677f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11496785 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11496787 je 0x114967b8 */
  if (C.zf) goto L_114967b8;
  /* 11496789 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149678c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1149678e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496791 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11496793 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11496795 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496798 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1149679a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149679d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114967a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114967a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114967a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114967a8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114967ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114967ae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114967b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114967b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114967b6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114967b8:;
  /* 114967b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114967bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114967bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114967c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114967c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114967c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114967c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114967c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114967cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114967cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114967d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114967d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114967d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114967da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114967dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114967df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114967e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114967e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114967e7:;
  /* 114967e7 jmp 0x11496376 */
  goto L_11496376;
L_114967ec:;
  /* 114967ec mov esp, ebp */
  ESP = (EBP);
  /* 114967ee pop ebp */
  EBP = (pop32());
  /* 114967ef ret  */
  ESPCHK(0x11496370u, _esp0);
  ESP += 4; return;
}

/* FUN_10016890 @ 0x11496890 (650 bytes, 178 insns) */
void f_11496890(void) {
  FTRACE(0x11496890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11496890 push ebp */
  push32((uint32_t)(EBP));
  /* 11496891 mov ebp, esp */
  EBP = (ESP);
  /* 11496893 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11496899 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149689d jne 0x114969f9 */
  if (!C.zf) goto L_114969f9;
  /* 114968a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114968a6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 114968ac lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 114968b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114968b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114968bc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 114968c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114968c8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 114968ce push edx */
  push32((uint32_t)(EDX));
  /* 114968cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114968d2 push eax */
  push32((uint32_t)(EAX));
  /* 114968d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114968d6 push ecx */
  push32((uint32_t)(ECX));
  /* 114968d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114968da push edx */
  push32((uint32_t)(EDX));
  /* 114968db call 0x11497e80 */
  push32(0x114968e0u); f_11497e80();
  /* 114968e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114968e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114968e6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114968ea jne 0x1149697f */
  if (!C.zf) goto L_1149697f;
  /* 114968f0 call dword ptr [0x114b93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93ac))), 0x114968f6u);
  /* 114968f6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114968f9 je 0x11496900 */
  if (C.zf) goto L_11496900;
  /* 114968fb jmp 0x114969dd */
  goto L_114969dd;
L_11496900:;
  /* 11496900 push 0 */
  push32((uint32_t)(0x0u));
  /* 11496902 push 0 */
  push32((uint32_t)(0x0u));
  /* 11496904 push 0 */
  push32((uint32_t)(0x0u));
  /* 11496906 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496909 push eax */
  push32((uint32_t)(EAX));
  /* 1149690a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149690d push ecx */
  push32((uint32_t)(ECX));
  /* 1149690e call 0x11497e80 */
  push32(0x11496913u); f_11497e80();
  /* 11496913 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496916 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1149691c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496923 jne 0x1149692a */
  if (!C.zf) goto L_1149692a;
  /* 11496925 jmp 0x114969dd */
  goto L_114969dd;
L_1149692a:;
  /* 1149692a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1149692c push 0x114b1af0 */
  push32((uint32_t)(0x114b1af0u));
  /* 11496931 push 2 */
  push32((uint32_t)(0x2u));
  /* 11496933 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11496939 push edx */
  push32((uint32_t)(EDX));
  /* 1149693a call 0x114870c0 */
  push32(0x1149693fu); f_114870c0();
  /* 1149693f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496942 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11496945 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496949 jne 0x11496950 */
  if (!C.zf) goto L_11496950;
  /* 1149694b jmp 0x114969dd */
  goto L_114969dd;
L_11496950:;
  /* 11496950 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11496957 push 0 */
  push32((uint32_t)(0x0u));
  /* 11496959 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1149695f push eax */
  push32((uint32_t)(EAX));
  /* 11496960 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11496963 push ecx */
  push32((uint32_t)(ECX));
  /* 11496964 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496967 push edx */
  push32((uint32_t)(EDX));
  /* 11496968 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149696b push eax */
  push32((uint32_t)(EAX));
  /* 1149696c call 0x11497e80 */
  push32(0x11496971u); f_11497e80();
  /* 11496971 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496974 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11496977 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149697b jne 0x1149697f */
  if (!C.zf) goto L_1149697f;
  /* 1149697d jmp 0x114969dd */
  goto L_114969dd;
L_1149697f:;
  /* 1149697f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11496981 push 0x114b1af0 */
  push32((uint32_t)(0x114b1af0u));
  /* 11496986 push 2 */
  push32((uint32_t)(0x2u));
  /* 11496988 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149698b push ecx */
  push32((uint32_t)(ECX));
  /* 1149698c call 0x114870c0 */
  push32(0x11496991u); f_114870c0();
  /* 11496991 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496994 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1149699a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1149699c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 114969a2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114969a5 jne 0x114969a9 */
  if (!C.zf) goto L_114969a9;
  /* 114969a7 jmp 0x114969dd */
  goto L_114969dd;
L_114969a9:;
  /* 114969a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114969ac push ecx */
  push32((uint32_t)(ECX));
  /* 114969ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114969b0 push edx */
  push32((uint32_t)(EDX));
  /* 114969b1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 114969b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114969b9 push ecx */
  push32((uint32_t)(ECX));
  /* 114969ba call 0x1148a8e0 */
  push32(0x114969bfu); f_1148a8e0();
  /* 114969bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114969c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114969c6 je 0x114969d6 */
  if (C.zf) goto L_114969d6;
  /* 114969c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 114969ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114969cd push edx */
  push32((uint32_t)(EDX));
  /* 114969ce call 0x11487b50 */
  push32(0x114969d3u); f_11487b50();
  /* 114969d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114969d6:;
  /* 114969d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114969d8 jmp 0x11496b16 */
  goto L_11496b16;
L_114969dd:;
  /* 114969dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114969e1 je 0x114969f1 */
  if (C.zf) goto L_114969f1;
  /* 114969e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114969e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114969e8 push eax */
  push32((uint32_t)(EAX));
  /* 114969e9 call 0x11487b50 */
  push32(0x114969eeu); f_11487b50();
  /* 114969ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114969f1:;
  /* 114969f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114969f4 jmp 0x11496b16 */
  goto L_11496b16;
L_114969f9:;
  /* 114969f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114969fd jne 0x11496b13 */
  if (!C.zf) goto L_11496b13;
  /* 11496a03 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11496a0d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496a10 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11496a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11496a18 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11496a1e push edx */
  push32((uint32_t)(EDX));
  /* 11496a1f push 0x114b6784 */
  push32((uint32_t)(0x114b6784u));
  /* 11496a24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496a27 push eax */
  push32((uint32_t)(EAX));
  /* 11496a28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496a2b push ecx */
  push32((uint32_t)(ECX));
  /* 11496a2c call 0x11497ce0 */
  push32(0x11496a31u); f_11497ce0();
  /* 11496a31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11496a36 jne 0x11496a40 */
  if (!C.zf) goto L_11496a40;
  /* 11496a38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11496a3b jmp 0x11496b16 */
  goto L_11496b16;
L_11496a40:;
  /* 11496a40 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11496a46 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11496a49 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11496a53 jmp 0x11496a64 */
  goto L_11496a64;
L_11496a55:;
  /* 11496a55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11496a5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496a5e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11496a64:;
  /* 11496a64 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496a6b jge 0x11496b0f */
  if ((C.sf==C.of)) goto L_11496b0f;
  /* 11496a71 cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496a78 jle 0x11496aab */
  if ((C.zf||C.sf!=C.of)) goto L_11496aab;
  /* 11496a7a push 4 */
  push32((uint32_t)(0x4u));
  /* 11496a7c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11496a82 mov dl, byte ptr [ecx*2 + 0x114b6784] */
  DL = (r8((uint32_t)(ECX*2 + 0x114b6784)));
  /* 11496a89 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11496a8f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11496a95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11496a9a push eax */
  push32((uint32_t)(EAX));
  /* 11496a9b call 0x1148ae80 */
  push32(0x11496aa0u); f_1148ae80();
  /* 11496aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496aa3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11496aa9 jmp 0x11496ade */
  goto L_11496ade;
L_11496aab:;
  /* 11496aab mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11496ab1 mov dl, byte ptr [ecx*2 + 0x114b6784] */
  DL = (r8((uint32_t)(ECX*2 + 0x114b6784)));
  /* 11496ab8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11496abe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11496ac4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11496ac9 mov ecx, dword ptr [0x114b3b8c] */
  ECX = (r32((uint32_t)(0x114b3b8c)));
  /* 11496acf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11496ad1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11496ad5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11496ad8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11496ade:;
  /* 11496ade cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496ae5 je 0x11496b08 */
  if (C.zf) goto L_11496b08;
  /* 11496ae7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11496aed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11496af0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11496af3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11496afa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11496afe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11496b04 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11496b06 jmp 0x11496b0a */
  goto L_11496b0a;
L_11496b08:;
  /* 11496b08 jmp 0x11496b0f */
  goto L_11496b0f;
L_11496b0a:;
  /* 11496b0a jmp 0x11496a55 */
  goto L_11496a55;
L_11496b0f:;
  /* 11496b0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496b11 jmp 0x11496b16 */
  goto L_11496b16;
L_11496b13:;
  /* 11496b13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11496b16:;
  /* 11496b16 mov esp, ebp */
  ESP = (EBP);
  /* 11496b18 pop ebp */
  EBP = (pop32());
  /* 11496b19 ret  */
  ESPCHK(0x11496890u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b20 @ 0x11496b20 (10 bytes, 5 insns) */
void f_11496b20(void) {
  FTRACE(0x11496b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11496b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11496b21 mov ebp, esp */
  EBP = (ESP);
  /* 11496b23 mov eax, dword ptr [0x114b4dd8] */
  EAX = (r32((uint32_t)(0x114b4dd8)));
  /* 11496b28 pop ebp */
  EBP = (pop32());
  /* 11496b29 ret  */
  ESPCHK(0x11496b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b30 @ 0x11496b30 (575 bytes, 196 insns) */
void f_11496b30(void) {
  FTRACE(0x11496b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11496b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11496b31 mov ebp, esp */
  EBP = (ESP);
  /* 11496b33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11496b35 push 0x114b1b00 */
  push32((uint32_t)(0x114b1b00u));
  /* 11496b3a push 0x11492858 */
  push32((uint32_t)(0x11492858u));
  /* 11496b3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11496b45 push eax */
  push32((uint32_t)(EAX));
  /* 11496b46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11496b4d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496b50 push ebx */
  push32((uint32_t)(EBX));
  /* 11496b51 push esi */
  push32((uint32_t)(ESI));
  /* 11496b52 push edi */
  push32((uint32_t)(EDI));
  /* 11496b53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11496b56 cmp dword ptr [0x114b6790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496b5d jne 0x11496bae */
  if (!C.zf) goto L_11496bae;
  /* 11496b5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11496b62 push eax */
  push32((uint32_t)(EAX));
  /* 11496b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11496b65 push 0x114b1234 */
  push32((uint32_t)(0x114b1234u));
  /* 11496b6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11496b6c call dword ptr [0x114b9304] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9304))), 0x11496b72u);
  /* 11496b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11496b74 je 0x11496b82 */
  if (C.zf) goto L_11496b82;
  /* 11496b76 mov dword ptr [0x114b6790], 1 */
  w32((uint32_t)(0x114b6790), (0x1u));
  /* 11496b80 jmp 0x11496bae */
  goto L_11496bae;
L_11496b82:;
  /* 11496b82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11496b85 push ecx */
  push32((uint32_t)(ECX));
  /* 11496b86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11496b88 push 0x114b1230 */
  push32((uint32_t)(0x114b1230u));
  /* 11496b8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11496b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11496b91 call dword ptr [0x114b9308] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9308))), 0x11496b97u);
  /* 11496b97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11496b99 je 0x11496ba7 */
  if (C.zf) goto L_11496ba7;
  /* 11496b9b mov dword ptr [0x114b6790], 2 */
  w32((uint32_t)(0x114b6790), (0x2u));
  /* 11496ba5 jmp 0x11496bae */
  goto L_11496bae;
L_11496ba7:;
  /* 11496ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496ba9 jmp 0x11496d89 */
  goto L_11496d89;
L_11496bae:;
  /* 11496bae cmp dword ptr [0x114b6790], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b6790))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496bb5 jne 0x11496bd2 */
  if (!C.zf) goto L_11496bd2;
  /* 11496bb7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496bba push edx */
  push32((uint32_t)(EDX));
  /* 11496bbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496bbe push eax */
  push32((uint32_t)(EAX));
  /* 11496bbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11496bc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496bc6 push edx */
  push32((uint32_t)(EDX));
  /* 11496bc7 call dword ptr [0x114b9304] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9304))), 0x11496bcdu);
  /* 11496bcd jmp 0x11496d89 */
  goto L_11496d89;
L_11496bd2:;
  /* 11496bd2 cmp dword ptr [0x114b6790], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114b6790))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496bd9 jne 0x11496d87 */
  if (!C.zf) goto L_11496d87;
  /* 11496bdf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496be3 jne 0x11496bed */
  if (!C.zf) goto L_11496bed;
  /* 11496be5 mov eax, dword ptr [0x114b6714] */
  EAX = (r32((uint32_t)(0x114b6714)));
  /* 11496bea mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11496bed:;
  /* 11496bed push 0 */
  push32((uint32_t)(0x0u));
  /* 11496bef push 0 */
  push32((uint32_t)(0x0u));
  /* 11496bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11496bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11496bf5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 11496bf9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496bfc push edx */
  push32((uint32_t)(EDX));
  /* 11496bfd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11496c02 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11496c05 push eax */
  push32((uint32_t)(EAX));
  /* 11496c06 call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x11496c0cu);
  /* 11496c0c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11496c0f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496c13 jne 0x11496c1c */
  if (!C.zf) goto L_11496c1c;
  /* 11496c15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496c17 jmp 0x11496d89 */
  goto L_11496d89;
L_11496c1c:;
  /* 11496c1c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11496c23 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11496c26 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496c29 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11496c2b call 0x1148a260 */
  push32(0x11496c30u); f_1148a260();
  /* 11496c30 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11496c33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11496c36 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11496c39 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11496c3c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11496c3f push edx */
  push32((uint32_t)(EDX));
  /* 11496c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11496c42 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11496c45 push eax */
  push32((uint32_t)(EAX));
  /* 11496c46 call 0x1148bbf0 */
  push32(0x11496c4bu); f_1148bbf0();
  /* 11496c4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496c4e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11496c55 jmp 0x11496c6e */
  goto L_11496c6e;
  /* 11496c57 mov eax, 1 */
  EAX = (0x1u);
  /* 11496c5c ret  */
  ESPCHK(0x11496b30u, _esp0);
  ESP += 4; return;
  /* 11496c5d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11496c60 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11496c67 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11496c6e:;
  /* 11496c6e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496c72 jne 0x11496c7b */
  if (!C.zf) goto L_11496c7b;
  /* 11496c74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496c76 jmp 0x11496d89 */
  goto L_11496d89;
L_11496c7b:;
  /* 11496c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11496c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11496c7f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11496c82 push ecx */
  push32((uint32_t)(ECX));
  /* 11496c83 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11496c86 push edx */
  push32((uint32_t)(EDX));
  /* 11496c87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496c8a push eax */
  push32((uint32_t)(EAX));
  /* 11496c8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11496c8e push ecx */
  push32((uint32_t)(ECX));
  /* 11496c8f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11496c94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11496c97 push edx */
  push32((uint32_t)(EDX));
  /* 11496c98 call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x11496c9eu);
  /* 11496c9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11496ca0 jne 0x11496ca9 */
  if (!C.zf) goto L_11496ca9;
  /* 11496ca2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496ca4 jmp 0x11496d89 */
  goto L_11496d89;
L_11496ca9:;
  /* 11496ca9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11496cb0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11496cb3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11496cb7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496cba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11496cbc call 0x1148a260 */
  push32(0x11496cc1u); f_1148a260();
  /* 11496cc1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11496cc4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11496cc7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11496cca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11496ccd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11496cd4 jmp 0x11496ced */
  goto L_11496ced;
  /* 11496cd6 mov eax, 1 */
  EAX = (0x1u);
  /* 11496cdb ret  */
  ESPCHK(0x11496b30u, _esp0);
  ESP += 4; return;
  /* 11496cdc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11496cdf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11496ce6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11496ced:;
  /* 11496ced cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496cf1 jne 0x11496cfa */
  if (!C.zf) goto L_11496cfa;
  /* 11496cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496cf5 jmp 0x11496d89 */
  goto L_11496d89;
L_11496cfa:;
  /* 11496cfa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496cfe jne 0x11496d09 */
  if (!C.zf) goto L_11496d09;
  /* 11496d00 mov edx, dword ptr [0x114b6704] */
  EDX = (r32((uint32_t)(0x114b6704)));
  /* 11496d06 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11496d09:;
  /* 11496d09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496d0c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11496d0f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11496d15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496d18 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11496d1b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11496d22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11496d25 push ecx */
  push32((uint32_t)(ECX));
  /* 11496d26 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11496d29 push edx */
  push32((uint32_t)(EDX));
  /* 11496d2a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11496d2d push eax */
  push32((uint32_t)(EAX));
  /* 11496d2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496d31 push ecx */
  push32((uint32_t)(ECX));
  /* 11496d32 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11496d35 push edx */
  push32((uint32_t)(EDX));
  /* 11496d36 call dword ptr [0x114b9308] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9308))), 0x11496d3cu);
  /* 11496d3c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11496d3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496d42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11496d45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11496d47 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11496d4c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496d52 je 0x11496d68 */
  if (C.zf) goto L_11496d68;
  /* 11496d54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496d57 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11496d5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11496d5c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11496d60 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496d66 je 0x11496d6c */
  if (C.zf) goto L_11496d6c;
L_11496d68:;
  /* 11496d68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496d6a jmp 0x11496d89 */
  goto L_11496d89;
L_11496d6c:;
  /* 11496d6c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496d6f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11496d71 push eax */
  push32((uint32_t)(EAX));
  /* 11496d72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11496d75 push ecx */
  push32((uint32_t)(ECX));
  /* 11496d76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11496d79 push edx */
  push32((uint32_t)(EDX));
  /* 11496d7a call 0x1148bc50 */
  push32(0x11496d7fu); f_1148bc50();
  /* 11496d7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496d82 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11496d85 jmp 0x11496d89 */
  goto L_11496d89;
L_11496d87:;
  /* 11496d87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11496d89:;
  /* 11496d89 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11496d8c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11496d8f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11496d96 pop edi */
  EDI = (pop32());
  /* 11496d97 pop esi */
  ESI = (pop32());
  /* 11496d98 pop ebx */
  EBX = (pop32());
  /* 11496d99 mov esp, ebp */
  ESP = (EBP);
  /* 11496d9b pop ebp */
  EBP = (pop32());
  /* 11496d9c ret  */
  ESPCHK(0x11496b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016da0 @ 0x11496da0 (208 bytes, 85 insns) */
void f_11496da0(void) {
  FTRACE(0x11496da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11496da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11496da1 mov ebp, esp */
  EBP = (ESP);
  /* 11496da3 push edi */
  push32((uint32_t)(EDI));
  /* 11496da4 push esi */
  push32((uint32_t)(ESI));
  /* 11496da5 push ebx */
  push32((uint32_t)(EBX));
  /* 11496da6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11496da9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11496dac lea eax, [0x114b66fc] */
  EAX = ((uint32_t)(0x114b66fc));
  /* 11496db2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496db6 jne 0x11496df3 */
  if (!C.zf) goto L_11496df3;
  /* 11496db8 mov al, 0xff */
  AL = (0xffu);
  /* 11496dba mov edi, edi */
  EDI = (EDI);
L_11496dbc:;
  /* 11496dbc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11496dbe je 0x11496dee */
  if (C.zf) goto L_11496dee;
  /* 11496dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11496dc2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11496dc3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11496dc5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11496dc6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496dc8 je 0x11496dbc */
  if (C.zf) goto L_11496dbc;
  /* 11496dca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11496dcc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496dce sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11496dd0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11496dd3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11496dd5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11496dd7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11496dd9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11496ddb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496ddd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11496ddf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11496de2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11496de4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11496de6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496de8 je 0x11496dbc */
  if (C.zf) goto L_11496dbc;
  /* 11496dea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11496dec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11496dee:;
  /* 11496dee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11496df1 jmp 0x11496e6b */
  goto L_11496e6b;
L_11496df3:;
  /* 11496df3 lock inc dword ptr [0x114b6884] */
  x86_unimpl("lock inc @ 0x11496df3");
  /* 11496dfa cmp dword ptr [0x114b6874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496e01 jg 0x11496e07 */
  if ((!C.zf&&C.sf==C.of)) goto L_11496e07;
  /* 11496e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11496e05 jmp 0x11496e1c */
  goto L_11496e1c;
L_11496e07:;
  /* 11496e07 lock dec dword ptr [0x114b6884] */
  x86_unimpl("lock dec @ 0x11496e07");
  /* 11496e0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11496e10 call 0x1148ca30 */
  push32(0x11496e15u); f_1148ca30();
  /* 11496e15 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11496e1c:;
  /* 11496e1c mov eax, 0xff */
  EAX = (0xffu);
  /* 11496e21 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11496e23 nop  */
  /* nop */
L_11496e24:;
  /* 11496e24 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11496e26 je 0x11496e4f */
  if (C.zf) goto L_11496e4f;
  /* 11496e28 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11496e2a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11496e2b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11496e2d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11496e2e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496e30 je 0x11496e24 */
  if (C.zf) goto L_11496e24;
  /* 11496e32 push eax */
  push32((uint32_t)(EAX));
  /* 11496e33 push ebx */
  push32((uint32_t)(EBX));
  /* 11496e34 call 0x1148aff0 */
  push32(0x11496e39u); f_1148aff0();
  /* 11496e39 mov ebx, eax */
  EBX = (EAX);
  /* 11496e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496e3e call 0x1148aff0 */
  push32(0x11496e43u); f_1148aff0();
  /* 11496e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496e46 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496e48 je 0x11496e24 */
  if (C.zf) goto L_11496e24;
  /* 11496e4a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11496e4c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11496e4f:;
  /* 11496e4f mov ebx, eax */
  EBX = (EAX);
  /* 11496e51 pop eax */
  EAX = (pop32());
  /* 11496e52 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496e54 jne 0x11496e5f */
  if (!C.zf) goto L_11496e5f;
  /* 11496e56 lock dec dword ptr [0x114b6884] */
  x86_unimpl("lock dec @ 0x11496e56");
  /* 11496e5d jmp 0x11496e69 */
  goto L_11496e69;
L_11496e5f:;
  /* 11496e5f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11496e61 call 0x1148cad0 */
  push32(0x11496e66u); f_1148cad0();
  /* 11496e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11496e69:;
  /* 11496e69 mov eax, ebx */
  EAX = (EBX);
L_11496e6b:;
  /* 11496e6b pop ebx */
  EBX = (pop32());
  /* 11496e6c pop esi */
  ESI = (pop32());
  /* 11496e6d pop edi */
  EDI = (pop32());
  /* 11496e6e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11496e6f ret  */
  ESPCHK(0x11496da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e70 @ 0x11496e70 (257 bytes, 103 insns) */
void f_11496e70(void) {
  FTRACE(0x11496e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11496e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11496e71 mov ebp, esp */
  EBP = (ESP);
  /* 11496e73 push edi */
  push32((uint32_t)(EDI));
  /* 11496e74 push esi */
  push32((uint32_t)(ESI));
  /* 11496e75 push ebx */
  push32((uint32_t)(EBX));
  /* 11496e76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11496e79 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11496e7b je 0x11496f6a */
  if (C.zf) goto L_11496f6a;
  /* 11496e81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11496e84 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11496e87 lea eax, [0x114b66fc] */
  EAX = ((uint32_t)(0x114b66fc));
  /* 11496e8d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496e91 jne 0x11496ee1 */
  if (!C.zf) goto L_11496ee1;
  /* 11496e93 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11496e95 mov bl, 0x5a */
  BL = (0x5au);
  /* 11496e97 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11496e99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11496e9c:;
  /* 11496e9c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11496e9e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11496ea0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11496ea2 je 0x11496ec5 */
  if (C.zf) goto L_11496ec5;
  /* 11496ea4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11496ea6 je 0x11496ec5 */
  if (C.zf) goto L_11496ec5;
  /* 11496ea8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11496ea9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11496eaa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496eac jb 0x11496eb4 */
  if (C.cf) goto L_11496eb4;
  /* 11496eae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496eb0 ja 0x11496eb4 */
  if ((!C.cf&&!C.zf)) goto L_11496eb4;
  /* 11496eb2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11496eb4:;
  /* 11496eb4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496eb6 jb 0x11496ebe */
  if (C.cf) goto L_11496ebe;
  /* 11496eb8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496eba ja 0x11496ebe */
  if ((!C.cf&&!C.zf)) goto L_11496ebe;
  /* 11496ebc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11496ebe:;
  /* 11496ebe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496ec0 jne 0x11496ecf */
  if (!C.zf) goto L_11496ecf;
  /* 11496ec2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11496ec3 jne 0x11496e9c */
  if (!C.zf) goto L_11496e9c;
L_11496ec5:;
  /* 11496ec5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11496ec7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11496ec9 je 0x11496f6a */
  if (C.zf) goto L_11496f6a;
L_11496ecf:;
  /* 11496ecf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11496ed4 jb 0x11496f6a */
  if (C.cf) goto L_11496f6a;
  /* 11496eda neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11496edc jmp 0x11496f6a */
  goto L_11496f6a;
L_11496ee1:;
  /* 11496ee1 lock inc dword ptr [0x114b6884] */
  x86_unimpl("lock inc @ 0x11496ee1");
  /* 11496ee8 cmp dword ptr [0x114b6874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496eef jg 0x11496ef5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11496ef5;
  /* 11496ef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11496ef3 jmp 0x11496f0e */
  goto L_11496f0e;
L_11496ef5:;
  /* 11496ef5 lock dec dword ptr [0x114b6884] */
  x86_unimpl("lock dec @ 0x11496ef5");
  /* 11496efc mov ebx, ecx */
  EBX = (ECX);
  /* 11496efe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11496f00 call 0x1148ca30 */
  push32(0x11496f05u); f_1148ca30();
  /* 11496f05 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11496f0c mov ecx, ebx */
  ECX = (EBX);
L_11496f0e:;
  /* 11496f0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496f10 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11496f12 mov edi, edi */
  EDI = (EDI);
L_11496f14:;
  /* 11496f14 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11496f16 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496f18 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11496f1a je 0x11496f3f */
  if (C.zf) goto L_11496f3f;
  /* 11496f1c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11496f1e je 0x11496f3f */
  if (C.zf) goto L_11496f3f;
  /* 11496f20 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11496f21 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11496f22 push ecx */
  push32((uint32_t)(ECX));
  /* 11496f23 push eax */
  push32((uint32_t)(EAX));
  /* 11496f24 push ebx */
  push32((uint32_t)(EBX));
  /* 11496f25 call 0x1148aff0 */
  push32(0x11496f2au); f_1148aff0();
  /* 11496f2a mov ebx, eax */
  EBX = (EAX);
  /* 11496f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496f2f call 0x1148aff0 */
  push32(0x11496f34u); f_1148aff0();
  /* 11496f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496f37 pop ecx */
  ECX = (pop32());
  /* 11496f38 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496f3a jne 0x11496f45 */
  if (!C.zf) goto L_11496f45;
  /* 11496f3c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11496f3d jne 0x11496f14 */
  if (!C.zf) goto L_11496f14;
L_11496f3f:;
  /* 11496f3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11496f41 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496f43 je 0x11496f4e */
  if (C.zf) goto L_11496f4e;
L_11496f45:;
  /* 11496f45 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11496f4a jb 0x11496f4e */
  if (C.cf) goto L_11496f4e;
  /* 11496f4c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11496f4e:;
  /* 11496f4e pop eax */
  EAX = (pop32());
  /* 11496f4f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496f51 jne 0x11496f5c */
  if (!C.zf) goto L_11496f5c;
  /* 11496f53 lock dec dword ptr [0x114b6884] */
  x86_unimpl("lock dec @ 0x11496f53");
  /* 11496f5a jmp 0x11496f6a */
  goto L_11496f6a;
L_11496f5c:;
  /* 11496f5c mov ebx, ecx */
  EBX = (ECX);
  /* 11496f5e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11496f60 call 0x1148cad0 */
  push32(0x11496f65u); f_1148cad0();
  /* 11496f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496f68 mov ecx, ebx */
  ECX = (EBX);
L_11496f6a:;
  /* 11496f6a mov eax, ecx */
  EAX = (ECX);
  /* 11496f6c pop ebx */
  EBX = (pop32());
  /* 11496f6d pop esi */
  ESI = (pop32());
  /* 11496f6e pop edi */
  EDI = (pop32());
  /* 11496f6f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11496f70 ret  */
  ESPCHK(0x11496e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f80 @ 0x11496f80 (255 bytes, 88 insns) */
void f_11496f80(void) {
  FTRACE(0x11496f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11496f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11496f81 mov ebp, esp */
  EBP = (ESP);
  /* 11496f83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11496f86:;
  /* 11496f86 cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496f8d jle 0x11496fa6 */
  if ((C.zf||C.sf!=C.of)) goto L_11496fa6;
  /* 11496f8f push 8 */
  push32((uint32_t)(0x8u));
  /* 11496f91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496f94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11496f96 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11496f98 push ecx */
  push32((uint32_t)(ECX));
  /* 11496f99 call 0x1148ae80 */
  push32(0x11496f9eu); f_1148ae80();
  /* 11496f9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11496fa1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11496fa4 jmp 0x11496fbf */
  goto L_11496fbf;
L_11496fa6:;
  /* 11496fa6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496fa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496fab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11496fad mov ecx, dword ptr [0x114b3b8c] */
  ECX = (r32((uint32_t)(0x114b3b8c)));
  /* 11496fb3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11496fb5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11496fb9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11496fbc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11496fbf:;
  /* 11496fbf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496fc3 je 0x11496fd0 */
  if (C.zf) goto L_11496fd0;
  /* 11496fc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496fc8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496fcb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11496fce jmp 0x11496f86 */
  goto L_11496f86;
L_11496fd0:;
  /* 11496fd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496fd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11496fd5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11496fd7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11496fda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496fdd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11496fe0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11496fe3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11496fe6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11496fe9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496fed je 0x11496ff5 */
  if (C.zf) goto L_11496ff5;
  /* 11496fef cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11496ff3 jne 0x11497008 */
  if (!C.zf) goto L_11497008;
L_11496ff5:;
  /* 11496ff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11496ff8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11496ffa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11496ffc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11496fff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497002 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497005 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11497008:;
  /* 11497008 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1149700f:;
  /* 1149700f cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497016 jle 0x1149702b */
  if ((C.zf||C.sf!=C.of)) goto L_1149702b;
  /* 11497018 push 4 */
  push32((uint32_t)(0x4u));
  /* 1149701a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149701d push edx */
  push32((uint32_t)(EDX));
  /* 1149701e call 0x1148ae80 */
  push32(0x11497023u); f_1148ae80();
  /* 11497023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497026 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11497029 jmp 0x11497040 */
  goto L_11497040;
L_1149702b:;
  /* 1149702b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149702e mov ecx, dword ptr [0x114b3b8c] */
  ECX = (r32((uint32_t)(0x114b3b8c)));
  /* 11497034 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11497036 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1149703a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1149703d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11497040:;
  /* 11497040 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497044 je 0x1149706b */
  if (C.zf) goto L_1149706b;
  /* 11497046 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11497049 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1149704c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149704f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11497053 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11497056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497059 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1149705b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1149705d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11497060 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497063 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497066 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11497069 jmp 0x1149700f */
  goto L_1149700f;
L_1149706b:;
  /* 1149706b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149706f jne 0x11497078 */
  if (!C.zf) goto L_11497078;
  /* 11497071 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11497074 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11497076 jmp 0x1149707b */
  goto L_1149707b;
L_11497078:;
  /* 11497078 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1149707b:;
  /* 1149707b mov esp, ebp */
  ESP = (EBP);
  /* 1149707d pop ebp */
  EBP = (pop32());
  /* 1149707e ret  */
  ESPCHK(0x11496f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10017080 @ 0x11497080 (17 bytes, 8 insns) */
void f_11497080(void) {
  FTRACE(0x11497080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11497080 push ebp */
  push32((uint32_t)(EBP));
  /* 11497081 mov ebp, esp */
  EBP = (ESP);
  /* 11497083 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497086 push eax */
  push32((uint32_t)(EAX));
  /* 11497087 call 0x11496f80 */
  push32(0x1149708cu); f_11496f80();
  /* 1149708c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149708f pop ebp */
  EBP = (pop32());
  /* 11497090 ret  */
  ESPCHK(0x11497080u, _esp0);
  ESP += 4; return;
}

/* FUN_100170a0 @ 0x114970a0 (297 bytes, 106 insns) */
void f_114970a0(void) {
  FTRACE(0x114970a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114970a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114970a1 mov ebp, esp */
  EBP = (ESP);
  /* 114970a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114970a6 push esi */
  push32((uint32_t)(ESI));
L_114970a7:;
  /* 114970a7 cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114970ae jle 0x114970c7 */
  if ((C.zf||C.sf!=C.of)) goto L_114970c7;
  /* 114970b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 114970b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114970b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114970b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114970b9 push ecx */
  push32((uint32_t)(ECX));
  /* 114970ba call 0x1148ae80 */
  push32(0x114970bfu); f_1148ae80();
  /* 114970bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114970c2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114970c5 jmp 0x114970e0 */
  goto L_114970e0;
L_114970c7:;
  /* 114970c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114970ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114970cc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114970ce mov ecx, dword ptr [0x114b3b8c] */
  ECX = (r32((uint32_t)(0x114b3b8c)));
  /* 114970d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114970d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114970da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114970dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_114970e0:;
  /* 114970e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114970e4 je 0x114970f1 */
  if (C.zf) goto L_114970f1;
  /* 114970e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114970e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114970ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114970ef jmp 0x114970a7 */
  goto L_114970a7;
L_114970f1:;
  /* 114970f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114970f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114970f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114970f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114970fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114970fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497101 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11497104 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11497107 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1149710a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149710e je 0x11497116 */
  if (C.zf) goto L_11497116;
  /* 11497110 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497114 jne 0x11497129 */
  if (!C.zf) goto L_11497129;
L_11497116:;
  /* 11497116 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497119 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149711b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1149711d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11497120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497123 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497126 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11497129:;
  /* 11497129 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11497130 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11497137:;
  /* 11497137 cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149713e jle 0x11497153 */
  if ((C.zf||C.sf!=C.of)) goto L_11497153;
  /* 11497140 push 4 */
  push32((uint32_t)(0x4u));
  /* 11497142 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11497145 push edx */
  push32((uint32_t)(EDX));
  /* 11497146 call 0x1148ae80 */
  push32(0x1149714bu); f_1148ae80();
  /* 1149714b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149714e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11497151 jmp 0x11497168 */
  goto L_11497168;
L_11497153:;
  /* 11497153 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11497156 mov ecx, dword ptr [0x114b3b8c] */
  ECX = (r32((uint32_t)(0x114b3b8c)));
  /* 1149715c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1149715e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11497162 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11497165 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11497168:;
  /* 11497168 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149716c je 0x114971a9 */
  if (C.zf) goto L_114971a9;
  /* 1149716e push 0 */
  push32((uint32_t)(0x0u));
  /* 11497170 push 0xa */
  push32((uint32_t)(0xau));
  /* 11497172 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11497175 push eax */
  push32((uint32_t)(EAX));
  /* 11497176 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497179 push ecx */
  push32((uint32_t)(ECX));
  /* 1149717a call 0x11498030 */
  push32(0x1149717fu); f_11498030();
  /* 1149717f mov ecx, eax */
  ECX = (EAX);
  /* 11497181 mov esi, edx */
  ESI = (EDX);
  /* 11497183 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11497186 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497189 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1149718a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149718c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1149718e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11497191 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11497194 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497197 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497199 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1149719b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1149719e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114971a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114971a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114971a7 jmp 0x11497137 */
  goto L_11497137;
L_114971a9:;
  /* 114971a9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114971ad jne 0x114971be */
  if (!C.zf) goto L_114971be;
  /* 114971af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114971b2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114971b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114971b7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114971ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114971bc jmp 0x114971c4 */
  goto L_114971c4;
L_114971be:;
  /* 114971be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114971c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_114971c4:;
  /* 114971c4 pop esi */
  ESI = (pop32());
  /* 114971c5 mov esp, ebp */
  ESP = (EBP);
  /* 114971c7 pop ebp */
  EBP = (pop32());
  /* 114971c8 ret  */
  ESPCHK(0x114970a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100171d0 @ 0x114971d0 (122 bytes, 39 insns) */
void f_114971d0(void) {
  FTRACE(0x114971d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114971d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114971d1 mov ebp, esp */
  EBP = (ESP);
  /* 114971d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114971d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114971d7 cmp eax, dword ptr [0x114b7ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b7ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114971dd jae 0x11497201 */
  if (!C.cf) goto L_11497201;
  /* 114971df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114971e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114971e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114971e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114971eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114971ee mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 114971f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114971fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114971fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114971ff jne 0x1149721c */
  if (!C.zf) goto L_1149721c;
L_11497201:;
  /* 11497201 call 0x1148fad0 */
  push32(0x11497206u); f_1148fad0();
  /* 11497206 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1149720c call 0x1148fae0 */
  push32(0x11497211u); f_1148fae0();
  /* 11497211 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11497217 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1149721a jmp 0x11497246 */
  goto L_11497246;
L_1149721c:;
  /* 1149721c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149721f push edx */
  push32((uint32_t)(EDX));
  /* 11497220 call 0x11492310 */
  push32(0x11497225u); f_11492310();
  /* 11497225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149722b push eax */
  push32((uint32_t)(EAX));
  /* 1149722c call 0x11497250 */
  push32(0x11497231u); f_11497250();
  /* 11497231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497234 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11497237 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149723a push ecx */
  push32((uint32_t)(ECX));
  /* 1149723b call 0x114923a0 */
  push32(0x11497240u); f_114923a0();
  /* 11497240 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11497246:;
  /* 11497246 mov esp, ebp */
  ESP = (EBP);
  /* 11497248 pop ebp */
  EBP = (pop32());
  /* 11497249 ret  */
  ESPCHK(0x114971d0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11497250 (170 bytes, 59 insns) */
void f_11497250(void) {
  FTRACE(0x11497250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11497250 push ebp */
  push32((uint32_t)(EBP));
  /* 11497251 mov ebp, esp */
  EBP = (ESP);
  /* 11497253 push ecx */
  push32((uint32_t)(ECX));
  /* 11497254 push esi */
  push32((uint32_t)(ESI));
  /* 11497255 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497258 push eax */
  push32((uint32_t)(EAX));
  /* 11497259 call 0x11492190 */
  push32(0x1149725eu); f_11492190();
  /* 1149725e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497261 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497264 je 0x114972a3 */
  if (C.zf) goto L_114972a3;
  /* 11497266 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149726a je 0x11497272 */
  if (C.zf) goto L_11497272;
  /* 1149726c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497270 jne 0x1149728c */
  if (!C.zf) goto L_1149728c;
L_11497272:;
  /* 11497272 push 1 */
  push32((uint32_t)(0x1u));
  /* 11497274 call 0x11492190 */
  push32(0x11497279u); f_11492190();
  /* 11497279 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149727c mov esi, eax */
  ESI = (EAX);
  /* 1149727e push 2 */
  push32((uint32_t)(0x2u));
  /* 11497280 call 0x11492190 */
  push32(0x11497285u); f_11492190();
  /* 11497285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497288 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149728a je 0x114972a3 */
  if (C.zf) goto L_114972a3;
L_1149728c:;
  /* 1149728c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149728f push ecx */
  push32((uint32_t)(ECX));
  /* 11497290 call 0x11492190 */
  push32(0x11497295u); f_11492190();
  /* 11497295 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497298 push eax */
  push32((uint32_t)(EAX));
  /* 11497299 call dword ptr [0x114b92d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92d0))), 0x1149729fu);
  /* 1149729f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114972a1 je 0x114972ac */
  if (C.zf) goto L_114972ac;
L_114972a3:;
  /* 114972a3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114972aa jmp 0x114972b5 */
  goto L_114972b5;
L_114972ac:;
  /* 114972ac call dword ptr [0x114b93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93ac))), 0x114972b2u);
  /* 114972b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114972b5:;
  /* 114972b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114972b8 push edx */
  push32((uint32_t)(EDX));
  /* 114972b9 call 0x114920b0 */
  push32(0x114972beu); f_114920b0();
  /* 114972be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114972c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114972c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114972c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114972ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114972cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114972d0 mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 114972d7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 114972dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114972e0 je 0x114972f3 */
  if (C.zf) goto L_114972f3;
  /* 114972e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114972e5 push eax */
  push32((uint32_t)(EAX));
  /* 114972e6 call 0x1148fa30 */
  push32(0x114972ebu); f_1148fa30();
  /* 114972eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114972ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114972f1 jmp 0x114972f5 */
  goto L_114972f5;
L_114972f3:;
  /* 114972f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114972f5:;
  /* 114972f5 pop esi */
  ESI = (pop32());
  /* 114972f6 mov esp, ebp */
  ESP = (EBP);
  /* 114972f8 pop ebp */
  EBP = (pop32());
  /* 114972f9 ret  */
  ESPCHK(0x11497250u, _esp0);
  ESP += 4; return;
}

/* FUN_10017300 @ 0x11497300 (146 bytes, 52 insns) */
void f_11497300(void) {
  FTRACE(0x11497300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11497300 push ebp */
  push32((uint32_t)(EBP));
  /* 11497301 mov ebp, esp */
  EBP = (ESP);
  /* 11497303 push ebx */
  push32((uint32_t)(EBX));
  /* 11497304 push esi */
  push32((uint32_t)(ESI));
  /* 11497305 push edi */
  push32((uint32_t)(EDI));
L_11497306:;
  /* 11497306 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149730a jne 0x1149732a */
  if (!C.zf) goto L_1149732a;
  /* 1149730c push 0x114b19b0 */
  push32((uint32_t)(0x114b19b0u));
  /* 11497311 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497313 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11497315 push 0x114b1b18 */
  push32((uint32_t)(0x114b1b18u));
  /* 1149731a push 2 */
  push32((uint32_t)(0x2u));
  /* 1149731c call 0x11484860 */
  push32(0x11497321u); f_11484860();
  /* 11497321 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497324 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497327 jne 0x1149732a */
  if (!C.zf) goto L_1149732a;
  /* 11497329 int3  */
  x86_unimpl("int3 @ 0x11497329");
L_1149732a:;
  /* 1149732a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149732c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149732e jne 0x11497306 */
  if (!C.zf) goto L_11497306;
  /* 11497330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497333 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11497336 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1149733c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1149733e je 0x1149738d */
  if (C.zf) goto L_1149738d;
  /* 11497340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497343 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11497346 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11497349 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149734b je 0x1149738d */
  if (C.zf) goto L_1149738d;
  /* 1149734d push 2 */
  push32((uint32_t)(0x2u));
  /* 1149734f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497352 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11497355 push eax */
  push32((uint32_t)(EAX));
  /* 11497356 call 0x11487b50 */
  push32(0x1149735bu); f_11487b50();
  /* 1149735b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149735e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497361 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11497364 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1149736a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149736d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11497370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497373 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11497379 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149737c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11497383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497386 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1149738d:;
  /* 1149738d pop edi */
  EDI = (pop32());
  /* 1149738e pop esi */
  ESI = (pop32());
  /* 1149738f pop ebx */
  EBX = (pop32());
  /* 11497390 pop ebp */
  EBP = (pop32());
  /* 11497391 ret  */
  ESPCHK(0x11497300u, _esp0);
  ESP += 4; return;
}

/* FUN_100173a0 @ 0x114973a0 (61 bytes, 18 insns) */
void f_114973a0(void) {
  FTRACE(0x114973a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114973a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114973a1 mov ebp, esp */
  EBP = (ESP);
  /* 114973a3 cmp dword ptr [0x114b6850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114973aa jne 0x114973db */
  if (!C.zf) goto L_114973db;
  /* 114973ac push 0xb */
  push32((uint32_t)(0xbu));
  /* 114973ae call 0x1148ca30 */
  push32(0x114973b3u); f_1148ca30();
  /* 114973b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114973b6 cmp dword ptr [0x114b6850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114973bd jne 0x114973d1 */
  if (!C.zf) goto L_114973d1;
  /* 114973bf call 0x11497400 */
  push32(0x114973c4u); f_11497400();
  /* 114973c4 mov eax, dword ptr [0x114b6850] */
  EAX = (r32((uint32_t)(0x114b6850)));
  /* 114973c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114973cc mov dword ptr [0x114b6850], eax */
  w32((uint32_t)(0x114b6850), (EAX));
L_114973d1:;
  /* 114973d1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114973d3 call 0x1148cad0 */
  push32(0x114973d8u); f_1148cad0();
  /* 114973d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114973db:;
  /* 114973db pop ebp */
  EBP = (pop32());
  /* 114973dc ret  */
  ESPCHK(0x114973a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100173e0 @ 0x114973e0 (30 bytes, 11 insns) */
void f_114973e0(void) {
  FTRACE(0x114973e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114973e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114973e1 mov ebp, esp */
  EBP = (ESP);
  /* 114973e3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114973e5 call 0x1148ca30 */
  push32(0x114973eau); f_1148ca30();
  /* 114973ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114973ed call 0x11497400 */
  push32(0x114973f2u); f_11497400();
  /* 114973f2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114973f4 call 0x1148cad0 */
  push32(0x114973f9u); f_1148cad0();
  /* 114973f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114973fc pop ebp */
  EBP = (pop32());
  /* 114973fd ret  */
  ESPCHK(0x114973e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017400 @ 0x11497400 (939 bytes, 266 insns) */
void f_11497400(void) {
  FTRACE(0x11497400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11497400 push ebp */
  push32((uint32_t)(EBP));
  /* 11497401 mov ebp, esp */
  EBP = (ESP);
  /* 11497403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497406 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1149740d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1149740f call 0x1148ca30 */
  push32(0x11497414u); f_1148ca30();
  /* 11497414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497417 mov dword ptr [0x114b6798], 0 */
  w32((uint32_t)(0x114b6798), (0x0u));
  /* 11497421 mov dword ptr [0x114b5140], 0xffffffff */
  w32((uint32_t)(0x114b5140), (0xffffffffu));
  /* 1149742b mov eax, dword ptr [0x114b5140] */
  EAX = (r32((uint32_t)(0x114b5140)));
  /* 11497430 mov dword ptr [0x114b5130], eax */
  w32((uint32_t)(0x114b5130), (EAX));
  /* 11497435 push 0x114b1b6c */
  push32((uint32_t)(0x114b1b6cu));
  /* 1149743a call 0x114980a0 */
  push32(0x1149743fu); f_114980a0();
  /* 1149743f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497442 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11497445 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497449 jne 0x11497583 */
  if (!C.zf) goto L_11497583;
  /* 1149744f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11497451 call 0x1148cad0 */
  push32(0x11497456u); f_1148cad0();
  /* 11497456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497459 push 0x114b67a0 */
  push32((uint32_t)(0x114b67a0u));
  /* 1149745e call dword ptr [0x114b92cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92cc))), 0x11497464u);
  /* 11497464 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497467 je 0x1149757e */
  if (C.zf) goto L_1149757e;
  /* 1149746d mov dword ptr [0x114b6798], 1 */
  w32((uint32_t)(0x114b6798), (0x1u));
  /* 11497477 mov ecx, dword ptr [0x114b67a0] */
  ECX = (r32((uint32_t)(0x114b67a0)));
  /* 1149747d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497480 mov dword ptr [0x114b509c], ecx */
  w32((uint32_t)(0x114b509c), (ECX));
  /* 11497486 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11497488 mov dx, word ptr [0x114b67e6] */
  DX = (r16((uint32_t)(0x114b67e6)));
  /* 1149748f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11497491 je 0x114974a9 */
  if (C.zf) goto L_114974a9;
  /* 11497493 mov eax, dword ptr [0x114b67f4] */
  EAX = (r32((uint32_t)(0x114b67f4)));
  /* 11497498 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1149749b mov ecx, dword ptr [0x114b509c] */
  ECX = (r32((uint32_t)(0x114b509c)));
  /* 114974a1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114974a3 mov dword ptr [0x114b509c], ecx */
  w32((uint32_t)(0x114b509c), (ECX));
L_114974a9:;
  /* 114974a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114974ab mov dx, word ptr [0x114b683a] */
  DX = (r16((uint32_t)(0x114b683a)));
  /* 114974b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114974b4 je 0x114974de */
  if (C.zf) goto L_114974de;
  /* 114974b6 cmp dword ptr [0x114b6848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114974bd je 0x114974de */
  if (C.zf) goto L_114974de;
  /* 114974bf mov dword ptr [0x114b50a0], 1 */
  w32((uint32_t)(0x114b50a0), (0x1u));
  /* 114974c9 mov eax, dword ptr [0x114b6848] */
  EAX = (r32((uint32_t)(0x114b6848)));
  /* 114974ce sub eax, dword ptr [0x114b67f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b67f4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114974d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114974d7 mov dword ptr [0x114b50a4], eax */
  w32((uint32_t)(0x114b50a4), (EAX));
  /* 114974dc jmp 0x114974f2 */
  goto L_114974f2;
L_114974de:;
  /* 114974de mov dword ptr [0x114b50a0], 0 */
  w32((uint32_t)(0x114b50a0), (0x0u));
  /* 114974e8 mov dword ptr [0x114b50a4], 0 */
  w32((uint32_t)(0x114b50a4), (0x0u));
L_114974f2:;
  /* 114974f2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 114974f5 push ecx */
  push32((uint32_t)(ECX));
  /* 114974f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114974f8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 114974fa mov edx, dword ptr [0x114b5128] */
  EDX = (r32((uint32_t)(0x114b5128)));
  /* 11497500 push edx */
  push32((uint32_t)(EDX));
  /* 11497501 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11497503 push 0x114b67a4 */
  push32((uint32_t)(0x114b67a4u));
  /* 11497508 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1149750d mov eax, dword ptr [0x114b6714] */
  EAX = (r32((uint32_t)(0x114b6714)));
  /* 11497512 push eax */
  push32((uint32_t)(EAX));
  /* 11497513 call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x11497519u);
  /* 11497519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149751b je 0x1149752f */
  if (C.zf) goto L_1149752f;
  /* 1149751d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497521 jne 0x1149752f */
  if (!C.zf) goto L_1149752f;
  /* 11497523 mov ecx, dword ptr [0x114b5128] */
  ECX = (r32((uint32_t)(0x114b5128)));
  /* 11497529 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1149752d jmp 0x11497538 */
  goto L_11497538;
L_1149752f:;
  /* 1149752f mov edx, dword ptr [0x114b5128] */
  EDX = (r32((uint32_t)(0x114b5128)));
  /* 11497535 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11497538:;
  /* 11497538 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1149753b push eax */
  push32((uint32_t)(EAX));
  /* 1149753c push 0 */
  push32((uint32_t)(0x0u));
  /* 1149753e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11497540 mov ecx, dword ptr [0x114b512c] */
  ECX = (r32((uint32_t)(0x114b512c)));
  /* 11497546 push ecx */
  push32((uint32_t)(ECX));
  /* 11497547 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11497549 push 0x114b67f8 */
  push32((uint32_t)(0x114b67f8u));
  /* 1149754e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11497553 mov edx, dword ptr [0x114b6714] */
  EDX = (r32((uint32_t)(0x114b6714)));
  /* 11497559 push edx */
  push32((uint32_t)(EDX));
  /* 1149755a call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x11497560u);
  /* 11497560 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11497562 je 0x11497575 */
  if (C.zf) goto L_11497575;
  /* 11497564 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497568 jne 0x11497575 */
  if (!C.zf) goto L_11497575;
  /* 1149756a mov eax, dword ptr [0x114b512c] */
  EAX = (r32((uint32_t)(0x114b512c)));
  /* 1149756f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11497573 jmp 0x1149757e */
  goto L_1149757e;
L_11497575:;
  /* 11497575 mov ecx, dword ptr [0x114b512c] */
  ECX = (r32((uint32_t)(0x114b512c)));
  /* 1149757b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1149757e:;
  /* 1149757e jmp 0x114977a7 */
  goto L_114977a7;
L_11497583:;
  /* 11497583 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497586 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11497589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149758b je 0x114975ad */
  if (C.zf) goto L_114975ad;
  /* 1149758d cmp dword ptr [0x114b684c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b684c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497594 je 0x114975bc */
  if (C.zf) goto L_114975bc;
  /* 11497596 mov ecx, dword ptr [0x114b684c] */
  ECX = (r32((uint32_t)(0x114b684c)));
  /* 1149759c push ecx */
  push32((uint32_t)(ECX));
  /* 1149759d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114975a0 push edx */
  push32((uint32_t)(EDX));
  /* 114975a1 call 0x11493df0 */
  push32(0x114975a6u); f_11493df0();
  /* 114975a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114975a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114975ab jne 0x114975bc */
  if (!C.zf) goto L_114975bc;
L_114975ad:;
  /* 114975ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 114975af call 0x1148cad0 */
  push32(0x114975b4u); f_1148cad0();
  /* 114975b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114975b7 jmp 0x114977a7 */
  goto L_114977a7;
L_114975bc:;
  /* 114975bc push 2 */
  push32((uint32_t)(0x2u));
  /* 114975be mov eax, dword ptr [0x114b684c] */
  EAX = (r32((uint32_t)(0x114b684c)));
  /* 114975c3 push eax */
  push32((uint32_t)(EAX));
  /* 114975c4 call 0x11487b50 */
  push32(0x114975c9u); f_11487b50();
  /* 114975c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114975cc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 114975d1 push 0x114b1b64 */
  push32((uint32_t)(0x114b1b64u));
  /* 114975d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114975d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114975db push ecx */
  push32((uint32_t)(ECX));
  /* 114975dc call 0x11489ef0 */
  push32(0x114975e1u); f_11489ef0();
  /* 114975e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114975e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114975e7 push eax */
  push32((uint32_t)(EAX));
  /* 114975e8 call 0x114870c0 */
  push32(0x114975edu); f_114870c0();
  /* 114975ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114975f0 mov dword ptr [0x114b684c], eax */
  w32((uint32_t)(0x114b684c), (EAX));
  /* 114975f5 cmp dword ptr [0x114b684c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b684c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114975fc jne 0x1149760d */
  if (!C.zf) goto L_1149760d;
  /* 114975fe push 0xc */
  push32((uint32_t)(0xcu));
  /* 11497600 call 0x1148cad0 */
  push32(0x11497605u); f_1148cad0();
  /* 11497605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497608 jmp 0x114977a7 */
  goto L_114977a7;
L_1149760d:;
  /* 1149760d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497610 push edx */
  push32((uint32_t)(EDX));
  /* 11497611 mov eax, dword ptr [0x114b684c] */
  EAX = (r32((uint32_t)(0x114b684c)));
  /* 11497616 push eax */
  push32((uint32_t)(EAX));
  /* 11497617 call 0x1148a070 */
  push32(0x1149761cu); f_1148a070();
  /* 1149761c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149761f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11497621 call 0x1148cad0 */
  push32(0x11497626u); f_1148cad0();
  /* 11497626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497629 push 3 */
  push32((uint32_t)(0x3u));
  /* 1149762b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149762e push ecx */
  push32((uint32_t)(ECX));
  /* 1149762f mov edx, dword ptr [0x114b5128] */
  EDX = (r32((uint32_t)(0x114b5128)));
  /* 11497635 push edx */
  push32((uint32_t)(EDX));
  /* 11497636 call 0x1148a8e0 */
  push32(0x1149763bu); f_1148a8e0();
  /* 1149763b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149763e mov eax, dword ptr [0x114b5128] */
  EAX = (r32((uint32_t)(0x114b5128)));
  /* 11497643 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11497647 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149764a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149764d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11497650 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497653 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11497656 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497659 jne 0x1149766d */
  if (!C.zf) goto L_1149766d;
  /* 1149765b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149765e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497661 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11497664 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497667 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149766a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1149766d:;
  /* 1149766d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497670 push eax */
  push32((uint32_t)(EAX));
  /* 11497671 call 0x11496f80 */
  push32(0x11497676u); f_11496f80();
  /* 11497676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497679 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1149767f mov dword ptr [0x114b509c], eax */
  w32((uint32_t)(0x114b509c), (EAX));
L_11497684:;
  /* 11497684 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497687 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1149768a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149768d je 0x114976a5 */
  if (C.zf) goto L_114976a5;
  /* 1149768f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497692 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11497695 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497698 jl 0x114976b0 */
  if ((C.sf!=C.of)) goto L_114976b0;
  /* 1149769a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149769d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114976a0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114976a3 jg 0x114976b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_114976b0;
L_114976a5:;
  /* 114976a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114976a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114976ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114976ae jmp 0x11497684 */
  goto L_11497684;
L_114976b0:;
  /* 114976b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114976b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114976b6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114976b9 jne 0x11497755 */
  if (!C.zf) goto L_11497755;
  /* 114976bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114976c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114976c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114976c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114976cb push edx */
  push32((uint32_t)(EDX));
  /* 114976cc call 0x11496f80 */
  push32(0x114976d1u); f_11496f80();
  /* 114976d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114976d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114976d7 mov ecx, dword ptr [0x114b509c] */
  ECX = (r32((uint32_t)(0x114b509c)));
  /* 114976dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114976df mov dword ptr [0x114b509c], ecx */
  w32((uint32_t)(0x114b509c), (ECX));
L_114976e5:;
  /* 114976e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114976e8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114976eb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114976ee jl 0x11497706 */
  if ((C.sf!=C.of)) goto L_11497706;
  /* 114976f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114976f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114976f6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114976f9 jg 0x11497706 */
  if ((!C.zf&&C.sf==C.of)) goto L_11497706;
  /* 114976fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114976fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497701 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11497704 jmp 0x114976e5 */
  goto L_114976e5;
L_11497706:;
  /* 11497706 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497709 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1149770c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149770f jne 0x11497755 */
  if (!C.zf) goto L_11497755;
  /* 11497711 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497714 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497717 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1149771a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149771d push ecx */
  push32((uint32_t)(ECX));
  /* 1149771e call 0x11496f80 */
  push32(0x11497723u); f_11496f80();
  /* 11497723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497726 mov edx, dword ptr [0x114b509c] */
  EDX = (r32((uint32_t)(0x114b509c)));
  /* 1149772c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149772e mov dword ptr [0x114b509c], edx */
  w32((uint32_t)(0x114b509c), (EDX));
L_11497734:;
  /* 11497734 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497737 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149773a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149773d jl 0x11497755 */
  if ((C.sf!=C.of)) goto L_11497755;
  /* 1149773f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497742 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11497745 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497748 jg 0x11497755 */
  if ((!C.zf&&C.sf==C.of)) goto L_11497755;
  /* 1149774a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149774d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497750 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11497753 jmp 0x11497734 */
  goto L_11497734;
L_11497755:;
  /* 11497755 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497759 je 0x11497769 */
  if (C.zf) goto L_11497769;
  /* 1149775b mov edx, dword ptr [0x114b509c] */
  EDX = (r32((uint32_t)(0x114b509c)));
  /* 11497761 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11497763 mov dword ptr [0x114b509c], edx */
  w32((uint32_t)(0x114b509c), (EDX));
L_11497769:;
  /* 11497769 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149776c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149776f mov dword ptr [0x114b50a0], ecx */
  w32((uint32_t)(0x114b50a0), (ECX));
  /* 11497775 cmp dword ptr [0x114b50a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b50a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149777c je 0x1149779e */
  if (C.zf) goto L_1149779e;
  /* 1149777e push 3 */
  push32((uint32_t)(0x3u));
  /* 11497780 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497783 push edx */
  push32((uint32_t)(EDX));
  /* 11497784 mov eax, dword ptr [0x114b512c] */
  EAX = (r32((uint32_t)(0x114b512c)));
  /* 11497789 push eax */
  push32((uint32_t)(EAX));
  /* 1149778a call 0x1148a8e0 */
  push32(0x1149778fu); f_1148a8e0();
  /* 1149778f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497792 mov ecx, dword ptr [0x114b512c] */
  ECX = (r32((uint32_t)(0x114b512c)));
  /* 11497798 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1149779c jmp 0x114977a7 */
  goto L_114977a7;
L_1149779e:;
  /* 1149779e mov edx, dword ptr [0x114b512c] */
  EDX = (r32((uint32_t)(0x114b512c)));
  /* 114977a4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_114977a7:;
  /* 114977a7 mov esp, ebp */
  ESP = (EBP);
  /* 114977a9 pop ebp */
  EBP = (pop32());
  /* 114977aa ret  */
  ESPCHK(0x11497400u, _esp0);
  ESP += 4; return;
}

/* FUN_100177b0 @ 0x114977b0 (46 bytes, 18 insns) */
void f_114977b0(void) {
  FTRACE(0x114977b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114977b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114977b1 mov ebp, esp */
  EBP = (ESP);
  /* 114977b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114977b4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114977b6 call 0x1148ca30 */
  push32(0x114977bbu); f_1148ca30();
  /* 114977bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114977be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114977c1 push eax */
  push32((uint32_t)(EAX));
  /* 114977c2 call 0x114977e0 */
  push32(0x114977c7u); f_114977e0();
  /* 114977c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114977ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114977cd push 0xb */
  push32((uint32_t)(0xbu));
  /* 114977cf call 0x1148cad0 */
  push32(0x114977d4u); f_1148cad0();
  /* 114977d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114977d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114977da mov esp, ebp */
  ESP = (EBP);
  /* 114977dc pop ebp */
  EBP = (pop32());
  /* 114977dd ret  */
  ESPCHK(0x114977b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100177e0 @ 0x114977e0 (762 bytes, 246 insns) */
void f_114977e0(void) {
  FTRACE(0x114977e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114977e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114977e1 mov ebp, esp */
  EBP = (ESP);
  /* 114977e3 push ecx */
  push32((uint32_t)(ECX));
  /* 114977e4 cmp dword ptr [0x114b50a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b50a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114977eb jne 0x114977f4 */
  if (!C.zf) goto L_114977f4;
  /* 114977ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114977ef jmp 0x11497ad6 */
  goto L_11497ad6;
L_114977f4:;
  /* 114977f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114977f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114977fa cmp ecx, dword ptr [0x114b5130] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b5130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497800 jne 0x11497814 */
  if (!C.zf) goto L_11497814;
  /* 11497802 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497805 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11497808 cmp eax, dword ptr [0x114b5140] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b5140))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149780e je 0x114979db */
  if (C.zf) goto L_114979db;
L_11497814:;
  /* 11497814 cmp dword ptr [0x114b6798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149781b je 0x11497995 */
  if (C.zf) goto L_11497995;
  /* 11497821 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11497823 mov cx, word ptr [0x114b6838] */
  CX = (r16((uint32_t)(0x114b6838)));
  /* 1149782a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149782c jne 0x11497889 */
  if (!C.zf) goto L_11497889;
  /* 1149782e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11497830 mov dx, word ptr [0x114b6846] */
  DX = (r16((uint32_t)(0x114b6846)));
  /* 11497837 push edx */
  push32((uint32_t)(EDX));
  /* 11497838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149783a mov ax, word ptr [0x114b6844] */
  AX = (r16((uint32_t)(0x114b6844)));
  /* 11497840 push eax */
  push32((uint32_t)(EAX));
  /* 11497841 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11497843 mov cx, word ptr [0x114b6842] */
  CX = (r16((uint32_t)(0x114b6842)));
  /* 1149784a push ecx */
  push32((uint32_t)(ECX));
  /* 1149784b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1149784d mov dx, word ptr [0x114b6840] */
  DX = (r16((uint32_t)(0x114b6840)));
  /* 11497854 push edx */
  push32((uint32_t)(EDX));
  /* 11497855 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497859 mov ax, word ptr [0x114b683c] */
  AX = (r16((uint32_t)(0x114b683c)));
  /* 1149785f push eax */
  push32((uint32_t)(EAX));
  /* 11497860 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11497862 mov cx, word ptr [0x114b683e] */
  CX = (r16((uint32_t)(0x114b683e)));
  /* 11497869 push ecx */
  push32((uint32_t)(ECX));
  /* 1149786a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1149786c mov dx, word ptr [0x114b683a] */
  DX = (r16((uint32_t)(0x114b683a)));
  /* 11497873 push edx */
  push32((uint32_t)(EDX));
  /* 11497874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497877 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1149787a push ecx */
  push32((uint32_t)(ECX));
  /* 1149787b push 1 */
  push32((uint32_t)(0x1u));
  /* 1149787d push 1 */
  push32((uint32_t)(0x1u));
  /* 1149787f call 0x11497ae0 */
  push32(0x11497884u); f_11497ae0();
  /* 11497884 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497887 jmp 0x114978da */
  goto L_114978da;
L_11497889:;
  /* 11497889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1149788b mov dx, word ptr [0x114b6846] */
  DX = (r16((uint32_t)(0x114b6846)));
  /* 11497892 push edx */
  push32((uint32_t)(EDX));
  /* 11497893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497895 mov ax, word ptr [0x114b6844] */
  AX = (r16((uint32_t)(0x114b6844)));
  /* 1149789b push eax */
  push32((uint32_t)(EAX));
  /* 1149789c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1149789e mov cx, word ptr [0x114b6842] */
  CX = (r16((uint32_t)(0x114b6842)));
  /* 114978a5 push ecx */
  push32((uint32_t)(ECX));
  /* 114978a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114978a8 mov dx, word ptr [0x114b6840] */
  DX = (r16((uint32_t)(0x114b6840)));
  /* 114978af push edx */
  push32((uint32_t)(EDX));
  /* 114978b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114978b2 mov ax, word ptr [0x114b683e] */
  AX = (r16((uint32_t)(0x114b683e)));
  /* 114978b8 push eax */
  push32((uint32_t)(EAX));
  /* 114978b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114978bb push 0 */
  push32((uint32_t)(0x0u));
  /* 114978bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114978bf mov cx, word ptr [0x114b683a] */
  CX = (r16((uint32_t)(0x114b683a)));
  /* 114978c6 push ecx */
  push32((uint32_t)(ECX));
  /* 114978c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114978ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114978cd push eax */
  push32((uint32_t)(EAX));
  /* 114978ce push 0 */
  push32((uint32_t)(0x0u));
  /* 114978d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114978d2 call 0x11497ae0 */
  push32(0x114978d7u); f_11497ae0();
  /* 114978d7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114978da:;
  /* 114978da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114978dc mov cx, word ptr [0x114b67e4] */
  CX = (r16((uint32_t)(0x114b67e4)));
  /* 114978e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114978e5 jne 0x11497942 */
  if (!C.zf) goto L_11497942;
  /* 114978e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114978e9 mov dx, word ptr [0x114b67f2] */
  DX = (r16((uint32_t)(0x114b67f2)));
  /* 114978f0 push edx */
  push32((uint32_t)(EDX));
  /* 114978f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114978f3 mov ax, word ptr [0x114b67f0] */
  AX = (r16((uint32_t)(0x114b67f0)));
  /* 114978f9 push eax */
  push32((uint32_t)(EAX));
  /* 114978fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114978fc mov cx, word ptr [0x114b67ee] */
  CX = (r16((uint32_t)(0x114b67ee)));
  /* 11497903 push ecx */
  push32((uint32_t)(ECX));
  /* 11497904 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11497906 mov dx, word ptr [0x114b67ec] */
  DX = (r16((uint32_t)(0x114b67ec)));
  /* 1149790d push edx */
  push32((uint32_t)(EDX));
  /* 1149790e push 0 */
  push32((uint32_t)(0x0u));
  /* 11497910 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497912 mov ax, word ptr [0x114b67e8] */
  AX = (r16((uint32_t)(0x114b67e8)));
  /* 11497918 push eax */
  push32((uint32_t)(EAX));
  /* 11497919 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1149791b mov cx, word ptr [0x114b67ea] */
  CX = (r16((uint32_t)(0x114b67ea)));
  /* 11497922 push ecx */
  push32((uint32_t)(ECX));
  /* 11497923 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11497925 mov dx, word ptr [0x114b67e6] */
  DX = (r16((uint32_t)(0x114b67e6)));
  /* 1149792c push edx */
  push32((uint32_t)(EDX));
  /* 1149792d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497930 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11497933 push ecx */
  push32((uint32_t)(ECX));
  /* 11497934 push 1 */
  push32((uint32_t)(0x1u));
  /* 11497936 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497938 call 0x11497ae0 */
  push32(0x1149793du); f_11497ae0();
  /* 1149793d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497940 jmp 0x11497993 */
  goto L_11497993;
L_11497942:;
  /* 11497942 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11497944 mov dx, word ptr [0x114b67f2] */
  DX = (r16((uint32_t)(0x114b67f2)));
  /* 1149794b push edx */
  push32((uint32_t)(EDX));
  /* 1149794c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149794e mov ax, word ptr [0x114b67f0] */
  AX = (r16((uint32_t)(0x114b67f0)));
  /* 11497954 push eax */
  push32((uint32_t)(EAX));
  /* 11497955 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11497957 mov cx, word ptr [0x114b67ee] */
  CX = (r16((uint32_t)(0x114b67ee)));
  /* 1149795e push ecx */
  push32((uint32_t)(ECX));
  /* 1149795f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11497961 mov dx, word ptr [0x114b67ec] */
  DX = (r16((uint32_t)(0x114b67ec)));
  /* 11497968 push edx */
  push32((uint32_t)(EDX));
  /* 11497969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149796b mov ax, word ptr [0x114b67ea] */
  AX = (r16((uint32_t)(0x114b67ea)));
  /* 11497971 push eax */
  push32((uint32_t)(EAX));
  /* 11497972 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497974 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497976 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11497978 mov cx, word ptr [0x114b67e6] */
  CX = (r16((uint32_t)(0x114b67e6)));
  /* 1149797f push ecx */
  push32((uint32_t)(ECX));
  /* 11497980 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497983 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11497986 push eax */
  push32((uint32_t)(EAX));
  /* 11497987 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149798b call 0x11497ae0 */
  push32(0x11497990u); f_11497ae0();
  /* 11497990 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11497993:;
  /* 11497993 jmp 0x114979db */
  goto L_114979db;
L_11497995:;
  /* 11497995 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497997 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149799b push 2 */
  push32((uint32_t)(0x2u));
  /* 1149799d push 0 */
  push32((uint32_t)(0x0u));
  /* 1149799f push 0 */
  push32((uint32_t)(0x0u));
  /* 114979a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 114979a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 114979a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114979a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114979ab push edx */
  push32((uint32_t)(EDX));
  /* 114979ac push 1 */
  push32((uint32_t)(0x1u));
  /* 114979ae push 1 */
  push32((uint32_t)(0x1u));
  /* 114979b0 call 0x11497ae0 */
  push32(0x114979b5u); f_11497ae0();
  /* 114979b5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114979b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114979ba push 0 */
  push32((uint32_t)(0x0u));
  /* 114979bc push 0 */
  push32((uint32_t)(0x0u));
  /* 114979be push 2 */
  push32((uint32_t)(0x2u));
  /* 114979c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114979c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114979c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 114979c6 push 0xa */
  push32((uint32_t)(0xau));
  /* 114979c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114979cb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114979ce push ecx */
  push32((uint32_t)(ECX));
  /* 114979cf push 1 */
  push32((uint32_t)(0x1u));
  /* 114979d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114979d3 call 0x11497ae0 */
  push32(0x114979d8u); f_11497ae0();
  /* 114979d8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114979db:;
  /* 114979db mov edx, dword ptr [0x114b5134] */
  EDX = (r32((uint32_t)(0x114b5134)));
  /* 114979e1 cmp edx, dword ptr [0x114b5144] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114b5144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114979e7 jge 0x11497a34 */
  if ((C.sf==C.of)) goto L_11497a34;
  /* 114979e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114979ec mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114979ef cmp ecx, dword ptr [0x114b5134] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b5134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114979f5 jl 0x11497a05 */
  if ((C.sf!=C.of)) goto L_11497a05;
  /* 114979f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114979fa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114979fd cmp eax, dword ptr [0x114b5144] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b5144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497a03 jle 0x11497a0c */
  if ((C.zf||C.sf!=C.of)) goto L_11497a0c;
L_11497a05:;
  /* 11497a05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497a07 jmp 0x11497ad6 */
  goto L_11497ad6;
L_11497a0c:;
  /* 11497a0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497a0f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11497a12 cmp edx, dword ptr [0x114b5134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114b5134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497a18 jle 0x11497a32 */
  if ((C.zf||C.sf!=C.of)) goto L_11497a32;
  /* 11497a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497a1d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11497a20 cmp ecx, dword ptr [0x114b5144] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b5144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497a26 jge 0x11497a32 */
  if ((C.sf==C.of)) goto L_11497a32;
  /* 11497a28 mov eax, 1 */
  EAX = (0x1u);
  /* 11497a2d jmp 0x11497ad6 */
  goto L_11497ad6;
L_11497a32:;
  /* 11497a32 jmp 0x11497a77 */
  goto L_11497a77;
L_11497a34:;
  /* 11497a34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497a37 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11497a3a cmp eax, dword ptr [0x114b5144] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b5144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497a40 jl 0x11497a50 */
  if ((C.sf!=C.of)) goto L_11497a50;
  /* 11497a42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497a45 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11497a48 cmp edx, dword ptr [0x114b5134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114b5134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497a4e jle 0x11497a57 */
  if ((C.zf||C.sf!=C.of)) goto L_11497a57;
L_11497a50:;
  /* 11497a50 mov eax, 1 */
  EAX = (0x1u);
  /* 11497a55 jmp 0x11497ad6 */
  goto L_11497ad6;
L_11497a57:;
  /* 11497a57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497a5a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11497a5d cmp ecx, dword ptr [0x114b5144] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b5144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497a63 jle 0x11497a77 */
  if ((C.zf||C.sf!=C.of)) goto L_11497a77;
  /* 11497a65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497a68 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11497a6b cmp eax, dword ptr [0x114b5134] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b5134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497a71 jge 0x11497a77 */
  if ((C.sf==C.of)) goto L_11497a77;
  /* 11497a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497a75 jmp 0x11497ad6 */
  goto L_11497ad6;
L_11497a77:;
  /* 11497a77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497a7a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11497a7d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497a80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497a83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11497a85 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497a87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497a8a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11497a8d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497a93 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497a95 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497a9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11497a9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497aa1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11497aa4 cmp edx, dword ptr [0x114b5134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114b5134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497aaa jne 0x11497ac2 */
  if (!C.zf) goto L_11497ac2;
  /* 11497aac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11497aaf cmp eax, dword ptr [0x114b5138] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b5138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497ab5 jl 0x11497abe */
  if ((C.sf!=C.of)) goto L_11497abe;
  /* 11497ab7 mov eax, 1 */
  EAX = (0x1u);
  /* 11497abc jmp 0x11497ad6 */
  goto L_11497ad6;
L_11497abe:;
  /* 11497abe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497ac0 jmp 0x11497ad6 */
  goto L_11497ad6;
L_11497ac2:;
  /* 11497ac2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11497ac5 cmp ecx, dword ptr [0x114b5148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b5148))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497acb jge 0x11497ad4 */
  if ((C.sf==C.of)) goto L_11497ad4;
  /* 11497acd mov eax, 1 */
  EAX = (0x1u);
  /* 11497ad2 jmp 0x11497ad6 */
  goto L_11497ad6;
L_11497ad4:;
  /* 11497ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11497ad6:;
  /* 11497ad6 mov esp, ebp */
  ESP = (EBP);
  /* 11497ad8 pop ebp */
  EBP = (pop32());
  /* 11497ad9 ret  */
  ESPCHK(0x114977e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ae0 @ 0x11497ae0 (504 bytes, 145 insns) */
void f_11497ae0(void) {
  FTRACE(0x11497ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11497ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11497ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11497ae3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497ae6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497aea jne 0x11497bbc */
  if (!C.zf) goto L_11497bbc;
  /* 11497af0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497af3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11497af6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11497af8 jne 0x11497b09 */
  if (!C.zf) goto L_11497b09;
  /* 11497afa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11497afd mov edx, dword ptr [ecx*4 + 0x114b514c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114b514c)));
  /* 11497b04 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11497b07 jmp 0x11497b16 */
  goto L_11497b16;
L_11497b09:;
  /* 11497b09 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11497b0c mov ecx, dword ptr [eax*4 + 0x114b5180] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114b5180)));
  /* 11497b13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11497b16:;
  /* 11497b16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11497b19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497b1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11497b1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497b22 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497b25 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497b2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11497b2e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497b30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497b33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497b36 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11497b39 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11497b3d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11497b3e mov ecx, 7 */
  ECX = (0x7u);
  /* 11497b43 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11497b45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11497b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11497b4b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497b4e jge 0x11497b69 */
  if ((C.sf==C.of)) goto L_11497b69;
  /* 11497b50 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11497b53 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497b56 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11497b59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497b5c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497b5f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497b62 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497b64 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11497b67 jmp 0x11497b7d */
  goto L_11497b7d;
L_11497b69:;
  /* 11497b69 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11497b6c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497b6f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11497b72 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497b75 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497b78 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497b7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11497b7d:;
  /* 11497b7d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497b81 jne 0x11497bba */
  if (!C.zf) goto L_11497bba;
  /* 11497b83 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497b86 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11497b89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11497b8b jne 0x11497b9c */
  if (!C.zf) goto L_11497b9c;
  /* 11497b8d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11497b90 mov eax, dword ptr [edx*4 + 0x114b5150] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114b5150)));
  /* 11497b97 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11497b9a jmp 0x11497ba9 */
  goto L_11497ba9;
L_11497b9c:;
  /* 11497b9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11497b9f mov edx, dword ptr [ecx*4 + 0x114b5184] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114b5184)));
  /* 11497ba6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11497ba9:;
  /* 11497ba9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11497bac cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497baf jle 0x11497bba */
  if ((C.zf||C.sf!=C.of)) goto L_11497bba;
  /* 11497bb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11497bb4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497bb7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11497bba:;
  /* 11497bba jmp 0x11497bf1 */
  goto L_11497bf1;
L_11497bbc:;
  /* 11497bbc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497bbf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11497bc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11497bc4 jne 0x11497bd5 */
  if (!C.zf) goto L_11497bd5;
  /* 11497bc6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11497bc9 mov ecx, dword ptr [eax*4 + 0x114b514c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114b514c)));
  /* 11497bd0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11497bd3 jmp 0x11497be2 */
  goto L_11497be2;
L_11497bd5:;
  /* 11497bd5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11497bd8 mov eax, dword ptr [edx*4 + 0x114b5180] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114b5180)));
  /* 11497bdf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11497be2:;
  /* 11497be2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11497be5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11497be8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11497beb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497bee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11497bf1:;
  /* 11497bf1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497bf5 jne 0x11497c31 */
  if (!C.zf) goto L_11497c31;
  /* 11497bf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11497bfa mov dword ptr [0x114b5134], eax */
  w32((uint32_t)(0x114b5134), (EAX));
  /* 11497bff mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11497c02 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497c05 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11497c08 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497c0a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497c0d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11497c10 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497c12 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497c18 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11497c1b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497c1d mov dword ptr [0x114b5138], ecx */
  w32((uint32_t)(0x114b5138), (ECX));
  /* 11497c23 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497c26 mov dword ptr [0x114b5130], edx */
  w32((uint32_t)(0x114b5130), (EDX));
  /* 11497c2c jmp 0x11497cd4 */
  goto L_11497cd4;
L_11497c31:;
  /* 11497c31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11497c34 mov dword ptr [0x114b5144], eax */
  w32((uint32_t)(0x114b5144), (EAX));
  /* 11497c39 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11497c3c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497c3f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11497c42 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497c44 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497c47 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11497c4a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497c4c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497c52 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11497c55 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497c57 mov dword ptr [0x114b5148], ecx */
  w32((uint32_t)(0x114b5148), (ECX));
  /* 11497c5d mov edx, dword ptr [0x114b50a4] */
  EDX = (r32((uint32_t)(0x114b50a4)));
  /* 11497c63 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11497c69 mov eax, dword ptr [0x114b5148] */
  EAX = (r32((uint32_t)(0x114b5148)));
  /* 11497c6e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497c70 mov dword ptr [0x114b5148], eax */
  w32((uint32_t)(0x114b5148), (EAX));
  /* 11497c75 cmp dword ptr [0x114b5148], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b5148))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497c7c jge 0x11497ca1 */
  if ((C.sf==C.of)) goto L_11497ca1;
  /* 11497c7e mov ecx, dword ptr [0x114b5148] */
  ECX = (r32((uint32_t)(0x114b5148)));
  /* 11497c84 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497c8a mov dword ptr [0x114b5148], ecx */
  w32((uint32_t)(0x114b5148), (ECX));
  /* 11497c90 mov edx, dword ptr [0x114b5144] */
  EDX = (r32((uint32_t)(0x114b5144)));
  /* 11497c96 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497c99 mov dword ptr [0x114b5144], edx */
  w32((uint32_t)(0x114b5144), (EDX));
  /* 11497c9f jmp 0x11497ccb */
  goto L_11497ccb;
L_11497ca1:;
  /* 11497ca1 cmp dword ptr [0x114b5148], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x114b5148))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497cab jl 0x11497ccb */
  if ((C.sf!=C.of)) goto L_11497ccb;
  /* 11497cad mov eax, dword ptr [0x114b5148] */
  EAX = (r32((uint32_t)(0x114b5148)));
  /* 11497cb2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11497cb7 mov dword ptr [0x114b5148], eax */
  w32((uint32_t)(0x114b5148), (EAX));
  /* 11497cbc mov ecx, dword ptr [0x114b5144] */
  ECX = (r32((uint32_t)(0x114b5144)));
  /* 11497cc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497cc5 mov dword ptr [0x114b5144], ecx */
  w32((uint32_t)(0x114b5144), (ECX));
L_11497ccb:;
  /* 11497ccb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497cce mov dword ptr [0x114b5140], edx */
  w32((uint32_t)(0x114b5140), (EDX));
L_11497cd4:;
  /* 11497cd4 mov esp, ebp */
  ESP = (EBP);
  /* 11497cd6 pop ebp */
  EBP = (pop32());
  /* 11497cd7 ret  */
  ESPCHK(0x11497ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ce0 @ 0x11497ce0 (382 bytes, 135 insns) */
void f_11497ce0(void) {
  FTRACE(0x11497ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11497ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11497ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11497ce3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11497ce5 push 0x114b1b70 */
  push32((uint32_t)(0x114b1b70u));
  /* 11497cea push 0x11492858 */
  push32((uint32_t)(0x11492858u));
  /* 11497cef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11497cf5 push eax */
  push32((uint32_t)(EAX));
  /* 11497cf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11497cfd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497d00 push ebx */
  push32((uint32_t)(EBX));
  /* 11497d01 push esi */
  push32((uint32_t)(ESI));
  /* 11497d02 push edi */
  push32((uint32_t)(EDI));
  /* 11497d03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11497d06 cmp dword ptr [0x114b6854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497d0d jne 0x11497d52 */
  if (!C.zf) goto L_11497d52;
  /* 11497d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11497d11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497d13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11497d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497d17 call dword ptr [0x114b92c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92c8))), 0x11497d1du);
  /* 11497d1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11497d1f je 0x11497d2d */
  if (C.zf) goto L_11497d2d;
  /* 11497d21 mov dword ptr [0x114b6854], 1 */
  w32((uint32_t)(0x114b6854), (0x1u));
  /* 11497d2b jmp 0x11497d52 */
  goto L_11497d52;
L_11497d2d:;
  /* 11497d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11497d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11497d31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11497d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497d35 call dword ptr [0x114b92e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92e4))), 0x11497d3bu);
  /* 11497d3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11497d3d je 0x11497d4b */
  if (C.zf) goto L_11497d4b;
  /* 11497d3f mov dword ptr [0x114b6854], 2 */
  w32((uint32_t)(0x114b6854), (0x2u));
  /* 11497d49 jmp 0x11497d52 */
  goto L_11497d52;
L_11497d4b:;
  /* 11497d4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497d4d jmp 0x11497e61 */
  goto L_11497e61;
L_11497d52:;
  /* 11497d52 cmp dword ptr [0x114b6854], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b6854))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497d59 jne 0x11497d76 */
  if (!C.zf) goto L_11497d76;
  /* 11497d5b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11497d5e push eax */
  push32((uint32_t)(EAX));
  /* 11497d5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497d62 push ecx */
  push32((uint32_t)(ECX));
  /* 11497d63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11497d66 push edx */
  push32((uint32_t)(EDX));
  /* 11497d67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497d6a push eax */
  push32((uint32_t)(EAX));
  /* 11497d6b call dword ptr [0x114b92c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92c8))), 0x11497d71u);
  /* 11497d71 jmp 0x11497e61 */
  goto L_11497e61;
L_11497d76:;
  /* 11497d76 cmp dword ptr [0x114b6854], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114b6854))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497d7d jne 0x11497e5f */
  if (!C.zf) goto L_11497e5f;
  /* 11497d83 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497d87 jne 0x11497d92 */
  if (!C.zf) goto L_11497d92;
  /* 11497d89 mov ecx, dword ptr [0x114b6714] */
  ECX = (r32((uint32_t)(0x114b6714)));
  /* 11497d8f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11497d92:;
  /* 11497d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497d96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11497d99 push edx */
  push32((uint32_t)(EDX));
  /* 11497d9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497d9d push eax */
  push32((uint32_t)(EAX));
  /* 11497d9e call dword ptr [0x114b92e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92e4))), 0x11497da4u);
  /* 11497da4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11497da7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497dab jne 0x11497db4 */
  if (!C.zf) goto L_11497db4;
  /* 11497dad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497daf jmp 0x11497e61 */
  goto L_11497e61;
L_11497db4:;
  /* 11497db4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11497dbb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11497dbe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497dc1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11497dc3 call 0x1148a260 */
  push32(0x11497dc8u); f_1148a260();
  /* 11497dc8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11497dcb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11497dce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11497dd1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11497dd4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11497ddb jmp 0x11497df4 */
  goto L_11497df4;
  /* 11497ddd mov eax, 1 */
  EAX = (0x1u);
  /* 11497de2 ret  */
  ESPCHK(0x11497ce0u, _esp0);
  ESP += 4; return;
  /* 11497de3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11497de6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11497ded mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11497df4:;
  /* 11497df4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497df8 jne 0x11497dfe */
  if (!C.zf) goto L_11497dfe;
  /* 11497dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497dfc jmp 0x11497e61 */
  goto L_11497e61;
L_11497dfe:;
  /* 11497dfe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11497e01 push edx */
  push32((uint32_t)(EDX));
  /* 11497e02 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11497e05 push eax */
  push32((uint32_t)(EAX));
  /* 11497e06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11497e09 push ecx */
  push32((uint32_t)(ECX));
  /* 11497e0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497e0d push edx */
  push32((uint32_t)(EDX));
  /* 11497e0e call dword ptr [0x114b92e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92e4))), 0x11497e14u);
  /* 11497e14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11497e16 jne 0x11497e1c */
  if (!C.zf) goto L_11497e1c;
  /* 11497e18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497e1a jmp 0x11497e61 */
  goto L_11497e61;
L_11497e1c:;
  /* 11497e1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497e20 jne 0x11497e3d */
  if (!C.zf) goto L_11497e3d;
  /* 11497e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497e26 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11497e28 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11497e2b push eax */
  push32((uint32_t)(EAX));
  /* 11497e2c push 1 */
  push32((uint32_t)(0x1u));
  /* 11497e2e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11497e31 push ecx */
  push32((uint32_t)(ECX));
  /* 11497e32 call dword ptr [0x114b930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b930c))), 0x11497e38u);
  /* 11497e38 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11497e3b jmp 0x11497e5a */
  goto L_11497e5a;
L_11497e3d:;
  /* 11497e3d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11497e40 push edx */
  push32((uint32_t)(EDX));
  /* 11497e41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497e44 push eax */
  push32((uint32_t)(EAX));
  /* 11497e45 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11497e47 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11497e4a push ecx */
  push32((uint32_t)(ECX));
  /* 11497e4b push 1 */
  push32((uint32_t)(0x1u));
  /* 11497e4d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11497e50 push edx */
  push32((uint32_t)(EDX));
  /* 11497e51 call dword ptr [0x114b930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b930c))), 0x11497e57u);
  /* 11497e57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11497e5a:;
  /* 11497e5a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11497e5d jmp 0x11497e61 */
  goto L_11497e61;
L_11497e5f:;
  /* 11497e5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11497e61:;
  /* 11497e61 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11497e64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11497e67 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11497e6e pop edi */
  EDI = (pop32());
  /* 11497e6f pop esi */
  ESI = (pop32());
  /* 11497e70 pop ebx */
  EBX = (pop32());
  /* 11497e71 mov esp, ebp */
  ESP = (EBP);
  /* 11497e73 pop ebp */
  EBP = (pop32());
  /* 11497e74 ret  */
  ESPCHK(0x11497ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e80 @ 0x11497e80 (398 bytes, 140 insns) */
void f_11497e80(void) {
  FTRACE(0x11497e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11497e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11497e81 mov ebp, esp */
  EBP = (ESP);
  /* 11497e83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11497e85 push 0x114b1b80 */
  push32((uint32_t)(0x114b1b80u));
  /* 11497e8a push 0x11492858 */
  push32((uint32_t)(0x11492858u));
  /* 11497e8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11497e95 push eax */
  push32((uint32_t)(EAX));
  /* 11497e96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11497e9d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11497ea0 push ebx */
  push32((uint32_t)(EBX));
  /* 11497ea1 push esi */
  push32((uint32_t)(ESI));
  /* 11497ea2 push edi */
  push32((uint32_t)(EDI));
  /* 11497ea3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11497ea6 cmp dword ptr [0x114b6858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497ead jne 0x11497ef2 */
  if (!C.zf) goto L_11497ef2;
  /* 11497eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 11497eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11497eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497eb7 call dword ptr [0x114b92c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92c8))), 0x11497ebdu);
  /* 11497ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11497ebf je 0x11497ecd */
  if (C.zf) goto L_11497ecd;
  /* 11497ec1 mov dword ptr [0x114b6858], 1 */
  w32((uint32_t)(0x114b6858), (0x1u));
  /* 11497ecb jmp 0x11497ef2 */
  goto L_11497ef2;
L_11497ecd:;
  /* 11497ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 11497ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 11497ed1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11497ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497ed5 call dword ptr [0x114b92e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92e4))), 0x11497edbu);
  /* 11497edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11497edd je 0x11497eeb */
  if (C.zf) goto L_11497eeb;
  /* 11497edf mov dword ptr [0x114b6858], 2 */
  w32((uint32_t)(0x114b6858), (0x2u));
  /* 11497ee9 jmp 0x11497ef2 */
  goto L_11497ef2;
L_11497eeb:;
  /* 11497eeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497eed jmp 0x11498011 */
  goto L_11498011;
L_11497ef2:;
  /* 11497ef2 cmp dword ptr [0x114b6858], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114b6858))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497ef9 jne 0x11497f16 */
  if (!C.zf) goto L_11497f16;
  /* 11497efb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11497efe push eax */
  push32((uint32_t)(EAX));
  /* 11497eff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497f02 push ecx */
  push32((uint32_t)(ECX));
  /* 11497f03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11497f06 push edx */
  push32((uint32_t)(EDX));
  /* 11497f07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497f0a push eax */
  push32((uint32_t)(EAX));
  /* 11497f0b call dword ptr [0x114b92e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92e4))), 0x11497f11u);
  /* 11497f11 jmp 0x11498011 */
  goto L_11498011;
L_11497f16:;
  /* 11497f16 cmp dword ptr [0x114b6858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b6858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497f1d jne 0x1149800f */
  if (!C.zf) goto L_1149800f;
  /* 11497f23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497f27 jne 0x11497f32 */
  if (!C.zf) goto L_11497f32;
  /* 11497f29 mov ecx, dword ptr [0x114b6714] */
  ECX = (r32((uint32_t)(0x114b6714)));
  /* 11497f2f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11497f32:;
  /* 11497f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497f36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11497f39 push edx */
  push32((uint32_t)(EDX));
  /* 11497f3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497f3d push eax */
  push32((uint32_t)(EAX));
  /* 11497f3e call dword ptr [0x114b92c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92c8))), 0x11497f44u);
  /* 11497f44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11497f47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497f4b jne 0x11497f54 */
  if (!C.zf) goto L_11497f54;
  /* 11497f4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497f4f jmp 0x11498011 */
  goto L_11498011;
L_11497f54:;
  /* 11497f54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11497f5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11497f5e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11497f60 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11497f63 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11497f65 call 0x1148a260 */
  push32(0x11497f6au); f_1148a260();
  /* 11497f6a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11497f6d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11497f70 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11497f73 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11497f76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11497f7d jmp 0x11497f96 */
  goto L_11497f96;
  /* 11497f7f mov eax, 1 */
  EAX = (0x1u);
  /* 11497f84 ret  */
  ESPCHK(0x11497e80u, _esp0);
  ESP += 4; return;
  /* 11497f85 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11497f88 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11497f8f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11497f96:;
  /* 11497f96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497f9a jne 0x11497fa0 */
  if (!C.zf) goto L_11497fa0;
  /* 11497f9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497f9e jmp 0x11498011 */
  goto L_11498011;
L_11497fa0:;
  /* 11497fa0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11497fa3 push edx */
  push32((uint32_t)(EDX));
  /* 11497fa4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11497fa7 push eax */
  push32((uint32_t)(EAX));
  /* 11497fa8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11497fab push ecx */
  push32((uint32_t)(ECX));
  /* 11497fac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11497faf push edx */
  push32((uint32_t)(EDX));
  /* 11497fb0 call dword ptr [0x114b92c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92c8))), 0x11497fb6u);
  /* 11497fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11497fb8 jne 0x11497fbe */
  if (!C.zf) goto L_11497fbe;
  /* 11497fba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11497fbc jmp 0x11498011 */
  goto L_11498011;
L_11497fbe:;
  /* 11497fbe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11497fc2 jne 0x11497fe6 */
  if (!C.zf) goto L_11497fe6;
  /* 11497fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497fca push 0 */
  push32((uint32_t)(0x0u));
  /* 11497fcc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11497fce mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11497fd1 push eax */
  push32((uint32_t)(EAX));
  /* 11497fd2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11497fd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11497fda push ecx */
  push32((uint32_t)(ECX));
  /* 11497fdb call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x11497fe1u);
  /* 11497fe1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11497fe4 jmp 0x1149800a */
  goto L_1149800a;
L_11497fe6:;
  /* 11497fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497fe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11497fea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11497fed push edx */
  push32((uint32_t)(EDX));
  /* 11497fee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11497ff1 push eax */
  push32((uint32_t)(EAX));
  /* 11497ff2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11497ff4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11497ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 11497ff8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11497ffd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11498000 push edx */
  push32((uint32_t)(EDX));
  /* 11498001 call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x11498007u);
  /* 11498007 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1149800a:;
  /* 1149800a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1149800d jmp 0x11498011 */
  goto L_11498011;
L_1149800f:;
  /* 1149800f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11498011:;
  /* 11498011 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11498014 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11498017 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1149801e pop edi */
  EDI = (pop32());
  /* 1149801f pop esi */
  ESI = (pop32());
  /* 11498020 pop ebx */
  EBX = (pop32());
  /* 11498021 mov esp, ebp */
  ESP = (EBP);
  /* 11498023 pop ebp */
  EBP = (pop32());
  /* 11498024 ret  */
  ESPCHK(0x11497e80u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11498030 (52 bytes, 19 insns) */
void f_11498030(void) {
  FTRACE(0x11498030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11498030 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11498034 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11498038 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1149803a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1149803e jne 0x11498049 */
  if (!C.zf) goto L_11498049;
  /* 11498040 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11498044 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11498046 ret 0x10 */
  ESPCHK(0x11498030u, _esp0);
  ESP += 20; return;
L_11498049:;
  /* 11498049 push ebx */
  push32((uint32_t)(EBX));
  /* 1149804a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1149804c mov ebx, eax */
  EBX = (EAX);
  /* 1149804e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11498052 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11498056 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498058 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1149805c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1149805e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498060 pop ebx */
  EBX = (pop32());
  /* 11498061 ret 0x10 */
  ESPCHK(0x11498030u, _esp0);
  ESP += 20; return;
}

/* FUN_10018070 @ 0x11498070 (46 bytes, 18 insns) */
void f_11498070(void) {
  FTRACE(0x11498070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11498070 push ebp */
  push32((uint32_t)(EBP));
  /* 11498071 mov ebp, esp */
  EBP = (ESP);
  /* 11498073 push ecx */
  push32((uint32_t)(ECX));
  /* 11498074 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11498076 call 0x1148ca30 */
  push32(0x1149807bu); f_1148ca30();
  /* 1149807b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149807e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498081 push eax */
  push32((uint32_t)(EAX));
  /* 11498082 call 0x114980a0 */
  push32(0x11498087u); f_114980a0();
  /* 11498087 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149808a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1149808d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1149808f call 0x1148cad0 */
  push32(0x11498094u); f_1148cad0();
  /* 11498094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498097 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149809a mov esp, ebp */
  ESP = (EBP);
  /* 1149809c pop ebp */
  EBP = (pop32());
  /* 1149809d ret  */
  ESPCHK(0x11498070u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x114980a0 (198 bytes, 69 insns) */
void f_114980a0(void) {
  FTRACE(0x114980a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114980a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114980a1 mov ebp, esp */
  EBP = (ESP);
  /* 114980a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114980a6 mov eax, dword ptr [0x114b6514] */
  EAX = (r32((uint32_t)(0x114b6514)));
  /* 114980ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114980ae cmp dword ptr [0x114b8000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b8000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114980b5 jne 0x114980be */
  if (!C.zf) goto L_114980be;
  /* 114980b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114980b9 jmp 0x11498162 */
  goto L_11498162;
L_114980be:;
  /* 114980be cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114980c2 jne 0x114980e6 */
  if (!C.zf) goto L_114980e6;
  /* 114980c4 cmp dword ptr [0x114b651c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b651c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114980cb je 0x114980e6 */
  if (C.zf) goto L_114980e6;
  /* 114980cd call 0x114981c0 */
  push32(0x114980d2u); f_114981c0();
  /* 114980d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114980d4 je 0x114980dd */
  if (C.zf) goto L_114980dd;
  /* 114980d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114980d8 jmp 0x11498162 */
  goto L_11498162;
L_114980dd:;
  /* 114980dd mov ecx, dword ptr [0x114b6514] */
  ECX = (r32((uint32_t)(0x114b6514)));
  /* 114980e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114980e6:;
  /* 114980e6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114980ea je 0x11498160 */
  if (C.zf) goto L_11498160;
  /* 114980ec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114980f0 je 0x11498160 */
  if (C.zf) goto L_11498160;
  /* 114980f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114980f5 push edx */
  push32((uint32_t)(EDX));
  /* 114980f6 call 0x11489ef0 */
  push32(0x114980fbu); f_11489ef0();
  /* 114980fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114980fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11498101:;
  /* 11498101 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498104 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498107 je 0x11498160 */
  if (C.zf) goto L_11498160;
  /* 11498109 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149810c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1149810e push edx */
  push32((uint32_t)(EDX));
  /* 1149810f call 0x11489ef0 */
  push32(0x11498114u); f_11489ef0();
  /* 11498114 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498117 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149811a jbe 0x11498155 */
  if ((C.cf||C.zf)) goto L_11498155;
  /* 1149811c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149811f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11498121 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498124 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11498128 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149812b jne 0x11498155 */
  if (!C.zf) goto L_11498155;
  /* 1149812d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498130 push ecx */
  push32((uint32_t)(ECX));
  /* 11498131 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498134 push edx */
  push32((uint32_t)(EDX));
  /* 11498135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498138 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1149813a push ecx */
  push32((uint32_t)(ECX));
  /* 1149813b call 0x11498170 */
  push32(0x11498140u); f_11498170();
  /* 11498140 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11498145 jne 0x11498155 */
  if (!C.zf) goto L_11498155;
  /* 11498147 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149814a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1149814c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149814f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11498153 jmp 0x11498162 */
  goto L_11498162;
L_11498155:;
  /* 11498155 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498158 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149815b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1149815e jmp 0x11498101 */
  goto L_11498101;
L_11498160:;
  /* 11498160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11498162:;
  /* 11498162 mov esp, ebp */
  ESP = (EBP);
  /* 11498164 pop ebp */
  EBP = (pop32());
  /* 11498165 ret  */
  ESPCHK(0x114980a0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11498170 (79 bytes, 32 insns) */
void f_11498170(void) {
  FTRACE(0x11498170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11498170 push ebp */
  push32((uint32_t)(EBP));
  /* 11498171 mov ebp, esp */
  EBP = (ESP);
  /* 11498173 push ecx */
  push32((uint32_t)(ECX));
  /* 11498174 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498178 jne 0x1149817e */
  if (!C.zf) goto L_1149817e;
  /* 1149817a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149817c jmp 0x114981bb */
  goto L_114981bb;
L_1149817e:;
  /* 1149817e mov eax, dword ptr [0x114b6888] */
  EAX = (r32((uint32_t)(0x114b6888)));
  /* 11498183 push eax */
  push32((uint32_t)(EAX));
  /* 11498184 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11498187 push ecx */
  push32((uint32_t)(ECX));
  /* 11498188 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149818b push edx */
  push32((uint32_t)(EDX));
  /* 1149818c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149818f push eax */
  push32((uint32_t)(EAX));
  /* 11498190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498193 push ecx */
  push32((uint32_t)(ECX));
  /* 11498194 push 1 */
  push32((uint32_t)(0x1u));
  /* 11498196 mov edx, dword ptr [0x114b6b24] */
  EDX = (r32((uint32_t)(0x114b6b24)));
  /* 1149819c push edx */
  push32((uint32_t)(EDX));
  /* 1149819d call 0x11498270 */
  push32(0x114981a2u); f_11498270();
  /* 114981a2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114981a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114981a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114981ac jne 0x114981b5 */
  if (!C.zf) goto L_114981b5;
  /* 114981ae mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 114981b3 jmp 0x114981bb */
  goto L_114981bb;
L_114981b5:;
  /* 114981b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114981b8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_114981bb:;
  /* 114981bb mov esp, ebp */
  ESP = (EBP);
  /* 114981bd pop ebp */
  EBP = (pop32());
  /* 114981be ret  */
  ESPCHK(0x11498170u, _esp0);
  ESP += 4; return;
}

/* FUN_100181c0 @ 0x114981c0 (174 bytes, 66 insns) */
void f_114981c0(void) {
  FTRACE(0x114981c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114981c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114981c1 mov ebp, esp */
  EBP = (ESP);
  /* 114981c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114981c6 mov eax, dword ptr [0x114b651c] */
  EAX = (r32((uint32_t)(0x114b651c)));
  /* 114981cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114981ce:;
  /* 114981ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114981d1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114981d4 je 0x11498268 */
  if (C.zf) goto L_11498268;
  /* 114981da push 0 */
  push32((uint32_t)(0x0u));
  /* 114981dc push 0 */
  push32((uint32_t)(0x0u));
  /* 114981de push 0 */
  push32((uint32_t)(0x0u));
  /* 114981e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114981e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114981e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114981e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114981e9 push eax */
  push32((uint32_t)(EAX));
  /* 114981ea push 0 */
  push32((uint32_t)(0x0u));
  /* 114981ec push 1 */
  push32((uint32_t)(0x1u));
  /* 114981ee call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x114981f4u);
  /* 114981f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114981f7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114981fb jne 0x11498202 */
  if (!C.zf) goto L_11498202;
  /* 114981fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11498200 jmp 0x1149826a */
  goto L_1149826a;
L_11498202:;
  /* 11498202 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11498204 push 0x114b1b8c */
  push32((uint32_t)(0x114b1b8cu));
  /* 11498209 push 2 */
  push32((uint32_t)(0x2u));
  /* 1149820b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149820e push ecx */
  push32((uint32_t)(ECX));
  /* 1149820f call 0x114870c0 */
  push32(0x11498214u); f_114870c0();
  /* 11498214 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498217 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1149821a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149821e jne 0x11498225 */
  if (!C.zf) goto L_11498225;
  /* 11498220 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11498223 jmp 0x1149826a */
  goto L_1149826a;
L_11498225:;
  /* 11498225 push 0 */
  push32((uint32_t)(0x0u));
  /* 11498227 push 0 */
  push32((uint32_t)(0x0u));
  /* 11498229 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149822c push edx */
  push32((uint32_t)(EDX));
  /* 1149822d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498230 push eax */
  push32((uint32_t)(EAX));
  /* 11498231 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11498233 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498236 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11498238 push edx */
  push32((uint32_t)(EDX));
  /* 11498239 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149823b push 1 */
  push32((uint32_t)(0x1u));
  /* 1149823d call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x11498243u);
  /* 11498243 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11498245 jne 0x1149824c */
  if (!C.zf) goto L_1149824c;
  /* 11498247 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1149824a jmp 0x1149826a */
  goto L_1149826a;
L_1149824c:;
  /* 1149824c push 0 */
  push32((uint32_t)(0x0u));
  /* 1149824e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498251 push eax */
  push32((uint32_t)(EAX));
  /* 11498252 call 0x114986c0 */
  push32(0x11498257u); f_114986c0();
  /* 11498257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149825a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149825d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498260 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11498263 jmp 0x114981ce */
  goto L_114981ce;
L_11498268:;
  /* 11498268 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1149826a:;
  /* 1149826a mov esp, ebp */
  ESP = (EBP);
  /* 1149826c pop ebp */
  EBP = (pop32());
  /* 1149826d ret  */
  ESPCHK(0x114981c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018270 @ 0x11498270 (970 bytes, 340 insns) */
void f_11498270(void) {
  FTRACE(0x11498270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11498270 push ebp */
  push32((uint32_t)(EBP));
  /* 11498271 mov ebp, esp */
  EBP = (ESP);
  /* 11498273 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11498275 push 0x114b1be0 */
  push32((uint32_t)(0x114b1be0u));
  /* 1149827a push 0x11492858 */
  push32((uint32_t)(0x11492858u));
  /* 1149827f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11498285 push eax */
  push32((uint32_t)(EAX));
  /* 11498286 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1149828d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498290 push ebx */
  push32((uint32_t)(EBX));
  /* 11498291 push esi */
  push32((uint32_t)(ESI));
  /* 11498292 push edi */
  push32((uint32_t)(EDI));
  /* 11498293 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11498296 cmp dword ptr [0x114b685c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b685c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149829d jne 0x114982f6 */
  if (!C.zf) goto L_114982f6;
  /* 1149829f push 1 */
  push32((uint32_t)(0x1u));
  /* 114982a1 push 0x114b1234 */
  push32((uint32_t)(0x114b1234u));
  /* 114982a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 114982a8 push 0x114b1234 */
  push32((uint32_t)(0x114b1234u));
  /* 114982ad push 0 */
  push32((uint32_t)(0x0u));
  /* 114982af push 0 */
  push32((uint32_t)(0x0u));
  /* 114982b1 call dword ptr [0x114b92c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92c0))), 0x114982b7u);
  /* 114982b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114982b9 je 0x114982c7 */
  if (C.zf) goto L_114982c7;
  /* 114982bb mov dword ptr [0x114b685c], 1 */
  w32((uint32_t)(0x114b685c), (0x1u));
  /* 114982c5 jmp 0x114982f6 */
  goto L_114982f6;
L_114982c7:;
  /* 114982c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114982c9 push 0x114b1230 */
  push32((uint32_t)(0x114b1230u));
  /* 114982ce push 1 */
  push32((uint32_t)(0x1u));
  /* 114982d0 push 0x114b1230 */
  push32((uint32_t)(0x114b1230u));
  /* 114982d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114982d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114982d9 call dword ptr [0x114b92c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92c4))), 0x114982dfu);
  /* 114982df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114982e1 je 0x114982ef */
  if (C.zf) goto L_114982ef;
  /* 114982e3 mov dword ptr [0x114b685c], 2 */
  w32((uint32_t)(0x114b685c), (0x2u));
  /* 114982ed jmp 0x114982f6 */
  goto L_114982f6;
L_114982ef:;
  /* 114982ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114982f1 jmp 0x11498654 */
  goto L_11498654;
L_114982f6:;
  /* 114982f6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114982fa jle 0x1149830f */
  if ((C.zf||C.sf!=C.of)) goto L_1149830f;
  /* 114982fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114982ff push eax */
  push32((uint32_t)(EAX));
  /* 11498300 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11498303 push ecx */
  push32((uint32_t)(ECX));
  /* 11498304 call 0x11498670 */
  push32(0x11498309u); f_11498670();
  /* 11498309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149830c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1149830f:;
  /* 1149830f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498313 jle 0x11498328 */
  if ((C.zf||C.sf!=C.of)) goto L_11498328;
  /* 11498315 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11498318 push edx */
  push32((uint32_t)(EDX));
  /* 11498319 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1149831c push eax */
  push32((uint32_t)(EAX));
  /* 1149831d call 0x11498670 */
  push32(0x11498322u); f_11498670();
  /* 11498322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498325 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11498328:;
  /* 11498328 cmp dword ptr [0x114b685c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114b685c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149832f jne 0x11498354 */
  if (!C.zf) goto L_11498354;
  /* 11498331 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11498334 push ecx */
  push32((uint32_t)(ECX));
  /* 11498335 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11498338 push edx */
  push32((uint32_t)(EDX));
  /* 11498339 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1149833c push eax */
  push32((uint32_t)(EAX));
  /* 1149833d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11498340 push ecx */
  push32((uint32_t)(ECX));
  /* 11498341 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11498344 push edx */
  push32((uint32_t)(EDX));
  /* 11498345 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498348 push eax */
  push32((uint32_t)(EAX));
  /* 11498349 call dword ptr [0x114b92c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92c4))), 0x1149834fu);
  /* 1149834f jmp 0x11498654 */
  goto L_11498654;
L_11498354:;
  /* 11498354 cmp dword ptr [0x114b685c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b685c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149835b jne 0x11498652 */
  if (!C.zf) goto L_11498652;
  /* 11498361 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498365 jne 0x11498370 */
  if (!C.zf) goto L_11498370;
  /* 11498367 mov ecx, dword ptr [0x114b6714] */
  ECX = (r32((uint32_t)(0x114b6714)));
  /* 1149836d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11498370:;
  /* 11498370 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498374 je 0x11498380 */
  if (C.zf) goto L_11498380;
  /* 11498376 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149837a jne 0x114984fc */
  if (!C.zf) goto L_114984fc;
L_11498380:;
  /* 11498380 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11498383 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498386 jne 0x11498392 */
  if (!C.zf) goto L_11498392;
  /* 11498388 mov eax, 2 */
  EAX = (0x2u);
  /* 1149838d jmp 0x11498654 */
  goto L_11498654;
L_11498392:;
  /* 11498392 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498396 jle 0x114983a2 */
  if ((C.zf||C.sf!=C.of)) goto L_114983a2;
  /* 11498398 mov eax, 1 */
  EAX = (0x1u);
  /* 1149839d jmp 0x11498654 */
  goto L_11498654;
L_114983a2:;
  /* 114983a2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114983a6 jle 0x114983b2 */
  if ((C.zf||C.sf!=C.of)) goto L_114983b2;
  /* 114983a8 mov eax, 3 */
  EAX = (0x3u);
  /* 114983ad jmp 0x11498654 */
  goto L_11498654;
L_114983b2:;
  /* 114983b2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 114983b5 push eax */
  push32((uint32_t)(EAX));
  /* 114983b6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114983b9 push ecx */
  push32((uint32_t)(ECX));
  /* 114983ba call dword ptr [0x114b9318] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9318))), 0x114983c0u);
  /* 114983c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114983c2 jne 0x114983cb */
  if (!C.zf) goto L_114983cb;
  /* 114983c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114983c6 jmp 0x11498654 */
  goto L_11498654;
L_114983cb:;
  /* 114983cb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114983cf jne 0x114983d7 */
  if (!C.zf) goto L_114983d7;
  /* 114983d1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114983d5 je 0x11498404 */
  if (C.zf) goto L_11498404;
L_114983d7:;
  /* 114983d7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114983db jne 0x114983e3 */
  if (!C.zf) goto L_114983e3;
  /* 114983dd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114983e1 je 0x11498404 */
  if (C.zf) goto L_11498404;
L_114983e3:;
  /* 114983e3 push 0x114b1ba0 */
  push32((uint32_t)(0x114b1ba0u));
  /* 114983e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114983ea push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 114983ef push 0x114b1b98 */
  push32((uint32_t)(0x114b1b98u));
  /* 114983f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 114983f6 call 0x11484860 */
  push32(0x114983fbu); f_11484860();
  /* 114983fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114983fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498401 jne 0x11498404 */
  if (!C.zf) goto L_11498404;
  /* 11498403 int3  */
  x86_unimpl("int3 @ 0x11498403");
L_11498404:;
  /* 11498404 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11498406 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11498408 jne 0x114983cb */
  if (!C.zf) goto L_114983cb;
  /* 1149840a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149840e jle 0x11498483 */
  if ((C.zf||C.sf!=C.of)) goto L_11498483;
  /* 11498410 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498414 jae 0x11498420 */
  if (!C.cf) goto L_11498420;
  /* 11498416 mov eax, 3 */
  EAX = (0x3u);
  /* 1149841b jmp 0x11498654 */
  goto L_11498654;
L_11498420:;
  /* 11498420 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11498423 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11498426 jmp 0x11498431 */
  goto L_11498431;
L_11498428:;
  /* 11498428 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1149842b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149842e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11498431:;
  /* 11498431 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11498434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11498436 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11498438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149843a je 0x11498479 */
  if (C.zf) goto L_11498479;
  /* 1149843c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1149843f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11498441 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11498444 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11498446 je 0x11498479 */
  if (C.zf) goto L_11498479;
  /* 11498448 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149844b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1149844d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1149844f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11498452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11498454 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11498456 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498458 jl 0x11498477 */
  if ((C.sf!=C.of)) goto L_11498477;
  /* 1149845a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149845d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1149845f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11498461 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11498464 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11498466 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11498469 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149846b jg 0x11498477 */
  if ((!C.zf&&C.sf==C.of)) goto L_11498477;
  /* 1149846d mov eax, 2 */
  EAX = (0x2u);
  /* 11498472 jmp 0x11498654 */
  goto L_11498654;
L_11498477:;
  /* 11498477 jmp 0x11498428 */
  goto L_11498428;
L_11498479:;
  /* 11498479 mov eax, 3 */
  EAX = (0x3u);
  /* 1149847e jmp 0x11498654 */
  goto L_11498654;
L_11498483:;
  /* 11498483 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498487 jle 0x114984fc */
  if ((C.zf||C.sf!=C.of)) goto L_114984fc;
  /* 11498489 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149848d jae 0x11498499 */
  if (!C.cf) goto L_11498499;
  /* 1149848f mov eax, 1 */
  EAX = (0x1u);
  /* 11498494 jmp 0x11498654 */
  goto L_11498654;
L_11498499:;
  /* 11498499 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1149849c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1149849f jmp 0x114984aa */
  goto L_114984aa;
L_114984a1:;
  /* 114984a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114984a4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114984a7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_114984aa:;
  /* 114984aa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 114984ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114984af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114984b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114984b3 je 0x114984f2 */
  if (C.zf) goto L_114984f2;
  /* 114984b5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114984b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114984ba mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 114984bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114984bf je 0x114984f2 */
  if (C.zf) goto L_114984f2;
  /* 114984c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114984c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114984c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114984c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 114984cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114984cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114984cf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114984d1 jl 0x114984f0 */
  if ((C.sf!=C.of)) goto L_114984f0;
  /* 114984d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114984d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114984d8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114984da mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 114984dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114984df mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114984e2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114984e4 jg 0x114984f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_114984f0;
  /* 114984e6 mov eax, 2 */
  EAX = (0x2u);
  /* 114984eb jmp 0x11498654 */
  goto L_11498654;
L_114984f0:;
  /* 114984f0 jmp 0x114984a1 */
  goto L_114984a1;
L_114984f2:;
  /* 114984f2 mov eax, 1 */
  EAX = (0x1u);
  /* 114984f7 jmp 0x11498654 */
  goto L_11498654;
L_114984fc:;
  /* 114984fc push 0 */
  push32((uint32_t)(0x0u));
  /* 114984fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11498500 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11498503 push ecx */
  push32((uint32_t)(ECX));
  /* 11498504 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11498507 push edx */
  push32((uint32_t)(EDX));
  /* 11498508 push 9 */
  push32((uint32_t)(0x9u));
  /* 1149850a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1149850d push eax */
  push32((uint32_t)(EAX));
  /* 1149850e call dword ptr [0x114b930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b930c))), 0x11498514u);
  /* 11498514 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11498517 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149851b jne 0x11498524 */
  if (!C.zf) goto L_11498524;
  /* 1149851d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149851f jmp 0x11498654 */
  goto L_11498654;
L_11498524:;
  /* 11498524 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1149852b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1149852e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11498530 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498533 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11498535 call 0x1148a260 */
  push32(0x1149853au); f_1148a260();
  /* 1149853a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1149853d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11498540 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11498543 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11498546 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1149854d jmp 0x11498566 */
  goto L_11498566;
  /* 1149854f mov eax, 1 */
  EAX = (0x1u);
  /* 11498554 ret  */
  ESPCHK(0x11498270u, _esp0);
  ESP += 4; return;
  /* 11498555 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11498558 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1149855f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11498566:;
  /* 11498566 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149856a jne 0x11498573 */
  if (!C.zf) goto L_11498573;
  /* 1149856c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149856e jmp 0x11498654 */
  goto L_11498654;
L_11498573:;
  /* 11498573 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11498576 push edx */
  push32((uint32_t)(EDX));
  /* 11498577 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1149857a push eax */
  push32((uint32_t)(EAX));
  /* 1149857b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1149857e push ecx */
  push32((uint32_t)(ECX));
  /* 1149857f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11498582 push edx */
  push32((uint32_t)(EDX));
  /* 11498583 push 1 */
  push32((uint32_t)(0x1u));
  /* 11498585 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11498588 push eax */
  push32((uint32_t)(EAX));
  /* 11498589 call dword ptr [0x114b930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b930c))), 0x1149858fu);
  /* 1149858f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11498591 jne 0x1149859a */
  if (!C.zf) goto L_1149859a;
  /* 11498593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11498595 jmp 0x11498654 */
  goto L_11498654;
L_1149859a:;
  /* 1149859a push 0 */
  push32((uint32_t)(0x0u));
  /* 1149859c push 0 */
  push32((uint32_t)(0x0u));
  /* 1149859e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114985a1 push ecx */
  push32((uint32_t)(ECX));
  /* 114985a2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114985a5 push edx */
  push32((uint32_t)(EDX));
  /* 114985a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 114985a8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114985ab push eax */
  push32((uint32_t)(EAX));
  /* 114985ac call dword ptr [0x114b930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b930c))), 0x114985b2u);
  /* 114985b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114985b5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114985b9 jne 0x114985c2 */
  if (!C.zf) goto L_114985c2;
  /* 114985bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114985bd jmp 0x11498654 */
  goto L_11498654;
L_114985c2:;
  /* 114985c2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114985c9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114985cc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114985ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114985d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114985d3 call 0x1148a260 */
  push32(0x114985d8u); f_1148a260();
  /* 114985d8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 114985db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114985de mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 114985e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 114985e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114985eb jmp 0x11498604 */
  goto L_11498604;
  /* 114985ed mov eax, 1 */
  EAX = (0x1u);
  /* 114985f2 ret  */
  ESPCHK(0x11498270u, _esp0);
  ESP += 4; return;
  /* 114985f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114985f6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 114985fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11498604:;
  /* 11498604 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498608 jne 0x1149860e */
  if (!C.zf) goto L_1149860e;
  /* 1149860a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149860c jmp 0x11498654 */
  goto L_11498654;
L_1149860e:;
  /* 1149860e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11498611 push edx */
  push32((uint32_t)(EDX));
  /* 11498612 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11498615 push eax */
  push32((uint32_t)(EAX));
  /* 11498616 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11498619 push ecx */
  push32((uint32_t)(ECX));
  /* 1149861a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1149861d push edx */
  push32((uint32_t)(EDX));
  /* 1149861e push 1 */
  push32((uint32_t)(0x1u));
  /* 11498620 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11498623 push eax */
  push32((uint32_t)(EAX));
  /* 11498624 call dword ptr [0x114b930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b930c))), 0x1149862au);
  /* 1149862a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149862c jne 0x11498632 */
  if (!C.zf) goto L_11498632;
  /* 1149862e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11498630 jmp 0x11498654 */
  goto L_11498654;
L_11498632:;
  /* 11498632 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11498635 push ecx */
  push32((uint32_t)(ECX));
  /* 11498636 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11498639 push edx */
  push32((uint32_t)(EDX));
  /* 1149863a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1149863d push eax */
  push32((uint32_t)(EAX));
  /* 1149863e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11498641 push ecx */
  push32((uint32_t)(ECX));
  /* 11498642 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11498645 push edx */
  push32((uint32_t)(EDX));
  /* 11498646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498649 push eax */
  push32((uint32_t)(EAX));
  /* 1149864a call dword ptr [0x114b92c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92c0))), 0x11498650u);
  /* 11498650 jmp 0x11498654 */
  goto L_11498654;
L_11498652:;
  /* 11498652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11498654:;
  /* 11498654 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11498657 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1149865a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11498661 pop edi */
  EDI = (pop32());
  /* 11498662 pop esi */
  ESI = (pop32());
  /* 11498663 pop ebx */
  EBX = (pop32());
  /* 11498664 mov esp, ebp */
  ESP = (EBP);
  /* 11498666 pop ebp */
  EBP = (pop32());
  /* 11498667 ret  */
  ESPCHK(0x11498270u, _esp0);
  ESP += 4; return;
}

/* FUN_10018670 @ 0x11498670 (80 bytes, 32 insns) */
void f_11498670(void) {
  FTRACE(0x11498670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11498670 push ebp */
  push32((uint32_t)(EBP));
  /* 11498671 mov ebp, esp */
  EBP = (ESP);
  /* 11498673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11498676 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11498679 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1149867c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149867f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11498682:;
  /* 11498682 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498685 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498688 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149868b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1149868e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11498690 je 0x114986a7 */
  if (C.zf) goto L_114986a7;
  /* 11498692 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498695 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11498698 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1149869a je 0x114986a7 */
  if (C.zf) goto L_114986a7;
  /* 1149869c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149869f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114986a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114986a5 jmp 0x11498682 */
  goto L_11498682;
L_114986a7:;
  /* 114986a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114986aa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114986ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114986af jne 0x114986b9 */
  if (!C.zf) goto L_114986b9;
  /* 114986b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114986b4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114986b7 jmp 0x114986bc */
  goto L_114986bc;
L_114986b9:;
  /* 114986b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_114986bc:;
  /* 114986bc mov esp, ebp */
  ESP = (EBP);
  /* 114986be pop ebp */
  EBP = (pop32());
  /* 114986bf ret  */
  ESPCHK(0x11498670u, _esp0);
  ESP += 4; return;
}

/* FUN_100186c0 @ 0x114986c0 (736 bytes, 224 insns) */
void f_114986c0(void) {
  FTRACE(0x114986c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114986c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114986c1 mov ebp, esp */
  EBP = (ESP);
  /* 114986c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114986c6 push esi */
  push32((uint32_t)(ESI));
  /* 114986c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114986cb je 0x114986ec */
  if (C.zf) goto L_114986ec;
  /* 114986cd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 114986cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114986d2 push eax */
  push32((uint32_t)(EAX));
  /* 114986d3 call 0x11498b10 */
  push32(0x114986d8u); f_11498b10();
  /* 114986d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114986db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114986de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114986e2 je 0x114986ec */
  if (C.zf) goto L_114986ec;
  /* 114986e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114986e7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114986ea jne 0x114986f4 */
  if (!C.zf) goto L_114986f4;
L_114986ec:;
  /* 114986ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114986ef jmp 0x1149899b */
  goto L_1149899b;
L_114986f4:;
  /* 114986f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114986f7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114986fb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114986fd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114986ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11498700 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11498703 mov ecx, dword ptr [0x114b6514] */
  ECX = (r32((uint32_t)(0x114b6514)));
  /* 11498709 cmp ecx, dword ptr [0x114b6518] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b6518))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149870f jne 0x11498725 */
  if (!C.zf) goto L_11498725;
  /* 11498711 mov edx, dword ptr [0x114b6514] */
  EDX = (r32((uint32_t)(0x114b6514)));
  /* 11498717 push edx */
  push32((uint32_t)(EDX));
  /* 11498718 call 0x11498a20 */
  push32(0x1149871du); f_11498a20();
  /* 1149871d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498720 mov dword ptr [0x114b6514], eax */
  w32((uint32_t)(0x114b6514), (EAX));
L_11498725:;
  /* 11498725 cmp dword ptr [0x114b6514], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6514))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149872c jne 0x114987e5 */
  if (!C.zf) goto L_114987e5;
  /* 11498732 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498736 je 0x11498757 */
  if (C.zf) goto L_11498757;
  /* 11498738 cmp dword ptr [0x114b651c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b651c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149873f je 0x11498757 */
  if (C.zf) goto L_11498757;
  /* 11498741 call 0x114981c0 */
  push32(0x11498746u); f_114981c0();
  /* 11498746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11498748 je 0x11498752 */
  if (C.zf) goto L_11498752;
  /* 1149874a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1149874d jmp 0x1149899b */
  goto L_1149899b;
L_11498752:;
  /* 11498752 jmp 0x114987e5 */
  goto L_114987e5;
L_11498757:;
  /* 11498757 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149875b je 0x11498764 */
  if (C.zf) goto L_11498764;
  /* 1149875d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149875f jmp 0x1149899b */
  goto L_1149899b;
L_11498764:;
  /* 11498764 cmp dword ptr [0x114b6514], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6514))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149876b jne 0x114987a4 */
  if (!C.zf) goto L_114987a4;
  /* 1149876d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11498772 push 0x114b1bf8 */
  push32((uint32_t)(0x114b1bf8u));
  /* 11498777 push 2 */
  push32((uint32_t)(0x2u));
  /* 11498779 push 4 */
  push32((uint32_t)(0x4u));
  /* 1149877b call 0x114870c0 */
  push32(0x11498780u); f_114870c0();
  /* 11498780 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498783 mov dword ptr [0x114b6514], eax */
  w32((uint32_t)(0x114b6514), (EAX));
  /* 11498788 cmp dword ptr [0x114b6514], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6514))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149878f jne 0x11498799 */
  if (!C.zf) goto L_11498799;
  /* 11498791 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11498794 jmp 0x1149899b */
  goto L_1149899b;
L_11498799:;
  /* 11498799 mov eax, dword ptr [0x114b6514] */
  EAX = (r32((uint32_t)(0x114b6514)));
  /* 1149879e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_114987a4:;
  /* 114987a4 cmp dword ptr [0x114b651c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b651c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114987ab jne 0x114987e5 */
  if (!C.zf) goto L_114987e5;
  /* 114987ad push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 114987b2 push 0x114b1bf8 */
  push32((uint32_t)(0x114b1bf8u));
  /* 114987b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114987b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 114987bb call 0x114870c0 */
  push32(0x114987c0u); f_114870c0();
  /* 114987c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114987c3 mov dword ptr [0x114b651c], eax */
  w32((uint32_t)(0x114b651c), (EAX));
  /* 114987c8 cmp dword ptr [0x114b651c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b651c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114987cf jne 0x114987d9 */
  if (!C.zf) goto L_114987d9;
  /* 114987d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114987d4 jmp 0x1149899b */
  goto L_1149899b;
L_114987d9:;
  /* 114987d9 mov ecx, dword ptr [0x114b651c] */
  ECX = (r32((uint32_t)(0x114b651c)));
  /* 114987df mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_114987e5:;
  /* 114987e5 mov edx, dword ptr [0x114b6514] */
  EDX = (r32((uint32_t)(0x114b6514)));
  /* 114987eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114987ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114987f1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114987f4 push eax */
  push32((uint32_t)(EAX));
  /* 114987f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114987f8 push ecx */
  push32((uint32_t)(ECX));
  /* 114987f9 call 0x114989a0 */
  push32(0x114987feu); f_114989a0();
  /* 114987fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498801 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11498804 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498808 jl 0x114988a1 */
  if ((C.sf!=C.of)) goto L_114988a1;
  /* 1149880e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498811 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498814 je 0x114988a1 */
  if (C.zf) goto L_114988a1;
  /* 1149881a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149881e je 0x11498893 */
  if (C.zf) goto L_11498893;
  /* 11498820 push 2 */
  push32((uint32_t)(0x2u));
  /* 11498822 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498825 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498828 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1149882b push edx */
  push32((uint32_t)(EDX));
  /* 1149882c call 0x11487b50 */
  push32(0x11498831u); f_11487b50();
  /* 11498831 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498834 jmp 0x1149883f */
  goto L_1149883f;
L_11498836:;
  /* 11498836 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498839 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149883c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1149883f:;
  /* 1149883f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498842 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498845 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498849 je 0x11498860 */
  if (C.zf) goto L_11498860;
  /* 1149884b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149884e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498851 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498854 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11498857 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1149885b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1149885e jmp 0x11498836 */
  goto L_11498836;
L_11498860:;
  /* 11498860 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11498865 push 0x114b1bf8 */
  push32((uint32_t)(0x114b1bf8u));
  /* 1149886a push 2 */
  push32((uint32_t)(0x2u));
  /* 1149886c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149886f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11498872 push eax */
  push32((uint32_t)(EAX));
  /* 11498873 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498876 push ecx */
  push32((uint32_t)(ECX));
  /* 11498877 call 0x11487550 */
  push32(0x1149887cu); f_11487550();
  /* 1149887c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149887f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11498882 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498886 je 0x11498891 */
  if (C.zf) goto L_11498891;
  /* 11498888 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149888b mov dword ptr [0x114b6514], edx */
  w32((uint32_t)(0x114b6514), (EDX));
L_11498891:;
  /* 11498891 jmp 0x1149889f */
  goto L_1149889f;
L_11498893:;
  /* 11498893 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498896 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498899 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149889c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1149889f:;
  /* 1149889f jmp 0x11498914 */
  goto L_11498914;
L_114988a1:;
  /* 114988a1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114988a5 jne 0x1149890d */
  if (!C.zf) goto L_1149890d;
  /* 114988a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114988ab jge 0x114988b5 */
  if ((C.sf==C.of)) goto L_114988b5;
  /* 114988ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114988b0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114988b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114988b5:;
  /* 114988b5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 114988ba push 0x114b1bf8 */
  push32((uint32_t)(0x114b1bf8u));
  /* 114988bf push 2 */
  push32((uint32_t)(0x2u));
  /* 114988c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114988c4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 114988cb push edx */
  push32((uint32_t)(EDX));
  /* 114988cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114988cf push eax */
  push32((uint32_t)(EAX));
  /* 114988d0 call 0x11487550 */
  push32(0x114988d5u); f_11487550();
  /* 114988d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114988d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114988db cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114988df jne 0x114988e9 */
  if (!C.zf) goto L_114988e9;
  /* 114988e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114988e4 jmp 0x1149899b */
  goto L_1149899b;
L_114988e9:;
  /* 114988e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114988ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114988ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114988f2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 114988f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114988f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114988fb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11498903 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498906 mov dword ptr [0x114b6514], eax */
  w32((uint32_t)(0x114b6514), (EAX));
  /* 1149890b jmp 0x11498914 */
  goto L_11498914;
L_1149890d:;
  /* 1149890d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149890f jmp 0x1149899b */
  goto L_1149899b;
L_11498914:;
  /* 11498914 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498918 je 0x11498999 */
  if (C.zf) goto L_11498999;
  /* 1149891a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1149891f push 0x114b1bf8 */
  push32((uint32_t)(0x114b1bf8u));
  /* 11498924 push 2 */
  push32((uint32_t)(0x2u));
  /* 11498926 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498929 push ecx */
  push32((uint32_t)(ECX));
  /* 1149892a call 0x11489ef0 */
  push32(0x1149892fu); f_11489ef0();
  /* 1149892f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498932 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498935 push eax */
  push32((uint32_t)(EAX));
  /* 11498936 call 0x114870c0 */
  push32(0x1149893bu); f_114870c0();
  /* 1149893b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149893e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11498941 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498945 je 0x11498999 */
  if (C.zf) goto L_11498999;
  /* 11498947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149894a push edx */
  push32((uint32_t)(EDX));
  /* 1149894b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1149894e push eax */
  push32((uint32_t)(EAX));
  /* 1149894f call 0x1148a070 */
  push32(0x11498954u); f_1148a070();
  /* 11498954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498957 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1149895a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149895d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11498960 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498962 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11498965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498968 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1149896b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149896e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498971 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11498974 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11498977 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11498979 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149897b not edx */
  EDX = (~(EDX));
  /* 1149897d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11498980 push edx */
  push32((uint32_t)(EDX));
  /* 11498981 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11498984 push eax */
  push32((uint32_t)(EAX));
  /* 11498985 call dword ptr [0x114b92bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92bc))), 0x1149898bu);
  /* 1149898b push 2 */
  push32((uint32_t)(0x2u));
  /* 1149898d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11498990 push ecx */
  push32((uint32_t)(ECX));
  /* 11498991 call 0x11487b50 */
  push32(0x11498996u); f_11487b50();
  /* 11498996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11498999:;
  /* 11498999 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1149899b:;
  /* 1149899b pop esi */
  ESI = (pop32());
  /* 1149899c mov esp, ebp */
  ESP = (EBP);
  /* 1149899e pop ebp */
  EBP = (pop32());
  /* 1149899f ret  */
  ESPCHK(0x114986c0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x114989a0 (124 bytes, 47 insns) */
void f_114989a0(void) {
  FTRACE(0x114989a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114989a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114989a1 mov ebp, esp */
  EBP = (ESP);
  /* 114989a3 push ecx */
  push32((uint32_t)(ECX));
  /* 114989a4 mov eax, dword ptr [0x114b6514] */
  EAX = (r32((uint32_t)(0x114b6514)));
  /* 114989a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114989ac jmp 0x114989b7 */
  goto L_114989b7;
L_114989ae:;
  /* 114989ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114989b1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114989b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114989b7:;
  /* 114989b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114989ba cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114989bd je 0x11498a0a */
  if (C.zf) goto L_11498a0a;
  /* 114989bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114989c2 push eax */
  push32((uint32_t)(EAX));
  /* 114989c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114989c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114989c8 push edx */
  push32((uint32_t)(EDX));
  /* 114989c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114989cc push eax */
  push32((uint32_t)(EAX));
  /* 114989cd call 0x11498170 */
  push32(0x114989d2u); f_11498170();
  /* 114989d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114989d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114989d7 jne 0x11498a08 */
  if (!C.zf) goto L_11498a08;
  /* 114989d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114989dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114989de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114989e1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 114989e5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114989e8 je 0x114989fa */
  if (C.zf) goto L_114989fa;
  /* 114989ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114989ed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114989ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114989f2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 114989f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114989f8 jne 0x11498a08 */
  if (!C.zf) goto L_11498a08;
L_114989fa:;
  /* 114989fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114989fd sub eax, dword ptr [0x114b6514] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b6514))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11498a03 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11498a06 jmp 0x11498a18 */
  goto L_11498a18;
L_11498a08:;
  /* 11498a08 jmp 0x114989ae */
  goto L_114989ae;
L_11498a0a:;
  /* 11498a0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498a0d sub eax, dword ptr [0x114b6514] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b6514))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11498a13 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11498a16 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11498a18:;
  /* 11498a18 mov esp, ebp */
  ESP = (EBP);
  /* 11498a1a pop ebp */
  EBP = (pop32());
  /* 11498a1b ret  */
  ESPCHK(0x114989a0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11498a20 (238 bytes, 80 insns) */
void f_11498a20(void) {
  FTRACE(0x11498a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11498a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11498a21 mov ebp, esp */
  EBP = (ESP);
  /* 11498a23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11498a26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11498a2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498a30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11498a33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498a37 jne 0x11498a40 */
  if (!C.zf) goto L_11498a40;
  /* 11498a39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11498a3b jmp 0x11498b0a */
  goto L_11498b0a;
L_11498a40:;
  /* 11498a40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498a43 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11498a45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498a48 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498a4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11498a4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11498a50 je 0x11498a5d */
  if (C.zf) goto L_11498a5d;
  /* 11498a52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11498a55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498a58 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11498a5b jmp 0x11498a40 */
  goto L_11498a40;
L_11498a5d:;
  /* 11498a5d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11498a62 push 0x114b1bf8 */
  push32((uint32_t)(0x114b1bf8u));
  /* 11498a67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11498a69 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11498a6c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11498a73 push eax */
  push32((uint32_t)(EAX));
  /* 11498a74 call 0x114870c0 */
  push32(0x11498a79u); f_114870c0();
  /* 11498a79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498a7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11498a7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498a82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11498a85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498a89 jne 0x11498a95 */
  if (!C.zf) goto L_11498a95;
  /* 11498a8b push 9 */
  push32((uint32_t)(0x9u));
  /* 11498a8d call 0x11484710 */
  push32(0x11498a92u); f_11484710();
  /* 11498a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11498a95:;
  /* 11498a95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498a98 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11498a9b:;
  /* 11498a9b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498a9e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498aa1 je 0x11498afe */
  if (C.zf) goto L_11498afe;
  /* 11498aa3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11498aa8 push 0x114b1bf8 */
  push32((uint32_t)(0x114b1bf8u));
  /* 11498aad push 2 */
  push32((uint32_t)(0x2u));
  /* 11498aaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498ab2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11498ab4 push edx */
  push32((uint32_t)(EDX));
  /* 11498ab5 call 0x11489ef0 */
  push32(0x11498abau); f_11489ef0();
  /* 11498aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498abd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498ac0 push eax */
  push32((uint32_t)(EAX));
  /* 11498ac1 call 0x114870c0 */
  push32(0x11498ac6u); f_114870c0();
  /* 11498ac6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498ac9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498acc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11498ace mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498ad1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498ad4 je 0x11498aea */
  if (C.zf) goto L_11498aea;
  /* 11498ad6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498ad9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11498adb push ecx */
  push32((uint32_t)(ECX));
  /* 11498adc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498adf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11498ae1 push eax */
  push32((uint32_t)(EAX));
  /* 11498ae2 call 0x1148a070 */
  push32(0x11498ae7u); f_1148a070();
  /* 11498ae7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11498aea:;
  /* 11498aea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11498aed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498af0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11498af3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498af6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498af9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11498afc jmp 0x11498a9b */
  goto L_11498a9b;
L_11498afe:;
  /* 11498afe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11498b01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11498b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11498b0a:;
  /* 11498b0a mov esp, ebp */
  ESP = (EBP);
  /* 11498b0c pop ebp */
  EBP = (pop32());
  /* 11498b0d ret  */
  ESPCHK(0x11498a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10018b10 @ 0x11498b10 (237 bytes, 81 insns) */
void f_11498b10(void) {
  FTRACE(0x11498b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11498b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11498b11 mov ebp, esp */
  EBP = (ESP);
  /* 11498b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11498b14 cmp dword ptr [0x114b690c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b690c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498b1b jne 0x11498b32 */
  if (!C.zf) goto L_11498b32;
  /* 11498b1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11498b20 push eax */
  push32((uint32_t)(EAX));
  /* 11498b21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498b24 push ecx */
  push32((uint32_t)(ECX));
  /* 11498b25 call 0x11498c10 */
  push32(0x11498b2au); f_11498c10();
  /* 11498b2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498b2d jmp 0x11498bf9 */
  goto L_11498bf9;
L_11498b32:;
  /* 11498b32 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11498b34 call 0x1148ca30 */
  push32(0x11498b39u); f_1148ca30();
  /* 11498b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498b3c jmp 0x11498b47 */
  goto L_11498b47;
L_11498b3e:;
  /* 11498b3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498b41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498b44 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11498b47:;
  /* 11498b47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498b4a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11498b4e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11498b52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498b55 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11498b5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11498b5d je 0x11498bdb */
  if (C.zf) goto L_11498bdb;
  /* 11498b5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498b62 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11498b67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11498b69 mov cl, byte ptr [eax + 0x114b6a21] */
  CL = (r8((uint32_t)(EAX + 0x114b6a21)));
  /* 11498b6f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11498b72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11498b74 je 0x11498bc6 */
  if (C.zf) goto L_11498bc6;
  /* 11498b76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498b79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498b7c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11498b7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498b82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11498b84 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11498b86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11498b88 jne 0x11498b98 */
  if (!C.zf) goto L_11498b98;
  /* 11498b8a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11498b8c call 0x1148cad0 */
  push32(0x11498b91u); f_1148cad0();
  /* 11498b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498b94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11498b96 jmp 0x11498bf9 */
  goto L_11498bf9;
L_11498b98:;
  /* 11498b98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498b9b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11498ba1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11498ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498ba7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11498ba9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11498bab or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11498bad cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498bb0 jne 0x11498bc4 */
  if (!C.zf) goto L_11498bc4;
  /* 11498bb2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11498bb4 call 0x1148cad0 */
  push32(0x11498bb9u); f_1148cad0();
  /* 11498bb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498bbf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11498bc2 jmp 0x11498bf9 */
  goto L_11498bf9;
L_11498bc4:;
  /* 11498bc4 jmp 0x11498bd6 */
  goto L_11498bd6;
L_11498bc6:;
  /* 11498bc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498bc9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11498bcf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498bd2 jne 0x11498bd6 */
  if (!C.zf) goto L_11498bd6;
  /* 11498bd4 jmp 0x11498bdb */
  goto L_11498bdb;
L_11498bd6:;
  /* 11498bd6 jmp 0x11498b3e */
  goto L_11498b3e;
L_11498bdb:;
  /* 11498bdb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11498bdd call 0x1148cad0 */
  push32(0x11498be2u); f_1148cad0();
  /* 11498be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11498be5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11498be8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11498bed cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11498bf0 jne 0x11498bf7 */
  if (!C.zf) goto L_11498bf7;
  /* 11498bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11498bf5 jmp 0x11498bf9 */
  goto L_11498bf9;
L_11498bf7:;
  /* 11498bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11498bf9:;
  /* 11498bf9 mov esp, ebp */
  ESP = (EBP);
  /* 11498bfb pop ebp */
  EBP = (pop32());
  /* 11498bfc ret  */
  ESPCHK(0x11498b10u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11498c10 (193 bytes, 87 insns) */
void f_11498c10(void) {
  FTRACE(0x11498c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11498c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11498c12 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11498c16 push ebx */
  push32((uint32_t)(EBX));
  /* 11498c17 mov ebx, eax */
  EBX = (EAX);
  /* 11498c19 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11498c1c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11498c20 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11498c26 je 0x11498c3b */
  if (C.zf) goto L_11498c3b;
L_11498c28:;
  /* 11498c28 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11498c2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11498c2b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11498c2d je 0x11498c00 */
  if (C.zf) { jmp_ind(0x11498c00u); return; }
  /* 11498c2f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11498c31 je 0x11498c84 */
  if (C.zf) goto L_11498c84;
  /* 11498c33 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11498c39 jne 0x11498c28 */
  if (!C.zf) goto L_11498c28;
L_11498c3b:;
  /* 11498c3b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11498c3d push edi */
  push32((uint32_t)(EDI));
  /* 11498c3e mov eax, ebx */
  EAX = (EBX);
  /* 11498c40 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11498c43 push esi */
  push32((uint32_t)(ESI));
  /* 11498c44 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11498c46:;
  /* 11498c46 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11498c48 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11498c4d mov eax, ecx */
  EAX = (ECX);
  /* 11498c4f mov esi, edi */
  ESI = (EDI);
  /* 11498c51 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11498c53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11498c55 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11498c57 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11498c5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11498c5d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11498c5f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11498c61 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11498c64 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11498c6a jne 0x11498c88 */
  if (!C.zf) goto L_11498c88;
  /* 11498c6c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11498c71 je 0x11498c46 */
  if (C.zf) goto L_11498c46;
  /* 11498c73 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11498c78 jne 0x11498c82 */
  if (!C.zf) goto L_11498c82;
  /* 11498c7a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11498c80 jne 0x11498c46 */
  if (!C.zf) goto L_11498c46;
L_11498c82:;
  /* 11498c82 pop esi */
  ESI = (pop32());
  /* 11498c83 pop edi */
  EDI = (pop32());
L_11498c84:;
  /* 11498c84 pop ebx */
  EBX = (pop32());
  /* 11498c85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11498c87 ret  */
  ESPCHK(0x11498c10u, _esp0);
  ESP += 4; return;
L_11498c88:;
  /* 11498c88 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11498c8b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11498c8d je 0x11498cc5 */
  if (C.zf) goto L_11498cc5;
  /* 11498c8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11498c91 je 0x11498c82 */
  if (C.zf) goto L_11498c82;
  /* 11498c93 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11498c95 je 0x11498cbe */
  if (C.zf) goto L_11498cbe;
  /* 11498c97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11498c99 je 0x11498c82 */
  if (C.zf) goto L_11498c82;
  /* 11498c9b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11498c9e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11498ca0 je 0x11498cb7 */
  if (C.zf) goto L_11498cb7;
  /* 11498ca2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11498ca4 je 0x11498c82 */
  if (C.zf) goto L_11498c82;
  /* 11498ca6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11498ca8 je 0x11498cb0 */
  if (C.zf) goto L_11498cb0;
  /* 11498caa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11498cac je 0x11498c82 */
  if (C.zf) goto L_11498c82;
  /* 11498cae jmp 0x11498c46 */
  goto L_11498c46;
L_11498cb0:;
  /* 11498cb0 pop esi */
  ESI = (pop32());
  /* 11498cb1 pop edi */
  EDI = (pop32());
  /* 11498cb2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11498cb5 pop ebx */
  EBX = (pop32());
  /* 11498cb6 ret  */
  ESPCHK(0x11498c10u, _esp0);
  ESP += 4; return;
L_11498cb7:;
  /* 11498cb7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11498cba pop esi */
  ESI = (pop32());
  /* 11498cbb pop edi */
  EDI = (pop32());
  /* 11498cbc pop ebx */
  EBX = (pop32());
  /* 11498cbd ret  */
  ESPCHK(0x11498c10u, _esp0);
  ESP += 4; return;
L_11498cbe:;
  /* 11498cbe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11498cc1 pop esi */
  ESI = (pop32());
  /* 11498cc2 pop edi */
  EDI = (pop32());
  /* 11498cc3 pop ebx */
  EBX = (pop32());
  /* 11498cc4 ret  */
  ESPCHK(0x11498c10u, _esp0);
  ESP += 4; return;
L_11498cc5:;
  /* 11498cc5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11498cc8 pop esi */
  ESI = (pop32());
  /* 11498cc9 pop edi */
  EDI = (pop32());
  /* 11498cca pop ebx */
  EBX = (pop32());
  /* 11498ccb ret  */
  ESPCHK(0x11498c10u, _esp0);
  ESP += 4; return;
  /* 11498ccc jmp dword ptr [0x114b9358] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x114b9358)))); return;
}

/* RtlUnwind @ 0x11498e2e (6 bytes, 1 insns) */
void f_11498e2e(void) {
  FTRACE(0x11498e2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11498e2e jmp dword ptr [0x114b92f0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x114b92f0)))); return;
}

