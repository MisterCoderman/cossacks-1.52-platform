#include "recomp.h"

/* FUN_10014ad0 @ 0x11654ad0 (77 bytes, 18 insns) */
void f_11654ad0(void) {
  FTRACE(0x11654ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11654ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11654ad3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654ad9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11654ae3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11654ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11654aea call dword ptr [0x116782d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782d4))), 0x11654af0u);
  /* 11654af0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654af2 je 0x11654b09 */
  if (C.zf) goto L_11654b09;
  /* 11654af4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654afb jne 0x11654b09 */
  if (!C.zf) goto L_11654b09;
  /* 11654afd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11654b07 jmp 0x11654b13 */
  goto L_11654b13;
L_11654b09:;
  /* 11654b09 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11654b13:;
  /* 11654b13 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11654b19 mov esp, ebp */
  ESP = (EBP);
  /* 11654b1b pop ebp */
  EBP = (pop32());
  /* 11654b1c ret  */
  ESPCHK(0x11654ad0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11654b20 (388 bytes, 118 insns) */
void f_11654b20(void) {
  FTRACE(0x11654b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11654b21 mov ebp, esp */
  EBP = (ESP);
  /* 11654b23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654b26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11654b2d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11654b34 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11654b3b:;
  /* 11654b3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11654b3e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654b41 jg 0x11654c88 */
  if ((!C.zf&&C.sf==C.of)) goto L_11654c88;
  /* 11654b47 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11654b4a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654b4d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11654b4e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654b50 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11654b52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11654b55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654b58 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11654b5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654b5e cmp edx, dword ptr [ecx + 0x11674690] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11674690))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654b64 jne 0x11654c5e */
  if (!C.zf) goto L_11654c5e;
  /* 11654b6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11654b6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11654b70 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654b74 ja 0x11654b97 */
  if ((!C.cf&&!C.zf)) goto L_11654b97;
  /* 11654b76 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654b7a je 0x11654c09 */
  if (C.zf) goto L_11654c09;
  /* 11654b80 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654b84 je 0x11654bb4 */
  if (C.zf) goto L_11654bb4;
  /* 11654b86 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654b8a je 0x11654bd6 */
  if (C.zf) goto L_11654bd6;
  /* 11654b8c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654b90 je 0x11654bf8 */
  if (C.zf) goto L_11654bf8;
  /* 11654b92 jmp 0x11654c28 */
  goto L_11654c28;
L_11654b97:;
  /* 11654b97 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654b9e je 0x11654bc5 */
  if (C.zf) goto L_11654bc5;
  /* 11654ba0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654ba7 je 0x11654be7 */
  if (C.zf) goto L_11654be7;
  /* 11654ba9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654bb0 je 0x11654c1a */
  if (C.zf) goto L_11654c1a;
  /* 11654bb2 jmp 0x11654c28 */
  goto L_11654c28;
L_11654bb4:;
  /* 11654bb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654bb7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11654bba add ecx, 0x11674694 */
  { uint32_t _a=(ECX),_b=(0x11674694u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654bc0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11654bc3 jmp 0x11654c28 */
  goto L_11654c28;
L_11654bc5:;
  /* 11654bc5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654bc8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11654bcb mov eax, dword ptr [edx + 0x1167469c] */
  EAX = (r32((uint32_t)(EDX + 0x1167469c)));
  /* 11654bd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11654bd4 jmp 0x11654c28 */
  goto L_11654c28;
L_11654bd6:;
  /* 11654bd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654bd9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11654bdc add ecx, 0x116746a0 */
  { uint32_t _a=(ECX),_b=(0x116746a0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654be2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11654be5 jmp 0x11654c28 */
  goto L_11654c28;
L_11654be7:;
  /* 11654be7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654bea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11654bed mov eax, dword ptr [edx + 0x116746a4] */
  EAX = (r32((uint32_t)(EDX + 0x116746a4)));
  /* 11654bf3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11654bf6 jmp 0x11654c28 */
  goto L_11654c28;
L_11654bf8:;
  /* 11654bf8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654bfb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11654bfe add ecx, 0x116746a8 */
  { uint32_t _a=(ECX),_b=(0x116746a8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654c04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11654c07 jmp 0x11654c28 */
  goto L_11654c28;
L_11654c09:;
  /* 11654c09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654c0c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11654c0f add edx, 0x116746ac */
  { uint32_t _a=(EDX),_b=(0x116746acu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654c15 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11654c18 jmp 0x11654c28 */
  goto L_11654c28;
L_11654c1a:;
  /* 11654c1a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654c1d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11654c20 add eax, 0x116746b4 */
  { uint32_t _a=(EAX),_b=(0x116746b4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654c25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11654c28:;
  /* 11654c28 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654c2c je 0x11654c34 */
  if (C.zf) goto L_11654c34;
  /* 11654c2e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654c32 jge 0x11654c36 */
  if ((C.sf==C.of)) goto L_11654c36;
L_11654c34:;
  /* 11654c34 jmp 0x11654c88 */
  goto L_11654c88;
L_11654c36:;
  /* 11654c36 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11654c39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654c3c push ecx */
  push32((uint32_t)(ECX));
  /* 11654c3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11654c40 push edx */
  push32((uint32_t)(EDX));
  /* 11654c41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11654c44 push eax */
  push32((uint32_t)(EAX));
  /* 11654c45 call 0x1164a0e0 */
  push32(0x11654c4au); f_1164a0e0();
  /* 11654c4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654c4d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11654c50 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654c53 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11654c57 mov eax, 1 */
  EAX = (0x1u);
  /* 11654c5c jmp 0x11654c9e */
  goto L_11654c9e;
L_11654c5e:;
  /* 11654c5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654c61 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11654c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654c67 cmp eax, dword ptr [edx + 0x11674690] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11674690))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654c6d jae 0x11654c7a */
  if (!C.cf) goto L_11654c7a;
  /* 11654c6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654c72 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654c75 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11654c78 jmp 0x11654c83 */
  goto L_11654c83;
L_11654c7a:;
  /* 11654c7a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654c7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654c80 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11654c83:;
  /* 11654c83 jmp 0x11654b3b */
  goto L_11654b3b;
L_11654c88:;
  /* 11654c88 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11654c8b push eax */
  push32((uint32_t)(EAX));
  /* 11654c8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11654c8f push ecx */
  push32((uint32_t)(ECX));
  /* 11654c90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11654c93 push edx */
  push32((uint32_t)(EDX));
  /* 11654c94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654c97 push eax */
  push32((uint32_t)(EAX));
  /* 11654c98 call dword ptr [0x116782e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e0))), 0x11654c9eu);
L_11654c9e:;
  /* 11654c9e mov esp, ebp */
  ESP = (EBP);
  /* 11654ca0 pop ebp */
  EBP = (pop32());
  /* 11654ca1 ret 0x10 */
  ESPCHK(0x11654b20u, _esp0);
  ESP += 20; return;
}

/* FUN_10014cb0 @ 0x11654cb0 (118 bytes, 42 insns) */
void f_11654cb0(void) {
  FTRACE(0x11654cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11654cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11654cb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654cb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11654cbd:;
  /* 11654cbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654cc0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11654cc2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11654cc5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11654cc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654ccc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654ccf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11654cd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11654cd4 je 0x11654d1f */
  if (C.zf) goto L_11654d1f;
  /* 11654cd6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11654cda cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654cdd jl 0x11654cf2 */
  if ((C.sf!=C.of)) goto L_11654cf2;
  /* 11654cdf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11654ce3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654ce6 jg 0x11654cf2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11654cf2;
  /* 11654ce8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11654ceb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11654ced mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11654cf0 jmp 0x11654d0c */
  goto L_11654d0c;
L_11654cf2:;
  /* 11654cf2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11654cf6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654cf9 jl 0x11654d0c */
  if ((C.sf!=C.of)) goto L_11654d0c;
  /* 11654cfb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11654cff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654d02 jg 0x11654d0c */
  if ((!C.zf&&C.sf==C.of)) goto L_11654d0c;
  /* 11654d04 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11654d07 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11654d09 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11654d0c:;
  /* 11654d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11654d0f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11654d12 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11654d16 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11654d1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11654d1d jmp 0x11654cbd */
  goto L_11654cbd;
L_11654d1f:;
  /* 11654d1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11654d22 mov esp, ebp */
  ESP = (EBP);
  /* 11654d24 pop ebp */
  EBP = (pop32());
  /* 11654d25 ret  */
  ESPCHK(0x11654cb0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11654d30 (101 bytes, 36 insns) */
void f_11654d30(void) {
  FTRACE(0x11654d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11654d31 mov ebp, esp */
  EBP = (ESP);
  /* 11654d33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654d36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11654d3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654d40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11654d42 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11654d45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654d48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654d4b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11654d4e:;
  /* 11654d4e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11654d52 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654d55 jl 0x11654d60 */
  if ((C.sf!=C.of)) goto L_11654d60;
  /* 11654d57 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11654d5b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654d5e jle 0x11654d72 */
  if ((C.zf||C.sf!=C.of)) goto L_11654d72;
L_11654d60:;
  /* 11654d60 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11654d64 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654d67 jl 0x11654d8e */
  if ((C.sf!=C.of)) goto L_11654d8e;
  /* 11654d69 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11654d6d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654d70 jg 0x11654d8e */
  if ((!C.zf&&C.sf==C.of)) goto L_11654d8e;
L_11654d72:;
  /* 11654d72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11654d75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654d78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11654d7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654d7e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11654d80 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11654d83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654d86 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654d89 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11654d8c jmp 0x11654d4e */
  goto L_11654d4e;
L_11654d8e:;
  /* 11654d8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11654d91 mov esp, ebp */
  ESP = (EBP);
  /* 11654d93 pop ebp */
  EBP = (pop32());
  /* 11654d94 ret  */
  ESPCHK(0x11654d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014da0 @ 0x11654da0 (1085 bytes, 299 insns) */
void f_11654da0(void) {
  FTRACE(0x11654da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11654da1 mov ebp, esp */
  EBP = (ESP);
  /* 11654da3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654da6 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11654dac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11654db3 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11654dba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11654dc1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11654dc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654dcb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11654dcf mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 11654dd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11654dd6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11654dda mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 11654dde mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11654de1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11654de7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11654dea and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11654df0 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11654df2 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11654df8 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 11654dfc mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11654e00 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 11654e04 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11654e08 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 11654e0c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11654e11 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 11654e15 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11654e18 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11654e1e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11654e21 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11654e26 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654e28 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11654e2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11654e2f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11654e35 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654e3b jge 0x11654e5d */
  if ((C.sf==C.of)) goto L_11654e5d;
  /* 11654e3d mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11654e40 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11654e46 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654e4c jge 0x11654e5d */
  if ((C.sf==C.of)) goto L_11654e5d;
  /* 11654e4e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11654e51 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11654e56 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654e5b jle 0x11654e94 */
  if ((C.zf||C.sf!=C.of)) goto L_11654e94;
L_11654e5d:;
  /* 11654e5d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11654e60 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11654e66 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11654e68 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654e6a and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11654e70 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654e76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654e79 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11654e7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654e7f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11654e86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654e89 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11654e8f jmp 0x116551d9 */
  goto L_116551d9;
L_11654e94:;
  /* 11654e94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11654e97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11654e9d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654ea3 jg 0x11654ec7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11654ec7;
  /* 11654ea5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654ea8 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11654eaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654eb2 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11654eb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654ebc mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11654ec2 jmp 0x116551d9 */
  goto L_116551d9;
L_11654ec7:;
  /* 11654ec7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11654eca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11654ecf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654ed1 jne 0x11654f0d */
  if (!C.zf) goto L_11654f0d;
  /* 11654ed3 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11654ed7 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11654edb mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11654edf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654ee2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11654ee5 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11654eea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654eec jne 0x11654f0d */
  if (!C.zf) goto L_11654f0d;
  /* 11654eee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654ef1 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654ef5 jne 0x11654f0d */
  if (!C.zf) goto L_11654f0d;
  /* 11654ef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654efa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654efd jne 0x11654f0d */
  if (!C.zf) goto L_11654f0d;
  /* 11654eff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654f02 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 11654f08 jmp 0x116551d9 */
  goto L_116551d9;
L_11654f0d:;
  /* 11654f0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11654f10 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11654f16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11654f18 jne 0x11654f69 */
  if (!C.zf) goto L_11654f69;
  /* 11654f1a mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11654f1e add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11654f22 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11654f26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11654f29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11654f2c and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11654f32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11654f34 jne 0x11654f69 */
  if (!C.zf) goto L_11654f69;
  /* 11654f36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11654f39 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654f3d jne 0x11654f69 */
  if (!C.zf) goto L_11654f69;
  /* 11654f3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11654f42 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654f45 jne 0x11654f69 */
  if (!C.zf) goto L_11654f69;
  /* 11654f47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654f4a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11654f51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654f54 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11654f5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654f5e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11654f64 jmp 0x116551d9 */
  goto L_116551d9;
L_11654f69:;
  /* 11654f69 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11654f70 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11654f77 jmp 0x11654f82 */
  goto L_11654f82;
L_11654f79:;
  /* 11654f79 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11654f7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654f7f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11654f82:;
  /* 11654f82 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654f86 jge 0x11655041 */
  if ((C.sf==C.of)) goto L_11655041;
  /* 11654f8c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11654f8f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11654f91 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11654f94 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 11654f9b mov eax, 5 */
  EAX = (0x5u);
  /* 11654fa0 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654fa3 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11654fa6 jmp 0x11654fb1 */
  goto L_11654fb1;
L_11654fa8:;
  /* 11654fa8 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11654fab sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654fae mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_11654fb1:;
  /* 11654fb1 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654fb5 jle 0x11655033 */
  if ((C.zf||C.sf!=C.of)) goto L_11655033;
  /* 11654fb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654fba add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654fbd mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11654fc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11654fc3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654fc6 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11654fc9 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11654fcc lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 11654fd0 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11654fd3 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11654fd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11654fd8 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11654fdb mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11654fde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11654fe0 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11654fe3 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11654fe6 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11654fe9 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11654fec push ecx */
  push32((uint32_t)(ECX));
  /* 11654fed mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11654ff0 push edx */
  push32((uint32_t)(EDX));
  /* 11654ff1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11654ff4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11654ff6 push ecx */
  push32((uint32_t)(ECX));
  /* 11654ff7 call 0x11650bc0 */
  push32(0x11654ffcu); f_11650bc0();
  /* 11654ffc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654fff mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 11655002 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655006 je 0x1165501c */
  if (C.zf) goto L_1165501c;
  /* 11655008 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1165500b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 11655010 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11655014 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11655017 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_1165501c:;
  /* 1165501c mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1165501f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655022 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11655025 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655028 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165502b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1165502e jmp 0x11654fa8 */
  goto L_11654fa8;
L_11655033:;
  /* 11655033 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11655036 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655039 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1165503c jmp 0x11654f79 */
  goto L_11654f79;
L_11655041:;
  /* 11655041 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11655045 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 1165504a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_1165504e:;
  /* 1165504e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11655052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11655054 jle 0x1165507d */
  if ((C.zf||C.sf!=C.of)) goto L_1165507d;
  /* 11655056 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655059 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1165505f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11655061 jne 0x1165507d */
  if (!C.zf) goto L_1165507d;
  /* 11655063 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11655066 push edx */
  push32((uint32_t)(EDX));
  /* 11655067 call 0x11650cb0 */
  push32(0x1165506cu); f_11650cb0();
  /* 1165506c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165506f mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11655073 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11655077 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 1165507b jmp 0x1165504e */
  goto L_1165504e;
L_1165507d:;
  /* 1165507d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11655081 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11655083 jg 0x116550dd */
  if ((!C.zf&&C.sf==C.of)) goto L_116550dd;
  /* 11655085 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11655089 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 1165508d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11655091:;
  /* 11655091 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11655095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11655097 jge 0x116550cc */
  if ((C.sf==C.of)) goto L_116550cc;
  /* 11655099 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1165509c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116550a2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116550a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116550a7 je 0x116550b2 */
  if (C.zf) goto L_116550b2;
  /* 116550a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116550ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116550af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116550b2:;
  /* 116550b2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 116550b5 push eax */
  push32((uint32_t)(EAX));
  /* 116550b6 call 0x11650d10 */
  push32(0x116550bbu); f_11650d10();
  /* 116550bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116550be mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 116550c2 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 116550c6 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 116550ca jmp 0x11655091 */
  goto L_11655091;
L_116550cc:;
  /* 116550cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116550d0 je 0x116550dd */
  if (C.zf) goto L_116550dd;
  /* 116550d2 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 116550d6 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 116550d9 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_116550dd:;
  /* 116550dd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116550e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116550e5 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116550ea jg 0x116550fd */
  if ((!C.zf&&C.sf==C.of)) goto L_116550fd;
  /* 116550ec mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116550ef and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116550f5 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116550fb jne 0x1165515e */
  if (!C.zf) goto L_1165515e;
L_116550fd:;
  /* 116550fd cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655101 jne 0x11655155 */
  if (!C.zf) goto L_11655155;
  /* 11655103 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 1165510a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165510e jne 0x1165514a */
  if (!C.zf) goto L_1165514a;
  /* 11655110 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 11655117 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 1165511a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11655120 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655126 jne 0x1165513c */
  if (!C.zf) goto L_1165513c;
  /* 11655128 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 1165512e mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11655132 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11655136 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 1165513a jmp 0x11655148 */
  goto L_11655148;
L_1165513c:;
  /* 1165513c mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11655140 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11655144 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11655148:;
  /* 11655148 jmp 0x11655153 */
  goto L_11655153;
L_1165514a:;
  /* 1165514a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 1165514d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655150 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_11655153:;
  /* 11655153 jmp 0x1165515e */
  goto L_1165515e;
L_11655155:;
  /* 11655155 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11655158 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165515b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_1165515e:;
  /* 1165515e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11655161 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11655167 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165516d jl 0x116551a3 */
  if ((C.sf!=C.of)) goto L_116551a3;
  /* 1165516f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11655172 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11655178 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1165517a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165517c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11655182 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655188 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165518b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1165518e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655191 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11655198 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165519b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 116551a1 jmp 0x116551d9 */
  goto L_116551d9;
L_116551a3:;
  /* 116551a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116551a6 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 116551aa mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 116551ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116551b0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116551b3 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 116551b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116551b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116551bc mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 116551bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116551c2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116551c7 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116551ca and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116551d0 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 116551d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116551d5 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_116551d9:;
  /* 116551d9 mov esp, ebp */
  ESP = (EBP);
  /* 116551db pop ebp */
  EBP = (pop32());
  /* 116551dc ret  */
  ESPCHK(0x11654da0u, _esp0);
  ESP += 4; return;
}

/* FUN_100151e0 @ 0x116551e0 (195 bytes, 67 insns) */
void f_116551e0(void) {
  FTRACE(0x116551e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116551e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116551e1 mov ebp, esp */
  EBP = (ESP);
  /* 116551e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116551e6 mov eax, 0x11674f00 */
  EAX = (0x11674f00u);
  /* 116551eb sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116551ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116551f1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116551f5 jne 0x116551fc */
  if (!C.zf) goto L_116551fc;
  /* 116551f7 jmp 0x1165529f */
  goto L_1165529f;
L_116551fc:;
  /* 116551fc cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655200 jge 0x11655215 */
  if ((C.sf==C.of)) goto L_11655215;
  /* 11655202 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11655205 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11655207 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1165520a mov edx, 0x11675060 */
  EDX = (0x11675060u);
  /* 1165520f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11655212 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11655215:;
  /* 11655215 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655219 jne 0x11655223 */
  if (!C.zf) goto L_11655223;
  /* 1165521b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165521e mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_11655223:;
  /* 11655223 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655227 je 0x1165529f */
  if (C.zf) goto L_1165529f;
  /* 11655229 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165522c add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165522f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11655232 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11655235 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 11655238 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1165523b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165523e sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11655241 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11655244 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655248 jne 0x1165524c */
  if (!C.zf) goto L_1165524c;
  /* 1165524a jmp 0x11655223 */
  goto L_11655223;
L_1165524c:;
  /* 1165524c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1165524f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11655252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655255 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655257 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1165525a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165525d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1165525f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11655262 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655268 jl 0x1165528d */
  if ((C.sf!=C.of)) goto L_1165528d;
  /* 1165526a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165526d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1165526f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11655272 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11655275 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11655278 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1165527b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1165527e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11655281 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11655284 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 11655287 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 1165528a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1165528d:;
  /* 1165528d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655290 push edx */
  push32((uint32_t)(EDX));
  /* 11655291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655294 push eax */
  push32((uint32_t)(EAX));
  /* 11655295 call 0x11654da0 */
  push32(0x1165529au); f_11654da0();
  /* 1165529a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165529d jmp 0x11655223 */
  goto L_11655223;
L_1165529f:;
  /* 1165529f mov esp, ebp */
  ESP = (EBP);
  /* 116552a1 pop ebp */
  EBP = (pop32());
  /* 116552a2 ret  */
  ESPCHK(0x116551e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100152b0 @ 0x116552b0 (482 bytes, 138 insns) */
void f_116552b0(void) {
  FTRACE(0x116552b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116552b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116552b1 mov ebp, esp */
  EBP = (ESP);
  /* 116552b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116552b6 push esi */
  push32((uint32_t)(ESI));
  /* 116552b7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 116552be push 0x12 */
  push32((uint32_t)(0x12u));
  /* 116552c0 call 0x1164b880 */
  push32(0x116552c5u); f_1164b880();
  /* 116552c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116552c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116552cf jmp 0x116552da */
  goto L_116552da;
L_116552d1:;
  /* 116552d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116552d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116552d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116552da:;
  /* 116552da cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116552de jge 0x11655480 */
  if ((C.sf==C.of)) goto L_11655480;
  /* 116552e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116552e7 cmp dword ptr [ecx*4 + 0x11677980], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11677980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116552ef je 0x116553e6 */
  if (C.zf) goto L_116553e6;
  /* 116552f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116552f8 mov eax, dword ptr [edx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11677980)));
  /* 116552ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11655302 jmp 0x1165530d */
  goto L_1165530d;
L_11655304:;
  /* 11655304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655307 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165530a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1165530d:;
  /* 1165530d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655310 mov eax, dword ptr [edx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11677980)));
  /* 11655317 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165531c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165531f jae 0x116553d6 */
  if (!C.cf) goto L_116553d6;
  /* 11655325 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655328 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1165532c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1165532f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11655331 jne 0x116553d1 */
  if (!C.zf) goto L_116553d1;
  /* 11655337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165533a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165533e jne 0x11655379 */
  if (!C.zf) goto L_11655379;
  /* 11655340 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11655342 call 0x1164b880 */
  push32(0x11655347u); f_1164b880();
  /* 11655347 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165534a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165534d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655351 jne 0x1165536f */
  if (!C.zf) goto L_1165536f;
  /* 11655353 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655356 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655359 push edx */
  push32((uint32_t)(EDX));
  /* 1165535a call dword ptr [0x11678334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678334))), 0x11655360u);
  /* 11655360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655363 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11655366 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655369 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165536c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1165536f:;
  /* 1165536f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11655371 call 0x1164b920 */
  push32(0x11655376u); f_1164b920();
  /* 11655376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11655379:;
  /* 11655379 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165537c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165537f push eax */
  push32((uint32_t)(EAX));
  /* 11655380 call dword ptr [0x11678324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678324))), 0x11655386u);
  /* 11655386 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655389 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1165538d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11655390 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11655392 je 0x116553a6 */
  if (C.zf) goto L_116553a6;
  /* 11655394 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655397 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165539a push eax */
  push32((uint32_t)(EAX));
  /* 1165539b call dword ptr [0x11678320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678320))), 0x116553a1u);
  /* 116553a1 jmp 0x11655304 */
  goto L_11655304;
L_116553a6:;
  /* 116553a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116553a9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 116553af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116553b2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116553b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116553b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116553bb sub eax, dword ptr [edx*4 + 0x11677980] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11677980))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116553c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116553c3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 116553c8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116553ca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116553cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116553cf jmp 0x116553d6 */
  goto L_116553d6;
L_116553d1:;
  /* 116553d1 jmp 0x11655304 */
  goto L_11655304;
L_116553d6:;
  /* 116553d6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116553da je 0x116553e1 */
  if (C.zf) goto L_116553e1;
  /* 116553dc jmp 0x11655480 */
  goto L_11655480;
L_116553e1:;
  /* 116553e1 jmp 0x1165547b */
  goto L_1165547b;
L_116553e6:;
  /* 116553e6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 116553e8 push 0x11671894 */
  push32((uint32_t)(0x11671894u));
  /* 116553ed push 2 */
  push32((uint32_t)(0x2u));
  /* 116553ef push 0x480 */
  push32((uint32_t)(0x480u));
  /* 116553f4 call 0x116468c0 */
  push32(0x116553f9u); f_116468c0();
  /* 116553f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116553fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116553ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655403 je 0x11655479 */
  if (C.zf) goto L_11655479;
  /* 11655405 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655408 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165540b mov dword ptr [eax*4 + 0x11677980], ecx */
  w32((uint32_t)(EAX*4 + 0x11677980), (ECX));
  /* 11655412 mov edx, dword ptr [0x11677abc] */
  EDX = (r32((uint32_t)(0x11677abc)));
  /* 11655418 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165541b mov dword ptr [0x11677abc], edx */
  w32((uint32_t)(0x11677abc), (EDX));
  /* 11655421 jmp 0x1165542c */
  goto L_1165542c;
L_11655423:;
  /* 11655423 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655426 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1165542c:;
  /* 1165542c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165542f mov edx, dword ptr [ecx*4 + 0x11677980] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 11655436 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165543c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165543f jae 0x11655464 */
  if (!C.cf) goto L_11655464;
  /* 11655441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655444 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11655448 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165544b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11655451 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655454 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11655458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165545b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11655462 jmp 0x11655423 */
  goto L_11655423;
L_11655464:;
  /* 11655464 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655467 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1165546a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1165546d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655470 push edx */
  push32((uint32_t)(EDX));
  /* 11655471 call 0x116557c0 */
  push32(0x11655476u); f_116557c0();
  /* 11655476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11655479:;
  /* 11655479 jmp 0x11655480 */
  goto L_11655480;
L_1165547b:;
  /* 1165547b jmp 0x116552d1 */
  goto L_116552d1;
L_11655480:;
  /* 11655480 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11655482 call 0x1164b920 */
  push32(0x11655487u); f_1164b920();
  /* 11655487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165548a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165548d pop esi */
  ESI = (pop32());
  /* 1165548e mov esp, ebp */
  ESP = (EBP);
  /* 11655490 pop ebp */
  EBP = (pop32());
  /* 11655491 ret  */
  ESPCHK(0x116552b0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x116554a0 (183 bytes, 57 insns) */
void f_116554a0(void) {
  FTRACE(0x116554a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116554a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116554a1 mov ebp, esp */
  EBP = (ESP);
  /* 116554a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116554a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116554a7 cmp eax, dword ptr [0x11677abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11677abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116554ad jae 0x1165553a */
  if (!C.cf) goto L_1165553a;
  /* 116554b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116554b6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116554b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116554bc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116554bf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116554c2 mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 116554c9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116554cd jne 0x1165553a */
  if (!C.zf) goto L_1165553a;
  /* 116554cf cmp dword ptr [0x11675f9c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11675f9c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116554d6 jne 0x1165551a */
  if (!C.zf) goto L_1165551a;
  /* 116554d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116554db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116554de cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116554e2 je 0x116554f2 */
  if (C.zf) goto L_116554f2;
  /* 116554e4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116554e8 je 0x11655500 */
  if (C.zf) goto L_11655500;
  /* 116554ea cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116554ee je 0x1165550e */
  if (C.zf) goto L_1165550e;
  /* 116554f0 jmp 0x1165551a */
  goto L_1165551a;
L_116554f2:;
  /* 116554f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116554f5 push edx */
  push32((uint32_t)(EDX));
  /* 116554f6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 116554f8 call dword ptr [0x116782c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782c4))), 0x116554feu);
  /* 116554fe jmp 0x1165551a */
  goto L_1165551a;
L_11655500:;
  /* 11655500 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11655503 push eax */
  push32((uint32_t)(EAX));
  /* 11655504 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11655506 call dword ptr [0x116782c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782c4))), 0x1165550cu);
  /* 1165550c jmp 0x1165551a */
  goto L_1165551a;
L_1165550e:;
  /* 1165550e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11655511 push ecx */
  push32((uint32_t)(ECX));
  /* 11655512 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11655514 call dword ptr [0x116782c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782c4))), 0x1165551au);
L_1165551a:;
  /* 1165551a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165551d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11655520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655523 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11655526 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11655529 mov ecx, dword ptr [edx*4 + 0x11677980] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11677980)));
  /* 11655530 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11655533 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11655536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11655538 jmp 0x11655553 */
  goto L_11655553;
L_1165553a:;
  /* 1165553a call 0x1164fc30 */
  push32(0x1165553fu); f_1164fc30();
  /* 1165553f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11655545 call 0x1164fc40 */
  push32(0x1165554au); f_1164fc40();
  /* 1165554a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11655550 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11655553:;
  /* 11655553 mov esp, ebp */
  ESP = (EBP);
  /* 11655555 pop ebp */
  EBP = (pop32());
  /* 11655556 ret  */
  ESPCHK(0x116554a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015560 @ 0x11655560 (216 bytes, 63 insns) */
void f_11655560(void) {
  FTRACE(0x11655560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655560 push ebp */
  push32((uint32_t)(EBP));
  /* 11655561 mov ebp, esp */
  EBP = (ESP);
  /* 11655563 push ecx */
  push32((uint32_t)(ECX));
  /* 11655564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655567 cmp eax, dword ptr [0x11677abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11677abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165556d jae 0x1165561b */
  if (!C.cf) goto L_1165561b;
  /* 11655573 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655576 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11655579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165557c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1165557f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11655582 mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 11655589 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1165558e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11655591 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11655593 je 0x1165561b */
  if (C.zf) goto L_1165561b;
  /* 11655599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165559c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1165559f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116555a2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116555a5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116555a8 mov ecx, dword ptr [edx*4 + 0x11677980] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11677980)));
  /* 116555af cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116555b3 je 0x1165561b */
  if (C.zf) goto L_1165561b;
  /* 116555b5 cmp dword ptr [0x11675f9c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11675f9c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116555bc jne 0x116555fa */
  if (!C.zf) goto L_116555fa;
  /* 116555be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116555c1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116555c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116555c8 je 0x116555d8 */
  if (C.zf) goto L_116555d8;
  /* 116555ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116555ce je 0x116555e4 */
  if (C.zf) goto L_116555e4;
  /* 116555d0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116555d4 je 0x116555f0 */
  if (C.zf) goto L_116555f0;
  /* 116555d6 jmp 0x116555fa */
  goto L_116555fa;
L_116555d8:;
  /* 116555d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116555da push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 116555dc call dword ptr [0x116782c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782c4))), 0x116555e2u);
  /* 116555e2 jmp 0x116555fa */
  goto L_116555fa;
L_116555e4:;
  /* 116555e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116555e6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 116555e8 call dword ptr [0x116782c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782c4))), 0x116555eeu);
  /* 116555ee jmp 0x116555fa */
  goto L_116555fa;
L_116555f0:;
  /* 116555f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116555f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 116555f4 call dword ptr [0x116782c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782c4))), 0x116555fau);
L_116555fa:;
  /* 116555fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116555fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11655600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655603 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11655606 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11655609 mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 11655610 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11655617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11655619 jmp 0x11655634 */
  goto L_11655634;
L_1165561b:;
  /* 1165561b call 0x1164fc30 */
  push32(0x11655620u); f_1164fc30();
  /* 11655620 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11655626 call 0x1164fc40 */
  push32(0x1165562bu); f_1164fc40();
  /* 1165562b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11655631 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11655634:;
  /* 11655634 mov esp, ebp */
  ESP = (EBP);
  /* 11655636 pop ebp */
  EBP = (pop32());
  /* 11655637 ret  */
  ESPCHK(0x11655560u, _esp0);
  ESP += 4; return;
}

/* FUN_10015640 @ 0x11655640 (102 bytes, 30 insns) */
void f_11655640(void) {
  FTRACE(0x11655640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655640 push ebp */
  push32((uint32_t)(EBP));
  /* 11655641 mov ebp, esp */
  EBP = (ESP);
  /* 11655643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655646 cmp eax, dword ptr [0x11677abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11677abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165564c jae 0x1165568b */
  if (!C.cf) goto L_1165568b;
  /* 1165564e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655651 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11655654 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655657 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1165565a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1165565d mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 11655664 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11655669 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1165566c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1165566e je 0x1165568b */
  if (C.zf) goto L_1165568b;
  /* 11655670 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655673 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11655676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655679 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1165567c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1165567f mov ecx, dword ptr [edx*4 + 0x11677980] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11677980)));
  /* 11655686 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11655689 jmp 0x116556a4 */
  goto L_116556a4;
L_1165568b:;
  /* 1165568b call 0x1164fc30 */
  push32(0x11655690u); f_1164fc30();
  /* 11655690 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11655696 call 0x1164fc40 */
  push32(0x1165569bu); f_1164fc40();
  /* 1165569b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116556a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116556a4:;
  /* 116556a4 pop ebp */
  EBP = (pop32());
  /* 116556a5 ret  */
  ESPCHK(0x11655640u, _esp0);
  ESP += 4; return;
}

/* FUN_100156b0 @ 0x116556b0 (260 bytes, 83 insns) */
void f_116556b0(void) {
  FTRACE(0x116556b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116556b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116556b1 mov ebp, esp */
  EBP = (ESP);
  /* 116556b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116556b6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 116556ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116556bd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 116556c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116556c2 je 0x116556cd */
  if (C.zf) goto L_116556cd;
  /* 116556c4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 116556c7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116556ca mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_116556cd:;
  /* 116556cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116556d0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 116556d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116556d8 je 0x116556e2 */
  if (C.zf) goto L_116556e2;
  /* 116556da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 116556dd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 116556df mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_116556e2:;
  /* 116556e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116556e5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 116556eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116556ed je 0x116556f8 */
  if (C.zf) goto L_116556f8;
  /* 116556ef mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 116556f2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 116556f5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_116556f8:;
  /* 116556f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116556fb push eax */
  push32((uint32_t)(EAX));
  /* 116556fc call dword ptr [0x1167839c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167839c))), 0x11655702u);
  /* 11655702 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11655705 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655709 jne 0x11655722 */
  if (!C.zf) goto L_11655722;
  /* 1165570b call dword ptr [0x11678390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678390))), 0x11655711u);
  /* 11655711 push eax */
  push32((uint32_t)(EAX));
  /* 11655712 call 0x1164fb90 */
  push32(0x11655717u); f_1164fb90();
  /* 11655717 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165571a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165571d jmp 0x116557b0 */
  goto L_116557b0;
L_11655722:;
  /* 11655722 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655726 jne 0x11655733 */
  if (!C.zf) goto L_11655733;
  /* 11655728 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1165572b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1165572e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11655731 jmp 0x11655742 */
  goto L_11655742;
L_11655733:;
  /* 11655733 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655737 jne 0x11655742 */
  if (!C.zf) goto L_11655742;
  /* 11655739 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1165573c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1165573f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11655742:;
  /* 11655742 call 0x116552b0 */
  push32(0x11655747u); f_116552b0();
  /* 11655747 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1165574a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165574e jne 0x1165576b */
  if (!C.zf) goto L_1165576b;
  /* 11655750 call 0x1164fc30 */
  push32(0x11655755u); f_1164fc30();
  /* 11655755 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1165575b call 0x1164fc40 */
  push32(0x11655760u); f_1164fc40();
  /* 11655760 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11655766 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11655769 jmp 0x116557b0 */
  goto L_116557b0;
L_1165576b:;
  /* 1165576b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165576e push eax */
  push32((uint32_t)(EAX));
  /* 1165576f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655772 push ecx */
  push32((uint32_t)(ECX));
  /* 11655773 call 0x116554a0 */
  push32(0x11655778u); f_116554a0();
  /* 11655778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165577b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1165577e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11655781 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11655784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655787 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1165578a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165578d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11655790 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11655793 mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 1165579a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1165579d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 116557a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116557a4 push ecx */
  push32((uint32_t)(ECX));
  /* 116557a5 call 0x11655850 */
  push32(0x116557aau); f_11655850();
  /* 116557aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116557ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116557b0:;
  /* 116557b0 mov esp, ebp */
  ESP = (EBP);
  /* 116557b2 pop ebp */
  EBP = (pop32());
  /* 116557b3 ret  */
  ESPCHK(0x116556b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157c0 @ 0x116557c0 (134 bytes, 44 insns) */
void f_116557c0(void) {
  FTRACE(0x116557c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116557c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116557c1 mov ebp, esp */
  EBP = (ESP);
  /* 116557c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116557c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116557c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116557ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116557cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116557d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116557d3 mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 116557da add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116557dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116557df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116557e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116557e6 jne 0x11655821 */
  if (!C.zf) goto L_11655821;
  /* 116557e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116557ea call 0x1164b880 */
  push32(0x116557efu); f_1164b880();
  /* 116557ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116557f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116557f5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116557f9 jne 0x11655817 */
  if (!C.zf) goto L_11655817;
  /* 116557fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116557fe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655801 push edx */
  push32((uint32_t)(EDX));
  /* 11655802 call dword ptr [0x11678334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678334))), 0x11655808u);
  /* 11655808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165580b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1165580e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655811 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655814 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11655817:;
  /* 11655817 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11655819 call 0x1164b920 */
  push32(0x1165581eu); f_1164b920();
  /* 1165581e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11655821:;
  /* 11655821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655824 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11655827 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165582a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1165582d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11655830 mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 11655837 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1165583b push eax */
  push32((uint32_t)(EAX));
  /* 1165583c call dword ptr [0x11678324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678324))), 0x11655842u);
  /* 11655842 mov esp, ebp */
  ESP = (EBP);
  /* 11655844 pop ebp */
  EBP = (pop32());
  /* 11655845 ret  */
  ESPCHK(0x116557c0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11655850 (38 bytes, 13 insns) */
void f_11655850(void) {
  FTRACE(0x11655850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655850 push ebp */
  push32((uint32_t)(EBP));
  /* 11655851 mov ebp, esp */
  EBP = (ESP);
  /* 11655853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655856 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11655859 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165585c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1165585f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11655862 mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 11655869 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1165586d push eax */
  push32((uint32_t)(EAX));
  /* 1165586e call dword ptr [0x11678320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678320))), 0x11655874u);
  /* 11655874 pop ebp */
  EBP = (pop32());
  /* 11655875 ret  */
  ESPCHK(0x11655850u, _esp0);
  ESP += 4; return;
}

/* FUN_10015880 @ 0x11655880 (218 bytes, 63 insns) */
void f_11655880(void) {
  FTRACE(0x11655880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655880 push ebp */
  push32((uint32_t)(EBP));
  /* 11655881 mov ebp, esp */
  EBP = (ESP);
  /* 11655883 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11655886 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1165588d push 2 */
  push32((uint32_t)(0x2u));
  /* 1165588f call 0x1164b880 */
  push32(0x11655894u); f_1164b880();
  /* 11655894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655897 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1165589e jmp 0x116558a9 */
  goto L_116558a9;
L_116558a0:;
  /* 116558a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116558a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116558a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116558a9:;
  /* 116558a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116558ac cmp ecx, dword ptr [0x11677680] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11677680))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116558b2 jge 0x11655949 */
  if ((C.sf==C.of)) goto L_11655949;
  /* 116558b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116558bb mov eax, dword ptr [0x11676324] */
  EAX = (r32((uint32_t)(0x11676324)));
  /* 116558c0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116558c4 je 0x11655944 */
  if (C.zf) goto L_11655944;
  /* 116558c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116558c9 mov edx, dword ptr [0x11676324] */
  EDX = (r32((uint32_t)(0x11676324)));
  /* 116558cf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116558d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116558d5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 116558db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116558dd je 0x11655901 */
  if (C.zf) goto L_11655901;
  /* 116558df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116558e2 mov eax, dword ptr [0x11676324] */
  EAX = (r32((uint32_t)(0x11676324)));
  /* 116558e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116558ea push ecx */
  push32((uint32_t)(ECX));
  /* 116558eb call 0x116579c0 */
  push32(0x116558f0u); f_116579c0();
  /* 116558f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116558f3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116558f6 je 0x11655901 */
  if (C.zf) goto L_11655901;
  /* 116558f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116558fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116558fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11655901:;
  /* 11655901 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655905 jl 0x11655944 */
  if ((C.sf!=C.of)) goto L_11655944;
  /* 11655907 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165590a mov ecx, dword ptr [0x11676324] */
  ECX = (r32((uint32_t)(0x11676324)));
  /* 11655910 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11655913 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655916 push edx */
  push32((uint32_t)(EDX));
  /* 11655917 call dword ptr [0x116783a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a4))), 0x1165591du);
  /* 1165591d push 2 */
  push32((uint32_t)(0x2u));
  /* 1165591f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655922 mov ecx, dword ptr [0x11676324] */
  ECX = (r32((uint32_t)(0x11676324)));
  /* 11655928 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1165592b push edx */
  push32((uint32_t)(EDX));
  /* 1165592c call 0x11647350 */
  push32(0x11655931u); f_11647350();
  /* 11655931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655934 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655937 mov ecx, dword ptr [0x11676324] */
  ECX = (r32((uint32_t)(0x11676324)));
  /* 1165593d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11655944:;
  /* 11655944 jmp 0x116558a0 */
  goto L_116558a0;
L_11655949:;
  /* 11655949 push 2 */
  push32((uint32_t)(0x2u));
  /* 1165594b call 0x1164b920 */
  push32(0x11655950u); f_1164b920();
  /* 11655950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655956 mov esp, ebp */
  ESP = (EBP);
  /* 11655958 pop ebp */
  EBP = (pop32());
  /* 11655959 ret  */
  ESPCHK(0x11655880u, _esp0);
  ESP += 4; return;
}

/* FUN_10015960 @ 0x11655960 (68 bytes, 26 insns) */
void f_11655960(void) {
  FTRACE(0x11655960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655960 push ebp */
  push32((uint32_t)(EBP));
  /* 11655961 mov ebp, esp */
  EBP = (ESP);
  /* 11655963 push ecx */
  push32((uint32_t)(ECX));
  /* 11655964 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655968 jne 0x11655976 */
  if (!C.zf) goto L_11655976;
  /* 1165596a push 0 */
  push32((uint32_t)(0x0u));
  /* 1165596c call 0x11655ad0 */
  push32(0x11655971u); f_11655ad0();
  /* 11655971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655974 jmp 0x116559a0 */
  goto L_116559a0;
L_11655976:;
  /* 11655976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655979 push eax */
  push32((uint32_t)(EAX));
  /* 1165597a call 0x11652620 */
  push32(0x1165597fu); f_11652620();
  /* 1165597f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655985 push ecx */
  push32((uint32_t)(ECX));
  /* 11655986 call 0x116559b0 */
  push32(0x1165598bu); f_116559b0();
  /* 1165598b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165598e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11655991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655994 push edx */
  push32((uint32_t)(EDX));
  /* 11655995 call 0x11652690 */
  push32(0x1165599au); f_11652690();
  /* 1165599a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165599d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116559a0:;
  /* 116559a0 mov esp, ebp */
  ESP = (EBP);
  /* 116559a2 pop ebp */
  EBP = (pop32());
  /* 116559a3 ret  */
  ESPCHK(0x11655960u, _esp0);
  ESP += 4; return;
}

/* FUN_100159b0 @ 0x116559b0 (65 bytes, 26 insns) */
void f_116559b0(void) {
  FTRACE(0x116559b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116559b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116559b1 mov ebp, esp */
  EBP = (ESP);
  /* 116559b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116559b6 push eax */
  push32((uint32_t)(EAX));
  /* 116559b7 call 0x11655a00 */
  push32(0x116559bcu); f_11655a00();
  /* 116559bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116559bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116559c1 je 0x116559c8 */
  if (C.zf) goto L_116559c8;
  /* 116559c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116559c6 jmp 0x116559ef */
  goto L_116559ef;
L_116559c8:;
  /* 116559c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116559cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116559ce and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 116559d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116559d6 je 0x116559ed */
  if (C.zf) goto L_116559ed;
  /* 116559d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116559db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116559de push ecx */
  push32((uint32_t)(ECX));
  /* 116559df call 0x11657b10 */
  push32(0x116559e4u); f_11657b10();
  /* 116559e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116559e7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116559e9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116559eb jmp 0x116559ef */
  goto L_116559ef;
L_116559ed:;
  /* 116559ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116559ef:;
  /* 116559ef pop ebp */
  EBP = (pop32());
  /* 116559f0 ret  */
  ESPCHK(0x116559b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a00 @ 0x11655a00 (183 bytes, 62 insns) */
void f_11655a00(void) {
  FTRACE(0x11655a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11655a01 mov ebp, esp */
  EBP = (ESP);
  /* 11655a03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11655a06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11655a0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11655a10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11655a13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a16 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11655a19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11655a1c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655a1f jne 0x11655a9b */
  if (!C.zf) goto L_11655a9b;
  /* 11655a21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a24 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11655a27 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11655a2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11655a2f je 0x11655a9b */
  if (C.zf) goto L_11655a9b;
  /* 11655a31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a37 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11655a39 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11655a3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11655a3f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655a43 jle 0x11655a9b */
  if ((C.zf||C.sf!=C.of)) goto L_11655a9b;
  /* 11655a45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655a48 push edx */
  push32((uint32_t)(EDX));
  /* 11655a49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11655a4f push ecx */
  push32((uint32_t)(ECX));
  /* 11655a50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a53 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11655a56 push eax */
  push32((uint32_t)(EAX));
  /* 11655a57 call 0x116520b0 */
  push32(0x11655a5cu); f_116520b0();
  /* 11655a5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655a5f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655a62 jne 0x11655a85 */
  if (!C.zf) goto L_11655a85;
  /* 11655a64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11655a6a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11655a70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11655a72 je 0x11655a83 */
  if (C.zf) goto L_11655a83;
  /* 11655a74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a77 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11655a7a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11655a7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a80 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11655a83:;
  /* 11655a83 jmp 0x11655a9b */
  goto L_11655a9b;
L_11655a85:;
  /* 11655a85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a88 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11655a8b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11655a8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a91 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11655a94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11655a9b:;
  /* 11655a9b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655aa1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11655aa4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11655aa6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655aa9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11655ab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655ab3 mov esp, ebp */
  ESP = (EBP);
  /* 11655ab5 pop ebp */
  EBP = (pop32());
  /* 11655ab6 ret  */
  ESPCHK(0x11655a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ac0 @ 0x11655ac0 (15 bytes, 7 insns) */
void f_11655ac0(void) {
  FTRACE(0x11655ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11655ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11655ac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11655ac5 call 0x11655ad0 */
  push32(0x11655acau); f_11655ad0();
  /* 11655aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655acd pop ebp */
  EBP = (pop32());
  /* 11655ace ret  */
  ESPCHK(0x11655ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ad0 @ 0x11655ad0 (319 bytes, 94 insns) */
void f_11655ad0(void) {
  FTRACE(0x11655ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11655ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11655ad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11655ad6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11655add mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11655ae4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11655ae6 call 0x1164b880 */
  push32(0x11655aebu); f_1164b880();
  /* 11655aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655aee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11655af5 jmp 0x11655b00 */
  goto L_11655b00;
L_11655af7:;
  /* 11655af7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655afa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655afd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11655b00:;
  /* 11655b00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655b03 cmp ecx, dword ptr [0x11677680] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11677680))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655b09 jge 0x11655bf3 */
  if ((C.sf==C.of)) goto L_11655bf3;
  /* 11655b0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655b12 mov eax, dword ptr [0x11676324] */
  EAX = (r32((uint32_t)(0x11676324)));
  /* 11655b17 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655b1b je 0x11655bee */
  if (C.zf) goto L_11655bee;
  /* 11655b21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655b24 mov edx, dword ptr [0x11676324] */
  EDX = (r32((uint32_t)(0x11676324)));
  /* 11655b2a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11655b2d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11655b30 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11655b36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11655b38 je 0x11655bee */
  if (C.zf) goto L_11655bee;
  /* 11655b3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655b41 mov eax, dword ptr [0x11676324] */
  EAX = (r32((uint32_t)(0x11676324)));
  /* 11655b46 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11655b49 push ecx */
  push32((uint32_t)(ECX));
  /* 11655b4a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655b4d push edx */
  push32((uint32_t)(EDX));
  /* 11655b4e call 0x11652660 */
  push32(0x11655b53u); f_11652660();
  /* 11655b53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655b56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655b59 mov ecx, dword ptr [0x11676324] */
  ECX = (r32((uint32_t)(0x11676324)));
  /* 11655b5f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11655b62 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11655b65 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11655b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11655b6c je 0x11655bd5 */
  if (C.zf) goto L_11655bd5;
  /* 11655b6e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655b72 jne 0x11655b99 */
  if (!C.zf) goto L_11655b99;
  /* 11655b74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655b77 mov edx, dword ptr [0x11676324] */
  EDX = (r32((uint32_t)(0x11676324)));
  /* 11655b7d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11655b80 push eax */
  push32((uint32_t)(EAX));
  /* 11655b81 call 0x116559b0 */
  push32(0x11655b86u); f_116559b0();
  /* 11655b86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655b89 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655b8c je 0x11655b97 */
  if (C.zf) goto L_11655b97;
  /* 11655b8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655b91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655b94 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11655b97:;
  /* 11655b97 jmp 0x11655bd5 */
  goto L_11655bd5;
L_11655b99:;
  /* 11655b99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655b9d jne 0x11655bd5 */
  if (!C.zf) goto L_11655bd5;
  /* 11655b9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655ba2 mov eax, dword ptr [0x11676324] */
  EAX = (r32((uint32_t)(0x11676324)));
  /* 11655ba7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11655baa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11655bad and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11655bb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11655bb2 je 0x11655bd5 */
  if (C.zf) goto L_11655bd5;
  /* 11655bb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655bb7 mov ecx, dword ptr [0x11676324] */
  ECX = (r32((uint32_t)(0x11676324)));
  /* 11655bbd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11655bc0 push edx */
  push32((uint32_t)(EDX));
  /* 11655bc1 call 0x116559b0 */
  push32(0x11655bc6u); f_116559b0();
  /* 11655bc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655bc9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655bcc jne 0x11655bd5 */
  if (!C.zf) goto L_11655bd5;
  /* 11655bce mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11655bd5:;
  /* 11655bd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655bd8 mov ecx, dword ptr [0x11676324] */
  ECX = (r32((uint32_t)(0x11676324)));
  /* 11655bde mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11655be1 push edx */
  push32((uint32_t)(EDX));
  /* 11655be2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655be5 push eax */
  push32((uint32_t)(EAX));
  /* 11655be6 call 0x116526d0 */
  push32(0x11655bebu); f_116526d0();
  /* 11655beb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11655bee:;
  /* 11655bee jmp 0x11655af7 */
  goto L_11655af7;
L_11655bf3:;
  /* 11655bf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11655bf5 call 0x1164b920 */
  push32(0x11655bfau); f_1164b920();
  /* 11655bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655bfd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655c01 jne 0x11655c08 */
  if (!C.zf) goto L_11655c08;
  /* 11655c03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655c06 jmp 0x11655c0b */
  goto L_11655c0b;
L_11655c08:;
  /* 11655c08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11655c0b:;
  /* 11655c0b mov esp, ebp */
  ESP = (EBP);
  /* 11655c0d pop ebp */
  EBP = (pop32());
  /* 11655c0e ret  */
  ESPCHK(0x11655ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c10 @ 0x11655c10 (289 bytes, 97 insns) */
void f_11655c10(void) {
  FTRACE(0x11655c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11655c11 mov ebp, esp */
  EBP = (ESP);
  /* 11655c13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11655c16 push esi */
  push32((uint32_t)(ESI));
  /* 11655c17 mov eax, dword ptr [0x11674e08] */
  EAX = (r32((uint32_t)(0x11674e08)));
  /* 11655c1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11655c1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11655c26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11655c2d jmp 0x11655c38 */
  goto L_11655c38;
L_11655c2f:;
  /* 11655c2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655c32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655c35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11655c38:;
  /* 11655c38 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655c3c jae 0x11655c71 */
  if (!C.cf) goto L_11655c71;
  /* 11655c3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655c41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655c44 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11655c47 push ecx */
  push32((uint32_t)(ECX));
  /* 11655c48 call 0x116496f0 */
  push32(0x11655c4du); f_116496f0();
  /* 11655c4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655c50 mov esi, eax */
  ESI = (EAX);
  /* 11655c52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655c55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655c58 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11655c5c push ecx */
  push32((uint32_t)(ECX));
  /* 11655c5d call 0x116496f0 */
  push32(0x11655c62u); f_116496f0();
  /* 11655c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655c65 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655c68 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11655c6c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11655c6f jmp 0x11655c2f */
  goto L_11655c2f;
L_11655c71:;
  /* 11655c71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655c74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655c77 push eax */
  push32((uint32_t)(EAX));
  /* 11655c78 call 0x116468a0 */
  push32(0x11655c7du); f_116468a0();
  /* 11655c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655c80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11655c83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655c87 je 0x11655d29 */
  if (C.zf) goto L_11655d29;
  /* 11655c8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655c90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11655c93 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11655c9a jmp 0x11655ca5 */
  goto L_11655ca5;
L_11655c9c:;
  /* 11655c9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655c9f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655ca2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11655ca5:;
  /* 11655ca5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655ca9 jae 0x11655d1a */
  if (!C.cf) goto L_11655d1a;
  /* 11655cab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655cae mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11655cb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655cb4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655cb7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11655cba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655cbd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655cc0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11655cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11655cc4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655cc7 push edx */
  push32((uint32_t)(EDX));
  /* 11655cc8 call 0x11649870 */
  push32(0x11655ccdu); f_11649870();
  /* 11655ccd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655cd0 push eax */
  push32((uint32_t)(EAX));
  /* 11655cd1 call 0x116496f0 */
  push32(0x11655cd6u); f_116496f0();
  /* 11655cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655cd9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655cdc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655cde mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11655ce1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655ce4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11655ce7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655cea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655ced mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11655cf0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655cf3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655cf6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11655cfa push eax */
  push32((uint32_t)(EAX));
  /* 11655cfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655cfe push ecx */
  push32((uint32_t)(ECX));
  /* 11655cff call 0x11649870 */
  push32(0x11655d04u); f_11649870();
  /* 11655d04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655d07 push eax */
  push32((uint32_t)(EAX));
  /* 11655d08 call 0x116496f0 */
  push32(0x11655d0du); f_116496f0();
  /* 11655d0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655d10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655d13 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655d15 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11655d18 jmp 0x11655c9c */
  goto L_11655c9c;
L_11655d1a:;
  /* 11655d1a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655d1d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11655d20 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655d23 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655d26 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11655d29:;
  /* 11655d29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655d2c pop esi */
  ESI = (pop32());
  /* 11655d2d mov esp, ebp */
  ESP = (EBP);
  /* 11655d2f pop ebp */
  EBP = (pop32());
  /* 11655d30 ret  */
  ESPCHK(0x11655c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d40 @ 0x11655d40 (291 bytes, 97 insns) */
void f_11655d40(void) {
  FTRACE(0x11655d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11655d41 mov ebp, esp */
  EBP = (ESP);
  /* 11655d43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11655d46 push esi */
  push32((uint32_t)(ESI));
  /* 11655d47 mov eax, dword ptr [0x11674e08] */
  EAX = (r32((uint32_t)(0x11674e08)));
  /* 11655d4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11655d4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11655d56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11655d5d jmp 0x11655d68 */
  goto L_11655d68;
L_11655d5f:;
  /* 11655d5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655d62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655d65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11655d68:;
  /* 11655d68 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655d6c jae 0x11655da2 */
  if (!C.cf) goto L_11655da2;
  /* 11655d6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655d71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655d74 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11655d78 push ecx */
  push32((uint32_t)(ECX));
  /* 11655d79 call 0x116496f0 */
  push32(0x11655d7eu); f_116496f0();
  /* 11655d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655d81 mov esi, eax */
  ESI = (EAX);
  /* 11655d83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655d86 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655d89 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11655d8d push ecx */
  push32((uint32_t)(ECX));
  /* 11655d8e call 0x116496f0 */
  push32(0x11655d93u); f_116496f0();
  /* 11655d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655d96 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655d99 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11655d9d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11655da0 jmp 0x11655d5f */
  goto L_11655d5f;
L_11655da2:;
  /* 11655da2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655da5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655da8 push eax */
  push32((uint32_t)(EAX));
  /* 11655da9 call 0x116468a0 */
  push32(0x11655daeu); f_116468a0();
  /* 11655dae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655db1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11655db4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655db8 je 0x11655e5b */
  if (C.zf) goto L_11655e5b;
  /* 11655dbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655dc1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11655dc4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11655dcb jmp 0x11655dd6 */
  goto L_11655dd6;
L_11655dcd:;
  /* 11655dcd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655dd0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655dd3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11655dd6:;
  /* 11655dd6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655dda jae 0x11655e4c */
  if (!C.cf) goto L_11655e4c;
  /* 11655ddc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655ddf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11655de2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655de5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655de8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11655deb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655dee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655df1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11655df5 push ecx */
  push32((uint32_t)(ECX));
  /* 11655df6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655df9 push edx */
  push32((uint32_t)(EDX));
  /* 11655dfa call 0x11649870 */
  push32(0x11655dffu); f_11649870();
  /* 11655dff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655e02 push eax */
  push32((uint32_t)(EAX));
  /* 11655e03 call 0x116496f0 */
  push32(0x11655e08u); f_116496f0();
  /* 11655e08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655e0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655e0e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655e10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11655e13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655e16 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11655e19 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655e1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655e1f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11655e22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655e25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655e28 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11655e2c push eax */
  push32((uint32_t)(EAX));
  /* 11655e2d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655e30 push ecx */
  push32((uint32_t)(ECX));
  /* 11655e31 call 0x11649870 */
  push32(0x11655e36u); f_11649870();
  /* 11655e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655e39 push eax */
  push32((uint32_t)(EAX));
  /* 11655e3a call 0x116496f0 */
  push32(0x11655e3fu); f_116496f0();
  /* 11655e3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655e42 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655e45 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655e47 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11655e4a jmp 0x11655dcd */
  goto L_11655dcd;
L_11655e4c:;
  /* 11655e4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655e4f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11655e52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11655e55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655e58 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11655e5b:;
  /* 11655e5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655e5e pop esi */
  ESI = (pop32());
  /* 11655e5f mov esp, ebp */
  ESP = (EBP);
  /* 11655e61 pop ebp */
  EBP = (pop32());
  /* 11655e62 ret  */
  ESPCHK(0x11655d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e70 @ 0x11655e70 (878 bytes, 273 insns) */
void f_11655e70(void) {
  FTRACE(0x11655e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11655e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11655e71 mov ebp, esp */
  EBP = (ESP);
  /* 11655e73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11655e76 push esi */
  push32((uint32_t)(ESI));
  /* 11655e77 mov eax, dword ptr [0x11674e08] */
  EAX = (r32((uint32_t)(0x11674e08)));
  /* 11655e7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11655e7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11655e86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11655e8d jmp 0x11655e98 */
  goto L_11655e98;
L_11655e8f:;
  /* 11655e8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655e92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655e95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11655e98:;
  /* 11655e98 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655e9c jae 0x11655ed1 */
  if (!C.cf) goto L_11655ed1;
  /* 11655e9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655ea1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655ea4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11655ea7 push ecx */
  push32((uint32_t)(ECX));
  /* 11655ea8 call 0x116496f0 */
  push32(0x11655eadu); f_116496f0();
  /* 11655ead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655eb0 mov esi, eax */
  ESI = (EAX);
  /* 11655eb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655eb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655eb8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11655ebc push ecx */
  push32((uint32_t)(ECX));
  /* 11655ebd call 0x116496f0 */
  push32(0x11655ec2u); f_116496f0();
  /* 11655ec2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655ec5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655ec8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11655ecc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11655ecf jmp 0x11655e8f */
  goto L_11655e8f;
L_11655ed1:;
  /* 11655ed1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11655ed8 jmp 0x11655ee3 */
  goto L_11655ee3;
L_11655eda:;
  /* 11655eda mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655edd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655ee0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11655ee3:;
  /* 11655ee3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655ee7 jae 0x11655f1d */
  if (!C.cf) goto L_11655f1d;
  /* 11655ee9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655eec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655eef mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11655ef3 push eax */
  push32((uint32_t)(EAX));
  /* 11655ef4 call 0x116496f0 */
  push32(0x11655ef9u); f_116496f0();
  /* 11655ef9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655efc mov esi, eax */
  ESI = (EAX);
  /* 11655efe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655f01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655f04 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11655f08 push eax */
  push32((uint32_t)(EAX));
  /* 11655f09 call 0x116496f0 */
  push32(0x11655f0eu); f_116496f0();
  /* 11655f0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655f11 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655f14 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11655f18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11655f1b jmp 0x11655eda */
  goto L_11655eda;
L_11655f1d:;
  /* 11655f1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655f20 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11655f26 push eax */
  push32((uint32_t)(EAX));
  /* 11655f27 call 0x116496f0 */
  push32(0x11655f2cu); f_116496f0();
  /* 11655f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655f2f mov esi, eax */
  ESI = (EAX);
  /* 11655f31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655f34 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11655f3a push edx */
  push32((uint32_t)(EDX));
  /* 11655f3b call 0x116496f0 */
  push32(0x11655f40u); f_116496f0();
  /* 11655f40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655f43 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655f46 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11655f4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11655f4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655f50 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11655f56 push edx */
  push32((uint32_t)(EDX));
  /* 11655f57 call 0x116496f0 */
  push32(0x11655f5cu); f_116496f0();
  /* 11655f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655f5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655f62 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11655f66 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11655f69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655f6c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11655f72 push ecx */
  push32((uint32_t)(ECX));
  /* 11655f73 call 0x116496f0 */
  push32(0x11655f78u); f_116496f0();
  /* 11655f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655f7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655f7e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11655f82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11655f85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11655f88 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11655f8e push edx */
  push32((uint32_t)(EDX));
  /* 11655f8f call 0x116496f0 */
  push32(0x11655f94u); f_116496f0();
  /* 11655f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655f97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655f9a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11655f9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11655fa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11655fa4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655fa9 push eax */
  push32((uint32_t)(EAX));
  /* 11655faa call 0x116468a0 */
  push32(0x11655fafu); f_116468a0();
  /* 11655faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655fb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11655fb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655fb9 je 0x116561d6 */
  if (C.zf) goto L_116561d6;
  /* 11655fbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655fc2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11655fc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655fc8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655fce mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11655fd1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11655fd6 mov eax, dword ptr [0x11674e08] */
  EAX = (r32((uint32_t)(0x11674e08)));
  /* 11655fdb push eax */
  push32((uint32_t)(EAX));
  /* 11655fdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11655fdf push ecx */
  push32((uint32_t)(ECX));
  /* 11655fe0 call 0x1164e640 */
  push32(0x11655fe5u); f_1164e640();
  /* 11655fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11655fe8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11655fef jmp 0x11655ffa */
  goto L_11655ffa;
L_11655ff1:;
  /* 11655ff1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11655ff4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11655ff7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11655ffa:;
  /* 11655ffa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11655ffe jae 0x1165606e */
  if (!C.cf) goto L_1165606e;
  /* 11656000 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11656003 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11656006 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656009 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1165600c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1165600f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656012 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11656015 push edx */
  push32((uint32_t)(EDX));
  /* 11656016 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656019 push eax */
  push32((uint32_t)(EAX));
  /* 1165601a call 0x11649870 */
  push32(0x1165601fu); f_11649870();
  /* 1165601f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656022 push eax */
  push32((uint32_t)(EAX));
  /* 11656023 call 0x116496f0 */
  push32(0x11656028u); f_116496f0();
  /* 11656028 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165602b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1165602e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11656032 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11656035 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11656038 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1165603b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1165603e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11656042 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11656045 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656048 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1165604c push edx */
  push32((uint32_t)(EDX));
  /* 1165604d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656050 push eax */
  push32((uint32_t)(EAX));
  /* 11656051 call 0x11649870 */
  push32(0x11656056u); f_11649870();
  /* 11656056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656059 push eax */
  push32((uint32_t)(EAX));
  /* 1165605a call 0x116496f0 */
  push32(0x1165605fu); f_116496f0();
  /* 1165605f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656062 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656065 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11656069 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1165606c jmp 0x11655ff1 */
  goto L_11655ff1;
L_1165606e:;
  /* 1165606e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11656075 jmp 0x11656080 */
  goto L_11656080;
L_11656077:;
  /* 11656077 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1165607a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165607d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11656080:;
  /* 11656080 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656084 jae 0x116560f6 */
  if (!C.cf) goto L_116560f6;
  /* 11656086 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11656089 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1165608c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1165608f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11656093 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11656096 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656099 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1165609d push eax */
  push32((uint32_t)(EAX));
  /* 1165609e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116560a1 push ecx */
  push32((uint32_t)(ECX));
  /* 116560a2 call 0x11649870 */
  push32(0x116560a7u); f_11649870();
  /* 116560a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116560aa push eax */
  push32((uint32_t)(EAX));
  /* 116560ab call 0x116496f0 */
  push32(0x116560b0u); f_116496f0();
  /* 116560b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116560b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116560b6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116560ba mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116560bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116560c0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116560c3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116560c6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 116560ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116560cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116560d0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 116560d4 push eax */
  push32((uint32_t)(EAX));
  /* 116560d5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116560d8 push ecx */
  push32((uint32_t)(ECX));
  /* 116560d9 call 0x11649870 */
  push32(0x116560deu); f_11649870();
  /* 116560de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116560e1 push eax */
  push32((uint32_t)(EAX));
  /* 116560e2 call 0x116496f0 */
  push32(0x116560e7u); f_116496f0();
  /* 116560e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116560ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116560ed lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116560f1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116560f4 jmp 0x11656077 */
  goto L_11656077;
L_116560f6:;
  /* 116560f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116560f9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116560fc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11656102 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656105 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1165610b push ecx */
  push32((uint32_t)(ECX));
  /* 1165610c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1165610f push edx */
  push32((uint32_t)(EDX));
  /* 11656110 call 0x11649870 */
  push32(0x11656115u); f_11649870();
  /* 11656115 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656118 push eax */
  push32((uint32_t)(EAX));
  /* 11656119 call 0x116496f0 */
  push32(0x1165611eu); f_116496f0();
  /* 1165611e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656121 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656124 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11656128 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1165612b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1165612e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656131 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11656137 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165613a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11656140 push eax */
  push32((uint32_t)(EAX));
  /* 11656141 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656144 push ecx */
  push32((uint32_t)(ECX));
  /* 11656145 call 0x11649870 */
  push32(0x1165614au); f_11649870();
  /* 1165614a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165614d push eax */
  push32((uint32_t)(EAX));
  /* 1165614e call 0x116496f0 */
  push32(0x11656153u); f_116496f0();
  /* 11656153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656156 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656159 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1165615d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11656160 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11656163 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656166 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1165616c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165616f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11656175 push ecx */
  push32((uint32_t)(ECX));
  /* 11656176 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656179 push edx */
  push32((uint32_t)(EDX));
  /* 1165617a call 0x11649870 */
  push32(0x1165617fu); f_11649870();
  /* 1165617f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656182 push eax */
  push32((uint32_t)(EAX));
  /* 11656183 call 0x116496f0 */
  push32(0x11656188u); f_116496f0();
  /* 11656188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165618b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1165618e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11656192 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11656195 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11656198 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1165619b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 116561a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116561a4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 116561aa push eax */
  push32((uint32_t)(EAX));
  /* 116561ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116561ae push ecx */
  push32((uint32_t)(ECX));
  /* 116561af call 0x11649870 */
  push32(0x116561b4u); f_11649870();
  /* 116561b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116561b7 push eax */
  push32((uint32_t)(EAX));
  /* 116561b8 call 0x116496f0 */
  push32(0x116561bdu); f_116496f0();
  /* 116561bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116561c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116561c3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116561c7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116561ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116561cd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116561d0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_116561d6:;
  /* 116561d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116561d9 pop esi */
  ESI = (pop32());
  /* 116561da mov esp, ebp */
  ESP = (EBP);
  /* 116561dc pop ebp */
  EBP = (pop32());
  /* 116561dd ret  */
  ESPCHK(0x11655e70u, _esp0);
  ESP += 4; return;
}

/* FUN_100161e0 @ 0x116561e0 (31 bytes, 15 insns) */
void f_116561e0(void) {
  FTRACE(0x116561e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116561e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116561e1 mov ebp, esp */
  EBP = (ESP);
  /* 116561e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116561e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116561e8 push eax */
  push32((uint32_t)(EAX));
  /* 116561e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116561ec push ecx */
  push32((uint32_t)(ECX));
  /* 116561ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116561f0 push edx */
  push32((uint32_t)(EDX));
  /* 116561f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116561f4 push eax */
  push32((uint32_t)(EAX));
  /* 116561f5 call 0x11656200 */
  push32(0x116561fau); f_11656200();
  /* 116561fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116561fd pop ebp */
  EBP = (pop32());
  /* 116561fe ret  */
  ESPCHK(0x116561e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016200 @ 0x11656200 (393 bytes, 123 insns) */
void f_11656200(void) {
  FTRACE(0x11656200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11656200 push ebp */
  push32((uint32_t)(EBP));
  /* 11656201 mov ebp, esp */
  EBP = (ESP);
  /* 11656203 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656206 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165620a jne 0x11656216 */
  if (!C.zf) goto L_11656216;
  /* 1165620c mov eax, dword ptr [0x11674e08] */
  EAX = (r32((uint32_t)(0x11674e08)));
  /* 11656211 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11656214 jmp 0x1165621c */
  goto L_1165621c;
L_11656216:;
  /* 11656216 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11656219 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1165621c:;
  /* 1165621c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1165621f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11656222 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656225 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11656228 push 0x11677694 */
  push32((uint32_t)(0x11677694u));
  /* 1165622d call dword ptr [0x11678360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678360))), 0x11656233u);
  /* 11656233 cmp dword ptr [0x11677684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165623a je 0x1165625a */
  if (C.zf) goto L_1165625a;
  /* 1165623c push 0x11677694 */
  push32((uint32_t)(0x11677694u));
  /* 11656241 call dword ptr [0x11678350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678350))), 0x11656247u);
  /* 11656247 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11656249 call 0x1164b880 */
  push32(0x1165624eu); f_1164b880();
  /* 1165624e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656251 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11656258 jmp 0x11656261 */
  goto L_11656261;
L_1165625a:;
  /* 1165625a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11656261:;
  /* 11656261 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656265 jbe 0x11656352 */
  if ((C.cf||C.zf)) goto L_11656352;
  /* 1165626b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165626e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11656270 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11656273 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11656277 je 0x11656281 */
  if (C.zf) goto L_11656281;
  /* 11656279 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1165627d je 0x11656286 */
  if (C.zf) goto L_11656286;
  /* 1165627f jmp 0x116562e0 */
  goto L_116562e0;
L_11656281:;
  /* 11656281 jmp 0x11656352 */
  goto L_11656352;
L_11656286:;
  /* 11656286 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656289 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165628c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1165628f mov dword ptr [0x11676310], 0 */
  w32((uint32_t)(0x11676310), (0x0u));
  /* 11656299 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165629c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1165629f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116562a2 jne 0x116562b7 */
  if (!C.zf) goto L_116562b7;
  /* 116562a4 mov dword ptr [0x11676310], 1 */
  w32((uint32_t)(0x11676310), (0x1u));
  /* 116562ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116562b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116562b4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_116562b7:;
  /* 116562b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116562ba push ecx */
  push32((uint32_t)(ECX));
  /* 116562bb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116562be push edx */
  push32((uint32_t)(EDX));
  /* 116562bf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 116562c2 push eax */
  push32((uint32_t)(EAX));
  /* 116562c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116562c6 push ecx */
  push32((uint32_t)(ECX));
  /* 116562c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116562ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116562cc push eax */
  push32((uint32_t)(EAX));
  /* 116562cd call 0x11656390 */
  push32(0x116562d2u); f_11656390();
  /* 116562d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116562d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116562d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116562db mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116562de jmp 0x1165634d */
  goto L_1165634d;
L_116562e0:;
  /* 116562e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116562e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116562e5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116562e7 mov ecx, dword ptr [0x11673c9c] */
  ECX = (r32((uint32_t)(0x11673c9c)));
  /* 116562ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116562ef mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116562f3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 116562f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116562fb je 0x11656328 */
  if (C.zf) goto L_11656328;
  /* 116562fd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656301 jbe 0x11656328 */
  if ((C.cf||C.zf)) goto L_11656328;
  /* 11656303 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656306 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656309 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1165630b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1165630d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656310 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656313 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11656316 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656319 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165631c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1165631f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656322 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656325 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11656328:;
  /* 11656328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165632b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165632e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11656330 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11656332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656335 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656338 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1165633b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165633e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656341 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11656344 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656347 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165634a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1165634d:;
  /* 1165634d jmp 0x11656261 */
  goto L_11656261;
L_11656352:;
  /* 11656352 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656356 je 0x11656364 */
  if (C.zf) goto L_11656364;
  /* 11656358 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1165635a call 0x1164b920 */
  push32(0x1165635fu); f_1164b920();
  /* 1165635f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656362 jmp 0x1165636f */
  goto L_1165636f;
L_11656364:;
  /* 11656364 push 0x11677694 */
  push32((uint32_t)(0x11677694u));
  /* 11656369 call dword ptr [0x11678350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678350))), 0x1165636fu);
L_1165636f:;
  /* 1165636f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656373 jbe 0x11656383 */
  if ((C.cf||C.zf)) goto L_11656383;
  /* 11656375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656378 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1165637b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165637e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656381 jmp 0x11656385 */
  goto L_11656385;
L_11656383:;
  /* 11656383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11656385:;
  /* 11656385 mov esp, ebp */
  ESP = (EBP);
  /* 11656387 pop ebp */
  EBP = (pop32());
  /* 11656388 ret  */
  ESPCHK(0x11656200u, _esp0);
  ESP += 4; return;
}

/* FUN_10016390 @ 0x11656390 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11656390(void) {
  FTRACE(0x11656390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11656390 push ebp */
  push32((uint32_t)(EBP));
  /* 11656391 mov ebp, esp */
  EBP = (ESP);
  /* 11656393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656396 push esi */
  push32((uint32_t)(ESI));
  /* 11656397 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1165639b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1165639e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116563a1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116563a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116563a7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116563ab ja 0x116568f8 */
  if ((!C.cf&&!C.zf)) goto L_116568f8;
  /* 116563b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116563b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116563b6 mov dl, byte ptr [eax + 0x11656959] */
  DL = (r8((uint32_t)(EAX + 0x11656959)));
  /* 116563bc jmp dword ptr [edx*4 + 0x116568fd] */
  switch (EDX) {
    case 0: goto L_116568d6;
    case 1: goto L_116563e5;
    case 2: goto L_1165642b;
    case 3: goto L_11656578;
    case 4: goto L_116565a0;
    case 5: goto L_1165663f;
    case 6: goto L_116566ab;
    case 7: goto L_116566d4;
    case 8: goto L_11656715;
    case 9: goto L_116567f7;
    case 10: goto L_1165685e;
    case 11: goto L_116568ab;
    case 12: goto L_116563c3;
    case 13: goto L_11656408;
    case 14: goto L_1165644e;
    case 15: goto L_1165654e;
    case 16: goto L_116565e5;
    case 17: goto L_11656612;
    case 18: goto L_11656667;
    case 19: goto L_116566eb;
    case 20: goto L_11656799;
    case 21: goto L_11656828;
    case 22: goto L_116568f8;
    default: x86_unimpl("switch@0x116563bc out of table"); return;
  }
L_116563c3:;
  /* 116563c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116563c6 push ecx */
  push32((uint32_t)(ECX));
  /* 116563c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116563ca push edx */
  push32((uint32_t)(EDX));
  /* 116563cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116563ce mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116563d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116563d4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116563d7 push eax */
  push32((uint32_t)(EAX));
  /* 116563d8 call 0x116569b0 */
  push32(0x116563ddu); f_116569b0();
  /* 116563dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116563e0 jmp 0x116568f8 */
  goto L_116568f8;
L_116563e5:;
  /* 116563e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116563e8 push ecx */
  push32((uint32_t)(ECX));
  /* 116563e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116563ec push edx */
  push32((uint32_t)(EDX));
  /* 116563ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116563f0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116563f3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116563f6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 116563fa push eax */
  push32((uint32_t)(EAX));
  /* 116563fb call 0x116569b0 */
  push32(0x11656400u); f_116569b0();
  /* 11656400 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656403 jmp 0x116568f8 */
  goto L_116568f8;
L_11656408:;
  /* 11656408 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165640b push ecx */
  push32((uint32_t)(ECX));
  /* 1165640c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165640f push edx */
  push32((uint32_t)(EDX));
  /* 11656410 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656413 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11656416 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11656419 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1165641d push eax */
  push32((uint32_t)(EAX));
  /* 1165641e call 0x116569b0 */
  push32(0x11656423u); f_116569b0();
  /* 11656423 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656426 jmp 0x116568f8 */
  goto L_116568f8;
L_1165642b:;
  /* 1165642b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165642e push ecx */
  push32((uint32_t)(ECX));
  /* 1165642f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656432 push edx */
  push32((uint32_t)(EDX));
  /* 11656433 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656436 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11656439 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1165643c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11656440 push eax */
  push32((uint32_t)(EAX));
  /* 11656441 call 0x116569b0 */
  push32(0x11656446u); f_116569b0();
  /* 11656446 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656449 jmp 0x116568f8 */
  goto L_116568f8;
L_1165644e:;
  /* 1165644e cmp dword ptr [0x11676310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656455 je 0x116564d6 */
  if (C.zf) goto L_116564d6;
  /* 11656457 mov dword ptr [0x11676310], 0 */
  w32((uint32_t)(0x11676310), (0x0u));
  /* 11656461 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11656464 push ecx */
  push32((uint32_t)(ECX));
  /* 11656465 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656468 push edx */
  push32((uint32_t)(EDX));
  /* 11656469 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165646c push eax */
  push32((uint32_t)(EAX));
  /* 1165646d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656470 push ecx */
  push32((uint32_t)(ECX));
  /* 11656471 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11656474 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1165647a push eax */
  push32((uint32_t)(EAX));
  /* 1165647b call 0x11656b60 */
  push32(0x11656480u); f_11656b60();
  /* 11656480 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656483 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656486 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656489 jne 0x11656490 */
  if (!C.zf) goto L_11656490;
  /* 1165648b jmp 0x116568f8 */
  goto L_116568f8;
L_11656490:;
  /* 11656490 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656493 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11656495 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11656498 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165649b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1165649d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116564a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116564a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116564a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116564a8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116564aa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116564ad mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116564b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116564b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116564b5 push ecx */
  push32((uint32_t)(ECX));
  /* 116564b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116564b9 push edx */
  push32((uint32_t)(EDX));
  /* 116564ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116564bd push eax */
  push32((uint32_t)(EAX));
  /* 116564be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116564c1 push ecx */
  push32((uint32_t)(ECX));
  /* 116564c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116564c5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 116564cb push eax */
  push32((uint32_t)(EAX));
  /* 116564cc call 0x11656b60 */
  push32(0x116564d1u); f_11656b60();
  /* 116564d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116564d4 jmp 0x11656549 */
  goto L_11656549;
L_116564d6:;
  /* 116564d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116564d9 push ecx */
  push32((uint32_t)(ECX));
  /* 116564da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116564dd push edx */
  push32((uint32_t)(EDX));
  /* 116564de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116564e1 push eax */
  push32((uint32_t)(EAX));
  /* 116564e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116564e5 push ecx */
  push32((uint32_t)(ECX));
  /* 116564e6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116564e9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 116564ef push eax */
  push32((uint32_t)(EAX));
  /* 116564f0 call 0x11656b60 */
  push32(0x116564f5u); f_11656b60();
  /* 116564f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116564f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116564fb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116564fe jne 0x11656505 */
  if (!C.zf) goto L_11656505;
  /* 11656500 jmp 0x116568f8 */
  goto L_116568f8;
L_11656505:;
  /* 11656505 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656508 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1165650a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1165650d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656510 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11656512 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656515 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656518 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1165651a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165651d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1165651f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656522 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656525 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11656527 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1165652a push ecx */
  push32((uint32_t)(ECX));
  /* 1165652b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165652e push edx */
  push32((uint32_t)(EDX));
  /* 1165652f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656532 push eax */
  push32((uint32_t)(EAX));
  /* 11656533 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656536 push ecx */
  push32((uint32_t)(ECX));
  /* 11656537 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1165653a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11656540 push eax */
  push32((uint32_t)(EAX));
  /* 11656541 call 0x11656b60 */
  push32(0x11656546u); f_11656b60();
  /* 11656546 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11656549:;
  /* 11656549 jmp 0x116568f8 */
  goto L_116568f8;
L_1165654e:;
  /* 1165654e mov ecx, dword ptr [0x11676310] */
  ECX = (r32((uint32_t)(0x11676310)));
  /* 11656554 mov dword ptr [0x11676320], ecx */
  w32((uint32_t)(0x11676320), (ECX));
  /* 1165655a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165655d push edx */
  push32((uint32_t)(EDX));
  /* 1165655e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656561 push eax */
  push32((uint32_t)(EAX));
  /* 11656562 push 2 */
  push32((uint32_t)(0x2u));
  /* 11656564 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656567 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1165656a push edx */
  push32((uint32_t)(EDX));
  /* 1165656b call 0x11656a00 */
  push32(0x11656570u); f_11656a00();
  /* 11656570 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656573 jmp 0x116568f8 */
  goto L_116568f8;
L_11656578:;
  /* 11656578 mov eax, dword ptr [0x11676310] */
  EAX = (r32((uint32_t)(0x11676310)));
  /* 1165657d mov dword ptr [0x11676320], eax */
  w32((uint32_t)(0x11676320), (EAX));
  /* 11656582 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656585 push ecx */
  push32((uint32_t)(ECX));
  /* 11656586 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656589 push edx */
  push32((uint32_t)(EDX));
  /* 1165658a push 2 */
  push32((uint32_t)(0x2u));
  /* 1165658c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165658f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11656592 push ecx */
  push32((uint32_t)(ECX));
  /* 11656593 call 0x11656a00 */
  push32(0x11656598u); f_11656a00();
  /* 11656598 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165659b jmp 0x116568f8 */
  goto L_116568f8;
L_116565a0:;
  /* 116565a0 mov edx, dword ptr [0x11676310] */
  EDX = (r32((uint32_t)(0x11676310)));
  /* 116565a6 mov dword ptr [0x11676320], edx */
  w32((uint32_t)(0x11676320), (EDX));
  /* 116565ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116565af mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 116565b2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116565b3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 116565b8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116565ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116565bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116565c1 jne 0x116565ca */
  if (!C.zf) goto L_116565ca;
  /* 116565c3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_116565ca:;
  /* 116565ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116565cd push edx */
  push32((uint32_t)(EDX));
  /* 116565ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116565d1 push eax */
  push32((uint32_t)(EAX));
  /* 116565d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116565d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116565d7 push ecx */
  push32((uint32_t)(ECX));
  /* 116565d8 call 0x11656a00 */
  push32(0x116565ddu); f_11656a00();
  /* 116565dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116565e0 jmp 0x116568f8 */
  goto L_116568f8;
L_116565e5:;
  /* 116565e5 mov edx, dword ptr [0x11676310] */
  EDX = (r32((uint32_t)(0x11676310)));
  /* 116565eb mov dword ptr [0x11676320], edx */
  w32((uint32_t)(0x11676320), (EDX));
  /* 116565f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116565f4 push eax */
  push32((uint32_t)(EAX));
  /* 116565f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116565f8 push ecx */
  push32((uint32_t)(ECX));
  /* 116565f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 116565fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116565fe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11656601 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656604 push eax */
  push32((uint32_t)(EAX));
  /* 11656605 call 0x11656a00 */
  push32(0x1165660au); f_11656a00();
  /* 1165660a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165660d jmp 0x116568f8 */
  goto L_116568f8;
L_11656612:;
  /* 11656612 mov ecx, dword ptr [0x11676310] */
  ECX = (r32((uint32_t)(0x11676310)));
  /* 11656618 mov dword ptr [0x11676320], ecx */
  w32((uint32_t)(0x11676320), (ECX));
  /* 1165661e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656621 push edx */
  push32((uint32_t)(EDX));
  /* 11656622 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656625 push eax */
  push32((uint32_t)(EAX));
  /* 11656626 push 2 */
  push32((uint32_t)(0x2u));
  /* 11656628 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165662b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1165662e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656631 push edx */
  push32((uint32_t)(EDX));
  /* 11656632 call 0x11656a00 */
  push32(0x11656637u); f_11656a00();
  /* 11656637 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165663a jmp 0x116568f8 */
  goto L_116568f8;
L_1165663f:;
  /* 1165663f mov eax, dword ptr [0x11676310] */
  EAX = (r32((uint32_t)(0x11676310)));
  /* 11656644 mov dword ptr [0x11676320], eax */
  w32((uint32_t)(0x11676320), (EAX));
  /* 11656649 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165664c push ecx */
  push32((uint32_t)(ECX));
  /* 1165664d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656650 push edx */
  push32((uint32_t)(EDX));
  /* 11656651 push 2 */
  push32((uint32_t)(0x2u));
  /* 11656653 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656656 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11656659 push ecx */
  push32((uint32_t)(ECX));
  /* 1165665a call 0x11656a00 */
  push32(0x1165665fu); f_11656a00();
  /* 1165665f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656662 jmp 0x116568f8 */
  goto L_116568f8;
L_11656667:;
  /* 11656667 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165666a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165666e jg 0x1165668c */
  if ((!C.zf&&C.sf==C.of)) goto L_1165668c;
  /* 11656670 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656673 push eax */
  push32((uint32_t)(EAX));
  /* 11656674 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656677 push ecx */
  push32((uint32_t)(ECX));
  /* 11656678 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1165667b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11656681 push eax */
  push32((uint32_t)(EAX));
  /* 11656682 call 0x116569b0 */
  push32(0x11656687u); f_116569b0();
  /* 11656687 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165668a jmp 0x116566a6 */
  goto L_116566a6;
L_1165668c:;
  /* 1165668c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165668f push ecx */
  push32((uint32_t)(ECX));
  /* 11656690 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656693 push edx */
  push32((uint32_t)(EDX));
  /* 11656694 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11656697 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1165669d push ecx */
  push32((uint32_t)(ECX));
  /* 1165669e call 0x116569b0 */
  push32(0x116566a3u); f_116569b0();
  /* 116566a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116566a6:;
  /* 116566a6 jmp 0x116568f8 */
  goto L_116568f8;
L_116566ab:;
  /* 116566ab mov edx, dword ptr [0x11676310] */
  EDX = (r32((uint32_t)(0x11676310)));
  /* 116566b1 mov dword ptr [0x11676320], edx */
  w32((uint32_t)(0x11676320), (EDX));
  /* 116566b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116566ba push eax */
  push32((uint32_t)(EAX));
  /* 116566bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116566be push ecx */
  push32((uint32_t)(ECX));
  /* 116566bf push 2 */
  push32((uint32_t)(0x2u));
  /* 116566c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116566c4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116566c6 push eax */
  push32((uint32_t)(EAX));
  /* 116566c7 call 0x11656a00 */
  push32(0x116566ccu); f_11656a00();
  /* 116566cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116566cf jmp 0x116568f8 */
  goto L_116568f8;
L_116566d4:;
  /* 116566d4 mov ecx, dword ptr [0x11676310] */
  ECX = (r32((uint32_t)(0x11676310)));
  /* 116566da mov dword ptr [0x11676320], ecx */
  w32((uint32_t)(0x11676320), (ECX));
  /* 116566e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116566e3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 116566e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116566e9 jmp 0x1165673d */
  goto L_1165673d;
L_116566eb:;
  /* 116566eb mov ecx, dword ptr [0x11676310] */
  ECX = (r32((uint32_t)(0x11676310)));
  /* 116566f1 mov dword ptr [0x11676320], ecx */
  w32((uint32_t)(0x11676320), (ECX));
  /* 116566f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116566fa push edx */
  push32((uint32_t)(EDX));
  /* 116566fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116566fe push eax */
  push32((uint32_t)(EAX));
  /* 116566ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11656701 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656704 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11656707 push edx */
  push32((uint32_t)(EDX));
  /* 11656708 call 0x11656a00 */
  push32(0x1165670du); f_11656a00();
  /* 1165670d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656710 jmp 0x116568f8 */
  goto L_116568f8;
L_11656715:;
  /* 11656715 mov eax, dword ptr [0x11676310] */
  EAX = (r32((uint32_t)(0x11676310)));
  /* 1165671a mov dword ptr [0x11676320], eax */
  w32((uint32_t)(0x11676320), (EAX));
  /* 1165671f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656722 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656726 jne 0x11656731 */
  if (!C.zf) goto L_11656731;
  /* 11656728 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1165672f jmp 0x1165673d */
  goto L_1165673d;
L_11656731:;
  /* 11656731 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656734 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11656737 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165673a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1165673d:;
  /* 1165673d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656740 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11656743 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656746 jge 0x11656751 */
  if ((C.sf==C.of)) goto L_11656751;
  /* 11656748 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1165674f jmp 0x1165677e */
  goto L_1165677e;
L_11656751:;
  /* 11656751 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656754 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11656757 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11656758 mov ecx, 7 */
  ECX = (0x7u);
  /* 1165675d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1165675f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11656762 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656765 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11656768 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11656769 mov ecx, 7 */
  ECX = (0x7u);
  /* 1165676e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11656770 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656773 jl 0x1165677e */
  if ((C.sf!=C.of)) goto L_1165677e;
  /* 11656775 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656778 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165677b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1165677e:;
  /* 1165677e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656781 push eax */
  push32((uint32_t)(EAX));
  /* 11656782 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656785 push ecx */
  push32((uint32_t)(ECX));
  /* 11656786 push 2 */
  push32((uint32_t)(0x2u));
  /* 11656788 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165678b push edx */
  push32((uint32_t)(EDX));
  /* 1165678c call 0x11656a00 */
  push32(0x11656791u); f_11656a00();
  /* 11656791 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656794 jmp 0x116568f8 */
  goto L_116568f8;
L_11656799:;
  /* 11656799 cmp dword ptr [0x11676310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116567a0 je 0x116567d0 */
  if (C.zf) goto L_116567d0;
  /* 116567a2 mov dword ptr [0x11676310], 0 */
  w32((uint32_t)(0x11676310), (0x0u));
  /* 116567ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116567af push eax */
  push32((uint32_t)(EAX));
  /* 116567b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116567b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116567b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116567b7 push edx */
  push32((uint32_t)(EDX));
  /* 116567b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116567bb push eax */
  push32((uint32_t)(EAX));
  /* 116567bc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116567bf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 116567c5 push edx */
  push32((uint32_t)(EDX));
  /* 116567c6 call 0x11656b60 */
  push32(0x116567cbu); f_11656b60();
  /* 116567cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116567ce jmp 0x116567f2 */
  goto L_116567f2;
L_116567d0:;
  /* 116567d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116567d3 push eax */
  push32((uint32_t)(EAX));
  /* 116567d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116567d7 push ecx */
  push32((uint32_t)(ECX));
  /* 116567d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116567db push edx */
  push32((uint32_t)(EDX));
  /* 116567dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116567df push eax */
  push32((uint32_t)(EAX));
  /* 116567e0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116567e3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 116567e9 push edx */
  push32((uint32_t)(EDX));
  /* 116567ea call 0x11656b60 */
  push32(0x116567efu); f_11656b60();
  /* 116567ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116567f2:;
  /* 116567f2 jmp 0x116568f8 */
  goto L_116568f8;
L_116567f7:;
  /* 116567f7 mov dword ptr [0x11676310], 0 */
  w32((uint32_t)(0x11676310), (0x0u));
  /* 11656801 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11656804 push eax */
  push32((uint32_t)(EAX));
  /* 11656805 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656808 push ecx */
  push32((uint32_t)(ECX));
  /* 11656809 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165680c push edx */
  push32((uint32_t)(EDX));
  /* 1165680d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656810 push eax */
  push32((uint32_t)(EAX));
  /* 11656811 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11656814 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1165681a push edx */
  push32((uint32_t)(EDX));
  /* 1165681b call 0x11656b60 */
  push32(0x11656820u); f_11656b60();
  /* 11656820 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656823 jmp 0x116568f8 */
  goto L_116568f8;
L_11656828:;
  /* 11656828 mov eax, dword ptr [0x11676310] */
  EAX = (r32((uint32_t)(0x11676310)));
  /* 1165682d mov dword ptr [0x11676320], eax */
  w32((uint32_t)(0x11676320), (EAX));
  /* 11656832 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656835 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11656838 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11656839 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1165683e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11656840 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11656843 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656846 push edx */
  push32((uint32_t)(EDX));
  /* 11656847 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165684a push eax */
  push32((uint32_t)(EAX));
  /* 1165684b push 2 */
  push32((uint32_t)(0x2u));
  /* 1165684d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656850 push ecx */
  push32((uint32_t)(ECX));
  /* 11656851 call 0x11656a00 */
  push32(0x11656856u); f_11656a00();
  /* 11656856 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656859 jmp 0x116568f8 */
  goto L_116568f8;
L_1165685e:;
  /* 1165685e mov edx, dword ptr [0x11676310] */
  EDX = (r32((uint32_t)(0x11676310)));
  /* 11656864 mov dword ptr [0x11676320], edx */
  w32((uint32_t)(0x11676320), (EDX));
  /* 1165686a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165686d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11656870 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11656871 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11656876 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11656878 mov ecx, eax */
  ECX = (EAX);
  /* 1165687a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165687d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11656880 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656883 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11656886 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11656887 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1165688c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1165688e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656890 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11656893 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656896 push eax */
  push32((uint32_t)(EAX));
  /* 11656897 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165689a push ecx */
  push32((uint32_t)(ECX));
  /* 1165689b push 4 */
  push32((uint32_t)(0x4u));
  /* 1165689d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116568a0 push edx */
  push32((uint32_t)(EDX));
  /* 116568a1 call 0x11656a00 */
  push32(0x116568a6u); f_11656a00();
  /* 116568a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116568a9 jmp 0x116568f8 */
  goto L_116568f8;
L_116568ab:;
  /* 116568ab call 0x11657bf0 */
  push32(0x116568b0u); f_11657bf0();
  /* 116568b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116568b3 push eax */
  push32((uint32_t)(EAX));
  /* 116568b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116568b7 push ecx */
  push32((uint32_t)(ECX));
  /* 116568b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116568bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116568bd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116568c1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 116568c4 mov ecx, dword ptr [eax*4 + 0x11675248] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11675248)));
  /* 116568cb push ecx */
  push32((uint32_t)(ECX));
  /* 116568cc call 0x116569b0 */
  push32(0x116568d1u); f_116569b0();
  /* 116568d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116568d4 jmp 0x116568f8 */
  goto L_116568f8;
L_116568d6:;
  /* 116568d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116568d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116568db mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 116568de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116568e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116568e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116568e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116568e9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116568eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116568ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116568f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116568f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116568f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116568f8:;
  /* 116568f8 pop esi */
  ESI = (pop32());
  /* 116568f9 mov esp, ebp */
  ESP = (EBP);
  /* 116568fb pop ebp */
  EBP = (pop32());
  /* 116568fc ret  */
  ESPCHK(0x11656390u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x116569b0 (72 bytes, 30 insns) */
void f_116569b0(void) {
  FTRACE(0x116569b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116569b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116569b1 mov ebp, esp */
  EBP = (ESP);
L_116569b3:;
  /* 116569b3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116569b6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116569b9 je 0x116569f6 */
  if (C.zf) goto L_116569f6;
  /* 116569bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116569be movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116569c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116569c3 je 0x116569f6 */
  if (C.zf) goto L_116569f6;
  /* 116569c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116569c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116569ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116569cd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116569cf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116569d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116569d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116569d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116569d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116569dc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116569de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116569e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116569e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116569e7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116569ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116569ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116569ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116569f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116569f4 jmp 0x116569b3 */
  goto L_116569b3;
L_116569f6:;
  /* 116569f6 pop ebp */
  EBP = (pop32());
  /* 116569f7 ret  */
  ESPCHK(0x116569b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a00 @ 0x11656a00 (173 bytes, 64 insns) */
void f_11656a00(void) {
  FTRACE(0x11656a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11656a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11656a01 mov ebp, esp */
  EBP = (ESP);
  /* 11656a03 push ecx */
  push32((uint32_t)(ECX));
  /* 11656a04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11656a0b cmp dword ptr [0x11676320], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656a12 je 0x11656a2a */
  if (C.zf) goto L_11656a2a;
  /* 11656a14 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656a17 push eax */
  push32((uint32_t)(EAX));
  /* 11656a18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656a1b push ecx */
  push32((uint32_t)(ECX));
  /* 11656a1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656a1f push edx */
  push32((uint32_t)(EDX));
  /* 11656a20 call 0x11656ab0 */
  push32(0x11656a25u); f_11656ab0();
  /* 11656a25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656a28 jmp 0x11656aa9 */
  goto L_11656aa9;
L_11656a2a:;
  /* 11656a2a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656a2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656a30 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656a32 jae 0x11656aa0 */
  if (!C.cf) goto L_11656aa0;
  /* 11656a34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656a37 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656a3a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11656a3d jmp 0x11656a48 */
  goto L_11656a48;
L_11656a3f:;
  /* 11656a3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656a42 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656a45 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11656a48:;
  /* 11656a48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656a4b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656a4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11656a50 je 0x11656a84 */
  if (C.zf) goto L_11656a84;
  /* 11656a52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656a55 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11656a56 mov ecx, 0xa */
  ECX = (0xau);
  /* 11656a5b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11656a5d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656a60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656a63 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656a65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656a68 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11656a6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656a6e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11656a6f mov ecx, 0xa */
  ECX = (0xau);
  /* 11656a74 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11656a76 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11656a79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656a7c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656a7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11656a82 jmp 0x11656a3f */
  goto L_11656a3f;
L_11656a84:;
  /* 11656a84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656a87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656a89 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656a8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656a8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11656a91 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656a94 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656a96 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656a99 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656a9c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11656a9e jmp 0x11656aa9 */
  goto L_11656aa9;
L_11656aa0:;
  /* 11656aa0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656aa3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11656aa9:;
  /* 11656aa9 mov esp, ebp */
  ESP = (EBP);
  /* 11656aab pop ebp */
  EBP = (pop32());
  /* 11656aac ret  */
  ESPCHK(0x11656a00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11656ab0 (172 bytes, 65 insns) */
void f_11656ab0(void) {
  FTRACE(0x11656ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11656ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11656ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11656ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656ab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656ab9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656abb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11656abe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656ac1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656ac4 jbe 0x11656b0b */
  if ((C.cf||C.zf)) goto L_11656b0b;
L_11656ac6:;
  /* 11656ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656ac9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11656aca mov ecx, 0xa */
  ECX = (0xau);
  /* 11656acf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11656ad1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656ad7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11656ad9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656adc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656adf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11656ae2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656ae5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11656ae7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656aea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656aed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11656aef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656af2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11656af3 mov ecx, 0xa */
  ECX = (0xau);
  /* 11656af8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11656afa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11656afd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656b01 jle 0x11656b0b */
  if ((C.zf||C.sf!=C.of)) goto L_11656b0b;
  /* 11656b03 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656b06 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656b09 ja 0x11656ac6 */
  if ((!C.cf&&!C.zf)) goto L_11656ac6;
L_11656b0b:;
  /* 11656b0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656b0e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656b10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11656b13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656b16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656b19 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11656b1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656b1e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656b21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11656b24:;
  /* 11656b24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656b27 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11656b29 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11656b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656b2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11656b32 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11656b34 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11656b36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656b39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656b3c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11656b3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11656b42 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11656b45 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11656b47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11656b4a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656b4d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11656b50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11656b53 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656b56 jb 0x11656b24 */
  if (C.cf) goto L_11656b24;
  /* 11656b58 mov esp, ebp */
  ESP = (EBP);
  /* 11656b5a pop ebp */
  EBP = (pop32());
  /* 11656b5b ret  */
  ESPCHK(0x11656ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b60 @ 0x11656b60 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11656b60(void) {
  FTRACE(0x11656b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11656b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11656b61 mov ebp, esp */
  EBP = (ESP);
  /* 11656b63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11656b66:;
  /* 11656b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656b69 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11656b6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11656b6e je 0x11656fdc */
  if (C.zf) goto L_11656fdc;
  /* 11656b74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656b77 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656b7a je 0x11656fdc */
  if (C.zf) goto L_11656fdc;
  /* 11656b80 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11656b84 mov dword ptr [0x11676320], 0 */
  w32((uint32_t)(0x11676320), (0x0u));
  /* 11656b8e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11656b95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656b98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11656b9b jmp 0x11656ba6 */
  goto L_11656ba6;
L_11656b9d:;
  /* 11656b9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656ba0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656ba3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11656ba6:;
  /* 11656ba6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656ba9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11656bac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656baf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11656bb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656bb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656bb8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11656bbb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656bbd jne 0x11656bc1 */
  if (!C.zf) goto L_11656bc1;
  /* 11656bbf jmp 0x11656b9d */
  goto L_11656b9d;
L_11656bc1:;
  /* 11656bc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656bc4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656bc7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11656bca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656bcd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11656bd0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11656bd3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656bd6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656bd9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11656bdc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656be0 ja 0x11656f30 */
  if ((!C.cf&&!C.zf)) goto L_11656f30;
  /* 11656be6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11656be9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11656beb mov al, byte ptr [ecx + 0x1165700c] */
  AL = (r8((uint32_t)(ECX + 0x1165700c)));
  /* 11656bf1 jmp dword ptr [eax*4 + 0x11656fe0] */
  switch (EAX) {
    case 0: goto L_11656e4f;
    case 1: goto L_11656d33;
    case 2: goto L_11656cbe;
    case 3: goto L_11656bf8;
    case 4: goto L_11656c36;
    case 5: goto L_11656c97;
    case 6: goto L_11656ce5;
    case 7: goto L_11656d0c;
    case 8: goto L_11656d7a;
    case 9: goto L_11656c74;
    case 10: goto L_11656f30;
    default: x86_unimpl("switch@0x11656bf1 out of table"); return;
  }
L_11656bf8:;
  /* 11656bf8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656bfb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11656bfe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11656c01 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656c04 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11656c07 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656c0b ja 0x11656c31 */
  if ((!C.cf&&!C.zf)) goto L_11656c31;
  /* 11656c0d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11656c10 jmp dword ptr [ecx*4 + 0x1165705f] */
  switch (ECX) {
    case 0: goto L_11656c17;
    case 1: goto L_11656c21;
    case 2: goto L_11656c27;
    case 3: goto L_11656c2d;
    case 4: goto L_11656c55;
    case 5: goto L_11656c5f;
    case 6: goto L_11656c65;
    case 7: goto L_11656c6b;
    default: x86_unimpl("switch@0x11656c10 out of table"); return;
  }
L_11656c17:;
  /* 11656c17 mov dword ptr [0x11676320], 1 */
  w32((uint32_t)(0x11676320), (0x1u));
L_11656c21:;
  /* 11656c21 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11656c25 jmp 0x11656c31 */
  goto L_11656c31;
L_11656c27:;
  /* 11656c27 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11656c2b jmp 0x11656c31 */
  goto L_11656c31;
L_11656c2d:;
  /* 11656c2d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11656c31:;
  /* 11656c31 jmp 0x11656f30 */
  goto L_11656f30;
L_11656c36:;
  /* 11656c36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656c39 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11656c3c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11656c3f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656c42 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11656c45 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656c49 ja 0x11656c6f */
  if ((!C.cf&&!C.zf)) goto L_11656c6f;
  /* 11656c4b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11656c4e jmp dword ptr [ecx*4 + 0x1165706f] */
  switch (ECX) {
    case 0: goto L_11656c55;
    case 1: goto L_11656c5f;
    case 2: goto L_11656c65;
    case 3: goto L_11656c6b;
    default: x86_unimpl("switch@0x11656c4e out of table"); return;
  }
L_11656c55:;
  /* 11656c55 mov dword ptr [0x11676320], 1 */
  w32((uint32_t)(0x11676320), (0x1u));
L_11656c5f:;
  /* 11656c5f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11656c63 jmp 0x11656c6f */
  goto L_11656c6f;
L_11656c65:;
  /* 11656c65 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11656c69 jmp 0x11656c6f */
  goto L_11656c6f;
L_11656c6b:;
  /* 11656c6b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11656c6f:;
  /* 11656c6f jmp 0x11656f30 */
  goto L_11656f30;
L_11656c74:;
  /* 11656c74 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656c77 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11656c7a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656c7e je 0x11656c88 */
  if (C.zf) goto L_11656c88;
  /* 11656c80 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656c84 je 0x11656c8e */
  if (C.zf) goto L_11656c8e;
  /* 11656c86 jmp 0x11656c92 */
  goto L_11656c92;
L_11656c88:;
  /* 11656c88 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11656c8c jmp 0x11656c92 */
  goto L_11656c92;
L_11656c8e:;
  /* 11656c8e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11656c92:;
  /* 11656c92 jmp 0x11656f30 */
  goto L_11656f30;
L_11656c97:;
  /* 11656c97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656c9a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11656c9d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656ca1 je 0x11656cab */
  if (C.zf) goto L_11656cab;
  /* 11656ca3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656ca7 je 0x11656cb5 */
  if (C.zf) goto L_11656cb5;
  /* 11656ca9 jmp 0x11656cb9 */
  goto L_11656cb9;
L_11656cab:;
  /* 11656cab mov dword ptr [0x11676320], 1 */
  w32((uint32_t)(0x11676320), (0x1u));
L_11656cb5:;
  /* 11656cb5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11656cb9:;
  /* 11656cb9 jmp 0x11656f30 */
  goto L_11656f30;
L_11656cbe:;
  /* 11656cbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656cc1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11656cc4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656cc8 je 0x11656cd2 */
  if (C.zf) goto L_11656cd2;
  /* 11656cca cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656cce je 0x11656cdc */
  if (C.zf) goto L_11656cdc;
  /* 11656cd0 jmp 0x11656ce0 */
  goto L_11656ce0;
L_11656cd2:;
  /* 11656cd2 mov dword ptr [0x11676320], 1 */
  w32((uint32_t)(0x11676320), (0x1u));
L_11656cdc:;
  /* 11656cdc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11656ce0:;
  /* 11656ce0 jmp 0x11656f30 */
  goto L_11656f30;
L_11656ce5:;
  /* 11656ce5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656ce8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11656ceb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656cef je 0x11656cf9 */
  if (C.zf) goto L_11656cf9;
  /* 11656cf1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656cf5 je 0x11656d03 */
  if (C.zf) goto L_11656d03;
  /* 11656cf7 jmp 0x11656d07 */
  goto L_11656d07;
L_11656cf9:;
  /* 11656cf9 mov dword ptr [0x11676320], 1 */
  w32((uint32_t)(0x11676320), (0x1u));
L_11656d03:;
  /* 11656d03 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11656d07:;
  /* 11656d07 jmp 0x11656f30 */
  goto L_11656f30;
L_11656d0c:;
  /* 11656d0c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656d0f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11656d12 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656d16 je 0x11656d20 */
  if (C.zf) goto L_11656d20;
  /* 11656d18 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656d1c je 0x11656d2a */
  if (C.zf) goto L_11656d2a;
  /* 11656d1e jmp 0x11656d2e */
  goto L_11656d2e;
L_11656d20:;
  /* 11656d20 mov dword ptr [0x11676320], 1 */
  w32((uint32_t)(0x11676320), (0x1u));
L_11656d2a:;
  /* 11656d2a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11656d2e:;
  /* 11656d2e jmp 0x11656f30 */
  goto L_11656f30;
L_11656d33:;
  /* 11656d33 push 0x116719c8 */
  push32((uint32_t)(0x116719c8u));
  /* 11656d38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656d3b push ecx */
  push32((uint32_t)(ECX));
  /* 11656d3c call 0x11657590 */
  push32(0x11656d41u); f_11657590();
  /* 11656d41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656d44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11656d46 jne 0x11656d53 */
  if (!C.zf) goto L_11656d53;
  /* 11656d48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656d4b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656d4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11656d51 jmp 0x11656d71 */
  goto L_11656d71;
L_11656d53:;
  /* 11656d53 push 0x116719c4 */
  push32((uint32_t)(0x116719c4u));
  /* 11656d58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656d5b push eax */
  push32((uint32_t)(EAX));
  /* 11656d5c call 0x11657590 */
  push32(0x11656d61u); f_11657590();
  /* 11656d61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11656d66 jne 0x11656d71 */
  if (!C.zf) goto L_11656d71;
  /* 11656d68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656d6b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656d6e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11656d71:;
  /* 11656d71 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11656d75 jmp 0x11656f30 */
  goto L_11656f30;
L_11656d7a:;
  /* 11656d7a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656d7d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656d81 jg 0x11656d91 */
  if ((!C.zf&&C.sf==C.of)) goto L_11656d91;
  /* 11656d83 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11656d86 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11656d8c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11656d8f jmp 0x11656d9d */
  goto L_11656d9d;
L_11656d91:;
  /* 11656d91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11656d94 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11656d9a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11656d9d:;
  /* 11656d9d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656da1 jle 0x11656e44 */
  if ((C.zf||C.sf!=C.of)) goto L_11656e44;
  /* 11656da7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656daa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656dad jbe 0x11656e44 */
  if ((C.cf||C.zf)) goto L_11656e44;
  /* 11656db3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11656db6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11656db8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11656dba mov ecx, dword ptr [0x11673c9c] */
  ECX = (r32((uint32_t)(0x11673c9c)));
  /* 11656dc0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11656dc2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11656dc6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11656dcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11656dce je 0x11656e07 */
  if (C.zf) goto L_11656e07;
  /* 11656dd0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656dd3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656dd6 jbe 0x11656e07 */
  if ((C.cf||C.zf)) goto L_11656e07;
  /* 11656dd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656ddb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11656ddd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11656de0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11656de2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11656de4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656de7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11656de9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656dec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656def mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11656df1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11656df4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656df7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11656dfa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656dfd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656dff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656e02 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656e05 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11656e07:;
  /* 11656e07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656e0a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656e0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11656e0f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11656e11 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11656e13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656e16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11656e18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656e1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656e1e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11656e20 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11656e23 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656e26 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11656e29 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656e2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11656e2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656e31 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656e34 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11656e36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656e39 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656e3c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11656e3f jmp 0x11656d9d */
  goto L_11656d9d;
L_11656e44:;
  /* 11656e44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656e47 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11656e4a jmp 0x11656b66 */
  goto L_11656b66;
L_11656e4f:;
  /* 11656e4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11656e52 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11656e55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11656e57 je 0x11656f22 */
  if (C.zf) goto L_11656f22;
  /* 11656e5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656e60 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656e63 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11656e66:;
  /* 11656e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656e69 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11656e6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11656e6e je 0x11656f20 */
  if (C.zf) goto L_11656f20;
  /* 11656e74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656e77 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656e7a je 0x11656f20 */
  if (C.zf) goto L_11656f20;
  /* 11656e80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656e83 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11656e86 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656e89 jne 0x11656e99 */
  if (!C.zf) goto L_11656e99;
  /* 11656e8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656e8e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656e91 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11656e94 jmp 0x11656f20 */
  goto L_11656f20;
L_11656e99:;
  /* 11656e99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656e9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11656e9e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11656ea0 mov edx, dword ptr [0x11673c9c] */
  EDX = (r32((uint32_t)(0x11673c9c)));
  /* 11656ea6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11656ea8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11656eac and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11656eb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11656eb3 je 0x11656eec */
  if (C.zf) goto L_11656eec;
  /* 11656eb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656eb8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11656ebb jbe 0x11656eec */
  if ((C.cf||C.zf)) goto L_11656eec;
  /* 11656ebd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656ec0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11656ec2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656ec5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11656ec7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11656ec9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656ecc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656ece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656ed1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656ed4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11656ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656edc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11656edf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656ee2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11656ee4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656ee7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656eea mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11656eec:;
  /* 11656eec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656eef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11656ef1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656ef4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11656ef6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11656ef8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656efb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11656efd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656f00 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656f03 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11656f05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656f08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656f0b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11656f0e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656f11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656f13 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656f16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656f19 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11656f1b jmp 0x11656e66 */
  goto L_11656e66;
L_11656f20:;
  /* 11656f20 jmp 0x11656f2b */
  goto L_11656f2b;
L_11656f22:;
  /* 11656f22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656f25 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656f28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11656f2b:;
  /* 11656f2b jmp 0x11656b66 */
  goto L_11656b66;
L_11656f30:;
  /* 11656f30 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11656f34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11656f36 je 0x11656f5c */
  if (C.zf) goto L_11656f5c;
  /* 11656f38 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11656f3b push edx */
  push32((uint32_t)(EDX));
  /* 11656f3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656f3f push eax */
  push32((uint32_t)(EAX));
  /* 11656f40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656f43 push ecx */
  push32((uint32_t)(ECX));
  /* 11656f44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11656f47 push edx */
  push32((uint32_t)(EDX));
  /* 11656f48 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11656f4b push eax */
  push32((uint32_t)(EAX));
  /* 11656f4c call 0x11656390 */
  push32(0x11656f51u); f_11656390();
  /* 11656f51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11656f54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11656f57 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11656f5a jmp 0x11656fd7 */
  goto L_11656fd7;
L_11656f5c:;
  /* 11656f5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656f5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11656f61 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11656f63 mov ecx, dword ptr [0x11673c9c] */
  ECX = (r32((uint32_t)(0x11673c9c)));
  /* 11656f69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11656f6b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11656f6f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11656f75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11656f77 je 0x11656fa8 */
  if (C.zf) goto L_11656fa8;
  /* 11656f79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656f7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656f7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656f81 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11656f83 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11656f85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656f88 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11656f8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656f8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656f90 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11656f92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656f95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656f98 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11656f9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656f9e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11656fa0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656fa3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656fa6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11656fa8:;
  /* 11656fa8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656fab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11656fad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656fb0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11656fb2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11656fb4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656fb7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11656fb9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656fbc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11656fbf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11656fc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11656fc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11656fc7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11656fca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656fcd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11656fcf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11656fd2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11656fd5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11656fd7:;
  /* 11656fd7 jmp 0x11656b66 */
  goto L_11656b66;
L_11656fdc:;
  /* 11656fdc mov esp, ebp */
  ESP = (EBP);
  /* 11656fde pop ebp */
  EBP = (pop32());
  /* 11656fdf ret  */
  ESPCHK(0x11656b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10017080 @ 0x11657080 (650 bytes, 178 insns) */
void f_11657080(void) {
  FTRACE(0x11657080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657080 push ebp */
  push32((uint32_t)(EBP));
  /* 11657081 mov ebp, esp */
  EBP = (ESP);
  /* 11657083 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11657089 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165708d jne 0x116571e9 */
  if (!C.zf) goto L_116571e9;
  /* 11657093 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11657096 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1165709c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 116570a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116570a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116570ac mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 116570b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116570b8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 116570be push edx */
  push32((uint32_t)(EDX));
  /* 116570bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116570c2 push eax */
  push32((uint32_t)(EAX));
  /* 116570c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116570c6 push ecx */
  push32((uint32_t)(ECX));
  /* 116570c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116570ca push edx */
  push32((uint32_t)(EDX));
  /* 116570cb call 0x116586d0 */
  push32(0x116570d0u); f_116586d0();
  /* 116570d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116570d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116570d6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116570da jne 0x1165716f */
  if (!C.zf) goto L_1165716f;
  /* 116570e0 call dword ptr [0x11678390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678390))), 0x116570e6u);
  /* 116570e6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116570e9 je 0x116570f0 */
  if (C.zf) goto L_116570f0;
  /* 116570eb jmp 0x116571cd */
  goto L_116571cd;
L_116570f0:;
  /* 116570f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116570f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116570f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116570f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116570f9 push eax */
  push32((uint32_t)(EAX));
  /* 116570fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116570fd push ecx */
  push32((uint32_t)(ECX));
  /* 116570fe call 0x116586d0 */
  push32(0x11657103u); f_116586d0();
  /* 11657103 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657106 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1165710c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657113 jne 0x1165711a */
  if (!C.zf) goto L_1165711a;
  /* 11657115 jmp 0x116571cd */
  goto L_116571cd;
L_1165711a:;
  /* 1165711a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1165711c push 0x116719d0 */
  push32((uint32_t)(0x116719d0u));
  /* 11657121 push 2 */
  push32((uint32_t)(0x2u));
  /* 11657123 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11657129 push edx */
  push32((uint32_t)(EDX));
  /* 1165712a call 0x116468c0 */
  push32(0x1165712fu); f_116468c0();
  /* 1165712f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657132 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11657135 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657139 jne 0x11657140 */
  if (!C.zf) goto L_11657140;
  /* 1165713b jmp 0x116571cd */
  goto L_116571cd;
L_11657140:;
  /* 11657140 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11657147 push 0 */
  push32((uint32_t)(0x0u));
  /* 11657149 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1165714f push eax */
  push32((uint32_t)(EAX));
  /* 11657150 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657153 push ecx */
  push32((uint32_t)(ECX));
  /* 11657154 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11657157 push edx */
  push32((uint32_t)(EDX));
  /* 11657158 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165715b push eax */
  push32((uint32_t)(EAX));
  /* 1165715c call 0x116586d0 */
  push32(0x11657161u); f_116586d0();
  /* 11657161 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657164 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11657167 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165716b jne 0x1165716f */
  if (!C.zf) goto L_1165716f;
  /* 1165716d jmp 0x116571cd */
  goto L_116571cd;
L_1165716f:;
  /* 1165716f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11657171 push 0x116719d0 */
  push32((uint32_t)(0x116719d0u));
  /* 11657176 push 2 */
  push32((uint32_t)(0x2u));
  /* 11657178 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165717b push ecx */
  push32((uint32_t)(ECX));
  /* 1165717c call 0x116468c0 */
  push32(0x11657181u); f_116468c0();
  /* 11657181 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657184 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1165718a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1165718c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11657192 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657195 jne 0x11657199 */
  if (!C.zf) goto L_11657199;
  /* 11657197 jmp 0x116571cd */
  goto L_116571cd;
L_11657199:;
  /* 11657199 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165719c push ecx */
  push32((uint32_t)(ECX));
  /* 1165719d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116571a0 push edx */
  push32((uint32_t)(EDX));
  /* 116571a1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 116571a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116571a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116571aa call 0x1164a0e0 */
  push32(0x116571afu); f_1164a0e0();
  /* 116571af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116571b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116571b6 je 0x116571c6 */
  if (C.zf) goto L_116571c6;
  /* 116571b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 116571ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116571bd push edx */
  push32((uint32_t)(EDX));
  /* 116571be call 0x11647350 */
  push32(0x116571c3u); f_11647350();
  /* 116571c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116571c6:;
  /* 116571c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116571c8 jmp 0x11657306 */
  goto L_11657306;
L_116571cd:;
  /* 116571cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116571d1 je 0x116571e1 */
  if (C.zf) goto L_116571e1;
  /* 116571d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116571d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116571d8 push eax */
  push32((uint32_t)(EAX));
  /* 116571d9 call 0x11647350 */
  push32(0x116571deu); f_11647350();
  /* 116571de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116571e1:;
  /* 116571e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116571e4 jmp 0x11657306 */
  goto L_11657306;
L_116571e9:;
  /* 116571e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116571ed jne 0x11657303 */
  if (!C.zf) goto L_11657303;
  /* 116571f3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 116571fd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11657200 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11657206 push 0 */
  push32((uint32_t)(0x0u));
  /* 11657208 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1165720e push edx */
  push32((uint32_t)(EDX));
  /* 1165720f push 0x11676238 */
  push32((uint32_t)(0x11676238u));
  /* 11657214 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11657217 push eax */
  push32((uint32_t)(EAX));
  /* 11657218 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165721b push ecx */
  push32((uint32_t)(ECX));
  /* 1165721c call 0x11658530 */
  push32(0x11657221u); f_11658530();
  /* 11657221 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657226 jne 0x11657230 */
  if (!C.zf) goto L_11657230;
  /* 11657228 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165722b jmp 0x11657306 */
  goto L_11657306;
L_11657230:;
  /* 11657230 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11657236 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11657239 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11657243 jmp 0x11657254 */
  goto L_11657254;
L_11657245:;
  /* 11657245 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1165724b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165724e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11657254:;
  /* 11657254 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165725b jge 0x116572ff */
  if ((C.sf==C.of)) goto L_116572ff;
  /* 11657261 cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657268 jle 0x1165729b */
  if ((C.zf||C.sf!=C.of)) goto L_1165729b;
  /* 1165726a push 4 */
  push32((uint32_t)(0x4u));
  /* 1165726c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11657272 mov dl, byte ptr [ecx*2 + 0x11676238] */
  DL = (r8((uint32_t)(ECX*2 + 0x11676238)));
  /* 11657279 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1165727f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11657285 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165728a push eax */
  push32((uint32_t)(EAX));
  /* 1165728b call 0x1164a680 */
  push32(0x11657290u); f_1164a680();
  /* 11657290 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657293 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11657299 jmp 0x116572ce */
  goto L_116572ce;
L_1165729b:;
  /* 1165729b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116572a1 mov dl, byte ptr [ecx*2 + 0x11676238] */
  DL = (r8((uint32_t)(ECX*2 + 0x11676238)));
  /* 116572a8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 116572ae mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 116572b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116572b9 mov ecx, dword ptr [0x11673c9c] */
  ECX = (r32((uint32_t)(0x11673c9c)));
  /* 116572bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116572c1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116572c5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116572c8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_116572ce:;
  /* 116572ce cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116572d5 je 0x116572f8 */
  if (C.zf) goto L_116572f8;
  /* 116572d7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116572dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116572e0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116572e3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 116572ea lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 116572ee mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116572f4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116572f6 jmp 0x116572fa */
  goto L_116572fa;
L_116572f8:;
  /* 116572f8 jmp 0x116572ff */
  goto L_116572ff;
L_116572fa:;
  /* 116572fa jmp 0x11657245 */
  goto L_11657245;
L_116572ff:;
  /* 116572ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11657301 jmp 0x11657306 */
  goto L_11657306;
L_11657303:;
  /* 11657303 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11657306:;
  /* 11657306 mov esp, ebp */
  ESP = (EBP);
  /* 11657308 pop ebp */
  EBP = (pop32());
  /* 11657309 ret  */
  ESPCHK(0x11657080u, _esp0);
  ESP += 4; return;
}

/* FUN_10017310 @ 0x11657310 (10 bytes, 5 insns) */
void f_11657310(void) {
  FTRACE(0x11657310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657310 push ebp */
  push32((uint32_t)(EBP));
  /* 11657311 mov ebp, esp */
  EBP = (ESP);
  /* 11657313 mov eax, dword ptr [0x11674ef8] */
  EAX = (r32((uint32_t)(0x11674ef8)));
  /* 11657318 pop ebp */
  EBP = (pop32());
  /* 11657319 ret  */
  ESPCHK(0x11657310u, _esp0);
  ESP += 4; return;
}

/* FUN_10017320 @ 0x11657320 (575 bytes, 196 insns) */
void f_11657320(void) {
  FTRACE(0x11657320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657320 push ebp */
  push32((uint32_t)(EBP));
  /* 11657321 mov ebp, esp */
  EBP = (ESP);
  /* 11657323 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11657325 push 0x116719e0 */
  push32((uint32_t)(0x116719e0u));
  /* 1165732a push 0x11652918 */
  push32((uint32_t)(0x11652918u));
  /* 1165732f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11657335 push eax */
  push32((uint32_t)(EAX));
  /* 11657336 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1165733d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657340 push ebx */
  push32((uint32_t)(EBX));
  /* 11657341 push esi */
  push32((uint32_t)(ESI));
  /* 11657342 push edi */
  push32((uint32_t)(EDI));
  /* 11657343 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11657346 cmp dword ptr [0x11676244], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165734d jne 0x1165739e */
  if (!C.zf) goto L_1165739e;
  /* 1165734f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11657352 push eax */
  push32((uint32_t)(EAX));
  /* 11657353 push 1 */
  push32((uint32_t)(0x1u));
  /* 11657355 push 0x1167111c */
  push32((uint32_t)(0x1167111cu));
  /* 1165735a push 1 */
  push32((uint32_t)(0x1u));
  /* 1165735c call dword ptr [0x116782f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782f4))), 0x11657362u);
  /* 11657362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657364 je 0x11657372 */
  if (C.zf) goto L_11657372;
  /* 11657366 mov dword ptr [0x11676244], 1 */
  w32((uint32_t)(0x11676244), (0x1u));
  /* 11657370 jmp 0x1165739e */
  goto L_1165739e;
L_11657372:;
  /* 11657372 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11657375 push ecx */
  push32((uint32_t)(ECX));
  /* 11657376 push 1 */
  push32((uint32_t)(0x1u));
  /* 11657378 push 0x11671118 */
  push32((uint32_t)(0x11671118u));
  /* 1165737d push 1 */
  push32((uint32_t)(0x1u));
  /* 1165737f push 0 */
  push32((uint32_t)(0x0u));
  /* 11657381 call dword ptr [0x11678304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678304))), 0x11657387u);
  /* 11657387 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657389 je 0x11657397 */
  if (C.zf) goto L_11657397;
  /* 1165738b mov dword ptr [0x11676244], 2 */
  w32((uint32_t)(0x11676244), (0x2u));
  /* 11657395 jmp 0x1165739e */
  goto L_1165739e;
L_11657397:;
  /* 11657397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11657399 jmp 0x11657579 */
  goto L_11657579;
L_1165739e:;
  /* 1165739e cmp dword ptr [0x11676244], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11676244))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116573a5 jne 0x116573c2 */
  if (!C.zf) goto L_116573c2;
  /* 116573a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116573aa push edx */
  push32((uint32_t)(EDX));
  /* 116573ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116573ae push eax */
  push32((uint32_t)(EAX));
  /* 116573af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116573b2 push ecx */
  push32((uint32_t)(ECX));
  /* 116573b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116573b6 push edx */
  push32((uint32_t)(EDX));
  /* 116573b7 call dword ptr [0x116782f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782f4))), 0x116573bdu);
  /* 116573bd jmp 0x11657579 */
  goto L_11657579;
L_116573c2:;
  /* 116573c2 cmp dword ptr [0x11676244], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11676244))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116573c9 jne 0x11657577 */
  if (!C.zf) goto L_11657577;
  /* 116573cf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116573d3 jne 0x116573dd */
  if (!C.zf) goto L_116573dd;
  /* 116573d5 mov eax, dword ptr [0x116761c4] */
  EAX = (r32((uint32_t)(0x116761c4)));
  /* 116573da mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_116573dd:;
  /* 116573dd push 0 */
  push32((uint32_t)(0x0u));
  /* 116573df push 0 */
  push32((uint32_t)(0x0u));
  /* 116573e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116573e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116573e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116573e8 push ecx */
  push32((uint32_t)(ECX));
  /* 116573e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116573ec push edx */
  push32((uint32_t)(EDX));
  /* 116573ed push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116573f2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116573f5 push eax */
  push32((uint32_t)(EAX));
  /* 116573f6 call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x116573fcu);
  /* 116573fc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116573ff cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657403 jne 0x1165740c */
  if (!C.zf) goto L_1165740c;
  /* 11657405 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11657407 jmp 0x11657579 */
  goto L_11657579;
L_1165740c:;
  /* 1165740c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11657413 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11657416 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657419 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1165741b call 0x11649a60 */
  push32(0x11657420u); f_11649a60();
  /* 11657420 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11657423 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11657426 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11657429 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1165742c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1165742f push edx */
  push32((uint32_t)(EDX));
  /* 11657430 push 0 */
  push32((uint32_t)(0x0u));
  /* 11657432 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11657435 push eax */
  push32((uint32_t)(EAX));
  /* 11657436 call 0x1164b3f0 */
  push32(0x1165743bu); f_1164b3f0();
  /* 1165743b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165743e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11657445 jmp 0x1165745e */
  goto L_1165745e;
  /* 11657447 mov eax, 1 */
  EAX = (0x1u);
  /* 1165744c ret  */
  ESPCHK(0x11657320u, _esp0);
  ESP += 4; return;
  /* 1165744d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11657450 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11657457 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1165745e:;
  /* 1165745e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657462 jne 0x1165746b */
  if (!C.zf) goto L_1165746b;
  /* 11657464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11657466 jmp 0x11657579 */
  goto L_11657579;
L_1165746b:;
  /* 1165746b push 0 */
  push32((uint32_t)(0x0u));
  /* 1165746d push 0 */
  push32((uint32_t)(0x0u));
  /* 1165746f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11657472 push ecx */
  push32((uint32_t)(ECX));
  /* 11657473 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11657476 push edx */
  push32((uint32_t)(EDX));
  /* 11657477 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165747a push eax */
  push32((uint32_t)(EAX));
  /* 1165747b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165747e push ecx */
  push32((uint32_t)(ECX));
  /* 1165747f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11657484 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11657487 push edx */
  push32((uint32_t)(EDX));
  /* 11657488 call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x1165748eu);
  /* 1165748e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657490 jne 0x11657499 */
  if (!C.zf) goto L_11657499;
  /* 11657492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11657494 jmp 0x11657579 */
  goto L_11657579;
L_11657499:;
  /* 11657499 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116574a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116574a3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 116574a7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116574aa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116574ac call 0x11649a60 */
  push32(0x116574b1u); f_11649a60();
  /* 116574b1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 116574b4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116574b7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116574ba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116574bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116574c4 jmp 0x116574dd */
  goto L_116574dd;
  /* 116574c6 mov eax, 1 */
  EAX = (0x1u);
  /* 116574cb ret  */
  ESPCHK(0x11657320u, _esp0);
  ESP += 4; return;
  /* 116574cc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116574cf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116574d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116574dd:;
  /* 116574dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116574e1 jne 0x116574ea */
  if (!C.zf) goto L_116574ea;
  /* 116574e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116574e5 jmp 0x11657579 */
  goto L_11657579;
L_116574ea:;
  /* 116574ea cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116574ee jne 0x116574f9 */
  if (!C.zf) goto L_116574f9;
  /* 116574f0 mov edx, dword ptr [0x116761b4] */
  EDX = (r32((uint32_t)(0x116761b4)));
  /* 116574f6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_116574f9:;
  /* 116574f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116574fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116574ff mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11657505 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11657508 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1165750b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11657512 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11657515 push ecx */
  push32((uint32_t)(ECX));
  /* 11657516 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11657519 push edx */
  push32((uint32_t)(EDX));
  /* 1165751a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1165751d push eax */
  push32((uint32_t)(EAX));
  /* 1165751e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657521 push ecx */
  push32((uint32_t)(ECX));
  /* 11657522 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11657525 push edx */
  push32((uint32_t)(EDX));
  /* 11657526 call dword ptr [0x11678304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678304))), 0x1165752cu);
  /* 1165752c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1165752f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11657532 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11657535 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11657537 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1165753c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657542 je 0x11657558 */
  if (C.zf) goto L_11657558;
  /* 11657544 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11657547 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1165754a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1165754c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11657550 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657556 je 0x1165755c */
  if (C.zf) goto L_1165755c;
L_11657558:;
  /* 11657558 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165755a jmp 0x11657579 */
  goto L_11657579;
L_1165755c:;
  /* 1165755c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165755f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11657561 push eax */
  push32((uint32_t)(EAX));
  /* 11657562 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11657565 push ecx */
  push32((uint32_t)(ECX));
  /* 11657566 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11657569 push edx */
  push32((uint32_t)(EDX));
  /* 1165756a call 0x1164b450 */
  push32(0x1165756fu); f_1164b450();
  /* 1165756f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657572 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11657575 jmp 0x11657579 */
  goto L_11657579;
L_11657577:;
  /* 11657577 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11657579:;
  /* 11657579 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1165757c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1165757f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11657586 pop edi */
  EDI = (pop32());
  /* 11657587 pop esi */
  ESI = (pop32());
  /* 11657588 pop ebx */
  EBX = (pop32());
  /* 11657589 mov esp, ebp */
  ESP = (EBP);
  /* 1165758b pop ebp */
  EBP = (pop32());
  /* 1165758c ret  */
  ESPCHK(0x11657320u, _esp0);
  ESP += 4; return;
}

/* FUN_10017590 @ 0x11657590 (208 bytes, 85 insns) */
void f_11657590(void) {
  FTRACE(0x11657590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657590 push ebp */
  push32((uint32_t)(EBP));
  /* 11657591 mov ebp, esp */
  EBP = (ESP);
  /* 11657593 push edi */
  push32((uint32_t)(EDI));
  /* 11657594 push esi */
  push32((uint32_t)(ESI));
  /* 11657595 push ebx */
  push32((uint32_t)(EBX));
  /* 11657596 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11657599 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1165759c lea eax, [0x116761ac] */
  EAX = ((uint32_t)(0x116761ac));
  /* 116575a2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116575a6 jne 0x116575e3 */
  if (!C.zf) goto L_116575e3;
  /* 116575a8 mov al, 0xff */
  AL = (0xffu);
  /* 116575aa mov edi, edi */
  EDI = (EDI);
L_116575ac:;
  /* 116575ac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116575ae je 0x116575de */
  if (C.zf) goto L_116575de;
  /* 116575b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116575b2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116575b3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 116575b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116575b6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116575b8 je 0x116575ac */
  if (C.zf) goto L_116575ac;
  /* 116575ba sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116575bc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116575be sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116575c0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116575c3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116575c5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116575c7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 116575c9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116575cb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116575cd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116575cf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116575d2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116575d4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116575d6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116575d8 je 0x116575ac */
  if (C.zf) goto L_116575ac;
  /* 116575da sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116575dc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_116575de:;
  /* 116575de movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 116575e1 jmp 0x1165765b */
  goto L_1165765b;
L_116575e3:;
  /* 116575e3 lock inc dword ptr [0x11677694] */
  x86_unimpl("lock inc @ 0x116575e3");
  /* 116575ea cmp dword ptr [0x11677684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116575f1 jg 0x116575f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_116575f7;
  /* 116575f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116575f5 jmp 0x1165760c */
  goto L_1165760c;
L_116575f7:;
  /* 116575f7 lock dec dword ptr [0x11677694] */
  x86_unimpl("lock dec @ 0x116575f7");
  /* 116575fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11657600 call 0x1164b880 */
  push32(0x11657605u); f_1164b880();
  /* 11657605 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1165760c:;
  /* 1165760c mov eax, 0xff */
  EAX = (0xffu);
  /* 11657611 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11657613 nop  */
  /* nop */
L_11657614:;
  /* 11657614 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11657616 je 0x1165763f */
  if (C.zf) goto L_1165763f;
  /* 11657618 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1165761a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1165761b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1165761d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1165761e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11657620 je 0x11657614 */
  if (C.zf) goto L_11657614;
  /* 11657622 push eax */
  push32((uint32_t)(EAX));
  /* 11657623 push ebx */
  push32((uint32_t)(EBX));
  /* 11657624 call 0x1164a7f0 */
  push32(0x11657629u); f_1164a7f0();
  /* 11657629 mov ebx, eax */
  EBX = (EAX);
  /* 1165762b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165762e call 0x1164a7f0 */
  push32(0x11657633u); f_1164a7f0();
  /* 11657633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657636 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11657638 je 0x11657614 */
  if (C.zf) goto L_11657614;
  /* 1165763a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165763c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1165763f:;
  /* 1165763f mov ebx, eax */
  EBX = (EAX);
  /* 11657641 pop eax */
  EAX = (pop32());
  /* 11657642 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11657644 jne 0x1165764f */
  if (!C.zf) goto L_1165764f;
  /* 11657646 lock dec dword ptr [0x11677694] */
  x86_unimpl("lock dec @ 0x11657646");
  /* 1165764d jmp 0x11657659 */
  goto L_11657659;
L_1165764f:;
  /* 1165764f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11657651 call 0x1164b920 */
  push32(0x11657656u); f_1164b920();
  /* 11657656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11657659:;
  /* 11657659 mov eax, ebx */
  EAX = (EBX);
L_1165765b:;
  /* 1165765b pop ebx */
  EBX = (pop32());
  /* 1165765c pop esi */
  ESI = (pop32());
  /* 1165765d pop edi */
  EDI = (pop32());
  /* 1165765e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1165765f ret  */
  ESPCHK(0x11657590u, _esp0);
  ESP += 4; return;
}

/* FUN_10017660 @ 0x11657660 (257 bytes, 103 insns) */
void f_11657660(void) {
  FTRACE(0x11657660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657660 push ebp */
  push32((uint32_t)(EBP));
  /* 11657661 mov ebp, esp */
  EBP = (ESP);
  /* 11657663 push edi */
  push32((uint32_t)(EDI));
  /* 11657664 push esi */
  push32((uint32_t)(ESI));
  /* 11657665 push ebx */
  push32((uint32_t)(EBX));
  /* 11657666 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11657669 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1165766b je 0x1165775a */
  if (C.zf) goto L_1165775a;
  /* 11657671 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11657674 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11657677 lea eax, [0x116761ac] */
  EAX = ((uint32_t)(0x116761ac));
  /* 1165767d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657681 jne 0x116576d1 */
  if (!C.zf) goto L_116576d1;
  /* 11657683 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11657685 mov bl, 0x5a */
  BL = (0x5au);
  /* 11657687 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11657689 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1165768c:;
  /* 1165768c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1165768e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11657690 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11657692 je 0x116576b5 */
  if (C.zf) goto L_116576b5;
  /* 11657694 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11657696 je 0x116576b5 */
  if (C.zf) goto L_116576b5;
  /* 11657698 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11657699 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1165769a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1165769c jb 0x116576a4 */
  if (C.cf) goto L_116576a4;
  /* 1165769e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116576a0 ja 0x116576a4 */
  if ((!C.cf&&!C.zf)) goto L_116576a4;
  /* 116576a2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_116576a4:;
  /* 116576a4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116576a6 jb 0x116576ae */
  if (C.cf) goto L_116576ae;
  /* 116576a8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116576aa ja 0x116576ae */
  if ((!C.cf&&!C.zf)) goto L_116576ae;
  /* 116576ac add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_116576ae:;
  /* 116576ae cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116576b0 jne 0x116576bf */
  if (!C.zf) goto L_116576bf;
  /* 116576b2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116576b3 jne 0x1165768c */
  if (!C.zf) goto L_1165768c;
L_116576b5:;
  /* 116576b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116576b7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116576b9 je 0x1165775a */
  if (C.zf) goto L_1165775a;
L_116576bf:;
  /* 116576bf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 116576c4 jb 0x1165775a */
  if (C.cf) goto L_1165775a;
  /* 116576ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116576cc jmp 0x1165775a */
  goto L_1165775a;
L_116576d1:;
  /* 116576d1 lock inc dword ptr [0x11677694] */
  x86_unimpl("lock inc @ 0x116576d1");
  /* 116576d8 cmp dword ptr [0x11677684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116576df jg 0x116576e5 */
  if ((!C.zf&&C.sf==C.of)) goto L_116576e5;
  /* 116576e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116576e3 jmp 0x116576fe */
  goto L_116576fe;
L_116576e5:;
  /* 116576e5 lock dec dword ptr [0x11677694] */
  x86_unimpl("lock dec @ 0x116576e5");
  /* 116576ec mov ebx, ecx */
  EBX = (ECX);
  /* 116576ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116576f0 call 0x1164b880 */
  push32(0x116576f5u); f_1164b880();
  /* 116576f5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 116576fc mov ecx, ebx */
  ECX = (EBX);
L_116576fe:;
  /* 116576fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11657700 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11657702 mov edi, edi */
  EDI = (EDI);
L_11657704:;
  /* 11657704 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11657706 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11657708 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1165770a je 0x1165772f */
  if (C.zf) goto L_1165772f;
  /* 1165770c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1165770e je 0x1165772f */
  if (C.zf) goto L_1165772f;
  /* 11657710 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11657711 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11657712 push ecx */
  push32((uint32_t)(ECX));
  /* 11657713 push eax */
  push32((uint32_t)(EAX));
  /* 11657714 push ebx */
  push32((uint32_t)(EBX));
  /* 11657715 call 0x1164a7f0 */
  push32(0x1165771au); f_1164a7f0();
  /* 1165771a mov ebx, eax */
  EBX = (EAX);
  /* 1165771c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165771f call 0x1164a7f0 */
  push32(0x11657724u); f_1164a7f0();
  /* 11657724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657727 pop ecx */
  ECX = (pop32());
  /* 11657728 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165772a jne 0x11657735 */
  if (!C.zf) goto L_11657735;
  /* 1165772c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1165772d jne 0x11657704 */
  if (!C.zf) goto L_11657704;
L_1165772f:;
  /* 1165772f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11657731 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657733 je 0x1165773e */
  if (C.zf) goto L_1165773e;
L_11657735:;
  /* 11657735 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1165773a jb 0x1165773e */
  if (C.cf) goto L_1165773e;
  /* 1165773c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1165773e:;
  /* 1165773e pop eax */
  EAX = (pop32());
  /* 1165773f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11657741 jne 0x1165774c */
  if (!C.zf) goto L_1165774c;
  /* 11657743 lock dec dword ptr [0x11677694] */
  x86_unimpl("lock dec @ 0x11657743");
  /* 1165774a jmp 0x1165775a */
  goto L_1165775a;
L_1165774c:;
  /* 1165774c mov ebx, ecx */
  EBX = (ECX);
  /* 1165774e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11657750 call 0x1164b920 */
  push32(0x11657755u); f_1164b920();
  /* 11657755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657758 mov ecx, ebx */
  ECX = (EBX);
L_1165775a:;
  /* 1165775a mov eax, ecx */
  EAX = (ECX);
  /* 1165775c pop ebx */
  EBX = (pop32());
  /* 1165775d pop esi */
  ESI = (pop32());
  /* 1165775e pop edi */
  EDI = (pop32());
  /* 1165775f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11657760 ret  */
  ESPCHK(0x11657660u, _esp0);
  ESP += 4; return;
}

/* FUN_10017770 @ 0x11657770 (255 bytes, 88 insns) */
void f_11657770(void) {
  FTRACE(0x11657770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657770 push ebp */
  push32((uint32_t)(EBP));
  /* 11657771 mov ebp, esp */
  EBP = (ESP);
  /* 11657773 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11657776:;
  /* 11657776 cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165777d jle 0x11657796 */
  if ((C.zf||C.sf!=C.of)) goto L_11657796;
  /* 1165777f push 8 */
  push32((uint32_t)(0x8u));
  /* 11657781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657784 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11657786 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11657788 push ecx */
  push32((uint32_t)(ECX));
  /* 11657789 call 0x1164a680 */
  push32(0x1165778eu); f_1164a680();
  /* 1165778e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657791 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11657794 jmp 0x116577af */
  goto L_116577af;
L_11657796:;
  /* 11657796 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657799 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165779b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1165779d mov ecx, dword ptr [0x11673c9c] */
  ECX = (r32((uint32_t)(0x11673c9c)));
  /* 116577a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116577a5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116577a9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116577ac mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116577af:;
  /* 116577af cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116577b3 je 0x116577c0 */
  if (C.zf) goto L_116577c0;
  /* 116577b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116577b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116577bb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116577be jmp 0x11657776 */
  goto L_11657776;
L_116577c0:;
  /* 116577c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116577c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116577c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116577c7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116577ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116577cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116577d0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116577d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116577d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116577d9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116577dd je 0x116577e5 */
  if (C.zf) goto L_116577e5;
  /* 116577df cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116577e3 jne 0x116577f8 */
  if (!C.zf) goto L_116577f8;
L_116577e5:;
  /* 116577e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116577e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116577ea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116577ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116577ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116577f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116577f5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116577f8:;
  /* 116577f8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116577ff:;
  /* 116577ff cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657806 jle 0x1165781b */
  if ((C.zf||C.sf!=C.of)) goto L_1165781b;
  /* 11657808 push 4 */
  push32((uint32_t)(0x4u));
  /* 1165780a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165780d push edx */
  push32((uint32_t)(EDX));
  /* 1165780e call 0x1164a680 */
  push32(0x11657813u); f_1164a680();
  /* 11657813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657816 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11657819 jmp 0x11657830 */
  goto L_11657830;
L_1165781b:;
  /* 1165781b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165781e mov ecx, dword ptr [0x11673c9c] */
  ECX = (r32((uint32_t)(0x11673c9c)));
  /* 11657824 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11657826 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1165782a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1165782d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11657830:;
  /* 11657830 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657834 je 0x1165785b */
  if (C.zf) goto L_1165785b;
  /* 11657836 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657839 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1165783c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165783f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11657843 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11657846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657849 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1165784b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1165784d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11657850 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657853 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657856 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11657859 jmp 0x116577ff */
  goto L_116577ff;
L_1165785b:;
  /* 1165785b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165785f jne 0x11657868 */
  if (!C.zf) goto L_11657868;
  /* 11657861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657864 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11657866 jmp 0x1165786b */
  goto L_1165786b;
L_11657868:;
  /* 11657868 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1165786b:;
  /* 1165786b mov esp, ebp */
  ESP = (EBP);
  /* 1165786d pop ebp */
  EBP = (pop32());
  /* 1165786e ret  */
  ESPCHK(0x11657770u, _esp0);
  ESP += 4; return;
}

/* FUN_10017870 @ 0x11657870 (17 bytes, 8 insns) */
void f_11657870(void) {
  FTRACE(0x11657870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657870 push ebp */
  push32((uint32_t)(EBP));
  /* 11657871 mov ebp, esp */
  EBP = (ESP);
  /* 11657873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657876 push eax */
  push32((uint32_t)(EAX));
  /* 11657877 call 0x11657770 */
  push32(0x1165787cu); f_11657770();
  /* 1165787c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165787f pop ebp */
  EBP = (pop32());
  /* 11657880 ret  */
  ESPCHK(0x11657870u, _esp0);
  ESP += 4; return;
}

/* FUN_10017890 @ 0x11657890 (297 bytes, 106 insns) */
void f_11657890(void) {
  FTRACE(0x11657890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657890 push ebp */
  push32((uint32_t)(EBP));
  /* 11657891 mov ebp, esp */
  EBP = (ESP);
  /* 11657893 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11657896 push esi */
  push32((uint32_t)(ESI));
L_11657897:;
  /* 11657897 cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165789e jle 0x116578b7 */
  if ((C.zf||C.sf!=C.of)) goto L_116578b7;
  /* 116578a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 116578a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116578a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116578a7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116578a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116578aa call 0x1164a680 */
  push32(0x116578afu); f_1164a680();
  /* 116578af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116578b2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116578b5 jmp 0x116578d0 */
  goto L_116578d0;
L_116578b7:;
  /* 116578b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116578ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116578bc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116578be mov ecx, dword ptr [0x11673c9c] */
  ECX = (r32((uint32_t)(0x11673c9c)));
  /* 116578c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116578c6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116578ca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116578cd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_116578d0:;
  /* 116578d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116578d4 je 0x116578e1 */
  if (C.zf) goto L_116578e1;
  /* 116578d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116578d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116578dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116578df jmp 0x11657897 */
  goto L_11657897;
L_116578e1:;
  /* 116578e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116578e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116578e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116578e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116578eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116578ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116578f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116578f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116578f7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116578fa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116578fe je 0x11657906 */
  if (C.zf) goto L_11657906;
  /* 11657900 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657904 jne 0x11657919 */
  if (!C.zf) goto L_11657919;
L_11657906:;
  /* 11657906 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657909 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165790b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1165790d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11657910 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657913 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657916 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11657919:;
  /* 11657919 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11657920 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11657927:;
  /* 11657927 cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165792e jle 0x11657943 */
  if ((C.zf||C.sf!=C.of)) goto L_11657943;
  /* 11657930 push 4 */
  push32((uint32_t)(0x4u));
  /* 11657932 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11657935 push edx */
  push32((uint32_t)(EDX));
  /* 11657936 call 0x1164a680 */
  push32(0x1165793bu); f_1164a680();
  /* 1165793b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165793e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11657941 jmp 0x11657958 */
  goto L_11657958;
L_11657943:;
  /* 11657943 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11657946 mov ecx, dword ptr [0x11673c9c] */
  ECX = (r32((uint32_t)(0x11673c9c)));
  /* 1165794c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1165794e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11657952 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11657955 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11657958:;
  /* 11657958 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165795c je 0x11657999 */
  if (C.zf) goto L_11657999;
  /* 1165795e push 0 */
  push32((uint32_t)(0x0u));
  /* 11657960 push 0xa */
  push32((uint32_t)(0xau));
  /* 11657962 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657965 push eax */
  push32((uint32_t)(EAX));
  /* 11657966 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657969 push ecx */
  push32((uint32_t)(ECX));
  /* 1165796a call 0x11658880 */
  push32(0x1165796fu); f_11658880();
  /* 1165796f mov ecx, eax */
  ECX = (EAX);
  /* 11657971 mov esi, edx */
  ESI = (EDX);
  /* 11657973 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11657976 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11657979 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1165797a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165797c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1165797e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11657981 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11657984 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11657989 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1165798b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1165798e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657991 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657994 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11657997 jmp 0x11657927 */
  goto L_11657927;
L_11657999:;
  /* 11657999 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165799d jne 0x116579ae */
  if (!C.zf) goto L_116579ae;
  /* 1165799f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116579a2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116579a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116579a7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116579aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116579ac jmp 0x116579b4 */
  goto L_116579b4;
L_116579ae:;
  /* 116579ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116579b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_116579b4:;
  /* 116579b4 pop esi */
  ESI = (pop32());
  /* 116579b5 mov esp, ebp */
  ESP = (EBP);
  /* 116579b7 pop ebp */
  EBP = (pop32());
  /* 116579b8 ret  */
  ESPCHK(0x11657890u, _esp0);
  ESP += 4; return;
}

/* FUN_100179c0 @ 0x116579c0 (130 bytes, 50 insns) */
void f_116579c0(void) {
  FTRACE(0x116579c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116579c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116579c1 mov ebp, esp */
  EBP = (ESP);
  /* 116579c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116579c4 push ebx */
  push32((uint32_t)(EBX));
  /* 116579c5 push esi */
  push32((uint32_t)(ESI));
  /* 116579c6 push edi */
  push32((uint32_t)(EDI));
  /* 116579c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116579ce:;
  /* 116579ce cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116579d2 jne 0x116579f2 */
  if (!C.zf) goto L_116579f2;
  /* 116579d4 push 0x11671a04 */
  push32((uint32_t)(0x11671a04u));
  /* 116579d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116579db push 0x3a */
  push32((uint32_t)(0x3au));
  /* 116579dd push 0x116719f8 */
  push32((uint32_t)(0x116719f8u));
  /* 116579e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116579e4 call 0x11645180 */
  push32(0x116579e9u); f_11645180();
  /* 116579e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116579ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116579ef jne 0x116579f2 */
  if (!C.zf) goto L_116579f2;
  /* 116579f1 int3  */
  x86_unimpl("int3 @ 0x116579f1");
L_116579f2:;
  /* 116579f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116579f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116579f6 jne 0x116579ce */
  if (!C.zf) goto L_116579ce;
  /* 116579f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116579fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116579fe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11657a01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11657a03 je 0x11657a11 */
  if (C.zf) goto L_11657a11;
  /* 11657a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657a08 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11657a0f jmp 0x11657a38 */
  goto L_11657a38;
L_11657a11:;
  /* 11657a11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657a14 push ecx */
  push32((uint32_t)(ECX));
  /* 11657a15 call 0x11652620 */
  push32(0x11657a1au); f_11652620();
  /* 11657a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657a1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657a20 push edx */
  push32((uint32_t)(EDX));
  /* 11657a21 call 0x11657a50 */
  push32(0x11657a26u); f_11657a50();
  /* 11657a26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657a29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11657a2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657a2f push eax */
  push32((uint32_t)(EAX));
  /* 11657a30 call 0x11652690 */
  push32(0x11657a35u); f_11652690();
  /* 11657a35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11657a38:;
  /* 11657a38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11657a3b pop edi */
  EDI = (pop32());
  /* 11657a3c pop esi */
  ESI = (pop32());
  /* 11657a3d pop ebx */
  EBX = (pop32());
  /* 11657a3e mov esp, ebp */
  ESP = (EBP);
  /* 11657a40 pop ebp */
  EBP = (pop32());
  /* 11657a41 ret  */
  ESPCHK(0x116579c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017a50 @ 0x11657a50 (190 bytes, 67 insns) */
void f_11657a50(void) {
  FTRACE(0x11657a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11657a51 mov ebp, esp */
  EBP = (ESP);
  /* 11657a53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11657a56 push ebx */
  push32((uint32_t)(EBX));
  /* 11657a57 push esi */
  push32((uint32_t)(ESI));
  /* 11657a58 push edi */
  push32((uint32_t)(EDI));
  /* 11657a59 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11657a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657a63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11657a66:;
  /* 11657a66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657a6a jne 0x11657a8a */
  if (!C.zf) goto L_11657a8a;
  /* 11657a6c push 0x1167107c */
  push32((uint32_t)(0x1167107cu));
  /* 11657a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11657a73 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11657a75 push 0x116719f8 */
  push32((uint32_t)(0x116719f8u));
  /* 11657a7a push 2 */
  push32((uint32_t)(0x2u));
  /* 11657a7c call 0x11645180 */
  push32(0x11657a81u); f_11645180();
  /* 11657a81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657a84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657a87 jne 0x11657a8a */
  if (!C.zf) goto L_11657a8a;
  /* 11657a89 int3  */
  x86_unimpl("int3 @ 0x11657a89");
L_11657a8a:;
  /* 11657a8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11657a8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11657a8e jne 0x11657a66 */
  if (!C.zf) goto L_11657a66;
  /* 11657a90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657a93 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11657a96 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11657a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657a9d je 0x11657afa */
  if (C.zf) goto L_11657afa;
  /* 11657a9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657aa2 push ecx */
  push32((uint32_t)(ECX));
  /* 11657aa3 call 0x11655a00 */
  push32(0x11657aa8u); f_11655a00();
  /* 11657aa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657aab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11657aae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657ab1 push edx */
  push32((uint32_t)(EDX));
  /* 11657ab2 call 0x116589f0 */
  push32(0x11657ab7u); f_116589f0();
  /* 11657ab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657aba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657abd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11657ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 11657ac1 call 0x116588c0 */
  push32(0x11657ac6u); f_116588c0();
  /* 11657ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657ac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657acb jge 0x11657ad6 */
  if ((C.sf==C.of)) goto L_11657ad6;
  /* 11657acd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11657ad4 jmp 0x11657afa */
  goto L_11657afa;
L_11657ad6:;
  /* 11657ad6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657ad9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657add je 0x11657afa */
  if (C.zf) goto L_11657afa;
  /* 11657adf push 2 */
  push32((uint32_t)(0x2u));
  /* 11657ae1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657ae4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11657ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 11657ae8 call 0x11647350 */
  push32(0x11657aedu); f_11647350();
  /* 11657aed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657af0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657af3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11657afa:;
  /* 11657afa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11657afd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11657b04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11657b07 pop edi */
  EDI = (pop32());
  /* 11657b08 pop esi */
  ESI = (pop32());
  /* 11657b09 pop ebx */
  EBX = (pop32());
  /* 11657b0a mov esp, ebp */
  ESP = (EBP);
  /* 11657b0c pop ebp */
  EBP = (pop32());
  /* 11657b0d ret  */
  ESPCHK(0x11657a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10017b10 @ 0x11657b10 (210 bytes, 63 insns) */
void f_11657b10(void) {
  FTRACE(0x11657b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11657b11 mov ebp, esp */
  EBP = (ESP);
  /* 11657b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11657b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657b17 cmp eax, dword ptr [0x11677abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11677abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657b1d jae 0x11657b41 */
  if (!C.cf) goto L_11657b41;
  /* 11657b1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657b22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11657b25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657b28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11657b2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11657b2e mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 11657b35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11657b3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11657b3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11657b3f jne 0x11657b54 */
  if (!C.zf) goto L_11657b54;
L_11657b41:;
  /* 11657b41 call 0x1164fc30 */
  push32(0x11657b46u); f_1164fc30();
  /* 11657b46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11657b4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11657b4f jmp 0x11657bde */
  goto L_11657bde;
L_11657b54:;
  /* 11657b54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657b57 push edx */
  push32((uint32_t)(EDX));
  /* 11657b58 call 0x116557c0 */
  push32(0x11657b5du); f_116557c0();
  /* 11657b5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657b60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657b63 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11657b66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657b69 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11657b6c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11657b6f mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 11657b76 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11657b7b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11657b7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657b80 je 0x11657bbd */
  if (C.zf) goto L_11657bbd;
  /* 11657b82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657b85 push ecx */
  push32((uint32_t)(ECX));
  /* 11657b86 call 0x11655640 */
  push32(0x11657b8bu); f_11655640();
  /* 11657b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657b8e push eax */
  push32((uint32_t)(EAX));
  /* 11657b8f call dword ptr [0x116782c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782c0))), 0x11657b95u);
  /* 11657b95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657b97 jne 0x11657ba4 */
  if (!C.zf) goto L_11657ba4;
  /* 11657b99 call dword ptr [0x11678390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678390))), 0x11657b9fu);
  /* 11657b9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11657ba2 jmp 0x11657bab */
  goto L_11657bab;
L_11657ba4:;
  /* 11657ba4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11657bab:;
  /* 11657bab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657baf jne 0x11657bb3 */
  if (!C.zf) goto L_11657bb3;
  /* 11657bb1 jmp 0x11657bcf */
  goto L_11657bcf;
L_11657bb3:;
  /* 11657bb3 call 0x1164fc40 */
  push32(0x11657bb8u); f_1164fc40();
  /* 11657bb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11657bbb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11657bbd:;
  /* 11657bbd call 0x1164fc30 */
  push32(0x11657bc2u); f_1164fc30();
  /* 11657bc2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11657bc8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11657bcf:;
  /* 11657bcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11657bd2 push eax */
  push32((uint32_t)(EAX));
  /* 11657bd3 call 0x11655850 */
  push32(0x11657bd8u); f_11655850();
  /* 11657bd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657bdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11657bde:;
  /* 11657bde mov esp, ebp */
  ESP = (EBP);
  /* 11657be0 pop ebp */
  EBP = (pop32());
  /* 11657be1 ret  */
  ESPCHK(0x11657b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017bf0 @ 0x11657bf0 (61 bytes, 18 insns) */
void f_11657bf0(void) {
  FTRACE(0x11657bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11657bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11657bf3 cmp dword ptr [0x11676300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657bfa jne 0x11657c2b */
  if (!C.zf) goto L_11657c2b;
  /* 11657bfc push 0xb */
  push32((uint32_t)(0xbu));
  /* 11657bfe call 0x1164b880 */
  push32(0x11657c03u); f_1164b880();
  /* 11657c03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657c06 cmp dword ptr [0x11676300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657c0d jne 0x11657c21 */
  if (!C.zf) goto L_11657c21;
  /* 11657c0f call 0x11657c50 */
  push32(0x11657c14u); f_11657c50();
  /* 11657c14 mov eax, dword ptr [0x11676300] */
  EAX = (r32((uint32_t)(0x11676300)));
  /* 11657c19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657c1c mov dword ptr [0x11676300], eax */
  w32((uint32_t)(0x11676300), (EAX));
L_11657c21:;
  /* 11657c21 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11657c23 call 0x1164b920 */
  push32(0x11657c28u); f_1164b920();
  /* 11657c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11657c2b:;
  /* 11657c2b pop ebp */
  EBP = (pop32());
  /* 11657c2c ret  */
  ESPCHK(0x11657bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c30 @ 0x11657c30 (30 bytes, 11 insns) */
void f_11657c30(void) {
  FTRACE(0x11657c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11657c31 mov ebp, esp */
  EBP = (ESP);
  /* 11657c33 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11657c35 call 0x1164b880 */
  push32(0x11657c3au); f_1164b880();
  /* 11657c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657c3d call 0x11657c50 */
  push32(0x11657c42u); f_11657c50();
  /* 11657c42 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11657c44 call 0x1164b920 */
  push32(0x11657c49u); f_1164b920();
  /* 11657c49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657c4c pop ebp */
  EBP = (pop32());
  /* 11657c4d ret  */
  ESPCHK(0x11657c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c50 @ 0x11657c50 (939 bytes, 266 insns) */
void f_11657c50(void) {
  FTRACE(0x11657c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11657c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11657c51 mov ebp, esp */
  EBP = (ESP);
  /* 11657c53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11657c56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11657c5d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11657c5f call 0x1164b880 */
  push32(0x11657c64u); f_1164b880();
  /* 11657c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657c67 mov dword ptr [0x11676248], 0 */
  w32((uint32_t)(0x11676248), (0x0u));
  /* 11657c71 mov dword ptr [0x11675260], 0xffffffff */
  w32((uint32_t)(0x11675260), (0xffffffffu));
  /* 11657c7b mov eax, dword ptr [0x11675260] */
  EAX = (r32((uint32_t)(0x11675260)));
  /* 11657c80 mov dword ptr [0x11675250], eax */
  w32((uint32_t)(0x11675250), (EAX));
  /* 11657c85 push 0x11671a5c */
  push32((uint32_t)(0x11671a5cu));
  /* 11657c8a call 0x11658ac0 */
  push32(0x11657c8fu); f_11658ac0();
  /* 11657c8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657c92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11657c95 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657c99 jne 0x11657dd3 */
  if (!C.zf) goto L_11657dd3;
  /* 11657c9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11657ca1 call 0x1164b920 */
  push32(0x11657ca6u); f_1164b920();
  /* 11657ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657ca9 push 0x11676250 */
  push32((uint32_t)(0x11676250u));
  /* 11657cae call dword ptr [0x116782c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782c8))), 0x11657cb4u);
  /* 11657cb4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657cb7 je 0x11657dce */
  if (C.zf) goto L_11657dce;
  /* 11657cbd mov dword ptr [0x11676248], 1 */
  w32((uint32_t)(0x11676248), (0x1u));
  /* 11657cc7 mov ecx, dword ptr [0x11676250] */
  ECX = (r32((uint32_t)(0x11676250)));
  /* 11657ccd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11657cd0 mov dword ptr [0x116751bc], ecx */
  w32((uint32_t)(0x116751bc), (ECX));
  /* 11657cd6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11657cd8 mov dx, word ptr [0x11676296] */
  DX = (r16((uint32_t)(0x11676296)));
  /* 11657cdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11657ce1 je 0x11657cf9 */
  if (C.zf) goto L_11657cf9;
  /* 11657ce3 mov eax, dword ptr [0x116762a4] */
  EAX = (r32((uint32_t)(0x116762a4)));
  /* 11657ce8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11657ceb mov ecx, dword ptr [0x116751bc] */
  ECX = (r32((uint32_t)(0x116751bc)));
  /* 11657cf1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657cf3 mov dword ptr [0x116751bc], ecx */
  w32((uint32_t)(0x116751bc), (ECX));
L_11657cf9:;
  /* 11657cf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11657cfb mov dx, word ptr [0x116762ea] */
  DX = (r16((uint32_t)(0x116762ea)));
  /* 11657d02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11657d04 je 0x11657d2e */
  if (C.zf) goto L_11657d2e;
  /* 11657d06 cmp dword ptr [0x116762f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116762f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657d0d je 0x11657d2e */
  if (C.zf) goto L_11657d2e;
  /* 11657d0f mov dword ptr [0x116751c0], 1 */
  w32((uint32_t)(0x116751c0), (0x1u));
  /* 11657d19 mov eax, dword ptr [0x116762f8] */
  EAX = (r32((uint32_t)(0x116762f8)));
  /* 11657d1e sub eax, dword ptr [0x116762a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116762a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11657d24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11657d27 mov dword ptr [0x116751c4], eax */
  w32((uint32_t)(0x116751c4), (EAX));
  /* 11657d2c jmp 0x11657d42 */
  goto L_11657d42;
L_11657d2e:;
  /* 11657d2e mov dword ptr [0x116751c0], 0 */
  w32((uint32_t)(0x116751c0), (0x0u));
  /* 11657d38 mov dword ptr [0x116751c4], 0 */
  w32((uint32_t)(0x116751c4), (0x0u));
L_11657d42:;
  /* 11657d42 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11657d45 push ecx */
  push32((uint32_t)(ECX));
  /* 11657d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11657d48 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11657d4a mov edx, dword ptr [0x11675248] */
  EDX = (r32((uint32_t)(0x11675248)));
  /* 11657d50 push edx */
  push32((uint32_t)(EDX));
  /* 11657d51 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11657d53 push 0x11676254 */
  push32((uint32_t)(0x11676254u));
  /* 11657d58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11657d5d mov eax, dword ptr [0x116761c4] */
  EAX = (r32((uint32_t)(0x116761c4)));
  /* 11657d62 push eax */
  push32((uint32_t)(EAX));
  /* 11657d63 call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x11657d69u);
  /* 11657d69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657d6b je 0x11657d7f */
  if (C.zf) goto L_11657d7f;
  /* 11657d6d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657d71 jne 0x11657d7f */
  if (!C.zf) goto L_11657d7f;
  /* 11657d73 mov ecx, dword ptr [0x11675248] */
  ECX = (r32((uint32_t)(0x11675248)));
  /* 11657d79 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11657d7d jmp 0x11657d88 */
  goto L_11657d88;
L_11657d7f:;
  /* 11657d7f mov edx, dword ptr [0x11675248] */
  EDX = (r32((uint32_t)(0x11675248)));
  /* 11657d85 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11657d88:;
  /* 11657d88 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11657d8b push eax */
  push32((uint32_t)(EAX));
  /* 11657d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11657d8e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11657d90 mov ecx, dword ptr [0x1167524c] */
  ECX = (r32((uint32_t)(0x1167524c)));
  /* 11657d96 push ecx */
  push32((uint32_t)(ECX));
  /* 11657d97 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11657d99 push 0x116762a8 */
  push32((uint32_t)(0x116762a8u));
  /* 11657d9e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11657da3 mov edx, dword ptr [0x116761c4] */
  EDX = (r32((uint32_t)(0x116761c4)));
  /* 11657da9 push edx */
  push32((uint32_t)(EDX));
  /* 11657daa call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x11657db0u);
  /* 11657db0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657db2 je 0x11657dc5 */
  if (C.zf) goto L_11657dc5;
  /* 11657db4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657db8 jne 0x11657dc5 */
  if (!C.zf) goto L_11657dc5;
  /* 11657dba mov eax, dword ptr [0x1167524c] */
  EAX = (r32((uint32_t)(0x1167524c)));
  /* 11657dbf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11657dc3 jmp 0x11657dce */
  goto L_11657dce;
L_11657dc5:;
  /* 11657dc5 mov ecx, dword ptr [0x1167524c] */
  ECX = (r32((uint32_t)(0x1167524c)));
  /* 11657dcb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11657dce:;
  /* 11657dce jmp 0x11657ff7 */
  goto L_11657ff7;
L_11657dd3:;
  /* 11657dd3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657dd6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11657dd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657ddb je 0x11657dfd */
  if (C.zf) goto L_11657dfd;
  /* 11657ddd cmp dword ptr [0x116762fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116762fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657de4 je 0x11657e0c */
  if (C.zf) goto L_11657e0c;
  /* 11657de6 mov ecx, dword ptr [0x116762fc] */
  ECX = (r32((uint32_t)(0x116762fc)));
  /* 11657dec push ecx */
  push32((uint32_t)(ECX));
  /* 11657ded mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657df0 push edx */
  push32((uint32_t)(EDX));
  /* 11657df1 call 0x11653eb0 */
  push32(0x11657df6u); f_11653eb0();
  /* 11657df6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11657dfb jne 0x11657e0c */
  if (!C.zf) goto L_11657e0c;
L_11657dfd:;
  /* 11657dfd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11657dff call 0x1164b920 */
  push32(0x11657e04u); f_1164b920();
  /* 11657e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657e07 jmp 0x11657ff7 */
  goto L_11657ff7;
L_11657e0c:;
  /* 11657e0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11657e0e mov eax, dword ptr [0x116762fc] */
  EAX = (r32((uint32_t)(0x116762fc)));
  /* 11657e13 push eax */
  push32((uint32_t)(EAX));
  /* 11657e14 call 0x11647350 */
  push32(0x11657e19u); f_11647350();
  /* 11657e19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657e1c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11657e21 push 0x11671a54 */
  push32((uint32_t)(0x11671a54u));
  /* 11657e26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11657e28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657e2b push ecx */
  push32((uint32_t)(ECX));
  /* 11657e2c call 0x116496f0 */
  push32(0x11657e31u); f_116496f0();
  /* 11657e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657e34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657e37 push eax */
  push32((uint32_t)(EAX));
  /* 11657e38 call 0x116468c0 */
  push32(0x11657e3du); f_116468c0();
  /* 11657e3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657e40 mov dword ptr [0x116762fc], eax */
  w32((uint32_t)(0x116762fc), (EAX));
  /* 11657e45 cmp dword ptr [0x116762fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116762fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657e4c jne 0x11657e5d */
  if (!C.zf) goto L_11657e5d;
  /* 11657e4e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11657e50 call 0x1164b920 */
  push32(0x11657e55u); f_1164b920();
  /* 11657e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657e58 jmp 0x11657ff7 */
  goto L_11657ff7;
L_11657e5d:;
  /* 11657e5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657e60 push edx */
  push32((uint32_t)(EDX));
  /* 11657e61 mov eax, dword ptr [0x116762fc] */
  EAX = (r32((uint32_t)(0x116762fc)));
  /* 11657e66 push eax */
  push32((uint32_t)(EAX));
  /* 11657e67 call 0x11649870 */
  push32(0x11657e6cu); f_11649870();
  /* 11657e6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657e6f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11657e71 call 0x1164b920 */
  push32(0x11657e76u); f_1164b920();
  /* 11657e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657e79 push 3 */
  push32((uint32_t)(0x3u));
  /* 11657e7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657e7e push ecx */
  push32((uint32_t)(ECX));
  /* 11657e7f mov edx, dword ptr [0x11675248] */
  EDX = (r32((uint32_t)(0x11675248)));
  /* 11657e85 push edx */
  push32((uint32_t)(EDX));
  /* 11657e86 call 0x1164a0e0 */
  push32(0x11657e8bu); f_1164a0e0();
  /* 11657e8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657e8e mov eax, dword ptr [0x11675248] */
  EAX = (r32((uint32_t)(0x11675248)));
  /* 11657e93 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11657e97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657e9a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657e9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11657ea0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657ea3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11657ea6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657ea9 jne 0x11657ebd */
  if (!C.zf) goto L_11657ebd;
  /* 11657eab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11657eae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657eb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11657eb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657eb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657eba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11657ebd:;
  /* 11657ebd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657ec0 push eax */
  push32((uint32_t)(EAX));
  /* 11657ec1 call 0x11657770 */
  push32(0x11657ec6u); f_11657770();
  /* 11657ec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657ec9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11657ecf mov dword ptr [0x116751bc], eax */
  w32((uint32_t)(0x116751bc), (EAX));
L_11657ed4:;
  /* 11657ed4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657ed7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11657eda cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657edd je 0x11657ef5 */
  if (C.zf) goto L_11657ef5;
  /* 11657edf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657ee2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11657ee5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657ee8 jl 0x11657f00 */
  if ((C.sf!=C.of)) goto L_11657f00;
  /* 11657eea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657eed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11657ef0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657ef3 jg 0x11657f00 */
  if ((!C.zf&&C.sf==C.of)) goto L_11657f00;
L_11657ef5:;
  /* 11657ef5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657ef8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657efb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11657efe jmp 0x11657ed4 */
  goto L_11657ed4;
L_11657f00:;
  /* 11657f00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f03 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11657f06 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657f09 jne 0x11657fa5 */
  if (!C.zf) goto L_11657fa5;
  /* 11657f0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657f15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11657f18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f1b push edx */
  push32((uint32_t)(EDX));
  /* 11657f1c call 0x11657770 */
  push32(0x11657f21u); f_11657770();
  /* 11657f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657f24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11657f27 mov ecx, dword ptr [0x116751bc] */
  ECX = (r32((uint32_t)(0x116751bc)));
  /* 11657f2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657f2f mov dword ptr [0x116751bc], ecx */
  w32((uint32_t)(0x116751bc), (ECX));
L_11657f35:;
  /* 11657f35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f38 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11657f3b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657f3e jl 0x11657f56 */
  if ((C.sf!=C.of)) goto L_11657f56;
  /* 11657f40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f43 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11657f46 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657f49 jg 0x11657f56 */
  if ((!C.zf&&C.sf==C.of)) goto L_11657f56;
  /* 11657f4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657f51 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11657f54 jmp 0x11657f35 */
  goto L_11657f35;
L_11657f56:;
  /* 11657f56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f59 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11657f5c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657f5f jne 0x11657fa5 */
  if (!C.zf) goto L_11657fa5;
  /* 11657f61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657f67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11657f6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f6d push ecx */
  push32((uint32_t)(ECX));
  /* 11657f6e call 0x11657770 */
  push32(0x11657f73u); f_11657770();
  /* 11657f73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657f76 mov edx, dword ptr [0x116751bc] */
  EDX = (r32((uint32_t)(0x116751bc)));
  /* 11657f7c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657f7e mov dword ptr [0x116751bc], edx */
  w32((uint32_t)(0x116751bc), (EDX));
L_11657f84:;
  /* 11657f84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11657f8a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657f8d jl 0x11657fa5 */
  if ((C.sf!=C.of)) goto L_11657fa5;
  /* 11657f8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11657f95 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657f98 jg 0x11657fa5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11657fa5;
  /* 11657f9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657f9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11657fa0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11657fa3 jmp 0x11657f84 */
  goto L_11657f84;
L_11657fa5:;
  /* 11657fa5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657fa9 je 0x11657fb9 */
  if (C.zf) goto L_11657fb9;
  /* 11657fab mov edx, dword ptr [0x116751bc] */
  EDX = (r32((uint32_t)(0x116751bc)));
  /* 11657fb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11657fb3 mov dword ptr [0x116751bc], edx */
  w32((uint32_t)(0x116751bc), (EDX));
L_11657fb9:;
  /* 11657fb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657fbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11657fbf mov dword ptr [0x116751c0], ecx */
  w32((uint32_t)(0x116751c0), (ECX));
  /* 11657fc5 cmp dword ptr [0x116751c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116751c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11657fcc je 0x11657fee */
  if (C.zf) goto L_11657fee;
  /* 11657fce push 3 */
  push32((uint32_t)(0x3u));
  /* 11657fd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11657fd3 push edx */
  push32((uint32_t)(EDX));
  /* 11657fd4 mov eax, dword ptr [0x1167524c] */
  EAX = (r32((uint32_t)(0x1167524c)));
  /* 11657fd9 push eax */
  push32((uint32_t)(EAX));
  /* 11657fda call 0x1164a0e0 */
  push32(0x11657fdfu); f_1164a0e0();
  /* 11657fdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11657fe2 mov ecx, dword ptr [0x1167524c] */
  ECX = (r32((uint32_t)(0x1167524c)));
  /* 11657fe8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11657fec jmp 0x11657ff7 */
  goto L_11657ff7;
L_11657fee:;
  /* 11657fee mov edx, dword ptr [0x1167524c] */
  EDX = (r32((uint32_t)(0x1167524c)));
  /* 11657ff4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11657ff7:;
  /* 11657ff7 mov esp, ebp */
  ESP = (EBP);
  /* 11657ff9 pop ebp */
  EBP = (pop32());
  /* 11657ffa ret  */
  ESPCHK(0x11657c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10018000 @ 0x11658000 (46 bytes, 18 insns) */
void f_11658000(void) {
  FTRACE(0x11658000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658000 push ebp */
  push32((uint32_t)(EBP));
  /* 11658001 mov ebp, esp */
  EBP = (ESP);
  /* 11658003 push ecx */
  push32((uint32_t)(ECX));
  /* 11658004 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11658006 call 0x1164b880 */
  push32(0x1165800bu); f_1164b880();
  /* 1165800b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165800e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658011 push eax */
  push32((uint32_t)(EAX));
  /* 11658012 call 0x11658030 */
  push32(0x11658017u); f_11658030();
  /* 11658017 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165801a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1165801d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1165801f call 0x1164b920 */
  push32(0x11658024u); f_1164b920();
  /* 11658024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165802a mov esp, ebp */
  ESP = (EBP);
  /* 1165802c pop ebp */
  EBP = (pop32());
  /* 1165802d ret  */
  ESPCHK(0x11658000u, _esp0);
  ESP += 4; return;
}

/* FUN_10018030 @ 0x11658030 (762 bytes, 246 insns) */
void f_11658030(void) {
  FTRACE(0x11658030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658030 push ebp */
  push32((uint32_t)(EBP));
  /* 11658031 mov ebp, esp */
  EBP = (ESP);
  /* 11658033 push ecx */
  push32((uint32_t)(ECX));
  /* 11658034 cmp dword ptr [0x116751c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116751c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165803b jne 0x11658044 */
  if (!C.zf) goto L_11658044;
  /* 1165803d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165803f jmp 0x11658326 */
  goto L_11658326;
L_11658044:;
  /* 11658044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658047 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1165804a cmp ecx, dword ptr [0x11675250] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11675250))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658050 jne 0x11658064 */
  if (!C.zf) goto L_11658064;
  /* 11658052 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658055 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11658058 cmp eax, dword ptr [0x11675260] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11675260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165805e je 0x1165822b */
  if (C.zf) goto L_1165822b;
L_11658064:;
  /* 11658064 cmp dword ptr [0x11676248], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676248))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165806b je 0x116581e5 */
  if (C.zf) goto L_116581e5;
  /* 11658071 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11658073 mov cx, word ptr [0x116762e8] */
  CX = (r16((uint32_t)(0x116762e8)));
  /* 1165807a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1165807c jne 0x116580d9 */
  if (!C.zf) goto L_116580d9;
  /* 1165807e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11658080 mov dx, word ptr [0x116762f6] */
  DX = (r16((uint32_t)(0x116762f6)));
  /* 11658087 push edx */
  push32((uint32_t)(EDX));
  /* 11658088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165808a mov ax, word ptr [0x116762f4] */
  AX = (r16((uint32_t)(0x116762f4)));
  /* 11658090 push eax */
  push32((uint32_t)(EAX));
  /* 11658091 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11658093 mov cx, word ptr [0x116762f2] */
  CX = (r16((uint32_t)(0x116762f2)));
  /* 1165809a push ecx */
  push32((uint32_t)(ECX));
  /* 1165809b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1165809d mov dx, word ptr [0x116762f0] */
  DX = (r16((uint32_t)(0x116762f0)));
  /* 116580a4 push edx */
  push32((uint32_t)(EDX));
  /* 116580a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116580a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116580a9 mov ax, word ptr [0x116762ec] */
  AX = (r16((uint32_t)(0x116762ec)));
  /* 116580af push eax */
  push32((uint32_t)(EAX));
  /* 116580b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116580b2 mov cx, word ptr [0x116762ee] */
  CX = (r16((uint32_t)(0x116762ee)));
  /* 116580b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116580ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116580bc mov dx, word ptr [0x116762ea] */
  DX = (r16((uint32_t)(0x116762ea)));
  /* 116580c3 push edx */
  push32((uint32_t)(EDX));
  /* 116580c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116580c7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116580ca push ecx */
  push32((uint32_t)(ECX));
  /* 116580cb push 1 */
  push32((uint32_t)(0x1u));
  /* 116580cd push 1 */
  push32((uint32_t)(0x1u));
  /* 116580cf call 0x11658330 */
  push32(0x116580d4u); f_11658330();
  /* 116580d4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116580d7 jmp 0x1165812a */
  goto L_1165812a;
L_116580d9:;
  /* 116580d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116580db mov dx, word ptr [0x116762f6] */
  DX = (r16((uint32_t)(0x116762f6)));
  /* 116580e2 push edx */
  push32((uint32_t)(EDX));
  /* 116580e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116580e5 mov ax, word ptr [0x116762f4] */
  AX = (r16((uint32_t)(0x116762f4)));
  /* 116580eb push eax */
  push32((uint32_t)(EAX));
  /* 116580ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116580ee mov cx, word ptr [0x116762f2] */
  CX = (r16((uint32_t)(0x116762f2)));
  /* 116580f5 push ecx */
  push32((uint32_t)(ECX));
  /* 116580f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116580f8 mov dx, word ptr [0x116762f0] */
  DX = (r16((uint32_t)(0x116762f0)));
  /* 116580ff push edx */
  push32((uint32_t)(EDX));
  /* 11658100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658102 mov ax, word ptr [0x116762ee] */
  AX = (r16((uint32_t)(0x116762ee)));
  /* 11658108 push eax */
  push32((uint32_t)(EAX));
  /* 11658109 push 0 */
  push32((uint32_t)(0x0u));
  /* 1165810b push 0 */
  push32((uint32_t)(0x0u));
  /* 1165810d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1165810f mov cx, word ptr [0x116762ea] */
  CX = (r16((uint32_t)(0x116762ea)));
  /* 11658116 push ecx */
  push32((uint32_t)(ECX));
  /* 11658117 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165811a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1165811d push eax */
  push32((uint32_t)(EAX));
  /* 1165811e push 0 */
  push32((uint32_t)(0x0u));
  /* 11658120 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658122 call 0x11658330 */
  push32(0x11658127u); f_11658330();
  /* 11658127 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1165812a:;
  /* 1165812a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1165812c mov cx, word ptr [0x11676294] */
  CX = (r16((uint32_t)(0x11676294)));
  /* 11658133 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11658135 jne 0x11658192 */
  if (!C.zf) goto L_11658192;
  /* 11658137 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11658139 mov dx, word ptr [0x116762a2] */
  DX = (r16((uint32_t)(0x116762a2)));
  /* 11658140 push edx */
  push32((uint32_t)(EDX));
  /* 11658141 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658143 mov ax, word ptr [0x116762a0] */
  AX = (r16((uint32_t)(0x116762a0)));
  /* 11658149 push eax */
  push32((uint32_t)(EAX));
  /* 1165814a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1165814c mov cx, word ptr [0x1167629e] */
  CX = (r16((uint32_t)(0x1167629e)));
  /* 11658153 push ecx */
  push32((uint32_t)(ECX));
  /* 11658154 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11658156 mov dx, word ptr [0x1167629c] */
  DX = (r16((uint32_t)(0x1167629c)));
  /* 1165815d push edx */
  push32((uint32_t)(EDX));
  /* 1165815e push 0 */
  push32((uint32_t)(0x0u));
  /* 11658160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658162 mov ax, word ptr [0x11676298] */
  AX = (r16((uint32_t)(0x11676298)));
  /* 11658168 push eax */
  push32((uint32_t)(EAX));
  /* 11658169 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1165816b mov cx, word ptr [0x1167629a] */
  CX = (r16((uint32_t)(0x1167629a)));
  /* 11658172 push ecx */
  push32((uint32_t)(ECX));
  /* 11658173 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11658175 mov dx, word ptr [0x11676296] */
  DX = (r16((uint32_t)(0x11676296)));
  /* 1165817c push edx */
  push32((uint32_t)(EDX));
  /* 1165817d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658180 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11658183 push ecx */
  push32((uint32_t)(ECX));
  /* 11658184 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658186 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658188 call 0x11658330 */
  push32(0x1165818du); f_11658330();
  /* 1165818d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658190 jmp 0x116581e3 */
  goto L_116581e3;
L_11658192:;
  /* 11658192 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11658194 mov dx, word ptr [0x116762a2] */
  DX = (r16((uint32_t)(0x116762a2)));
  /* 1165819b push edx */
  push32((uint32_t)(EDX));
  /* 1165819c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165819e mov ax, word ptr [0x116762a0] */
  AX = (r16((uint32_t)(0x116762a0)));
  /* 116581a4 push eax */
  push32((uint32_t)(EAX));
  /* 116581a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116581a7 mov cx, word ptr [0x1167629e] */
  CX = (r16((uint32_t)(0x1167629e)));
  /* 116581ae push ecx */
  push32((uint32_t)(ECX));
  /* 116581af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116581b1 mov dx, word ptr [0x1167629c] */
  DX = (r16((uint32_t)(0x1167629c)));
  /* 116581b8 push edx */
  push32((uint32_t)(EDX));
  /* 116581b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116581bb mov ax, word ptr [0x1167629a] */
  AX = (r16((uint32_t)(0x1167629a)));
  /* 116581c1 push eax */
  push32((uint32_t)(EAX));
  /* 116581c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116581c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116581c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116581c8 mov cx, word ptr [0x11676296] */
  CX = (r16((uint32_t)(0x11676296)));
  /* 116581cf push ecx */
  push32((uint32_t)(ECX));
  /* 116581d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116581d3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116581d6 push eax */
  push32((uint32_t)(EAX));
  /* 116581d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116581d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116581db call 0x11658330 */
  push32(0x116581e0u); f_11658330();
  /* 116581e0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116581e3:;
  /* 116581e3 jmp 0x1165822b */
  goto L_1165822b;
L_116581e5:;
  /* 116581e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116581e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116581e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116581eb push 2 */
  push32((uint32_t)(0x2u));
  /* 116581ed push 0 */
  push32((uint32_t)(0x0u));
  /* 116581ef push 0 */
  push32((uint32_t)(0x0u));
  /* 116581f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 116581f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 116581f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116581f8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 116581fb push edx */
  push32((uint32_t)(EDX));
  /* 116581fc push 1 */
  push32((uint32_t)(0x1u));
  /* 116581fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11658200 call 0x11658330 */
  push32(0x11658205u); f_11658330();
  /* 11658205 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658208 push 0 */
  push32((uint32_t)(0x0u));
  /* 1165820a push 0 */
  push32((uint32_t)(0x0u));
  /* 1165820c push 0 */
  push32((uint32_t)(0x0u));
  /* 1165820e push 2 */
  push32((uint32_t)(0x2u));
  /* 11658210 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658212 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658214 push 5 */
  push32((uint32_t)(0x5u));
  /* 11658216 push 0xa */
  push32((uint32_t)(0xau));
  /* 11658218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165821b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1165821e push ecx */
  push32((uint32_t)(ECX));
  /* 1165821f push 1 */
  push32((uint32_t)(0x1u));
  /* 11658221 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658223 call 0x11658330 */
  push32(0x11658228u); f_11658330();
  /* 11658228 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1165822b:;
  /* 1165822b mov edx, dword ptr [0x11675254] */
  EDX = (r32((uint32_t)(0x11675254)));
  /* 11658231 cmp edx, dword ptr [0x11675264] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11675264))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658237 jge 0x11658284 */
  if ((C.sf==C.of)) goto L_11658284;
  /* 11658239 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165823c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1165823f cmp ecx, dword ptr [0x11675254] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11675254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658245 jl 0x11658255 */
  if ((C.sf!=C.of)) goto L_11658255;
  /* 11658247 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165824a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1165824d cmp eax, dword ptr [0x11675264] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11675264))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658253 jle 0x1165825c */
  if ((C.zf||C.sf!=C.of)) goto L_1165825c;
L_11658255:;
  /* 11658255 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658257 jmp 0x11658326 */
  goto L_11658326;
L_1165825c:;
  /* 1165825c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165825f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11658262 cmp edx, dword ptr [0x11675254] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11675254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658268 jle 0x11658282 */
  if ((C.zf||C.sf!=C.of)) goto L_11658282;
  /* 1165826a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165826d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11658270 cmp ecx, dword ptr [0x11675264] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11675264))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658276 jge 0x11658282 */
  if ((C.sf==C.of)) goto L_11658282;
  /* 11658278 mov eax, 1 */
  EAX = (0x1u);
  /* 1165827d jmp 0x11658326 */
  goto L_11658326;
L_11658282:;
  /* 11658282 jmp 0x116582c7 */
  goto L_116582c7;
L_11658284:;
  /* 11658284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658287 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1165828a cmp eax, dword ptr [0x11675264] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11675264))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658290 jl 0x116582a0 */
  if ((C.sf!=C.of)) goto L_116582a0;
  /* 11658292 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658295 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11658298 cmp edx, dword ptr [0x11675254] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11675254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165829e jle 0x116582a7 */
  if ((C.zf||C.sf!=C.of)) goto L_116582a7;
L_116582a0:;
  /* 116582a0 mov eax, 1 */
  EAX = (0x1u);
  /* 116582a5 jmp 0x11658326 */
  goto L_11658326;
L_116582a7:;
  /* 116582a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116582aa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116582ad cmp ecx, dword ptr [0x11675264] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11675264))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116582b3 jle 0x116582c7 */
  if ((C.zf||C.sf!=C.of)) goto L_116582c7;
  /* 116582b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116582b8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116582bb cmp eax, dword ptr [0x11675254] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11675254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116582c1 jge 0x116582c7 */
  if ((C.sf==C.of)) goto L_116582c7;
  /* 116582c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116582c5 jmp 0x11658326 */
  goto L_11658326;
L_116582c7:;
  /* 116582c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116582ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116582cd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116582d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116582d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116582d5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116582d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116582da mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116582dd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116582e3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116582e5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116582eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116582ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116582f1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116582f4 cmp edx, dword ptr [0x11675254] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11675254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116582fa jne 0x11658312 */
  if (!C.zf) goto L_11658312;
  /* 116582fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116582ff cmp eax, dword ptr [0x11675258] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11675258))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658305 jl 0x1165830e */
  if ((C.sf!=C.of)) goto L_1165830e;
  /* 11658307 mov eax, 1 */
  EAX = (0x1u);
  /* 1165830c jmp 0x11658326 */
  goto L_11658326;
L_1165830e:;
  /* 1165830e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658310 jmp 0x11658326 */
  goto L_11658326;
L_11658312:;
  /* 11658312 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11658315 cmp ecx, dword ptr [0x11675268] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11675268))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165831b jge 0x11658324 */
  if ((C.sf==C.of)) goto L_11658324;
  /* 1165831d mov eax, 1 */
  EAX = (0x1u);
  /* 11658322 jmp 0x11658326 */
  goto L_11658326;
L_11658324:;
  /* 11658324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11658326:;
  /* 11658326 mov esp, ebp */
  ESP = (EBP);
  /* 11658328 pop ebp */
  EBP = (pop32());
  /* 11658329 ret  */
  ESPCHK(0x11658030u, _esp0);
  ESP += 4; return;
}

/* FUN_10018330 @ 0x11658330 (504 bytes, 145 insns) */
void f_11658330(void) {
  FTRACE(0x11658330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658330 push ebp */
  push32((uint32_t)(EBP));
  /* 11658331 mov ebp, esp */
  EBP = (ESP);
  /* 11658333 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11658336 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165833a jne 0x1165840c */
  if (!C.zf) goto L_1165840c;
  /* 11658340 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658343 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11658346 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658348 jne 0x11658359 */
  if (!C.zf) goto L_11658359;
  /* 1165834a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165834d mov edx, dword ptr [ecx*4 + 0x1167526c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1167526c)));
  /* 11658354 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11658357 jmp 0x11658366 */
  goto L_11658366;
L_11658359:;
  /* 11658359 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165835c mov ecx, dword ptr [eax*4 + 0x116752a0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116752a0)));
  /* 11658363 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11658366:;
  /* 11658366 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11658369 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165836c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1165836f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658372 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11658375 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1165837b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165837e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658380 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658383 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11658386 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11658389 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1165838d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1165838e mov ecx, 7 */
  ECX = (0x7u);
  /* 11658393 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11658395 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11658398 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165839b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165839e jge 0x116583b9 */
  if ((C.sf==C.of)) goto L_116583b9;
  /* 116583a0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116583a3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116583a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116583a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116583ac imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116583af add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116583b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116583b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116583b7 jmp 0x116583cd */
  goto L_116583cd;
L_116583b9:;
  /* 116583b9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116583bc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116583bf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116583c2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116583c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116583c8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116583ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116583cd:;
  /* 116583cd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116583d1 jne 0x1165840a */
  if (!C.zf) goto L_1165840a;
  /* 116583d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116583d6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 116583d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116583db jne 0x116583ec */
  if (!C.zf) goto L_116583ec;
  /* 116583dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116583e0 mov eax, dword ptr [edx*4 + 0x11675270] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11675270)));
  /* 116583e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116583ea jmp 0x116583f9 */
  goto L_116583f9;
L_116583ec:;
  /* 116583ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116583ef mov edx, dword ptr [ecx*4 + 0x116752a4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116752a4)));
  /* 116583f6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116583f9:;
  /* 116583f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116583fc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116583ff jle 0x1165840a */
  if ((C.zf||C.sf!=C.of)) goto L_1165840a;
  /* 11658401 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11658404 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11658407 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1165840a:;
  /* 1165840a jmp 0x11658441 */
  goto L_11658441;
L_1165840c:;
  /* 1165840c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165840f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11658412 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11658414 jne 0x11658425 */
  if (!C.zf) goto L_11658425;
  /* 11658416 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11658419 mov ecx, dword ptr [eax*4 + 0x1167526c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1167526c)));
  /* 11658420 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11658423 jmp 0x11658432 */
  goto L_11658432;
L_11658425:;
  /* 11658425 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11658428 mov eax, dword ptr [edx*4 + 0x116752a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116752a0)));
  /* 1165842f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11658432:;
  /* 11658432 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11658435 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11658438 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165843b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165843e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11658441:;
  /* 11658441 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658445 jne 0x11658481 */
  if (!C.zf) goto L_11658481;
  /* 11658447 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165844a mov dword ptr [0x11675254], eax */
  w32((uint32_t)(0x11675254), (EAX));
  /* 1165844f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11658452 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11658455 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11658458 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165845a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1165845d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11658460 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658462 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11658468 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1165846b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165846d mov dword ptr [0x11675258], ecx */
  w32((uint32_t)(0x11675258), (ECX));
  /* 11658473 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658476 mov dword ptr [0x11675250], edx */
  w32((uint32_t)(0x11675250), (EDX));
  /* 1165847c jmp 0x11658524 */
  goto L_11658524;
L_11658481:;
  /* 11658481 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11658484 mov dword ptr [0x11675264], eax */
  w32((uint32_t)(0x11675264), (EAX));
  /* 11658489 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1165848c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1165848f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11658492 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658494 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11658497 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1165849a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165849c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116584a2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 116584a5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116584a7 mov dword ptr [0x11675268], ecx */
  w32((uint32_t)(0x11675268), (ECX));
  /* 116584ad mov edx, dword ptr [0x116751c4] */
  EDX = (r32((uint32_t)(0x116751c4)));
  /* 116584b3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116584b9 mov eax, dword ptr [0x11675268] */
  EAX = (r32((uint32_t)(0x11675268)));
  /* 116584be add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116584c0 mov dword ptr [0x11675268], eax */
  w32((uint32_t)(0x11675268), (EAX));
  /* 116584c5 cmp dword ptr [0x11675268], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675268))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116584cc jge 0x116584f1 */
  if ((C.sf==C.of)) goto L_116584f1;
  /* 116584ce mov ecx, dword ptr [0x11675268] */
  ECX = (r32((uint32_t)(0x11675268)));
  /* 116584d4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116584da mov dword ptr [0x11675268], ecx */
  w32((uint32_t)(0x11675268), (ECX));
  /* 116584e0 mov edx, dword ptr [0x11675264] */
  EDX = (r32((uint32_t)(0x11675264)));
  /* 116584e6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116584e9 mov dword ptr [0x11675264], edx */
  w32((uint32_t)(0x11675264), (EDX));
  /* 116584ef jmp 0x1165851b */
  goto L_1165851b;
L_116584f1:;
  /* 116584f1 cmp dword ptr [0x11675268], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11675268))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116584fb jl 0x1165851b */
  if ((C.sf!=C.of)) goto L_1165851b;
  /* 116584fd mov eax, dword ptr [0x11675268] */
  EAX = (r32((uint32_t)(0x11675268)));
  /* 11658502 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11658507 mov dword ptr [0x11675268], eax */
  w32((uint32_t)(0x11675268), (EAX));
  /* 1165850c mov ecx, dword ptr [0x11675264] */
  ECX = (r32((uint32_t)(0x11675264)));
  /* 11658512 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658515 mov dword ptr [0x11675264], ecx */
  w32((uint32_t)(0x11675264), (ECX));
L_1165851b:;
  /* 1165851b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165851e mov dword ptr [0x11675260], edx */
  w32((uint32_t)(0x11675260), (EDX));
L_11658524:;
  /* 11658524 mov esp, ebp */
  ESP = (EBP);
  /* 11658526 pop ebp */
  EBP = (pop32());
  /* 11658527 ret  */
  ESPCHK(0x11658330u, _esp0);
  ESP += 4; return;
}

/* FUN_10018530 @ 0x11658530 (382 bytes, 135 insns) */
void f_11658530(void) {
  FTRACE(0x11658530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658530 push ebp */
  push32((uint32_t)(EBP));
  /* 11658531 mov ebp, esp */
  EBP = (ESP);
  /* 11658533 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11658535 push 0x11671a60 */
  push32((uint32_t)(0x11671a60u));
  /* 1165853a push 0x11652918 */
  push32((uint32_t)(0x11652918u));
  /* 1165853f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11658545 push eax */
  push32((uint32_t)(EAX));
  /* 11658546 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1165854d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658550 push ebx */
  push32((uint32_t)(EBX));
  /* 11658551 push esi */
  push32((uint32_t)(ESI));
  /* 11658552 push edi */
  push32((uint32_t)(EDI));
  /* 11658553 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11658556 cmp dword ptr [0x11676304], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676304))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165855d jne 0x116585a2 */
  if (!C.zf) goto L_116585a2;
  /* 1165855f push 0 */
  push32((uint32_t)(0x0u));
  /* 11658561 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658563 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658565 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658567 call dword ptr [0x116782b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782b8))), 0x1165856du);
  /* 1165856d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165856f je 0x1165857d */
  if (C.zf) goto L_1165857d;
  /* 11658571 mov dword ptr [0x11676304], 1 */
  w32((uint32_t)(0x11676304), (0x1u));
  /* 1165857b jmp 0x116585a2 */
  goto L_116585a2;
L_1165857d:;
  /* 1165857d push 0 */
  push32((uint32_t)(0x0u));
  /* 1165857f push 0 */
  push32((uint32_t)(0x0u));
  /* 11658581 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658583 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658585 call dword ptr [0x116782e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e0))), 0x1165858bu);
  /* 1165858b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165858d je 0x1165859b */
  if (C.zf) goto L_1165859b;
  /* 1165858f mov dword ptr [0x11676304], 2 */
  w32((uint32_t)(0x11676304), (0x2u));
  /* 11658599 jmp 0x116585a2 */
  goto L_116585a2;
L_1165859b:;
  /* 1165859b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165859d jmp 0x116586b1 */
  goto L_116586b1;
L_116585a2:;
  /* 116585a2 cmp dword ptr [0x11676304], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11676304))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116585a9 jne 0x116585c6 */
  if (!C.zf) goto L_116585c6;
  /* 116585ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116585ae push eax */
  push32((uint32_t)(EAX));
  /* 116585af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116585b2 push ecx */
  push32((uint32_t)(ECX));
  /* 116585b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116585b6 push edx */
  push32((uint32_t)(EDX));
  /* 116585b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116585ba push eax */
  push32((uint32_t)(EAX));
  /* 116585bb call dword ptr [0x116782b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782b8))), 0x116585c1u);
  /* 116585c1 jmp 0x116586b1 */
  goto L_116586b1;
L_116585c6:;
  /* 116585c6 cmp dword ptr [0x11676304], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11676304))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116585cd jne 0x116586af */
  if (!C.zf) goto L_116586af;
  /* 116585d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116585d7 jne 0x116585e2 */
  if (!C.zf) goto L_116585e2;
  /* 116585d9 mov ecx, dword ptr [0x116761c4] */
  ECX = (r32((uint32_t)(0x116761c4)));
  /* 116585df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_116585e2:;
  /* 116585e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116585e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116585e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116585e9 push edx */
  push32((uint32_t)(EDX));
  /* 116585ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116585ed push eax */
  push32((uint32_t)(EAX));
  /* 116585ee call dword ptr [0x116782e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e0))), 0x116585f4u);
  /* 116585f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116585f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116585fb jne 0x11658604 */
  if (!C.zf) goto L_11658604;
  /* 116585fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116585ff jmp 0x116586b1 */
  goto L_116586b1;
L_11658604:;
  /* 11658604 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1165860b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1165860e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658611 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11658613 call 0x11649a60 */
  push32(0x11658618u); f_11649a60();
  /* 11658618 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1165861b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1165861e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11658621 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11658624 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1165862b jmp 0x11658644 */
  goto L_11658644;
  /* 1165862d mov eax, 1 */
  EAX = (0x1u);
  /* 11658632 ret  */
  ESPCHK(0x11658530u, _esp0);
  ESP += 4; return;
  /* 11658633 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11658636 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1165863d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11658644:;
  /* 11658644 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658648 jne 0x1165864e */
  if (!C.zf) goto L_1165864e;
  /* 1165864a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165864c jmp 0x116586b1 */
  goto L_116586b1;
L_1165864e:;
  /* 1165864e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11658651 push edx */
  push32((uint32_t)(EDX));
  /* 11658652 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11658655 push eax */
  push32((uint32_t)(EAX));
  /* 11658656 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11658659 push ecx */
  push32((uint32_t)(ECX));
  /* 1165865a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165865d push edx */
  push32((uint32_t)(EDX));
  /* 1165865e call dword ptr [0x116782e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e0))), 0x11658664u);
  /* 11658664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658666 jne 0x1165866c */
  if (!C.zf) goto L_1165866c;
  /* 11658668 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165866a jmp 0x116586b1 */
  goto L_116586b1;
L_1165866c:;
  /* 1165866c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658670 jne 0x1165868d */
  if (!C.zf) goto L_1165868d;
  /* 11658672 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658674 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658676 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11658678 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1165867b push eax */
  push32((uint32_t)(EAX));
  /* 1165867c push 1 */
  push32((uint32_t)(0x1u));
  /* 1165867e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11658681 push ecx */
  push32((uint32_t)(ECX));
  /* 11658682 call dword ptr [0x116782fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782fc))), 0x11658688u);
  /* 11658688 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1165868b jmp 0x116586aa */
  goto L_116586aa;
L_1165868d:;
  /* 1165868d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11658690 push edx */
  push32((uint32_t)(EDX));
  /* 11658691 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658694 push eax */
  push32((uint32_t)(EAX));
  /* 11658695 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11658697 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1165869a push ecx */
  push32((uint32_t)(ECX));
  /* 1165869b push 1 */
  push32((uint32_t)(0x1u));
  /* 1165869d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116586a0 push edx */
  push32((uint32_t)(EDX));
  /* 116586a1 call dword ptr [0x116782fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782fc))), 0x116586a7u);
  /* 116586a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116586aa:;
  /* 116586aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116586ad jmp 0x116586b1 */
  goto L_116586b1;
L_116586af:;
  /* 116586af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116586b1:;
  /* 116586b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 116586b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116586b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116586be pop edi */
  EDI = (pop32());
  /* 116586bf pop esi */
  ESI = (pop32());
  /* 116586c0 pop ebx */
  EBX = (pop32());
  /* 116586c1 mov esp, ebp */
  ESP = (EBP);
  /* 116586c3 pop ebp */
  EBP = (pop32());
  /* 116586c4 ret  */
  ESPCHK(0x11658530u, _esp0);
  ESP += 4; return;
}

/* FUN_100186d0 @ 0x116586d0 (398 bytes, 140 insns) */
void f_116586d0(void) {
  FTRACE(0x116586d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116586d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116586d1 mov ebp, esp */
  EBP = (ESP);
  /* 116586d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116586d5 push 0x11671a70 */
  push32((uint32_t)(0x11671a70u));
  /* 116586da push 0x11652918 */
  push32((uint32_t)(0x11652918u));
  /* 116586df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116586e5 push eax */
  push32((uint32_t)(EAX));
  /* 116586e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116586ed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116586f0 push ebx */
  push32((uint32_t)(EBX));
  /* 116586f1 push esi */
  push32((uint32_t)(ESI));
  /* 116586f2 push edi */
  push32((uint32_t)(EDI));
  /* 116586f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116586f6 cmp dword ptr [0x11676308], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676308))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116586fd jne 0x11658742 */
  if (!C.zf) goto L_11658742;
  /* 116586ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11658701 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658703 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658705 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658707 call dword ptr [0x116782b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782b8))), 0x1165870du);
  /* 1165870d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165870f je 0x1165871d */
  if (C.zf) goto L_1165871d;
  /* 11658711 mov dword ptr [0x11676308], 1 */
  w32((uint32_t)(0x11676308), (0x1u));
  /* 1165871b jmp 0x11658742 */
  goto L_11658742;
L_1165871d:;
  /* 1165871d push 0 */
  push32((uint32_t)(0x0u));
  /* 1165871f push 0 */
  push32((uint32_t)(0x0u));
  /* 11658721 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658723 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658725 call dword ptr [0x116782e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e0))), 0x1165872bu);
  /* 1165872b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165872d je 0x1165873b */
  if (C.zf) goto L_1165873b;
  /* 1165872f mov dword ptr [0x11676308], 2 */
  w32((uint32_t)(0x11676308), (0x2u));
  /* 11658739 jmp 0x11658742 */
  goto L_11658742;
L_1165873b:;
  /* 1165873b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165873d jmp 0x11658861 */
  goto L_11658861;
L_11658742:;
  /* 11658742 cmp dword ptr [0x11676308], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11676308))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658749 jne 0x11658766 */
  if (!C.zf) goto L_11658766;
  /* 1165874b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165874e push eax */
  push32((uint32_t)(EAX));
  /* 1165874f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658752 push ecx */
  push32((uint32_t)(ECX));
  /* 11658753 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11658756 push edx */
  push32((uint32_t)(EDX));
  /* 11658757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165875a push eax */
  push32((uint32_t)(EAX));
  /* 1165875b call dword ptr [0x116782e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e0))), 0x11658761u);
  /* 11658761 jmp 0x11658861 */
  goto L_11658861;
L_11658766:;
  /* 11658766 cmp dword ptr [0x11676308], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11676308))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165876d jne 0x1165885f */
  if (!C.zf) goto L_1165885f;
  /* 11658773 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658777 jne 0x11658782 */
  if (!C.zf) goto L_11658782;
  /* 11658779 mov ecx, dword ptr [0x116761c4] */
  ECX = (r32((uint32_t)(0x116761c4)));
  /* 1165877f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11658782:;
  /* 11658782 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658784 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658786 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11658789 push edx */
  push32((uint32_t)(EDX));
  /* 1165878a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165878d push eax */
  push32((uint32_t)(EAX));
  /* 1165878e call dword ptr [0x116782b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782b8))), 0x11658794u);
  /* 11658794 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11658797 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165879b jne 0x116587a4 */
  if (!C.zf) goto L_116587a4;
  /* 1165879d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165879f jmp 0x11658861 */
  goto L_11658861;
L_116587a4:;
  /* 116587a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116587ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116587ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116587b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116587b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116587b5 call 0x11649a60 */
  push32(0x116587bau); f_11649a60();
  /* 116587ba mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 116587bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116587c0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116587c3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116587c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116587cd jmp 0x116587e6 */
  goto L_116587e6;
  /* 116587cf mov eax, 1 */
  EAX = (0x1u);
  /* 116587d4 ret  */
  ESPCHK(0x116586d0u, _esp0);
  ESP += 4; return;
  /* 116587d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116587d8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116587df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116587e6:;
  /* 116587e6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116587ea jne 0x116587f0 */
  if (!C.zf) goto L_116587f0;
  /* 116587ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116587ee jmp 0x11658861 */
  goto L_11658861;
L_116587f0:;
  /* 116587f0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116587f3 push edx */
  push32((uint32_t)(EDX));
  /* 116587f4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116587f7 push eax */
  push32((uint32_t)(EAX));
  /* 116587f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116587fb push ecx */
  push32((uint32_t)(ECX));
  /* 116587fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116587ff push edx */
  push32((uint32_t)(EDX));
  /* 11658800 call dword ptr [0x116782b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782b8))), 0x11658806u);
  /* 11658806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658808 jne 0x1165880e */
  if (!C.zf) goto L_1165880e;
  /* 1165880a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165880c jmp 0x11658861 */
  goto L_11658861;
L_1165880e:;
  /* 1165880e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658812 jne 0x11658836 */
  if (!C.zf) goto L_11658836;
  /* 11658814 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658816 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1165881a push 0 */
  push32((uint32_t)(0x0u));
  /* 1165881c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1165881e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11658821 push eax */
  push32((uint32_t)(EAX));
  /* 11658822 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11658827 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1165882a push ecx */
  push32((uint32_t)(ECX));
  /* 1165882b call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x11658831u);
  /* 11658831 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11658834 jmp 0x1165885a */
  goto L_1165885a;
L_11658836:;
  /* 11658836 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658838 push 0 */
  push32((uint32_t)(0x0u));
  /* 1165883a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165883d push edx */
  push32((uint32_t)(EDX));
  /* 1165883e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658841 push eax */
  push32((uint32_t)(EAX));
  /* 11658842 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11658844 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11658847 push ecx */
  push32((uint32_t)(ECX));
  /* 11658848 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1165884d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11658850 push edx */
  push32((uint32_t)(EDX));
  /* 11658851 call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x11658857u);
  /* 11658857 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1165885a:;
  /* 1165885a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1165885d jmp 0x11658861 */
  goto L_11658861;
L_1165885f:;
  /* 1165885f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11658861:;
  /* 11658861 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11658864 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11658867 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1165886e pop edi */
  EDI = (pop32());
  /* 1165886f pop esi */
  ESI = (pop32());
  /* 11658870 pop ebx */
  EBX = (pop32());
  /* 11658871 mov esp, ebp */
  ESP = (EBP);
  /* 11658873 pop ebp */
  EBP = (pop32());
  /* 11658874 ret  */
  ESPCHK(0x116586d0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11658880 (52 bytes, 19 insns) */
void f_11658880(void) {
  FTRACE(0x11658880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658880 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11658884 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11658888 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1165888a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1165888e jne 0x11658899 */
  if (!C.zf) goto L_11658899;
  /* 11658890 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11658894 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11658896 ret 0x10 */
  ESPCHK(0x11658880u, _esp0);
  ESP += 20; return;
L_11658899:;
  /* 11658899 push ebx */
  push32((uint32_t)(EBX));
  /* 1165889a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1165889c mov ebx, eax */
  EBX = (EAX);
  /* 1165889e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116588a2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116588a6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 116588a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116588ac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116588ae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116588b0 pop ebx */
  EBX = (pop32());
  /* 116588b1 ret 0x10 */
  ESPCHK(0x11658880u, _esp0);
  ESP += 20; return;
}

/* FUN_100188c0 @ 0x116588c0 (122 bytes, 39 insns) */
void f_116588c0(void) {
  FTRACE(0x116588c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116588c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116588c1 mov ebp, esp */
  EBP = (ESP);
  /* 116588c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116588c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116588c7 cmp eax, dword ptr [0x11677abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11677abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116588cd jae 0x116588f1 */
  if (!C.cf) goto L_116588f1;
  /* 116588cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116588d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116588d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116588d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116588db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116588de mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 116588e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116588ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116588ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116588ef jne 0x1165890c */
  if (!C.zf) goto L_1165890c;
L_116588f1:;
  /* 116588f1 call 0x1164fc30 */
  push32(0x116588f6u); f_1164fc30();
  /* 116588f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116588fc call 0x1164fc40 */
  push32(0x11658901u); f_1164fc40();
  /* 11658901 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11658907 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165890a jmp 0x11658936 */
  goto L_11658936;
L_1165890c:;
  /* 1165890c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165890f push edx */
  push32((uint32_t)(EDX));
  /* 11658910 call 0x116557c0 */
  push32(0x11658915u); f_116557c0();
  /* 11658915 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165891b push eax */
  push32((uint32_t)(EAX));
  /* 1165891c call 0x11658940 */
  push32(0x11658921u); f_11658940();
  /* 11658921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658924 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11658927 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165892a push ecx */
  push32((uint32_t)(ECX));
  /* 1165892b call 0x11655850 */
  push32(0x11658930u); f_11655850();
  /* 11658930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658933 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11658936:;
  /* 11658936 mov esp, ebp */
  ESP = (EBP);
  /* 11658938 pop ebp */
  EBP = (pop32());
  /* 11658939 ret  */
  ESPCHK(0x116588c0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11658940 (170 bytes, 59 insns) */
void f_11658940(void) {
  FTRACE(0x11658940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658940 push ebp */
  push32((uint32_t)(EBP));
  /* 11658941 mov ebp, esp */
  EBP = (ESP);
  /* 11658943 push ecx */
  push32((uint32_t)(ECX));
  /* 11658944 push esi */
  push32((uint32_t)(ESI));
  /* 11658945 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658948 push eax */
  push32((uint32_t)(EAX));
  /* 11658949 call 0x11655640 */
  push32(0x1165894eu); f_11655640();
  /* 1165894e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658951 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658954 je 0x11658993 */
  if (C.zf) goto L_11658993;
  /* 11658956 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165895a je 0x11658962 */
  if (C.zf) goto L_11658962;
  /* 1165895c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658960 jne 0x1165897c */
  if (!C.zf) goto L_1165897c;
L_11658962:;
  /* 11658962 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658964 call 0x11655640 */
  push32(0x11658969u); f_11655640();
  /* 11658969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165896c mov esi, eax */
  ESI = (EAX);
  /* 1165896e push 2 */
  push32((uint32_t)(0x2u));
  /* 11658970 call 0x11655640 */
  push32(0x11658975u); f_11655640();
  /* 11658975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658978 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165897a je 0x11658993 */
  if (C.zf) goto L_11658993;
L_1165897c:;
  /* 1165897c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165897f push ecx */
  push32((uint32_t)(ECX));
  /* 11658980 call 0x11655640 */
  push32(0x11658985u); f_11655640();
  /* 11658985 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658988 push eax */
  push32((uint32_t)(EAX));
  /* 11658989 call dword ptr [0x116782b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782b4))), 0x1165898fu);
  /* 1165898f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658991 je 0x1165899c */
  if (C.zf) goto L_1165899c;
L_11658993:;
  /* 11658993 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1165899a jmp 0x116589a5 */
  goto L_116589a5;
L_1165899c:;
  /* 1165899c call dword ptr [0x11678390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678390))), 0x116589a2u);
  /* 116589a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116589a5:;
  /* 116589a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116589a8 push edx */
  push32((uint32_t)(EDX));
  /* 116589a9 call 0x11655560 */
  push32(0x116589aeu); f_11655560();
  /* 116589ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116589b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116589b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116589b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116589ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116589bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116589c0 mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 116589c7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 116589cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116589d0 je 0x116589e3 */
  if (C.zf) goto L_116589e3;
  /* 116589d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116589d5 push eax */
  push32((uint32_t)(EAX));
  /* 116589d6 call 0x1164fb90 */
  push32(0x116589dbu); f_1164fb90();
  /* 116589db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116589de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116589e1 jmp 0x116589e5 */
  goto L_116589e5;
L_116589e3:;
  /* 116589e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116589e5:;
  /* 116589e5 pop esi */
  ESI = (pop32());
  /* 116589e6 mov esp, ebp */
  ESP = (EBP);
  /* 116589e8 pop ebp */
  EBP = (pop32());
  /* 116589e9 ret  */
  ESPCHK(0x11658940u, _esp0);
  ESP += 4; return;
}

/* FUN_100189f0 @ 0x116589f0 (146 bytes, 52 insns) */
void f_116589f0(void) {
  FTRACE(0x116589f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116589f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116589f1 mov ebp, esp */
  EBP = (ESP);
  /* 116589f3 push ebx */
  push32((uint32_t)(EBX));
  /* 116589f4 push esi */
  push32((uint32_t)(ESI));
  /* 116589f5 push edi */
  push32((uint32_t)(EDI));
L_116589f6:;
  /* 116589f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116589fa jne 0x11658a1a */
  if (!C.zf) goto L_11658a1a;
  /* 116589fc push 0x11671a04 */
  push32((uint32_t)(0x11671a04u));
  /* 11658a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658a03 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11658a05 push 0x11671a7c */
  push32((uint32_t)(0x11671a7cu));
  /* 11658a0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11658a0c call 0x11645180 */
  push32(0x11658a11u); f_11645180();
  /* 11658a11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658a14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658a17 jne 0x11658a1a */
  if (!C.zf) goto L_11658a1a;
  /* 11658a19 int3  */
  x86_unimpl("int3 @ 0x11658a19");
L_11658a1a:;
  /* 11658a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658a1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658a1e jne 0x116589f6 */
  if (!C.zf) goto L_116589f6;
  /* 11658a20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658a23 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11658a26 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11658a2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11658a2e je 0x11658a7d */
  if (C.zf) goto L_11658a7d;
  /* 11658a30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658a33 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11658a36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11658a39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11658a3b je 0x11658a7d */
  if (C.zf) goto L_11658a7d;
  /* 11658a3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11658a3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658a42 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11658a45 push eax */
  push32((uint32_t)(EAX));
  /* 11658a46 call 0x11647350 */
  push32(0x11658a4bu); f_11647350();
  /* 11658a4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658a4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658a51 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11658a54 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11658a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658a5d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11658a60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658a63 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11658a69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658a6c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11658a73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658a76 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11658a7d:;
  /* 11658a7d pop edi */
  EDI = (pop32());
  /* 11658a7e pop esi */
  ESI = (pop32());
  /* 11658a7f pop ebx */
  EBX = (pop32());
  /* 11658a80 pop ebp */
  EBP = (pop32());
  /* 11658a81 ret  */
  ESPCHK(0x116589f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a90 @ 0x11658a90 (46 bytes, 18 insns) */
void f_11658a90(void) {
  FTRACE(0x11658a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11658a91 mov ebp, esp */
  EBP = (ESP);
  /* 11658a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11658a94 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11658a96 call 0x1164b880 */
  push32(0x11658a9bu); f_1164b880();
  /* 11658a9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658a9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11658aa2 call 0x11658ac0 */
  push32(0x11658aa7u); f_11658ac0();
  /* 11658aa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658aaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11658aad push 0xc */
  push32((uint32_t)(0xcu));
  /* 11658aaf call 0x1164b920 */
  push32(0x11658ab4u); f_1164b920();
  /* 11658ab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658ab7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11658aba mov esp, ebp */
  ESP = (EBP);
  /* 11658abc pop ebp */
  EBP = (pop32());
  /* 11658abd ret  */
  ESPCHK(0x11658a90u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11658ac0 (198 bytes, 69 insns) */
void f_11658ac0(void) {
  FTRACE(0x11658ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11658ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11658ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11658ac6 mov eax, dword ptr [0x11675fc4] */
  EAX = (r32((uint32_t)(0x11675fc4)));
  /* 11658acb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11658ace cmp dword ptr [0x11677ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658ad5 jne 0x11658ade */
  if (!C.zf) goto L_11658ade;
  /* 11658ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658ad9 jmp 0x11658b82 */
  goto L_11658b82;
L_11658ade:;
  /* 11658ade cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658ae2 jne 0x11658b06 */
  if (!C.zf) goto L_11658b06;
  /* 11658ae4 cmp dword ptr [0x11675fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658aeb je 0x11658b06 */
  if (C.zf) goto L_11658b06;
  /* 11658aed call 0x11658be0 */
  push32(0x11658af2u); f_11658be0();
  /* 11658af2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658af4 je 0x11658afd */
  if (C.zf) goto L_11658afd;
  /* 11658af6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658af8 jmp 0x11658b82 */
  goto L_11658b82;
L_11658afd:;
  /* 11658afd mov ecx, dword ptr [0x11675fc4] */
  ECX = (r32((uint32_t)(0x11675fc4)));
  /* 11658b03 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11658b06:;
  /* 11658b06 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658b0a je 0x11658b80 */
  if (C.zf) goto L_11658b80;
  /* 11658b0c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658b10 je 0x11658b80 */
  if (C.zf) goto L_11658b80;
  /* 11658b12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658b15 push edx */
  push32((uint32_t)(EDX));
  /* 11658b16 call 0x116496f0 */
  push32(0x11658b1bu); f_116496f0();
  /* 11658b1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658b1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11658b21:;
  /* 11658b21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11658b24 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658b27 je 0x11658b80 */
  if (C.zf) goto L_11658b80;
  /* 11658b29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11658b2c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11658b2e push edx */
  push32((uint32_t)(EDX));
  /* 11658b2f call 0x116496f0 */
  push32(0x11658b34u); f_116496f0();
  /* 11658b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658b37 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658b3a jbe 0x11658b75 */
  if ((C.cf||C.zf)) goto L_11658b75;
  /* 11658b3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11658b3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11658b41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11658b44 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11658b48 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658b4b jne 0x11658b75 */
  if (!C.zf) goto L_11658b75;
  /* 11658b4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11658b50 push ecx */
  push32((uint32_t)(ECX));
  /* 11658b51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658b54 push edx */
  push32((uint32_t)(EDX));
  /* 11658b55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11658b58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11658b5a push ecx */
  push32((uint32_t)(ECX));
  /* 11658b5b call 0x11658b90 */
  push32(0x11658b60u); f_11658b90();
  /* 11658b60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658b63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658b65 jne 0x11658b75 */
  if (!C.zf) goto L_11658b75;
  /* 11658b67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11658b6a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11658b6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11658b6f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11658b73 jmp 0x11658b82 */
  goto L_11658b82;
L_11658b75:;
  /* 11658b75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11658b78 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658b7b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11658b7e jmp 0x11658b21 */
  goto L_11658b21;
L_11658b80:;
  /* 11658b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11658b82:;
  /* 11658b82 mov esp, ebp */
  ESP = (EBP);
  /* 11658b84 pop ebp */
  EBP = (pop32());
  /* 11658b85 ret  */
  ESPCHK(0x11658ac0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11658b90 (79 bytes, 32 insns) */
void f_11658b90(void) {
  FTRACE(0x11658b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11658b91 mov ebp, esp */
  EBP = (ESP);
  /* 11658b93 push ecx */
  push32((uint32_t)(ECX));
  /* 11658b94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658b98 jne 0x11658b9e */
  if (!C.zf) goto L_11658b9e;
  /* 11658b9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658b9c jmp 0x11658bdb */
  goto L_11658bdb;
L_11658b9e:;
  /* 11658b9e mov eax, dword ptr [0x11677698] */
  EAX = (r32((uint32_t)(0x11677698)));
  /* 11658ba3 push eax */
  push32((uint32_t)(EAX));
  /* 11658ba4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 11658ba8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11658bab push edx */
  push32((uint32_t)(EDX));
  /* 11658bac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658baf push eax */
  push32((uint32_t)(EAX));
  /* 11658bb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11658bb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658bb6 mov edx, dword ptr [0x11677924] */
  EDX = (r32((uint32_t)(0x11677924)));
  /* 11658bbc push edx */
  push32((uint32_t)(EDX));
  /* 11658bbd call 0x11658c90 */
  push32(0x11658bc2u); f_11658c90();
  /* 11658bc2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658bc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11658bc8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658bcc jne 0x11658bd5 */
  if (!C.zf) goto L_11658bd5;
  /* 11658bce mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11658bd3 jmp 0x11658bdb */
  goto L_11658bdb;
L_11658bd5:;
  /* 11658bd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11658bd8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11658bdb:;
  /* 11658bdb mov esp, ebp */
  ESP = (EBP);
  /* 11658bdd pop ebp */
  EBP = (pop32());
  /* 11658bde ret  */
  ESPCHK(0x11658b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10018be0 @ 0x11658be0 (174 bytes, 66 insns) */
void f_11658be0(void) {
  FTRACE(0x11658be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11658be1 mov ebp, esp */
  EBP = (ESP);
  /* 11658be3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11658be6 mov eax, dword ptr [0x11675fcc] */
  EAX = (r32((uint32_t)(0x11675fcc)));
  /* 11658beb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11658bee:;
  /* 11658bee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11658bf1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658bf4 je 0x11658c88 */
  if (C.zf) goto L_11658c88;
  /* 11658bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11658bfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11658bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11658c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658c02 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11658c04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11658c07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11658c09 push eax */
  push32((uint32_t)(EAX));
  /* 11658c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11658c0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11658c0e call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x11658c14u);
  /* 11658c14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11658c17 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658c1b jne 0x11658c22 */
  if (!C.zf) goto L_11658c22;
  /* 11658c1d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11658c20 jmp 0x11658c8a */
  goto L_11658c8a;
L_11658c22:;
  /* 11658c22 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11658c24 push 0x11671a88 */
  push32((uint32_t)(0x11671a88u));
  /* 11658c29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11658c2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11658c2e push ecx */
  push32((uint32_t)(ECX));
  /* 11658c2f call 0x116468c0 */
  push32(0x11658c34u); f_116468c0();
  /* 11658c34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658c37 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11658c3a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658c3e jne 0x11658c45 */
  if (!C.zf) goto L_11658c45;
  /* 11658c40 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11658c43 jmp 0x11658c8a */
  goto L_11658c8a;
L_11658c45:;
  /* 11658c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658c49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11658c4c push edx */
  push32((uint32_t)(EDX));
  /* 11658c4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11658c50 push eax */
  push32((uint32_t)(EAX));
  /* 11658c51 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11658c53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11658c56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11658c58 push edx */
  push32((uint32_t)(EDX));
  /* 11658c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658c5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11658c5d call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x11658c63u);
  /* 11658c63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658c65 jne 0x11658c6c */
  if (!C.zf) goto L_11658c6c;
  /* 11658c67 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11658c6a jmp 0x11658c8a */
  goto L_11658c8a;
L_11658c6c:;
  /* 11658c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11658c6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11658c71 push eax */
  push32((uint32_t)(EAX));
  /* 11658c72 call 0x116590e0 */
  push32(0x11658c77u); f_116590e0();
  /* 11658c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658c7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11658c7d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658c80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11658c83 jmp 0x11658bee */
  goto L_11658bee;
L_11658c88:;
  /* 11658c88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11658c8a:;
  /* 11658c8a mov esp, ebp */
  ESP = (EBP);
  /* 11658c8c pop ebp */
  EBP = (pop32());
  /* 11658c8d ret  */
  ESPCHK(0x11658be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c90 @ 0x11658c90 (970 bytes, 340 insns) */
void f_11658c90(void) {
  FTRACE(0x11658c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11658c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11658c91 mov ebp, esp */
  EBP = (ESP);
  /* 11658c93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11658c95 push 0x11671ae0 */
  push32((uint32_t)(0x11671ae0u));
  /* 11658c9a push 0x11652918 */
  push32((uint32_t)(0x11652918u));
  /* 11658c9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11658ca5 push eax */
  push32((uint32_t)(EAX));
  /* 11658ca6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11658cad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658cb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11658cb1 push esi */
  push32((uint32_t)(ESI));
  /* 11658cb2 push edi */
  push32((uint32_t)(EDI));
  /* 11658cb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11658cb6 cmp dword ptr [0x1167630c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167630c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658cbd jne 0x11658d16 */
  if (!C.zf) goto L_11658d16;
  /* 11658cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11658cc1 push 0x1167111c */
  push32((uint32_t)(0x1167111cu));
  /* 11658cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658cc8 push 0x1167111c */
  push32((uint32_t)(0x1167111cu));
  /* 11658ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 11658ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 11658cd1 call dword ptr [0x116782b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782b0))), 0x11658cd7u);
  /* 11658cd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658cd9 je 0x11658ce7 */
  if (C.zf) goto L_11658ce7;
  /* 11658cdb mov dword ptr [0x1167630c], 1 */
  w32((uint32_t)(0x1167630c), (0x1u));
  /* 11658ce5 jmp 0x11658d16 */
  goto L_11658d16;
L_11658ce7:;
  /* 11658ce7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658ce9 push 0x11671118 */
  push32((uint32_t)(0x11671118u));
  /* 11658cee push 1 */
  push32((uint32_t)(0x1u));
  /* 11658cf0 push 0x11671118 */
  push32((uint32_t)(0x11671118u));
  /* 11658cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658cf9 call dword ptr [0x116782bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782bc))), 0x11658cffu);
  /* 11658cff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658d01 je 0x11658d0f */
  if (C.zf) goto L_11658d0f;
  /* 11658d03 mov dword ptr [0x1167630c], 2 */
  w32((uint32_t)(0x1167630c), (0x2u));
  /* 11658d0d jmp 0x11658d16 */
  goto L_11658d16;
L_11658d0f:;
  /* 11658d0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658d11 jmp 0x11659074 */
  goto L_11659074;
L_11658d16:;
  /* 11658d16 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658d1a jle 0x11658d2f */
  if ((C.zf||C.sf!=C.of)) goto L_11658d2f;
  /* 11658d1c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11658d1f push eax */
  push32((uint32_t)(EAX));
  /* 11658d20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11658d24 call 0x11659090 */
  push32(0x11658d29u); f_11659090();
  /* 11658d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658d2c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11658d2f:;
  /* 11658d2f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658d33 jle 0x11658d48 */
  if ((C.zf||C.sf!=C.of)) goto L_11658d48;
  /* 11658d35 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11658d38 push edx */
  push32((uint32_t)(EDX));
  /* 11658d39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11658d3c push eax */
  push32((uint32_t)(EAX));
  /* 11658d3d call 0x11659090 */
  push32(0x11658d42u); f_11659090();
  /* 11658d42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658d45 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11658d48:;
  /* 11658d48 cmp dword ptr [0x1167630c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1167630c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658d4f jne 0x11658d74 */
  if (!C.zf) goto L_11658d74;
  /* 11658d51 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11658d54 push ecx */
  push32((uint32_t)(ECX));
  /* 11658d55 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11658d58 push edx */
  push32((uint32_t)(EDX));
  /* 11658d59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11658d5c push eax */
  push32((uint32_t)(EAX));
  /* 11658d5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658d60 push ecx */
  push32((uint32_t)(ECX));
  /* 11658d61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11658d64 push edx */
  push32((uint32_t)(EDX));
  /* 11658d65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11658d68 push eax */
  push32((uint32_t)(EAX));
  /* 11658d69 call dword ptr [0x116782bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782bc))), 0x11658d6fu);
  /* 11658d6f jmp 0x11659074 */
  goto L_11659074;
L_11658d74:;
  /* 11658d74 cmp dword ptr [0x1167630c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1167630c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658d7b jne 0x11659072 */
  if (!C.zf) goto L_11659072;
  /* 11658d81 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658d85 jne 0x11658d90 */
  if (!C.zf) goto L_11658d90;
  /* 11658d87 mov ecx, dword ptr [0x116761c4] */
  ECX = (r32((uint32_t)(0x116761c4)));
  /* 11658d8d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11658d90:;
  /* 11658d90 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658d94 je 0x11658da0 */
  if (C.zf) goto L_11658da0;
  /* 11658d96 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658d9a jne 0x11658f1c */
  if (!C.zf) goto L_11658f1c;
L_11658da0:;
  /* 11658da0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11658da3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658da6 jne 0x11658db2 */
  if (!C.zf) goto L_11658db2;
  /* 11658da8 mov eax, 2 */
  EAX = (0x2u);
  /* 11658dad jmp 0x11659074 */
  goto L_11659074;
L_11658db2:;
  /* 11658db2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658db6 jle 0x11658dc2 */
  if ((C.zf||C.sf!=C.of)) goto L_11658dc2;
  /* 11658db8 mov eax, 1 */
  EAX = (0x1u);
  /* 11658dbd jmp 0x11659074 */
  goto L_11659074;
L_11658dc2:;
  /* 11658dc2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658dc6 jle 0x11658dd2 */
  if ((C.zf||C.sf!=C.of)) goto L_11658dd2;
  /* 11658dc8 mov eax, 3 */
  EAX = (0x3u);
  /* 11658dcd jmp 0x11659074 */
  goto L_11659074;
L_11658dd2:;
  /* 11658dd2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11658dd5 push eax */
  push32((uint32_t)(EAX));
  /* 11658dd6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11658dd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11658dda call dword ptr [0x11678308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678308))), 0x11658de0u);
  /* 11658de0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658de2 jne 0x11658deb */
  if (!C.zf) goto L_11658deb;
  /* 11658de4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658de6 jmp 0x11659074 */
  goto L_11659074;
L_11658deb:;
  /* 11658deb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658def jne 0x11658df7 */
  if (!C.zf) goto L_11658df7;
  /* 11658df1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658df5 je 0x11658e24 */
  if (C.zf) goto L_11658e24;
L_11658df7:;
  /* 11658df7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658dfb jne 0x11658e03 */
  if (!C.zf) goto L_11658e03;
  /* 11658dfd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658e01 je 0x11658e24 */
  if (C.zf) goto L_11658e24;
L_11658e03:;
  /* 11658e03 push 0x11671a9c */
  push32((uint32_t)(0x11671a9cu));
  /* 11658e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11658e0a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11658e0f push 0x11671a94 */
  push32((uint32_t)(0x11671a94u));
  /* 11658e14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11658e16 call 0x11645180 */
  push32(0x11658e1bu); f_11645180();
  /* 11658e1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11658e1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658e21 jne 0x11658e24 */
  if (!C.zf) goto L_11658e24;
  /* 11658e23 int3  */
  x86_unimpl("int3 @ 0x11658e23");
L_11658e24:;
  /* 11658e24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11658e26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11658e28 jne 0x11658deb */
  if (!C.zf) goto L_11658deb;
  /* 11658e2a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658e2e jle 0x11658ea3 */
  if ((C.zf||C.sf!=C.of)) goto L_11658ea3;
  /* 11658e30 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658e34 jae 0x11658e40 */
  if (!C.cf) goto L_11658e40;
  /* 11658e36 mov eax, 3 */
  EAX = (0x3u);
  /* 11658e3b jmp 0x11659074 */
  goto L_11659074;
L_11658e40:;
  /* 11658e40 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11658e43 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11658e46 jmp 0x11658e51 */
  goto L_11658e51;
L_11658e48:;
  /* 11658e48 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11658e4b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658e4e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11658e51:;
  /* 11658e51 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11658e54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658e56 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11658e58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658e5a je 0x11658e99 */
  if (C.zf) goto L_11658e99;
  /* 11658e5c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11658e5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11658e61 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11658e64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11658e66 je 0x11658e99 */
  if (C.zf) goto L_11658e99;
  /* 11658e68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658e6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11658e6d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11658e6f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11658e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658e74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11658e76 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658e78 jl 0x11658e97 */
  if ((C.sf!=C.of)) goto L_11658e97;
  /* 11658e7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658e7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11658e7f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11658e81 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11658e84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11658e86 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11658e89 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658e8b jg 0x11658e97 */
  if ((!C.zf&&C.sf==C.of)) goto L_11658e97;
  /* 11658e8d mov eax, 2 */
  EAX = (0x2u);
  /* 11658e92 jmp 0x11659074 */
  goto L_11659074;
L_11658e97:;
  /* 11658e97 jmp 0x11658e48 */
  goto L_11658e48;
L_11658e99:;
  /* 11658e99 mov eax, 3 */
  EAX = (0x3u);
  /* 11658e9e jmp 0x11659074 */
  goto L_11659074;
L_11658ea3:;
  /* 11658ea3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658ea7 jle 0x11658f1c */
  if ((C.zf||C.sf!=C.of)) goto L_11658f1c;
  /* 11658ea9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658ead jae 0x11658eb9 */
  if (!C.cf) goto L_11658eb9;
  /* 11658eaf mov eax, 1 */
  EAX = (0x1u);
  /* 11658eb4 jmp 0x11659074 */
  goto L_11659074;
L_11658eb9:;
  /* 11658eb9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11658ebc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11658ebf jmp 0x11658eca */
  goto L_11658eca;
L_11658ec1:;
  /* 11658ec1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11658ec4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658ec7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11658eca:;
  /* 11658eca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11658ecd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11658ecf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11658ed1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11658ed3 je 0x11658f12 */
  if (C.zf) goto L_11658f12;
  /* 11658ed5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11658ed8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11658eda mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11658edd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11658edf je 0x11658f12 */
  if (C.zf) goto L_11658f12;
  /* 11658ee1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11658ee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658ee6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11658ee8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11658eeb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11658eed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11658eef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658ef1 jl 0x11658f10 */
  if ((C.sf!=C.of)) goto L_11658f10;
  /* 11658ef3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11658ef6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11658ef8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11658efa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11658efd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658eff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11658f02 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658f04 jg 0x11658f10 */
  if ((!C.zf&&C.sf==C.of)) goto L_11658f10;
  /* 11658f06 mov eax, 2 */
  EAX = (0x2u);
  /* 11658f0b jmp 0x11659074 */
  goto L_11659074;
L_11658f10:;
  /* 11658f10 jmp 0x11658ec1 */
  goto L_11658ec1;
L_11658f12:;
  /* 11658f12 mov eax, 1 */
  EAX = (0x1u);
  /* 11658f17 jmp 0x11659074 */
  goto L_11659074;
L_11658f1c:;
  /* 11658f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11658f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11658f20 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11658f23 push ecx */
  push32((uint32_t)(ECX));
  /* 11658f24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658f27 push edx */
  push32((uint32_t)(EDX));
  /* 11658f28 push 9 */
  push32((uint32_t)(0x9u));
  /* 11658f2a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11658f2d push eax */
  push32((uint32_t)(EAX));
  /* 11658f2e call dword ptr [0x116782fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782fc))), 0x11658f34u);
  /* 11658f34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11658f37 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658f3b jne 0x11658f44 */
  if (!C.zf) goto L_11658f44;
  /* 11658f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658f3f jmp 0x11659074 */
  goto L_11659074;
L_11658f44:;
  /* 11658f44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11658f4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11658f4e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11658f50 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658f53 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11658f55 call 0x11649a60 */
  push32(0x11658f5au); f_11649a60();
  /* 11658f5a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11658f5d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11658f60 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11658f63 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11658f66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11658f6d jmp 0x11658f86 */
  goto L_11658f86;
  /* 11658f6f mov eax, 1 */
  EAX = (0x1u);
  /* 11658f74 ret  */
  ESPCHK(0x11658c90u, _esp0);
  ESP += 4; return;
  /* 11658f75 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11658f78 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11658f7f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11658f86:;
  /* 11658f86 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658f8a jne 0x11658f93 */
  if (!C.zf) goto L_11658f93;
  /* 11658f8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658f8e jmp 0x11659074 */
  goto L_11659074;
L_11658f93:;
  /* 11658f93 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11658f96 push edx */
  push32((uint32_t)(EDX));
  /* 11658f97 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11658f9a push eax */
  push32((uint32_t)(EAX));
  /* 11658f9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11658f9e push ecx */
  push32((uint32_t)(ECX));
  /* 11658f9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11658fa2 push edx */
  push32((uint32_t)(EDX));
  /* 11658fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11658fa5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11658fa8 push eax */
  push32((uint32_t)(EAX));
  /* 11658fa9 call dword ptr [0x116782fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782fc))), 0x11658fafu);
  /* 11658faf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11658fb1 jne 0x11658fba */
  if (!C.zf) goto L_11658fba;
  /* 11658fb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658fb5 jmp 0x11659074 */
  goto L_11659074;
L_11658fba:;
  /* 11658fba push 0 */
  push32((uint32_t)(0x0u));
  /* 11658fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11658fbe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11658fc1 push ecx */
  push32((uint32_t)(ECX));
  /* 11658fc2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11658fc5 push edx */
  push32((uint32_t)(EDX));
  /* 11658fc6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11658fc8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11658fcb push eax */
  push32((uint32_t)(EAX));
  /* 11658fcc call dword ptr [0x116782fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782fc))), 0x11658fd2u);
  /* 11658fd2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11658fd5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11658fd9 jne 0x11658fe2 */
  if (!C.zf) goto L_11658fe2;
  /* 11658fdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11658fdd jmp 0x11659074 */
  goto L_11659074;
L_11658fe2:;
  /* 11658fe2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11658fe9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11658fec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11658fee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11658ff1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11658ff3 call 0x11649a60 */
  push32(0x11658ff8u); f_11649a60();
  /* 11658ff8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11658ffb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11658ffe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11659001 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11659004 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1165900b jmp 0x11659024 */
  goto L_11659024;
  /* 1165900d mov eax, 1 */
  EAX = (0x1u);
  /* 11659012 ret  */
  ESPCHK(0x11658c90u, _esp0);
  ESP += 4; return;
  /* 11659013 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11659016 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1165901d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11659024:;
  /* 11659024 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659028 jne 0x1165902e */
  if (!C.zf) goto L_1165902e;
  /* 1165902a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165902c jmp 0x11659074 */
  goto L_11659074;
L_1165902e:;
  /* 1165902e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11659031 push edx */
  push32((uint32_t)(EDX));
  /* 11659032 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11659035 push eax */
  push32((uint32_t)(EAX));
  /* 11659036 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11659039 push ecx */
  push32((uint32_t)(ECX));
  /* 1165903a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1165903d push edx */
  push32((uint32_t)(EDX));
  /* 1165903e push 1 */
  push32((uint32_t)(0x1u));
  /* 11659040 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11659043 push eax */
  push32((uint32_t)(EAX));
  /* 11659044 call dword ptr [0x116782fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782fc))), 0x1165904au);
  /* 1165904a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165904c jne 0x11659052 */
  if (!C.zf) goto L_11659052;
  /* 1165904e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11659050 jmp 0x11659074 */
  goto L_11659074;
L_11659052:;
  /* 11659052 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11659055 push ecx */
  push32((uint32_t)(ECX));
  /* 11659056 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11659059 push edx */
  push32((uint32_t)(EDX));
  /* 1165905a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1165905d push eax */
  push32((uint32_t)(EAX));
  /* 1165905e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11659061 push ecx */
  push32((uint32_t)(ECX));
  /* 11659062 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11659065 push edx */
  push32((uint32_t)(EDX));
  /* 11659066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11659069 push eax */
  push32((uint32_t)(EAX));
  /* 1165906a call dword ptr [0x116782b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782b0))), 0x11659070u);
  /* 11659070 jmp 0x11659074 */
  goto L_11659074;
L_11659072:;
  /* 11659072 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11659074:;
  /* 11659074 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11659077 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1165907a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11659081 pop edi */
  EDI = (pop32());
  /* 11659082 pop esi */
  ESI = (pop32());
  /* 11659083 pop ebx */
  EBX = (pop32());
  /* 11659084 mov esp, ebp */
  ESP = (EBP);
  /* 11659086 pop ebp */
  EBP = (pop32());
  /* 11659087 ret  */
  ESPCHK(0x11658c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10019090 @ 0x11659090 (80 bytes, 32 insns) */
void f_11659090(void) {
  FTRACE(0x11659090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11659090 push ebp */
  push32((uint32_t)(EBP));
  /* 11659091 mov ebp, esp */
  EBP = (ESP);
  /* 11659093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11659096 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11659099 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1165909c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165909f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116590a2:;
  /* 116590a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116590a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116590a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116590ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116590ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116590b0 je 0x116590c7 */
  if (C.zf) goto L_116590c7;
  /* 116590b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116590b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116590b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116590ba je 0x116590c7 */
  if (C.zf) goto L_116590c7;
  /* 116590bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116590bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116590c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116590c5 jmp 0x116590a2 */
  goto L_116590a2;
L_116590c7:;
  /* 116590c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116590ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116590cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116590cf jne 0x116590d9 */
  if (!C.zf) goto L_116590d9;
  /* 116590d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116590d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116590d7 jmp 0x116590dc */
  goto L_116590dc;
L_116590d9:;
  /* 116590d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_116590dc:;
  /* 116590dc mov esp, ebp */
  ESP = (EBP);
  /* 116590de pop ebp */
  EBP = (pop32());
  /* 116590df ret  */
  ESPCHK(0x11659090u, _esp0);
  ESP += 4; return;
}

/* FUN_100190e0 @ 0x116590e0 (736 bytes, 224 insns) */
void f_116590e0(void) {
  FTRACE(0x116590e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116590e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116590e1 mov ebp, esp */
  EBP = (ESP);
  /* 116590e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116590e6 push esi */
  push32((uint32_t)(ESI));
  /* 116590e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116590eb je 0x1165910c */
  if (C.zf) goto L_1165910c;
  /* 116590ed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 116590ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116590f2 push eax */
  push32((uint32_t)(EAX));
  /* 116590f3 call 0x11659530 */
  push32(0x116590f8u); f_11659530();
  /* 116590f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116590fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116590fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659102 je 0x1165910c */
  if (C.zf) goto L_1165910c;
  /* 11659104 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11659107 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165910a jne 0x11659114 */
  if (!C.zf) goto L_11659114;
L_1165910c:;
  /* 1165910c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165910f jmp 0x116593bb */
  goto L_116593bb;
L_11659114:;
  /* 11659114 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11659117 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1165911b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1165911d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165911f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11659120 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11659123 mov ecx, dword ptr [0x11675fc4] */
  ECX = (r32((uint32_t)(0x11675fc4)));
  /* 11659129 cmp ecx, dword ptr [0x11675fc8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11675fc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165912f jne 0x11659145 */
  if (!C.zf) goto L_11659145;
  /* 11659131 mov edx, dword ptr [0x11675fc4] */
  EDX = (r32((uint32_t)(0x11675fc4)));
  /* 11659137 push edx */
  push32((uint32_t)(EDX));
  /* 11659138 call 0x11659440 */
  push32(0x1165913du); f_11659440();
  /* 1165913d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11659140 mov dword ptr [0x11675fc4], eax */
  w32((uint32_t)(0x11675fc4), (EAX));
L_11659145:;
  /* 11659145 cmp dword ptr [0x11675fc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675fc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165914c jne 0x11659205 */
  if (!C.zf) goto L_11659205;
  /* 11659152 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659156 je 0x11659177 */
  if (C.zf) goto L_11659177;
  /* 11659158 cmp dword ptr [0x11675fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165915f je 0x11659177 */
  if (C.zf) goto L_11659177;
  /* 11659161 call 0x11658be0 */
  push32(0x11659166u); f_11658be0();
  /* 11659166 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11659168 je 0x11659172 */
  if (C.zf) goto L_11659172;
  /* 1165916a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165916d jmp 0x116593bb */
  goto L_116593bb;
L_11659172:;
  /* 11659172 jmp 0x11659205 */
  goto L_11659205;
L_11659177:;
  /* 11659177 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165917b je 0x11659184 */
  if (C.zf) goto L_11659184;
  /* 1165917d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165917f jmp 0x116593bb */
  goto L_116593bb;
L_11659184:;
  /* 11659184 cmp dword ptr [0x11675fc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675fc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165918b jne 0x116591c4 */
  if (!C.zf) goto L_116591c4;
  /* 1165918d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11659192 push 0x11671af8 */
  push32((uint32_t)(0x11671af8u));
  /* 11659197 push 2 */
  push32((uint32_t)(0x2u));
  /* 11659199 push 4 */
  push32((uint32_t)(0x4u));
  /* 1165919b call 0x116468c0 */
  push32(0x116591a0u); f_116468c0();
  /* 116591a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116591a3 mov dword ptr [0x11675fc4], eax */
  w32((uint32_t)(0x11675fc4), (EAX));
  /* 116591a8 cmp dword ptr [0x11675fc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675fc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116591af jne 0x116591b9 */
  if (!C.zf) goto L_116591b9;
  /* 116591b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116591b4 jmp 0x116593bb */
  goto L_116593bb;
L_116591b9:;
  /* 116591b9 mov eax, dword ptr [0x11675fc4] */
  EAX = (r32((uint32_t)(0x11675fc4)));
  /* 116591be mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_116591c4:;
  /* 116591c4 cmp dword ptr [0x11675fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116591cb jne 0x11659205 */
  if (!C.zf) goto L_11659205;
  /* 116591cd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 116591d2 push 0x11671af8 */
  push32((uint32_t)(0x11671af8u));
  /* 116591d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116591d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 116591db call 0x116468c0 */
  push32(0x116591e0u); f_116468c0();
  /* 116591e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116591e3 mov dword ptr [0x11675fcc], eax */
  w32((uint32_t)(0x11675fcc), (EAX));
  /* 116591e8 cmp dword ptr [0x11675fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116591ef jne 0x116591f9 */
  if (!C.zf) goto L_116591f9;
  /* 116591f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116591f4 jmp 0x116593bb */
  goto L_116593bb;
L_116591f9:;
  /* 116591f9 mov ecx, dword ptr [0x11675fcc] */
  ECX = (r32((uint32_t)(0x11675fcc)));
  /* 116591ff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11659205:;
  /* 11659205 mov edx, dword ptr [0x11675fc4] */
  EDX = (r32((uint32_t)(0x11675fc4)));
  /* 1165920b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1165920e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11659211 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11659214 push eax */
  push32((uint32_t)(EAX));
  /* 11659215 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11659218 push ecx */
  push32((uint32_t)(ECX));
  /* 11659219 call 0x116593c0 */
  push32(0x1165921eu); f_116593c0();
  /* 1165921e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11659221 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11659224 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659228 jl 0x116592c1 */
  if ((C.sf!=C.of)) goto L_116592c1;
  /* 1165922e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11659231 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659234 je 0x116592c1 */
  if (C.zf) goto L_116592c1;
  /* 1165923a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165923e je 0x116592b3 */
  if (C.zf) goto L_116592b3;
  /* 11659240 push 2 */
  push32((uint32_t)(0x2u));
  /* 11659242 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11659245 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11659248 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1165924b push edx */
  push32((uint32_t)(EDX));
  /* 1165924c call 0x11647350 */
  push32(0x11659251u); f_11647350();
  /* 11659251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11659254 jmp 0x1165925f */
  goto L_1165925f;
L_11659256:;
  /* 11659256 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11659259 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165925c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1165925f:;
  /* 1165925f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11659262 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11659265 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659269 je 0x11659280 */
  if (C.zf) goto L_11659280;
  /* 1165926b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165926e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11659271 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11659274 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11659277 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1165927b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1165927e jmp 0x11659256 */
  goto L_11659256;
L_11659280:;
  /* 11659280 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11659285 push 0x11671af8 */
  push32((uint32_t)(0x11671af8u));
  /* 1165928a push 2 */
  push32((uint32_t)(0x2u));
  /* 1165928c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165928f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11659292 push eax */
  push32((uint32_t)(EAX));
  /* 11659293 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11659296 push ecx */
  push32((uint32_t)(ECX));
  /* 11659297 call 0x11646d50 */
  push32(0x1165929cu); f_11646d50();
  /* 1165929c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165929f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116592a2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116592a6 je 0x116592b1 */
  if (C.zf) goto L_116592b1;
  /* 116592a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116592ab mov dword ptr [0x11675fc4], edx */
  w32((uint32_t)(0x11675fc4), (EDX));
L_116592b1:;
  /* 116592b1 jmp 0x116592bf */
  goto L_116592bf;
L_116592b3:;
  /* 116592b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116592b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116592b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116592bc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_116592bf:;
  /* 116592bf jmp 0x11659334 */
  goto L_11659334;
L_116592c1:;
  /* 116592c1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116592c5 jne 0x1165932d */
  if (!C.zf) goto L_1165932d;
  /* 116592c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116592cb jge 0x116592d5 */
  if ((C.sf==C.of)) goto L_116592d5;
  /* 116592cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116592d0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116592d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116592d5:;
  /* 116592d5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 116592da push 0x11671af8 */
  push32((uint32_t)(0x11671af8u));
  /* 116592df push 2 */
  push32((uint32_t)(0x2u));
  /* 116592e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116592e4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 116592eb push edx */
  push32((uint32_t)(EDX));
  /* 116592ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116592ef push eax */
  push32((uint32_t)(EAX));
  /* 116592f0 call 0x11646d50 */
  push32(0x116592f5u); f_11646d50();
  /* 116592f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116592f8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116592fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116592ff jne 0x11659309 */
  if (!C.zf) goto L_11659309;
  /* 11659301 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11659304 jmp 0x116593bb */
  goto L_116593bb;
L_11659309:;
  /* 11659309 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165930c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165930f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11659312 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11659315 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11659318 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165931b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11659323 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11659326 mov dword ptr [0x11675fc4], eax */
  w32((uint32_t)(0x11675fc4), (EAX));
  /* 1165932b jmp 0x11659334 */
  goto L_11659334;
L_1165932d:;
  /* 1165932d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165932f jmp 0x116593bb */
  goto L_116593bb;
L_11659334:;
  /* 11659334 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659338 je 0x116593b9 */
  if (C.zf) goto L_116593b9;
  /* 1165933a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1165933f push 0x11671af8 */
  push32((uint32_t)(0x11671af8u));
  /* 11659344 push 2 */
  push32((uint32_t)(0x2u));
  /* 11659346 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11659349 push ecx */
  push32((uint32_t)(ECX));
  /* 1165934a call 0x116496f0 */
  push32(0x1165934fu); f_116496f0();
  /* 1165934f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11659352 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11659355 push eax */
  push32((uint32_t)(EAX));
  /* 11659356 call 0x116468c0 */
  push32(0x1165935bu); f_116468c0();
  /* 1165935b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165935e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11659361 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659365 je 0x116593b9 */
  if (C.zf) goto L_116593b9;
  /* 11659367 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165936a push edx */
  push32((uint32_t)(EDX));
  /* 1165936b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1165936e push eax */
  push32((uint32_t)(EAX));
  /* 1165936f call 0x11649870 */
  push32(0x11659374u); f_11649870();
  /* 11659374 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11659377 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1165937a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165937d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11659380 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11659382 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11659385 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11659388 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1165938b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165938e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11659391 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11659394 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11659397 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11659399 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165939b not edx */
  EDX = (~(EDX));
  /* 1165939d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 116593a0 push edx */
  push32((uint32_t)(EDX));
  /* 116593a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116593a4 push eax */
  push32((uint32_t)(EAX));
  /* 116593a5 call dword ptr [0x116782ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782ac))), 0x116593abu);
  /* 116593ab push 2 */
  push32((uint32_t)(0x2u));
  /* 116593ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116593b0 push ecx */
  push32((uint32_t)(ECX));
  /* 116593b1 call 0x11647350 */
  push32(0x116593b6u); f_11647350();
  /* 116593b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116593b9:;
  /* 116593b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116593bb:;
  /* 116593bb pop esi */
  ESI = (pop32());
  /* 116593bc mov esp, ebp */
  ESP = (EBP);
  /* 116593be pop ebp */
  EBP = (pop32());
  /* 116593bf ret  */
  ESPCHK(0x116590e0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x116593c0 (124 bytes, 47 insns) */
void f_116593c0(void) {
  FTRACE(0x116593c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116593c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116593c1 mov ebp, esp */
  EBP = (ESP);
  /* 116593c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116593c4 mov eax, dword ptr [0x11675fc4] */
  EAX = (r32((uint32_t)(0x11675fc4)));
  /* 116593c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116593cc jmp 0x116593d7 */
  goto L_116593d7;
L_116593ce:;
  /* 116593ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116593d1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116593d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116593d7:;
  /* 116593d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116593da cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116593dd je 0x1165942a */
  if (C.zf) goto L_1165942a;
  /* 116593df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116593e2 push eax */
  push32((uint32_t)(EAX));
  /* 116593e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116593e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116593e8 push edx */
  push32((uint32_t)(EDX));
  /* 116593e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116593ec push eax */
  push32((uint32_t)(EAX));
  /* 116593ed call 0x11658b90 */
  push32(0x116593f2u); f_11658b90();
  /* 116593f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116593f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116593f7 jne 0x11659428 */
  if (!C.zf) goto L_11659428;
  /* 116593f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116593fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116593fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11659401 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11659405 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659408 je 0x1165941a */
  if (C.zf) goto L_1165941a;
  /* 1165940a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165940d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1165940f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11659412 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11659416 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11659418 jne 0x11659428 */
  if (!C.zf) goto L_11659428;
L_1165941a:;
  /* 1165941a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165941d sub eax, dword ptr [0x11675fc4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11675fc4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11659423 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11659426 jmp 0x11659438 */
  goto L_11659438;
L_11659428:;
  /* 11659428 jmp 0x116593ce */
  goto L_116593ce;
L_1165942a:;
  /* 1165942a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165942d sub eax, dword ptr [0x11675fc4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11675fc4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11659433 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11659436 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11659438:;
  /* 11659438 mov esp, ebp */
  ESP = (EBP);
  /* 1165943a pop ebp */
  EBP = (pop32());
  /* 1165943b ret  */
  ESPCHK(0x116593c0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11659440 (238 bytes, 80 insns) */
void f_11659440(void) {
  FTRACE(0x11659440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11659440 push ebp */
  push32((uint32_t)(EBP));
  /* 11659441 mov ebp, esp */
  EBP = (ESP);
  /* 11659443 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11659446 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1165944d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11659450 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11659453 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659457 jne 0x11659460 */
  if (!C.zf) goto L_11659460;
  /* 11659459 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165945b jmp 0x1165952a */
  goto L_1165952a;
L_11659460:;
  /* 11659460 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11659463 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11659465 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11659468 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165946b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1165946e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11659470 je 0x1165947d */
  if (C.zf) goto L_1165947d;
  /* 11659472 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11659475 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11659478 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1165947b jmp 0x11659460 */
  goto L_11659460;
L_1165947d:;
  /* 1165947d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11659482 push 0x11671af8 */
  push32((uint32_t)(0x11671af8u));
  /* 11659487 push 2 */
  push32((uint32_t)(0x2u));
  /* 11659489 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1165948c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11659493 push eax */
  push32((uint32_t)(EAX));
  /* 11659494 call 0x116468c0 */
  push32(0x11659499u); f_116468c0();
  /* 11659499 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165949c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1165949f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116594a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116594a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116594a9 jne 0x116594b5 */
  if (!C.zf) goto L_116594b5;
  /* 116594ab push 9 */
  push32((uint32_t)(0x9u));
  /* 116594ad call 0x11645030 */
  push32(0x116594b2u); f_11645030();
  /* 116594b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116594b5:;
  /* 116594b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116594b8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116594bb:;
  /* 116594bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116594be cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116594c1 je 0x1165951e */
  if (C.zf) goto L_1165951e;
  /* 116594c3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 116594c8 push 0x11671af8 */
  push32((uint32_t)(0x11671af8u));
  /* 116594cd push 2 */
  push32((uint32_t)(0x2u));
  /* 116594cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116594d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116594d4 push edx */
  push32((uint32_t)(EDX));
  /* 116594d5 call 0x116496f0 */
  push32(0x116594dau); f_116496f0();
  /* 116594da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116594dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116594e0 push eax */
  push32((uint32_t)(EAX));
  /* 116594e1 call 0x116468c0 */
  push32(0x116594e6u); f_116468c0();
  /* 116594e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116594e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116594ec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116594ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116594f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116594f4 je 0x1165950a */
  if (C.zf) goto L_1165950a;
  /* 116594f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116594f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116594fb push ecx */
  push32((uint32_t)(ECX));
  /* 116594fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116594ff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11659501 push eax */
  push32((uint32_t)(EAX));
  /* 11659502 call 0x11649870 */
  push32(0x11659507u); f_11649870();
  /* 11659507 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1165950a:;
  /* 1165950a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165950d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11659510 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11659513 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11659516 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11659519 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1165951c jmp 0x116594bb */
  goto L_116594bb;
L_1165951e:;
  /* 1165951e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11659521 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11659527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1165952a:;
  /* 1165952a mov esp, ebp */
  ESP = (EBP);
  /* 1165952c pop ebp */
  EBP = (pop32());
  /* 1165952d ret  */
  ESPCHK(0x11659440u, _esp0);
  ESP += 4; return;
}

/* FUN_10019530 @ 0x11659530 (237 bytes, 81 insns) */
void f_11659530(void) {
  FTRACE(0x11659530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11659530 push ebp */
  push32((uint32_t)(EBP));
  /* 11659531 mov ebp, esp */
  EBP = (ESP);
  /* 11659533 push ecx */
  push32((uint32_t)(ECX));
  /* 11659534 cmp dword ptr [0x1167771c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167771c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165953b jne 0x11659552 */
  if (!C.zf) goto L_11659552;
  /* 1165953d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11659540 push eax */
  push32((uint32_t)(EAX));
  /* 11659541 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11659544 push ecx */
  push32((uint32_t)(ECX));
  /* 11659545 call 0x11659630 */
  push32(0x1165954au); f_11659630();
  /* 1165954a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165954d jmp 0x11659619 */
  goto L_11659619;
L_11659552:;
  /* 11659552 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11659554 call 0x1164b880 */
  push32(0x11659559u); f_1164b880();
  /* 11659559 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165955c jmp 0x11659567 */
  goto L_11659567;
L_1165955e:;
  /* 1165955e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11659561 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11659564 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11659567:;
  /* 11659567 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165956a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1165956e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11659572 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11659575 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1165957b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1165957d je 0x116595fb */
  if (C.zf) goto L_116595fb;
  /* 1165957f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11659582 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11659587 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11659589 mov cl, byte ptr [eax + 0x11677821] */
  CL = (r8((uint32_t)(EAX + 0x11677821)));
  /* 1165958f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11659592 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11659594 je 0x116595e6 */
  if (C.zf) goto L_116595e6;
  /* 11659596 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11659599 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165959c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1165959f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116595a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116595a4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116595a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116595a8 jne 0x116595b8 */
  if (!C.zf) goto L_116595b8;
  /* 116595aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116595ac call 0x1164b920 */
  push32(0x116595b1u); f_1164b920();
  /* 116595b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116595b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116595b6 jmp 0x11659619 */
  goto L_11659619;
L_116595b8:;
  /* 116595b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116595bb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116595c1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 116595c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116595c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116595c9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116595cb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116595cd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116595d0 jne 0x116595e4 */
  if (!C.zf) goto L_116595e4;
  /* 116595d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116595d4 call 0x1164b920 */
  push32(0x116595d9u); f_1164b920();
  /* 116595d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116595dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116595df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116595e2 jmp 0x11659619 */
  goto L_11659619;
L_116595e4:;
  /* 116595e4 jmp 0x116595f6 */
  goto L_116595f6;
L_116595e6:;
  /* 116595e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116595e9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116595ef cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116595f2 jne 0x116595f6 */
  if (!C.zf) goto L_116595f6;
  /* 116595f4 jmp 0x116595fb */
  goto L_116595fb;
L_116595f6:;
  /* 116595f6 jmp 0x1165955e */
  goto L_1165955e;
L_116595fb:;
  /* 116595fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116595fd call 0x1164b920 */
  push32(0x11659602u); f_1164b920();
  /* 11659602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11659605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11659608 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165960d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11659610 jne 0x11659617 */
  if (!C.zf) goto L_11659617;
  /* 11659612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11659615 jmp 0x11659619 */
  goto L_11659619;
L_11659617:;
  /* 11659617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11659619:;
  /* 11659619 mov esp, ebp */
  ESP = (EBP);
  /* 1165961b pop ebp */
  EBP = (pop32());
  /* 1165961c ret  */
  ESPCHK(0x11659530u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11659630 (193 bytes, 87 insns) */
void f_11659630(void) {
  FTRACE(0x11659630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11659630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11659632 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11659636 push ebx */
  push32((uint32_t)(EBX));
  /* 11659637 mov ebx, eax */
  EBX = (EAX);
  /* 11659639 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1165963c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11659640 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11659646 je 0x1165965b */
  if (C.zf) goto L_1165965b;
L_11659648:;
  /* 11659648 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1165964a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1165964b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1165964d je 0x11659620 */
  if (C.zf) { jmp_ind(0x11659620u); return; }
  /* 1165964f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11659651 je 0x116596a4 */
  if (C.zf) goto L_116596a4;
  /* 11659653 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11659659 jne 0x11659648 */
  if (!C.zf) goto L_11659648;
L_1165965b:;
  /* 1165965b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1165965d push edi */
  push32((uint32_t)(EDI));
  /* 1165965e mov eax, ebx */
  EAX = (EBX);
  /* 11659660 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11659663 push esi */
  push32((uint32_t)(ESI));
  /* 11659664 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11659666:;
  /* 11659666 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11659668 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1165966d mov eax, ecx */
  EAX = (ECX);
  /* 1165966f mov esi, edi */
  ESI = (EDI);
  /* 11659671 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11659673 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11659675 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11659677 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1165967a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165967d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1165967f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11659681 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11659684 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1165968a jne 0x116596a8 */
  if (!C.zf) goto L_116596a8;
  /* 1165968c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11659691 je 0x11659666 */
  if (C.zf) goto L_11659666;
  /* 11659693 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11659698 jne 0x116596a2 */
  if (!C.zf) goto L_116596a2;
  /* 1165969a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 116596a0 jne 0x11659666 */
  if (!C.zf) goto L_11659666;
L_116596a2:;
  /* 116596a2 pop esi */
  ESI = (pop32());
  /* 116596a3 pop edi */
  EDI = (pop32());
L_116596a4:;
  /* 116596a4 pop ebx */
  EBX = (pop32());
  /* 116596a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116596a7 ret  */
  ESPCHK(0x11659630u, _esp0);
  ESP += 4; return;
L_116596a8:;
  /* 116596a8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 116596ab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116596ad je 0x116596e5 */
  if (C.zf) goto L_116596e5;
  /* 116596af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116596b1 je 0x116596a2 */
  if (C.zf) goto L_116596a2;
  /* 116596b3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116596b5 je 0x116596de */
  if (C.zf) goto L_116596de;
  /* 116596b7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116596b9 je 0x116596a2 */
  if (C.zf) goto L_116596a2;
  /* 116596bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116596be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116596c0 je 0x116596d7 */
  if (C.zf) goto L_116596d7;
  /* 116596c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116596c4 je 0x116596a2 */
  if (C.zf) goto L_116596a2;
  /* 116596c6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116596c8 je 0x116596d0 */
  if (C.zf) goto L_116596d0;
  /* 116596ca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116596cc je 0x116596a2 */
  if (C.zf) goto L_116596a2;
  /* 116596ce jmp 0x11659666 */
  goto L_11659666;
L_116596d0:;
  /* 116596d0 pop esi */
  ESI = (pop32());
  /* 116596d1 pop edi */
  EDI = (pop32());
  /* 116596d2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 116596d5 pop ebx */
  EBX = (pop32());
  /* 116596d6 ret  */
  ESPCHK(0x11659630u, _esp0);
  ESP += 4; return;
L_116596d7:;
  /* 116596d7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 116596da pop esi */
  ESI = (pop32());
  /* 116596db pop edi */
  EDI = (pop32());
  /* 116596dc pop ebx */
  EBX = (pop32());
  /* 116596dd ret  */
  ESPCHK(0x11659630u, _esp0);
  ESP += 4; return;
L_116596de:;
  /* 116596de lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 116596e1 pop esi */
  ESI = (pop32());
  /* 116596e2 pop edi */
  EDI = (pop32());
  /* 116596e3 pop ebx */
  EBX = (pop32());
  /* 116596e4 ret  */
  ESPCHK(0x11659630u, _esp0);
  ESP += 4; return;
L_116596e5:;
  /* 116596e5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 116596e8 pop esi */
  ESI = (pop32());
  /* 116596e9 pop edi */
  EDI = (pop32());
  /* 116596ea pop ebx */
  EBX = (pop32());
  /* 116596eb ret  */
  ESPCHK(0x11659630u, _esp0);
  ESP += 4; return;
  /* 116596ec jmp dword ptr [0x1167833c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1167833c)))); return;
}

/* RtlUnwind @ 0x11659848 (6 bytes, 1 insns) */
void f_11659848(void) {
  FTRACE(0x11659848u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11659848 jmp dword ptr [0x116782ec] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x116782ec)))); return;
}

