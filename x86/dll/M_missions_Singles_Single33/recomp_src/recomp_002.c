#include "recomp.h"

/* FUN_10014c10 @ 0x11534c10 (393 bytes, 123 insns) */
void f_11534c10(void) {
  FTRACE(0x11534c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11534c11 mov ebp, esp */
  EBP = (ESP);
  /* 11534c13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534c16 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534c1a jne 0x11534c26 */
  if (!C.zf) goto L_11534c26;
  /* 11534c1c mov eax, dword ptr [0x11552c98] */
  EAX = (r32((uint32_t)(0x11552c98)));
  /* 11534c21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11534c24 jmp 0x11534c2c */
  goto L_11534c2c;
L_11534c26:;
  /* 11534c26 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534c29 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11534c2c:;
  /* 11534c2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534c2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11534c32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534c35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11534c38 push 0x11553bec */
  push32((uint32_t)(0x11553becu));
  /* 11534c3d call dword ptr [0x115562e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562e8))), 0x11534c43u);
  /* 11534c43 cmp dword ptr [0x11553bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534c4a je 0x11534c6a */
  if (C.zf) goto L_11534c6a;
  /* 11534c4c push 0x11553bec */
  push32((uint32_t)(0x11553becu));
  /* 11534c51 call dword ptr [0x115563c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c8))), 0x11534c57u);
  /* 11534c57 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11534c59 call 0x1152b2d0 */
  push32(0x11534c5eu); f_1152b2d0();
  /* 11534c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534c61 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11534c68 jmp 0x11534c71 */
  goto L_11534c71;
L_11534c6a:;
  /* 11534c6a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11534c71:;
  /* 11534c71 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534c75 jbe 0x11534d62 */
  if ((C.cf||C.zf)) goto L_11534d62;
  /* 11534c7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534c7e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11534c80 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11534c83 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11534c87 je 0x11534c91 */
  if (C.zf) goto L_11534c91;
  /* 11534c89 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11534c8d je 0x11534c96 */
  if (C.zf) goto L_11534c96;
  /* 11534c8f jmp 0x11534cf0 */
  goto L_11534cf0;
L_11534c91:;
  /* 11534c91 jmp 0x11534d62 */
  goto L_11534d62;
L_11534c96:;
  /* 11534c96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534c99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534c9c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11534c9f mov dword ptr [0x11553bc8], 0 */
  w32((uint32_t)(0x11553bc8), (0x0u));
  /* 11534ca9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534cac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11534caf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534cb2 jne 0x11534cc7 */
  if (!C.zf) goto L_11534cc7;
  /* 11534cb4 mov dword ptr [0x11553bc8], 1 */
  w32((uint32_t)(0x11553bc8), (0x1u));
  /* 11534cbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534cc1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534cc4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11534cc7:;
  /* 11534cc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11534cca push ecx */
  push32((uint32_t)(ECX));
  /* 11534ccb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11534cce push edx */
  push32((uint32_t)(EDX));
  /* 11534ccf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11534cd2 push eax */
  push32((uint32_t)(EAX));
  /* 11534cd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11534cd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534cda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11534cdc push eax */
  push32((uint32_t)(EAX));
  /* 11534cdd call 0x11534da0 */
  push32(0x11534ce2u); f_11534da0();
  /* 11534ce2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534ce5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534ce8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534ceb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11534cee jmp 0x11534d5d */
  goto L_11534d5d;
L_11534cf0:;
  /* 11534cf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11534cf5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11534cf7 mov ecx, dword ptr [0x11551c98] */
  ECX = (r32((uint32_t)(0x11551c98)));
  /* 11534cfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11534cff mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11534d03 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11534d09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11534d0b je 0x11534d38 */
  if (C.zf) goto L_11534d38;
  /* 11534d0d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534d11 jbe 0x11534d38 */
  if ((C.cf||C.zf)) goto L_11534d38;
  /* 11534d13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534d16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534d19 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11534d1b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11534d1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534d20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534d23 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11534d26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534d29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534d2c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11534d2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534d32 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534d35 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11534d38:;
  /* 11534d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534d3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534d3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11534d40 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11534d42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534d45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534d48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11534d4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534d4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534d51 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11534d54 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534d57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534d5a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11534d5d:;
  /* 11534d5d jmp 0x11534c71 */
  goto L_11534c71;
L_11534d62:;
  /* 11534d62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534d66 je 0x11534d74 */
  if (C.zf) goto L_11534d74;
  /* 11534d68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11534d6a call 0x1152b370 */
  push32(0x11534d6fu); f_1152b370();
  /* 11534d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534d72 jmp 0x11534d7f */
  goto L_11534d7f;
L_11534d74:;
  /* 11534d74 push 0x11553bec */
  push32((uint32_t)(0x11553becu));
  /* 11534d79 call dword ptr [0x115563c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c8))), 0x11534d7fu);
L_11534d7f:;
  /* 11534d7f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534d83 jbe 0x11534d93 */
  if ((C.cf||C.zf)) goto L_11534d93;
  /* 11534d85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534d88 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11534d8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534d8e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534d91 jmp 0x11534d95 */
  goto L_11534d95;
L_11534d93:;
  /* 11534d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11534d95:;
  /* 11534d95 mov esp, ebp */
  ESP = (EBP);
  /* 11534d97 pop ebp */
  EBP = (pop32());
  /* 11534d98 ret  */
  ESPCHK(0x11534c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014da0 @ 0x11534da0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11534da0(void) {
  FTRACE(0x11534da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11534da1 mov ebp, esp */
  EBP = (ESP);
  /* 11534da3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534da6 push esi */
  push32((uint32_t)(ESI));
  /* 11534da7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11534dab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11534dae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534db1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534db4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11534db7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534dbb ja 0x11535308 */
  if ((!C.cf&&!C.zf)) goto L_11535308;
  /* 11534dc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534dc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11534dc6 mov dl, byte ptr [eax + 0x11535369] */
  DL = (r8((uint32_t)(EAX + 0x11535369)));
  /* 11534dcc jmp dword ptr [edx*4 + 0x1153530d] */
  switch (EDX) {
    case 0: goto L_115352e6;
    case 1: goto L_11534df5;
    case 2: goto L_11534e3b;
    case 3: goto L_11534f88;
    case 4: goto L_11534fb0;
    case 5: goto L_1153504f;
    case 6: goto L_115350bb;
    case 7: goto L_115350e4;
    case 8: goto L_11535125;
    case 9: goto L_11535207;
    case 10: goto L_1153526e;
    case 11: goto L_115352bb;
    case 12: goto L_11534dd3;
    case 13: goto L_11534e18;
    case 14: goto L_11534e5e;
    case 15: goto L_11534f5e;
    case 16: goto L_11534ff5;
    case 17: goto L_11535022;
    case 18: goto L_11535077;
    case 19: goto L_115350fb;
    case 20: goto L_115351a9;
    case 21: goto L_11535238;
    case 22: goto L_11535308;
    default: x86_unimpl("switch@0x11534dcc out of table"); return;
  }
L_11534dd3:;
  /* 11534dd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534dd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11534dd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534dda push edx */
  push32((uint32_t)(EDX));
  /* 11534ddb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534dde mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11534de1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534de4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11534de7 push eax */
  push32((uint32_t)(EAX));
  /* 11534de8 call 0x115353c0 */
  push32(0x11534dedu); f_115353c0();
  /* 11534ded add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534df0 jmp 0x11535308 */
  goto L_11535308;
L_11534df5:;
  /* 11534df5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534df8 push ecx */
  push32((uint32_t)(ECX));
  /* 11534df9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534dfc push edx */
  push32((uint32_t)(EDX));
  /* 11534dfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534e00 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11534e03 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534e06 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11534e0a push eax */
  push32((uint32_t)(EAX));
  /* 11534e0b call 0x115353c0 */
  push32(0x11534e10u); f_115353c0();
  /* 11534e10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534e13 jmp 0x11535308 */
  goto L_11535308;
L_11534e18:;
  /* 11534e18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534e1b push ecx */
  push32((uint32_t)(ECX));
  /* 11534e1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534e1f push edx */
  push32((uint32_t)(EDX));
  /* 11534e20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534e23 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11534e26 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534e29 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11534e2d push eax */
  push32((uint32_t)(EAX));
  /* 11534e2e call 0x115353c0 */
  push32(0x11534e33u); f_115353c0();
  /* 11534e33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534e36 jmp 0x11535308 */
  goto L_11535308;
L_11534e3b:;
  /* 11534e3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534e3e push ecx */
  push32((uint32_t)(ECX));
  /* 11534e3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534e42 push edx */
  push32((uint32_t)(EDX));
  /* 11534e43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534e46 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11534e49 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534e4c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11534e50 push eax */
  push32((uint32_t)(EAX));
  /* 11534e51 call 0x115353c0 */
  push32(0x11534e56u); f_115353c0();
  /* 11534e56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534e59 jmp 0x11535308 */
  goto L_11535308;
L_11534e5e:;
  /* 11534e5e cmp dword ptr [0x11553bc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534e65 je 0x11534ee6 */
  if (C.zf) goto L_11534ee6;
  /* 11534e67 mov dword ptr [0x11553bc8], 0 */
  w32((uint32_t)(0x11553bc8), (0x0u));
  /* 11534e71 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534e74 push ecx */
  push32((uint32_t)(ECX));
  /* 11534e75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534e78 push edx */
  push32((uint32_t)(EDX));
  /* 11534e79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534e7c push eax */
  push32((uint32_t)(EAX));
  /* 11534e7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534e80 push ecx */
  push32((uint32_t)(ECX));
  /* 11534e81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534e84 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11534e8a push eax */
  push32((uint32_t)(EAX));
  /* 11534e8b call 0x11535570 */
  push32(0x11534e90u); f_11535570();
  /* 11534e90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534e93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534e96 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534e99 jne 0x11534ea0 */
  if (!C.zf) goto L_11534ea0;
  /* 11534e9b jmp 0x11535308 */
  goto L_11535308;
L_11534ea0:;
  /* 11534ea0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534ea3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11534ea5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11534ea8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534eab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11534ead add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534eb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534eb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11534eb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534eb8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11534eba sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534ebd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534ec0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11534ec2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 11534ec6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534ec9 push edx */
  push32((uint32_t)(EDX));
  /* 11534eca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534ecd push eax */
  push32((uint32_t)(EAX));
  /* 11534ece mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534ed1 push ecx */
  push32((uint32_t)(ECX));
  /* 11534ed2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534ed5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11534edb push eax */
  push32((uint32_t)(EAX));
  /* 11534edc call 0x11535570 */
  push32(0x11534ee1u); f_11535570();
  /* 11534ee1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534ee4 jmp 0x11534f59 */
  goto L_11534f59;
L_11534ee6:;
  /* 11534ee6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534ee9 push ecx */
  push32((uint32_t)(ECX));
  /* 11534eea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534eed push edx */
  push32((uint32_t)(EDX));
  /* 11534eee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534ef1 push eax */
  push32((uint32_t)(EAX));
  /* 11534ef2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534ef5 push ecx */
  push32((uint32_t)(ECX));
  /* 11534ef6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534ef9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11534eff push eax */
  push32((uint32_t)(EAX));
  /* 11534f00 call 0x11535570 */
  push32(0x11534f05u); f_11535570();
  /* 11534f05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534f08 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534f0b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534f0e jne 0x11534f15 */
  if (!C.zf) goto L_11534f15;
  /* 11534f10 jmp 0x11535308 */
  goto L_11535308;
L_11534f15:;
  /* 11534f15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534f18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11534f1a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11534f1d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534f20 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11534f22 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534f25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534f28 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11534f2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534f2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11534f2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534f32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534f35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11534f37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534f3a push ecx */
  push32((uint32_t)(ECX));
  /* 11534f3b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534f3e push edx */
  push32((uint32_t)(EDX));
  /* 11534f3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534f42 push eax */
  push32((uint32_t)(EAX));
  /* 11534f43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534f46 push ecx */
  push32((uint32_t)(ECX));
  /* 11534f47 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11534f4a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11534f50 push eax */
  push32((uint32_t)(EAX));
  /* 11534f51 call 0x11535570 */
  push32(0x11534f56u); f_11535570();
  /* 11534f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11534f59:;
  /* 11534f59 jmp 0x11535308 */
  goto L_11535308;
L_11534f5e:;
  /* 11534f5e mov ecx, dword ptr [0x11553bc8] */
  ECX = (r32((uint32_t)(0x11553bc8)));
  /* 11534f64 mov dword ptr [0x11553bd8], ecx */
  w32((uint32_t)(0x11553bd8), (ECX));
  /* 11534f6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534f6d push edx */
  push32((uint32_t)(EDX));
  /* 11534f6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534f71 push eax */
  push32((uint32_t)(EAX));
  /* 11534f72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11534f74 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534f77 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11534f7a push edx */
  push32((uint32_t)(EDX));
  /* 11534f7b call 0x11535410 */
  push32(0x11534f80u); f_11535410();
  /* 11534f80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534f83 jmp 0x11535308 */
  goto L_11535308;
L_11534f88:;
  /* 11534f88 mov eax, dword ptr [0x11553bc8] */
  EAX = (r32((uint32_t)(0x11553bc8)));
  /* 11534f8d mov dword ptr [0x11553bd8], eax */
  w32((uint32_t)(0x11553bd8), (EAX));
  /* 11534f92 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534f95 push ecx */
  push32((uint32_t)(ECX));
  /* 11534f96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534f99 push edx */
  push32((uint32_t)(EDX));
  /* 11534f9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11534f9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534f9f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11534fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 11534fa3 call 0x11535410 */
  push32(0x11534fa8u); f_11535410();
  /* 11534fa8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534fab jmp 0x11535308 */
  goto L_11535308;
L_11534fb0:;
  /* 11534fb0 mov edx, dword ptr [0x11553bc8] */
  EDX = (r32((uint32_t)(0x11553bc8)));
  /* 11534fb6 mov dword ptr [0x11553bd8], edx */
  w32((uint32_t)(0x11553bd8), (EDX));
  /* 11534fbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534fbf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11534fc2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11534fc3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11534fc8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11534fca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11534fcd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534fd1 jne 0x11534fda */
  if (!C.zf) goto L_11534fda;
  /* 11534fd3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11534fda:;
  /* 11534fda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534fdd push edx */
  push32((uint32_t)(EDX));
  /* 11534fde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534fe1 push eax */
  push32((uint32_t)(EAX));
  /* 11534fe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11534fe4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11534fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 11534fe8 call 0x11535410 */
  push32(0x11534fedu); f_11535410();
  /* 11534fed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534ff0 jmp 0x11535308 */
  goto L_11535308;
L_11534ff5:;
  /* 11534ff5 mov edx, dword ptr [0x11553bc8] */
  EDX = (r32((uint32_t)(0x11553bc8)));
  /* 11534ffb mov dword ptr [0x11553bd8], edx */
  w32((uint32_t)(0x11553bd8), (EDX));
  /* 11535001 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535004 push eax */
  push32((uint32_t)(EAX));
  /* 11535005 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535008 push ecx */
  push32((uint32_t)(ECX));
  /* 11535009 push 3 */
  push32((uint32_t)(0x3u));
  /* 1153500b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153500e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11535011 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535014 push eax */
  push32((uint32_t)(EAX));
  /* 11535015 call 0x11535410 */
  push32(0x1153501au); f_11535410();
  /* 1153501a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153501d jmp 0x11535308 */
  goto L_11535308;
L_11535022:;
  /* 11535022 mov ecx, dword ptr [0x11553bc8] */
  ECX = (r32((uint32_t)(0x11553bc8)));
  /* 11535028 mov dword ptr [0x11553bd8], ecx */
  w32((uint32_t)(0x11553bd8), (ECX));
  /* 1153502e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535031 push edx */
  push32((uint32_t)(EDX));
  /* 11535032 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535035 push eax */
  push32((uint32_t)(EAX));
  /* 11535036 push 2 */
  push32((uint32_t)(0x2u));
  /* 11535038 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153503b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1153503e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535041 push edx */
  push32((uint32_t)(EDX));
  /* 11535042 call 0x11535410 */
  push32(0x11535047u); f_11535410();
  /* 11535047 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153504a jmp 0x11535308 */
  goto L_11535308;
L_1153504f:;
  /* 1153504f mov eax, dword ptr [0x11553bc8] */
  EAX = (r32((uint32_t)(0x11553bc8)));
  /* 11535054 mov dword ptr [0x11553bd8], eax */
  w32((uint32_t)(0x11553bd8), (EAX));
  /* 11535059 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153505c push ecx */
  push32((uint32_t)(ECX));
  /* 1153505d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535060 push edx */
  push32((uint32_t)(EDX));
  /* 11535061 push 2 */
  push32((uint32_t)(0x2u));
  /* 11535063 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535066 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11535069 push ecx */
  push32((uint32_t)(ECX));
  /* 1153506a call 0x11535410 */
  push32(0x1153506fu); f_11535410();
  /* 1153506f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535072 jmp 0x11535308 */
  goto L_11535308;
L_11535077:;
  /* 11535077 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153507a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153507e jg 0x1153509c */
  if ((!C.zf&&C.sf==C.of)) goto L_1153509c;
  /* 11535080 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535083 push eax */
  push32((uint32_t)(EAX));
  /* 11535084 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535087 push ecx */
  push32((uint32_t)(ECX));
  /* 11535088 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1153508b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11535091 push eax */
  push32((uint32_t)(EAX));
  /* 11535092 call 0x115353c0 */
  push32(0x11535097u); f_115353c0();
  /* 11535097 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153509a jmp 0x115350b6 */
  goto L_115350b6;
L_1153509c:;
  /* 1153509c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153509f push ecx */
  push32((uint32_t)(ECX));
  /* 115350a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115350a3 push edx */
  push32((uint32_t)(EDX));
  /* 115350a4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115350a7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 115350ad push ecx */
  push32((uint32_t)(ECX));
  /* 115350ae call 0x115353c0 */
  push32(0x115350b3u); f_115353c0();
  /* 115350b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115350b6:;
  /* 115350b6 jmp 0x11535308 */
  goto L_11535308;
L_115350bb:;
  /* 115350bb mov edx, dword ptr [0x11553bc8] */
  EDX = (r32((uint32_t)(0x11553bc8)));
  /* 115350c1 mov dword ptr [0x11553bd8], edx */
  w32((uint32_t)(0x11553bd8), (EDX));
  /* 115350c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115350ca push eax */
  push32((uint32_t)(EAX));
  /* 115350cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115350ce push ecx */
  push32((uint32_t)(ECX));
  /* 115350cf push 2 */
  push32((uint32_t)(0x2u));
  /* 115350d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115350d4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115350d6 push eax */
  push32((uint32_t)(EAX));
  /* 115350d7 call 0x11535410 */
  push32(0x115350dcu); f_11535410();
  /* 115350dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115350df jmp 0x11535308 */
  goto L_11535308;
L_115350e4:;
  /* 115350e4 mov ecx, dword ptr [0x11553bc8] */
  ECX = (r32((uint32_t)(0x11553bc8)));
  /* 115350ea mov dword ptr [0x11553bd8], ecx */
  w32((uint32_t)(0x11553bd8), (ECX));
  /* 115350f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115350f3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 115350f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115350f9 jmp 0x1153514d */
  goto L_1153514d;
L_115350fb:;
  /* 115350fb mov ecx, dword ptr [0x11553bc8] */
  ECX = (r32((uint32_t)(0x11553bc8)));
  /* 11535101 mov dword ptr [0x11553bd8], ecx */
  w32((uint32_t)(0x11553bd8), (ECX));
  /* 11535107 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153510a push edx */
  push32((uint32_t)(EDX));
  /* 1153510b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153510e push eax */
  push32((uint32_t)(EAX));
  /* 1153510f push 1 */
  push32((uint32_t)(0x1u));
  /* 11535111 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535114 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11535117 push edx */
  push32((uint32_t)(EDX));
  /* 11535118 call 0x11535410 */
  push32(0x1153511du); f_11535410();
  /* 1153511d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535120 jmp 0x11535308 */
  goto L_11535308;
L_11535125:;
  /* 11535125 mov eax, dword ptr [0x11553bc8] */
  EAX = (r32((uint32_t)(0x11553bc8)));
  /* 1153512a mov dword ptr [0x11553bd8], eax */
  w32((uint32_t)(0x11553bd8), (EAX));
  /* 1153512f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535132 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535136 jne 0x11535141 */
  if (!C.zf) goto L_11535141;
  /* 11535138 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1153513f jmp 0x1153514d */
  goto L_1153514d;
L_11535141:;
  /* 11535141 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535144 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11535147 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153514a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1153514d:;
  /* 1153514d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535150 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11535153 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535156 jge 0x11535161 */
  if ((C.sf==C.of)) goto L_11535161;
  /* 11535158 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1153515f jmp 0x1153518e */
  goto L_1153518e;
L_11535161:;
  /* 11535161 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535164 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11535167 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11535168 mov ecx, 7 */
  ECX = (0x7u);
  /* 1153516d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1153516f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11535172 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535175 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11535178 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11535179 mov ecx, 7 */
  ECX = (0x7u);
  /* 1153517e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11535180 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535183 jl 0x1153518e */
  if ((C.sf!=C.of)) goto L_1153518e;
  /* 11535185 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11535188 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153518b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1153518e:;
  /* 1153518e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535191 push eax */
  push32((uint32_t)(EAX));
  /* 11535192 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535195 push ecx */
  push32((uint32_t)(ECX));
  /* 11535196 push 2 */
  push32((uint32_t)(0x2u));
  /* 11535198 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153519b push edx */
  push32((uint32_t)(EDX));
  /* 1153519c call 0x11535410 */
  push32(0x115351a1u); f_11535410();
  /* 115351a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115351a4 jmp 0x11535308 */
  goto L_11535308;
L_115351a9:;
  /* 115351a9 cmp dword ptr [0x11553bc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115351b0 je 0x115351e0 */
  if (C.zf) goto L_115351e0;
  /* 115351b2 mov dword ptr [0x11553bc8], 0 */
  w32((uint32_t)(0x11553bc8), (0x0u));
  /* 115351bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115351bf push eax */
  push32((uint32_t)(EAX));
  /* 115351c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115351c3 push ecx */
  push32((uint32_t)(ECX));
  /* 115351c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115351c7 push edx */
  push32((uint32_t)(EDX));
  /* 115351c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115351cb push eax */
  push32((uint32_t)(EAX));
  /* 115351cc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115351cf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 115351d5 push edx */
  push32((uint32_t)(EDX));
  /* 115351d6 call 0x11535570 */
  push32(0x115351dbu); f_11535570();
  /* 115351db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115351de jmp 0x11535202 */
  goto L_11535202;
L_115351e0:;
  /* 115351e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115351e3 push eax */
  push32((uint32_t)(EAX));
  /* 115351e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115351e7 push ecx */
  push32((uint32_t)(ECX));
  /* 115351e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115351eb push edx */
  push32((uint32_t)(EDX));
  /* 115351ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115351ef push eax */
  push32((uint32_t)(EAX));
  /* 115351f0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115351f3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 115351f9 push edx */
  push32((uint32_t)(EDX));
  /* 115351fa call 0x11535570 */
  push32(0x115351ffu); f_11535570();
  /* 115351ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11535202:;
  /* 11535202 jmp 0x11535308 */
  goto L_11535308;
L_11535207:;
  /* 11535207 mov dword ptr [0x11553bc8], 0 */
  w32((uint32_t)(0x11553bc8), (0x0u));
  /* 11535211 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11535214 push eax */
  push32((uint32_t)(EAX));
  /* 11535215 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535218 push ecx */
  push32((uint32_t)(ECX));
  /* 11535219 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153521c push edx */
  push32((uint32_t)(EDX));
  /* 1153521d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535220 push eax */
  push32((uint32_t)(EAX));
  /* 11535221 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11535224 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1153522a push edx */
  push32((uint32_t)(EDX));
  /* 1153522b call 0x11535570 */
  push32(0x11535230u); f_11535570();
  /* 11535230 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535233 jmp 0x11535308 */
  goto L_11535308;
L_11535238:;
  /* 11535238 mov eax, dword ptr [0x11553bc8] */
  EAX = (r32((uint32_t)(0x11553bc8)));
  /* 1153523d mov dword ptr [0x11553bd8], eax */
  w32((uint32_t)(0x11553bd8), (EAX));
  /* 11535242 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535245 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11535248 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11535249 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1153524e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11535250 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11535253 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535256 push edx */
  push32((uint32_t)(EDX));
  /* 11535257 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153525a push eax */
  push32((uint32_t)(EAX));
  /* 1153525b push 2 */
  push32((uint32_t)(0x2u));
  /* 1153525d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11535260 push ecx */
  push32((uint32_t)(ECX));
  /* 11535261 call 0x11535410 */
  push32(0x11535266u); f_11535410();
  /* 11535266 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535269 jmp 0x11535308 */
  goto L_11535308;
L_1153526e:;
  /* 1153526e mov edx, dword ptr [0x11553bc8] */
  EDX = (r32((uint32_t)(0x11553bc8)));
  /* 11535274 mov dword ptr [0x11553bd8], edx */
  w32((uint32_t)(0x11553bd8), (EDX));
  /* 1153527a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153527d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11535280 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11535281 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11535286 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11535288 mov ecx, eax */
  ECX = (EAX);
  /* 1153528a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153528d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11535290 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535293 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11535296 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11535297 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1153529c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1153529e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115352a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115352a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115352a6 push eax */
  push32((uint32_t)(EAX));
  /* 115352a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115352aa push ecx */
  push32((uint32_t)(ECX));
  /* 115352ab push 4 */
  push32((uint32_t)(0x4u));
  /* 115352ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115352b0 push edx */
  push32((uint32_t)(EDX));
  /* 115352b1 call 0x11535410 */
  push32(0x115352b6u); f_11535410();
  /* 115352b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115352b9 jmp 0x11535308 */
  goto L_11535308;
L_115352bb:;
  /* 115352bb call 0x115363d0 */
  push32(0x115352c0u); f_115363d0();
  /* 115352c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115352c3 push eax */
  push32((uint32_t)(EAX));
  /* 115352c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115352c7 push ecx */
  push32((uint32_t)(ECX));
  /* 115352c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115352cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115352cd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115352d1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 115352d4 mov ecx, dword ptr [eax*4 + 0x11552e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11552e1c)));
  /* 115352db push ecx */
  push32((uint32_t)(ECX));
  /* 115352dc call 0x115353c0 */
  push32(0x115352e1u); f_115353c0();
  /* 115352e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115352e4 jmp 0x11535308 */
  goto L_11535308;
L_115352e6:;
  /* 115352e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115352e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115352eb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 115352ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115352f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115352f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115352f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115352f9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115352fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115352fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11535300 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11535303 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535306 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11535308:;
  /* 11535308 pop esi */
  ESI = (pop32());
  /* 11535309 mov esp, ebp */
  ESP = (EBP);
  /* 1153530b pop ebp */
  EBP = (pop32());
  /* 1153530c ret  */
  ESPCHK(0x11534da0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x115353c0 (72 bytes, 30 insns) */
void f_115353c0(void) {
  FTRACE(0x115353c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115353c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115353c1 mov ebp, esp */
  EBP = (ESP);
L_115353c3:;
  /* 115353c3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115353c6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115353c9 je 0x11535406 */
  if (C.zf) goto L_11535406;
  /* 115353cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115353ce movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115353d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115353d3 je 0x11535406 */
  if (C.zf) goto L_11535406;
  /* 115353d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115353d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115353da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115353dd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115353df mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115353e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115353e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115353e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115353e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115353ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115353ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115353f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115353f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 115353f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115353fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115353fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115353ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535402 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11535404 jmp 0x115353c3 */
  goto L_115353c3;
L_11535406:;
  /* 11535406 pop ebp */
  EBP = (pop32());
  /* 11535407 ret  */
  ESPCHK(0x115353c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015410 @ 0x11535410 (173 bytes, 64 insns) */
void f_11535410(void) {
  FTRACE(0x11535410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11535410 push ebp */
  push32((uint32_t)(EBP));
  /* 11535411 mov ebp, esp */
  EBP = (ESP);
  /* 11535413 push ecx */
  push32((uint32_t)(ECX));
  /* 11535414 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1153541b cmp dword ptr [0x11553bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535422 je 0x1153543a */
  if (C.zf) goto L_1153543a;
  /* 11535424 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535427 push eax */
  push32((uint32_t)(EAX));
  /* 11535428 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153542b push ecx */
  push32((uint32_t)(ECX));
  /* 1153542c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153542f push edx */
  push32((uint32_t)(EDX));
  /* 11535430 call 0x115354c0 */
  push32(0x11535435u); f_115354c0();
  /* 11535435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535438 jmp 0x115354b9 */
  goto L_115354b9;
L_1153543a:;
  /* 1153543a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153543d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535440 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535442 jae 0x115354b0 */
  if (!C.cf) goto L_115354b0;
  /* 11535444 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535447 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153544a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1153544d jmp 0x11535458 */
  goto L_11535458;
L_1153544f:;
  /* 1153544f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535452 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11535455 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11535458:;
  /* 11535458 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153545b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153545e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11535460 je 0x11535494 */
  if (C.zf) goto L_11535494;
  /* 11535462 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535465 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11535466 mov ecx, 0xa */
  ECX = (0xau);
  /* 1153546b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1153546d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535470 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535473 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11535475 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535478 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1153547b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153547e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1153547f mov ecx, 0xa */
  ECX = (0xau);
  /* 11535484 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11535486 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11535489 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153548c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153548f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11535492 jmp 0x1153544f */
  goto L_1153544f;
L_11535494:;
  /* 11535494 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535497 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11535499 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153549c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153549f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115354a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115354a4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115354a6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115354a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115354ac mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115354ae jmp 0x115354b9 */
  goto L_115354b9;
L_115354b0:;
  /* 115354b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115354b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_115354b9:;
  /* 115354b9 mov esp, ebp */
  ESP = (EBP);
  /* 115354bb pop ebp */
  EBP = (pop32());
  /* 115354bc ret  */
  ESPCHK(0x11535410u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x115354c0 (172 bytes, 65 insns) */
void f_115354c0(void) {
  FTRACE(0x115354c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115354c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115354c1 mov ebp, esp */
  EBP = (ESP);
  /* 115354c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115354c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115354c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115354cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115354ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115354d1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115354d4 jbe 0x1153551b */
  if ((C.cf||C.zf)) goto L_1153551b;
L_115354d6:;
  /* 115354d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115354d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115354da mov ecx, 0xa */
  ECX = (0xau);
  /* 115354df idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115354e1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115354e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115354e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115354e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115354ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115354ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115354f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115354f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115354f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115354fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115354fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115354ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535502 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11535503 mov ecx, 0xa */
  ECX = (0xau);
  /* 11535508 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1153550a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1153550d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535511 jle 0x1153551b */
  if ((C.zf||C.sf!=C.of)) goto L_1153551b;
  /* 11535513 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535516 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535519 ja 0x115354d6 */
  if ((!C.cf&&!C.zf)) goto L_115354d6;
L_1153551b:;
  /* 1153551b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153551e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11535520 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11535523 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535526 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11535529 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1153552b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153552e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11535531 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11535534:;
  /* 11535534 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11535537 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11535539 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1153553c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153553f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11535542 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11535544 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11535546 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11535549 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153554c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1153554f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11535552 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11535555 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11535557 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1153555a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153555d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11535560 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11535563 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535566 jb 0x11535534 */
  if (C.cf) goto L_11535534;
  /* 11535568 mov esp, ebp */
  ESP = (EBP);
  /* 1153556a pop ebp */
  EBP = (pop32());
  /* 1153556b ret  */
  ESPCHK(0x115354c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015570 @ 0x11535570 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11535570(void) {
  FTRACE(0x11535570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11535570 push ebp */
  push32((uint32_t)(EBP));
  /* 11535571 mov ebp, esp */
  EBP = (ESP);
  /* 11535573 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11535576:;
  /* 11535576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535579 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1153557c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1153557e je 0x115359ec */
  if (C.zf) goto L_115359ec;
  /* 11535584 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535587 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153558a je 0x115359ec */
  if (C.zf) goto L_115359ec;
  /* 11535590 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11535594 mov dword ptr [0x11553bd8], 0 */
  w32((uint32_t)(0x11553bd8), (0x0u));
  /* 1153559e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115355a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115355a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115355ab jmp 0x115355b6 */
  goto L_115355b6;
L_115355ad:;
  /* 115355ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115355b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115355b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_115355b6:;
  /* 115355b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115355b9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115355bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115355bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115355c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115355c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115355c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115355cb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115355cd jne 0x115355d1 */
  if (!C.zf) goto L_115355d1;
  /* 115355cf jmp 0x115355ad */
  goto L_115355ad;
L_115355d1:;
  /* 115355d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115355d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115355d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115355da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115355dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115355e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115355e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115355e6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115355e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115355ec cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115355f0 ja 0x11535940 */
  if ((!C.cf&&!C.zf)) goto L_11535940;
  /* 115355f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115355f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115355fb mov al, byte ptr [ecx + 0x11535a1c] */
  AL = (r8((uint32_t)(ECX + 0x11535a1c)));
  /* 11535601 jmp dword ptr [eax*4 + 0x115359f0] */
  switch (EAX) {
    case 0: goto L_1153585f;
    case 1: goto L_11535743;
    case 2: goto L_115356ce;
    case 3: goto L_11535608;
    case 4: goto L_11535646;
    case 5: goto L_115356a7;
    case 6: goto L_115356f5;
    case 7: goto L_1153571c;
    case 8: goto L_1153578a;
    case 9: goto L_11535684;
    case 10: goto L_11535940;
    default: x86_unimpl("switch@0x11535601 out of table"); return;
  }
L_11535608:;
  /* 11535608 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153560b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1153560e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11535611 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11535614 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11535617 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153561b ja 0x11535641 */
  if ((!C.cf&&!C.zf)) goto L_11535641;
  /* 1153561d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11535620 jmp dword ptr [ecx*4 + 0x11535a6f] */
  switch (ECX) {
    case 0: goto L_11535627;
    case 1: goto L_11535631;
    case 2: goto L_11535637;
    case 3: goto L_1153563d;
    case 4: goto L_11535665;
    case 5: goto L_1153566f;
    case 6: goto L_11535675;
    case 7: goto L_1153567b;
    default: x86_unimpl("switch@0x11535620 out of table"); return;
  }
L_11535627:;
  /* 11535627 mov dword ptr [0x11553bd8], 1 */
  w32((uint32_t)(0x11553bd8), (0x1u));
L_11535631:;
  /* 11535631 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11535635 jmp 0x11535641 */
  goto L_11535641;
L_11535637:;
  /* 11535637 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1153563b jmp 0x11535641 */
  goto L_11535641;
L_1153563d:;
  /* 1153563d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11535641:;
  /* 11535641 jmp 0x11535940 */
  goto L_11535940;
L_11535646:;
  /* 11535646 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11535649 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1153564c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1153564f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11535652 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11535655 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535659 ja 0x1153567f */
  if ((!C.cf&&!C.zf)) goto L_1153567f;
  /* 1153565b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1153565e jmp dword ptr [ecx*4 + 0x11535a7f] */
  switch (ECX) {
    case 0: goto L_11535665;
    case 1: goto L_1153566f;
    case 2: goto L_11535675;
    case 3: goto L_1153567b;
    default: x86_unimpl("switch@0x1153565e out of table"); return;
  }
L_11535665:;
  /* 11535665 mov dword ptr [0x11553bd8], 1 */
  w32((uint32_t)(0x11553bd8), (0x1u));
L_1153566f:;
  /* 1153566f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11535673 jmp 0x1153567f */
  goto L_1153567f;
L_11535675:;
  /* 11535675 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11535679 jmp 0x1153567f */
  goto L_1153567f;
L_1153567b:;
  /* 1153567b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1153567f:;
  /* 1153567f jmp 0x11535940 */
  goto L_11535940;
L_11535684:;
  /* 11535684 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11535687 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1153568a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153568e je 0x11535698 */
  if (C.zf) goto L_11535698;
  /* 11535690 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535694 je 0x1153569e */
  if (C.zf) goto L_1153569e;
  /* 11535696 jmp 0x115356a2 */
  goto L_115356a2;
L_11535698:;
  /* 11535698 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1153569c jmp 0x115356a2 */
  goto L_115356a2;
L_1153569e:;
  /* 1153569e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_115356a2:;
  /* 115356a2 jmp 0x11535940 */
  goto L_11535940;
L_115356a7:;
  /* 115356a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115356aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115356ad cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115356b1 je 0x115356bb */
  if (C.zf) goto L_115356bb;
  /* 115356b3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115356b7 je 0x115356c5 */
  if (C.zf) goto L_115356c5;
  /* 115356b9 jmp 0x115356c9 */
  goto L_115356c9;
L_115356bb:;
  /* 115356bb mov dword ptr [0x11553bd8], 1 */
  w32((uint32_t)(0x11553bd8), (0x1u));
L_115356c5:;
  /* 115356c5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_115356c9:;
  /* 115356c9 jmp 0x11535940 */
  goto L_11535940;
L_115356ce:;
  /* 115356ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115356d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 115356d4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115356d8 je 0x115356e2 */
  if (C.zf) goto L_115356e2;
  /* 115356da cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115356de je 0x115356ec */
  if (C.zf) goto L_115356ec;
  /* 115356e0 jmp 0x115356f0 */
  goto L_115356f0;
L_115356e2:;
  /* 115356e2 mov dword ptr [0x11553bd8], 1 */
  w32((uint32_t)(0x11553bd8), (0x1u));
L_115356ec:;
  /* 115356ec mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_115356f0:;
  /* 115356f0 jmp 0x11535940 */
  goto L_11535940;
L_115356f5:;
  /* 115356f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115356f8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 115356fb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115356ff je 0x11535709 */
  if (C.zf) goto L_11535709;
  /* 11535701 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535705 je 0x11535713 */
  if (C.zf) goto L_11535713;
  /* 11535707 jmp 0x11535717 */
  goto L_11535717;
L_11535709:;
  /* 11535709 mov dword ptr [0x11553bd8], 1 */
  w32((uint32_t)(0x11553bd8), (0x1u));
L_11535713:;
  /* 11535713 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11535717:;
  /* 11535717 jmp 0x11535940 */
  goto L_11535940;
L_1153571c:;
  /* 1153571c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153571f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11535722 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535726 je 0x11535730 */
  if (C.zf) goto L_11535730;
  /* 11535728 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153572c je 0x1153573a */
  if (C.zf) goto L_1153573a;
  /* 1153572e jmp 0x1153573e */
  goto L_1153573e;
L_11535730:;
  /* 11535730 mov dword ptr [0x11553bd8], 1 */
  w32((uint32_t)(0x11553bd8), (0x1u));
L_1153573a:;
  /* 1153573a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1153573e:;
  /* 1153573e jmp 0x11535940 */
  goto L_11535940;
L_11535743:;
  /* 11535743 push 0x1154fd74 */
  push32((uint32_t)(0x1154fd74u));
  /* 11535748 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153574b push ecx */
  push32((uint32_t)(ECX));
  /* 1153574c call 0x11535fa0 */
  push32(0x11535751u); f_11535fa0();
  /* 11535751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535754 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11535756 jne 0x11535763 */
  if (!C.zf) goto L_11535763;
  /* 11535758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153575b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153575e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11535761 jmp 0x11535781 */
  goto L_11535781;
L_11535763:;
  /* 11535763 push 0x1154fd70 */
  push32((uint32_t)(0x1154fd70u));
  /* 11535768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153576b push eax */
  push32((uint32_t)(EAX));
  /* 1153576c call 0x11535fa0 */
  push32(0x11535771u); f_11535fa0();
  /* 11535771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11535776 jne 0x11535781 */
  if (!C.zf) goto L_11535781;
  /* 11535778 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153577b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153577e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11535781:;
  /* 11535781 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11535785 jmp 0x11535940 */
  goto L_11535940;
L_1153578a:;
  /* 1153578a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153578d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535791 jg 0x115357a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_115357a1;
  /* 11535793 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11535796 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1153579c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1153579f jmp 0x115357ad */
  goto L_115357ad;
L_115357a1:;
  /* 115357a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115357a4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 115357aa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_115357ad:;
  /* 115357ad cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115357b1 jle 0x11535854 */
  if ((C.zf||C.sf!=C.of)) goto L_11535854;
  /* 115357b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115357ba cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115357bd jbe 0x11535854 */
  if ((C.cf||C.zf)) goto L_11535854;
  /* 115357c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115357c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115357c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115357ca mov ecx, dword ptr [0x11551c98] */
  ECX = (r32((uint32_t)(0x11551c98)));
  /* 115357d0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115357d2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115357d6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 115357dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115357de je 0x11535817 */
  if (C.zf) goto L_11535817;
  /* 115357e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115357e3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115357e6 jbe 0x11535817 */
  if ((C.cf||C.zf)) goto L_11535817;
  /* 115357e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115357eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115357ed mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115357f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115357f2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 115357f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115357f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115357f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115357fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115357ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11535801 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11535804 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535807 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1153580a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153580d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1153580f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11535812 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535815 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11535817:;
  /* 11535817 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153581a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1153581c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1153581f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11535821 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11535823 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535826 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11535828 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153582b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153582e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11535830 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11535833 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535836 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11535839 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153583c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1153583e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11535841 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535844 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11535846 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11535849 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153584c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1153584f jmp 0x115357ad */
  goto L_115357ad;
L_11535854:;
  /* 11535854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11535857 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1153585a jmp 0x11535576 */
  goto L_11535576;
L_1153585f:;
  /* 1153585f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11535862 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11535865 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11535867 je 0x11535932 */
  if (C.zf) goto L_11535932;
  /* 1153586d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535870 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535873 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11535876:;
  /* 11535876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535879 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1153587c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1153587e je 0x11535930 */
  if (C.zf) goto L_11535930;
  /* 11535884 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535887 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153588a je 0x11535930 */
  if (C.zf) goto L_11535930;
  /* 11535890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535893 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11535896 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535899 jne 0x115358a9 */
  if (!C.zf) goto L_115358a9;
  /* 1153589b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153589e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115358a1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115358a4 jmp 0x11535930 */
  goto L_11535930;
L_115358a9:;
  /* 115358a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115358ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115358ae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115358b0 mov edx, dword ptr [0x11551c98] */
  EDX = (r32((uint32_t)(0x11551c98)));
  /* 115358b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115358b8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 115358bc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 115358c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115358c3 je 0x115358fc */
  if (C.zf) goto L_115358fc;
  /* 115358c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115358c8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115358cb jbe 0x115358fc */
  if ((C.cf||C.zf)) goto L_115358fc;
  /* 115358cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115358d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115358d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115358d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115358d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115358d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115358dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115358de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115358e1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115358e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115358e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115358e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115358ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115358ef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115358f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115358f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115358f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115358fa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115358fc:;
  /* 115358fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115358ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11535901 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535904 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11535906 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11535908 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153590b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1153590d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535910 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535913 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11535915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535918 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153591b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1153591e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535921 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11535923 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11535926 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535929 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1153592b jmp 0x11535876 */
  goto L_11535876;
L_11535930:;
  /* 11535930 jmp 0x1153593b */
  goto L_1153593b;
L_11535932:;
  /* 11535932 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535935 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535938 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1153593b:;
  /* 1153593b jmp 0x11535576 */
  goto L_11535576;
L_11535940:;
  /* 11535940 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11535944 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11535946 je 0x1153596c */
  if (C.zf) goto L_1153596c;
  /* 11535948 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1153594b push edx */
  push32((uint32_t)(EDX));
  /* 1153594c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153594f push eax */
  push32((uint32_t)(EAX));
  /* 11535950 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535953 push ecx */
  push32((uint32_t)(ECX));
  /* 11535954 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535957 push edx */
  push32((uint32_t)(EDX));
  /* 11535958 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1153595b push eax */
  push32((uint32_t)(EAX));
  /* 1153595c call 0x11534da0 */
  push32(0x11535961u); f_11534da0();
  /* 11535961 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535964 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11535967 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1153596a jmp 0x115359e7 */
  goto L_115359e7;
L_1153596c:;
  /* 1153596c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153596f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11535971 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11535973 mov ecx, dword ptr [0x11551c98] */
  ECX = (r32((uint32_t)(0x11551c98)));
  /* 11535979 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1153597b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1153597f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11535985 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11535987 je 0x115359b8 */
  if (C.zf) goto L_115359b8;
  /* 11535989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153598c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1153598e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535991 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11535993 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11535995 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535998 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1153599a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153599d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115359a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115359a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115359a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115359a8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 115359ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115359ae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115359b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115359b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115359b6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_115359b8:;
  /* 115359b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115359bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115359bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115359c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115359c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115359c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115359c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115359c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115359cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115359cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115359d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115359d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115359d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115359da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115359dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115359df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115359e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115359e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115359e7:;
  /* 115359e7 jmp 0x11535576 */
  goto L_11535576;
L_115359ec:;
  /* 115359ec mov esp, ebp */
  ESP = (EBP);
  /* 115359ee pop ebp */
  EBP = (pop32());
  /* 115359ef ret  */
  ESPCHK(0x11535570u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a90 @ 0x11535a90 (650 bytes, 178 insns) */
void f_11535a90(void) {
  FTRACE(0x11535a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11535a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11535a91 mov ebp, esp */
  EBP = (ESP);
  /* 11535a93 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11535a99 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535a9d jne 0x11535bf9 */
  if (!C.zf) goto L_11535bf9;
  /* 11535aa3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535aa6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11535aac lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11535ab2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11535ab5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11535abc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11535ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11535ac8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11535ace push edx */
  push32((uint32_t)(EDX));
  /* 11535acf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11535ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11535ad3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535ad6 push ecx */
  push32((uint32_t)(ECX));
  /* 11535ad7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535ada push edx */
  push32((uint32_t)(EDX));
  /* 11535adb call 0x11536eb0 */
  push32(0x11535ae0u); f_11536eb0();
  /* 11535ae0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535ae3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11535ae6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535aea jne 0x11535b7f */
  if (!C.zf) goto L_11535b7f;
  /* 11535af0 call dword ptr [0x11556400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556400))), 0x11535af6u);
  /* 11535af6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535af9 je 0x11535b00 */
  if (C.zf) goto L_11535b00;
  /* 11535afb jmp 0x11535bdd */
  goto L_11535bdd;
L_11535b00:;
  /* 11535b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11535b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11535b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11535b06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535b09 push eax */
  push32((uint32_t)(EAX));
  /* 11535b0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535b0d push ecx */
  push32((uint32_t)(ECX));
  /* 11535b0e call 0x11536eb0 */
  push32(0x11535b13u); f_11536eb0();
  /* 11535b13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535b16 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11535b1c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535b23 jne 0x11535b2a */
  if (!C.zf) goto L_11535b2a;
  /* 11535b25 jmp 0x11535bdd */
  goto L_11535bdd;
L_11535b2a:;
  /* 11535b2a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11535b2c push 0x1154fd7c */
  push32((uint32_t)(0x1154fd7cu));
  /* 11535b31 push 2 */
  push32((uint32_t)(0x2u));
  /* 11535b33 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11535b39 push edx */
  push32((uint32_t)(EDX));
  /* 11535b3a call 0x115278d0 */
  push32(0x11535b3fu); f_115278d0();
  /* 11535b3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535b42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11535b45 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535b49 jne 0x11535b50 */
  if (!C.zf) goto L_11535b50;
  /* 11535b4b jmp 0x11535bdd */
  goto L_11535bdd;
L_11535b50:;
  /* 11535b50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11535b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11535b59 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11535b5f push eax */
  push32((uint32_t)(EAX));
  /* 11535b60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11535b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11535b64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535b67 push edx */
  push32((uint32_t)(EDX));
  /* 11535b68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535b6b push eax */
  push32((uint32_t)(EAX));
  /* 11535b6c call 0x11536eb0 */
  push32(0x11535b71u); f_11536eb0();
  /* 11535b71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535b74 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11535b77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535b7b jne 0x11535b7f */
  if (!C.zf) goto L_11535b7f;
  /* 11535b7d jmp 0x11535bdd */
  goto L_11535bdd;
L_11535b7f:;
  /* 11535b7f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11535b81 push 0x1154fd7c */
  push32((uint32_t)(0x1154fd7cu));
  /* 11535b86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11535b88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11535b8b push ecx */
  push32((uint32_t)(ECX));
  /* 11535b8c call 0x115278d0 */
  push32(0x11535b91u); f_115278d0();
  /* 11535b91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535b94 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11535b9a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11535b9c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11535ba2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535ba5 jne 0x11535ba9 */
  if (!C.zf) goto L_11535ba9;
  /* 11535ba7 jmp 0x11535bdd */
  goto L_11535bdd;
L_11535ba9:;
  /* 11535ba9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11535bac push ecx */
  push32((uint32_t)(ECX));
  /* 11535bad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11535bb0 push edx */
  push32((uint32_t)(EDX));
  /* 11535bb1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11535bb7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11535bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11535bba call 0x1152b0f0 */
  push32(0x11535bbfu); f_1152b0f0();
  /* 11535bbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535bc2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535bc6 je 0x11535bd6 */
  if (C.zf) goto L_11535bd6;
  /* 11535bc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11535bca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11535bcd push edx */
  push32((uint32_t)(EDX));
  /* 11535bce call 0x11528360 */
  push32(0x11535bd3u); f_11528360();
  /* 11535bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11535bd6:;
  /* 11535bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11535bd8 jmp 0x11535d16 */
  goto L_11535d16;
L_11535bdd:;
  /* 11535bdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535be1 je 0x11535bf1 */
  if (C.zf) goto L_11535bf1;
  /* 11535be3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11535be5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11535be8 push eax */
  push32((uint32_t)(EAX));
  /* 11535be9 call 0x11528360 */
  push32(0x11535beeu); f_11528360();
  /* 11535bee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11535bf1:;
  /* 11535bf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11535bf4 jmp 0x11535d16 */
  goto L_11535d16;
L_11535bf9:;
  /* 11535bf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535bfd jne 0x11535d13 */
  if (!C.zf) goto L_11535d13;
  /* 11535c03 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11535c0d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535c10 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11535c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11535c18 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11535c1e push edx */
  push32((uint32_t)(EDX));
  /* 11535c1f push 0x11553af0 */
  push32((uint32_t)(0x11553af0u));
  /* 11535c24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535c27 push eax */
  push32((uint32_t)(EAX));
  /* 11535c28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535c2b push ecx */
  push32((uint32_t)(ECX));
  /* 11535c2c call 0x11536d10 */
  push32(0x11535c31u); f_11536d10();
  /* 11535c31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535c34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11535c36 jne 0x11535c40 */
  if (!C.zf) goto L_11535c40;
  /* 11535c38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11535c3b jmp 0x11535d16 */
  goto L_11535d16;
L_11535c40:;
  /* 11535c40 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11535c46 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11535c49 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11535c53 jmp 0x11535c64 */
  goto L_11535c64;
L_11535c55:;
  /* 11535c55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11535c5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535c5e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11535c64:;
  /* 11535c64 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535c6b jge 0x11535d0f */
  if ((C.sf==C.of)) goto L_11535d0f;
  /* 11535c71 cmp dword ptr [0x11551ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11551ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535c78 jle 0x11535cab */
  if ((C.zf||C.sf!=C.of)) goto L_11535cab;
  /* 11535c7a push 4 */
  push32((uint32_t)(0x4u));
  /* 11535c7c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11535c82 mov dl, byte ptr [ecx*2 + 0x11553af0] */
  DL = (r8((uint32_t)(ECX*2 + 0x11553af0)));
  /* 11535c89 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11535c8f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11535c95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11535c9a push eax */
  push32((uint32_t)(EAX));
  /* 11535c9b call 0x1152d8e0 */
  push32(0x11535ca0u); f_1152d8e0();
  /* 11535ca0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535ca3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11535ca9 jmp 0x11535cde */
  goto L_11535cde;
L_11535cab:;
  /* 11535cab mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11535cb1 mov dl, byte ptr [ecx*2 + 0x11553af0] */
  DL = (r8((uint32_t)(ECX*2 + 0x11553af0)));
  /* 11535cb8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11535cbe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11535cc4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11535cc9 mov ecx, dword ptr [0x11551c98] */
  ECX = (r32((uint32_t)(0x11551c98)));
  /* 11535ccf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11535cd1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11535cd5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11535cd8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11535cde:;
  /* 11535cde cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535ce5 je 0x11535d08 */
  if (C.zf) goto L_11535d08;
  /* 11535ce7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11535ced movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11535cf0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11535cf3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11535cfa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11535cfe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11535d04 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11535d06 jmp 0x11535d0a */
  goto L_11535d0a;
L_11535d08:;
  /* 11535d08 jmp 0x11535d0f */
  goto L_11535d0f;
L_11535d0a:;
  /* 11535d0a jmp 0x11535c55 */
  goto L_11535c55;
L_11535d0f:;
  /* 11535d0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11535d11 jmp 0x11535d16 */
  goto L_11535d16;
L_11535d13:;
  /* 11535d13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11535d16:;
  /* 11535d16 mov esp, ebp */
  ESP = (EBP);
  /* 11535d18 pop ebp */
  EBP = (pop32());
  /* 11535d19 ret  */
  ESPCHK(0x11535a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d20 @ 0x11535d20 (10 bytes, 5 insns) */
void f_11535d20(void) {
  FTRACE(0x11535d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11535d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11535d21 mov ebp, esp */
  EBP = (ESP);
  /* 11535d23 mov eax, dword ptr [0x11552d88] */
  EAX = (r32((uint32_t)(0x11552d88)));
  /* 11535d28 pop ebp */
  EBP = (pop32());
  /* 11535d29 ret  */
  ESPCHK(0x11535d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d30 @ 0x11535d30 (575 bytes, 196 insns) */
void f_11535d30(void) {
  FTRACE(0x11535d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11535d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11535d31 mov ebp, esp */
  EBP = (ESP);
  /* 11535d33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11535d35 push 0x1154fd88 */
  push32((uint32_t)(0x1154fd88u));
  /* 11535d3a push 0x115309d8 */
  push32((uint32_t)(0x115309d8u));
  /* 11535d3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11535d45 push eax */
  push32((uint32_t)(EAX));
  /* 11535d46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11535d4d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535d50 push ebx */
  push32((uint32_t)(EBX));
  /* 11535d51 push esi */
  push32((uint32_t)(ESI));
  /* 11535d52 push edi */
  push32((uint32_t)(EDI));
  /* 11535d53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11535d56 cmp dword ptr [0x11553afc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553afc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535d5d jne 0x11535dae */
  if (!C.zf) goto L_11535dae;
  /* 11535d5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11535d62 push eax */
  push32((uint32_t)(EAX));
  /* 11535d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11535d65 push 0x1154f4b8 */
  push32((uint32_t)(0x1154f4b8u));
  /* 11535d6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11535d6c call dword ptr [0x11556338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556338))), 0x11535d72u);
  /* 11535d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11535d74 je 0x11535d82 */
  if (C.zf) goto L_11535d82;
  /* 11535d76 mov dword ptr [0x11553afc], 1 */
  w32((uint32_t)(0x11553afc), (0x1u));
  /* 11535d80 jmp 0x11535dae */
  goto L_11535dae;
L_11535d82:;
  /* 11535d82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11535d85 push ecx */
  push32((uint32_t)(ECX));
  /* 11535d86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11535d88 push 0x1154f4b4 */
  push32((uint32_t)(0x1154f4b4u));
  /* 11535d8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11535d8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11535d91 call dword ptr [0x1155633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155633c))), 0x11535d97u);
  /* 11535d97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11535d99 je 0x11535da7 */
  if (C.zf) goto L_11535da7;
  /* 11535d9b mov dword ptr [0x11553afc], 2 */
  w32((uint32_t)(0x11553afc), (0x2u));
  /* 11535da5 jmp 0x11535dae */
  goto L_11535dae;
L_11535da7:;
  /* 11535da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11535da9 jmp 0x11535f89 */
  goto L_11535f89;
L_11535dae:;
  /* 11535dae cmp dword ptr [0x11553afc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553afc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535db5 jne 0x11535dd2 */
  if (!C.zf) goto L_11535dd2;
  /* 11535db7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535dba push edx */
  push32((uint32_t)(EDX));
  /* 11535dbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535dbe push eax */
  push32((uint32_t)(EAX));
  /* 11535dbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535dc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11535dc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535dc6 push edx */
  push32((uint32_t)(EDX));
  /* 11535dc7 call dword ptr [0x11556338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556338))), 0x11535dcdu);
  /* 11535dcd jmp 0x11535f89 */
  goto L_11535f89;
L_11535dd2:;
  /* 11535dd2 cmp dword ptr [0x11553afc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11553afc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535dd9 jne 0x11535f87 */
  if (!C.zf) goto L_11535f87;
  /* 11535ddf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535de3 jne 0x11535ded */
  if (!C.zf) goto L_11535ded;
  /* 11535de5 mov eax, dword ptr [0x11553a70] */
  EAX = (r32((uint32_t)(0x11553a70)));
  /* 11535dea mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11535ded:;
  /* 11535ded push 0 */
  push32((uint32_t)(0x0u));
  /* 11535def push 0 */
  push32((uint32_t)(0x0u));
  /* 11535df1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11535df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11535df5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535df8 push ecx */
  push32((uint32_t)(ECX));
  /* 11535df9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535dfc push edx */
  push32((uint32_t)(EDX));
  /* 11535dfd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11535e02 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11535e05 push eax */
  push32((uint32_t)(EAX));
  /* 11535e06 call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x11535e0cu);
  /* 11535e0c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11535e0f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535e13 jne 0x11535e1c */
  if (!C.zf) goto L_11535e1c;
  /* 11535e15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11535e17 jmp 0x11535f89 */
  goto L_11535f89;
L_11535e1c:;
  /* 11535e1c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11535e23 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11535e26 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535e29 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11535e2b call 0x1152aa70 */
  push32(0x11535e30u); f_1152aa70();
  /* 11535e30 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11535e33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11535e36 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11535e39 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11535e3c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11535e3f push edx */
  push32((uint32_t)(EDX));
  /* 11535e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11535e42 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11535e45 push eax */
  push32((uint32_t)(EAX));
  /* 11535e46 call 0x1152b640 */
  push32(0x11535e4bu); f_1152b640();
  /* 11535e4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535e4e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11535e55 jmp 0x11535e6e */
  goto L_11535e6e;
  /* 11535e57 mov eax, 1 */
  EAX = (0x1u);
  /* 11535e5c ret  */
  ESPCHK(0x11535d30u, _esp0);
  ESP += 4; return;
  /* 11535e5d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11535e60 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11535e67 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11535e6e:;
  /* 11535e6e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535e72 jne 0x11535e7b */
  if (!C.zf) goto L_11535e7b;
  /* 11535e74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11535e76 jmp 0x11535f89 */
  goto L_11535f89;
L_11535e7b:;
  /* 11535e7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11535e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11535e7f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11535e82 push ecx */
  push32((uint32_t)(ECX));
  /* 11535e83 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11535e86 push edx */
  push32((uint32_t)(EDX));
  /* 11535e87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535e8a push eax */
  push32((uint32_t)(EAX));
  /* 11535e8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11535e8e push ecx */
  push32((uint32_t)(ECX));
  /* 11535e8f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11535e94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11535e97 push edx */
  push32((uint32_t)(EDX));
  /* 11535e98 call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x11535e9eu);
  /* 11535e9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11535ea0 jne 0x11535ea9 */
  if (!C.zf) goto L_11535ea9;
  /* 11535ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11535ea4 jmp 0x11535f89 */
  goto L_11535f89;
L_11535ea9:;
  /* 11535ea9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11535eb0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11535eb3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11535eb7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11535eba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11535ebc call 0x1152aa70 */
  push32(0x11535ec1u); f_1152aa70();
  /* 11535ec1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11535ec4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11535ec7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11535eca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11535ecd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11535ed4 jmp 0x11535eed */
  goto L_11535eed;
  /* 11535ed6 mov eax, 1 */
  EAX = (0x1u);
  /* 11535edb ret  */
  ESPCHK(0x11535d30u, _esp0);
  ESP += 4; return;
  /* 11535edc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11535edf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11535ee6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11535eed:;
  /* 11535eed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535ef1 jne 0x11535efa */
  if (!C.zf) goto L_11535efa;
  /* 11535ef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11535ef5 jmp 0x11535f89 */
  goto L_11535f89;
L_11535efa:;
  /* 11535efa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535efe jne 0x11535f09 */
  if (!C.zf) goto L_11535f09;
  /* 11535f00 mov edx, dword ptr [0x11553a60] */
  EDX = (r32((uint32_t)(0x11553a60)));
  /* 11535f06 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11535f09:;
  /* 11535f09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535f0c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11535f0f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11535f15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535f18 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11535f1b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11535f22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11535f25 push ecx */
  push32((uint32_t)(ECX));
  /* 11535f26 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11535f29 push edx */
  push32((uint32_t)(EDX));
  /* 11535f2a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11535f2d push eax */
  push32((uint32_t)(EAX));
  /* 11535f2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11535f31 push ecx */
  push32((uint32_t)(ECX));
  /* 11535f32 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11535f35 push edx */
  push32((uint32_t)(EDX));
  /* 11535f36 call dword ptr [0x1155633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155633c))), 0x11535f3cu);
  /* 11535f3c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11535f3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535f42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11535f45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11535f47 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11535f4c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535f52 je 0x11535f68 */
  if (C.zf) goto L_11535f68;
  /* 11535f54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535f57 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11535f5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11535f5c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11535f60 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535f66 je 0x11535f6c */
  if (C.zf) goto L_11535f6c;
L_11535f68:;
  /* 11535f68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11535f6a jmp 0x11535f89 */
  goto L_11535f89;
L_11535f6c:;
  /* 11535f6c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11535f6f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11535f71 push eax */
  push32((uint32_t)(EAX));
  /* 11535f72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11535f75 push ecx */
  push32((uint32_t)(ECX));
  /* 11535f76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11535f79 push edx */
  push32((uint32_t)(EDX));
  /* 11535f7a call 0x1152f7c0 */
  push32(0x11535f7fu); f_1152f7c0();
  /* 11535f7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11535f82 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11535f85 jmp 0x11535f89 */
  goto L_11535f89;
L_11535f87:;
  /* 11535f87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11535f89:;
  /* 11535f89 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11535f8c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11535f8f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11535f96 pop edi */
  EDI = (pop32());
  /* 11535f97 pop esi */
  ESI = (pop32());
  /* 11535f98 pop ebx */
  EBX = (pop32());
  /* 11535f99 mov esp, ebp */
  ESP = (EBP);
  /* 11535f9b pop ebp */
  EBP = (pop32());
  /* 11535f9c ret  */
  ESPCHK(0x11535d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fa0 @ 0x11535fa0 (208 bytes, 85 insns) */
void f_11535fa0(void) {
  FTRACE(0x11535fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11535fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11535fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11535fa3 push edi */
  push32((uint32_t)(EDI));
  /* 11535fa4 push esi */
  push32((uint32_t)(ESI));
  /* 11535fa5 push ebx */
  push32((uint32_t)(EBX));
  /* 11535fa6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11535fa9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11535fac lea eax, [0x11553a58] */
  EAX = ((uint32_t)(0x11553a58));
  /* 11535fb2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11535fb6 jne 0x11535ff3 */
  if (!C.zf) goto L_11535ff3;
  /* 11535fb8 mov al, 0xff */
  AL = (0xffu);
  /* 11535fba mov edi, edi */
  EDI = (EDI);
L_11535fbc:;
  /* 11535fbc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11535fbe je 0x11535fee */
  if (C.zf) goto L_11535fee;
  /* 11535fc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11535fc2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11535fc3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11535fc5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11535fc6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11535fc8 je 0x11535fbc */
  if (C.zf) goto L_11535fbc;
  /* 11535fca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11535fcc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11535fce sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11535fd0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11535fd3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11535fd5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11535fd7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11535fd9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11535fdb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11535fdd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11535fdf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11535fe2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11535fe4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11535fe6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11535fe8 je 0x11535fbc */
  if (C.zf) goto L_11535fbc;
  /* 11535fea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11535fec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11535fee:;
  /* 11535fee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11535ff1 jmp 0x1153606b */
  goto L_1153606b;
L_11535ff3:;
  /* 11535ff3 lock inc dword ptr [0x11553bec] */
  x86_unimpl("lock inc @ 0x11535ff3");
  /* 11535ffa cmp dword ptr [0x11553bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536001 jg 0x11536007 */
  if ((!C.zf&&C.sf==C.of)) goto L_11536007;
  /* 11536003 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536005 jmp 0x1153601c */
  goto L_1153601c;
L_11536007:;
  /* 11536007 lock dec dword ptr [0x11553bec] */
  x86_unimpl("lock dec @ 0x11536007");
  /* 1153600e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11536010 call 0x1152b2d0 */
  push32(0x11536015u); f_1152b2d0();
  /* 11536015 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1153601c:;
  /* 1153601c mov eax, 0xff */
  EAX = (0xffu);
  /* 11536021 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11536023 nop  */
  /* nop */
L_11536024:;
  /* 11536024 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11536026 je 0x1153604f */
  if (C.zf) goto L_1153604f;
  /* 11536028 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1153602a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1153602b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1153602d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1153602e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11536030 je 0x11536024 */
  if (C.zf) goto L_11536024;
  /* 11536032 push eax */
  push32((uint32_t)(EAX));
  /* 11536033 push ebx */
  push32((uint32_t)(EBX));
  /* 11536034 call 0x11537110 */
  push32(0x11536039u); f_11537110();
  /* 11536039 mov ebx, eax */
  EBX = (EAX);
  /* 1153603b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153603e call 0x11537110 */
  push32(0x11536043u); f_11537110();
  /* 11536043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536046 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11536048 je 0x11536024 */
  if (C.zf) goto L_11536024;
  /* 1153604a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153604c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1153604f:;
  /* 1153604f mov ebx, eax */
  EBX = (EAX);
  /* 11536051 pop eax */
  EAX = (pop32());
  /* 11536052 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536054 jne 0x1153605f */
  if (!C.zf) goto L_1153605f;
  /* 11536056 lock dec dword ptr [0x11553bec] */
  x86_unimpl("lock dec @ 0x11536056");
  /* 1153605d jmp 0x11536069 */
  goto L_11536069;
L_1153605f:;
  /* 1153605f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11536061 call 0x1152b370 */
  push32(0x11536066u); f_1152b370();
  /* 11536066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11536069:;
  /* 11536069 mov eax, ebx */
  EAX = (EBX);
L_1153606b:;
  /* 1153606b pop ebx */
  EBX = (pop32());
  /* 1153606c pop esi */
  ESI = (pop32());
  /* 1153606d pop edi */
  EDI = (pop32());
  /* 1153606e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1153606f ret  */
  ESPCHK(0x11535fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016070 @ 0x11536070 (257 bytes, 103 insns) */
void f_11536070(void) {
  FTRACE(0x11536070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11536070 push ebp */
  push32((uint32_t)(EBP));
  /* 11536071 mov ebp, esp */
  EBP = (ESP);
  /* 11536073 push edi */
  push32((uint32_t)(EDI));
  /* 11536074 push esi */
  push32((uint32_t)(ESI));
  /* 11536075 push ebx */
  push32((uint32_t)(EBX));
  /* 11536076 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536079 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1153607b je 0x1153616a */
  if (C.zf) goto L_1153616a;
  /* 11536081 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11536084 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11536087 lea eax, [0x11553a58] */
  EAX = ((uint32_t)(0x11553a58));
  /* 1153608d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536091 jne 0x115360e1 */
  if (!C.zf) goto L_115360e1;
  /* 11536093 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11536095 mov bl, 0x5a */
  BL = (0x5au);
  /* 11536097 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11536099 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1153609c:;
  /* 1153609c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1153609e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 115360a0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 115360a2 je 0x115360c5 */
  if (C.zf) goto L_115360c5;
  /* 115360a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115360a6 je 0x115360c5 */
  if (C.zf) goto L_115360c5;
  /* 115360a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115360a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115360aa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115360ac jb 0x115360b4 */
  if (C.cf) goto L_115360b4;
  /* 115360ae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115360b0 ja 0x115360b4 */
  if ((!C.cf&&!C.zf)) goto L_115360b4;
  /* 115360b2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_115360b4:;
  /* 115360b4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115360b6 jb 0x115360be */
  if (C.cf) goto L_115360be;
  /* 115360b8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115360ba ja 0x115360be */
  if ((!C.cf&&!C.zf)) goto L_115360be;
  /* 115360bc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_115360be:;
  /* 115360be cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115360c0 jne 0x115360cf */
  if (!C.zf) goto L_115360cf;
  /* 115360c2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115360c3 jne 0x1153609c */
  if (!C.zf) goto L_1153609c;
L_115360c5:;
  /* 115360c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115360c7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115360c9 je 0x1153616a */
  if (C.zf) goto L_1153616a;
L_115360cf:;
  /* 115360cf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 115360d4 jb 0x1153616a */
  if (C.cf) goto L_1153616a;
  /* 115360da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115360dc jmp 0x1153616a */
  goto L_1153616a;
L_115360e1:;
  /* 115360e1 lock inc dword ptr [0x11553bec] */
  x86_unimpl("lock inc @ 0x115360e1");
  /* 115360e8 cmp dword ptr [0x11553bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115360ef jg 0x115360f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_115360f5;
  /* 115360f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115360f3 jmp 0x1153610e */
  goto L_1153610e;
L_115360f5:;
  /* 115360f5 lock dec dword ptr [0x11553bec] */
  x86_unimpl("lock dec @ 0x115360f5");
  /* 115360fc mov ebx, ecx */
  EBX = (ECX);
  /* 115360fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11536100 call 0x1152b2d0 */
  push32(0x11536105u); f_1152b2d0();
  /* 11536105 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1153610c mov ecx, ebx */
  ECX = (EBX);
L_1153610e:;
  /* 1153610e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536110 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11536112 mov edi, edi */
  EDI = (EDI);
L_11536114:;
  /* 11536114 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11536116 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536118 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1153611a je 0x1153613f */
  if (C.zf) goto L_1153613f;
  /* 1153611c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1153611e je 0x1153613f */
  if (C.zf) goto L_1153613f;
  /* 11536120 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11536121 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11536122 push ecx */
  push32((uint32_t)(ECX));
  /* 11536123 push eax */
  push32((uint32_t)(EAX));
  /* 11536124 push ebx */
  push32((uint32_t)(EBX));
  /* 11536125 call 0x11537110 */
  push32(0x1153612au); f_11537110();
  /* 1153612a mov ebx, eax */
  EBX = (EAX);
  /* 1153612c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153612f call 0x11537110 */
  push32(0x11536134u); f_11537110();
  /* 11536134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536137 pop ecx */
  ECX = (pop32());
  /* 11536138 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153613a jne 0x11536145 */
  if (!C.zf) goto L_11536145;
  /* 1153613c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1153613d jne 0x11536114 */
  if (!C.zf) goto L_11536114;
L_1153613f:;
  /* 1153613f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11536141 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536143 je 0x1153614e */
  if (C.zf) goto L_1153614e;
L_11536145:;
  /* 11536145 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1153614a jb 0x1153614e */
  if (C.cf) goto L_1153614e;
  /* 1153614c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1153614e:;
  /* 1153614e pop eax */
  EAX = (pop32());
  /* 1153614f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536151 jne 0x1153615c */
  if (!C.zf) goto L_1153615c;
  /* 11536153 lock dec dword ptr [0x11553bec] */
  x86_unimpl("lock dec @ 0x11536153");
  /* 1153615a jmp 0x1153616a */
  goto L_1153616a;
L_1153615c:;
  /* 1153615c mov ebx, ecx */
  EBX = (ECX);
  /* 1153615e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11536160 call 0x1152b370 */
  push32(0x11536165u); f_1152b370();
  /* 11536165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536168 mov ecx, ebx */
  ECX = (EBX);
L_1153616a:;
  /* 1153616a mov eax, ecx */
  EAX = (ECX);
  /* 1153616c pop ebx */
  EBX = (pop32());
  /* 1153616d pop esi */
  ESI = (pop32());
  /* 1153616e pop edi */
  EDI = (pop32());
  /* 1153616f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11536170 ret  */
  ESPCHK(0x11536070u, _esp0);
  ESP += 4; return;
}

/* FUN_10016180 @ 0x11536180 (255 bytes, 88 insns) */
void f_11536180(void) {
  FTRACE(0x11536180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11536180 push ebp */
  push32((uint32_t)(EBP));
  /* 11536181 mov ebp, esp */
  EBP = (ESP);
  /* 11536183 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11536186:;
  /* 11536186 cmp dword ptr [0x11551ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11551ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153618d jle 0x115361a6 */
  if ((C.zf||C.sf!=C.of)) goto L_115361a6;
  /* 1153618f push 8 */
  push32((uint32_t)(0x8u));
  /* 11536191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536194 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11536196 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11536198 push ecx */
  push32((uint32_t)(ECX));
  /* 11536199 call 0x1152d8e0 */
  push32(0x1153619eu); f_1152d8e0();
  /* 1153619e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115361a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115361a4 jmp 0x115361bf */
  goto L_115361bf;
L_115361a6:;
  /* 115361a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115361a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115361ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115361ad mov ecx, dword ptr [0x11551c98] */
  ECX = (r32((uint32_t)(0x11551c98)));
  /* 115361b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115361b5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115361b9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 115361bc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115361bf:;
  /* 115361bf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115361c3 je 0x115361d0 */
  if (C.zf) goto L_115361d0;
  /* 115361c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115361c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115361cb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115361ce jmp 0x11536186 */
  goto L_11536186;
L_115361d0:;
  /* 115361d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115361d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115361d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115361d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115361da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115361dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115361e0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115361e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115361e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115361e9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115361ed je 0x115361f5 */
  if (C.zf) goto L_115361f5;
  /* 115361ef cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115361f3 jne 0x11536208 */
  if (!C.zf) goto L_11536208;
L_115361f5:;
  /* 115361f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115361f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115361fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115361fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115361ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536202 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536205 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11536208:;
  /* 11536208 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1153620f:;
  /* 1153620f cmp dword ptr [0x11551ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11551ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536216 jle 0x1153622b */
  if ((C.zf||C.sf!=C.of)) goto L_1153622b;
  /* 11536218 push 4 */
  push32((uint32_t)(0x4u));
  /* 1153621a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153621d push edx */
  push32((uint32_t)(EDX));
  /* 1153621e call 0x1152d8e0 */
  push32(0x11536223u); f_1152d8e0();
  /* 11536223 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536226 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11536229 jmp 0x11536240 */
  goto L_11536240;
L_1153622b:;
  /* 1153622b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153622e mov ecx, dword ptr [0x11551c98] */
  ECX = (r32((uint32_t)(0x11551c98)));
  /* 11536234 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11536236 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1153623a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1153623d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11536240:;
  /* 11536240 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536244 je 0x1153626b */
  if (C.zf) goto L_1153626b;
  /* 11536246 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11536249 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153624c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153624f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11536253 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11536256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536259 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1153625b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1153625d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11536260 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536263 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536266 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11536269 jmp 0x1153620f */
  goto L_1153620f;
L_1153626b:;
  /* 1153626b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153626f jne 0x11536278 */
  if (!C.zf) goto L_11536278;
  /* 11536271 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11536274 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11536276 jmp 0x1153627b */
  goto L_1153627b;
L_11536278:;
  /* 11536278 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1153627b:;
  /* 1153627b mov esp, ebp */
  ESP = (EBP);
  /* 1153627d pop ebp */
  EBP = (pop32());
  /* 1153627e ret  */
  ESPCHK(0x11536180u, _esp0);
  ESP += 4; return;
}

/* FUN_10016280 @ 0x11536280 (17 bytes, 8 insns) */
void f_11536280(void) {
  FTRACE(0x11536280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11536280 push ebp */
  push32((uint32_t)(EBP));
  /* 11536281 mov ebp, esp */
  EBP = (ESP);
  /* 11536283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536286 push eax */
  push32((uint32_t)(EAX));
  /* 11536287 call 0x11536180 */
  push32(0x1153628cu); f_11536180();
  /* 1153628c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153628f pop ebp */
  EBP = (pop32());
  /* 11536290 ret  */
  ESPCHK(0x11536280u, _esp0);
  ESP += 4; return;
}

/* FUN_100162a0 @ 0x115362a0 (297 bytes, 106 insns) */
void f_115362a0(void) {
  FTRACE(0x115362a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115362a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115362a1 mov ebp, esp */
  EBP = (ESP);
  /* 115362a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115362a6 push esi */
  push32((uint32_t)(ESI));
L_115362a7:;
  /* 115362a7 cmp dword ptr [0x11551ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11551ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115362ae jle 0x115362c7 */
  if ((C.zf||C.sf!=C.of)) goto L_115362c7;
  /* 115362b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 115362b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115362b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115362b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115362b9 push ecx */
  push32((uint32_t)(ECX));
  /* 115362ba call 0x1152d8e0 */
  push32(0x115362bfu); f_1152d8e0();
  /* 115362bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115362c2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115362c5 jmp 0x115362e0 */
  goto L_115362e0;
L_115362c7:;
  /* 115362c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115362ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115362cc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115362ce mov ecx, dword ptr [0x11551c98] */
  ECX = (r32((uint32_t)(0x11551c98)));
  /* 115362d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115362d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115362da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 115362dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_115362e0:;
  /* 115362e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115362e4 je 0x115362f1 */
  if (C.zf) goto L_115362f1;
  /* 115362e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115362e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115362ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115362ef jmp 0x115362a7 */
  goto L_115362a7;
L_115362f1:;
  /* 115362f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115362f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115362f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115362f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115362fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115362fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536301 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11536304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11536307 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1153630a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153630e je 0x11536316 */
  if (C.zf) goto L_11536316;
  /* 11536310 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536314 jne 0x11536329 */
  if (!C.zf) goto L_11536329;
L_11536316:;
  /* 11536316 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536319 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153631b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1153631d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11536320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536323 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536326 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11536329:;
  /* 11536329 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11536330 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11536337:;
  /* 11536337 cmp dword ptr [0x11551ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11551ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153633e jle 0x11536353 */
  if ((C.zf||C.sf!=C.of)) goto L_11536353;
  /* 11536340 push 4 */
  push32((uint32_t)(0x4u));
  /* 11536342 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11536345 push edx */
  push32((uint32_t)(EDX));
  /* 11536346 call 0x1152d8e0 */
  push32(0x1153634bu); f_1152d8e0();
  /* 1153634b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153634e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11536351 jmp 0x11536368 */
  goto L_11536368;
L_11536353:;
  /* 11536353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11536356 mov ecx, dword ptr [0x11551c98] */
  ECX = (r32((uint32_t)(0x11551c98)));
  /* 1153635c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1153635e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11536362 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11536365 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11536368:;
  /* 11536368 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153636c je 0x115363a9 */
  if (C.zf) goto L_115363a9;
  /* 1153636e push 0 */
  push32((uint32_t)(0x0u));
  /* 11536370 push 0xa */
  push32((uint32_t)(0xau));
  /* 11536372 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11536375 push eax */
  push32((uint32_t)(EAX));
  /* 11536376 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536379 push ecx */
  push32((uint32_t)(ECX));
  /* 1153637a call 0x11537240 */
  push32(0x1153637fu); f_11537240();
  /* 1153637f mov ecx, eax */
  ECX = (EAX);
  /* 11536381 mov esi, edx */
  ESI = (EDX);
  /* 11536383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11536386 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536389 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1153638a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153638c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1153638e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11536391 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11536394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536399 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1153639b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1153639e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115363a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115363a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 115363a7 jmp 0x11536337 */
  goto L_11536337;
L_115363a9:;
  /* 115363a9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115363ad jne 0x115363be */
  if (!C.zf) goto L_115363be;
  /* 115363af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115363b2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115363b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115363b7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115363ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115363bc jmp 0x115363c4 */
  goto L_115363c4;
L_115363be:;
  /* 115363be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115363c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_115363c4:;
  /* 115363c4 pop esi */
  ESI = (pop32());
  /* 115363c5 mov esp, ebp */
  ESP = (EBP);
  /* 115363c7 pop ebp */
  EBP = (pop32());
  /* 115363c8 ret  */
  ESPCHK(0x115362a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163d0 @ 0x115363d0 (61 bytes, 18 insns) */
void f_115363d0(void) {
  FTRACE(0x115363d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115363d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115363d1 mov ebp, esp */
  EBP = (ESP);
  /* 115363d3 cmp dword ptr [0x11553bb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115363da jne 0x1153640b */
  if (!C.zf) goto L_1153640b;
  /* 115363dc push 0xb */
  push32((uint32_t)(0xbu));
  /* 115363de call 0x1152b2d0 */
  push32(0x115363e3u); f_1152b2d0();
  /* 115363e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115363e6 cmp dword ptr [0x11553bb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115363ed jne 0x11536401 */
  if (!C.zf) goto L_11536401;
  /* 115363ef call 0x11536430 */
  push32(0x115363f4u); f_11536430();
  /* 115363f4 mov eax, dword ptr [0x11553bb8] */
  EAX = (r32((uint32_t)(0x11553bb8)));
  /* 115363f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115363fc mov dword ptr [0x11553bb8], eax */
  w32((uint32_t)(0x11553bb8), (EAX));
L_11536401:;
  /* 11536401 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11536403 call 0x1152b370 */
  push32(0x11536408u); f_1152b370();
  /* 11536408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1153640b:;
  /* 1153640b pop ebp */
  EBP = (pop32());
  /* 1153640c ret  */
  ESPCHK(0x115363d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016410 @ 0x11536410 (30 bytes, 11 insns) */
void f_11536410(void) {
  FTRACE(0x11536410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11536410 push ebp */
  push32((uint32_t)(EBP));
  /* 11536411 mov ebp, esp */
  EBP = (ESP);
  /* 11536413 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11536415 call 0x1152b2d0 */
  push32(0x1153641au); f_1152b2d0();
  /* 1153641a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153641d call 0x11536430 */
  push32(0x11536422u); f_11536430();
  /* 11536422 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11536424 call 0x1152b370 */
  push32(0x11536429u); f_1152b370();
  /* 11536429 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153642c pop ebp */
  EBP = (pop32());
  /* 1153642d ret  */
  ESPCHK(0x11536410u, _esp0);
  ESP += 4; return;
}

/* FUN_10016430 @ 0x11536430 (939 bytes, 266 insns) */
void f_11536430(void) {
  FTRACE(0x11536430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11536430 push ebp */
  push32((uint32_t)(EBP));
  /* 11536431 mov ebp, esp */
  EBP = (ESP);
  /* 11536433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536436 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1153643d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1153643f call 0x1152b2d0 */
  push32(0x11536444u); f_1152b2d0();
  /* 11536444 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536447 mov dword ptr [0x11553b00], 0 */
  w32((uint32_t)(0x11553b00), (0x0u));
  /* 11536451 mov dword ptr [0x11552e38], 0xffffffff */
  w32((uint32_t)(0x11552e38), (0xffffffffu));
  /* 1153645b mov eax, dword ptr [0x11552e38] */
  EAX = (r32((uint32_t)(0x11552e38)));
  /* 11536460 mov dword ptr [0x11552e28], eax */
  w32((uint32_t)(0x11552e28), (EAX));
  /* 11536465 push 0x1154fde8 */
  push32((uint32_t)(0x1154fde8u));
  /* 1153646a call 0x115372b0 */
  push32(0x1153646fu); f_115372b0();
  /* 1153646f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536472 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11536475 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536479 jne 0x115365b3 */
  if (!C.zf) goto L_115365b3;
  /* 1153647f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11536481 call 0x1152b370 */
  push32(0x11536486u); f_1152b370();
  /* 11536486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536489 push 0x11553b08 */
  push32((uint32_t)(0x11553b08u));
  /* 1153648e call dword ptr [0x115562fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562fc))), 0x11536494u);
  /* 11536494 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536497 je 0x115365ae */
  if (C.zf) goto L_115365ae;
  /* 1153649d mov dword ptr [0x11553b00], 1 */
  w32((uint32_t)(0x11553b00), (0x1u));
  /* 115364a7 mov ecx, dword ptr [0x11553b08] */
  ECX = (r32((uint32_t)(0x11553b08)));
  /* 115364ad imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115364b0 mov dword ptr [0x11552d90], ecx */
  w32((uint32_t)(0x11552d90), (ECX));
  /* 115364b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115364b8 mov dx, word ptr [0x11553b4e] */
  DX = (r16((uint32_t)(0x11553b4e)));
  /* 115364bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115364c1 je 0x115364d9 */
  if (C.zf) goto L_115364d9;
  /* 115364c3 mov eax, dword ptr [0x11553b5c] */
  EAX = (r32((uint32_t)(0x11553b5c)));
  /* 115364c8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115364cb mov ecx, dword ptr [0x11552d90] */
  ECX = (r32((uint32_t)(0x11552d90)));
  /* 115364d1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115364d3 mov dword ptr [0x11552d90], ecx */
  w32((uint32_t)(0x11552d90), (ECX));
L_115364d9:;
  /* 115364d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115364db mov dx, word ptr [0x11553ba2] */
  DX = (r16((uint32_t)(0x11553ba2)));
  /* 115364e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115364e4 je 0x1153650e */
  if (C.zf) goto L_1153650e;
  /* 115364e6 cmp dword ptr [0x11553bb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115364ed je 0x1153650e */
  if (C.zf) goto L_1153650e;
  /* 115364ef mov dword ptr [0x11552d94], 1 */
  w32((uint32_t)(0x11552d94), (0x1u));
  /* 115364f9 mov eax, dword ptr [0x11553bb0] */
  EAX = (r32((uint32_t)(0x11553bb0)));
  /* 115364fe sub eax, dword ptr [0x11553b5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11553b5c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536504 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536507 mov dword ptr [0x11552d98], eax */
  w32((uint32_t)(0x11552d98), (EAX));
  /* 1153650c jmp 0x11536522 */
  goto L_11536522;
L_1153650e:;
  /* 1153650e mov dword ptr [0x11552d94], 0 */
  w32((uint32_t)(0x11552d94), (0x0u));
  /* 11536518 mov dword ptr [0x11552d98], 0 */
  w32((uint32_t)(0x11552d98), (0x0u));
L_11536522:;
  /* 11536522 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11536525 push ecx */
  push32((uint32_t)(ECX));
  /* 11536526 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536528 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1153652a mov edx, dword ptr [0x11552e1c] */
  EDX = (r32((uint32_t)(0x11552e1c)));
  /* 11536530 push edx */
  push32((uint32_t)(EDX));
  /* 11536531 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11536533 push 0x11553b0c */
  push32((uint32_t)(0x11553b0cu));
  /* 11536538 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1153653d mov eax, dword ptr [0x11553a70] */
  EAX = (r32((uint32_t)(0x11553a70)));
  /* 11536542 push eax */
  push32((uint32_t)(EAX));
  /* 11536543 call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x11536549u);
  /* 11536549 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153654b je 0x1153655f */
  if (C.zf) goto L_1153655f;
  /* 1153654d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536551 jne 0x1153655f */
  if (!C.zf) goto L_1153655f;
  /* 11536553 mov ecx, dword ptr [0x11552e1c] */
  ECX = (r32((uint32_t)(0x11552e1c)));
  /* 11536559 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1153655d jmp 0x11536568 */
  goto L_11536568;
L_1153655f:;
  /* 1153655f mov edx, dword ptr [0x11552e1c] */
  EDX = (r32((uint32_t)(0x11552e1c)));
  /* 11536565 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11536568:;
  /* 11536568 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1153656b push eax */
  push32((uint32_t)(EAX));
  /* 1153656c push 0 */
  push32((uint32_t)(0x0u));
  /* 1153656e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11536570 mov ecx, dword ptr [0x11552e20] */
  ECX = (r32((uint32_t)(0x11552e20)));
  /* 11536576 push ecx */
  push32((uint32_t)(ECX));
  /* 11536577 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11536579 push 0x11553b60 */
  push32((uint32_t)(0x11553b60u));
  /* 1153657e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11536583 mov edx, dword ptr [0x11553a70] */
  EDX = (r32((uint32_t)(0x11553a70)));
  /* 11536589 push edx */
  push32((uint32_t)(EDX));
  /* 1153658a call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x11536590u);
  /* 11536590 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11536592 je 0x115365a5 */
  if (C.zf) goto L_115365a5;
  /* 11536594 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536598 jne 0x115365a5 */
  if (!C.zf) goto L_115365a5;
  /* 1153659a mov eax, dword ptr [0x11552e20] */
  EAX = (r32((uint32_t)(0x11552e20)));
  /* 1153659f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 115365a3 jmp 0x115365ae */
  goto L_115365ae;
L_115365a5:;
  /* 115365a5 mov ecx, dword ptr [0x11552e20] */
  ECX = (r32((uint32_t)(0x11552e20)));
  /* 115365ab mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_115365ae:;
  /* 115365ae jmp 0x115367d7 */
  goto L_115367d7;
L_115365b3:;
  /* 115365b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115365b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115365b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115365bb je 0x115365dd */
  if (C.zf) goto L_115365dd;
  /* 115365bd cmp dword ptr [0x11553bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115365c4 je 0x115365ec */
  if (C.zf) goto L_115365ec;
  /* 115365c6 mov ecx, dword ptr [0x11553bb4] */
  ECX = (r32((uint32_t)(0x11553bb4)));
  /* 115365cc push ecx */
  push32((uint32_t)(ECX));
  /* 115365cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115365d0 push edx */
  push32((uint32_t)(EDX));
  /* 115365d1 call 0x11533560 */
  push32(0x115365d6u); f_11533560();
  /* 115365d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115365d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115365db jne 0x115365ec */
  if (!C.zf) goto L_115365ec;
L_115365dd:;
  /* 115365dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 115365df call 0x1152b370 */
  push32(0x115365e4u); f_1152b370();
  /* 115365e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115365e7 jmp 0x115367d7 */
  goto L_115367d7;
L_115365ec:;
  /* 115365ec push 2 */
  push32((uint32_t)(0x2u));
  /* 115365ee mov eax, dword ptr [0x11553bb4] */
  EAX = (r32((uint32_t)(0x11553bb4)));
  /* 115365f3 push eax */
  push32((uint32_t)(EAX));
  /* 115365f4 call 0x11528360 */
  push32(0x115365f9u); f_11528360();
  /* 115365f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115365fc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11536601 push 0x1154fde0 */
  push32((uint32_t)(0x1154fde0u));
  /* 11536606 push 2 */
  push32((uint32_t)(0x2u));
  /* 11536608 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153660b push ecx */
  push32((uint32_t)(ECX));
  /* 1153660c call 0x1152a700 */
  push32(0x11536611u); f_1152a700();
  /* 11536611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536614 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536617 push eax */
  push32((uint32_t)(EAX));
  /* 11536618 call 0x115278d0 */
  push32(0x1153661du); f_115278d0();
  /* 1153661d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536620 mov dword ptr [0x11553bb4], eax */
  w32((uint32_t)(0x11553bb4), (EAX));
  /* 11536625 cmp dword ptr [0x11553bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153662c jne 0x1153663d */
  if (!C.zf) goto L_1153663d;
  /* 1153662e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11536630 call 0x1152b370 */
  push32(0x11536635u); f_1152b370();
  /* 11536635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536638 jmp 0x115367d7 */
  goto L_115367d7;
L_1153663d:;
  /* 1153663d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536640 push edx */
  push32((uint32_t)(EDX));
  /* 11536641 mov eax, dword ptr [0x11553bb4] */
  EAX = (r32((uint32_t)(0x11553bb4)));
  /* 11536646 push eax */
  push32((uint32_t)(EAX));
  /* 11536647 call 0x1152a880 */
  push32(0x1153664cu); f_1152a880();
  /* 1153664c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153664f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11536651 call 0x1152b370 */
  push32(0x11536656u); f_1152b370();
  /* 11536656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536659 push 3 */
  push32((uint32_t)(0x3u));
  /* 1153665b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153665e push ecx */
  push32((uint32_t)(ECX));
  /* 1153665f mov edx, dword ptr [0x11552e1c] */
  EDX = (r32((uint32_t)(0x11552e1c)));
  /* 11536665 push edx */
  push32((uint32_t)(EDX));
  /* 11536666 call 0x1152b0f0 */
  push32(0x1153666bu); f_1152b0f0();
  /* 1153666b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153666e mov eax, dword ptr [0x11552e1c] */
  EAX = (r32((uint32_t)(0x11552e1c)));
  /* 11536673 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11536677 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153667a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153667d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11536680 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536683 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11536686 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536689 jne 0x1153669d */
  if (!C.zf) goto L_1153669d;
  /* 1153668b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153668e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536691 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11536694 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536697 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153669a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1153669d:;
  /* 1153669d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115366a0 push eax */
  push32((uint32_t)(EAX));
  /* 115366a1 call 0x11536180 */
  push32(0x115366a6u); f_11536180();
  /* 115366a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115366a9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115366af mov dword ptr [0x11552d90], eax */
  w32((uint32_t)(0x11552d90), (EAX));
L_115366b4:;
  /* 115366b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115366b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115366ba cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115366bd je 0x115366d5 */
  if (C.zf) goto L_115366d5;
  /* 115366bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115366c2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115366c5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115366c8 jl 0x115366e0 */
  if ((C.sf!=C.of)) goto L_115366e0;
  /* 115366ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115366cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115366d0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115366d3 jg 0x115366e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_115366e0;
L_115366d5:;
  /* 115366d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115366d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115366db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115366de jmp 0x115366b4 */
  goto L_115366b4;
L_115366e0:;
  /* 115366e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115366e3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115366e6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115366e9 jne 0x11536785 */
  if (!C.zf) goto L_11536785;
  /* 115366ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115366f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115366f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115366f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115366fb push edx */
  push32((uint32_t)(EDX));
  /* 115366fc call 0x11536180 */
  push32(0x11536701u); f_11536180();
  /* 11536701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536704 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536707 mov ecx, dword ptr [0x11552d90] */
  ECX = (r32((uint32_t)(0x11552d90)));
  /* 1153670d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153670f mov dword ptr [0x11552d90], ecx */
  w32((uint32_t)(0x11552d90), (ECX));
L_11536715:;
  /* 11536715 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536718 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1153671b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153671e jl 0x11536736 */
  if ((C.sf!=C.of)) goto L_11536736;
  /* 11536720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536723 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11536726 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536729 jg 0x11536736 */
  if ((!C.zf&&C.sf==C.of)) goto L_11536736;
  /* 1153672b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153672e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536731 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11536734 jmp 0x11536715 */
  goto L_11536715;
L_11536736:;
  /* 11536736 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536739 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1153673c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153673f jne 0x11536785 */
  if (!C.zf) goto L_11536785;
  /* 11536741 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536744 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536747 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1153674a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153674d push ecx */
  push32((uint32_t)(ECX));
  /* 1153674e call 0x11536180 */
  push32(0x11536753u); f_11536180();
  /* 11536753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536756 mov edx, dword ptr [0x11552d90] */
  EDX = (r32((uint32_t)(0x11552d90)));
  /* 1153675c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153675e mov dword ptr [0x11552d90], edx */
  w32((uint32_t)(0x11552d90), (EDX));
L_11536764:;
  /* 11536764 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536767 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1153676a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153676d jl 0x11536785 */
  if ((C.sf!=C.of)) goto L_11536785;
  /* 1153676f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536772 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11536775 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536778 jg 0x11536785 */
  if ((!C.zf&&C.sf==C.of)) goto L_11536785;
  /* 1153677a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153677d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536780 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11536783 jmp 0x11536764 */
  goto L_11536764;
L_11536785:;
  /* 11536785 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536789 je 0x11536799 */
  if (C.zf) goto L_11536799;
  /* 1153678b mov edx, dword ptr [0x11552d90] */
  EDX = (r32((uint32_t)(0x11552d90)));
  /* 11536791 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11536793 mov dword ptr [0x11552d90], edx */
  w32((uint32_t)(0x11552d90), (EDX));
L_11536799:;
  /* 11536799 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153679c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1153679f mov dword ptr [0x11552d94], ecx */
  w32((uint32_t)(0x11552d94), (ECX));
  /* 115367a5 cmp dword ptr [0x11552d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11552d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115367ac je 0x115367ce */
  if (C.zf) goto L_115367ce;
  /* 115367ae push 3 */
  push32((uint32_t)(0x3u));
  /* 115367b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115367b3 push edx */
  push32((uint32_t)(EDX));
  /* 115367b4 mov eax, dword ptr [0x11552e20] */
  EAX = (r32((uint32_t)(0x11552e20)));
  /* 115367b9 push eax */
  push32((uint32_t)(EAX));
  /* 115367ba call 0x1152b0f0 */
  push32(0x115367bfu); f_1152b0f0();
  /* 115367bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115367c2 mov ecx, dword ptr [0x11552e20] */
  ECX = (r32((uint32_t)(0x11552e20)));
  /* 115367c8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 115367cc jmp 0x115367d7 */
  goto L_115367d7;
L_115367ce:;
  /* 115367ce mov edx, dword ptr [0x11552e20] */
  EDX = (r32((uint32_t)(0x11552e20)));
  /* 115367d4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_115367d7:;
  /* 115367d7 mov esp, ebp */
  ESP = (EBP);
  /* 115367d9 pop ebp */
  EBP = (pop32());
  /* 115367da ret  */
  ESPCHK(0x11536430u, _esp0);
  ESP += 4; return;
}

/* FUN_100167e0 @ 0x115367e0 (46 bytes, 18 insns) */
void f_115367e0(void) {
  FTRACE(0x115367e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115367e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115367e1 mov ebp, esp */
  EBP = (ESP);
  /* 115367e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115367e4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115367e6 call 0x1152b2d0 */
  push32(0x115367ebu); f_1152b2d0();
  /* 115367eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115367ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115367f1 push eax */
  push32((uint32_t)(EAX));
  /* 115367f2 call 0x11536810 */
  push32(0x115367f7u); f_11536810();
  /* 115367f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115367fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115367fd push 0xb */
  push32((uint32_t)(0xbu));
  /* 115367ff call 0x1152b370 */
  push32(0x11536804u); f_1152b370();
  /* 11536804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153680a mov esp, ebp */
  ESP = (EBP);
  /* 1153680c pop ebp */
  EBP = (pop32());
  /* 1153680d ret  */
  ESPCHK(0x115367e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016810 @ 0x11536810 (762 bytes, 246 insns) */
void f_11536810(void) {
  FTRACE(0x11536810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11536810 push ebp */
  push32((uint32_t)(EBP));
  /* 11536811 mov ebp, esp */
  EBP = (ESP);
  /* 11536813 push ecx */
  push32((uint32_t)(ECX));
  /* 11536814 cmp dword ptr [0x11552d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11552d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153681b jne 0x11536824 */
  if (!C.zf) goto L_11536824;
  /* 1153681d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153681f jmp 0x11536b06 */
  goto L_11536b06;
L_11536824:;
  /* 11536824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536827 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1153682a cmp ecx, dword ptr [0x11552e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11552e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536830 jne 0x11536844 */
  if (!C.zf) goto L_11536844;
  /* 11536832 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536835 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11536838 cmp eax, dword ptr [0x11552e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11552e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153683e je 0x11536a0b */
  if (C.zf) goto L_11536a0b;
L_11536844:;
  /* 11536844 cmp dword ptr [0x11553b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153684b je 0x115369c5 */
  if (C.zf) goto L_115369c5;
  /* 11536851 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11536853 mov cx, word ptr [0x11553ba0] */
  CX = (r16((uint32_t)(0x11553ba0)));
  /* 1153685a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1153685c jne 0x115368b9 */
  if (!C.zf) goto L_115368b9;
  /* 1153685e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11536860 mov dx, word ptr [0x11553bae] */
  DX = (r16((uint32_t)(0x11553bae)));
  /* 11536867 push edx */
  push32((uint32_t)(EDX));
  /* 11536868 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153686a mov ax, word ptr [0x11553bac] */
  AX = (r16((uint32_t)(0x11553bac)));
  /* 11536870 push eax */
  push32((uint32_t)(EAX));
  /* 11536871 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11536873 mov cx, word ptr [0x11553baa] */
  CX = (r16((uint32_t)(0x11553baa)));
  /* 1153687a push ecx */
  push32((uint32_t)(ECX));
  /* 1153687b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1153687d mov dx, word ptr [0x11553ba8] */
  DX = (r16((uint32_t)(0x11553ba8)));
  /* 11536884 push edx */
  push32((uint32_t)(EDX));
  /* 11536885 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536889 mov ax, word ptr [0x11553ba4] */
  AX = (r16((uint32_t)(0x11553ba4)));
  /* 1153688f push eax */
  push32((uint32_t)(EAX));
  /* 11536890 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11536892 mov cx, word ptr [0x11553ba6] */
  CX = (r16((uint32_t)(0x11553ba6)));
  /* 11536899 push ecx */
  push32((uint32_t)(ECX));
  /* 1153689a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1153689c mov dx, word ptr [0x11553ba2] */
  DX = (r16((uint32_t)(0x11553ba2)));
  /* 115368a3 push edx */
  push32((uint32_t)(EDX));
  /* 115368a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115368a7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115368aa push ecx */
  push32((uint32_t)(ECX));
  /* 115368ab push 1 */
  push32((uint32_t)(0x1u));
  /* 115368ad push 1 */
  push32((uint32_t)(0x1u));
  /* 115368af call 0x11536b10 */
  push32(0x115368b4u); f_11536b10();
  /* 115368b4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115368b7 jmp 0x1153690a */
  goto L_1153690a;
L_115368b9:;
  /* 115368b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115368bb mov dx, word ptr [0x11553bae] */
  DX = (r16((uint32_t)(0x11553bae)));
  /* 115368c2 push edx */
  push32((uint32_t)(EDX));
  /* 115368c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115368c5 mov ax, word ptr [0x11553bac] */
  AX = (r16((uint32_t)(0x11553bac)));
  /* 115368cb push eax */
  push32((uint32_t)(EAX));
  /* 115368cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115368ce mov cx, word ptr [0x11553baa] */
  CX = (r16((uint32_t)(0x11553baa)));
  /* 115368d5 push ecx */
  push32((uint32_t)(ECX));
  /* 115368d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115368d8 mov dx, word ptr [0x11553ba8] */
  DX = (r16((uint32_t)(0x11553ba8)));
  /* 115368df push edx */
  push32((uint32_t)(EDX));
  /* 115368e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115368e2 mov ax, word ptr [0x11553ba6] */
  AX = (r16((uint32_t)(0x11553ba6)));
  /* 115368e8 push eax */
  push32((uint32_t)(EAX));
  /* 115368e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115368eb push 0 */
  push32((uint32_t)(0x0u));
  /* 115368ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115368ef mov cx, word ptr [0x11553ba2] */
  CX = (r16((uint32_t)(0x11553ba2)));
  /* 115368f6 push ecx */
  push32((uint32_t)(ECX));
  /* 115368f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115368fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115368fd push eax */
  push32((uint32_t)(EAX));
  /* 115368fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11536900 push 1 */
  push32((uint32_t)(0x1u));
  /* 11536902 call 0x11536b10 */
  push32(0x11536907u); f_11536b10();
  /* 11536907 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1153690a:;
  /* 1153690a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1153690c mov cx, word ptr [0x11553b4c] */
  CX = (r16((uint32_t)(0x11553b4c)));
  /* 11536913 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11536915 jne 0x11536972 */
  if (!C.zf) goto L_11536972;
  /* 11536917 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11536919 mov dx, word ptr [0x11553b5a] */
  DX = (r16((uint32_t)(0x11553b5a)));
  /* 11536920 push edx */
  push32((uint32_t)(EDX));
  /* 11536921 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536923 mov ax, word ptr [0x11553b58] */
  AX = (r16((uint32_t)(0x11553b58)));
  /* 11536929 push eax */
  push32((uint32_t)(EAX));
  /* 1153692a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1153692c mov cx, word ptr [0x11553b56] */
  CX = (r16((uint32_t)(0x11553b56)));
  /* 11536933 push ecx */
  push32((uint32_t)(ECX));
  /* 11536934 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11536936 mov dx, word ptr [0x11553b54] */
  DX = (r16((uint32_t)(0x11553b54)));
  /* 1153693d push edx */
  push32((uint32_t)(EDX));
  /* 1153693e push 0 */
  push32((uint32_t)(0x0u));
  /* 11536940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536942 mov ax, word ptr [0x11553b50] */
  AX = (r16((uint32_t)(0x11553b50)));
  /* 11536948 push eax */
  push32((uint32_t)(EAX));
  /* 11536949 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1153694b mov cx, word ptr [0x11553b52] */
  CX = (r16((uint32_t)(0x11553b52)));
  /* 11536952 push ecx */
  push32((uint32_t)(ECX));
  /* 11536953 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11536955 mov dx, word ptr [0x11553b4e] */
  DX = (r16((uint32_t)(0x11553b4e)));
  /* 1153695c push edx */
  push32((uint32_t)(EDX));
  /* 1153695d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536960 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11536963 push ecx */
  push32((uint32_t)(ECX));
  /* 11536964 push 1 */
  push32((uint32_t)(0x1u));
  /* 11536966 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536968 call 0x11536b10 */
  push32(0x1153696du); f_11536b10();
  /* 1153696d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536970 jmp 0x115369c3 */
  goto L_115369c3;
L_11536972:;
  /* 11536972 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11536974 mov dx, word ptr [0x11553b5a] */
  DX = (r16((uint32_t)(0x11553b5a)));
  /* 1153697b push edx */
  push32((uint32_t)(EDX));
  /* 1153697c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153697e mov ax, word ptr [0x11553b58] */
  AX = (r16((uint32_t)(0x11553b58)));
  /* 11536984 push eax */
  push32((uint32_t)(EAX));
  /* 11536985 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11536987 mov cx, word ptr [0x11553b56] */
  CX = (r16((uint32_t)(0x11553b56)));
  /* 1153698e push ecx */
  push32((uint32_t)(ECX));
  /* 1153698f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11536991 mov dx, word ptr [0x11553b54] */
  DX = (r16((uint32_t)(0x11553b54)));
  /* 11536998 push edx */
  push32((uint32_t)(EDX));
  /* 11536999 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153699b mov ax, word ptr [0x11553b52] */
  AX = (r16((uint32_t)(0x11553b52)));
  /* 115369a1 push eax */
  push32((uint32_t)(EAX));
  /* 115369a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115369a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115369a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115369a8 mov cx, word ptr [0x11553b4e] */
  CX = (r16((uint32_t)(0x11553b4e)));
  /* 115369af push ecx */
  push32((uint32_t)(ECX));
  /* 115369b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115369b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115369b6 push eax */
  push32((uint32_t)(EAX));
  /* 115369b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115369b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115369bb call 0x11536b10 */
  push32(0x115369c0u); f_11536b10();
  /* 115369c0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115369c3:;
  /* 115369c3 jmp 0x11536a0b */
  goto L_11536a0b;
L_115369c5:;
  /* 115369c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115369c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115369c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115369cb push 2 */
  push32((uint32_t)(0x2u));
  /* 115369cd push 0 */
  push32((uint32_t)(0x0u));
  /* 115369cf push 0 */
  push32((uint32_t)(0x0u));
  /* 115369d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115369d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 115369d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115369d8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115369db push edx */
  push32((uint32_t)(EDX));
  /* 115369dc push 1 */
  push32((uint32_t)(0x1u));
  /* 115369de push 1 */
  push32((uint32_t)(0x1u));
  /* 115369e0 call 0x11536b10 */
  push32(0x115369e5u); f_11536b10();
  /* 115369e5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115369e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115369ea push 0 */
  push32((uint32_t)(0x0u));
  /* 115369ec push 0 */
  push32((uint32_t)(0x0u));
  /* 115369ee push 2 */
  push32((uint32_t)(0x2u));
  /* 115369f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115369f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115369f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 115369f6 push 0xa */
  push32((uint32_t)(0xau));
  /* 115369f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115369fb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115369fe push ecx */
  push32((uint32_t)(ECX));
  /* 115369ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11536a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536a03 call 0x11536b10 */
  push32(0x11536a08u); f_11536b10();
  /* 11536a08 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11536a0b:;
  /* 11536a0b mov edx, dword ptr [0x11552e2c] */
  EDX = (r32((uint32_t)(0x11552e2c)));
  /* 11536a11 cmp edx, dword ptr [0x11552e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11552e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536a17 jge 0x11536a64 */
  if ((C.sf==C.of)) goto L_11536a64;
  /* 11536a19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536a1c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11536a1f cmp ecx, dword ptr [0x11552e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11552e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536a25 jl 0x11536a35 */
  if ((C.sf!=C.of)) goto L_11536a35;
  /* 11536a27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536a2a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11536a2d cmp eax, dword ptr [0x11552e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11552e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536a33 jle 0x11536a3c */
  if ((C.zf||C.sf!=C.of)) goto L_11536a3c;
L_11536a35:;
  /* 11536a35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536a37 jmp 0x11536b06 */
  goto L_11536b06;
L_11536a3c:;
  /* 11536a3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536a3f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11536a42 cmp edx, dword ptr [0x11552e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11552e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536a48 jle 0x11536a62 */
  if ((C.zf||C.sf!=C.of)) goto L_11536a62;
  /* 11536a4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536a4d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11536a50 cmp ecx, dword ptr [0x11552e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11552e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536a56 jge 0x11536a62 */
  if ((C.sf==C.of)) goto L_11536a62;
  /* 11536a58 mov eax, 1 */
  EAX = (0x1u);
  /* 11536a5d jmp 0x11536b06 */
  goto L_11536b06;
L_11536a62:;
  /* 11536a62 jmp 0x11536aa7 */
  goto L_11536aa7;
L_11536a64:;
  /* 11536a64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536a67 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11536a6a cmp eax, dword ptr [0x11552e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11552e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536a70 jl 0x11536a80 */
  if ((C.sf!=C.of)) goto L_11536a80;
  /* 11536a72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536a75 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11536a78 cmp edx, dword ptr [0x11552e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11552e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536a7e jle 0x11536a87 */
  if ((C.zf||C.sf!=C.of)) goto L_11536a87;
L_11536a80:;
  /* 11536a80 mov eax, 1 */
  EAX = (0x1u);
  /* 11536a85 jmp 0x11536b06 */
  goto L_11536b06;
L_11536a87:;
  /* 11536a87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536a8a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11536a8d cmp ecx, dword ptr [0x11552e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11552e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536a93 jle 0x11536aa7 */
  if ((C.zf||C.sf!=C.of)) goto L_11536aa7;
  /* 11536a95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536a98 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11536a9b cmp eax, dword ptr [0x11552e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11552e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536aa1 jge 0x11536aa7 */
  if ((C.sf==C.of)) goto L_11536aa7;
  /* 11536aa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536aa5 jmp 0x11536b06 */
  goto L_11536b06;
L_11536aa7:;
  /* 11536aa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536aaa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11536aad imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536ab3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11536ab5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536aba mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11536abd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536ac3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536ac5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536acb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11536ace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536ad1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11536ad4 cmp edx, dword ptr [0x11552e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11552e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536ada jne 0x11536af2 */
  if (!C.zf) goto L_11536af2;
  /* 11536adc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11536adf cmp eax, dword ptr [0x11552e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11552e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536ae5 jl 0x11536aee */
  if ((C.sf!=C.of)) goto L_11536aee;
  /* 11536ae7 mov eax, 1 */
  EAX = (0x1u);
  /* 11536aec jmp 0x11536b06 */
  goto L_11536b06;
L_11536aee:;
  /* 11536aee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536af0 jmp 0x11536b06 */
  goto L_11536b06;
L_11536af2:;
  /* 11536af2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11536af5 cmp ecx, dword ptr [0x11552e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11552e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536afb jge 0x11536b04 */
  if ((C.sf==C.of)) goto L_11536b04;
  /* 11536afd mov eax, 1 */
  EAX = (0x1u);
  /* 11536b02 jmp 0x11536b06 */
  goto L_11536b06;
L_11536b04:;
  /* 11536b04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11536b06:;
  /* 11536b06 mov esp, ebp */
  ESP = (EBP);
  /* 11536b08 pop ebp */
  EBP = (pop32());
  /* 11536b09 ret  */
  ESPCHK(0x11536810u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b10 @ 0x11536b10 (504 bytes, 145 insns) */
void f_11536b10(void) {
  FTRACE(0x11536b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11536b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11536b11 mov ebp, esp */
  EBP = (ESP);
  /* 11536b13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536b16 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536b1a jne 0x11536bec */
  if (!C.zf) goto L_11536bec;
  /* 11536b20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536b23 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11536b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11536b28 jne 0x11536b39 */
  if (!C.zf) goto L_11536b39;
  /* 11536b2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11536b2d mov edx, dword ptr [ecx*4 + 0x11552e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11552e4c)));
  /* 11536b34 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11536b37 jmp 0x11536b46 */
  goto L_11536b46;
L_11536b39:;
  /* 11536b39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11536b3c mov ecx, dword ptr [eax*4 + 0x11552e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11552e80)));
  /* 11536b43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11536b46:;
  /* 11536b46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11536b49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536b4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11536b4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536b52 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536b55 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536b5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11536b5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536b60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536b63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536b66 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11536b69 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11536b6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11536b6e mov ecx, 7 */
  ECX = (0x7u);
  /* 11536b73 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11536b75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11536b78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11536b7b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536b7e jge 0x11536b99 */
  if ((C.sf==C.of)) goto L_11536b99;
  /* 11536b80 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11536b83 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536b86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11536b89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536b8c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536b8f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536b92 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536b94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11536b97 jmp 0x11536bad */
  goto L_11536bad;
L_11536b99:;
  /* 11536b99 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11536b9c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536b9f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11536ba2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536ba5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536ba8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536baa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11536bad:;
  /* 11536bad cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536bb1 jne 0x11536bea */
  if (!C.zf) goto L_11536bea;
  /* 11536bb3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536bb6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11536bb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11536bbb jne 0x11536bcc */
  if (!C.zf) goto L_11536bcc;
  /* 11536bbd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11536bc0 mov eax, dword ptr [edx*4 + 0x11552e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11552e50)));
  /* 11536bc7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11536bca jmp 0x11536bd9 */
  goto L_11536bd9;
L_11536bcc:;
  /* 11536bcc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11536bcf mov edx, dword ptr [ecx*4 + 0x11552e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11552e84)));
  /* 11536bd6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11536bd9:;
  /* 11536bd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11536bdc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536bdf jle 0x11536bea */
  if ((C.zf||C.sf!=C.of)) goto L_11536bea;
  /* 11536be1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11536be4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536be7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11536bea:;
  /* 11536bea jmp 0x11536c21 */
  goto L_11536c21;
L_11536bec:;
  /* 11536bec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536bef and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11536bf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11536bf4 jne 0x11536c05 */
  if (!C.zf) goto L_11536c05;
  /* 11536bf6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11536bf9 mov ecx, dword ptr [eax*4 + 0x11552e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11552e4c)));
  /* 11536c00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11536c03 jmp 0x11536c12 */
  goto L_11536c12;
L_11536c05:;
  /* 11536c05 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11536c08 mov eax, dword ptr [edx*4 + 0x11552e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11552e80)));
  /* 11536c0f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11536c12:;
  /* 11536c12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11536c15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11536c18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11536c1b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536c1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11536c21:;
  /* 11536c21 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536c25 jne 0x11536c61 */
  if (!C.zf) goto L_11536c61;
  /* 11536c27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11536c2a mov dword ptr [0x11552e2c], eax */
  w32((uint32_t)(0x11552e2c), (EAX));
  /* 11536c2f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11536c32 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536c35 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11536c38 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536c3a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536c3d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11536c40 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536c42 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536c48 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11536c4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536c4d mov dword ptr [0x11552e30], ecx */
  w32((uint32_t)(0x11552e30), (ECX));
  /* 11536c53 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536c56 mov dword ptr [0x11552e28], edx */
  w32((uint32_t)(0x11552e28), (EDX));
  /* 11536c5c jmp 0x11536d04 */
  goto L_11536d04;
L_11536c61:;
  /* 11536c61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11536c64 mov dword ptr [0x11552e3c], eax */
  w32((uint32_t)(0x11552e3c), (EAX));
  /* 11536c69 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11536c6c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536c6f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11536c72 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536c74 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536c77 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11536c7a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536c7c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536c82 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11536c85 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536c87 mov dword ptr [0x11552e40], ecx */
  w32((uint32_t)(0x11552e40), (ECX));
  /* 11536c8d mov edx, dword ptr [0x11552d98] */
  EDX = (r32((uint32_t)(0x11552d98)));
  /* 11536c93 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11536c99 mov eax, dword ptr [0x11552e40] */
  EAX = (r32((uint32_t)(0x11552e40)));
  /* 11536c9e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536ca0 mov dword ptr [0x11552e40], eax */
  w32((uint32_t)(0x11552e40), (EAX));
  /* 11536ca5 cmp dword ptr [0x11552e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11552e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536cac jge 0x11536cd1 */
  if ((C.sf==C.of)) goto L_11536cd1;
  /* 11536cae mov ecx, dword ptr [0x11552e40] */
  ECX = (r32((uint32_t)(0x11552e40)));
  /* 11536cb4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536cba mov dword ptr [0x11552e40], ecx */
  w32((uint32_t)(0x11552e40), (ECX));
  /* 11536cc0 mov edx, dword ptr [0x11552e3c] */
  EDX = (r32((uint32_t)(0x11552e3c)));
  /* 11536cc6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536cc9 mov dword ptr [0x11552e3c], edx */
  w32((uint32_t)(0x11552e3c), (EDX));
  /* 11536ccf jmp 0x11536cfb */
  goto L_11536cfb;
L_11536cd1:;
  /* 11536cd1 cmp dword ptr [0x11552e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11552e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536cdb jl 0x11536cfb */
  if ((C.sf!=C.of)) goto L_11536cfb;
  /* 11536cdd mov eax, dword ptr [0x11552e40] */
  EAX = (r32((uint32_t)(0x11552e40)));
  /* 11536ce2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11536ce7 mov dword ptr [0x11552e40], eax */
  w32((uint32_t)(0x11552e40), (EAX));
  /* 11536cec mov ecx, dword ptr [0x11552e3c] */
  ECX = (r32((uint32_t)(0x11552e3c)));
  /* 11536cf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536cf5 mov dword ptr [0x11552e3c], ecx */
  w32((uint32_t)(0x11552e3c), (ECX));
L_11536cfb:;
  /* 11536cfb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536cfe mov dword ptr [0x11552e38], edx */
  w32((uint32_t)(0x11552e38), (EDX));
L_11536d04:;
  /* 11536d04 mov esp, ebp */
  ESP = (EBP);
  /* 11536d06 pop ebp */
  EBP = (pop32());
  /* 11536d07 ret  */
  ESPCHK(0x11536b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d10 @ 0x11536d10 (382 bytes, 135 insns) */
void f_11536d10(void) {
  FTRACE(0x11536d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11536d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11536d11 mov ebp, esp */
  EBP = (ESP);
  /* 11536d13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11536d15 push 0x1154fdf0 */
  push32((uint32_t)(0x1154fdf0u));
  /* 11536d1a push 0x115309d8 */
  push32((uint32_t)(0x115309d8u));
  /* 11536d1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11536d25 push eax */
  push32((uint32_t)(EAX));
  /* 11536d26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11536d2d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536d30 push ebx */
  push32((uint32_t)(EBX));
  /* 11536d31 push esi */
  push32((uint32_t)(ESI));
  /* 11536d32 push edi */
  push32((uint32_t)(EDI));
  /* 11536d33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11536d36 cmp dword ptr [0x11553bbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536d3d jne 0x11536d82 */
  if (!C.zf) goto L_11536d82;
  /* 11536d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11536d41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536d43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11536d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536d47 call dword ptr [0x115562f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562f8))), 0x11536d4du);
  /* 11536d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11536d4f je 0x11536d5d */
  if (C.zf) goto L_11536d5d;
  /* 11536d51 mov dword ptr [0x11553bbc], 1 */
  w32((uint32_t)(0x11553bbc), (0x1u));
  /* 11536d5b jmp 0x11536d82 */
  goto L_11536d82;
L_11536d5d:;
  /* 11536d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11536d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11536d61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11536d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536d65 call dword ptr [0x11556310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556310))), 0x11536d6bu);
  /* 11536d6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11536d6d je 0x11536d7b */
  if (C.zf) goto L_11536d7b;
  /* 11536d6f mov dword ptr [0x11553bbc], 2 */
  w32((uint32_t)(0x11553bbc), (0x2u));
  /* 11536d79 jmp 0x11536d82 */
  goto L_11536d82;
L_11536d7b:;
  /* 11536d7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536d7d jmp 0x11536e91 */
  goto L_11536e91;
L_11536d82:;
  /* 11536d82 cmp dword ptr [0x11553bbc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553bbc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536d89 jne 0x11536da6 */
  if (!C.zf) goto L_11536da6;
  /* 11536d8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11536d8e push eax */
  push32((uint32_t)(EAX));
  /* 11536d8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536d92 push ecx */
  push32((uint32_t)(ECX));
  /* 11536d93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11536d96 push edx */
  push32((uint32_t)(EDX));
  /* 11536d97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536d9a push eax */
  push32((uint32_t)(EAX));
  /* 11536d9b call dword ptr [0x115562f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562f8))), 0x11536da1u);
  /* 11536da1 jmp 0x11536e91 */
  goto L_11536e91;
L_11536da6:;
  /* 11536da6 cmp dword ptr [0x11553bbc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11553bbc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536dad jne 0x11536e8f */
  if (!C.zf) goto L_11536e8f;
  /* 11536db3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536db7 jne 0x11536dc2 */
  if (!C.zf) goto L_11536dc2;
  /* 11536db9 mov ecx, dword ptr [0x11553a70] */
  ECX = (r32((uint32_t)(0x11553a70)));
  /* 11536dbf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11536dc2:;
  /* 11536dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536dc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11536dc9 push edx */
  push32((uint32_t)(EDX));
  /* 11536dca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536dcd push eax */
  push32((uint32_t)(EAX));
  /* 11536dce call dword ptr [0x11556310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556310))), 0x11536dd4u);
  /* 11536dd4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11536dd7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536ddb jne 0x11536de4 */
  if (!C.zf) goto L_11536de4;
  /* 11536ddd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536ddf jmp 0x11536e91 */
  goto L_11536e91;
L_11536de4:;
  /* 11536de4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11536deb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11536dee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536df1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11536df3 call 0x1152aa70 */
  push32(0x11536df8u); f_1152aa70();
  /* 11536df8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11536dfb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11536dfe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11536e01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11536e04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11536e0b jmp 0x11536e24 */
  goto L_11536e24;
  /* 11536e0d mov eax, 1 */
  EAX = (0x1u);
  /* 11536e12 ret  */
  ESPCHK(0x11536d10u, _esp0);
  ESP += 4; return;
  /* 11536e13 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11536e16 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11536e1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11536e24:;
  /* 11536e24 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536e28 jne 0x11536e2e */
  if (!C.zf) goto L_11536e2e;
  /* 11536e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536e2c jmp 0x11536e91 */
  goto L_11536e91;
L_11536e2e:;
  /* 11536e2e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11536e31 push edx */
  push32((uint32_t)(EDX));
  /* 11536e32 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11536e35 push eax */
  push32((uint32_t)(EAX));
  /* 11536e36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11536e39 push ecx */
  push32((uint32_t)(ECX));
  /* 11536e3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536e3d push edx */
  push32((uint32_t)(EDX));
  /* 11536e3e call dword ptr [0x11556310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556310))), 0x11536e44u);
  /* 11536e44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11536e46 jne 0x11536e4c */
  if (!C.zf) goto L_11536e4c;
  /* 11536e48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536e4a jmp 0x11536e91 */
  goto L_11536e91;
L_11536e4c:;
  /* 11536e4c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536e50 jne 0x11536e6d */
  if (!C.zf) goto L_11536e6d;
  /* 11536e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536e56 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11536e58 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11536e5b push eax */
  push32((uint32_t)(EAX));
  /* 11536e5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11536e5e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11536e61 push ecx */
  push32((uint32_t)(ECX));
  /* 11536e62 call dword ptr [0x11556340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556340))), 0x11536e68u);
  /* 11536e68 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11536e6b jmp 0x11536e8a */
  goto L_11536e8a;
L_11536e6d:;
  /* 11536e6d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11536e70 push edx */
  push32((uint32_t)(EDX));
  /* 11536e71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536e74 push eax */
  push32((uint32_t)(EAX));
  /* 11536e75 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11536e77 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11536e7a push ecx */
  push32((uint32_t)(ECX));
  /* 11536e7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11536e7d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11536e80 push edx */
  push32((uint32_t)(EDX));
  /* 11536e81 call dword ptr [0x11556340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556340))), 0x11536e87u);
  /* 11536e87 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11536e8a:;
  /* 11536e8a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11536e8d jmp 0x11536e91 */
  goto L_11536e91;
L_11536e8f:;
  /* 11536e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11536e91:;
  /* 11536e91 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11536e94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11536e97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11536e9e pop edi */
  EDI = (pop32());
  /* 11536e9f pop esi */
  ESI = (pop32());
  /* 11536ea0 pop ebx */
  EBX = (pop32());
  /* 11536ea1 mov esp, ebp */
  ESP = (EBP);
  /* 11536ea3 pop ebp */
  EBP = (pop32());
  /* 11536ea4 ret  */
  ESPCHK(0x11536d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016eb0 @ 0x11536eb0 (398 bytes, 140 insns) */
void f_11536eb0(void) {
  FTRACE(0x11536eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11536eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11536eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11536eb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11536eb5 push 0x1154fe00 */
  push32((uint32_t)(0x1154fe00u));
  /* 11536eba push 0x115309d8 */
  push32((uint32_t)(0x115309d8u));
  /* 11536ebf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11536ec5 push eax */
  push32((uint32_t)(EAX));
  /* 11536ec6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11536ecd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11536ed0 push ebx */
  push32((uint32_t)(EBX));
  /* 11536ed1 push esi */
  push32((uint32_t)(ESI));
  /* 11536ed2 push edi */
  push32((uint32_t)(EDI));
  /* 11536ed3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11536ed6 cmp dword ptr [0x11553bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536edd jne 0x11536f22 */
  if (!C.zf) goto L_11536f22;
  /* 11536edf push 0 */
  push32((uint32_t)(0x0u));
  /* 11536ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11536ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536ee7 call dword ptr [0x115562f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562f8))), 0x11536eedu);
  /* 11536eed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11536eef je 0x11536efd */
  if (C.zf) goto L_11536efd;
  /* 11536ef1 mov dword ptr [0x11553bc0], 1 */
  w32((uint32_t)(0x11553bc0), (0x1u));
  /* 11536efb jmp 0x11536f22 */
  goto L_11536f22;
L_11536efd:;
  /* 11536efd push 0 */
  push32((uint32_t)(0x0u));
  /* 11536eff push 0 */
  push32((uint32_t)(0x0u));
  /* 11536f01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11536f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536f05 call dword ptr [0x11556310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556310))), 0x11536f0bu);
  /* 11536f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11536f0d je 0x11536f1b */
  if (C.zf) goto L_11536f1b;
  /* 11536f0f mov dword ptr [0x11553bc0], 2 */
  w32((uint32_t)(0x11553bc0), (0x2u));
  /* 11536f19 jmp 0x11536f22 */
  goto L_11536f22;
L_11536f1b:;
  /* 11536f1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536f1d jmp 0x11537041 */
  goto L_11537041;
L_11536f22:;
  /* 11536f22 cmp dword ptr [0x11553bc0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11553bc0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536f29 jne 0x11536f46 */
  if (!C.zf) goto L_11536f46;
  /* 11536f2b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11536f2e push eax */
  push32((uint32_t)(EAX));
  /* 11536f2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11536f32 push ecx */
  push32((uint32_t)(ECX));
  /* 11536f33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11536f36 push edx */
  push32((uint32_t)(EDX));
  /* 11536f37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536f3a push eax */
  push32((uint32_t)(EAX));
  /* 11536f3b call dword ptr [0x11556310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556310))), 0x11536f41u);
  /* 11536f41 jmp 0x11537041 */
  goto L_11537041;
L_11536f46:;
  /* 11536f46 cmp dword ptr [0x11553bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536f4d jne 0x1153703f */
  if (!C.zf) goto L_1153703f;
  /* 11536f53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536f57 jne 0x11536f62 */
  if (!C.zf) goto L_11536f62;
  /* 11536f59 mov ecx, dword ptr [0x11553a70] */
  ECX = (r32((uint32_t)(0x11553a70)));
  /* 11536f5f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11536f62:;
  /* 11536f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536f66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11536f69 push edx */
  push32((uint32_t)(EDX));
  /* 11536f6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536f6d push eax */
  push32((uint32_t)(EAX));
  /* 11536f6e call dword ptr [0x115562f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562f8))), 0x11536f74u);
  /* 11536f74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11536f77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536f7b jne 0x11536f84 */
  if (!C.zf) goto L_11536f84;
  /* 11536f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536f7f jmp 0x11537041 */
  goto L_11537041;
L_11536f84:;
  /* 11536f84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11536f8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11536f8e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11536f90 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11536f93 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11536f95 call 0x1152aa70 */
  push32(0x11536f9au); f_1152aa70();
  /* 11536f9a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11536f9d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11536fa0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11536fa3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11536fa6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11536fad jmp 0x11536fc6 */
  goto L_11536fc6;
  /* 11536faf mov eax, 1 */
  EAX = (0x1u);
  /* 11536fb4 ret  */
  ESPCHK(0x11536eb0u, _esp0);
  ESP += 4; return;
  /* 11536fb5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11536fb8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11536fbf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11536fc6:;
  /* 11536fc6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536fca jne 0x11536fd0 */
  if (!C.zf) goto L_11536fd0;
  /* 11536fcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536fce jmp 0x11537041 */
  goto L_11537041;
L_11536fd0:;
  /* 11536fd0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11536fd3 push edx */
  push32((uint32_t)(EDX));
  /* 11536fd4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11536fd7 push eax */
  push32((uint32_t)(EAX));
  /* 11536fd8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11536fdb push ecx */
  push32((uint32_t)(ECX));
  /* 11536fdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11536fdf push edx */
  push32((uint32_t)(EDX));
  /* 11536fe0 call dword ptr [0x115562f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562f8))), 0x11536fe6u);
  /* 11536fe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11536fe8 jne 0x11536fee */
  if (!C.zf) goto L_11536fee;
  /* 11536fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11536fec jmp 0x11537041 */
  goto L_11537041;
L_11536fee:;
  /* 11536fee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11536ff2 jne 0x11537016 */
  if (!C.zf) goto L_11537016;
  /* 11536ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11536ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 11536ffc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11536ffe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11537001 push eax */
  push32((uint32_t)(EAX));
  /* 11537002 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11537007 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1153700a push ecx */
  push32((uint32_t)(ECX));
  /* 1153700b call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x11537011u);
  /* 11537011 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11537014 jmp 0x1153703a */
  goto L_1153703a;
L_11537016:;
  /* 11537016 push 0 */
  push32((uint32_t)(0x0u));
  /* 11537018 push 0 */
  push32((uint32_t)(0x0u));
  /* 1153701a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153701d push edx */
  push32((uint32_t)(EDX));
  /* 1153701e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11537021 push eax */
  push32((uint32_t)(EAX));
  /* 11537022 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11537024 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11537027 push ecx */
  push32((uint32_t)(ECX));
  /* 11537028 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1153702d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11537030 push edx */
  push32((uint32_t)(EDX));
  /* 11537031 call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x11537037u);
  /* 11537037 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1153703a:;
  /* 1153703a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1153703d jmp 0x11537041 */
  goto L_11537041;
L_1153703f:;
  /* 1153703f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11537041:;
  /* 11537041 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11537044 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11537047 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1153704e pop edi */
  EDI = (pop32());
  /* 1153704f pop esi */
  ESI = (pop32());
  /* 11537050 pop ebx */
  EBX = (pop32());
  /* 11537051 mov esp, ebp */
  ESP = (EBP);
  /* 11537053 pop ebp */
  EBP = (pop32());
  /* 11537054 ret  */
  ESPCHK(0x11536eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017060 @ 0x11537060 (11 bytes, 6 insns) */
void f_11537060(void) {
  FTRACE(0x11537060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537060 push ebp */
  push32((uint32_t)(EBP));
  /* 11537061 mov ebp, esp */
  EBP = (ESP);
  /* 11537063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537066 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537069 pop ebp */
  EBP = (pop32());
  /* 1153706a ret  */
  ESPCHK(0x11537060u, _esp0);
  ESP += 4; return;
}

/* FUN_10017070 @ 0x11537070 (147 bytes, 43 insns) */
void f_11537070(void) {
  FTRACE(0x11537070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537070 push ebp */
  push32((uint32_t)(EBP));
  /* 11537071 mov ebp, esp */
  EBP = (ESP);
  /* 11537073 push ecx */
  push32((uint32_t)(ECX));
  /* 11537074 cmp dword ptr [0x11553a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153707b jne 0x11537097 */
  if (!C.zf) goto L_11537097;
  /* 1153707d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537081 jl 0x11537092 */
  if ((C.sf!=C.of)) goto L_11537092;
  /* 11537083 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537087 jg 0x11537092 */
  if ((!C.zf&&C.sf==C.of)) goto L_11537092;
  /* 11537089 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153708c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153708f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11537092:;
  /* 11537092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537095 jmp 0x115370ff */
  goto L_115370ff;
L_11537097:;
  /* 11537097 push 0x11553bec */
  push32((uint32_t)(0x11553becu));
  /* 1153709c call dword ptr [0x115562e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562e8))), 0x115370a2u);
  /* 115370a2 cmp dword ptr [0x11553bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115370a9 je 0x115370c9 */
  if (C.zf) goto L_115370c9;
  /* 115370ab push 0x11553bec */
  push32((uint32_t)(0x11553becu));
  /* 115370b0 call dword ptr [0x115563c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c8))), 0x115370b6u);
  /* 115370b6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115370b8 call 0x1152b2d0 */
  push32(0x115370bdu); f_1152b2d0();
  /* 115370bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115370c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115370c7 jmp 0x115370d0 */
  goto L_115370d0;
L_115370c9:;
  /* 115370c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115370d0:;
  /* 115370d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115370d3 push ecx */
  push32((uint32_t)(ECX));
  /* 115370d4 call 0x11537110 */
  push32(0x115370d9u); f_11537110();
  /* 115370d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115370dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115370df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115370e3 je 0x115370f1 */
  if (C.zf) goto L_115370f1;
  /* 115370e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115370e7 call 0x1152b370 */
  push32(0x115370ecu); f_1152b370();
  /* 115370ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115370ef jmp 0x115370fc */
  goto L_115370fc;
L_115370f1:;
  /* 115370f1 push 0x11553bec */
  push32((uint32_t)(0x11553becu));
  /* 115370f6 call dword ptr [0x115563c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c8))), 0x115370fcu);
L_115370fc:;
  /* 115370fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_115370ff:;
  /* 115370ff mov esp, ebp */
  ESP = (EBP);
  /* 11537101 pop ebp */
  EBP = (pop32());
  /* 11537102 ret  */
  ESPCHK(0x11537070u, _esp0);
  ESP += 4; return;
}

/* FUN_10017110 @ 0x11537110 (299 bytes, 91 insns) */
void f_11537110(void) {
  FTRACE(0x11537110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537110 push ebp */
  push32((uint32_t)(EBP));
  /* 11537111 mov ebp, esp */
  EBP = (ESP);
  /* 11537113 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11537116 cmp dword ptr [0x11553a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153711d jne 0x1153713c */
  if (!C.zf) goto L_1153713c;
  /* 1153711f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537123 jl 0x11537134 */
  if ((C.sf!=C.of)) goto L_11537134;
  /* 11537125 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537129 jg 0x11537134 */
  if ((!C.zf&&C.sf==C.of)) goto L_11537134;
  /* 1153712b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153712e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537131 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11537134:;
  /* 11537134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537137 jmp 0x11537237 */
  goto L_11537237;
L_1153713c:;
  /* 1153713c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537143 jge 0x11537183 */
  if ((C.sf==C.of)) goto L_11537183;
  /* 11537145 cmp dword ptr [0x11551ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11551ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153714c jle 0x11537161 */
  if ((C.zf||C.sf!=C.of)) goto L_11537161;
  /* 1153714e push 1 */
  push32((uint32_t)(0x1u));
  /* 11537150 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537153 push ecx */
  push32((uint32_t)(ECX));
  /* 11537154 call 0x1152d8e0 */
  push32(0x11537159u); f_1152d8e0();
  /* 11537159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153715c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1153715f jmp 0x11537175 */
  goto L_11537175;
L_11537161:;
  /* 11537161 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537164 mov eax, dword ptr [0x11551c98] */
  EAX = (r32((uint32_t)(0x11551c98)));
  /* 11537169 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1153716b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1153716f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11537172 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11537175:;
  /* 11537175 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537179 jne 0x11537183 */
  if (!C.zf) goto L_11537183;
  /* 1153717b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153717e jmp 0x11537237 */
  goto L_11537237;
L_11537183:;
  /* 11537183 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537186 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11537189 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1153718f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11537195 mov eax, dword ptr [0x11551c98] */
  EAX = (r32((uint32_t)(0x11551c98)));
  /* 1153719a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1153719c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 115371a0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 115371a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115371a8 je 0x115371cc */
  if (C.zf) goto L_115371cc;
  /* 115371aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115371ad sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 115371b0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115371b6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 115371b9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 115371bc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 115371bf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 115371c3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 115371ca jmp 0x115371dd */
  goto L_115371dd;
L_115371cc:;
  /* 115371cc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 115371cf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 115371d2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 115371d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_115371dd:;
  /* 115371dd push 1 */
  push32((uint32_t)(0x1u));
  /* 115371df push 0 */
  push32((uint32_t)(0x0u));
  /* 115371e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 115371e3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 115371e6 push edx */
  push32((uint32_t)(EDX));
  /* 115371e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115371ea push eax */
  push32((uint32_t)(EAX));
  /* 115371eb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 115371ee push ecx */
  push32((uint32_t)(ECX));
  /* 115371ef push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115371f4 mov edx, dword ptr [0x11553a60] */
  EDX = (r32((uint32_t)(0x11553a60)));
  /* 115371fa push edx */
  push32((uint32_t)(EDX));
  /* 115371fb call 0x1152fcc0 */
  push32(0x11537200u); f_1152fcc0();
  /* 11537200 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537203 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11537206 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153720a jne 0x11537211 */
  if (!C.zf) goto L_11537211;
  /* 1153720c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153720f jmp 0x11537237 */
  goto L_11537237;
L_11537211:;
  /* 11537211 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537215 jne 0x11537221 */
  if (!C.zf) goto L_11537221;
  /* 11537217 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153721a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1153721f jmp 0x11537237 */
  goto L_11537237;
L_11537221:;
  /* 11537221 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537224 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11537229 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1153722c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11537232 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11537235 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11537237:;
  /* 11537237 mov esp, ebp */
  ESP = (EBP);
  /* 11537239 pop ebp */
  EBP = (pop32());
  /* 1153723a ret  */
  ESPCHK(0x11537110u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11537240 (52 bytes, 19 insns) */
void f_11537240(void) {
  FTRACE(0x11537240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537240 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11537244 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11537248 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153724a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1153724e jne 0x11537259 */
  if (!C.zf) goto L_11537259;
  /* 11537250 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11537254 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11537256 ret 0x10 */
  ESPCHK(0x11537240u, _esp0);
  ESP += 20; return;
L_11537259:;
  /* 11537259 push ebx */
  push32((uint32_t)(EBX));
  /* 1153725a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1153725c mov ebx, eax */
  EBX = (EAX);
  /* 1153725e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11537262 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11537266 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537268 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1153726c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1153726e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537270 pop ebx */
  EBX = (pop32());
  /* 11537271 ret 0x10 */
  ESPCHK(0x11537240u, _esp0);
  ESP += 20; return;
}

/* FUN_10017280 @ 0x11537280 (46 bytes, 18 insns) */
void f_11537280(void) {
  FTRACE(0x11537280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537280 push ebp */
  push32((uint32_t)(EBP));
  /* 11537281 mov ebp, esp */
  EBP = (ESP);
  /* 11537283 push ecx */
  push32((uint32_t)(ECX));
  /* 11537284 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11537286 call 0x1152b2d0 */
  push32(0x1153728bu); f_1152b2d0();
  /* 1153728b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153728e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537291 push eax */
  push32((uint32_t)(EAX));
  /* 11537292 call 0x115372b0 */
  push32(0x11537297u); f_115372b0();
  /* 11537297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153729a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1153729d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1153729f call 0x1152b370 */
  push32(0x115372a4u); f_1152b370();
  /* 115372a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115372a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115372aa mov esp, ebp */
  ESP = (EBP);
  /* 115372ac pop ebp */
  EBP = (pop32());
  /* 115372ad ret  */
  ESPCHK(0x11537280u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x115372b0 (198 bytes, 69 insns) */
void f_115372b0(void) {
  FTRACE(0x115372b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115372b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115372b1 mov ebp, esp */
  EBP = (ESP);
  /* 115372b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115372b6 mov eax, dword ptr [0x11553880] */
  EAX = (r32((uint32_t)(0x11553880)));
  /* 115372bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115372be cmp dword ptr [0x11555380], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11555380))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115372c5 jne 0x115372ce */
  if (!C.zf) goto L_115372ce;
  /* 115372c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115372c9 jmp 0x11537372 */
  goto L_11537372;
L_115372ce:;
  /* 115372ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115372d2 jne 0x115372f6 */
  if (!C.zf) goto L_115372f6;
  /* 115372d4 cmp dword ptr [0x11553888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115372db je 0x115372f6 */
  if (C.zf) goto L_115372f6;
  /* 115372dd call 0x115373d0 */
  push32(0x115372e2u); f_115373d0();
  /* 115372e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115372e4 je 0x115372ed */
  if (C.zf) goto L_115372ed;
  /* 115372e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115372e8 jmp 0x11537372 */
  goto L_11537372;
L_115372ed:;
  /* 115372ed mov ecx, dword ptr [0x11553880] */
  ECX = (r32((uint32_t)(0x11553880)));
  /* 115372f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115372f6:;
  /* 115372f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115372fa je 0x11537370 */
  if (C.zf) goto L_11537370;
  /* 115372fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537300 je 0x11537370 */
  if (C.zf) goto L_11537370;
  /* 11537302 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537305 push edx */
  push32((uint32_t)(EDX));
  /* 11537306 call 0x1152a700 */
  push32(0x1153730bu); f_1152a700();
  /* 1153730b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153730e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11537311:;
  /* 11537311 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537314 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537317 je 0x11537370 */
  if (C.zf) goto L_11537370;
  /* 11537319 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1153731c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1153731e push edx */
  push32((uint32_t)(EDX));
  /* 1153731f call 0x1152a700 */
  push32(0x11537324u); f_1152a700();
  /* 11537324 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537327 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153732a jbe 0x11537365 */
  if ((C.cf||C.zf)) goto L_11537365;
  /* 1153732c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1153732f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11537331 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537334 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11537338 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153733b jne 0x11537365 */
  if (!C.zf) goto L_11537365;
  /* 1153733d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537340 push ecx */
  push32((uint32_t)(ECX));
  /* 11537341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537344 push edx */
  push32((uint32_t)(EDX));
  /* 11537345 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537348 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1153734a push ecx */
  push32((uint32_t)(ECX));
  /* 1153734b call 0x11537380 */
  push32(0x11537350u); f_11537380();
  /* 11537350 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537353 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11537355 jne 0x11537365 */
  if (!C.zf) goto L_11537365;
  /* 11537357 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1153735a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1153735c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153735f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11537363 jmp 0x11537372 */
  goto L_11537372;
L_11537365:;
  /* 11537365 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537368 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153736b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1153736e jmp 0x11537311 */
  goto L_11537311;
L_11537370:;
  /* 11537370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11537372:;
  /* 11537372 mov esp, ebp */
  ESP = (EBP);
  /* 11537374 pop ebp */
  EBP = (pop32());
  /* 11537375 ret  */
  ESPCHK(0x115372b0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11537380 (79 bytes, 32 insns) */
void f_11537380(void) {
  FTRACE(0x11537380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537380 push ebp */
  push32((uint32_t)(EBP));
  /* 11537381 mov ebp, esp */
  EBP = (ESP);
  /* 11537383 push ecx */
  push32((uint32_t)(ECX));
  /* 11537384 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537388 jne 0x1153738e */
  if (!C.zf) goto L_1153738e;
  /* 1153738a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153738c jmp 0x115373cb */
  goto L_115373cb;
L_1153738e:;
  /* 1153738e mov eax, dword ptr [0x11554f44] */
  EAX = (r32((uint32_t)(0x11554f44)));
  /* 11537393 push eax */
  push32((uint32_t)(EAX));
  /* 11537394 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11537397 push ecx */
  push32((uint32_t)(ECX));
  /* 11537398 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153739b push edx */
  push32((uint32_t)(EDX));
  /* 1153739c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153739f push eax */
  push32((uint32_t)(EAX));
  /* 115373a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115373a3 push ecx */
  push32((uint32_t)(ECX));
  /* 115373a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115373a6 mov edx, dword ptr [0x115551e4] */
  EDX = (r32((uint32_t)(0x115551e4)));
  /* 115373ac push edx */
  push32((uint32_t)(EDX));
  /* 115373ad call 0x11537480 */
  push32(0x115373b2u); f_11537480();
  /* 115373b2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115373b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115373b8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115373bc jne 0x115373c5 */
  if (!C.zf) goto L_115373c5;
  /* 115373be mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 115373c3 jmp 0x115373cb */
  goto L_115373cb;
L_115373c5:;
  /* 115373c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115373c8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_115373cb:;
  /* 115373cb mov esp, ebp */
  ESP = (EBP);
  /* 115373cd pop ebp */
  EBP = (pop32());
  /* 115373ce ret  */
  ESPCHK(0x11537380u, _esp0);
  ESP += 4; return;
}

/* FUN_100173d0 @ 0x115373d0 (174 bytes, 66 insns) */
void f_115373d0(void) {
  FTRACE(0x115373d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115373d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115373d1 mov ebp, esp */
  EBP = (ESP);
  /* 115373d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115373d6 mov eax, dword ptr [0x11553888] */
  EAX = (r32((uint32_t)(0x11553888)));
  /* 115373db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115373de:;
  /* 115373de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115373e1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115373e4 je 0x11537478 */
  if (C.zf) goto L_11537478;
  /* 115373ea push 0 */
  push32((uint32_t)(0x0u));
  /* 115373ec push 0 */
  push32((uint32_t)(0x0u));
  /* 115373ee push 0 */
  push32((uint32_t)(0x0u));
  /* 115373f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115373f2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115373f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115373f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115373f9 push eax */
  push32((uint32_t)(EAX));
  /* 115373fa push 0 */
  push32((uint32_t)(0x0u));
  /* 115373fc push 1 */
  push32((uint32_t)(0x1u));
  /* 115373fe call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x11537404u);
  /* 11537404 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11537407 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153740b jne 0x11537412 */
  if (!C.zf) goto L_11537412;
  /* 1153740d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11537410 jmp 0x1153747a */
  goto L_1153747a;
L_11537412:;
  /* 11537412 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11537414 push 0x1154fe0c */
  push32((uint32_t)(0x1154fe0cu));
  /* 11537419 push 2 */
  push32((uint32_t)(0x2u));
  /* 1153741b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153741e push ecx */
  push32((uint32_t)(ECX));
  /* 1153741f call 0x115278d0 */
  push32(0x11537424u); f_115278d0();
  /* 11537424 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537427 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1153742a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153742e jne 0x11537435 */
  if (!C.zf) goto L_11537435;
  /* 11537430 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11537433 jmp 0x1153747a */
  goto L_1153747a;
L_11537435:;
  /* 11537435 push 0 */
  push32((uint32_t)(0x0u));
  /* 11537437 push 0 */
  push32((uint32_t)(0x0u));
  /* 11537439 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153743c push edx */
  push32((uint32_t)(EDX));
  /* 1153743d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537440 push eax */
  push32((uint32_t)(EAX));
  /* 11537441 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11537443 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537446 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11537448 push edx */
  push32((uint32_t)(EDX));
  /* 11537449 push 0 */
  push32((uint32_t)(0x0u));
  /* 1153744b push 1 */
  push32((uint32_t)(0x1u));
  /* 1153744d call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x11537453u);
  /* 11537453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11537455 jne 0x1153745c */
  if (!C.zf) goto L_1153745c;
  /* 11537457 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1153745a jmp 0x1153747a */
  goto L_1153747a;
L_1153745c:;
  /* 1153745c push 0 */
  push32((uint32_t)(0x0u));
  /* 1153745e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537461 push eax */
  push32((uint32_t)(EAX));
  /* 11537462 call 0x115378d0 */
  push32(0x11537467u); f_115378d0();
  /* 11537467 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153746a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153746d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537470 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11537473 jmp 0x115373de */
  goto L_115373de;
L_11537478:;
  /* 11537478 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1153747a:;
  /* 1153747a mov esp, ebp */
  ESP = (EBP);
  /* 1153747c pop ebp */
  EBP = (pop32());
  /* 1153747d ret  */
  ESPCHK(0x115373d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017480 @ 0x11537480 (970 bytes, 340 insns) */
void f_11537480(void) {
  FTRACE(0x11537480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537480 push ebp */
  push32((uint32_t)(EBP));
  /* 11537481 mov ebp, esp */
  EBP = (ESP);
  /* 11537483 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11537485 push 0x1154fe60 */
  push32((uint32_t)(0x1154fe60u));
  /* 1153748a push 0x115309d8 */
  push32((uint32_t)(0x115309d8u));
  /* 1153748f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11537495 push eax */
  push32((uint32_t)(EAX));
  /* 11537496 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1153749d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115374a0 push ebx */
  push32((uint32_t)(EBX));
  /* 115374a1 push esi */
  push32((uint32_t)(ESI));
  /* 115374a2 push edi */
  push32((uint32_t)(EDI));
  /* 115374a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115374a6 cmp dword ptr [0x11553bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115374ad jne 0x11537506 */
  if (!C.zf) goto L_11537506;
  /* 115374af push 1 */
  push32((uint32_t)(0x1u));
  /* 115374b1 push 0x1154f4b8 */
  push32((uint32_t)(0x1154f4b8u));
  /* 115374b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115374b8 push 0x1154f4b8 */
  push32((uint32_t)(0x1154f4b8u));
  /* 115374bd push 0 */
  push32((uint32_t)(0x0u));
  /* 115374bf push 0 */
  push32((uint32_t)(0x0u));
  /* 115374c1 call dword ptr [0x115562f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562f0))), 0x115374c7u);
  /* 115374c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115374c9 je 0x115374d7 */
  if (C.zf) goto L_115374d7;
  /* 115374cb mov dword ptr [0x11553bc4], 1 */
  w32((uint32_t)(0x11553bc4), (0x1u));
  /* 115374d5 jmp 0x11537506 */
  goto L_11537506;
L_115374d7:;
  /* 115374d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115374d9 push 0x1154f4b4 */
  push32((uint32_t)(0x1154f4b4u));
  /* 115374de push 1 */
  push32((uint32_t)(0x1u));
  /* 115374e0 push 0x1154f4b4 */
  push32((uint32_t)(0x1154f4b4u));
  /* 115374e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115374e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115374e9 call dword ptr [0x115562f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562f4))), 0x115374efu);
  /* 115374ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115374f1 je 0x115374ff */
  if (C.zf) goto L_115374ff;
  /* 115374f3 mov dword ptr [0x11553bc4], 2 */
  w32((uint32_t)(0x11553bc4), (0x2u));
  /* 115374fd jmp 0x11537506 */
  goto L_11537506;
L_115374ff:;
  /* 115374ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11537501 jmp 0x11537864 */
  goto L_11537864;
L_11537506:;
  /* 11537506 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153750a jle 0x1153751f */
  if ((C.zf||C.sf!=C.of)) goto L_1153751f;
  /* 1153750c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153750f push eax */
  push32((uint32_t)(EAX));
  /* 11537510 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11537513 push ecx */
  push32((uint32_t)(ECX));
  /* 11537514 call 0x11537880 */
  push32(0x11537519u); f_11537880();
  /* 11537519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153751c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1153751f:;
  /* 1153751f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537523 jle 0x11537538 */
  if ((C.zf||C.sf!=C.of)) goto L_11537538;
  /* 11537525 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11537528 push edx */
  push32((uint32_t)(EDX));
  /* 11537529 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1153752c push eax */
  push32((uint32_t)(EAX));
  /* 1153752d call 0x11537880 */
  push32(0x11537532u); f_11537880();
  /* 11537532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537535 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11537538:;
  /* 11537538 cmp dword ptr [0x11553bc4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11553bc4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153753f jne 0x11537564 */
  if (!C.zf) goto L_11537564;
  /* 11537541 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11537544 push ecx */
  push32((uint32_t)(ECX));
  /* 11537545 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11537548 push edx */
  push32((uint32_t)(EDX));
  /* 11537549 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153754c push eax */
  push32((uint32_t)(EAX));
  /* 1153754d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11537550 push ecx */
  push32((uint32_t)(ECX));
  /* 11537551 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11537554 push edx */
  push32((uint32_t)(EDX));
  /* 11537555 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537558 push eax */
  push32((uint32_t)(EAX));
  /* 11537559 call dword ptr [0x115562f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562f4))), 0x1153755fu);
  /* 1153755f jmp 0x11537864 */
  goto L_11537864;
L_11537564:;
  /* 11537564 cmp dword ptr [0x11553bc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553bc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153756b jne 0x11537862 */
  if (!C.zf) goto L_11537862;
  /* 11537571 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537575 jne 0x11537580 */
  if (!C.zf) goto L_11537580;
  /* 11537577 mov ecx, dword ptr [0x11553a70] */
  ECX = (r32((uint32_t)(0x11553a70)));
  /* 1153757d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11537580:;
  /* 11537580 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537584 je 0x11537590 */
  if (C.zf) goto L_11537590;
  /* 11537586 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153758a jne 0x1153770c */
  if (!C.zf) goto L_1153770c;
L_11537590:;
  /* 11537590 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11537593 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537596 jne 0x115375a2 */
  if (!C.zf) goto L_115375a2;
  /* 11537598 mov eax, 2 */
  EAX = (0x2u);
  /* 1153759d jmp 0x11537864 */
  goto L_11537864;
L_115375a2:;
  /* 115375a2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115375a6 jle 0x115375b2 */
  if ((C.zf||C.sf!=C.of)) goto L_115375b2;
  /* 115375a8 mov eax, 1 */
  EAX = (0x1u);
  /* 115375ad jmp 0x11537864 */
  goto L_11537864;
L_115375b2:;
  /* 115375b2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115375b6 jle 0x115375c2 */
  if ((C.zf||C.sf!=C.of)) goto L_115375c2;
  /* 115375b8 mov eax, 3 */
  EAX = (0x3u);
  /* 115375bd jmp 0x11537864 */
  goto L_11537864;
L_115375c2:;
  /* 115375c2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 115375c5 push eax */
  push32((uint32_t)(EAX));
  /* 115375c6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 115375c9 push ecx */
  push32((uint32_t)(ECX));
  /* 115375ca call dword ptr [0x1155634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155634c))), 0x115375d0u);
  /* 115375d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115375d2 jne 0x115375db */
  if (!C.zf) goto L_115375db;
  /* 115375d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115375d6 jmp 0x11537864 */
  goto L_11537864;
L_115375db:;
  /* 115375db cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115375df jne 0x115375e7 */
  if (!C.zf) goto L_115375e7;
  /* 115375e1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115375e5 je 0x11537614 */
  if (C.zf) goto L_11537614;
L_115375e7:;
  /* 115375e7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115375eb jne 0x115375f3 */
  if (!C.zf) goto L_115375f3;
  /* 115375ed cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115375f1 je 0x11537614 */
  if (C.zf) goto L_11537614;
L_115375f3:;
  /* 115375f3 push 0x1154fe20 */
  push32((uint32_t)(0x1154fe20u));
  /* 115375f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115375fa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 115375ff push 0x1154fe18 */
  push32((uint32_t)(0x1154fe18u));
  /* 11537604 push 2 */
  push32((uint32_t)(0x2u));
  /* 11537606 call 0x11526990 */
  push32(0x1153760bu); f_11526990();
  /* 1153760b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153760e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537611 jne 0x11537614 */
  if (!C.zf) goto L_11537614;
  /* 11537613 int3  */
  x86_unimpl("int3 @ 0x11537613");
L_11537614:;
  /* 11537614 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11537616 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11537618 jne 0x115375db */
  if (!C.zf) goto L_115375db;
  /* 1153761a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153761e jle 0x11537693 */
  if ((C.zf||C.sf!=C.of)) goto L_11537693;
  /* 11537620 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537624 jae 0x11537630 */
  if (!C.cf) goto L_11537630;
  /* 11537626 mov eax, 3 */
  EAX = (0x3u);
  /* 1153762b jmp 0x11537864 */
  goto L_11537864;
L_11537630:;
  /* 11537630 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11537633 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11537636 jmp 0x11537641 */
  goto L_11537641;
L_11537638:;
  /* 11537638 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1153763b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153763e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11537641:;
  /* 11537641 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11537644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11537646 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11537648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153764a je 0x11537689 */
  if (C.zf) goto L_11537689;
  /* 1153764c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1153764f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11537651 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11537654 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11537656 je 0x11537689 */
  if (C.zf) goto L_11537689;
  /* 11537658 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153765b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1153765d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1153765f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11537662 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11537664 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11537666 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537668 jl 0x11537687 */
  if ((C.sf!=C.of)) goto L_11537687;
  /* 1153766a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153766d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1153766f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11537671 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11537674 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11537676 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11537679 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153767b jg 0x11537687 */
  if ((!C.zf&&C.sf==C.of)) goto L_11537687;
  /* 1153767d mov eax, 2 */
  EAX = (0x2u);
  /* 11537682 jmp 0x11537864 */
  goto L_11537864;
L_11537687:;
  /* 11537687 jmp 0x11537638 */
  goto L_11537638;
L_11537689:;
  /* 11537689 mov eax, 3 */
  EAX = (0x3u);
  /* 1153768e jmp 0x11537864 */
  goto L_11537864;
L_11537693:;
  /* 11537693 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537697 jle 0x1153770c */
  if ((C.zf||C.sf!=C.of)) goto L_1153770c;
  /* 11537699 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153769d jae 0x115376a9 */
  if (!C.cf) goto L_115376a9;
  /* 1153769f mov eax, 1 */
  EAX = (0x1u);
  /* 115376a4 jmp 0x11537864 */
  goto L_11537864;
L_115376a9:;
  /* 115376a9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 115376ac mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 115376af jmp 0x115376ba */
  goto L_115376ba;
L_115376b1:;
  /* 115376b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 115376b4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115376b7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_115376ba:;
  /* 115376ba mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 115376bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115376bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115376c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115376c3 je 0x11537702 */
  if (C.zf) goto L_11537702;
  /* 115376c5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 115376c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115376ca mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 115376cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115376cf je 0x11537702 */
  if (C.zf) goto L_11537702;
  /* 115376d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115376d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115376d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115376d8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 115376db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115376dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115376df cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115376e1 jl 0x11537700 */
  if ((C.sf!=C.of)) goto L_11537700;
  /* 115376e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115376e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115376e8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115376ea mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 115376ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115376ef mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 115376f2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115376f4 jg 0x11537700 */
  if ((!C.zf&&C.sf==C.of)) goto L_11537700;
  /* 115376f6 mov eax, 2 */
  EAX = (0x2u);
  /* 115376fb jmp 0x11537864 */
  goto L_11537864;
L_11537700:;
  /* 11537700 jmp 0x115376b1 */
  goto L_115376b1;
L_11537702:;
  /* 11537702 mov eax, 1 */
  EAX = (0x1u);
  /* 11537707 jmp 0x11537864 */
  goto L_11537864;
L_1153770c:;
  /* 1153770c push 0 */
  push32((uint32_t)(0x0u));
  /* 1153770e push 0 */
  push32((uint32_t)(0x0u));
  /* 11537710 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11537713 push ecx */
  push32((uint32_t)(ECX));
  /* 11537714 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11537717 push edx */
  push32((uint32_t)(EDX));
  /* 11537718 push 9 */
  push32((uint32_t)(0x9u));
  /* 1153771a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1153771d push eax */
  push32((uint32_t)(EAX));
  /* 1153771e call dword ptr [0x11556340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556340))), 0x11537724u);
  /* 11537724 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11537727 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153772b jne 0x11537734 */
  if (!C.zf) goto L_11537734;
  /* 1153772d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153772f jmp 0x11537864 */
  goto L_11537864;
L_11537734:;
  /* 11537734 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1153773b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1153773e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11537740 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537743 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11537745 call 0x1152aa70 */
  push32(0x1153774au); f_1152aa70();
  /* 1153774a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1153774d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11537750 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11537753 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11537756 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1153775d jmp 0x11537776 */
  goto L_11537776;
  /* 1153775f mov eax, 1 */
  EAX = (0x1u);
  /* 11537764 ret  */
  ESPCHK(0x11537480u, _esp0);
  ESP += 4; return;
  /* 11537765 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11537768 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1153776f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11537776:;
  /* 11537776 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153777a jne 0x11537783 */
  if (!C.zf) goto L_11537783;
  /* 1153777c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153777e jmp 0x11537864 */
  goto L_11537864;
L_11537783:;
  /* 11537783 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11537786 push edx */
  push32((uint32_t)(EDX));
  /* 11537787 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1153778a push eax */
  push32((uint32_t)(EAX));
  /* 1153778b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153778e push ecx */
  push32((uint32_t)(ECX));
  /* 1153778f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11537792 push edx */
  push32((uint32_t)(EDX));
  /* 11537793 push 1 */
  push32((uint32_t)(0x1u));
  /* 11537795 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11537798 push eax */
  push32((uint32_t)(EAX));
  /* 11537799 call dword ptr [0x11556340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556340))), 0x1153779fu);
  /* 1153779f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115377a1 jne 0x115377aa */
  if (!C.zf) goto L_115377aa;
  /* 115377a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115377a5 jmp 0x11537864 */
  goto L_11537864;
L_115377aa:;
  /* 115377aa push 0 */
  push32((uint32_t)(0x0u));
  /* 115377ac push 0 */
  push32((uint32_t)(0x0u));
  /* 115377ae mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115377b1 push ecx */
  push32((uint32_t)(ECX));
  /* 115377b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115377b5 push edx */
  push32((uint32_t)(EDX));
  /* 115377b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 115377b8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 115377bb push eax */
  push32((uint32_t)(EAX));
  /* 115377bc call dword ptr [0x11556340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556340))), 0x115377c2u);
  /* 115377c2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115377c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115377c9 jne 0x115377d2 */
  if (!C.zf) goto L_115377d2;
  /* 115377cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115377cd jmp 0x11537864 */
  goto L_11537864;
L_115377d2:;
  /* 115377d2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115377d9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115377dc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115377de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115377e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115377e3 call 0x1152aa70 */
  push32(0x115377e8u); f_1152aa70();
  /* 115377e8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 115377eb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115377ee mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 115377f1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 115377f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115377fb jmp 0x11537814 */
  goto L_11537814;
  /* 115377fd mov eax, 1 */
  EAX = (0x1u);
  /* 11537802 ret  */
  ESPCHK(0x11537480u, _esp0);
  ESP += 4; return;
  /* 11537803 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11537806 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1153780d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11537814:;
  /* 11537814 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537818 jne 0x1153781e */
  if (!C.zf) goto L_1153781e;
  /* 1153781a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153781c jmp 0x11537864 */
  goto L_11537864;
L_1153781e:;
  /* 1153781e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11537821 push edx */
  push32((uint32_t)(EDX));
  /* 11537822 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11537825 push eax */
  push32((uint32_t)(EAX));
  /* 11537826 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11537829 push ecx */
  push32((uint32_t)(ECX));
  /* 1153782a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1153782d push edx */
  push32((uint32_t)(EDX));
  /* 1153782e push 1 */
  push32((uint32_t)(0x1u));
  /* 11537830 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11537833 push eax */
  push32((uint32_t)(EAX));
  /* 11537834 call dword ptr [0x11556340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556340))), 0x1153783au);
  /* 1153783a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153783c jne 0x11537842 */
  if (!C.zf) goto L_11537842;
  /* 1153783e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11537840 jmp 0x11537864 */
  goto L_11537864;
L_11537842:;
  /* 11537842 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11537845 push ecx */
  push32((uint32_t)(ECX));
  /* 11537846 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11537849 push edx */
  push32((uint32_t)(EDX));
  /* 1153784a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1153784d push eax */
  push32((uint32_t)(EAX));
  /* 1153784e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11537851 push ecx */
  push32((uint32_t)(ECX));
  /* 11537852 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11537855 push edx */
  push32((uint32_t)(EDX));
  /* 11537856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537859 push eax */
  push32((uint32_t)(EAX));
  /* 1153785a call dword ptr [0x115562f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562f0))), 0x11537860u);
  /* 11537860 jmp 0x11537864 */
  goto L_11537864;
L_11537862:;
  /* 11537862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11537864:;
  /* 11537864 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11537867 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1153786a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11537871 pop edi */
  EDI = (pop32());
  /* 11537872 pop esi */
  ESI = (pop32());
  /* 11537873 pop ebx */
  EBX = (pop32());
  /* 11537874 mov esp, ebp */
  ESP = (EBP);
  /* 11537876 pop ebp */
  EBP = (pop32());
  /* 11537877 ret  */
  ESPCHK(0x11537480u, _esp0);
  ESP += 4; return;
}

/* FUN_10017880 @ 0x11537880 (80 bytes, 32 insns) */
void f_11537880(void) {
  FTRACE(0x11537880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537880 push ebp */
  push32((uint32_t)(EBP));
  /* 11537881 mov ebp, esp */
  EBP = (ESP);
  /* 11537883 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11537886 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11537889 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1153788c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153788f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11537892:;
  /* 11537892 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537895 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537898 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153789b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1153789e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115378a0 je 0x115378b7 */
  if (C.zf) goto L_115378b7;
  /* 115378a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115378a5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115378a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115378aa je 0x115378b7 */
  if (C.zf) goto L_115378b7;
  /* 115378ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115378af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115378b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115378b5 jmp 0x11537892 */
  goto L_11537892;
L_115378b7:;
  /* 115378b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115378ba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115378bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115378bf jne 0x115378c9 */
  if (!C.zf) goto L_115378c9;
  /* 115378c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115378c4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115378c7 jmp 0x115378cc */
  goto L_115378cc;
L_115378c9:;
  /* 115378c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_115378cc:;
  /* 115378cc mov esp, ebp */
  ESP = (EBP);
  /* 115378ce pop ebp */
  EBP = (pop32());
  /* 115378cf ret  */
  ESPCHK(0x11537880u, _esp0);
  ESP += 4; return;
}

/* FUN_100178d0 @ 0x115378d0 (736 bytes, 224 insns) */
void f_115378d0(void) {
  FTRACE(0x115378d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115378d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115378d1 mov ebp, esp */
  EBP = (ESP);
  /* 115378d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115378d6 push esi */
  push32((uint32_t)(ESI));
  /* 115378d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115378db je 0x115378fc */
  if (C.zf) goto L_115378fc;
  /* 115378dd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 115378df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115378e2 push eax */
  push32((uint32_t)(EAX));
  /* 115378e3 call 0x11537d20 */
  push32(0x115378e8u); f_11537d20();
  /* 115378e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115378eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115378ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115378f2 je 0x115378fc */
  if (C.zf) goto L_115378fc;
  /* 115378f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115378f7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115378fa jne 0x11537904 */
  if (!C.zf) goto L_11537904;
L_115378fc:;
  /* 115378fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115378ff jmp 0x11537bab */
  goto L_11537bab;
L_11537904:;
  /* 11537904 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11537907 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1153790b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1153790d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153790f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11537910 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11537913 mov ecx, dword ptr [0x11553880] */
  ECX = (r32((uint32_t)(0x11553880)));
  /* 11537919 cmp ecx, dword ptr [0x11553884] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11553884))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153791f jne 0x11537935 */
  if (!C.zf) goto L_11537935;
  /* 11537921 mov edx, dword ptr [0x11553880] */
  EDX = (r32((uint32_t)(0x11553880)));
  /* 11537927 push edx */
  push32((uint32_t)(EDX));
  /* 11537928 call 0x11537c30 */
  push32(0x1153792du); f_11537c30();
  /* 1153792d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537930 mov dword ptr [0x11553880], eax */
  w32((uint32_t)(0x11553880), (EAX));
L_11537935:;
  /* 11537935 cmp dword ptr [0x11553880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153793c jne 0x115379f5 */
  if (!C.zf) goto L_115379f5;
  /* 11537942 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537946 je 0x11537967 */
  if (C.zf) goto L_11537967;
  /* 11537948 cmp dword ptr [0x11553888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153794f je 0x11537967 */
  if (C.zf) goto L_11537967;
  /* 11537951 call 0x115373d0 */
  push32(0x11537956u); f_115373d0();
  /* 11537956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11537958 je 0x11537962 */
  if (C.zf) goto L_11537962;
  /* 1153795a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1153795d jmp 0x11537bab */
  goto L_11537bab;
L_11537962:;
  /* 11537962 jmp 0x115379f5 */
  goto L_115379f5;
L_11537967:;
  /* 11537967 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153796b je 0x11537974 */
  if (C.zf) goto L_11537974;
  /* 1153796d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153796f jmp 0x11537bab */
  goto L_11537bab;
L_11537974:;
  /* 11537974 cmp dword ptr [0x11553880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153797b jne 0x115379b4 */
  if (!C.zf) goto L_115379b4;
  /* 1153797d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11537982 push 0x1154fe78 */
  push32((uint32_t)(0x1154fe78u));
  /* 11537987 push 2 */
  push32((uint32_t)(0x2u));
  /* 11537989 push 4 */
  push32((uint32_t)(0x4u));
  /* 1153798b call 0x115278d0 */
  push32(0x11537990u); f_115278d0();
  /* 11537990 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537993 mov dword ptr [0x11553880], eax */
  w32((uint32_t)(0x11553880), (EAX));
  /* 11537998 cmp dword ptr [0x11553880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153799f jne 0x115379a9 */
  if (!C.zf) goto L_115379a9;
  /* 115379a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115379a4 jmp 0x11537bab */
  goto L_11537bab;
L_115379a9:;
  /* 115379a9 mov eax, dword ptr [0x11553880] */
  EAX = (r32((uint32_t)(0x11553880)));
  /* 115379ae mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_115379b4:;
  /* 115379b4 cmp dword ptr [0x11553888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115379bb jne 0x115379f5 */
  if (!C.zf) goto L_115379f5;
  /* 115379bd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 115379c2 push 0x1154fe78 */
  push32((uint32_t)(0x1154fe78u));
  /* 115379c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 115379c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 115379cb call 0x115278d0 */
  push32(0x115379d0u); f_115278d0();
  /* 115379d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115379d3 mov dword ptr [0x11553888], eax */
  w32((uint32_t)(0x11553888), (EAX));
  /* 115379d8 cmp dword ptr [0x11553888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115379df jne 0x115379e9 */
  if (!C.zf) goto L_115379e9;
  /* 115379e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115379e4 jmp 0x11537bab */
  goto L_11537bab;
L_115379e9:;
  /* 115379e9 mov ecx, dword ptr [0x11553888] */
  ECX = (r32((uint32_t)(0x11553888)));
  /* 115379ef mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_115379f5:;
  /* 115379f5 mov edx, dword ptr [0x11553880] */
  EDX = (r32((uint32_t)(0x11553880)));
  /* 115379fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115379fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11537a01 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11537a04 push eax */
  push32((uint32_t)(EAX));
  /* 11537a05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537a08 push ecx */
  push32((uint32_t)(ECX));
  /* 11537a09 call 0x11537bb0 */
  push32(0x11537a0eu); f_11537bb0();
  /* 11537a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537a11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11537a14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537a18 jl 0x11537ab1 */
  if ((C.sf!=C.of)) goto L_11537ab1;
  /* 11537a1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537a21 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537a24 je 0x11537ab1 */
  if (C.zf) goto L_11537ab1;
  /* 11537a2a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537a2e je 0x11537aa3 */
  if (C.zf) goto L_11537aa3;
  /* 11537a30 push 2 */
  push32((uint32_t)(0x2u));
  /* 11537a32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537a35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537a38 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11537a3b push edx */
  push32((uint32_t)(EDX));
  /* 11537a3c call 0x11528360 */
  push32(0x11537a41u); f_11528360();
  /* 11537a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537a44 jmp 0x11537a4f */
  goto L_11537a4f;
L_11537a46:;
  /* 11537a46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537a49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537a4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11537a4f:;
  /* 11537a4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537a52 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537a55 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537a59 je 0x11537a70 */
  if (C.zf) goto L_11537a70;
  /* 11537a5b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537a5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537a61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537a64 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11537a67 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11537a6b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11537a6e jmp 0x11537a46 */
  goto L_11537a46;
L_11537a70:;
  /* 11537a70 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11537a75 push 0x1154fe78 */
  push32((uint32_t)(0x1154fe78u));
  /* 11537a7a push 2 */
  push32((uint32_t)(0x2u));
  /* 11537a7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537a7f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11537a82 push eax */
  push32((uint32_t)(EAX));
  /* 11537a83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537a86 push ecx */
  push32((uint32_t)(ECX));
  /* 11537a87 call 0x11527d60 */
  push32(0x11537a8cu); f_11527d60();
  /* 11537a8c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537a8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11537a92 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537a96 je 0x11537aa1 */
  if (C.zf) goto L_11537aa1;
  /* 11537a98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537a9b mov dword ptr [0x11553880], edx */
  w32((uint32_t)(0x11553880), (EDX));
L_11537aa1:;
  /* 11537aa1 jmp 0x11537aaf */
  goto L_11537aaf;
L_11537aa3:;
  /* 11537aa3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537aa6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537aa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537aac mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11537aaf:;
  /* 11537aaf jmp 0x11537b24 */
  goto L_11537b24;
L_11537ab1:;
  /* 11537ab1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537ab5 jne 0x11537b1d */
  if (!C.zf) goto L_11537b1d;
  /* 11537ab7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537abb jge 0x11537ac5 */
  if ((C.sf==C.of)) goto L_11537ac5;
  /* 11537abd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537ac0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11537ac2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11537ac5:;
  /* 11537ac5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11537aca push 0x1154fe78 */
  push32((uint32_t)(0x1154fe78u));
  /* 11537acf push 2 */
  push32((uint32_t)(0x2u));
  /* 11537ad1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537ad4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11537adb push edx */
  push32((uint32_t)(EDX));
  /* 11537adc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537adf push eax */
  push32((uint32_t)(EAX));
  /* 11537ae0 call 0x11527d60 */
  push32(0x11537ae5u); f_11527d60();
  /* 11537ae5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537ae8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11537aeb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537aef jne 0x11537af9 */
  if (!C.zf) goto L_11537af9;
  /* 11537af1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11537af4 jmp 0x11537bab */
  goto L_11537bab;
L_11537af9:;
  /* 11537af9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537afc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537aff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537b02 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11537b05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537b08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537b0b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11537b13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537b16 mov dword ptr [0x11553880], eax */
  w32((uint32_t)(0x11553880), (EAX));
  /* 11537b1b jmp 0x11537b24 */
  goto L_11537b24;
L_11537b1d:;
  /* 11537b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11537b1f jmp 0x11537bab */
  goto L_11537bab;
L_11537b24:;
  /* 11537b24 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537b28 je 0x11537ba9 */
  if (C.zf) goto L_11537ba9;
  /* 11537b2a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11537b2f push 0x1154fe78 */
  push32((uint32_t)(0x1154fe78u));
  /* 11537b34 push 2 */
  push32((uint32_t)(0x2u));
  /* 11537b36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537b39 push ecx */
  push32((uint32_t)(ECX));
  /* 11537b3a call 0x1152a700 */
  push32(0x11537b3fu); f_1152a700();
  /* 11537b3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537b42 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537b45 push eax */
  push32((uint32_t)(EAX));
  /* 11537b46 call 0x115278d0 */
  push32(0x11537b4bu); f_115278d0();
  /* 11537b4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537b4e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11537b51 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537b55 je 0x11537ba9 */
  if (C.zf) goto L_11537ba9;
  /* 11537b57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537b5a push edx */
  push32((uint32_t)(EDX));
  /* 11537b5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11537b5e push eax */
  push32((uint32_t)(EAX));
  /* 11537b5f call 0x1152a880 */
  push32(0x11537b64u); f_1152a880();
  /* 11537b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537b67 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11537b6a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11537b6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11537b70 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537b72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11537b75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537b78 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11537b7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537b7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537b81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11537b84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11537b87 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11537b89 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11537b8b not edx */
  EDX = (~(EDX));
  /* 11537b8d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11537b90 push edx */
  push32((uint32_t)(EDX));
  /* 11537b91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11537b94 push eax */
  push32((uint32_t)(EAX));
  /* 11537b95 call dword ptr [0x115562ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562ec))), 0x11537b9bu);
  /* 11537b9b push 2 */
  push32((uint32_t)(0x2u));
  /* 11537b9d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11537ba0 push ecx */
  push32((uint32_t)(ECX));
  /* 11537ba1 call 0x11528360 */
  push32(0x11537ba6u); f_11528360();
  /* 11537ba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11537ba9:;
  /* 11537ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11537bab:;
  /* 11537bab pop esi */
  ESI = (pop32());
  /* 11537bac mov esp, ebp */
  ESP = (EBP);
  /* 11537bae pop ebp */
  EBP = (pop32());
  /* 11537baf ret  */
  ESPCHK(0x115378d0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11537bb0 (124 bytes, 47 insns) */
void f_11537bb0(void) {
  FTRACE(0x11537bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11537bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11537bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11537bb4 mov eax, dword ptr [0x11553880] */
  EAX = (r32((uint32_t)(0x11553880)));
  /* 11537bb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11537bbc jmp 0x11537bc7 */
  goto L_11537bc7;
L_11537bbe:;
  /* 11537bbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537bc1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537bc4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11537bc7:;
  /* 11537bc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537bca cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537bcd je 0x11537c1a */
  if (C.zf) goto L_11537c1a;
  /* 11537bcf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11537bd2 push eax */
  push32((uint32_t)(EAX));
  /* 11537bd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537bd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11537bd8 push edx */
  push32((uint32_t)(EDX));
  /* 11537bd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537bdc push eax */
  push32((uint32_t)(EAX));
  /* 11537bdd call 0x11537380 */
  push32(0x11537be2u); f_11537380();
  /* 11537be2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537be5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11537be7 jne 0x11537c18 */
  if (!C.zf) goto L_11537c18;
  /* 11537be9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537bec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11537bee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11537bf1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11537bf5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537bf8 je 0x11537c0a */
  if (C.zf) goto L_11537c0a;
  /* 11537bfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537bfd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11537bff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11537c02 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11537c06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11537c08 jne 0x11537c18 */
  if (!C.zf) goto L_11537c18;
L_11537c0a:;
  /* 11537c0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537c0d sub eax, dword ptr [0x11553880] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11553880))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11537c13 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11537c16 jmp 0x11537c28 */
  goto L_11537c28;
L_11537c18:;
  /* 11537c18 jmp 0x11537bbe */
  goto L_11537bbe;
L_11537c1a:;
  /* 11537c1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537c1d sub eax, dword ptr [0x11553880] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11553880))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11537c23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11537c26 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11537c28:;
  /* 11537c28 mov esp, ebp */
  ESP = (EBP);
  /* 11537c2a pop ebp */
  EBP = (pop32());
  /* 11537c2b ret  */
  ESPCHK(0x11537bb0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11537c30 (238 bytes, 80 insns) */
void f_11537c30(void) {
  FTRACE(0x11537c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11537c31 mov ebp, esp */
  EBP = (ESP);
  /* 11537c33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11537c36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11537c3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537c40 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11537c43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537c47 jne 0x11537c50 */
  if (!C.zf) goto L_11537c50;
  /* 11537c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11537c4b jmp 0x11537d1a */
  goto L_11537d1a;
L_11537c50:;
  /* 11537c50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537c53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11537c55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537c58 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537c5b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11537c5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11537c60 je 0x11537c6d */
  if (C.zf) goto L_11537c6d;
  /* 11537c62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11537c65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537c68 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11537c6b jmp 0x11537c50 */
  goto L_11537c50;
L_11537c6d:;
  /* 11537c6d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11537c72 push 0x1154fe78 */
  push32((uint32_t)(0x1154fe78u));
  /* 11537c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11537c79 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11537c7c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11537c83 push eax */
  push32((uint32_t)(EAX));
  /* 11537c84 call 0x115278d0 */
  push32(0x11537c89u); f_115278d0();
  /* 11537c89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537c8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11537c8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537c92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11537c95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537c99 jne 0x11537ca5 */
  if (!C.zf) goto L_11537ca5;
  /* 11537c9b push 9 */
  push32((uint32_t)(0x9u));
  /* 11537c9d call 0x11526840 */
  push32(0x11537ca2u); f_11526840();
  /* 11537ca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11537ca5:;
  /* 11537ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537ca8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11537cab:;
  /* 11537cab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537cae cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537cb1 je 0x11537d0e */
  if (C.zf) goto L_11537d0e;
  /* 11537cb3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11537cb8 push 0x1154fe78 */
  push32((uint32_t)(0x1154fe78u));
  /* 11537cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11537cbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537cc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11537cc4 push edx */
  push32((uint32_t)(EDX));
  /* 11537cc5 call 0x1152a700 */
  push32(0x11537ccau); f_1152a700();
  /* 11537cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537ccd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537cd0 push eax */
  push32((uint32_t)(EAX));
  /* 11537cd1 call 0x115278d0 */
  push32(0x11537cd6u); f_115278d0();
  /* 11537cd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537cd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537cdc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11537cde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537ce1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537ce4 je 0x11537cfa */
  if (C.zf) goto L_11537cfa;
  /* 11537ce6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537ce9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11537ceb push ecx */
  push32((uint32_t)(ECX));
  /* 11537cec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537cef mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11537cf1 push eax */
  push32((uint32_t)(EAX));
  /* 11537cf2 call 0x1152a880 */
  push32(0x11537cf7u); f_1152a880();
  /* 11537cf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11537cfa:;
  /* 11537cfa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11537cfd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537d00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11537d03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537d06 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537d09 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11537d0c jmp 0x11537cab */
  goto L_11537cab;
L_11537d0e:;
  /* 11537d0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11537d11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11537d17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11537d1a:;
  /* 11537d1a mov esp, ebp */
  ESP = (EBP);
  /* 11537d1c pop ebp */
  EBP = (pop32());
  /* 11537d1d ret  */
  ESPCHK(0x11537c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d20 @ 0x11537d20 (237 bytes, 81 insns) */
void f_11537d20(void) {
  FTRACE(0x11537d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11537d21 mov ebp, esp */
  EBP = (ESP);
  /* 11537d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11537d24 cmp dword ptr [0x11554fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11554fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537d2b jne 0x11537d42 */
  if (!C.zf) goto L_11537d42;
  /* 11537d2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11537d30 push eax */
  push32((uint32_t)(EAX));
  /* 11537d31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537d34 push ecx */
  push32((uint32_t)(ECX));
  /* 11537d35 call 0x11537e20 */
  push32(0x11537d3au); f_11537e20();
  /* 11537d3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537d3d jmp 0x11537e09 */
  goto L_11537e09;
L_11537d42:;
  /* 11537d42 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11537d44 call 0x1152b2d0 */
  push32(0x11537d49u); f_1152b2d0();
  /* 11537d49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537d4c jmp 0x11537d57 */
  goto L_11537d57;
L_11537d4e:;
  /* 11537d4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537d51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537d54 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11537d57:;
  /* 11537d57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537d5a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11537d5e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11537d62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537d65 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11537d6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11537d6d je 0x11537deb */
  if (C.zf) goto L_11537deb;
  /* 11537d6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537d72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11537d77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11537d79 mov cl, byte ptr [eax + 0x115550e1] */
  CL = (r8((uint32_t)(EAX + 0x115550e1)));
  /* 11537d7f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11537d82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11537d84 je 0x11537dd6 */
  if (C.zf) goto L_11537dd6;
  /* 11537d86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537d89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537d8c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11537d8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537d92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11537d94 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11537d96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11537d98 jne 0x11537da8 */
  if (!C.zf) goto L_11537da8;
  /* 11537d9a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11537d9c call 0x1152b370 */
  push32(0x11537da1u); f_1152b370();
  /* 11537da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537da4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11537da6 jmp 0x11537e09 */
  goto L_11537e09;
L_11537da8:;
  /* 11537da8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537dab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11537db1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11537db4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537db7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11537db9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11537dbb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11537dbd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537dc0 jne 0x11537dd4 */
  if (!C.zf) goto L_11537dd4;
  /* 11537dc2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11537dc4 call 0x1152b370 */
  push32(0x11537dc9u); f_1152b370();
  /* 11537dc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537dcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537dcf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11537dd2 jmp 0x11537e09 */
  goto L_11537e09;
L_11537dd4:;
  /* 11537dd4 jmp 0x11537de6 */
  goto L_11537de6;
L_11537dd6:;
  /* 11537dd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537dd9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11537ddf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537de2 jne 0x11537de6 */
  if (!C.zf) goto L_11537de6;
  /* 11537de4 jmp 0x11537deb */
  goto L_11537deb;
L_11537de6:;
  /* 11537de6 jmp 0x11537d4e */
  goto L_11537d4e;
L_11537deb:;
  /* 11537deb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11537ded call 0x1152b370 */
  push32(0x11537df2u); f_1152b370();
  /* 11537df2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11537df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11537df8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11537dfd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11537e00 jne 0x11537e07 */
  if (!C.zf) goto L_11537e07;
  /* 11537e02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11537e05 jmp 0x11537e09 */
  goto L_11537e09;
L_11537e07:;
  /* 11537e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11537e09:;
  /* 11537e09 mov esp, ebp */
  ESP = (EBP);
  /* 11537e0b pop ebp */
  EBP = (pop32());
  /* 11537e0c ret  */
  ESPCHK(0x11537d20u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11537e20 (193 bytes, 87 insns) */
void f_11537e20(void) {
  FTRACE(0x11537e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11537e20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11537e22 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11537e26 push ebx */
  push32((uint32_t)(EBX));
  /* 11537e27 mov ebx, eax */
  EBX = (EAX);
  /* 11537e29 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11537e2c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11537e30 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11537e36 je 0x11537e4b */
  if (C.zf) goto L_11537e4b;
L_11537e38:;
  /* 11537e38 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11537e3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11537e3b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11537e3d je 0x11537e10 */
  if (C.zf) { jmp_ind(0x11537e10u); return; }
  /* 11537e3f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11537e41 je 0x11537e94 */
  if (C.zf) goto L_11537e94;
  /* 11537e43 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11537e49 jne 0x11537e38 */
  if (!C.zf) goto L_11537e38;
L_11537e4b:;
  /* 11537e4b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11537e4d push edi */
  push32((uint32_t)(EDI));
  /* 11537e4e mov eax, ebx */
  EAX = (EBX);
  /* 11537e50 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11537e53 push esi */
  push32((uint32_t)(ESI));
  /* 11537e54 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11537e56:;
  /* 11537e56 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11537e58 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11537e5d mov eax, ecx */
  EAX = (ECX);
  /* 11537e5f mov esi, edi */
  ESI = (EDI);
  /* 11537e61 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11537e63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11537e65 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11537e67 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11537e6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11537e6d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11537e6f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11537e71 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11537e74 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11537e7a jne 0x11537e98 */
  if (!C.zf) goto L_11537e98;
  /* 11537e7c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11537e81 je 0x11537e56 */
  if (C.zf) goto L_11537e56;
  /* 11537e83 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11537e88 jne 0x11537e92 */
  if (!C.zf) goto L_11537e92;
  /* 11537e8a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11537e90 jne 0x11537e56 */
  if (!C.zf) goto L_11537e56;
L_11537e92:;
  /* 11537e92 pop esi */
  ESI = (pop32());
  /* 11537e93 pop edi */
  EDI = (pop32());
L_11537e94:;
  /* 11537e94 pop ebx */
  EBX = (pop32());
  /* 11537e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11537e97 ret  */
  ESPCHK(0x11537e20u, _esp0);
  ESP += 4; return;
L_11537e98:;
  /* 11537e98 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11537e9b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11537e9d je 0x11537ed5 */
  if (C.zf) goto L_11537ed5;
  /* 11537e9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11537ea1 je 0x11537e92 */
  if (C.zf) goto L_11537e92;
  /* 11537ea3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11537ea5 je 0x11537ece */
  if (C.zf) goto L_11537ece;
  /* 11537ea7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11537ea9 je 0x11537e92 */
  if (C.zf) goto L_11537e92;
  /* 11537eab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11537eae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11537eb0 je 0x11537ec7 */
  if (C.zf) goto L_11537ec7;
  /* 11537eb2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11537eb4 je 0x11537e92 */
  if (C.zf) goto L_11537e92;
  /* 11537eb6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11537eb8 je 0x11537ec0 */
  if (C.zf) goto L_11537ec0;
  /* 11537eba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11537ebc je 0x11537e92 */
  if (C.zf) goto L_11537e92;
  /* 11537ebe jmp 0x11537e56 */
  goto L_11537e56;
L_11537ec0:;
  /* 11537ec0 pop esi */
  ESI = (pop32());
  /* 11537ec1 pop edi */
  EDI = (pop32());
  /* 11537ec2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11537ec5 pop ebx */
  EBX = (pop32());
  /* 11537ec6 ret  */
  ESPCHK(0x11537e20u, _esp0);
  ESP += 4; return;
L_11537ec7:;
  /* 11537ec7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11537eca pop esi */
  ESI = (pop32());
  /* 11537ecb pop edi */
  EDI = (pop32());
  /* 11537ecc pop ebx */
  EBX = (pop32());
  /* 11537ecd ret  */
  ESPCHK(0x11537e20u, _esp0);
  ESP += 4; return;
L_11537ece:;
  /* 11537ece lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11537ed1 pop esi */
  ESI = (pop32());
  /* 11537ed2 pop edi */
  EDI = (pop32());
  /* 11537ed3 pop ebx */
  EBX = (pop32());
  /* 11537ed4 ret  */
  ESPCHK(0x11537e20u, _esp0);
  ESP += 4; return;
L_11537ed5:;
  /* 11537ed5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11537ed8 pop esi */
  ESI = (pop32());
  /* 11537ed9 pop edi */
  EDI = (pop32());
  /* 11537eda pop ebx */
  EBX = (pop32());
  /* 11537edb ret  */
  ESPCHK(0x11537e20u, _esp0);
  ESP += 4; return;
  /* 11537edc jmp dword ptr [0x115563b4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x115563b4)))); return;
}

/* RtlUnwind @ 0x1153802c (6 bytes, 1 insns) */
void f_1153802c(void) {
  FTRACE(0x1153802cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1153802c jmp dword ptr [0x11556328] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11556328)))); return;
}

