#include "recomp.h"

/* FUN_10015af0 @ 0x11455af0 (58 bytes, 32 insns) */
void f_11455af0(void) {
  FTRACE(0x11455af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11455af1 mov ebp, esp */
  EBP = (ESP);
  /* 11455af3 push esi */
  push32((uint32_t)(ESI));
  /* 11455af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455af6 push eax */
  push32((uint32_t)(EAX));
  /* 11455af7 push eax */
  push32((uint32_t)(EAX));
  /* 11455af8 push eax */
  push32((uint32_t)(EAX));
  /* 11455af9 push eax */
  push32((uint32_t)(EAX));
  /* 11455afa push eax */
  push32((uint32_t)(EAX));
  /* 11455afb push eax */
  push32((uint32_t)(EAX));
  /* 11455afc push eax */
  push32((uint32_t)(EAX));
  /* 11455afd push eax */
  push32((uint32_t)(EAX));
  /* 11455afe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11455b01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11455b04:;
  /* 11455b04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11455b06 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11455b08 je 0x11455b11 */
  if (C.zf) goto L_11455b11;
  /* 11455b0a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11455b0b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11455b0b");
  /* 11455b0f jmp 0x11455b04 */
  goto L_11455b04;
L_11455b11:;
  /* 11455b11 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11455b14:;
  /* 11455b14 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11455b16 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11455b18 je 0x11455b24 */
  if (C.zf) goto L_11455b24;
  /* 11455b1a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11455b1b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11455b1b");
  /* 11455b1f jae 0x11455b14 */
  if (!C.cf) goto L_11455b14;
  /* 11455b21 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11455b24:;
  /* 11455b24 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455b27 pop esi */
  ESI = (pop32());
  /* 11455b28 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11455b29 ret  */
  ESPCHK(0x11455af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b30 @ 0x11455b30 (512 bytes, 147 insns) */
void f_11455b30(void) {
  FTRACE(0x11455b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11455b31 mov ebp, esp */
  EBP = (ESP);
  /* 11455b33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11455b36 cmp dword ptr [0x11474bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455b3d jne 0x11455b62 */
  if (!C.zf) goto L_11455b62;
  /* 11455b3f call 0x11456600 */
  push32(0x11455b44u); f_11456600();
  /* 11455b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455b46 je 0x11455b52 */
  if (C.zf) goto L_11455b52;
  /* 11455b48 mov eax, dword ptr [0x11477314] */
  EAX = (r32((uint32_t)(0x11477314)));
  /* 11455b4d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11455b50 jmp 0x11455b59 */
  goto L_11455b59;
L_11455b52:;
  /* 11455b52 mov dword ptr [ebp - 8], 0x11456650 */
  w32((uint32_t)(EBP + -0x8), (0x11456650u));
L_11455b59:;
  /* 11455b59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11455b5c mov dword ptr [0x11474bec], ecx */
  w32((uint32_t)(0x11474bec), (ECX));
L_11455b62:;
  /* 11455b62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455b66 jne 0x11455b72 */
  if (!C.zf) goto L_11455b72;
  /* 11455b68 call 0x11456450 */
  push32(0x11455b6du); f_11456450();
  /* 11455b6d jmp 0x11455c3e */
  goto L_11455c3e;
L_11455b72:;
  /* 11455b72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455b75 mov dword ptr [0x11474bdc], edx */
  w32((uint32_t)(0x11474bdc), (EDX));
  /* 11455b7b cmp dword ptr [0x11474bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455b82 je 0x11455ba4 */
  if (C.zf) goto L_11455ba4;
  /* 11455b84 mov eax, dword ptr [0x11474bdc] */
  EAX = (r32((uint32_t)(0x11474bdc)));
  /* 11455b89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11455b8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11455b8e je 0x11455ba4 */
  if (C.zf) goto L_11455ba4;
  /* 11455b90 push 0x11474bdc */
  push32((uint32_t)(0x11474bdcu));
  /* 11455b95 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11455b97 push 0x11473bb0 */
  push32((uint32_t)(0x11473bb0u));
  /* 11455b9c call 0x11455d30 */
  push32(0x11455ba1u); f_11455d30();
  /* 11455ba1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11455ba4:;
  /* 11455ba4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455ba7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455baa mov dword ptr [0x11474be0], edx */
  w32((uint32_t)(0x11474be0), (EDX));
  /* 11455bb0 cmp dword ptr [0x11474be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455bb7 je 0x11455bd9 */
  if (C.zf) goto L_11455bd9;
  /* 11455bb9 mov eax, dword ptr [0x11474be0] */
  EAX = (r32((uint32_t)(0x11474be0)));
  /* 11455bbe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11455bc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11455bc3 je 0x11455bd9 */
  if (C.zf) goto L_11455bd9;
  /* 11455bc5 push 0x11474be0 */
  push32((uint32_t)(0x11474be0u));
  /* 11455bca push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11455bcc push 0x11473af8 */
  push32((uint32_t)(0x11473af8u));
  /* 11455bd1 call 0x11455d30 */
  push32(0x11455bd6u); f_11455d30();
  /* 11455bd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11455bd9:;
  /* 11455bd9 mov dword ptr [0x11474be4], 0 */
  w32((uint32_t)(0x11474be4), (0x0u));
  /* 11455be3 cmp dword ptr [0x11474bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455bea je 0x11455c1d */
  if (C.zf) goto L_11455c1d;
  /* 11455bec mov edx, dword ptr [0x11474bdc] */
  EDX = (r32((uint32_t)(0x11474bdc)));
  /* 11455bf2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11455bf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455bf7 je 0x11455c1d */
  if (C.zf) goto L_11455c1d;
  /* 11455bf9 cmp dword ptr [0x11474be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455c00 je 0x11455c16 */
  if (C.zf) goto L_11455c16;
  /* 11455c02 mov ecx, dword ptr [0x11474be0] */
  ECX = (r32((uint32_t)(0x11474be0)));
  /* 11455c08 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11455c0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11455c0d je 0x11455c16 */
  if (C.zf) goto L_11455c16;
  /* 11455c0f call 0x11455dc0 */
  push32(0x11455c14u); f_11455dc0();
  /* 11455c14 jmp 0x11455c1b */
  goto L_11455c1b;
L_11455c16:;
  /* 11455c16 call 0x114561b0 */
  push32(0x11455c1bu); f_114561b0();
L_11455c1b:;
  /* 11455c1b jmp 0x11455c3e */
  goto L_11455c3e;
L_11455c1d:;
  /* 11455c1d cmp dword ptr [0x11474be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455c24 je 0x11455c39 */
  if (C.zf) goto L_11455c39;
  /* 11455c26 mov eax, dword ptr [0x11474be0] */
  EAX = (r32((uint32_t)(0x11474be0)));
  /* 11455c2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11455c2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11455c30 je 0x11455c39 */
  if (C.zf) goto L_11455c39;
  /* 11455c32 call 0x11456350 */
  push32(0x11455c37u); f_11456350();
  /* 11455c37 jmp 0x11455c3e */
  goto L_11455c3e;
L_11455c39:;
  /* 11455c39 call 0x11456450 */
  push32(0x11455c3eu); f_11456450();
L_11455c3e:;
  /* 11455c3e cmp dword ptr [0x11474be4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474be4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455c45 jne 0x11455c4e */
  if (!C.zf) goto L_11455c4e;
  /* 11455c47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455c49 jmp 0x11455d2c */
  goto L_11455d2c;
L_11455c4e:;
  /* 11455c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455c51 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455c57 push edx */
  push32((uint32_t)(EDX));
  /* 11455c58 call 0x11456480 */
  push32(0x11455c5du); f_11456480();
  /* 11455c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455c60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11455c63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455c67 je 0x11455c7c */
  if (C.zf) goto L_11455c7c;
  /* 11455c69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455c6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11455c71 push eax */
  push32((uint32_t)(EAX));
  /* 11455c72 call dword ptr [0x1147730c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147730c))), 0x11455c78u);
  /* 11455c78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455c7a jne 0x11455c83 */
  if (!C.zf) goto L_11455c83;
L_11455c7c:;
  /* 11455c7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455c7e jmp 0x11455d2c */
  goto L_11455d2c;
L_11455c83:;
  /* 11455c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11455c85 mov ecx, dword ptr [0x11474bcc] */
  ECX = (r32((uint32_t)(0x11474bcc)));
  /* 11455c8b push ecx */
  push32((uint32_t)(ECX));
  /* 11455c8c call dword ptr [0x11477310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477310))), 0x11455c92u);
  /* 11455c92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455c94 jne 0x11455c9d */
  if (!C.zf) goto L_11455c9d;
  /* 11455c96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455c98 jmp 0x11455d2c */
  goto L_11455d2c;
L_11455c9d:;
  /* 11455c9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455ca1 je 0x11455cc8 */
  if (C.zf) goto L_11455cc8;
  /* 11455ca3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11455ca6 mov ax, word ptr [0x11474bcc] */
  AX = (r16((uint32_t)(0x11474bcc)));
  /* 11455cac mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11455caf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11455cb2 mov dx, word ptr [0x11474be8] */
  DX = (r16((uint32_t)(0x11474be8)));
  /* 11455cb9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11455cbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11455cc0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11455cc4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11455cc8:;
  /* 11455cc8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455ccc je 0x11455d27 */
  if (C.zf) goto L_11455d27;
  /* 11455cce push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11455cd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11455cd3 push edx */
  push32((uint32_t)(EDX));
  /* 11455cd4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11455cd9 mov eax, dword ptr [0x11474bcc] */
  EAX = (r32((uint32_t)(0x11474bcc)));
  /* 11455cde push eax */
  push32((uint32_t)(EAX));
  /* 11455cdf call dword ptr [0x11474bec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11474bec))), 0x11455ce5u);
  /* 11455ce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455ce7 jne 0x11455ced */
  if (!C.zf) goto L_11455ced;
  /* 11455ce9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455ceb jmp 0x11455d2c */
  goto L_11455d2c;
L_11455ced:;
  /* 11455ced push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11455cef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11455cf2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11455cf6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11455cfb mov edx, dword ptr [0x11474be8] */
  EDX = (r32((uint32_t)(0x11474be8)));
  /* 11455d01 push edx */
  push32((uint32_t)(EDX));
  /* 11455d02 call dword ptr [0x11474bec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11474bec))), 0x11455d08u);
  /* 11455d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455d0a jne 0x11455d10 */
  if (!C.zf) goto L_11455d10;
  /* 11455d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455d0e jmp 0x11455d2c */
  goto L_11455d2c;
L_11455d10:;
  /* 11455d10 push 0xa */
  push32((uint32_t)(0xau));
  /* 11455d12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11455d15 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455d1a push eax */
  push32((uint32_t)(EAX));
  /* 11455d1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455d1e push ecx */
  push32((uint32_t)(ECX));
  /* 11455d1f call 0x1144be50 */
  push32(0x11455d24u); f_1144be50();
  /* 11455d24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11455d27:;
  /* 11455d27 mov eax, 1 */
  EAX = (0x1u);
L_11455d2c:;
  /* 11455d2c mov esp, ebp */
  ESP = (EBP);
  /* 11455d2e pop ebp */
  EBP = (pop32());
  /* 11455d2f ret  */
  ESPCHK(0x11455b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d30 @ 0x11455d30 (130 bytes, 47 insns) */
void f_11455d30(void) {
  FTRACE(0x11455d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11455d31 mov ebp, esp */
  EBP = (ESP);
  /* 11455d33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11455d36 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11455d3d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11455d44:;
  /* 11455d44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11455d47 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455d4a jg 0x11455dae */
  if ((!C.zf&&C.sf==C.of)) goto L_11455dae;
  /* 11455d4c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455d50 je 0x11455dae */
  if (C.zf) goto L_11455dae;
  /* 11455d52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11455d55 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455d58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11455d59 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11455d5b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11455d5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11455d60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455d63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455d66 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11455d69 push eax */
  push32((uint32_t)(EAX));
  /* 11455d6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11455d6d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11455d6f push edx */
  push32((uint32_t)(EDX));
  /* 11455d70 call 0x114584f0 */
  push32(0x11455d75u); f_114584f0();
  /* 11455d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455d78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11455d7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455d7f jne 0x11455d92 */
  if (!C.zf) goto L_11455d92;
  /* 11455d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455d84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455d87 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11455d8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11455d8e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11455d90 jmp 0x11455dac */
  goto L_11455dac;
L_11455d92:;
  /* 11455d92 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455d96 jge 0x11455da3 */
  if ((C.sf==C.of)) goto L_11455da3;
  /* 11455d98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455d9b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11455d9e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11455da1 jmp 0x11455dac */
  goto L_11455dac;
L_11455da3:;
  /* 11455da3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455da6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455da9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11455dac:;
  /* 11455dac jmp 0x11455d44 */
  goto L_11455d44;
L_11455dae:;
  /* 11455dae mov esp, ebp */
  ESP = (EBP);
  /* 11455db0 pop ebp */
  EBP = (pop32());
  /* 11455db1 ret  */
  ESPCHK(0x11455d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015dc0 @ 0x11455dc0 (186 bytes, 50 insns) */
void f_11455dc0(void) {
  FTRACE(0x11455dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11455dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11455dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11455dc4 mov eax, dword ptr [0x11474bdc] */
  EAX = (r32((uint32_t)(0x11474bdc)));
  /* 11455dc9 push eax */
  push32((uint32_t)(EAX));
  /* 11455dca call 0x1144c140 */
  push32(0x11455dcfu); f_1144c140();
  /* 11455dcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455dd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11455dd4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455dd7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11455dda mov dword ptr [0x11474bd8], ecx */
  w32((uint32_t)(0x11474bd8), (ECX));
  /* 11455de0 mov edx, dword ptr [0x11474be0] */
  EDX = (r32((uint32_t)(0x11474be0)));
  /* 11455de6 push edx */
  push32((uint32_t)(EDX));
  /* 11455de7 call 0x1144c140 */
  push32(0x11455decu); f_1144c140();
  /* 11455dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455def xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11455df1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455df4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11455df7 mov dword ptr [0x11474bd0], ecx */
  w32((uint32_t)(0x11474bd0), (ECX));
  /* 11455dfd mov dword ptr [0x11474bcc], 0 */
  w32((uint32_t)(0x11474bcc), (0x0u));
  /* 11455e07 cmp dword ptr [0x11474bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455e0e je 0x11455e19 */
  if (C.zf) goto L_11455e19;
  /* 11455e10 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11455e17 jmp 0x11455e2b */
  goto L_11455e2b;
L_11455e19:;
  /* 11455e19 mov edx, dword ptr [0x11474bdc] */
  EDX = (r32((uint32_t)(0x11474bdc)));
  /* 11455e1f push edx */
  push32((uint32_t)(EDX));
  /* 11455e20 call 0x11456860 */
  push32(0x11455e25u); f_11456860();
  /* 11455e25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455e28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11455e2b:;
  /* 11455e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455e2e mov dword ptr [0x11474bd4], eax */
  w32((uint32_t)(0x11474bd4), (EAX));
  /* 11455e33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11455e35 push 0x11455e80 */
  push32((uint32_t)(0x11455e80u));
  /* 11455e3a call dword ptr [0x11477304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477304))), 0x11455e40u);
  /* 11455e40 mov ecx, dword ptr [0x11474be4] */
  ECX = (r32((uint32_t)(0x11474be4)));
  /* 11455e46 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11455e4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11455e4e je 0x11455e6c */
  if (C.zf) goto L_11455e6c;
  /* 11455e50 mov edx, dword ptr [0x11474be4] */
  EDX = (r32((uint32_t)(0x11474be4)));
  /* 11455e56 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11455e5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11455e5e je 0x11455e6c */
  if (C.zf) goto L_11455e6c;
  /* 11455e60 mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 11455e65 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11455e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455e6a jne 0x11455e76 */
  if (!C.zf) goto L_11455e76;
L_11455e6c:;
  /* 11455e6c mov dword ptr [0x11474be4], 0 */
  w32((uint32_t)(0x11474be4), (0x0u));
L_11455e76:;
  /* 11455e76 mov esp, ebp */
  ESP = (EBP);
  /* 11455e78 pop ebp */
  EBP = (pop32());
  /* 11455e79 ret  */
  ESPCHK(0x11455dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e80 @ 0x11455e80 (804 bytes, 220 insns) */
void f_11455e80(void) {
  FTRACE(0x11455e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11455e81 mov ebp, esp */
  EBP = (ESP);
  /* 11455e83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11455e86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455e89 push eax */
  push32((uint32_t)(EAX));
  /* 11455e8a call 0x114567e0 */
  push32(0x11455e8fu); f_114567e0();
  /* 11455e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455e92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11455e95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11455e97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11455e9a push ecx */
  push32((uint32_t)(ECX));
  /* 11455e9b mov edx, dword ptr [0x11474bd0] */
  EDX = (r32((uint32_t)(0x11474bd0)));
  /* 11455ea1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11455ea3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11455ea5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11455eab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455eb1 push edx */
  push32((uint32_t)(EDX));
  /* 11455eb2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11455eb5 push eax */
  push32((uint32_t)(EAX));
  /* 11455eb6 call dword ptr [0x11474bec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11474bec))), 0x11455ebcu);
  /* 11455ebc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455ebe jne 0x11455ed4 */
  if (!C.zf) goto L_11455ed4;
  /* 11455ec0 mov dword ptr [0x11474be4], 0 */
  w32((uint32_t)(0x11474be4), (0x0u));
  /* 11455eca mov eax, 1 */
  EAX = (0x1u);
  /* 11455ecf jmp 0x1145619e */
  goto L_1145619e;
L_11455ed4:;
  /* 11455ed4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11455ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 11455ed8 mov edx, dword ptr [0x11474be0] */
  EDX = (r32((uint32_t)(0x11474be0)));
  /* 11455ede push edx */
  push32((uint32_t)(EDX));
  /* 11455edf call 0x114584f0 */
  push32(0x11455ee4u); f_114584f0();
  /* 11455ee4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455ee7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455ee9 jne 0x1145600f */
  if (!C.zf) goto L_1145600f;
  /* 11455eef push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11455ef1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11455ef4 push eax */
  push32((uint32_t)(EAX));
  /* 11455ef5 mov ecx, dword ptr [0x11474bd8] */
  ECX = (r32((uint32_t)(0x11474bd8)));
  /* 11455efb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11455efd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11455eff and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11455f05 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455f0b push ecx */
  push32((uint32_t)(ECX));
  /* 11455f0c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11455f0f push edx */
  push32((uint32_t)(EDX));
  /* 11455f10 call dword ptr [0x11474bec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11474bec))), 0x11455f16u);
  /* 11455f16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455f18 jne 0x11455f2e */
  if (!C.zf) goto L_11455f2e;
  /* 11455f1a mov dword ptr [0x11474be4], 0 */
  w32((uint32_t)(0x11474be4), (0x0u));
  /* 11455f24 mov eax, 1 */
  EAX = (0x1u);
  /* 11455f29 jmp 0x1145619e */
  goto L_1145619e;
L_11455f2e:;
  /* 11455f2e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11455f31 push eax */
  push32((uint32_t)(EAX));
  /* 11455f32 mov ecx, dword ptr [0x11474bdc] */
  ECX = (r32((uint32_t)(0x11474bdc)));
  /* 11455f38 push ecx */
  push32((uint32_t)(ECX));
  /* 11455f39 call 0x114584f0 */
  push32(0x11455f3eu); f_114584f0();
  /* 11455f3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455f41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455f43 jne 0x11455f70 */
  if (!C.zf) goto L_11455f70;
  /* 11455f45 mov edx, dword ptr [0x11474be4] */
  EDX = (r32((uint32_t)(0x11474be4)));
  /* 11455f4b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11455f51 mov dword ptr [0x11474be4], edx */
  w32((uint32_t)(0x11474be4), (EDX));
  /* 11455f57 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11455f5a mov dword ptr [0x11474be8], eax */
  w32((uint32_t)(0x11474be8), (EAX));
  /* 11455f5f mov ecx, dword ptr [0x11474be8] */
  ECX = (r32((uint32_t)(0x11474be8)));
  /* 11455f65 mov dword ptr [0x11474bcc], ecx */
  w32((uint32_t)(0x11474bcc), (ECX));
  /* 11455f6b jmp 0x1145600f */
  goto L_1145600f;
L_11455f70:;
  /* 11455f70 mov edx, dword ptr [0x11474be4] */
  EDX = (r32((uint32_t)(0x11474be4)));
  /* 11455f76 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11455f79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11455f7b jne 0x1145600f */
  if (!C.zf) goto L_1145600f;
  /* 11455f81 cmp dword ptr [0x11474bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455f88 je 0x11455fdd */
  if (C.zf) goto L_11455fdd;
  /* 11455f8a mov eax, dword ptr [0x11474bd4] */
  EAX = (r32((uint32_t)(0x11474bd4)));
  /* 11455f8f push eax */
  push32((uint32_t)(EAX));
  /* 11455f90 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11455f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11455f94 mov edx, dword ptr [0x11474bdc] */
  EDX = (r32((uint32_t)(0x11474bdc)));
  /* 11455f9a push edx */
  push32((uint32_t)(EDX));
  /* 11455f9b call 0x114585c0 */
  push32(0x11455fa0u); f_114585c0();
  /* 11455fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455fa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455fa5 jne 0x11455fdd */
  if (!C.zf) goto L_11455fdd;
  /* 11455fa7 mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 11455fac or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11455fae mov dword ptr [0x11474be4], eax */
  w32((uint32_t)(0x11474be4), (EAX));
  /* 11455fb3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11455fb6 mov dword ptr [0x11474be8], ecx */
  w32((uint32_t)(0x11474be8), (ECX));
  /* 11455fbc mov edx, dword ptr [0x11474bdc] */
  EDX = (r32((uint32_t)(0x11474bdc)));
  /* 11455fc2 push edx */
  push32((uint32_t)(EDX));
  /* 11455fc3 call 0x1144c140 */
  push32(0x11455fc8u); f_1144c140();
  /* 11455fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455fcb cmp eax, dword ptr [0x11474bd4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11474bd4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455fd1 jne 0x11455fdb */
  if (!C.zf) goto L_11455fdb;
  /* 11455fd3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11455fd6 mov dword ptr [0x11474bcc], eax */
  w32((uint32_t)(0x11474bcc), (EAX));
L_11455fdb:;
  /* 11455fdb jmp 0x1145600f */
  goto L_1145600f;
L_11455fdd:;
  /* 11455fdd mov ecx, dword ptr [0x11474be4] */
  ECX = (r32((uint32_t)(0x11474be4)));
  /* 11455fe3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11455fe6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11455fe8 jne 0x1145600f */
  if (!C.zf) goto L_1145600f;
  /* 11455fea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11455fed push edx */
  push32((uint32_t)(EDX));
  /* 11455fee call 0x11456520 */
  push32(0x11455ff3u); f_11456520();
  /* 11455ff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455ff8 je 0x1145600f */
  if (C.zf) goto L_1145600f;
  /* 11455ffa mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 11455fff or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11456001 mov dword ptr [0x11474be4], eax */
  w32((uint32_t)(0x11474be4), (EAX));
  /* 11456006 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11456009 mov dword ptr [0x11474be8], ecx */
  w32((uint32_t)(0x11474be8), (ECX));
L_1145600f:;
  /* 1145600f mov edx, dword ptr [0x11474be4] */
  EDX = (r32((uint32_t)(0x11474be4)));
  /* 11456015 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1145601b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456021 je 0x11456191 */
  if (C.zf) goto L_11456191;
  /* 11456027 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11456029 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1145602c push eax */
  push32((uint32_t)(EAX));
  /* 1145602d mov ecx, dword ptr [0x11474bd8] */
  ECX = (r32((uint32_t)(0x11474bd8)));
  /* 11456033 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11456035 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456037 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1145603d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456043 push ecx */
  push32((uint32_t)(ECX));
  /* 11456044 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11456047 push edx */
  push32((uint32_t)(EDX));
  /* 11456048 call dword ptr [0x11474bec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11474bec))), 0x1145604eu);
  /* 1145604e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11456050 jne 0x11456066 */
  if (!C.zf) goto L_11456066;
  /* 11456052 mov dword ptr [0x11474be4], 0 */
  w32((uint32_t)(0x11474be4), (0x0u));
  /* 1145605c mov eax, 1 */
  EAX = (0x1u);
  /* 11456061 jmp 0x1145619e */
  goto L_1145619e;
L_11456066:;
  /* 11456066 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11456069 push eax */
  push32((uint32_t)(EAX));
  /* 1145606a mov ecx, dword ptr [0x11474bdc] */
  ECX = (r32((uint32_t)(0x11474bdc)));
  /* 11456070 push ecx */
  push32((uint32_t)(ECX));
  /* 11456071 call 0x114584f0 */
  push32(0x11456076u); f_114584f0();
  /* 11456076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145607b jne 0x11456130 */
  if (!C.zf) goto L_11456130;
  /* 11456081 mov edx, dword ptr [0x11474be4] */
  EDX = (r32((uint32_t)(0x11474be4)));
  /* 11456087 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1145608a mov dword ptr [0x11474be4], edx */
  w32((uint32_t)(0x11474be4), (EDX));
  /* 11456090 cmp dword ptr [0x11474bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456097 je 0x114560ba */
  if (C.zf) goto L_114560ba;
  /* 11456099 mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 1145609e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 114560a1 mov dword ptr [0x11474be4], eax */
  w32((uint32_t)(0x11474be4), (EAX));
  /* 114560a6 cmp dword ptr [0x11474bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114560ad jne 0x114560b8 */
  if (!C.zf) goto L_114560b8;
  /* 114560af mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114560b2 mov dword ptr [0x11474bcc], ecx */
  w32((uint32_t)(0x11474bcc), (ECX));
L_114560b8:;
  /* 114560b8 jmp 0x1145612e */
  goto L_1145612e;
L_114560ba:;
  /* 114560ba cmp dword ptr [0x11474bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114560c1 je 0x1145610f */
  if (C.zf) goto L_1145610f;
  /* 114560c3 mov edx, dword ptr [0x11474bdc] */
  EDX = (r32((uint32_t)(0x11474bdc)));
  /* 114560c9 push edx */
  push32((uint32_t)(EDX));
  /* 114560ca call 0x1144c140 */
  push32(0x114560cfu); f_1144c140();
  /* 114560cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114560d2 cmp eax, dword ptr [0x11474bd4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11474bd4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114560d8 jne 0x1145610f */
  if (!C.zf) goto L_1145610f;
  /* 114560da push 1 */
  push32((uint32_t)(0x1u));
  /* 114560dc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114560df push eax */
  push32((uint32_t)(EAX));
  /* 114560e0 call 0x11456570 */
  push32(0x114560e5u); f_11456570();
  /* 114560e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114560e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114560ea je 0x1145610d */
  if (C.zf) goto L_1145610d;
  /* 114560ec mov ecx, dword ptr [0x11474be4] */
  ECX = (r32((uint32_t)(0x11474be4)));
  /* 114560f2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114560f5 mov dword ptr [0x11474be4], ecx */
  w32((uint32_t)(0x11474be4), (ECX));
  /* 114560fb cmp dword ptr [0x11474bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456102 jne 0x1145610d */
  if (!C.zf) goto L_1145610d;
  /* 11456104 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11456107 mov dword ptr [0x11474bcc], edx */
  w32((uint32_t)(0x11474bcc), (EDX));
L_1145610d:;
  /* 1145610d jmp 0x1145612e */
  goto L_1145612e;
L_1145610f:;
  /* 1145610f mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 11456114 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11456117 mov dword ptr [0x11474be4], eax */
  w32((uint32_t)(0x11474be4), (EAX));
  /* 1145611c cmp dword ptr [0x11474bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456123 jne 0x1145612e */
  if (!C.zf) goto L_1145612e;
  /* 11456125 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11456128 mov dword ptr [0x11474bcc], ecx */
  w32((uint32_t)(0x11474bcc), (ECX));
L_1145612e:;
  /* 1145612e jmp 0x11456191 */
  goto L_11456191;
L_11456130:;
  /* 11456130 cmp dword ptr [0x11474bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456137 jne 0x11456191 */
  if (!C.zf) goto L_11456191;
  /* 11456139 cmp dword ptr [0x11474bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456140 je 0x11456191 */
  if (C.zf) goto L_11456191;
  /* 11456142 mov edx, dword ptr [0x11474bd4] */
  EDX = (r32((uint32_t)(0x11474bd4)));
  /* 11456148 push edx */
  push32((uint32_t)(EDX));
  /* 11456149 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1145614c push eax */
  push32((uint32_t)(EAX));
  /* 1145614d mov ecx, dword ptr [0x11474bdc] */
  ECX = (r32((uint32_t)(0x11474bdc)));
  /* 11456153 push ecx */
  push32((uint32_t)(ECX));
  /* 11456154 call 0x114585c0 */
  push32(0x11456159u); f_114585c0();
  /* 11456159 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145615c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145615e jne 0x11456191 */
  if (!C.zf) goto L_11456191;
  /* 11456160 push 0 */
  push32((uint32_t)(0x0u));
  /* 11456162 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11456165 push edx */
  push32((uint32_t)(EDX));
  /* 11456166 call 0x11456570 */
  push32(0x1145616bu); f_11456570();
  /* 1145616b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145616e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11456170 je 0x11456191 */
  if (C.zf) goto L_11456191;
  /* 11456172 mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 11456177 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1145617a mov dword ptr [0x11474be4], eax */
  w32((uint32_t)(0x11474be4), (EAX));
  /* 1145617f cmp dword ptr [0x11474bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456186 jne 0x11456191 */
  if (!C.zf) goto L_11456191;
  /* 11456188 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1145618b mov dword ptr [0x11474bcc], ecx */
  w32((uint32_t)(0x11474bcc), (ECX));
L_11456191:;
  /* 11456191 mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 11456196 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11456199 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1145619b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145619d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1145619e:;
  /* 1145619e mov esp, ebp */
  ESP = (EBP);
  /* 114561a0 pop ebp */
  EBP = (pop32());
  /* 114561a1 ret 4 */
  ESPCHK(0x11455e80u, _esp0);
  ESP += 8; return;
}

/* FUN_100161b0 @ 0x114561b0 (116 bytes, 33 insns) */
void f_114561b0(void) {
  FTRACE(0x114561b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114561b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114561b1 mov ebp, esp */
  EBP = (ESP);
  /* 114561b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114561b4 mov eax, dword ptr [0x11474bdc] */
  EAX = (r32((uint32_t)(0x11474bdc)));
  /* 114561b9 push eax */
  push32((uint32_t)(EAX));
  /* 114561ba call 0x1144c140 */
  push32(0x114561bfu); f_1144c140();
  /* 114561bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114561c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114561c4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114561c7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 114561ca mov dword ptr [0x11474bd8], ecx */
  w32((uint32_t)(0x11474bd8), (ECX));
  /* 114561d0 cmp dword ptr [0x11474bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114561d7 je 0x114561e2 */
  if (C.zf) goto L_114561e2;
  /* 114561d9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 114561e0 jmp 0x114561f4 */
  goto L_114561f4;
L_114561e2:;
  /* 114561e2 mov edx, dword ptr [0x11474bdc] */
  EDX = (r32((uint32_t)(0x11474bdc)));
  /* 114561e8 push edx */
  push32((uint32_t)(EDX));
  /* 114561e9 call 0x11456860 */
  push32(0x114561eeu); f_11456860();
  /* 114561ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114561f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114561f4:;
  /* 114561f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114561f7 mov dword ptr [0x11474bd4], eax */
  w32((uint32_t)(0x11474bd4), (EAX));
  /* 114561fc push 1 */
  push32((uint32_t)(0x1u));
  /* 114561fe push 0x11456230 */
  push32((uint32_t)(0x11456230u));
  /* 11456203 call dword ptr [0x11477304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477304))), 0x11456209u);
  /* 11456209 mov ecx, dword ptr [0x11474be4] */
  ECX = (r32((uint32_t)(0x11474be4)));
  /* 1145620f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11456212 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11456214 jne 0x11456220 */
  if (!C.zf) goto L_11456220;
  /* 11456216 mov dword ptr [0x11474be4], 0 */
  w32((uint32_t)(0x11474be4), (0x0u));
L_11456220:;
  /* 11456220 mov esp, ebp */
  ESP = (EBP);
  /* 11456222 pop ebp */
  EBP = (pop32());
  /* 11456223 ret  */
  ESPCHK(0x114561b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016230 @ 0x11456230 (287 bytes, 86 insns) */
void f_11456230(void) {
  FTRACE(0x11456230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456230 push ebp */
  push32((uint32_t)(EBP));
  /* 11456231 mov ebp, esp */
  EBP = (ESP);
  /* 11456233 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456239 push eax */
  push32((uint32_t)(EAX));
  /* 1145623a call 0x114567e0 */
  push32(0x1145623fu); f_114567e0();
  /* 1145623f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456242 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11456245 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11456247 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1145624a push ecx */
  push32((uint32_t)(ECX));
  /* 1145624b mov edx, dword ptr [0x11474bd8] */
  EDX = (r32((uint32_t)(0x11474bd8)));
  /* 11456251 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11456253 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456255 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1145625b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456261 push edx */
  push32((uint32_t)(EDX));
  /* 11456262 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11456265 push eax */
  push32((uint32_t)(EAX));
  /* 11456266 call dword ptr [0x11474bec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11474bec))), 0x1145626cu);
  /* 1145626c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145626e jne 0x11456284 */
  if (!C.zf) goto L_11456284;
  /* 11456270 mov dword ptr [0x11474be4], 0 */
  w32((uint32_t)(0x11474be4), (0x0u));
  /* 1145627a mov eax, 1 */
  EAX = (0x1u);
  /* 1145627f jmp 0x11456349 */
  goto L_11456349;
L_11456284:;
  /* 11456284 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11456287 push ecx */
  push32((uint32_t)(ECX));
  /* 11456288 mov edx, dword ptr [0x11474bdc] */
  EDX = (r32((uint32_t)(0x11474bdc)));
  /* 1145628e push edx */
  push32((uint32_t)(EDX));
  /* 1145628f call 0x114584f0 */
  push32(0x11456294u); f_114584f0();
  /* 11456294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456297 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11456299 jne 0x114562d9 */
  if (!C.zf) goto L_114562d9;
  /* 1145629b cmp dword ptr [0x11474bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114562a2 jne 0x114562b6 */
  if (!C.zf) goto L_114562b6;
  /* 114562a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 114562a6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114562a9 push eax */
  push32((uint32_t)(EAX));
  /* 114562aa call 0x11456570 */
  push32(0x114562afu); f_11456570();
  /* 114562af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114562b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114562b4 je 0x114562d7 */
  if (C.zf) goto L_114562d7;
L_114562b6:;
  /* 114562b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114562b9 mov dword ptr [0x11474be8], ecx */
  w32((uint32_t)(0x11474be8), (ECX));
  /* 114562bf mov edx, dword ptr [0x11474be8] */
  EDX = (r32((uint32_t)(0x11474be8)));
  /* 114562c5 mov dword ptr [0x11474bcc], edx */
  w32((uint32_t)(0x11474bcc), (EDX));
  /* 114562cb mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 114562d0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 114562d2 mov dword ptr [0x11474be4], eax */
  w32((uint32_t)(0x11474be4), (EAX));
L_114562d7:;
  /* 114562d7 jmp 0x1145633c */
  goto L_1145633c;
L_114562d9:;
  /* 114562d9 cmp dword ptr [0x11474bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114562e0 jne 0x1145633c */
  if (!C.zf) goto L_1145633c;
  /* 114562e2 cmp dword ptr [0x11474bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114562e9 je 0x1145633c */
  if (C.zf) goto L_1145633c;
  /* 114562eb mov ecx, dword ptr [0x11474bd4] */
  ECX = (r32((uint32_t)(0x11474bd4)));
  /* 114562f1 push ecx */
  push32((uint32_t)(ECX));
  /* 114562f2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 114562f5 push edx */
  push32((uint32_t)(EDX));
  /* 114562f6 mov eax, dword ptr [0x11474bdc] */
  EAX = (r32((uint32_t)(0x11474bdc)));
  /* 114562fb push eax */
  push32((uint32_t)(EAX));
  /* 114562fc call 0x114585c0 */
  push32(0x11456301u); f_114585c0();
  /* 11456301 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11456306 jne 0x1145633c */
  if (!C.zf) goto L_1145633c;
  /* 11456308 push 0 */
  push32((uint32_t)(0x0u));
  /* 1145630a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1145630d push ecx */
  push32((uint32_t)(ECX));
  /* 1145630e call 0x11456570 */
  push32(0x11456313u); f_11456570();
  /* 11456313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11456318 je 0x1145633c */
  if (C.zf) goto L_1145633c;
  /* 1145631a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1145631d mov dword ptr [0x11474be8], edx */
  w32((uint32_t)(0x11474be8), (EDX));
  /* 11456323 mov eax, dword ptr [0x11474be8] */
  EAX = (r32((uint32_t)(0x11474be8)));
  /* 11456328 mov dword ptr [0x11474bcc], eax */
  w32((uint32_t)(0x11474bcc), (EAX));
  /* 1145632d mov ecx, dword ptr [0x11474be4] */
  ECX = (r32((uint32_t)(0x11474be4)));
  /* 11456333 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11456336 mov dword ptr [0x11474be4], ecx */
  w32((uint32_t)(0x11474be4), (ECX));
L_1145633c:;
  /* 1145633c mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 11456341 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11456344 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11456346 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456348 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11456349:;
  /* 11456349 mov esp, ebp */
  ESP = (EBP);
  /* 1145634b pop ebp */
  EBP = (pop32());
  /* 1145634c ret 4 */
  ESPCHK(0x11456230u, _esp0);
  ESP += 8; return;
}

/* FUN_10016350 @ 0x11456350 (69 bytes, 20 insns) */
void f_11456350(void) {
  FTRACE(0x11456350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456350 push ebp */
  push32((uint32_t)(EBP));
  /* 11456351 mov ebp, esp */
  EBP = (ESP);
  /* 11456353 mov eax, dword ptr [0x11474be0] */
  EAX = (r32((uint32_t)(0x11474be0)));
  /* 11456358 push eax */
  push32((uint32_t)(EAX));
  /* 11456359 call 0x1144c140 */
  push32(0x1145635eu); f_1144c140();
  /* 1145635e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456361 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11456363 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456366 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11456369 mov dword ptr [0x11474bd0], ecx */
  w32((uint32_t)(0x11474bd0), (ECX));
  /* 1145636f push 1 */
  push32((uint32_t)(0x1u));
  /* 11456371 push 0x114563a0 */
  push32((uint32_t)(0x114563a0u));
  /* 11456376 call dword ptr [0x11477304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477304))), 0x1145637cu);
  /* 1145637c mov edx, dword ptr [0x11474be4] */
  EDX = (r32((uint32_t)(0x11474be4)));
  /* 11456382 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11456385 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11456387 jne 0x11456393 */
  if (!C.zf) goto L_11456393;
  /* 11456389 mov dword ptr [0x11474be4], 0 */
  w32((uint32_t)(0x11474be4), (0x0u));
L_11456393:;
  /* 11456393 pop ebp */
  EBP = (pop32());
  /* 11456394 ret  */
  ESPCHK(0x11456350u, _esp0);
  ESP += 4; return;
}

/* FUN_100163a0 @ 0x114563a0 (172 bytes, 54 insns) */
void f_114563a0(void) {
  FTRACE(0x114563a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114563a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114563a1 mov ebp, esp */
  EBP = (ESP);
  /* 114563a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114563a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114563a9 push eax */
  push32((uint32_t)(EAX));
  /* 114563aa call 0x114567e0 */
  push32(0x114563afu); f_114567e0();
  /* 114563af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114563b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 114563b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 114563b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114563ba push ecx */
  push32((uint32_t)(ECX));
  /* 114563bb mov edx, dword ptr [0x11474bd0] */
  EDX = (r32((uint32_t)(0x11474bd0)));
  /* 114563c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114563c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114563c5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 114563cb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114563d1 push edx */
  push32((uint32_t)(EDX));
  /* 114563d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114563d5 push eax */
  push32((uint32_t)(EAX));
  /* 114563d6 call dword ptr [0x11474bec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11474bec))), 0x114563dcu);
  /* 114563dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114563de jne 0x114563f1 */
  if (!C.zf) goto L_114563f1;
  /* 114563e0 mov dword ptr [0x11474be4], 0 */
  w32((uint32_t)(0x11474be4), (0x0u));
  /* 114563ea mov eax, 1 */
  EAX = (0x1u);
  /* 114563ef jmp 0x11456446 */
  goto L_11456446;
L_114563f1:;
  /* 114563f1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114563f4 push ecx */
  push32((uint32_t)(ECX));
  /* 114563f5 mov edx, dword ptr [0x11474be0] */
  EDX = (r32((uint32_t)(0x11474be0)));
  /* 114563fb push edx */
  push32((uint32_t)(EDX));
  /* 114563fc call 0x114584f0 */
  push32(0x11456401u); f_114584f0();
  /* 11456401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11456406 jne 0x11456439 */
  if (!C.zf) goto L_11456439;
  /* 11456408 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1145640b push eax */
  push32((uint32_t)(EAX));
  /* 1145640c call 0x11456520 */
  push32(0x11456411u); f_11456520();
  /* 11456411 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11456416 je 0x11456439 */
  if (C.zf) goto L_11456439;
  /* 11456418 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1145641b mov dword ptr [0x11474be8], ecx */
  w32((uint32_t)(0x11474be8), (ECX));
  /* 11456421 mov edx, dword ptr [0x11474be8] */
  EDX = (r32((uint32_t)(0x11474be8)));
  /* 11456427 mov dword ptr [0x11474bcc], edx */
  w32((uint32_t)(0x11474bcc), (EDX));
  /* 1145642d mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 11456432 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11456434 mov dword ptr [0x11474be4], eax */
  w32((uint32_t)(0x11474be4), (EAX));
L_11456439:;
  /* 11456439 mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 1145643e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11456441 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11456443 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456445 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11456446:;
  /* 11456446 mov esp, ebp */
  ESP = (EBP);
  /* 11456448 pop ebp */
  EBP = (pop32());
  /* 11456449 ret 4 */
  ESPCHK(0x114563a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10016450 @ 0x11456450 (43 bytes, 11 insns) */
void f_11456450(void) {
  FTRACE(0x11456450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456450 push ebp */
  push32((uint32_t)(EBP));
  /* 11456451 mov ebp, esp */
  EBP = (ESP);
  /* 11456453 mov eax, dword ptr [0x11474be4] */
  EAX = (r32((uint32_t)(0x11474be4)));
  /* 11456458 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1145645d mov dword ptr [0x11474be4], eax */
  w32((uint32_t)(0x11474be4), (EAX));
  /* 11456462 call dword ptr [0x11477300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477300))), 0x11456468u);
  /* 11456468 mov dword ptr [0x11474be8], eax */
  w32((uint32_t)(0x11474be8), (EAX));
  /* 1145646d mov ecx, dword ptr [0x11474be8] */
  ECX = (r32((uint32_t)(0x11474be8)));
  /* 11456473 mov dword ptr [0x11474bcc], ecx */
  w32((uint32_t)(0x11474bcc), (ECX));
  /* 11456479 pop ebp */
  EBP = (pop32());
  /* 1145647a ret  */
  ESPCHK(0x11456450u, _esp0);
  ESP += 4; return;
}

/* FUN_10016480 @ 0x11456480 (155 bytes, 57 insns) */
void f_11456480(void) {
  FTRACE(0x11456480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456480 push ebp */
  push32((uint32_t)(EBP));
  /* 11456481 mov ebp, esp */
  EBP = (ESP);
  /* 11456483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456486 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145648a je 0x114564ab */
  if (C.zf) goto L_114564ab;
  /* 1145648c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145648f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11456492 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11456494 je 0x114564ab */
  if (C.zf) goto L_114564ab;
  /* 11456496 push 0x1147113c */
  push32((uint32_t)(0x1147113cu));
  /* 1145649b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145649e push edx */
  push32((uint32_t)(EDX));
  /* 1145649f call 0x1144fda0 */
  push32(0x114564a4u); f_1144fda0();
  /* 114564a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114564a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114564a9 jne 0x114564d3 */
  if (!C.zf) goto L_114564d3;
L_114564ab:;
  /* 114564ab push 8 */
  push32((uint32_t)(0x8u));
  /* 114564ad lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 114564b0 push eax */
  push32((uint32_t)(EAX));
  /* 114564b1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 114564b6 mov ecx, dword ptr [0x11474be8] */
  ECX = (r32((uint32_t)(0x11474be8)));
  /* 114564bc push ecx */
  push32((uint32_t)(ECX));
  /* 114564bd call dword ptr [0x11474bec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11474bec))), 0x114564c3u);
  /* 114564c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114564c5 jne 0x114564cb */
  if (!C.zf) goto L_114564cb;
  /* 114564c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114564c9 jmp 0x11456517 */
  goto L_11456517;
L_114564cb:;
  /* 114564cb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 114564ce mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114564d1 jmp 0x1145650b */
  goto L_1145650b;
L_114564d3:;
  /* 114564d3 push 0x11471138 */
  push32((uint32_t)(0x11471138u));
  /* 114564d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114564db push eax */
  push32((uint32_t)(EAX));
  /* 114564dc call 0x1144fda0 */
  push32(0x114564e1u); f_1144fda0();
  /* 114564e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114564e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114564e6 jne 0x1145650b */
  if (!C.zf) goto L_1145650b;
  /* 114564e8 push 8 */
  push32((uint32_t)(0x8u));
  /* 114564ea lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 114564ed push ecx */
  push32((uint32_t)(ECX));
  /* 114564ee push 0xb */
  push32((uint32_t)(0xbu));
  /* 114564f0 mov edx, dword ptr [0x11474be8] */
  EDX = (r32((uint32_t)(0x11474be8)));
  /* 114564f6 push edx */
  push32((uint32_t)(EDX));
  /* 114564f7 call dword ptr [0x11474bec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11474bec))), 0x114564fdu);
  /* 114564fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114564ff jne 0x11456505 */
  if (!C.zf) goto L_11456505;
  /* 11456501 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11456503 jmp 0x11456517 */
  goto L_11456517;
L_11456505:;
  /* 11456505 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11456508 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1145650b:;
  /* 1145650b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145650e push ecx */
  push32((uint32_t)(ECX));
  /* 1145650f call 0x1144fb50 */
  push32(0x11456514u); f_1144fb50();
  /* 11456514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11456517:;
  /* 11456517 mov esp, ebp */
  ESP = (EBP);
  /* 11456519 pop ebp */
  EBP = (pop32());
  /* 1145651a ret  */
  ESPCHK(0x11456480u, _esp0);
  ESP += 4; return;
}

/* FUN_10016520 @ 0x11456520 (79 bytes, 26 insns) */
void f_11456520(void) {
  FTRACE(0x11456520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456520 push ebp */
  push32((uint32_t)(EBP));
  /* 11456521 mov ebp, esp */
  EBP = (ESP);
  /* 11456523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456526 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1145652a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1145652e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11456535 jmp 0x11456540 */
  goto L_11456540;
L_11456537:;
  /* 11456537 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145653a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145653d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11456540:;
  /* 11456540 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456544 jae 0x11456566 */
  if (!C.cf) goto L_11456566;
  /* 11456546 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11456549 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1145654f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11456552 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11456554 mov cx, word ptr [eax*2 + 0x11473ae4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11473ae4)));
  /* 1145655c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145655e jne 0x11456564 */
  if (!C.zf) goto L_11456564;
  /* 11456560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11456562 jmp 0x1145656b */
  goto L_1145656b;
L_11456564:;
  /* 11456564 jmp 0x11456537 */
  goto L_11456537;
L_11456566:;
  /* 11456566 mov eax, 1 */
  EAX = (0x1u);
L_1145656b:;
  /* 1145656b mov esp, ebp */
  ESP = (EBP);
  /* 1145656d pop ebp */
  EBP = (pop32());
  /* 1145656e ret  */
  ESPCHK(0x11456520u, _esp0);
  ESP += 4; return;
}

/* FUN_10016570 @ 0x11456570 (135 bytes, 48 insns) */
void f_11456570(void) {
  FTRACE(0x11456570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456570 push ebp */
  push32((uint32_t)(EBP));
  /* 11456571 mov ebp, esp */
  EBP = (ESP);
  /* 11456573 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456576 push esi */
  push32((uint32_t)(ESI));
  /* 11456577 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145657a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1145657f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11456584 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11456589 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1145658c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11456591 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11456594 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11456596 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11456599 push ecx */
  push32((uint32_t)(ECX));
  /* 1145659a push 1 */
  push32((uint32_t)(0x1u));
  /* 1145659c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145659f push edx */
  push32((uint32_t)(EDX));
  /* 114565a0 call dword ptr [0x11474bec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11474bec))), 0x114565a6u);
  /* 114565a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114565a8 jne 0x114565ae */
  if (!C.zf) goto L_114565ae;
  /* 114565aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114565ac jmp 0x114565f2 */
  goto L_114565f2;
L_114565ae:;
  /* 114565ae lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 114565b1 push eax */
  push32((uint32_t)(EAX));
  /* 114565b2 call 0x114567e0 */
  push32(0x114565b7u); f_114567e0();
  /* 114565b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114565ba cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114565bd je 0x114565ed */
  if (C.zf) goto L_114565ed;
  /* 114565bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114565c3 je 0x114565ed */
  if (C.zf) goto L_114565ed;
  /* 114565c5 mov ecx, dword ptr [0x11474bdc] */
  ECX = (r32((uint32_t)(0x11474bdc)));
  /* 114565cb push ecx */
  push32((uint32_t)(ECX));
  /* 114565cc call 0x11456860 */
  push32(0x114565d1u); f_11456860();
  /* 114565d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114565d4 mov esi, eax */
  ESI = (EAX);
  /* 114565d6 mov edx, dword ptr [0x11474bdc] */
  EDX = (r32((uint32_t)(0x11474bdc)));
  /* 114565dc push edx */
  push32((uint32_t)(EDX));
  /* 114565dd call 0x1144c140 */
  push32(0x114565e2u); f_1144c140();
  /* 114565e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114565e5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114565e7 jne 0x114565ed */
  if (!C.zf) goto L_114565ed;
  /* 114565e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114565eb jmp 0x114565f2 */
  goto L_114565f2;
L_114565ed:;
  /* 114565ed mov eax, 1 */
  EAX = (0x1u);
L_114565f2:;
  /* 114565f2 pop esi */
  ESI = (pop32());
  /* 114565f3 mov esp, ebp */
  ESP = (EBP);
  /* 114565f5 pop ebp */
  EBP = (pop32());
  /* 114565f6 ret  */
  ESPCHK(0x11456570u, _esp0);
  ESP += 4; return;
}

/* FUN_10016600 @ 0x11456600 (77 bytes, 18 insns) */
void f_11456600(void) {
  FTRACE(0x11456600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456600 push ebp */
  push32((uint32_t)(EBP));
  /* 11456601 mov ebp, esp */
  EBP = (ESP);
  /* 11456603 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456609 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11456613 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11456619 push eax */
  push32((uint32_t)(EAX));
  /* 1145661a call dword ptr [0x11477308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477308))), 0x11456620u);
  /* 11456620 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11456622 je 0x11456639 */
  if (C.zf) goto L_11456639;
  /* 11456624 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145662b jne 0x11456639 */
  if (!C.zf) goto L_11456639;
  /* 1145662d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11456637 jmp 0x11456643 */
  goto L_11456643;
L_11456639:;
  /* 11456639 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11456643:;
  /* 11456643 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11456649 mov esp, ebp */
  ESP = (EBP);
  /* 1145664b pop ebp */
  EBP = (pop32());
  /* 1145664c ret  */
  ESPCHK(0x11456600u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11456650 (388 bytes, 118 insns) */
void f_11456650(void) {
  FTRACE(0x11456650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456650 push ebp */
  push32((uint32_t)(EBP));
  /* 11456651 mov ebp, esp */
  EBP = (ESP);
  /* 11456653 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456656 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1145665d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11456664 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1145666b:;
  /* 1145666b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1145666e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456671 jg 0x114567b8 */
  if ((!C.zf&&C.sf==C.of)) goto L_114567b8;
  /* 11456677 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1145667a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145667d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1145667e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456680 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11456682 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11456685 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456688 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1145668b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145668e cmp edx, dword ptr [ecx + 0x11473640] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11473640))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456694 jne 0x1145678e */
  if (!C.zf) goto L_1145678e;
  /* 1145669a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145669d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114566a0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114566a4 ja 0x114566c7 */
  if ((!C.cf&&!C.zf)) goto L_114566c7;
  /* 114566a6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114566aa je 0x11456739 */
  if (C.zf) goto L_11456739;
  /* 114566b0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114566b4 je 0x114566e4 */
  if (C.zf) goto L_114566e4;
  /* 114566b6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114566ba je 0x11456706 */
  if (C.zf) goto L_11456706;
  /* 114566bc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114566c0 je 0x11456728 */
  if (C.zf) goto L_11456728;
  /* 114566c2 jmp 0x11456758 */
  goto L_11456758;
L_114566c7:;
  /* 114566c7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114566ce je 0x114566f5 */
  if (C.zf) goto L_114566f5;
  /* 114566d0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114566d7 je 0x11456717 */
  if (C.zf) goto L_11456717;
  /* 114566d9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114566e0 je 0x1145674a */
  if (C.zf) goto L_1145674a;
  /* 114566e2 jmp 0x11456758 */
  goto L_11456758;
L_114566e4:;
  /* 114566e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114566e7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114566ea add ecx, 0x11473644 */
  { uint32_t _a=(ECX),_b=(0x11473644u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114566f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114566f3 jmp 0x11456758 */
  goto L_11456758;
L_114566f5:;
  /* 114566f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114566f8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114566fb mov eax, dword ptr [edx + 0x1147364c] */
  EAX = (r32((uint32_t)(EDX + 0x1147364c)));
  /* 11456701 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11456704 jmp 0x11456758 */
  goto L_11456758;
L_11456706:;
  /* 11456706 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456709 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1145670c add ecx, 0x11473650 */
  { uint32_t _a=(ECX),_b=(0x11473650u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456712 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11456715 jmp 0x11456758 */
  goto L_11456758;
L_11456717:;
  /* 11456717 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145671a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1145671d mov eax, dword ptr [edx + 0x11473654] */
  EAX = (r32((uint32_t)(EDX + 0x11473654)));
  /* 11456723 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11456726 jmp 0x11456758 */
  goto L_11456758;
L_11456728:;
  /* 11456728 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145672b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1145672e add ecx, 0x11473658 */
  { uint32_t _a=(ECX),_b=(0x11473658u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456734 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11456737 jmp 0x11456758 */
  goto L_11456758;
L_11456739:;
  /* 11456739 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145673c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1145673f add edx, 0x1147365c */
  { uint32_t _a=(EDX),_b=(0x1147365cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456745 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11456748 jmp 0x11456758 */
  goto L_11456758;
L_1145674a:;
  /* 1145674a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145674d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11456750 add eax, 0x11473664 */
  { uint32_t _a=(EAX),_b=(0x11473664u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456755 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11456758:;
  /* 11456758 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145675c je 0x11456764 */
  if (C.zf) goto L_11456764;
  /* 1145675e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456762 jge 0x11456766 */
  if ((C.sf==C.of)) goto L_11456766;
L_11456764:;
  /* 11456764 jmp 0x114567b8 */
  goto L_114567b8;
L_11456766:;
  /* 11456766 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11456769 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145676c push ecx */
  push32((uint32_t)(ECX));
  /* 1145676d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11456770 push edx */
  push32((uint32_t)(EDX));
  /* 11456771 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11456774 push eax */
  push32((uint32_t)(EAX));
  /* 11456775 call 0x1144cb30 */
  push32(0x1145677au); f_1144cb30();
  /* 1145677a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145677d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11456780 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456783 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11456787 mov eax, 1 */
  EAX = (0x1u);
  /* 1145678c jmp 0x114567ce */
  goto L_114567ce;
L_1145678e:;
  /* 1145678e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456791 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11456794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456797 cmp eax, dword ptr [edx + 0x11473640] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11473640))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145679d jae 0x114567aa */
  if (!C.cf) goto L_114567aa;
  /* 1145679f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114567a2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114567a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114567a8 jmp 0x114567b3 */
  goto L_114567b3;
L_114567aa:;
  /* 114567aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114567ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114567b0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114567b3:;
  /* 114567b3 jmp 0x1145666b */
  goto L_1145666b;
L_114567b8:;
  /* 114567b8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114567bb push eax */
  push32((uint32_t)(EAX));
  /* 114567bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114567bf push ecx */
  push32((uint32_t)(ECX));
  /* 114567c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114567c3 push edx */
  push32((uint32_t)(EDX));
  /* 114567c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114567c7 push eax */
  push32((uint32_t)(EAX));
  /* 114567c8 call dword ptr [0x11477314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477314))), 0x114567ceu);
L_114567ce:;
  /* 114567ce mov esp, ebp */
  ESP = (EBP);
  /* 114567d0 pop ebp */
  EBP = (pop32());
  /* 114567d1 ret 0x10 */
  ESPCHK(0x11456650u, _esp0);
  ESP += 20; return;
}

/* FUN_100167e0 @ 0x114567e0 (118 bytes, 42 insns) */
void f_114567e0(void) {
  FTRACE(0x114567e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114567e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114567e1 mov ebp, esp */
  EBP = (ESP);
  /* 114567e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114567e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114567ed:;
  /* 114567ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114567f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114567f2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 114567f5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114567f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114567fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114567ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11456802 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11456804 je 0x1145684f */
  if (C.zf) goto L_1145684f;
  /* 11456806 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1145680a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145680d jl 0x11456822 */
  if ((C.sf!=C.of)) goto L_11456822;
  /* 1145680f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11456813 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456816 jg 0x11456822 */
  if ((!C.zf&&C.sf==C.of)) goto L_11456822;
  /* 11456818 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1145681b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1145681d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11456820 jmp 0x1145683c */
  goto L_1145683c;
L_11456822:;
  /* 11456822 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11456826 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456829 jl 0x1145683c */
  if ((C.sf!=C.of)) goto L_1145683c;
  /* 1145682b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1145682f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456832 jg 0x1145683c */
  if ((!C.zf&&C.sf==C.of)) goto L_1145683c;
  /* 11456834 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11456837 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11456839 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1145683c:;
  /* 1145683c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145683f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11456842 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11456846 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1145684a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1145684d jmp 0x114567ed */
  goto L_114567ed;
L_1145684f:;
  /* 1145684f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11456852 mov esp, ebp */
  ESP = (EBP);
  /* 11456854 pop ebp */
  EBP = (pop32());
  /* 11456855 ret  */
  ESPCHK(0x114567e0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11456860 (101 bytes, 36 insns) */
void f_11456860(void) {
  FTRACE(0x11456860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456860 push ebp */
  push32((uint32_t)(EBP));
  /* 11456861 mov ebp, esp */
  EBP = (ESP);
  /* 11456863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456866 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1145686d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456870 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11456872 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11456875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456878 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145687b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1145687e:;
  /* 1145687e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11456882 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456885 jl 0x11456890 */
  if ((C.sf!=C.of)) goto L_11456890;
  /* 11456887 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1145688b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145688e jle 0x114568a2 */
  if ((C.zf||C.sf!=C.of)) goto L_114568a2;
L_11456890:;
  /* 11456890 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11456894 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456897 jl 0x114568be */
  if ((C.sf!=C.of)) goto L_114568be;
  /* 11456899 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1145689d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114568a0 jg 0x114568be */
  if ((!C.zf&&C.sf==C.of)) goto L_114568be;
L_114568a2:;
  /* 114568a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114568a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114568a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114568ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114568ae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114568b0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 114568b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114568b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114568b9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114568bc jmp 0x1145687e */
  goto L_1145687e;
L_114568be:;
  /* 114568be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114568c1 mov esp, ebp */
  ESP = (EBP);
  /* 114568c3 pop ebp */
  EBP = (pop32());
  /* 114568c4 ret  */
  ESPCHK(0x11456860u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x114568e0 (193 bytes, 91 insns) */
void f_114568e0(void) {
  FTRACE(0x114568e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114568e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114568e2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 114568e6 push ebx */
  push32((uint32_t)(EBX));
  /* 114568e7 mov ebx, eax */
  EBX = (EAX);
  /* 114568e9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 114568ec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 114568f0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 114568f6 je 0x1145690b */
  if (C.zf) goto L_1145690b;
L_114568f8:;
  /* 114568f8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 114568fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114568fb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114568fd je 0x114568d0 */
  if (C.zf) { jmp_ind(0x114568d0u); return; }
  /* 114568ff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11456901 je 0x11456954 */
  if (C.zf) goto L_11456954;
  /* 11456903 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11456909 jne 0x114568f8 */
  if (!C.zf) goto L_114568f8;
L_1145690b:;
  /* 1145690b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1145690d push edi */
  push32((uint32_t)(EDI));
  /* 1145690e mov eax, ebx */
  EAX = (EBX);
  /* 11456910 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11456913 push esi */
  push32((uint32_t)(ESI));
  /* 11456914 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11456916:;
  /* 11456916 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11456918 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1145691d mov eax, ecx */
  EAX = (ECX);
  /* 1145691f mov esi, edi */
  ESI = (EDI);
  /* 11456921 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11456923 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11456925 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11456927 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1145692a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1145692d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1145692f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11456931 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456934 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1145693a jne 0x11456958 */
  if (!C.zf) goto L_11456958;
  /* 1145693c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11456941 je 0x11456916 */
  if (C.zf) goto L_11456916;
  /* 11456943 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11456948 jne 0x11456952 */
  if (!C.zf) goto L_11456952;
  /* 1145694a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11456950 jne 0x11456916 */
  if (!C.zf) goto L_11456916;
L_11456952:;
  /* 11456952 pop esi */
  ESI = (pop32());
  /* 11456953 pop edi */
  EDI = (pop32());
L_11456954:;
  /* 11456954 pop ebx */
  EBX = (pop32());
  /* 11456955 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11456957 ret  */
  ESPCHK(0x114568e0u, _esp0);
  ESP += 4; return;
L_11456958:;
  /* 11456958 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1145695b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1145695d je 0x11456995 */
  if (C.zf) goto L_11456995;
  /* 1145695f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11456961 je 0x11456952 */
  if (C.zf) goto L_11456952;
  /* 11456963 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11456965 je 0x1145698e */
  if (C.zf) goto L_1145698e;
  /* 11456967 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11456969 je 0x11456952 */
  if (C.zf) goto L_11456952;
  /* 1145696b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1145696e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11456970 je 0x11456987 */
  if (C.zf) goto L_11456987;
  /* 11456972 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11456974 je 0x11456952 */
  if (C.zf) goto L_11456952;
  /* 11456976 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11456978 je 0x11456980 */
  if (C.zf) goto L_11456980;
  /* 1145697a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1145697c je 0x11456952 */
  if (C.zf) goto L_11456952;
  /* 1145697e jmp 0x11456916 */
  goto L_11456916;
L_11456980:;
  /* 11456980 pop esi */
  ESI = (pop32());
  /* 11456981 pop edi */
  EDI = (pop32());
  /* 11456982 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11456985 pop ebx */
  EBX = (pop32());
  /* 11456986 ret  */
  ESPCHK(0x114568e0u, _esp0);
  ESP += 4; return;
L_11456987:;
  /* 11456987 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1145698a pop esi */
  ESI = (pop32());
  /* 1145698b pop edi */
  EDI = (pop32());
  /* 1145698c pop ebx */
  EBX = (pop32());
  /* 1145698d ret  */
  ESPCHK(0x114568e0u, _esp0);
  ESP += 4; return;
L_1145698e:;
  /* 1145698e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11456991 pop esi */
  ESI = (pop32());
  /* 11456992 pop edi */
  EDI = (pop32());
  /* 11456993 pop ebx */
  EBX = (pop32());
  /* 11456994 ret  */
  ESPCHK(0x114568e0u, _esp0);
  ESP += 4; return;
L_11456995:;
  /* 11456995 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11456998 pop esi */
  ESI = (pop32());
  /* 11456999 pop edi */
  EDI = (pop32());
  /* 1145699a pop ebx */
  EBX = (pop32());
  /* 1145699b ret  */
  ESPCHK(0x114568e0u, _esp0);
  ESP += 4; return;
  /* 1145699c int3  */
  x86_unimpl("int3 @ 0x1145699c");
  /* 1145699d int3  */
  x86_unimpl("int3 @ 0x1145699d");
  /* 1145699e int3  */
  x86_unimpl("int3 @ 0x1145699e");
  /* 1145699f int3  */
  x86_unimpl("int3 @ 0x1145699f");
  /* 114569a0 push ebp */
  push32((uint32_t)(EBP));
}

/* FUN_100169a0 @ 0x114569a0 (122 bytes, 39 insns) */
void f_114569a0(void) {
  FTRACE(0x114569a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114569a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114569a1 mov ebp, esp */
  EBP = (ESP);
  /* 114569a3 push ecx */
  push32((uint32_t)(ECX));
  /* 114569a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114569a7 cmp eax, dword ptr [0x114763bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114763bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114569ad jae 0x114569d1 */
  if (!C.cf) goto L_114569d1;
  /* 114569af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114569b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114569b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114569b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114569bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114569be mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 114569c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114569ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114569cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114569cf jne 0x114569ec */
  if (!C.zf) goto L_114569ec;
L_114569d1:;
  /* 114569d1 call 0x114511e0 */
  push32(0x114569d6u); f_114511e0();
  /* 114569d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114569dc call 0x114511f0 */
  push32(0x114569e1u); f_114511f0();
  /* 114569e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114569e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114569ea jmp 0x11456a16 */
  goto L_11456a16;
L_114569ec:;
  /* 114569ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114569ef push edx */
  push32((uint32_t)(EDX));
  /* 114569f0 call 0x114533e0 */
  push32(0x114569f5u); f_114533e0();
  /* 114569f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114569f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114569fb push eax */
  push32((uint32_t)(EAX));
  /* 114569fc call 0x11456a20 */
  push32(0x11456a01u); f_11456a20();
  /* 11456a01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456a04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11456a07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456a0a push ecx */
  push32((uint32_t)(ECX));
  /* 11456a0b call 0x11453470 */
  push32(0x11456a10u); f_11453470();
  /* 11456a10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456a13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11456a16:;
  /* 11456a16 mov esp, ebp */
  ESP = (EBP);
  /* 11456a18 pop ebp */
  EBP = (pop32());
  /* 11456a19 ret  */
  ESPCHK(0x114569a0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11456a20 (170 bytes, 59 insns) */
void f_11456a20(void) {
  FTRACE(0x11456a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11456a21 mov ebp, esp */
  EBP = (ESP);
  /* 11456a23 push ecx */
  push32((uint32_t)(ECX));
  /* 11456a24 push esi */
  push32((uint32_t)(ESI));
  /* 11456a25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456a28 push eax */
  push32((uint32_t)(EAX));
  /* 11456a29 call 0x11453260 */
  push32(0x11456a2eu); f_11453260();
  /* 11456a2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456a31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456a34 je 0x11456a73 */
  if (C.zf) goto L_11456a73;
  /* 11456a36 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456a3a je 0x11456a42 */
  if (C.zf) goto L_11456a42;
  /* 11456a3c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456a40 jne 0x11456a5c */
  if (!C.zf) goto L_11456a5c;
L_11456a42:;
  /* 11456a42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11456a44 call 0x11453260 */
  push32(0x11456a49u); f_11453260();
  /* 11456a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456a4c mov esi, eax */
  ESI = (EAX);
  /* 11456a4e push 2 */
  push32((uint32_t)(0x2u));
  /* 11456a50 call 0x11453260 */
  push32(0x11456a55u); f_11453260();
  /* 11456a55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456a58 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456a5a je 0x11456a73 */
  if (C.zf) goto L_11456a73;
L_11456a5c:;
  /* 11456a5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456a5f push ecx */
  push32((uint32_t)(ECX));
  /* 11456a60 call 0x11453260 */
  push32(0x11456a65u); f_11453260();
  /* 11456a65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456a68 push eax */
  push32((uint32_t)(EAX));
  /* 11456a69 call dword ptr [0x114772fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772fc))), 0x11456a6fu);
  /* 11456a6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11456a71 je 0x11456a7c */
  if (C.zf) goto L_11456a7c;
L_11456a73:;
  /* 11456a73 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11456a7a jmp 0x11456a85 */
  goto L_11456a85;
L_11456a7c:;
  /* 11456a7c call dword ptr [0x114772f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f4))), 0x11456a82u);
  /* 11456a82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11456a85:;
  /* 11456a85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456a88 push edx */
  push32((uint32_t)(EDX));
  /* 11456a89 call 0x11453180 */
  push32(0x11456a8eu); f_11453180();
  /* 11456a8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456a94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11456a97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456a9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11456a9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11456aa0 mov edx, dword ptr [eax*4 + 0x11476280] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 11456aa7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11456aac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456ab0 je 0x11456ac3 */
  if (C.zf) goto L_11456ac3;
  /* 11456ab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11456ab5 push eax */
  push32((uint32_t)(EAX));
  /* 11456ab6 call 0x11451140 */
  push32(0x11456abbu); f_11451140();
  /* 11456abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456abe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11456ac1 jmp 0x11456ac5 */
  goto L_11456ac5;
L_11456ac3:;
  /* 11456ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11456ac5:;
  /* 11456ac5 pop esi */
  ESI = (pop32());
  /* 11456ac6 mov esp, ebp */
  ESP = (EBP);
  /* 11456ac8 pop ebp */
  EBP = (pop32());
  /* 11456ac9 ret  */
  ESPCHK(0x11456a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ad0 @ 0x11456ad0 (146 bytes, 52 insns) */
void f_11456ad0(void) {
  FTRACE(0x11456ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11456ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11456ad3 push ebx */
  push32((uint32_t)(EBX));
  /* 11456ad4 push esi */
  push32((uint32_t)(ESI));
  /* 11456ad5 push edi */
  push32((uint32_t)(EDI));
L_11456ad6:;
  /* 11456ad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456ada jne 0x11456afa */
  if (!C.zf) goto L_11456afa;
  /* 11456adc push 0x11470a78 */
  push32((uint32_t)(0x11470a78u));
  /* 11456ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11456ae3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11456ae5 push 0x11471140 */
  push32((uint32_t)(0x11471140u));
  /* 11456aea push 2 */
  push32((uint32_t)(0x2u));
  /* 11456aec call 0x11447960 */
  push32(0x11456af1u); f_11447960();
  /* 11456af1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456af4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456af7 jne 0x11456afa */
  if (!C.zf) goto L_11456afa;
  /* 11456af9 int3  */
  x86_unimpl("int3 @ 0x11456af9");
L_11456afa:;
  /* 11456afa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11456afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11456afe jne 0x11456ad6 */
  if (!C.zf) goto L_11456ad6;
  /* 11456b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456b03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11456b06 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11456b0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11456b0e je 0x11456b5d */
  if (C.zf) goto L_11456b5d;
  /* 11456b10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456b13 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11456b16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11456b19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11456b1b je 0x11456b5d */
  if (C.zf) goto L_11456b5d;
  /* 11456b1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11456b1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456b22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11456b25 push eax */
  push32((uint32_t)(EAX));
  /* 11456b26 call 0x11449080 */
  push32(0x11456b2bu); f_11449080();
  /* 11456b2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456b2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456b31 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11456b34 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11456b3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456b3d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11456b40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456b43 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11456b49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456b4c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11456b53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11456b56 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11456b5d:;
  /* 11456b5d pop edi */
  EDI = (pop32());
  /* 11456b5e pop esi */
  ESI = (pop32());
  /* 11456b5f pop ebx */
  EBX = (pop32());
  /* 11456b60 pop ebp */
  EBP = (pop32());
  /* 11456b61 ret  */
  ESPCHK(0x11456ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b70 @ 0x11456b70 (289 bytes, 97 insns) */
void f_11456b70(void) {
  FTRACE(0x11456b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11456b71 mov ebp, esp */
  EBP = (ESP);
  /* 11456b73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456b76 push esi */
  push32((uint32_t)(ESI));
  /* 11456b77 mov eax, dword ptr [0x11473dc0] */
  EAX = (r32((uint32_t)(0x11473dc0)));
  /* 11456b7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11456b7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11456b86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11456b8d jmp 0x11456b98 */
  goto L_11456b98;
L_11456b8f:;
  /* 11456b8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456b92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456b95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11456b98:;
  /* 11456b98 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456b9c jae 0x11456bd1 */
  if (!C.cf) goto L_11456bd1;
  /* 11456b9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456ba1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456ba4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11456ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 11456ba8 call 0x1144c140 */
  push32(0x11456badu); f_1144c140();
  /* 11456bad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456bb0 mov esi, eax */
  ESI = (EAX);
  /* 11456bb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456bb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456bb8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11456bbc push ecx */
  push32((uint32_t)(ECX));
  /* 11456bbd call 0x1144c140 */
  push32(0x11456bc2u); f_1144c140();
  /* 11456bc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456bc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456bc8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11456bcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11456bcf jmp 0x11456b8f */
  goto L_11456b8f;
L_11456bd1:;
  /* 11456bd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11456bd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456bd7 push eax */
  push32((uint32_t)(EAX));
  /* 11456bd8 call 0x114485d0 */
  push32(0x11456bddu); f_114485d0();
  /* 11456bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456be0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11456be3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456be7 je 0x11456c89 */
  if (C.zf) goto L_11456c89;
  /* 11456bed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11456bf0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11456bf3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11456bfa jmp 0x11456c05 */
  goto L_11456c05;
L_11456bfc:;
  /* 11456bfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456bff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456c02 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11456c05:;
  /* 11456c05 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456c09 jae 0x11456c7a */
  if (!C.cf) goto L_11456c7a;
  /* 11456c0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456c0e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11456c11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456c14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456c17 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11456c1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456c1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456c20 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11456c23 push ecx */
  push32((uint32_t)(ECX));
  /* 11456c24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456c27 push edx */
  push32((uint32_t)(EDX));
  /* 11456c28 call 0x1144c2c0 */
  push32(0x11456c2du); f_1144c2c0();
  /* 11456c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456c30 push eax */
  push32((uint32_t)(EAX));
  /* 11456c31 call 0x1144c140 */
  push32(0x11456c36u); f_1144c140();
  /* 11456c36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456c39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456c3c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456c3e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11456c41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456c44 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11456c47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456c4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456c4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11456c50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456c53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456c56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11456c5a push eax */
  push32((uint32_t)(EAX));
  /* 11456c5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456c5e push ecx */
  push32((uint32_t)(ECX));
  /* 11456c5f call 0x1144c2c0 */
  push32(0x11456c64u); f_1144c2c0();
  /* 11456c64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456c67 push eax */
  push32((uint32_t)(EAX));
  /* 11456c68 call 0x1144c140 */
  push32(0x11456c6du); f_1144c140();
  /* 11456c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456c70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456c73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456c75 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11456c78 jmp 0x11456bfc */
  goto L_11456bfc;
L_11456c7a:;
  /* 11456c7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456c7d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11456c80 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456c83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456c86 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11456c89:;
  /* 11456c89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11456c8c pop esi */
  ESI = (pop32());
  /* 11456c8d mov esp, ebp */
  ESP = (EBP);
  /* 11456c8f pop ebp */
  EBP = (pop32());
  /* 11456c90 ret  */
  ESPCHK(0x11456b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ca0 @ 0x11456ca0 (291 bytes, 97 insns) */
void f_11456ca0(void) {
  FTRACE(0x11456ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11456ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11456ca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456ca6 push esi */
  push32((uint32_t)(ESI));
  /* 11456ca7 mov eax, dword ptr [0x11473dc0] */
  EAX = (r32((uint32_t)(0x11473dc0)));
  /* 11456cac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11456caf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11456cb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11456cbd jmp 0x11456cc8 */
  goto L_11456cc8;
L_11456cbf:;
  /* 11456cbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456cc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456cc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11456cc8:;
  /* 11456cc8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456ccc jae 0x11456d02 */
  if (!C.cf) goto L_11456d02;
  /* 11456cce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456cd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456cd4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11456cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11456cd9 call 0x1144c140 */
  push32(0x11456cdeu); f_1144c140();
  /* 11456cde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456ce1 mov esi, eax */
  ESI = (EAX);
  /* 11456ce3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456ce6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456ce9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11456ced push ecx */
  push32((uint32_t)(ECX));
  /* 11456cee call 0x1144c140 */
  push32(0x11456cf3u); f_1144c140();
  /* 11456cf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456cf6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456cf9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11456cfd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11456d00 jmp 0x11456cbf */
  goto L_11456cbf;
L_11456d02:;
  /* 11456d02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11456d05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456d08 push eax */
  push32((uint32_t)(EAX));
  /* 11456d09 call 0x114485d0 */
  push32(0x11456d0eu); f_114485d0();
  /* 11456d0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456d11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11456d14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456d18 je 0x11456dbb */
  if (C.zf) goto L_11456dbb;
  /* 11456d1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11456d21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11456d24 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11456d2b jmp 0x11456d36 */
  goto L_11456d36;
L_11456d2d:;
  /* 11456d2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456d30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456d33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11456d36:;
  /* 11456d36 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456d3a jae 0x11456dac */
  if (!C.cf) goto L_11456dac;
  /* 11456d3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456d3f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11456d42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456d45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456d48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11456d4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456d4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456d51 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11456d55 push ecx */
  push32((uint32_t)(ECX));
  /* 11456d56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456d59 push edx */
  push32((uint32_t)(EDX));
  /* 11456d5a call 0x1144c2c0 */
  push32(0x11456d5fu); f_1144c2c0();
  /* 11456d5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456d62 push eax */
  push32((uint32_t)(EAX));
  /* 11456d63 call 0x1144c140 */
  push32(0x11456d68u); f_1144c140();
  /* 11456d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456d6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456d6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456d70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11456d73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456d76 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11456d79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456d7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456d7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11456d82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456d85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456d88 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11456d8c push eax */
  push32((uint32_t)(EAX));
  /* 11456d8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456d90 push ecx */
  push32((uint32_t)(ECX));
  /* 11456d91 call 0x1144c2c0 */
  push32(0x11456d96u); f_1144c2c0();
  /* 11456d96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456d99 push eax */
  push32((uint32_t)(EAX));
  /* 11456d9a call 0x1144c140 */
  push32(0x11456d9fu); f_1144c140();
  /* 11456d9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456da2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456da5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456da7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11456daa jmp 0x11456d2d */
  goto L_11456d2d;
L_11456dac:;
  /* 11456dac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456daf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11456db2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456db5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456db8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11456dbb:;
  /* 11456dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11456dbe pop esi */
  ESI = (pop32());
  /* 11456dbf mov esp, ebp */
  ESP = (EBP);
  /* 11456dc1 pop ebp */
  EBP = (pop32());
  /* 11456dc2 ret  */
  ESPCHK(0x11456ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016dd0 @ 0x11456dd0 (878 bytes, 273 insns) */
void f_11456dd0(void) {
  FTRACE(0x11456dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11456dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11456dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11456dd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11456dd6 push esi */
  push32((uint32_t)(ESI));
  /* 11456dd7 mov eax, dword ptr [0x11473dc0] */
  EAX = (r32((uint32_t)(0x11473dc0)));
  /* 11456ddc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11456ddf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11456de6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11456ded jmp 0x11456df8 */
  goto L_11456df8;
L_11456def:;
  /* 11456def mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456df2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456df5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11456df8:;
  /* 11456df8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456dfc jae 0x11456e31 */
  if (!C.cf) goto L_11456e31;
  /* 11456dfe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456e01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456e04 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11456e07 push ecx */
  push32((uint32_t)(ECX));
  /* 11456e08 call 0x1144c140 */
  push32(0x11456e0du); f_1144c140();
  /* 11456e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456e10 mov esi, eax */
  ESI = (EAX);
  /* 11456e12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456e15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456e18 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11456e1c push ecx */
  push32((uint32_t)(ECX));
  /* 11456e1d call 0x1144c140 */
  push32(0x11456e22u); f_1144c140();
  /* 11456e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456e25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456e28 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11456e2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11456e2f jmp 0x11456def */
  goto L_11456def;
L_11456e31:;
  /* 11456e31 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11456e38 jmp 0x11456e43 */
  goto L_11456e43;
L_11456e3a:;
  /* 11456e3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456e3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456e40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11456e43:;
  /* 11456e43 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456e47 jae 0x11456e7d */
  if (!C.cf) goto L_11456e7d;
  /* 11456e49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456e4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456e4f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11456e53 push eax */
  push32((uint32_t)(EAX));
  /* 11456e54 call 0x1144c140 */
  push32(0x11456e59u); f_1144c140();
  /* 11456e59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456e5c mov esi, eax */
  ESI = (EAX);
  /* 11456e5e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456e61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456e64 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11456e68 push eax */
  push32((uint32_t)(EAX));
  /* 11456e69 call 0x1144c140 */
  push32(0x11456e6eu); f_1144c140();
  /* 11456e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456e71 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456e74 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11456e78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11456e7b jmp 0x11456e3a */
  goto L_11456e3a;
L_11456e7d:;
  /* 11456e7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456e80 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11456e86 push eax */
  push32((uint32_t)(EAX));
  /* 11456e87 call 0x1144c140 */
  push32(0x11456e8cu); f_1144c140();
  /* 11456e8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456e8f mov esi, eax */
  ESI = (EAX);
  /* 11456e91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456e94 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11456e9a push edx */
  push32((uint32_t)(EDX));
  /* 11456e9b call 0x1144c140 */
  push32(0x11456ea0u); f_1144c140();
  /* 11456ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456ea3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456ea6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11456eaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11456ead mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456eb0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11456eb6 push edx */
  push32((uint32_t)(EDX));
  /* 11456eb7 call 0x1144c140 */
  push32(0x11456ebcu); f_1144c140();
  /* 11456ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456ebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11456ec2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11456ec6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11456ec9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456ecc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11456ed2 push ecx */
  push32((uint32_t)(ECX));
  /* 11456ed3 call 0x1144c140 */
  push32(0x11456ed8u); f_1144c140();
  /* 11456ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456edb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11456ede lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11456ee2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11456ee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456ee8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11456eee push edx */
  push32((uint32_t)(EDX));
  /* 11456eef call 0x1144c140 */
  push32(0x11456ef4u); f_1144c140();
  /* 11456ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456ef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11456efa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11456efe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11456f01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11456f04 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456f09 push eax */
  push32((uint32_t)(EAX));
  /* 11456f0a call 0x114485d0 */
  push32(0x11456f0fu); f_114485d0();
  /* 11456f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456f12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11456f15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456f19 je 0x11457136 */
  if (C.zf) goto L_11457136;
  /* 11456f1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11456f22 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11456f25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11456f28 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456f2e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11456f31 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11456f36 mov eax, dword ptr [0x11473dc0] */
  EAX = (r32((uint32_t)(0x11473dc0)));
  /* 11456f3b push eax */
  push32((uint32_t)(EAX));
  /* 11456f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11456f3f push ecx */
  push32((uint32_t)(ECX));
  /* 11456f40 call 0x1144f810 */
  push32(0x11456f45u); f_1144f810();
  /* 11456f45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456f48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11456f4f jmp 0x11456f5a */
  goto L_11456f5a;
L_11456f51:;
  /* 11456f51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456f54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456f57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11456f5a:;
  /* 11456f5a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456f5e jae 0x11456fce */
  if (!C.cf) goto L_11456fce;
  /* 11456f60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456f63 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11456f66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456f69 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11456f6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456f6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456f72 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11456f75 push edx */
  push32((uint32_t)(EDX));
  /* 11456f76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456f79 push eax */
  push32((uint32_t)(EAX));
  /* 11456f7a call 0x1144c2c0 */
  push32(0x11456f7fu); f_1144c2c0();
  /* 11456f7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456f82 push eax */
  push32((uint32_t)(EAX));
  /* 11456f83 call 0x1144c140 */
  push32(0x11456f88u); f_1144c140();
  /* 11456f88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456f8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456f8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11456f92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11456f95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456f98 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11456f9b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456f9e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11456fa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456fa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456fa8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11456fac push edx */
  push32((uint32_t)(EDX));
  /* 11456fad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456fb0 push eax */
  push32((uint32_t)(EAX));
  /* 11456fb1 call 0x1144c2c0 */
  push32(0x11456fb6u); f_1144c2c0();
  /* 11456fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456fb9 push eax */
  push32((uint32_t)(EAX));
  /* 11456fba call 0x1144c140 */
  push32(0x11456fbfu); f_1144c140();
  /* 11456fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11456fc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456fc5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11456fc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11456fcc jmp 0x11456f51 */
  goto L_11456f51;
L_11456fce:;
  /* 11456fce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11456fd5 jmp 0x11456fe0 */
  goto L_11456fe0;
L_11456fd7:;
  /* 11456fd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456fda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11456fdd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11456fe0:;
  /* 11456fe0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11456fe4 jae 0x11457056 */
  if (!C.cf) goto L_11457056;
  /* 11456fe6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456fe9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11456fec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11456fef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11456ff3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11456ff6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11456ff9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11456ffd push eax */
  push32((uint32_t)(EAX));
  /* 11456ffe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11457001 push ecx */
  push32((uint32_t)(ECX));
  /* 11457002 call 0x1144c2c0 */
  push32(0x11457007u); f_1144c2c0();
  /* 11457007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145700a push eax */
  push32((uint32_t)(EAX));
  /* 1145700b call 0x1144c140 */
  push32(0x11457010u); f_1144c140();
  /* 11457010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457013 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11457016 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1145701a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1145701d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11457020 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11457023 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11457026 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1145702a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1145702d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457030 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11457034 push eax */
  push32((uint32_t)(EAX));
  /* 11457035 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11457038 push ecx */
  push32((uint32_t)(ECX));
  /* 11457039 call 0x1144c2c0 */
  push32(0x1145703eu); f_1144c2c0();
  /* 1145703e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457041 push eax */
  push32((uint32_t)(EAX));
  /* 11457042 call 0x1144c140 */
  push32(0x11457047u); f_1144c140();
  /* 11457047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145704a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1145704d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11457051 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11457054 jmp 0x11456fd7 */
  goto L_11456fd7;
L_11457056:;
  /* 11457056 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11457059 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1145705c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11457062 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457065 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1145706b push ecx */
  push32((uint32_t)(ECX));
  /* 1145706c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1145706f push edx */
  push32((uint32_t)(EDX));
  /* 11457070 call 0x1144c2c0 */
  push32(0x11457075u); f_1144c2c0();
  /* 11457075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457078 push eax */
  push32((uint32_t)(EAX));
  /* 11457079 call 0x1144c140 */
  push32(0x1145707eu); f_1144c140();
  /* 1145707e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457081 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11457084 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11457088 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1145708b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1145708e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11457091 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11457097 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145709a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 114570a0 push eax */
  push32((uint32_t)(EAX));
  /* 114570a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114570a4 push ecx */
  push32((uint32_t)(ECX));
  /* 114570a5 call 0x1144c2c0 */
  push32(0x114570aau); f_1144c2c0();
  /* 114570aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114570ad push eax */
  push32((uint32_t)(EAX));
  /* 114570ae call 0x1144c140 */
  push32(0x114570b3u); f_1144c140();
  /* 114570b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114570b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114570b9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 114570bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114570c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114570c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114570c6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 114570cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114570cf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 114570d5 push ecx */
  push32((uint32_t)(ECX));
  /* 114570d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114570d9 push edx */
  push32((uint32_t)(EDX));
  /* 114570da call 0x1144c2c0 */
  push32(0x114570dfu); f_1144c2c0();
  /* 114570df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114570e2 push eax */
  push32((uint32_t)(EAX));
  /* 114570e3 call 0x1144c140 */
  push32(0x114570e8u); f_1144c140();
  /* 114570e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114570eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114570ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 114570f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114570f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114570f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114570fb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11457101 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457104 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1145710a push eax */
  push32((uint32_t)(EAX));
  /* 1145710b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1145710e push ecx */
  push32((uint32_t)(ECX));
  /* 1145710f call 0x1144c2c0 */
  push32(0x11457114u); f_1144c2c0();
  /* 11457114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457117 push eax */
  push32((uint32_t)(EAX));
  /* 11457118 call 0x1144c140 */
  push32(0x1145711du); f_1144c140();
  /* 1145711d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457120 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11457123 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11457127 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1145712a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1145712d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11457130 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11457136:;
  /* 11457136 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457139 pop esi */
  ESI = (pop32());
  /* 1145713a mov esp, ebp */
  ESP = (EBP);
  /* 1145713c pop ebp */
  EBP = (pop32());
  /* 1145713d ret  */
  ESPCHK(0x11456dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017140 @ 0x11457140 (31 bytes, 15 insns) */
void f_11457140(void) {
  FTRACE(0x11457140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11457140 push ebp */
  push32((uint32_t)(EBP));
  /* 11457141 mov ebp, esp */
  EBP = (ESP);
  /* 11457143 push 0 */
  push32((uint32_t)(0x0u));
  /* 11457145 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457148 push eax */
  push32((uint32_t)(EAX));
  /* 11457149 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145714c push ecx */
  push32((uint32_t)(ECX));
  /* 1145714d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457150 push edx */
  push32((uint32_t)(EDX));
  /* 11457151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457154 push eax */
  push32((uint32_t)(EAX));
  /* 11457155 call 0x11457160 */
  push32(0x1145715au); f_11457160();
  /* 1145715a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145715d pop ebp */
  EBP = (pop32());
  /* 1145715e ret  */
  ESPCHK(0x11457140u, _esp0);
  ESP += 4; return;
}

/* FUN_10017160 @ 0x11457160 (393 bytes, 123 insns) */
void f_11457160(void) {
  FTRACE(0x11457160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11457160 push ebp */
  push32((uint32_t)(EBP));
  /* 11457161 mov ebp, esp */
  EBP = (ESP);
  /* 11457163 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457166 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145716a jne 0x11457176 */
  if (!C.zf) goto L_11457176;
  /* 1145716c mov eax, dword ptr [0x11473dc0] */
  EAX = (r32((uint32_t)(0x11473dc0)));
  /* 11457171 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11457174 jmp 0x1145717c */
  goto L_1145717c;
L_11457176:;
  /* 11457176 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457179 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1145717c:;
  /* 1145717c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1145717f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11457182 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457185 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11457188 push 0x11474c2c */
  push32((uint32_t)(0x11474c2cu));
  /* 1145718d call dword ptr [0x11477414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477414))), 0x11457193u);
  /* 11457193 cmp dword ptr [0x11474c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145719a je 0x114571ba */
  if (C.zf) goto L_114571ba;
  /* 1145719c push 0x11474c2c */
  push32((uint32_t)(0x11474c2cu));
  /* 114571a1 call dword ptr [0x11477404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477404))), 0x114571a7u);
  /* 114571a7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114571a9 call 0x1144b210 */
  push32(0x114571aeu); f_1144b210();
  /* 114571ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114571b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 114571b8 jmp 0x114571c1 */
  goto L_114571c1;
L_114571ba:;
  /* 114571ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_114571c1:;
  /* 114571c1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114571c5 jbe 0x114572b2 */
  if ((C.cf||C.zf)) goto L_114572b2;
  /* 114571cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114571ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114571d0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 114571d3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114571d7 je 0x114571e1 */
  if (C.zf) goto L_114571e1;
  /* 114571d9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114571dd je 0x114571e6 */
  if (C.zf) goto L_114571e6;
  /* 114571df jmp 0x11457240 */
  goto L_11457240;
L_114571e1:;
  /* 114571e1 jmp 0x114572b2 */
  goto L_114572b2;
L_114571e6:;
  /* 114571e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114571e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114571ec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 114571ef mov dword ptr [0x11474c08], 0 */
  w32((uint32_t)(0x11474c08), (0x0u));
  /* 114571f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114571fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114571ff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457202 jne 0x11457217 */
  if (!C.zf) goto L_11457217;
  /* 11457204 mov dword ptr [0x11474c08], 1 */
  w32((uint32_t)(0x11474c08), (0x1u));
  /* 1145720e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457211 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457214 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11457217:;
  /* 11457217 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145721a push ecx */
  push32((uint32_t)(ECX));
  /* 1145721b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1145721e push edx */
  push32((uint32_t)(EDX));
  /* 1145721f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11457222 push eax */
  push32((uint32_t)(EAX));
  /* 11457223 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457226 push ecx */
  push32((uint32_t)(ECX));
  /* 11457227 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145722a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1145722c push eax */
  push32((uint32_t)(EAX));
  /* 1145722d call 0x114572f0 */
  push32(0x11457232u); f_114572f0();
  /* 11457232 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457235 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457238 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145723b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1145723e jmp 0x114572ad */
  goto L_114572ad;
L_11457240:;
  /* 11457240 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11457245 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11457247 mov ecx, dword ptr [0x11472db8] */
  ECX = (r32((uint32_t)(0x11472db8)));
  /* 1145724d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1145724f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11457253 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11457259 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1145725b je 0x11457288 */
  if (C.zf) goto L_11457288;
  /* 1145725d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457261 jbe 0x11457288 */
  if ((C.cf||C.zf)) goto L_11457288;
  /* 11457263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457266 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457269 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1145726b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1145726d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457270 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457273 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11457276 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457279 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145727c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1145727f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457282 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457285 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11457288:;
  /* 11457288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145728b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145728e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11457290 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11457292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457295 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457298 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1145729b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145729e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114572a1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 114572a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114572a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114572aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114572ad:;
  /* 114572ad jmp 0x114571c1 */
  goto L_114571c1;
L_114572b2:;
  /* 114572b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114572b6 je 0x114572c4 */
  if (C.zf) goto L_114572c4;
  /* 114572b8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114572ba call 0x1144b2b0 */
  push32(0x114572bfu); f_1144b2b0();
  /* 114572bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114572c2 jmp 0x114572cf */
  goto L_114572cf;
L_114572c4:;
  /* 114572c4 push 0x11474c2c */
  push32((uint32_t)(0x11474c2cu));
  /* 114572c9 call dword ptr [0x11477404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477404))), 0x114572cfu);
L_114572cf:;
  /* 114572cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114572d3 jbe 0x114572e3 */
  if ((C.cf||C.zf)) goto L_114572e3;
  /* 114572d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114572d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 114572db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114572de sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114572e1 jmp 0x114572e5 */
  goto L_114572e5;
L_114572e3:;
  /* 114572e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114572e5:;
  /* 114572e5 mov esp, ebp */
  ESP = (EBP);
  /* 114572e7 pop ebp */
  EBP = (pop32());
  /* 114572e8 ret  */
  ESPCHK(0x11457160u, _esp0);
  ESP += 4; return;
}

/* FUN_100172f0 @ 0x114572f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_114572f0(void) {
  FTRACE(0x114572f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114572f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114572f1 mov ebp, esp */
  EBP = (ESP);
  /* 114572f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114572f6 push esi */
  push32((uint32_t)(ESI));
  /* 114572f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 114572fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114572fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457301 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457304 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11457307 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145730b ja 0x11457858 */
  if ((!C.cf&&!C.zf)) goto L_11457858;
  /* 11457311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457314 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11457316 mov dl, byte ptr [eax + 0x114578b9] */
  DL = (r8((uint32_t)(EAX + 0x114578b9)));
  /* 1145731c jmp dword ptr [edx*4 + 0x1145785d] */
  switch (EDX) {
    case 0: goto L_11457836;
    case 1: goto L_11457345;
    case 2: goto L_1145738b;
    case 3: goto L_114574d8;
    case 4: goto L_11457500;
    case 5: goto L_1145759f;
    case 6: goto L_1145760b;
    case 7: goto L_11457634;
    case 8: goto L_11457675;
    case 9: goto L_11457757;
    case 10: goto L_114577be;
    case 11: goto L_1145780b;
    case 12: goto L_11457323;
    case 13: goto L_11457368;
    case 14: goto L_114573ae;
    case 15: goto L_114574ae;
    case 16: goto L_11457545;
    case 17: goto L_11457572;
    case 18: goto L_114575c7;
    case 19: goto L_1145764b;
    case 20: goto L_114576f9;
    case 21: goto L_11457788;
    case 22: goto L_11457858;
    default: x86_unimpl("switch@0x1145731c out of table"); return;
  }
L_11457323:;
  /* 11457323 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457326 push ecx */
  push32((uint32_t)(ECX));
  /* 11457327 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145732a push edx */
  push32((uint32_t)(EDX));
  /* 1145732b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145732e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11457331 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457334 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11457337 push eax */
  push32((uint32_t)(EAX));
  /* 11457338 call 0x11457910 */
  push32(0x1145733du); f_11457910();
  /* 1145733d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457340 jmp 0x11457858 */
  goto L_11457858;
L_11457345:;
  /* 11457345 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457348 push ecx */
  push32((uint32_t)(ECX));
  /* 11457349 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145734c push edx */
  push32((uint32_t)(EDX));
  /* 1145734d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457350 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11457353 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457356 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1145735a push eax */
  push32((uint32_t)(EAX));
  /* 1145735b call 0x11457910 */
  push32(0x11457360u); f_11457910();
  /* 11457360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457363 jmp 0x11457858 */
  goto L_11457858;
L_11457368:;
  /* 11457368 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145736b push ecx */
  push32((uint32_t)(ECX));
  /* 1145736c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145736f push edx */
  push32((uint32_t)(EDX));
  /* 11457370 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457373 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11457376 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457379 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1145737d push eax */
  push32((uint32_t)(EAX));
  /* 1145737e call 0x11457910 */
  push32(0x11457383u); f_11457910();
  /* 11457383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457386 jmp 0x11457858 */
  goto L_11457858;
L_1145738b:;
  /* 1145738b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145738e push ecx */
  push32((uint32_t)(ECX));
  /* 1145738f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457392 push edx */
  push32((uint32_t)(EDX));
  /* 11457393 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457396 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11457399 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1145739c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 114573a0 push eax */
  push32((uint32_t)(EAX));
  /* 114573a1 call 0x11457910 */
  push32(0x114573a6u); f_11457910();
  /* 114573a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114573a9 jmp 0x11457858 */
  goto L_11457858;
L_114573ae:;
  /* 114573ae cmp dword ptr [0x11474c08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114573b5 je 0x11457436 */
  if (C.zf) goto L_11457436;
  /* 114573b7 mov dword ptr [0x11474c08], 0 */
  w32((uint32_t)(0x11474c08), (0x0u));
  /* 114573c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114573c4 push ecx */
  push32((uint32_t)(ECX));
  /* 114573c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114573c8 push edx */
  push32((uint32_t)(EDX));
  /* 114573c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114573cc push eax */
  push32((uint32_t)(EAX));
  /* 114573cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114573d0 push ecx */
  push32((uint32_t)(ECX));
  /* 114573d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114573d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 114573da push eax */
  push32((uint32_t)(EAX));
  /* 114573db call 0x11457ac0 */
  push32(0x114573e0u); f_11457ac0();
  /* 114573e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114573e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114573e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114573e9 jne 0x114573f0 */
  if (!C.zf) goto L_114573f0;
  /* 114573eb jmp 0x11457858 */
  goto L_11457858;
L_114573f0:;
  /* 114573f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114573f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114573f5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 114573f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114573fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114573fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457400 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457403 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11457405 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457408 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1145740a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145740d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457410 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11457412 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457415 push ecx */
  push32((uint32_t)(ECX));
  /* 11457416 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457419 push edx */
  push32((uint32_t)(EDX));
  /* 1145741a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145741d push eax */
  push32((uint32_t)(EAX));
  /* 1145741e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457421 push ecx */
  push32((uint32_t)(ECX));
  /* 11457422 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457425 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1145742b push eax */
  push32((uint32_t)(EAX));
  /* 1145742c call 0x11457ac0 */
  push32(0x11457431u); f_11457ac0();
  /* 11457431 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457434 jmp 0x114574a9 */
  goto L_114574a9;
L_11457436:;
  /* 11457436 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457439 push ecx */
  push32((uint32_t)(ECX));
  /* 1145743a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145743d push edx */
  push32((uint32_t)(EDX));
  /* 1145743e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457441 push eax */
  push32((uint32_t)(EAX));
  /* 11457442 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457445 push ecx */
  push32((uint32_t)(ECX));
  /* 11457446 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457449 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1145744f push eax */
  push32((uint32_t)(EAX));
  /* 11457450 call 0x11457ac0 */
  push32(0x11457455u); f_11457ac0();
  /* 11457455 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457458 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145745b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145745e jne 0x11457465 */
  if (!C.zf) goto L_11457465;
  /* 11457460 jmp 0x11457858 */
  goto L_11457858;
L_11457465:;
  /* 11457465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457468 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1145746a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1145746d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457470 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11457472 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457475 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457478 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1145747a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145747d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1145747f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457482 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457485 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11457487 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1145748a push ecx */
  push32((uint32_t)(ECX));
  /* 1145748b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145748e push edx */
  push32((uint32_t)(EDX));
  /* 1145748f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457492 push eax */
  push32((uint32_t)(EAX));
  /* 11457493 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457496 push ecx */
  push32((uint32_t)(ECX));
  /* 11457497 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1145749a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 114574a0 push eax */
  push32((uint32_t)(EAX));
  /* 114574a1 call 0x11457ac0 */
  push32(0x114574a6u); f_11457ac0();
  /* 114574a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114574a9:;
  /* 114574a9 jmp 0x11457858 */
  goto L_11457858;
L_114574ae:;
  /* 114574ae mov ecx, dword ptr [0x11474c08] */
  ECX = (r32((uint32_t)(0x11474c08)));
  /* 114574b4 mov dword ptr [0x11474c18], ecx */
  w32((uint32_t)(0x11474c18), (ECX));
  /* 114574ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114574bd push edx */
  push32((uint32_t)(EDX));
  /* 114574be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114574c1 push eax */
  push32((uint32_t)(EAX));
  /* 114574c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114574c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114574c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114574ca push edx */
  push32((uint32_t)(EDX));
  /* 114574cb call 0x11457960 */
  push32(0x114574d0u); f_11457960();
  /* 114574d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114574d3 jmp 0x11457858 */
  goto L_11457858;
L_114574d8:;
  /* 114574d8 mov eax, dword ptr [0x11474c08] */
  EAX = (r32((uint32_t)(0x11474c08)));
  /* 114574dd mov dword ptr [0x11474c18], eax */
  w32((uint32_t)(0x11474c18), (EAX));
  /* 114574e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114574e5 push ecx */
  push32((uint32_t)(ECX));
  /* 114574e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114574e9 push edx */
  push32((uint32_t)(EDX));
  /* 114574ea push 2 */
  push32((uint32_t)(0x2u));
  /* 114574ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114574ef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114574f2 push ecx */
  push32((uint32_t)(ECX));
  /* 114574f3 call 0x11457960 */
  push32(0x114574f8u); f_11457960();
  /* 114574f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114574fb jmp 0x11457858 */
  goto L_11457858;
L_11457500:;
  /* 11457500 mov edx, dword ptr [0x11474c08] */
  EDX = (r32((uint32_t)(0x11474c08)));
  /* 11457506 mov dword ptr [0x11474c18], edx */
  w32((uint32_t)(0x11474c18), (EDX));
  /* 1145750c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145750f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11457512 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11457513 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11457518 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1145751a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1145751d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457521 jne 0x1145752a */
  if (!C.zf) goto L_1145752a;
  /* 11457523 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1145752a:;
  /* 1145752a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145752d push edx */
  push32((uint32_t)(EDX));
  /* 1145752e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457531 push eax */
  push32((uint32_t)(EAX));
  /* 11457532 push 2 */
  push32((uint32_t)(0x2u));
  /* 11457534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457537 push ecx */
  push32((uint32_t)(ECX));
  /* 11457538 call 0x11457960 */
  push32(0x1145753du); f_11457960();
  /* 1145753d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457540 jmp 0x11457858 */
  goto L_11457858;
L_11457545:;
  /* 11457545 mov edx, dword ptr [0x11474c08] */
  EDX = (r32((uint32_t)(0x11474c08)));
  /* 1145754b mov dword ptr [0x11474c18], edx */
  w32((uint32_t)(0x11474c18), (EDX));
  /* 11457551 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457554 push eax */
  push32((uint32_t)(EAX));
  /* 11457555 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457558 push ecx */
  push32((uint32_t)(ECX));
  /* 11457559 push 3 */
  push32((uint32_t)(0x3u));
  /* 1145755b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145755e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11457561 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457564 push eax */
  push32((uint32_t)(EAX));
  /* 11457565 call 0x11457960 */
  push32(0x1145756au); f_11457960();
  /* 1145756a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145756d jmp 0x11457858 */
  goto L_11457858;
L_11457572:;
  /* 11457572 mov ecx, dword ptr [0x11474c08] */
  ECX = (r32((uint32_t)(0x11474c08)));
  /* 11457578 mov dword ptr [0x11474c18], ecx */
  w32((uint32_t)(0x11474c18), (ECX));
  /* 1145757e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457581 push edx */
  push32((uint32_t)(EDX));
  /* 11457582 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457585 push eax */
  push32((uint32_t)(EAX));
  /* 11457586 push 2 */
  push32((uint32_t)(0x2u));
  /* 11457588 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145758b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1145758e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457591 push edx */
  push32((uint32_t)(EDX));
  /* 11457592 call 0x11457960 */
  push32(0x11457597u); f_11457960();
  /* 11457597 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145759a jmp 0x11457858 */
  goto L_11457858;
L_1145759f:;
  /* 1145759f mov eax, dword ptr [0x11474c08] */
  EAX = (r32((uint32_t)(0x11474c08)));
  /* 114575a4 mov dword ptr [0x11474c18], eax */
  w32((uint32_t)(0x11474c18), (EAX));
  /* 114575a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114575ac push ecx */
  push32((uint32_t)(ECX));
  /* 114575ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114575b0 push edx */
  push32((uint32_t)(EDX));
  /* 114575b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 114575b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114575b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114575b9 push ecx */
  push32((uint32_t)(ECX));
  /* 114575ba call 0x11457960 */
  push32(0x114575bfu); f_11457960();
  /* 114575bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114575c2 jmp 0x11457858 */
  goto L_11457858;
L_114575c7:;
  /* 114575c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114575ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114575ce jg 0x114575ec */
  if ((!C.zf&&C.sf==C.of)) goto L_114575ec;
  /* 114575d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114575d3 push eax */
  push32((uint32_t)(EAX));
  /* 114575d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114575d7 push ecx */
  push32((uint32_t)(ECX));
  /* 114575d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114575db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 114575e1 push eax */
  push32((uint32_t)(EAX));
  /* 114575e2 call 0x11457910 */
  push32(0x114575e7u); f_11457910();
  /* 114575e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114575ea jmp 0x11457606 */
  goto L_11457606;
L_114575ec:;
  /* 114575ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114575ef push ecx */
  push32((uint32_t)(ECX));
  /* 114575f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114575f3 push edx */
  push32((uint32_t)(EDX));
  /* 114575f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114575f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 114575fd push ecx */
  push32((uint32_t)(ECX));
  /* 114575fe call 0x11457910 */
  push32(0x11457603u); f_11457910();
  /* 11457603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11457606:;
  /* 11457606 jmp 0x11457858 */
  goto L_11457858;
L_1145760b:;
  /* 1145760b mov edx, dword ptr [0x11474c08] */
  EDX = (r32((uint32_t)(0x11474c08)));
  /* 11457611 mov dword ptr [0x11474c18], edx */
  w32((uint32_t)(0x11474c18), (EDX));
  /* 11457617 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145761a push eax */
  push32((uint32_t)(EAX));
  /* 1145761b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145761e push ecx */
  push32((uint32_t)(ECX));
  /* 1145761f push 2 */
  push32((uint32_t)(0x2u));
  /* 11457621 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457624 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11457626 push eax */
  push32((uint32_t)(EAX));
  /* 11457627 call 0x11457960 */
  push32(0x1145762cu); f_11457960();
  /* 1145762c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145762f jmp 0x11457858 */
  goto L_11457858;
L_11457634:;
  /* 11457634 mov ecx, dword ptr [0x11474c08] */
  ECX = (r32((uint32_t)(0x11474c08)));
  /* 1145763a mov dword ptr [0x11474c18], ecx */
  w32((uint32_t)(0x11474c18), (ECX));
  /* 11457640 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457643 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11457646 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11457649 jmp 0x1145769d */
  goto L_1145769d;
L_1145764b:;
  /* 1145764b mov ecx, dword ptr [0x11474c08] */
  ECX = (r32((uint32_t)(0x11474c08)));
  /* 11457651 mov dword ptr [0x11474c18], ecx */
  w32((uint32_t)(0x11474c18), (ECX));
  /* 11457657 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145765a push edx */
  push32((uint32_t)(EDX));
  /* 1145765b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145765e push eax */
  push32((uint32_t)(EAX));
  /* 1145765f push 1 */
  push32((uint32_t)(0x1u));
  /* 11457661 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457664 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11457667 push edx */
  push32((uint32_t)(EDX));
  /* 11457668 call 0x11457960 */
  push32(0x1145766du); f_11457960();
  /* 1145766d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457670 jmp 0x11457858 */
  goto L_11457858;
L_11457675:;
  /* 11457675 mov eax, dword ptr [0x11474c08] */
  EAX = (r32((uint32_t)(0x11474c08)));
  /* 1145767a mov dword ptr [0x11474c18], eax */
  w32((uint32_t)(0x11474c18), (EAX));
  /* 1145767f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457682 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457686 jne 0x11457691 */
  if (!C.zf) goto L_11457691;
  /* 11457688 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1145768f jmp 0x1145769d */
  goto L_1145769d;
L_11457691:;
  /* 11457691 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457694 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11457697 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145769a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1145769d:;
  /* 1145769d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114576a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114576a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114576a6 jge 0x114576b1 */
  if ((C.sf==C.of)) goto L_114576b1;
  /* 114576a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114576af jmp 0x114576de */
  goto L_114576de;
L_114576b1:;
  /* 114576b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114576b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114576b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114576b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 114576bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114576bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114576c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114576c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114576c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114576c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 114576ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114576d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114576d3 jl 0x114576de */
  if ((C.sf!=C.of)) goto L_114576de;
  /* 114576d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114576d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114576db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114576de:;
  /* 114576de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114576e1 push eax */
  push32((uint32_t)(EAX));
  /* 114576e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114576e5 push ecx */
  push32((uint32_t)(ECX));
  /* 114576e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114576e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114576eb push edx */
  push32((uint32_t)(EDX));
  /* 114576ec call 0x11457960 */
  push32(0x114576f1u); f_11457960();
  /* 114576f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114576f4 jmp 0x11457858 */
  goto L_11457858;
L_114576f9:;
  /* 114576f9 cmp dword ptr [0x11474c08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457700 je 0x11457730 */
  if (C.zf) goto L_11457730;
  /* 11457702 mov dword ptr [0x11474c08], 0 */
  w32((uint32_t)(0x11474c08), (0x0u));
  /* 1145770c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1145770f push eax */
  push32((uint32_t)(EAX));
  /* 11457710 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457713 push ecx */
  push32((uint32_t)(ECX));
  /* 11457714 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457717 push edx */
  push32((uint32_t)(EDX));
  /* 11457718 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145771b push eax */
  push32((uint32_t)(EAX));
  /* 1145771c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1145771f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11457725 push edx */
  push32((uint32_t)(EDX));
  /* 11457726 call 0x11457ac0 */
  push32(0x1145772bu); f_11457ac0();
  /* 1145772b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145772e jmp 0x11457752 */
  goto L_11457752;
L_11457730:;
  /* 11457730 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457733 push eax */
  push32((uint32_t)(EAX));
  /* 11457734 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457737 push ecx */
  push32((uint32_t)(ECX));
  /* 11457738 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145773b push edx */
  push32((uint32_t)(EDX));
  /* 1145773c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145773f push eax */
  push32((uint32_t)(EAX));
  /* 11457740 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457743 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11457749 push edx */
  push32((uint32_t)(EDX));
  /* 1145774a call 0x11457ac0 */
  push32(0x1145774fu); f_11457ac0();
  /* 1145774f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11457752:;
  /* 11457752 jmp 0x11457858 */
  goto L_11457858;
L_11457757:;
  /* 11457757 mov dword ptr [0x11474c08], 0 */
  w32((uint32_t)(0x11474c08), (0x0u));
  /* 11457761 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457764 push eax */
  push32((uint32_t)(EAX));
  /* 11457765 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457768 push ecx */
  push32((uint32_t)(ECX));
  /* 11457769 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145776c push edx */
  push32((uint32_t)(EDX));
  /* 1145776d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457770 push eax */
  push32((uint32_t)(EAX));
  /* 11457771 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457774 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1145777a push edx */
  push32((uint32_t)(EDX));
  /* 1145777b call 0x11457ac0 */
  push32(0x11457780u); f_11457ac0();
  /* 11457780 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457783 jmp 0x11457858 */
  goto L_11457858;
L_11457788:;
  /* 11457788 mov eax, dword ptr [0x11474c08] */
  EAX = (r32((uint32_t)(0x11474c08)));
  /* 1145778d mov dword ptr [0x11474c18], eax */
  w32((uint32_t)(0x11474c18), (EAX));
  /* 11457792 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457795 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11457798 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11457799 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1145779e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114577a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114577a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114577a6 push edx */
  push32((uint32_t)(EDX));
  /* 114577a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114577aa push eax */
  push32((uint32_t)(EAX));
  /* 114577ab push 2 */
  push32((uint32_t)(0x2u));
  /* 114577ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114577b0 push ecx */
  push32((uint32_t)(ECX));
  /* 114577b1 call 0x11457960 */
  push32(0x114577b6u); f_11457960();
  /* 114577b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114577b9 jmp 0x11457858 */
  goto L_11457858;
L_114577be:;
  /* 114577be mov edx, dword ptr [0x11474c08] */
  EDX = (r32((uint32_t)(0x11474c08)));
  /* 114577c4 mov dword ptr [0x11474c18], edx */
  w32((uint32_t)(0x11474c18), (EDX));
  /* 114577ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114577cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 114577d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114577d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 114577d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114577d8 mov ecx, eax */
  ECX = (EAX);
  /* 114577da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114577dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114577e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114577e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114577e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114577e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 114577ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114577ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114577f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114577f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114577f6 push eax */
  push32((uint32_t)(EAX));
  /* 114577f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114577fa push ecx */
  push32((uint32_t)(ECX));
  /* 114577fb push 4 */
  push32((uint32_t)(0x4u));
  /* 114577fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457800 push edx */
  push32((uint32_t)(EDX));
  /* 11457801 call 0x11457960 */
  push32(0x11457806u); f_11457960();
  /* 11457806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457809 jmp 0x11457858 */
  goto L_11457858;
L_1145780b:;
  /* 1145780b call 0x1144b510 */
  push32(0x11457810u); f_1144b510();
  /* 11457810 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457813 push eax */
  push32((uint32_t)(EAX));
  /* 11457814 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457817 push ecx */
  push32((uint32_t)(ECX));
  /* 11457818 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145781b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145781d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457821 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11457824 mov ecx, dword ptr [eax*4 + 0x11472d14] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11472d14)));
  /* 1145782b push ecx */
  push32((uint32_t)(ECX));
  /* 1145782c call 0x11457910 */
  push32(0x11457831u); f_11457910();
  /* 11457831 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457834 jmp 0x11457858 */
  goto L_11457858;
L_11457836:;
  /* 11457836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457839 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1145783b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1145783e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457841 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11457843 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457846 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457849 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1145784b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145784e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11457850 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457853 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457856 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11457858:;
  /* 11457858 pop esi */
  ESI = (pop32());
  /* 11457859 mov esp, ebp */
  ESP = (EBP);
  /* 1145785b pop ebp */
  EBP = (pop32());
  /* 1145785c ret  */
  ESPCHK(0x114572f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11457910 (72 bytes, 30 insns) */
void f_11457910(void) {
  FTRACE(0x11457910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11457910 push ebp */
  push32((uint32_t)(EBP));
  /* 11457911 mov ebp, esp */
  EBP = (ESP);
L_11457913:;
  /* 11457913 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457916 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457919 je 0x11457956 */
  if (C.zf) goto L_11457956;
  /* 1145791b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145791e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11457921 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11457923 je 0x11457956 */
  if (C.zf) goto L_11457956;
  /* 11457925 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457928 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1145792a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145792d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1145792f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11457931 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457934 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11457936 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457939 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145793c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1145793e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457941 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457944 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11457947 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145794a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1145794c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145794f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457952 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11457954 jmp 0x11457913 */
  goto L_11457913;
L_11457956:;
  /* 11457956 pop ebp */
  EBP = (pop32());
  /* 11457957 ret  */
  ESPCHK(0x11457910u, _esp0);
  ESP += 4; return;
}

/* FUN_10017960 @ 0x11457960 (173 bytes, 64 insns) */
void f_11457960(void) {
  FTRACE(0x11457960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11457960 push ebp */
  push32((uint32_t)(EBP));
  /* 11457961 mov ebp, esp */
  EBP = (ESP);
  /* 11457963 push ecx */
  push32((uint32_t)(ECX));
  /* 11457964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1145796b cmp dword ptr [0x11474c18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457972 je 0x1145798a */
  if (C.zf) goto L_1145798a;
  /* 11457974 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457977 push eax */
  push32((uint32_t)(EAX));
  /* 11457978 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145797b push ecx */
  push32((uint32_t)(ECX));
  /* 1145797c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145797f push edx */
  push32((uint32_t)(EDX));
  /* 11457980 call 0x11457a10 */
  push32(0x11457985u); f_11457a10();
  /* 11457985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457988 jmp 0x11457a09 */
  goto L_11457a09;
L_1145798a:;
  /* 1145798a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145798d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457990 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457992 jae 0x11457a00 */
  if (!C.cf) goto L_11457a00;
  /* 11457994 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457997 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145799a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1145799d jmp 0x114579a8 */
  goto L_114579a8;
L_1145799f:;
  /* 1145799f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114579a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114579a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_114579a8:;
  /* 114579a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114579ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114579ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114579b0 je 0x114579e4 */
  if (C.zf) goto L_114579e4;
  /* 114579b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114579b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114579b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 114579bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114579bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114579c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114579c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114579c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114579c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 114579cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114579ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114579cf mov ecx, 0xa */
  ECX = (0xau);
  /* 114579d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114579d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114579d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114579dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114579df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114579e2 jmp 0x1145799f */
  goto L_1145799f;
L_114579e4:;
  /* 114579e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114579e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114579e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114579ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114579ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114579f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114579f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114579f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114579f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114579fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114579fe jmp 0x11457a09 */
  goto L_11457a09;
L_11457a00:;
  /* 11457a00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457a03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11457a09:;
  /* 11457a09 mov esp, ebp */
  ESP = (EBP);
  /* 11457a0b pop ebp */
  EBP = (pop32());
  /* 11457a0c ret  */
  ESPCHK(0x11457960u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11457a10 (172 bytes, 65 insns) */
void f_11457a10(void) {
  FTRACE(0x11457a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11457a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11457a11 mov ebp, esp */
  EBP = (ESP);
  /* 11457a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457a16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457a19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11457a1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11457a1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457a21 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457a24 jbe 0x11457a6b */
  if ((C.cf||C.zf)) goto L_11457a6b;
L_11457a26:;
  /* 11457a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457a29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11457a2a mov ecx, 0xa */
  ECX = (0xau);
  /* 11457a2f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11457a31 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457a37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11457a39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457a3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457a3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11457a42 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457a45 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11457a47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457a4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457a4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11457a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457a52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11457a53 mov ecx, 0xa */
  ECX = (0xau);
  /* 11457a58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11457a5a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11457a5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457a61 jle 0x11457a6b */
  if ((C.zf||C.sf!=C.of)) goto L_11457a6b;
  /* 11457a63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457a66 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457a69 ja 0x11457a26 */
  if ((!C.cf&&!C.zf)) goto L_11457a26;
L_11457a6b:;
  /* 11457a6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457a6e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11457a70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11457a73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457a79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11457a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457a7e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457a81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11457a84:;
  /* 11457a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457a87 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11457a89 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11457a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457a8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11457a92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11457a94 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11457a96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457a99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457a9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11457a9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11457aa2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11457aa5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11457aa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11457aaa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457aad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11457ab0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11457ab3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457ab6 jb 0x11457a84 */
  if (C.cf) goto L_11457a84;
  /* 11457ab8 mov esp, ebp */
  ESP = (EBP);
  /* 11457aba pop ebp */
  EBP = (pop32());
  /* 11457abb ret  */
  ESPCHK(0x11457a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ac0 @ 0x11457ac0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11457ac0(void) {
  FTRACE(0x11457ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11457ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11457ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11457ac3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11457ac6:;
  /* 11457ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457ac9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11457acc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11457ace je 0x11457f3c */
  if (C.zf) goto L_11457f3c;
  /* 11457ad4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457ad7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457ada je 0x11457f3c */
  if (C.zf) goto L_11457f3c;
  /* 11457ae0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11457ae4 mov dword ptr [0x11474c18], 0 */
  w32((uint32_t)(0x11474c18), (0x0u));
  /* 11457aee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11457af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457af8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11457afb jmp 0x11457b06 */
  goto L_11457b06;
L_11457afd:;
  /* 11457afd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457b00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457b03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11457b06:;
  /* 11457b06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457b09 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11457b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457b0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11457b12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457b15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457b18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11457b1b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457b1d jne 0x11457b21 */
  if (!C.zf) goto L_11457b21;
  /* 11457b1f jmp 0x11457afd */
  goto L_11457afd;
L_11457b21:;
  /* 11457b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457b24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457b27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11457b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457b2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11457b30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11457b33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11457b36 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457b39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11457b3c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457b40 ja 0x11457e90 */
  if ((!C.cf&&!C.zf)) goto L_11457e90;
  /* 11457b46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11457b49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11457b4b mov al, byte ptr [ecx + 0x11457f6c] */
  AL = (r8((uint32_t)(ECX + 0x11457f6c)));
  /* 11457b51 jmp dword ptr [eax*4 + 0x11457f40] */
  switch (EAX) {
    case 0: goto L_11457daf;
    case 1: goto L_11457c93;
    case 2: goto L_11457c1e;
    case 3: goto L_11457b58;
    case 4: goto L_11457b96;
    case 5: goto L_11457bf7;
    case 6: goto L_11457c45;
    case 7: goto L_11457c6c;
    case 8: goto L_11457cda;
    case 9: goto L_11457bd4;
    case 10: goto L_11457e90;
    default: x86_unimpl("switch@0x11457b51 out of table"); return;
  }
L_11457b58:;
  /* 11457b58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457b5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11457b5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11457b61 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457b64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11457b67 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457b6b ja 0x11457b91 */
  if ((!C.cf&&!C.zf)) goto L_11457b91;
  /* 11457b6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11457b70 jmp dword ptr [ecx*4 + 0x11457fbf] */
  switch (ECX) {
    case 0: goto L_11457b77;
    case 1: goto L_11457b81;
    case 2: goto L_11457b87;
    case 3: goto L_11457b8d;
    case 4: goto L_11457bb5;
    case 5: goto L_11457bbf;
    case 6: goto L_11457bc5;
    case 7: goto L_11457bcb;
    default: x86_unimpl("switch@0x11457b70 out of table"); return;
  }
L_11457b77:;
  /* 11457b77 mov dword ptr [0x11474c18], 1 */
  w32((uint32_t)(0x11474c18), (0x1u));
L_11457b81:;
  /* 11457b81 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11457b85 jmp 0x11457b91 */
  goto L_11457b91;
L_11457b87:;
  /* 11457b87 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11457b8b jmp 0x11457b91 */
  goto L_11457b91;
L_11457b8d:;
  /* 11457b8d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11457b91:;
  /* 11457b91 jmp 0x11457e90 */
  goto L_11457e90;
L_11457b96:;
  /* 11457b96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457b99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11457b9c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11457b9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457ba2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11457ba5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457ba9 ja 0x11457bcf */
  if ((!C.cf&&!C.zf)) goto L_11457bcf;
  /* 11457bab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11457bae jmp dword ptr [ecx*4 + 0x11457fcf] */
  switch (ECX) {
    case 0: goto L_11457bb5;
    case 1: goto L_11457bbf;
    case 2: goto L_11457bc5;
    case 3: goto L_11457bcb;
    default: x86_unimpl("switch@0x11457bae out of table"); return;
  }
L_11457bb5:;
  /* 11457bb5 mov dword ptr [0x11474c18], 1 */
  w32((uint32_t)(0x11474c18), (0x1u));
L_11457bbf:;
  /* 11457bbf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11457bc3 jmp 0x11457bcf */
  goto L_11457bcf;
L_11457bc5:;
  /* 11457bc5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11457bc9 jmp 0x11457bcf */
  goto L_11457bcf;
L_11457bcb:;
  /* 11457bcb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11457bcf:;
  /* 11457bcf jmp 0x11457e90 */
  goto L_11457e90;
L_11457bd4:;
  /* 11457bd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457bd7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11457bda cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457bde je 0x11457be8 */
  if (C.zf) goto L_11457be8;
  /* 11457be0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457be4 je 0x11457bee */
  if (C.zf) goto L_11457bee;
  /* 11457be6 jmp 0x11457bf2 */
  goto L_11457bf2;
L_11457be8:;
  /* 11457be8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11457bec jmp 0x11457bf2 */
  goto L_11457bf2;
L_11457bee:;
  /* 11457bee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11457bf2:;
  /* 11457bf2 jmp 0x11457e90 */
  goto L_11457e90;
L_11457bf7:;
  /* 11457bf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457bfa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11457bfd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457c01 je 0x11457c0b */
  if (C.zf) goto L_11457c0b;
  /* 11457c03 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457c07 je 0x11457c15 */
  if (C.zf) goto L_11457c15;
  /* 11457c09 jmp 0x11457c19 */
  goto L_11457c19;
L_11457c0b:;
  /* 11457c0b mov dword ptr [0x11474c18], 1 */
  w32((uint32_t)(0x11474c18), (0x1u));
L_11457c15:;
  /* 11457c15 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11457c19:;
  /* 11457c19 jmp 0x11457e90 */
  goto L_11457e90;
L_11457c1e:;
  /* 11457c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457c21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11457c24 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457c28 je 0x11457c32 */
  if (C.zf) goto L_11457c32;
  /* 11457c2a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457c2e je 0x11457c3c */
  if (C.zf) goto L_11457c3c;
  /* 11457c30 jmp 0x11457c40 */
  goto L_11457c40;
L_11457c32:;
  /* 11457c32 mov dword ptr [0x11474c18], 1 */
  w32((uint32_t)(0x11474c18), (0x1u));
L_11457c3c:;
  /* 11457c3c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11457c40:;
  /* 11457c40 jmp 0x11457e90 */
  goto L_11457e90;
L_11457c45:;
  /* 11457c45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457c48 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11457c4b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457c4f je 0x11457c59 */
  if (C.zf) goto L_11457c59;
  /* 11457c51 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457c55 je 0x11457c63 */
  if (C.zf) goto L_11457c63;
  /* 11457c57 jmp 0x11457c67 */
  goto L_11457c67;
L_11457c59:;
  /* 11457c59 mov dword ptr [0x11474c18], 1 */
  w32((uint32_t)(0x11474c18), (0x1u));
L_11457c63:;
  /* 11457c63 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11457c67:;
  /* 11457c67 jmp 0x11457e90 */
  goto L_11457e90;
L_11457c6c:;
  /* 11457c6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457c6f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11457c72 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457c76 je 0x11457c80 */
  if (C.zf) goto L_11457c80;
  /* 11457c78 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457c7c je 0x11457c8a */
  if (C.zf) goto L_11457c8a;
  /* 11457c7e jmp 0x11457c8e */
  goto L_11457c8e;
L_11457c80:;
  /* 11457c80 mov dword ptr [0x11474c18], 1 */
  w32((uint32_t)(0x11474c18), (0x1u));
L_11457c8a:;
  /* 11457c8a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11457c8e:;
  /* 11457c8e jmp 0x11457e90 */
  goto L_11457e90;
L_11457c93:;
  /* 11457c93 push 0x11471274 */
  push32((uint32_t)(0x11471274u));
  /* 11457c98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457c9b push ecx */
  push32((uint32_t)(ECX));
  /* 11457c9c call 0x114584f0 */
  push32(0x11457ca1u); f_114584f0();
  /* 11457ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11457ca6 jne 0x11457cb3 */
  if (!C.zf) goto L_11457cb3;
  /* 11457ca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457cab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457cae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11457cb1 jmp 0x11457cd1 */
  goto L_11457cd1;
L_11457cb3:;
  /* 11457cb3 push 0x11471270 */
  push32((uint32_t)(0x11471270u));
  /* 11457cb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457cbb push eax */
  push32((uint32_t)(EAX));
  /* 11457cbc call 0x114584f0 */
  push32(0x11457cc1u); f_114584f0();
  /* 11457cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11457cc6 jne 0x11457cd1 */
  if (!C.zf) goto L_11457cd1;
  /* 11457cc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457ccb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457cce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11457cd1:;
  /* 11457cd1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11457cd5 jmp 0x11457e90 */
  goto L_11457e90;
L_11457cda:;
  /* 11457cda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457cdd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457ce1 jg 0x11457cf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11457cf1;
  /* 11457ce3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457ce6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11457cec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11457cef jmp 0x11457cfd */
  goto L_11457cfd;
L_11457cf1:;
  /* 11457cf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457cf4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11457cfa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11457cfd:;
  /* 11457cfd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457d01 jle 0x11457da4 */
  if ((C.zf||C.sf!=C.of)) goto L_11457da4;
  /* 11457d07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457d0a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457d0d jbe 0x11457da4 */
  if ((C.cf||C.zf)) goto L_11457da4;
  /* 11457d13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11457d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11457d18 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11457d1a mov ecx, dword ptr [0x11472db8] */
  ECX = (r32((uint32_t)(0x11472db8)));
  /* 11457d20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11457d22 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11457d26 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11457d2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11457d2e je 0x11457d67 */
  if (C.zf) goto L_11457d67;
  /* 11457d30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457d33 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457d36 jbe 0x11457d67 */
  if ((C.cf||C.zf)) goto L_11457d67;
  /* 11457d38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457d3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11457d3d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11457d40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11457d42 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11457d44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457d47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11457d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457d4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457d4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11457d51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11457d54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457d57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11457d5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457d5d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11457d5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457d62 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457d65 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11457d67:;
  /* 11457d67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457d6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11457d6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11457d6f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11457d71 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11457d73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457d76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11457d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457d7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457d7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11457d80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11457d83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457d86 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11457d89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457d8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11457d8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457d91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457d94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11457d96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457d99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457d9c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11457d9f jmp 0x11457cfd */
  goto L_11457cfd;
L_11457da4:;
  /* 11457da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457da7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11457daa jmp 0x11457ac6 */
  goto L_11457ac6;
L_11457daf:;
  /* 11457daf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11457db2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11457db5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11457db7 je 0x11457e82 */
  if (C.zf) goto L_11457e82;
  /* 11457dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457dc0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457dc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11457dc6:;
  /* 11457dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457dc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11457dcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11457dce je 0x11457e80 */
  if (C.zf) goto L_11457e80;
  /* 11457dd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457dd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457dda je 0x11457e80 */
  if (C.zf) goto L_11457e80;
  /* 11457de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457de3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11457de6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457de9 jne 0x11457df9 */
  if (!C.zf) goto L_11457df9;
  /* 11457deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457dee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457df1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11457df4 jmp 0x11457e80 */
  goto L_11457e80;
L_11457df9:;
  /* 11457df9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457dfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11457dfe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11457e00 mov edx, dword ptr [0x11472db8] */
  EDX = (r32((uint32_t)(0x11472db8)));
  /* 11457e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11457e08 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11457e0c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11457e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11457e13 je 0x11457e4c */
  if (C.zf) goto L_11457e4c;
  /* 11457e15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457e18 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457e1b jbe 0x11457e4c */
  if ((C.cf||C.zf)) goto L_11457e4c;
  /* 11457e1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457e20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11457e22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457e25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11457e27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11457e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457e2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11457e2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457e31 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457e34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11457e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457e3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11457e3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457e42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11457e44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457e47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457e4a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11457e4c:;
  /* 11457e4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457e4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11457e51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457e54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11457e56 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11457e58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457e5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11457e5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457e63 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11457e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457e6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11457e6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457e71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11457e73 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457e76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457e79 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11457e7b jmp 0x11457dc6 */
  goto L_11457dc6;
L_11457e80:;
  /* 11457e80 jmp 0x11457e8b */
  goto L_11457e8b;
L_11457e82:;
  /* 11457e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457e85 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457e88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11457e8b:;
  /* 11457e8b jmp 0x11457ac6 */
  goto L_11457ac6;
L_11457e90:;
  /* 11457e90 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11457e94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11457e96 je 0x11457ebc */
  if (C.zf) goto L_11457ebc;
  /* 11457e98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11457e9b push edx */
  push32((uint32_t)(EDX));
  /* 11457e9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457e9f push eax */
  push32((uint32_t)(EAX));
  /* 11457ea0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11457ea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11457ea7 push edx */
  push32((uint32_t)(EDX));
  /* 11457ea8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11457eab push eax */
  push32((uint32_t)(EAX));
  /* 11457eac call 0x114572f0 */
  push32(0x11457eb1u); f_114572f0();
  /* 11457eb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11457eb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11457eb7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11457eba jmp 0x11457f37 */
  goto L_11457f37;
L_11457ebc:;
  /* 11457ebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11457ec1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11457ec3 mov ecx, dword ptr [0x11472db8] */
  ECX = (r32((uint32_t)(0x11472db8)));
  /* 11457ec9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11457ecb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11457ecf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11457ed5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11457ed7 je 0x11457f08 */
  if (C.zf) goto L_11457f08;
  /* 11457ed9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457edc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11457ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457ee1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11457ee3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11457ee5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457ee8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11457eea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457eed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457ef0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11457ef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457ef8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11457efb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457efe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11457f00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457f03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457f06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11457f08:;
  /* 11457f08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457f0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11457f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457f10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11457f12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11457f14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457f17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11457f19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457f1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11457f1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11457f21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11457f24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11457f27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11457f2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457f2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11457f2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457f32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457f35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11457f37:;
  /* 11457f37 jmp 0x11457ac6 */
  goto L_11457ac6;
L_11457f3c:;
  /* 11457f3c mov esp, ebp */
  ESP = (EBP);
  /* 11457f3e pop ebp */
  EBP = (pop32());
  /* 11457f3f ret  */
  ESPCHK(0x11457ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fe0 @ 0x11457fe0 (650 bytes, 178 insns) */
void f_11457fe0(void) {
  FTRACE(0x11457fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11457fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11457fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11457fe3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11457fe9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11457fed jne 0x11458149 */
  if (!C.zf) goto L_11458149;
  /* 11457ff3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11457ff6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11457ffc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11458002 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11458005 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1145800c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11458016 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458018 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1145801e push edx */
  push32((uint32_t)(EDX));
  /* 1145801f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11458022 push eax */
  push32((uint32_t)(EAX));
  /* 11458023 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11458026 push ecx */
  push32((uint32_t)(ECX));
  /* 11458027 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145802a push edx */
  push32((uint32_t)(EDX));
  /* 1145802b call 0x11458870 */
  push32(0x11458030u); f_11458870();
  /* 11458030 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458033 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11458036 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145803a jne 0x114580cf */
  if (!C.zf) goto L_114580cf;
  /* 11458040 call dword ptr [0x114772f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f4))), 0x11458046u);
  /* 11458046 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458049 je 0x11458050 */
  if (C.zf) goto L_11458050;
  /* 1145804b jmp 0x1145812d */
  goto L_1145812d;
L_11458050:;
  /* 11458050 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458052 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458054 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458056 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11458059 push eax */
  push32((uint32_t)(EAX));
  /* 1145805a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145805d push ecx */
  push32((uint32_t)(ECX));
  /* 1145805e call 0x11458870 */
  push32(0x11458063u); f_11458870();
  /* 11458063 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458066 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1145806c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458073 jne 0x1145807a */
  if (!C.zf) goto L_1145807a;
  /* 11458075 jmp 0x1145812d */
  goto L_1145812d;
L_1145807a:;
  /* 1145807a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1145807c push 0x1147127c */
  push32((uint32_t)(0x1147127cu));
  /* 11458081 push 2 */
  push32((uint32_t)(0x2u));
  /* 11458083 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11458089 push edx */
  push32((uint32_t)(EDX));
  /* 1145808a call 0x114485f0 */
  push32(0x1145808fu); f_114485f0();
  /* 1145808f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458092 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11458095 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458099 jne 0x114580a0 */
  if (!C.zf) goto L_114580a0;
  /* 1145809b jmp 0x1145812d */
  goto L_1145812d;
L_114580a0:;
  /* 114580a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114580a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114580a9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 114580af push eax */
  push32((uint32_t)(EAX));
  /* 114580b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114580b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114580b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114580b7 push edx */
  push32((uint32_t)(EDX));
  /* 114580b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114580bb push eax */
  push32((uint32_t)(EAX));
  /* 114580bc call 0x11458870 */
  push32(0x114580c1u); f_11458870();
  /* 114580c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114580c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114580c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114580cb jne 0x114580cf */
  if (!C.zf) goto L_114580cf;
  /* 114580cd jmp 0x1145812d */
  goto L_1145812d;
L_114580cf:;
  /* 114580cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 114580d1 push 0x1147127c */
  push32((uint32_t)(0x1147127cu));
  /* 114580d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114580d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114580db push ecx */
  push32((uint32_t)(ECX));
  /* 114580dc call 0x114485f0 */
  push32(0x114580e1u); f_114485f0();
  /* 114580e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114580e4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 114580ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114580ec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 114580f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114580f5 jne 0x114580f9 */
  if (!C.zf) goto L_114580f9;
  /* 114580f7 jmp 0x1145812d */
  goto L_1145812d;
L_114580f9:;
  /* 114580f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114580fc push ecx */
  push32((uint32_t)(ECX));
  /* 114580fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11458100 push edx */
  push32((uint32_t)(EDX));
  /* 11458101 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11458107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11458109 push ecx */
  push32((uint32_t)(ECX));
  /* 1145810a call 0x1144cb30 */
  push32(0x1145810fu); f_1144cb30();
  /* 1145810f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458112 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458116 je 0x11458126 */
  if (C.zf) goto L_11458126;
  /* 11458118 push 2 */
  push32((uint32_t)(0x2u));
  /* 1145811a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145811d push edx */
  push32((uint32_t)(EDX));
  /* 1145811e call 0x11449080 */
  push32(0x11458123u); f_11449080();
  /* 11458123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11458126:;
  /* 11458126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11458128 jmp 0x11458266 */
  goto L_11458266;
L_1145812d:;
  /* 1145812d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458131 je 0x11458141 */
  if (C.zf) goto L_11458141;
  /* 11458133 push 2 */
  push32((uint32_t)(0x2u));
  /* 11458135 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11458138 push eax */
  push32((uint32_t)(EAX));
  /* 11458139 call 0x11449080 */
  push32(0x1145813eu); f_11449080();
  /* 1145813e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11458141:;
  /* 11458141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11458144 jmp 0x11458266 */
  goto L_11458266;
L_11458149:;
  /* 11458149 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145814d jne 0x11458263 */
  if (!C.zf) goto L_11458263;
  /* 11458153 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1145815d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11458160 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11458166 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458168 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1145816e push edx */
  push32((uint32_t)(EDX));
  /* 1145816f push 0x11474bf0 */
  push32((uint32_t)(0x11474bf0u));
  /* 11458174 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11458177 push eax */
  push32((uint32_t)(EAX));
  /* 11458178 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145817b push ecx */
  push32((uint32_t)(ECX));
  /* 1145817c call 0x114586d0 */
  push32(0x11458181u); f_114586d0();
  /* 11458181 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11458186 jne 0x11458190 */
  if (!C.zf) goto L_11458190;
  /* 11458188 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1145818b jmp 0x11458266 */
  goto L_11458266;
L_11458190:;
  /* 11458190 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11458196 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11458199 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 114581a3 jmp 0x114581b4 */
  goto L_114581b4;
L_114581a5:;
  /* 114581a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114581ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114581ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_114581b4:;
  /* 114581b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114581bb jge 0x1145825f */
  if ((C.sf==C.of)) goto L_1145825f;
  /* 114581c1 cmp dword ptr [0x11472fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11472fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114581c8 jle 0x114581fb */
  if ((C.zf||C.sf!=C.of)) goto L_114581fb;
  /* 114581ca push 4 */
  push32((uint32_t)(0x4u));
  /* 114581cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114581d2 mov dl, byte ptr [ecx*2 + 0x11474bf0] */
  DL = (r8((uint32_t)(ECX*2 + 0x11474bf0)));
  /* 114581d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 114581df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 114581e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114581ea push eax */
  push32((uint32_t)(EAX));
  /* 114581eb call 0x1144ef40 */
  push32(0x114581f0u); f_1144ef40();
  /* 114581f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114581f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 114581f9 jmp 0x1145822e */
  goto L_1145822e;
L_114581fb:;
  /* 114581fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11458201 mov dl, byte ptr [ecx*2 + 0x11474bf0] */
  DL = (r8((uint32_t)(ECX*2 + 0x11474bf0)));
  /* 11458208 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1145820e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11458214 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11458219 mov ecx, dword ptr [0x11472db8] */
  ECX = (r32((uint32_t)(0x11472db8)));
  /* 1145821f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11458221 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11458225 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11458228 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1145822e:;
  /* 1145822e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458235 je 0x11458258 */
  if (C.zf) goto L_11458258;
  /* 11458237 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1145823d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11458240 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11458243 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1145824a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1145824e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11458254 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11458256 jmp 0x1145825a */
  goto L_1145825a;
L_11458258:;
  /* 11458258 jmp 0x1145825f */
  goto L_1145825f;
L_1145825a:;
  /* 1145825a jmp 0x114581a5 */
  goto L_114581a5;
L_1145825f:;
  /* 1145825f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11458261 jmp 0x11458266 */
  goto L_11458266;
L_11458263:;
  /* 11458263 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11458266:;
  /* 11458266 mov esp, ebp */
  ESP = (EBP);
  /* 11458268 pop ebp */
  EBP = (pop32());
  /* 11458269 ret  */
  ESPCHK(0x11457fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018270 @ 0x11458270 (10 bytes, 5 insns) */
void f_11458270(void) {
  FTRACE(0x11458270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11458270 push ebp */
  push32((uint32_t)(EBP));
  /* 11458271 mov ebp, esp */
  EBP = (ESP);
  /* 11458273 mov eax, dword ptr [0x11473eb0] */
  EAX = (r32((uint32_t)(0x11473eb0)));
  /* 11458278 pop ebp */
  EBP = (pop32());
  /* 11458279 ret  */
  ESPCHK(0x11458270u, _esp0);
  ESP += 4; return;
}

/* FUN_10018280 @ 0x11458280 (575 bytes, 196 insns) */
void f_11458280(void) {
  FTRACE(0x11458280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11458280 push ebp */
  push32((uint32_t)(EBP));
  /* 11458281 mov ebp, esp */
  EBP = (ESP);
  /* 11458283 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11458285 push 0x11471288 */
  push32((uint32_t)(0x11471288u));
  /* 1145828a push 0x11452558 */
  push32((uint32_t)(0x11452558u));
  /* 1145828f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11458295 push eax */
  push32((uint32_t)(EAX));
  /* 11458296 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1145829d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114582a0 push ebx */
  push32((uint32_t)(EBX));
  /* 114582a1 push esi */
  push32((uint32_t)(ESI));
  /* 114582a2 push edi */
  push32((uint32_t)(EDI));
  /* 114582a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114582a6 cmp dword ptr [0x11474bfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474bfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114582ad jne 0x114582fe */
  if (!C.zf) goto L_114582fe;
  /* 114582af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 114582b2 push eax */
  push32((uint32_t)(EAX));
  /* 114582b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114582b5 push 0x11470944 */
  push32((uint32_t)(0x11470944u));
  /* 114582ba push 1 */
  push32((uint32_t)(0x1u));
  /* 114582bc call dword ptr [0x1147733c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147733c))), 0x114582c2u);
  /* 114582c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114582c4 je 0x114582d2 */
  if (C.zf) goto L_114582d2;
  /* 114582c6 mov dword ptr [0x11474bfc], 1 */
  w32((uint32_t)(0x11474bfc), (0x1u));
  /* 114582d0 jmp 0x114582fe */
  goto L_114582fe;
L_114582d2:;
  /* 114582d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 114582d5 push ecx */
  push32((uint32_t)(ECX));
  /* 114582d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 114582d8 push 0x11470940 */
  push32((uint32_t)(0x11470940u));
  /* 114582dd push 1 */
  push32((uint32_t)(0x1u));
  /* 114582df push 0 */
  push32((uint32_t)(0x0u));
  /* 114582e1 call dword ptr [0x11477340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477340))), 0x114582e7u);
  /* 114582e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114582e9 je 0x114582f7 */
  if (C.zf) goto L_114582f7;
  /* 114582eb mov dword ptr [0x11474bfc], 2 */
  w32((uint32_t)(0x11474bfc), (0x2u));
  /* 114582f5 jmp 0x114582fe */
  goto L_114582fe;
L_114582f7:;
  /* 114582f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114582f9 jmp 0x114584d9 */
  goto L_114584d9;
L_114582fe:;
  /* 114582fe cmp dword ptr [0x11474bfc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11474bfc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458305 jne 0x11458322 */
  if (!C.zf) goto L_11458322;
  /* 11458307 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145830a push edx */
  push32((uint32_t)(EDX));
  /* 1145830b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145830e push eax */
  push32((uint32_t)(EAX));
  /* 1145830f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11458312 push ecx */
  push32((uint32_t)(ECX));
  /* 11458313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458316 push edx */
  push32((uint32_t)(EDX));
  /* 11458317 call dword ptr [0x1147733c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147733c))), 0x1145831du);
  /* 1145831d jmp 0x114584d9 */
  goto L_114584d9;
L_11458322:;
  /* 11458322 cmp dword ptr [0x11474bfc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11474bfc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458329 jne 0x114584d7 */
  if (!C.zf) goto L_114584d7;
  /* 1145832f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458333 jne 0x1145833d */
  if (!C.zf) goto L_1145833d;
  /* 11458335 mov eax, dword ptr [0x11474b68] */
  EAX = (r32((uint32_t)(0x11474b68)));
  /* 1145833a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1145833d:;
  /* 1145833d push 0 */
  push32((uint32_t)(0x0u));
  /* 1145833f push 0 */
  push32((uint32_t)(0x0u));
  /* 11458341 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458343 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11458348 push ecx */
  push32((uint32_t)(ECX));
  /* 11458349 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145834c push edx */
  push32((uint32_t)(EDX));
  /* 1145834d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11458352 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11458355 push eax */
  push32((uint32_t)(EAX));
  /* 11458356 call dword ptr [0x11477390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477390))), 0x1145835cu);
  /* 1145835c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1145835f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458363 jne 0x1145836c */
  if (!C.zf) goto L_1145836c;
  /* 11458365 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11458367 jmp 0x114584d9 */
  goto L_114584d9;
L_1145836c:;
  /* 1145836c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11458373 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11458376 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11458379 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1145837b call 0x1144c4b0 */
  push32(0x11458380u); f_1144c4b0();
  /* 11458380 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11458383 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11458386 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11458389 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1145838c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1145838f push edx */
  push32((uint32_t)(EDX));
  /* 11458390 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458392 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11458395 push eax */
  push32((uint32_t)(EAX));
  /* 11458396 call 0x1144cca0 */
  push32(0x1145839bu); f_1144cca0();
  /* 1145839b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145839e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114583a5 jmp 0x114583be */
  goto L_114583be;
  /* 114583a7 mov eax, 1 */
  EAX = (0x1u);
  /* 114583ac ret  */
  ESPCHK(0x11458280u, _esp0);
  ESP += 4; return;
  /* 114583ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114583b0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 114583b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114583be:;
  /* 114583be cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114583c2 jne 0x114583cb */
  if (!C.zf) goto L_114583cb;
  /* 114583c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114583c6 jmp 0x114584d9 */
  goto L_114584d9;
L_114583cb:;
  /* 114583cb push 0 */
  push32((uint32_t)(0x0u));
  /* 114583cd push 0 */
  push32((uint32_t)(0x0u));
  /* 114583cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114583d2 push ecx */
  push32((uint32_t)(ECX));
  /* 114583d3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114583d6 push edx */
  push32((uint32_t)(EDX));
  /* 114583d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114583da push eax */
  push32((uint32_t)(EAX));
  /* 114583db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114583de push ecx */
  push32((uint32_t)(ECX));
  /* 114583df push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114583e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114583e7 push edx */
  push32((uint32_t)(EDX));
  /* 114583e8 call dword ptr [0x11477390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477390))), 0x114583eeu);
  /* 114583ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114583f0 jne 0x114583f9 */
  if (!C.zf) goto L_114583f9;
  /* 114583f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114583f4 jmp 0x114584d9 */
  goto L_114584d9;
L_114583f9:;
  /* 114583f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11458400 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11458403 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11458407 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145840a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1145840c call 0x1144c4b0 */
  push32(0x11458411u); f_1144c4b0();
  /* 11458411 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11458414 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11458417 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1145841a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1145841d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11458424 jmp 0x1145843d */
  goto L_1145843d;
  /* 11458426 mov eax, 1 */
  EAX = (0x1u);
  /* 1145842b ret  */
  ESPCHK(0x11458280u, _esp0);
  ESP += 4; return;
  /* 1145842c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1145842f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11458436 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1145843d:;
  /* 1145843d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458441 jne 0x1145844a */
  if (!C.zf) goto L_1145844a;
  /* 11458443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11458445 jmp 0x114584d9 */
  goto L_114584d9;
L_1145844a:;
  /* 1145844a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145844e jne 0x11458459 */
  if (!C.zf) goto L_11458459;
  /* 11458450 mov edx, dword ptr [0x11474b58] */
  EDX = (r32((uint32_t)(0x11474b58)));
  /* 11458456 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11458459:;
  /* 11458459 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145845c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1145845f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11458465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11458468 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1145846b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11458472 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11458475 push ecx */
  push32((uint32_t)(ECX));
  /* 11458476 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11458479 push edx */
  push32((uint32_t)(EDX));
  /* 1145847a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1145847d push eax */
  push32((uint32_t)(EAX));
  /* 1145847e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458481 push ecx */
  push32((uint32_t)(ECX));
  /* 11458482 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11458485 push edx */
  push32((uint32_t)(EDX));
  /* 11458486 call dword ptr [0x11477340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477340))), 0x1145848cu);
  /* 1145848c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1145848f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11458492 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11458495 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11458497 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1145849c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114584a2 je 0x114584b8 */
  if (C.zf) goto L_114584b8;
  /* 114584a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114584a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114584aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114584ac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114584b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114584b6 je 0x114584bc */
  if (C.zf) goto L_114584bc;
L_114584b8:;
  /* 114584b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114584ba jmp 0x114584d9 */
  goto L_114584d9;
L_114584bc:;
  /* 114584bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114584bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114584c1 push eax */
  push32((uint32_t)(EAX));
  /* 114584c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114584c5 push ecx */
  push32((uint32_t)(ECX));
  /* 114584c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114584c9 push edx */
  push32((uint32_t)(EDX));
  /* 114584ca call 0x11451200 */
  push32(0x114584cfu); f_11451200();
  /* 114584cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114584d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114584d5 jmp 0x114584d9 */
  goto L_114584d9;
L_114584d7:;
  /* 114584d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114584d9:;
  /* 114584d9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 114584dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114584df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114584e6 pop edi */
  EDI = (pop32());
  /* 114584e7 pop esi */
  ESI = (pop32());
  /* 114584e8 pop ebx */
  EBX = (pop32());
  /* 114584e9 mov esp, ebp */
  ESP = (EBP);
  /* 114584eb pop ebp */
  EBP = (pop32());
  /* 114584ec ret  */
  ESPCHK(0x11458280u, _esp0);
  ESP += 4; return;
}

/* FUN_100184f0 @ 0x114584f0 (208 bytes, 85 insns) */
void f_114584f0(void) {
  FTRACE(0x114584f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114584f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114584f1 mov ebp, esp */
  EBP = (ESP);
  /* 114584f3 push edi */
  push32((uint32_t)(EDI));
  /* 114584f4 push esi */
  push32((uint32_t)(ESI));
  /* 114584f5 push ebx */
  push32((uint32_t)(EBX));
  /* 114584f6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 114584f9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 114584fc lea eax, [0x11474b50] */
  EAX = ((uint32_t)(0x11474b50));
  /* 11458502 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458506 jne 0x11458543 */
  if (!C.zf) goto L_11458543;
  /* 11458508 mov al, 0xff */
  AL = (0xffu);
  /* 1145850a mov edi, edi */
  EDI = (EDI);
L_1145850c:;
  /* 1145850c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1145850e je 0x1145853e */
  if (C.zf) goto L_1145853e;
  /* 11458510 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11458512 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11458513 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11458515 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11458516 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11458518 je 0x1145850c */
  if (C.zf) goto L_1145850c;
  /* 1145851a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1145851c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1145851e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11458520 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11458523 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11458525 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11458527 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11458529 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1145852b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1145852d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1145852f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11458532 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11458534 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11458536 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11458538 je 0x1145850c */
  if (C.zf) goto L_1145850c;
  /* 1145853a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1145853c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1145853e:;
  /* 1145853e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11458541 jmp 0x114585bb */
  goto L_114585bb;
L_11458543:;
  /* 11458543 lock inc dword ptr [0x11474c2c] */
  x86_unimpl("lock inc @ 0x11458543");
  /* 1145854a cmp dword ptr [0x11474c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458551 jg 0x11458557 */
  if ((!C.zf&&C.sf==C.of)) goto L_11458557;
  /* 11458553 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458555 jmp 0x1145856c */
  goto L_1145856c;
L_11458557:;
  /* 11458557 lock dec dword ptr [0x11474c2c] */
  x86_unimpl("lock dec @ 0x11458557");
  /* 1145855e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11458560 call 0x1144b210 */
  push32(0x11458565u); f_1144b210();
  /* 11458565 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1145856c:;
  /* 1145856c mov eax, 0xff */
  EAX = (0xffu);
  /* 11458571 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11458573 nop  */
  /* nop */
L_11458574:;
  /* 11458574 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11458576 je 0x1145859f */
  if (C.zf) goto L_1145859f;
  /* 11458578 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1145857a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1145857b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1145857d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1145857e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11458580 je 0x11458574 */
  if (C.zf) goto L_11458574;
  /* 11458582 push eax */
  push32((uint32_t)(EAX));
  /* 11458583 push ebx */
  push32((uint32_t)(EBX));
  /* 11458584 call 0x11458ad0 */
  push32(0x11458589u); f_11458ad0();
  /* 11458589 mov ebx, eax */
  EBX = (EAX);
  /* 1145858b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145858e call 0x11458ad0 */
  push32(0x11458593u); f_11458ad0();
  /* 11458593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458596 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11458598 je 0x11458574 */
  if (C.zf) goto L_11458574;
  /* 1145859a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145859c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1145859f:;
  /* 1145859f mov ebx, eax */
  EBX = (EAX);
  /* 114585a1 pop eax */
  EAX = (pop32());
  /* 114585a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114585a4 jne 0x114585af */
  if (!C.zf) goto L_114585af;
  /* 114585a6 lock dec dword ptr [0x11474c2c] */
  x86_unimpl("lock dec @ 0x114585a6");
  /* 114585ad jmp 0x114585b9 */
  goto L_114585b9;
L_114585af:;
  /* 114585af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114585b1 call 0x1144b2b0 */
  push32(0x114585b6u); f_1144b2b0();
  /* 114585b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114585b9:;
  /* 114585b9 mov eax, ebx */
  EAX = (EBX);
L_114585bb:;
  /* 114585bb pop ebx */
  EBX = (pop32());
  /* 114585bc pop esi */
  ESI = (pop32());
  /* 114585bd pop edi */
  EDI = (pop32());
  /* 114585be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114585bf ret  */
  ESPCHK(0x114584f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100185c0 @ 0x114585c0 (257 bytes, 103 insns) */
void f_114585c0(void) {
  FTRACE(0x114585c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114585c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114585c1 mov ebp, esp */
  EBP = (ESP);
  /* 114585c3 push edi */
  push32((uint32_t)(EDI));
  /* 114585c4 push esi */
  push32((uint32_t)(ESI));
  /* 114585c5 push ebx */
  push32((uint32_t)(EBX));
  /* 114585c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114585c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114585cb je 0x114586ba */
  if (C.zf) goto L_114586ba;
  /* 114585d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 114585d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 114585d7 lea eax, [0x11474b50] */
  EAX = ((uint32_t)(0x11474b50));
  /* 114585dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114585e1 jne 0x11458631 */
  if (!C.zf) goto L_11458631;
  /* 114585e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 114585e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 114585e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 114585e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114585ec:;
  /* 114585ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 114585ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 114585f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 114585f2 je 0x11458615 */
  if (C.zf) goto L_11458615;
  /* 114585f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114585f6 je 0x11458615 */
  if (C.zf) goto L_11458615;
  /* 114585f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114585f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114585fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114585fc jb 0x11458604 */
  if (C.cf) goto L_11458604;
  /* 114585fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11458600 ja 0x11458604 */
  if ((!C.cf&&!C.zf)) goto L_11458604;
  /* 11458602 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11458604:;
  /* 11458604 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11458606 jb 0x1145860e */
  if (C.cf) goto L_1145860e;
  /* 11458608 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1145860a ja 0x1145860e */
  if ((!C.cf&&!C.zf)) goto L_1145860e;
  /* 1145860c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1145860e:;
  /* 1145860e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11458610 jne 0x1145861f */
  if (!C.zf) goto L_1145861f;
  /* 11458612 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11458613 jne 0x114585ec */
  if (!C.zf) goto L_114585ec;
L_11458615:;
  /* 11458615 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11458617 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11458619 je 0x114586ba */
  if (C.zf) goto L_114586ba;
L_1145861f:;
  /* 1145861f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11458624 jb 0x114586ba */
  if (C.cf) goto L_114586ba;
  /* 1145862a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1145862c jmp 0x114586ba */
  goto L_114586ba;
L_11458631:;
  /* 11458631 lock inc dword ptr [0x11474c2c] */
  x86_unimpl("lock inc @ 0x11458631");
  /* 11458638 cmp dword ptr [0x11474c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145863f jg 0x11458645 */
  if ((!C.zf&&C.sf==C.of)) goto L_11458645;
  /* 11458641 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458643 jmp 0x1145865e */
  goto L_1145865e;
L_11458645:;
  /* 11458645 lock dec dword ptr [0x11474c2c] */
  x86_unimpl("lock dec @ 0x11458645");
  /* 1145864c mov ebx, ecx */
  EBX = (ECX);
  /* 1145864e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11458650 call 0x1144b210 */
  push32(0x11458655u); f_1144b210();
  /* 11458655 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1145865c mov ecx, ebx */
  ECX = (EBX);
L_1145865e:;
  /* 1145865e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11458660 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11458662 mov edi, edi */
  EDI = (EDI);
L_11458664:;
  /* 11458664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11458666 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11458668 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1145866a je 0x1145868f */
  if (C.zf) goto L_1145868f;
  /* 1145866c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1145866e je 0x1145868f */
  if (C.zf) goto L_1145868f;
  /* 11458670 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11458671 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11458672 push ecx */
  push32((uint32_t)(ECX));
  /* 11458673 push eax */
  push32((uint32_t)(EAX));
  /* 11458674 push ebx */
  push32((uint32_t)(EBX));
  /* 11458675 call 0x11458ad0 */
  push32(0x1145867au); f_11458ad0();
  /* 1145867a mov ebx, eax */
  EBX = (EAX);
  /* 1145867c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145867f call 0x11458ad0 */
  push32(0x11458684u); f_11458ad0();
  /* 11458684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458687 pop ecx */
  ECX = (pop32());
  /* 11458688 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145868a jne 0x11458695 */
  if (!C.zf) goto L_11458695;
  /* 1145868c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1145868d jne 0x11458664 */
  if (!C.zf) goto L_11458664;
L_1145868f:;
  /* 1145868f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11458691 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458693 je 0x1145869e */
  if (C.zf) goto L_1145869e;
L_11458695:;
  /* 11458695 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1145869a jb 0x1145869e */
  if (C.cf) goto L_1145869e;
  /* 1145869c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1145869e:;
  /* 1145869e pop eax */
  EAX = (pop32());
  /* 1145869f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114586a1 jne 0x114586ac */
  if (!C.zf) goto L_114586ac;
  /* 114586a3 lock dec dword ptr [0x11474c2c] */
  x86_unimpl("lock dec @ 0x114586a3");
  /* 114586aa jmp 0x114586ba */
  goto L_114586ba;
L_114586ac:;
  /* 114586ac mov ebx, ecx */
  EBX = (ECX);
  /* 114586ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114586b0 call 0x1144b2b0 */
  push32(0x114586b5u); f_1144b2b0();
  /* 114586b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114586b8 mov ecx, ebx */
  ECX = (EBX);
L_114586ba:;
  /* 114586ba mov eax, ecx */
  EAX = (ECX);
  /* 114586bc pop ebx */
  EBX = (pop32());
  /* 114586bd pop esi */
  ESI = (pop32());
  /* 114586be pop edi */
  EDI = (pop32());
  /* 114586bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114586c0 ret  */
  ESPCHK(0x114585c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100186d0 @ 0x114586d0 (382 bytes, 135 insns) */
void f_114586d0(void) {
  FTRACE(0x114586d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114586d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114586d1 mov ebp, esp */
  EBP = (ESP);
  /* 114586d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114586d5 push 0x114712a0 */
  push32((uint32_t)(0x114712a0u));
  /* 114586da push 0x11452558 */
  push32((uint32_t)(0x11452558u));
  /* 114586df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114586e5 push eax */
  push32((uint32_t)(EAX));
  /* 114586e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114586ed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114586f0 push ebx */
  push32((uint32_t)(EBX));
  /* 114586f1 push esi */
  push32((uint32_t)(ESI));
  /* 114586f2 push edi */
  push32((uint32_t)(EDI));
  /* 114586f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114586f6 cmp dword ptr [0x11474c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114586fd jne 0x11458742 */
  if (!C.zf) goto L_11458742;
  /* 114586ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11458701 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458703 push 1 */
  push32((uint32_t)(0x1u));
  /* 11458705 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458707 call dword ptr [0x114772f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f8))), 0x1145870du);
  /* 1145870d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145870f je 0x1145871d */
  if (C.zf) goto L_1145871d;
  /* 11458711 mov dword ptr [0x11474c00], 1 */
  w32((uint32_t)(0x11474c00), (0x1u));
  /* 1145871b jmp 0x11458742 */
  goto L_11458742;
L_1145871d:;
  /* 1145871d push 0 */
  push32((uint32_t)(0x0u));
  /* 1145871f push 0 */
  push32((uint32_t)(0x0u));
  /* 11458721 push 1 */
  push32((uint32_t)(0x1u));
  /* 11458723 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458725 call dword ptr [0x11477314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477314))), 0x1145872bu);
  /* 1145872b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145872d je 0x1145873b */
  if (C.zf) goto L_1145873b;
  /* 1145872f mov dword ptr [0x11474c00], 2 */
  w32((uint32_t)(0x11474c00), (0x2u));
  /* 11458739 jmp 0x11458742 */
  goto L_11458742;
L_1145873b:;
  /* 1145873b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145873d jmp 0x11458851 */
  goto L_11458851;
L_11458742:;
  /* 11458742 cmp dword ptr [0x11474c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11474c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458749 jne 0x11458766 */
  if (!C.zf) goto L_11458766;
  /* 1145874b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145874e push eax */
  push32((uint32_t)(EAX));
  /* 1145874f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11458752 push ecx */
  push32((uint32_t)(ECX));
  /* 11458753 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11458756 push edx */
  push32((uint32_t)(EDX));
  /* 11458757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145875a push eax */
  push32((uint32_t)(EAX));
  /* 1145875b call dword ptr [0x114772f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f8))), 0x11458761u);
  /* 11458761 jmp 0x11458851 */
  goto L_11458851;
L_11458766:;
  /* 11458766 cmp dword ptr [0x11474c00], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11474c00))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145876d jne 0x1145884f */
  if (!C.zf) goto L_1145884f;
  /* 11458773 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458777 jne 0x11458782 */
  if (!C.zf) goto L_11458782;
  /* 11458779 mov ecx, dword ptr [0x11474b68] */
  ECX = (r32((uint32_t)(0x11474b68)));
  /* 1145877f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11458782:;
  /* 11458782 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458784 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458786 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11458789 push edx */
  push32((uint32_t)(EDX));
  /* 1145878a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145878d push eax */
  push32((uint32_t)(EAX));
  /* 1145878e call dword ptr [0x11477314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477314))), 0x11458794u);
  /* 11458794 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11458797 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145879b jne 0x114587a4 */
  if (!C.zf) goto L_114587a4;
  /* 1145879d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145879f jmp 0x11458851 */
  goto L_11458851;
L_114587a4:;
  /* 114587a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114587ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114587ae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114587b1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114587b3 call 0x1144c4b0 */
  push32(0x114587b8u); f_1144c4b0();
  /* 114587b8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 114587bb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114587be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114587c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114587c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114587cb jmp 0x114587e4 */
  goto L_114587e4;
  /* 114587cd mov eax, 1 */
  EAX = (0x1u);
  /* 114587d2 ret  */
  ESPCHK(0x114586d0u, _esp0);
  ESP += 4; return;
  /* 114587d3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114587d6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 114587dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114587e4:;
  /* 114587e4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114587e8 jne 0x114587ee */
  if (!C.zf) goto L_114587ee;
  /* 114587ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114587ec jmp 0x11458851 */
  goto L_11458851;
L_114587ee:;
  /* 114587ee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114587f1 push edx */
  push32((uint32_t)(EDX));
  /* 114587f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114587f5 push eax */
  push32((uint32_t)(EAX));
  /* 114587f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114587f9 push ecx */
  push32((uint32_t)(ECX));
  /* 114587fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114587fd push edx */
  push32((uint32_t)(EDX));
  /* 114587fe call dword ptr [0x11477314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477314))), 0x11458804u);
  /* 11458804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11458806 jne 0x1145880c */
  if (!C.zf) goto L_1145880c;
  /* 11458808 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145880a jmp 0x11458851 */
  goto L_11458851;
L_1145880c:;
  /* 1145880c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458810 jne 0x1145882d */
  if (!C.zf) goto L_1145882d;
  /* 11458812 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458814 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458816 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11458818 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1145881b push eax */
  push32((uint32_t)(EAX));
  /* 1145881c push 1 */
  push32((uint32_t)(0x1u));
  /* 1145881e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11458821 push ecx */
  push32((uint32_t)(ECX));
  /* 11458822 call dword ptr [0x11477350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477350))), 0x11458828u);
  /* 11458828 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1145882b jmp 0x1145884a */
  goto L_1145884a;
L_1145882d:;
  /* 1145882d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11458830 push edx */
  push32((uint32_t)(EDX));
  /* 11458831 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11458834 push eax */
  push32((uint32_t)(EAX));
  /* 11458835 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11458837 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1145883a push ecx */
  push32((uint32_t)(ECX));
  /* 1145883b push 1 */
  push32((uint32_t)(0x1u));
  /* 1145883d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11458840 push edx */
  push32((uint32_t)(EDX));
  /* 11458841 call dword ptr [0x11477350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477350))), 0x11458847u);
  /* 11458847 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1145884a:;
  /* 1145884a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1145884d jmp 0x11458851 */
  goto L_11458851;
L_1145884f:;
  /* 1145884f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11458851:;
  /* 11458851 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11458854 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11458857 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1145885e pop edi */
  EDI = (pop32());
  /* 1145885f pop esi */
  ESI = (pop32());
  /* 11458860 pop ebx */
  EBX = (pop32());
  /* 11458861 mov esp, ebp */
  ESP = (EBP);
  /* 11458863 pop ebp */
  EBP = (pop32());
  /* 11458864 ret  */
  ESPCHK(0x114586d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018870 @ 0x11458870 (398 bytes, 140 insns) */
void f_11458870(void) {
  FTRACE(0x11458870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11458870 push ebp */
  push32((uint32_t)(EBP));
  /* 11458871 mov ebp, esp */
  EBP = (ESP);
  /* 11458873 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11458875 push 0x114712b0 */
  push32((uint32_t)(0x114712b0u));
  /* 1145887a push 0x11452558 */
  push32((uint32_t)(0x11452558u));
  /* 1145887f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11458885 push eax */
  push32((uint32_t)(EAX));
  /* 11458886 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1145888d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458890 push ebx */
  push32((uint32_t)(EBX));
  /* 11458891 push esi */
  push32((uint32_t)(ESI));
  /* 11458892 push edi */
  push32((uint32_t)(EDI));
  /* 11458893 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11458896 cmp dword ptr [0x11474c04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145889d jne 0x114588e2 */
  if (!C.zf) goto L_114588e2;
  /* 1145889f push 0 */
  push32((uint32_t)(0x0u));
  /* 114588a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114588a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114588a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114588a7 call dword ptr [0x114772f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f8))), 0x114588adu);
  /* 114588ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114588af je 0x114588bd */
  if (C.zf) goto L_114588bd;
  /* 114588b1 mov dword ptr [0x11474c04], 1 */
  w32((uint32_t)(0x11474c04), (0x1u));
  /* 114588bb jmp 0x114588e2 */
  goto L_114588e2;
L_114588bd:;
  /* 114588bd push 0 */
  push32((uint32_t)(0x0u));
  /* 114588bf push 0 */
  push32((uint32_t)(0x0u));
  /* 114588c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 114588c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114588c5 call dword ptr [0x11477314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477314))), 0x114588cbu);
  /* 114588cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114588cd je 0x114588db */
  if (C.zf) goto L_114588db;
  /* 114588cf mov dword ptr [0x11474c04], 2 */
  w32((uint32_t)(0x11474c04), (0x2u));
  /* 114588d9 jmp 0x114588e2 */
  goto L_114588e2;
L_114588db:;
  /* 114588db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114588dd jmp 0x11458a01 */
  goto L_11458a01;
L_114588e2:;
  /* 114588e2 cmp dword ptr [0x11474c04], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11474c04))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114588e9 jne 0x11458906 */
  if (!C.zf) goto L_11458906;
  /* 114588eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114588ee push eax */
  push32((uint32_t)(EAX));
  /* 114588ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114588f2 push ecx */
  push32((uint32_t)(ECX));
  /* 114588f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114588f6 push edx */
  push32((uint32_t)(EDX));
  /* 114588f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114588fa push eax */
  push32((uint32_t)(EAX));
  /* 114588fb call dword ptr [0x11477314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477314))), 0x11458901u);
  /* 11458901 jmp 0x11458a01 */
  goto L_11458a01;
L_11458906:;
  /* 11458906 cmp dword ptr [0x11474c04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11474c04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145890d jne 0x114589ff */
  if (!C.zf) goto L_114589ff;
  /* 11458913 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458917 jne 0x11458922 */
  if (!C.zf) goto L_11458922;
  /* 11458919 mov ecx, dword ptr [0x11474b68] */
  ECX = (r32((uint32_t)(0x11474b68)));
  /* 1145891f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11458922:;
  /* 11458922 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458924 push 0 */
  push32((uint32_t)(0x0u));
  /* 11458926 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11458929 push edx */
  push32((uint32_t)(EDX));
  /* 1145892a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145892d push eax */
  push32((uint32_t)(EAX));
  /* 1145892e call dword ptr [0x114772f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f8))), 0x11458934u);
  /* 11458934 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11458937 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145893b jne 0x11458944 */
  if (!C.zf) goto L_11458944;
  /* 1145893d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145893f jmp 0x11458a01 */
  goto L_11458a01;
L_11458944:;
  /* 11458944 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1145894b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1145894e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11458950 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11458953 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11458955 call 0x1144c4b0 */
  push32(0x1145895au); f_1144c4b0();
  /* 1145895a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1145895d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11458960 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11458963 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11458966 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1145896d jmp 0x11458986 */
  goto L_11458986;
  /* 1145896f mov eax, 1 */
  EAX = (0x1u);
  /* 11458974 ret  */
  ESPCHK(0x11458870u, _esp0);
  ESP += 4; return;
  /* 11458975 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11458978 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1145897f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11458986:;
  /* 11458986 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145898a jne 0x11458990 */
  if (!C.zf) goto L_11458990;
  /* 1145898c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145898e jmp 0x11458a01 */
  goto L_11458a01;
L_11458990:;
  /* 11458990 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11458993 push edx */
  push32((uint32_t)(EDX));
  /* 11458994 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11458997 push eax */
  push32((uint32_t)(EAX));
  /* 11458998 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145899b push ecx */
  push32((uint32_t)(ECX));
  /* 1145899c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145899f push edx */
  push32((uint32_t)(EDX));
  /* 114589a0 call dword ptr [0x114772f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f8))), 0x114589a6u);
  /* 114589a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114589a8 jne 0x114589ae */
  if (!C.zf) goto L_114589ae;
  /* 114589aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114589ac jmp 0x11458a01 */
  goto L_11458a01;
L_114589ae:;
  /* 114589ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114589b2 jne 0x114589d6 */
  if (!C.zf) goto L_114589d6;
  /* 114589b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114589b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114589b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114589ba push 0 */
  push32((uint32_t)(0x0u));
  /* 114589bc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114589be mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114589c1 push eax */
  push32((uint32_t)(EAX));
  /* 114589c2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114589c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114589ca push ecx */
  push32((uint32_t)(ECX));
  /* 114589cb call dword ptr [0x11477390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477390))), 0x114589d1u);
  /* 114589d1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114589d4 jmp 0x114589fa */
  goto L_114589fa;
L_114589d6:;
  /* 114589d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114589d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114589da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114589dd push edx */
  push32((uint32_t)(EDX));
  /* 114589de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114589e1 push eax */
  push32((uint32_t)(EAX));
  /* 114589e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114589e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114589e7 push ecx */
  push32((uint32_t)(ECX));
  /* 114589e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114589ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114589f0 push edx */
  push32((uint32_t)(EDX));
  /* 114589f1 call dword ptr [0x11477390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477390))), 0x114589f7u);
  /* 114589f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_114589fa:;
  /* 114589fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114589fd jmp 0x11458a01 */
  goto L_11458a01;
L_114589ff:;
  /* 114589ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11458a01:;
  /* 11458a01 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11458a04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11458a07 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11458a0e pop edi */
  EDI = (pop32());
  /* 11458a0f pop esi */
  ESI = (pop32());
  /* 11458a10 pop ebx */
  EBX = (pop32());
  /* 11458a11 mov esp, ebp */
  ESP = (EBP);
  /* 11458a13 pop ebp */
  EBP = (pop32());
  /* 11458a14 ret  */
  ESPCHK(0x11458870u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a20 @ 0x11458a20 (11 bytes, 6 insns) */
void f_11458a20(void) {
  FTRACE(0x11458a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11458a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11458a21 mov ebp, esp */
  EBP = (ESP);
  /* 11458a23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458a26 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11458a29 pop ebp */
  EBP = (pop32());
  /* 11458a2a ret  */
  ESPCHK(0x11458a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a30 @ 0x11458a30 (147 bytes, 43 insns) */
void f_11458a30(void) {
  FTRACE(0x11458a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11458a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11458a31 mov ebp, esp */
  EBP = (ESP);
  /* 11458a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11458a34 cmp dword ptr [0x11474b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458a3b jne 0x11458a57 */
  if (!C.zf) goto L_11458a57;
  /* 11458a3d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458a41 jl 0x11458a52 */
  if ((C.sf!=C.of)) goto L_11458a52;
  /* 11458a43 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458a47 jg 0x11458a52 */
  if ((!C.zf&&C.sf==C.of)) goto L_11458a52;
  /* 11458a49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458a4c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11458a4f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11458a52:;
  /* 11458a52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458a55 jmp 0x11458abf */
  goto L_11458abf;
L_11458a57:;
  /* 11458a57 push 0x11474c2c */
  push32((uint32_t)(0x11474c2cu));
  /* 11458a5c call dword ptr [0x11477414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477414))), 0x11458a62u);
  /* 11458a62 cmp dword ptr [0x11474c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458a69 je 0x11458a89 */
  if (C.zf) goto L_11458a89;
  /* 11458a6b push 0x11474c2c */
  push32((uint32_t)(0x11474c2cu));
  /* 11458a70 call dword ptr [0x11477404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477404))), 0x11458a76u);
  /* 11458a76 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11458a78 call 0x1144b210 */
  push32(0x11458a7du); f_1144b210();
  /* 11458a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458a80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11458a87 jmp 0x11458a90 */
  goto L_11458a90;
L_11458a89:;
  /* 11458a89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11458a90:;
  /* 11458a90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11458a94 call 0x11458ad0 */
  push32(0x11458a99u); f_11458ad0();
  /* 11458a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458a9c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11458a9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458aa3 je 0x11458ab1 */
  if (C.zf) goto L_11458ab1;
  /* 11458aa5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11458aa7 call 0x1144b2b0 */
  push32(0x11458aacu); f_1144b2b0();
  /* 11458aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458aaf jmp 0x11458abc */
  goto L_11458abc;
L_11458ab1:;
  /* 11458ab1 push 0x11474c2c */
  push32((uint32_t)(0x11474c2cu));
  /* 11458ab6 call dword ptr [0x11477404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477404))), 0x11458abcu);
L_11458abc:;
  /* 11458abc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11458abf:;
  /* 11458abf mov esp, ebp */
  ESP = (EBP);
  /* 11458ac1 pop ebp */
  EBP = (pop32());
  /* 11458ac2 ret  */
  ESPCHK(0x11458a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10018ad0 @ 0x11458ad0 (299 bytes, 91 insns) */
void f_11458ad0(void) {
  FTRACE(0x11458ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11458ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11458ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11458ad3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11458ad6 cmp dword ptr [0x11474b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458add jne 0x11458afc */
  if (!C.zf) goto L_11458afc;
  /* 11458adf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458ae3 jl 0x11458af4 */
  if ((C.sf!=C.of)) goto L_11458af4;
  /* 11458ae5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458ae9 jg 0x11458af4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11458af4;
  /* 11458aeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458aee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11458af1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11458af4:;
  /* 11458af4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458af7 jmp 0x11458bf7 */
  goto L_11458bf7;
L_11458afc:;
  /* 11458afc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458b03 jge 0x11458b43 */
  if ((C.sf==C.of)) goto L_11458b43;
  /* 11458b05 cmp dword ptr [0x11472fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11472fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458b0c jle 0x11458b21 */
  if ((C.zf||C.sf!=C.of)) goto L_11458b21;
  /* 11458b0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11458b10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11458b14 call 0x1144ef40 */
  push32(0x11458b19u); f_1144ef40();
  /* 11458b19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458b1c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11458b1f jmp 0x11458b35 */
  goto L_11458b35;
L_11458b21:;
  /* 11458b21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458b24 mov eax, dword ptr [0x11472db8] */
  EAX = (r32((uint32_t)(0x11472db8)));
  /* 11458b29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11458b2b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11458b2f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11458b32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11458b35:;
  /* 11458b35 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458b39 jne 0x11458b43 */
  if (!C.zf) goto L_11458b43;
  /* 11458b3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458b3e jmp 0x11458bf7 */
  goto L_11458bf7;
L_11458b43:;
  /* 11458b43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458b46 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11458b49 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11458b4f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11458b55 mov eax, dword ptr [0x11472db8] */
  EAX = (r32((uint32_t)(0x11472db8)));
  /* 11458b5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11458b5c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11458b60 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11458b66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11458b68 je 0x11458b8c */
  if (C.zf) goto L_11458b8c;
  /* 11458b6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458b6d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11458b70 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11458b76 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11458b79 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11458b7c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11458b7f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11458b83 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11458b8a jmp 0x11458b9d */
  goto L_11458b9d;
L_11458b8c:;
  /* 11458b8c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11458b8f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11458b92 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11458b96 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11458b9d:;
  /* 11458b9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11458b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11458ba1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11458ba3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11458ba6 push edx */
  push32((uint32_t)(EDX));
  /* 11458ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11458baa push eax */
  push32((uint32_t)(EAX));
  /* 11458bab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11458bae push ecx */
  push32((uint32_t)(ECX));
  /* 11458baf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11458bb4 mov edx, dword ptr [0x11474b58] */
  EDX = (r32((uint32_t)(0x11474b58)));
  /* 11458bba push edx */
  push32((uint32_t)(EDX));
  /* 11458bbb call 0x11451700 */
  push32(0x11458bc0u); f_11451700();
  /* 11458bc0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11458bc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11458bc6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458bca jne 0x11458bd1 */
  if (!C.zf) goto L_11458bd1;
  /* 11458bcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11458bcf jmp 0x11458bf7 */
  goto L_11458bf7;
L_11458bd1:;
  /* 11458bd1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11458bd5 jne 0x11458be1 */
  if (!C.zf) goto L_11458be1;
  /* 11458bd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11458bda and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11458bdf jmp 0x11458bf7 */
  goto L_11458bf7;
L_11458be1:;
  /* 11458be1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11458be4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11458be9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11458bec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11458bf2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11458bf5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11458bf7:;
  /* 11458bf7 mov esp, ebp */
  ESP = (EBP);
  /* 11458bf9 pop ebp */
  EBP = (pop32());
  /* 11458bfa ret  */
  ESPCHK(0x11458ad0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11458d5e (6 bytes, 1 insns) */
void f_11458d5e(void) {
  FTRACE(0x11458d5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11458d5e jmp dword ptr [0x11477338] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11477338)))); return;
}

