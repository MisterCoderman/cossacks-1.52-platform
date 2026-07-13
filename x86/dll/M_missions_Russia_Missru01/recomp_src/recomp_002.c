#include "recomp.h"

/* FUN_10012bf0 @ 0x10992bf0 (289 bytes, 97 insns) */
void f_10992bf0(void) {
  FTRACE(0x10992bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10992bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10992bf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992bf6 push esi */
  push32((uint32_t)(ESI));
  /* 10992bf7 mov eax, dword ptr [0x109b0c98] */
  EAX = (r32((uint32_t)(0x109b0c98)));
  /* 10992bfc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10992bff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10992c06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10992c0d jmp 0x10992c18 */
  goto L_10992c18;
L_10992c0f:;
  /* 10992c0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992c12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992c15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10992c18:;
  /* 10992c18 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992c1c jae 0x10992c51 */
  if (!C.cf) goto L_10992c51;
  /* 10992c1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992c21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992c24 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10992c27 push ecx */
  push32((uint32_t)(ECX));
  /* 10992c28 call 0x10988cd0 */
  push32(0x10992c2du); f_10988cd0();
  /* 10992c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992c30 mov esi, eax */
  ESI = (EAX);
  /* 10992c32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992c35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992c38 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10992c3c push ecx */
  push32((uint32_t)(ECX));
  /* 10992c3d call 0x10988cd0 */
  push32(0x10992c42u); f_10988cd0();
  /* 10992c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992c45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992c48 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10992c4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10992c4f jmp 0x10992c0f */
  goto L_10992c0f;
L_10992c51:;
  /* 10992c51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10992c54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992c57 push eax */
  push32((uint32_t)(EAX));
  /* 10992c58 call 0x10985e80 */
  push32(0x10992c5du); f_10985e80();
  /* 10992c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992c60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10992c63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992c67 je 0x10992d09 */
  if (C.zf) goto L_10992d09;
  /* 10992c6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10992c70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10992c73 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10992c7a jmp 0x10992c85 */
  goto L_10992c85;
L_10992c7c:;
  /* 10992c7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992c7f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992c82 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10992c85:;
  /* 10992c85 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992c89 jae 0x10992cfa */
  if (!C.cf) goto L_10992cfa;
  /* 10992c8b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992c8e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10992c91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992c94 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992c97 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10992c9a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992c9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992ca0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10992ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 10992ca4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992ca7 push edx */
  push32((uint32_t)(EDX));
  /* 10992ca8 call 0x10988e50 */
  push32(0x10992cadu); f_10988e50();
  /* 10992cad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992cb0 push eax */
  push32((uint32_t)(EAX));
  /* 10992cb1 call 0x10988cd0 */
  push32(0x10992cb6u); f_10988cd0();
  /* 10992cb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992cb9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992cbc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992cbe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10992cc1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992cc4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10992cc7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992cca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992ccd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10992cd0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992cd3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992cd6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10992cda push eax */
  push32((uint32_t)(EAX));
  /* 10992cdb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992cde push ecx */
  push32((uint32_t)(ECX));
  /* 10992cdf call 0x10988e50 */
  push32(0x10992ce4u); f_10988e50();
  /* 10992ce4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992ce7 push eax */
  push32((uint32_t)(EAX));
  /* 10992ce8 call 0x10988cd0 */
  push32(0x10992cedu); f_10988cd0();
  /* 10992ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992cf0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992cf3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992cf5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10992cf8 jmp 0x10992c7c */
  goto L_10992c7c;
L_10992cfa:;
  /* 10992cfa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992cfd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10992d00 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992d03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992d06 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10992d09:;
  /* 10992d09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10992d0c pop esi */
  ESI = (pop32());
  /* 10992d0d mov esp, ebp */
  ESP = (EBP);
  /* 10992d0f pop ebp */
  EBP = (pop32());
  /* 10992d10 ret  */
  ESPCHK(0x10992bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d20 @ 0x10992d20 (291 bytes, 97 insns) */
void f_10992d20(void) {
  FTRACE(0x10992d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10992d21 mov ebp, esp */
  EBP = (ESP);
  /* 10992d23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992d26 push esi */
  push32((uint32_t)(ESI));
  /* 10992d27 mov eax, dword ptr [0x109b0c98] */
  EAX = (r32((uint32_t)(0x109b0c98)));
  /* 10992d2c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10992d2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10992d36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10992d3d jmp 0x10992d48 */
  goto L_10992d48;
L_10992d3f:;
  /* 10992d3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992d42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992d45 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10992d48:;
  /* 10992d48 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992d4c jae 0x10992d82 */
  if (!C.cf) goto L_10992d82;
  /* 10992d4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992d51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992d54 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10992d58 push ecx */
  push32((uint32_t)(ECX));
  /* 10992d59 call 0x10988cd0 */
  push32(0x10992d5eu); f_10988cd0();
  /* 10992d5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992d61 mov esi, eax */
  ESI = (EAX);
  /* 10992d63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992d66 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992d69 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10992d6d push ecx */
  push32((uint32_t)(ECX));
  /* 10992d6e call 0x10988cd0 */
  push32(0x10992d73u); f_10988cd0();
  /* 10992d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992d76 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992d79 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10992d7d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10992d80 jmp 0x10992d3f */
  goto L_10992d3f;
L_10992d82:;
  /* 10992d82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10992d85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992d88 push eax */
  push32((uint32_t)(EAX));
  /* 10992d89 call 0x10985e80 */
  push32(0x10992d8eu); f_10985e80();
  /* 10992d8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992d91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10992d94 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992d98 je 0x10992e3b */
  if (C.zf) goto L_10992e3b;
  /* 10992d9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10992da1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10992da4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10992dab jmp 0x10992db6 */
  goto L_10992db6;
L_10992dad:;
  /* 10992dad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992db0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992db3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10992db6:;
  /* 10992db6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992dba jae 0x10992e2c */
  if (!C.cf) goto L_10992e2c;
  /* 10992dbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992dbf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10992dc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992dc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992dc8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10992dcb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992dce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992dd1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10992dd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10992dd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992dd9 push edx */
  push32((uint32_t)(EDX));
  /* 10992dda call 0x10988e50 */
  push32(0x10992ddfu); f_10988e50();
  /* 10992ddf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992de2 push eax */
  push32((uint32_t)(EAX));
  /* 10992de3 call 0x10988cd0 */
  push32(0x10992de8u); f_10988cd0();
  /* 10992de8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992deb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992dee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992df0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10992df3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992df6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10992df9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992dfc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992dff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10992e02 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992e05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992e08 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10992e0c push eax */
  push32((uint32_t)(EAX));
  /* 10992e0d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992e10 push ecx */
  push32((uint32_t)(ECX));
  /* 10992e11 call 0x10988e50 */
  push32(0x10992e16u); f_10988e50();
  /* 10992e16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992e19 push eax */
  push32((uint32_t)(EAX));
  /* 10992e1a call 0x10988cd0 */
  push32(0x10992e1fu); f_10988cd0();
  /* 10992e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992e22 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992e25 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992e27 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10992e2a jmp 0x10992dad */
  goto L_10992dad;
L_10992e2c:;
  /* 10992e2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992e2f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10992e32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992e35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992e38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10992e3b:;
  /* 10992e3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10992e3e pop esi */
  ESI = (pop32());
  /* 10992e3f mov esp, ebp */
  ESP = (EBP);
  /* 10992e41 pop ebp */
  EBP = (pop32());
  /* 10992e42 ret  */
  ESPCHK(0x10992d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e50 @ 0x10992e50 (878 bytes, 273 insns) */
void f_10992e50(void) {
  FTRACE(0x10992e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10992e51 mov ebp, esp */
  EBP = (ESP);
  /* 10992e53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992e56 push esi */
  push32((uint32_t)(ESI));
  /* 10992e57 mov eax, dword ptr [0x109b0c98] */
  EAX = (r32((uint32_t)(0x109b0c98)));
  /* 10992e5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10992e5f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10992e66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10992e6d jmp 0x10992e78 */
  goto L_10992e78;
L_10992e6f:;
  /* 10992e6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992e72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992e75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10992e78:;
  /* 10992e78 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992e7c jae 0x10992eb1 */
  if (!C.cf) goto L_10992eb1;
  /* 10992e7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992e81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992e84 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10992e87 push ecx */
  push32((uint32_t)(ECX));
  /* 10992e88 call 0x10988cd0 */
  push32(0x10992e8du); f_10988cd0();
  /* 10992e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992e90 mov esi, eax */
  ESI = (EAX);
  /* 10992e92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992e95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992e98 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10992e9c push ecx */
  push32((uint32_t)(ECX));
  /* 10992e9d call 0x10988cd0 */
  push32(0x10992ea2u); f_10988cd0();
  /* 10992ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992ea5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992ea8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10992eac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10992eaf jmp 0x10992e6f */
  goto L_10992e6f;
L_10992eb1:;
  /* 10992eb1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10992eb8 jmp 0x10992ec3 */
  goto L_10992ec3;
L_10992eba:;
  /* 10992eba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992ebd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992ec0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10992ec3:;
  /* 10992ec3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992ec7 jae 0x10992efd */
  if (!C.cf) goto L_10992efd;
  /* 10992ec9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992ecc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992ecf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10992ed3 push eax */
  push32((uint32_t)(EAX));
  /* 10992ed4 call 0x10988cd0 */
  push32(0x10992ed9u); f_10988cd0();
  /* 10992ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992edc mov esi, eax */
  ESI = (EAX);
  /* 10992ede mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992ee1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992ee4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10992ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10992ee9 call 0x10988cd0 */
  push32(0x10992eeeu); f_10988cd0();
  /* 10992eee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992ef1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992ef4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10992ef8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10992efb jmp 0x10992eba */
  goto L_10992eba;
L_10992efd:;
  /* 10992efd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992f00 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10992f06 push eax */
  push32((uint32_t)(EAX));
  /* 10992f07 call 0x10988cd0 */
  push32(0x10992f0cu); f_10988cd0();
  /* 10992f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992f0f mov esi, eax */
  ESI = (EAX);
  /* 10992f11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992f14 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10992f1a push edx */
  push32((uint32_t)(EDX));
  /* 10992f1b call 0x10988cd0 */
  push32(0x10992f20u); f_10988cd0();
  /* 10992f20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992f23 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992f26 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10992f2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10992f2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992f30 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10992f36 push edx */
  push32((uint32_t)(EDX));
  /* 10992f37 call 0x10988cd0 */
  push32(0x10992f3cu); f_10988cd0();
  /* 10992f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992f3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10992f42 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10992f46 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10992f49 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992f4c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10992f52 push ecx */
  push32((uint32_t)(ECX));
  /* 10992f53 call 0x10988cd0 */
  push32(0x10992f58u); f_10988cd0();
  /* 10992f58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992f5b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10992f5e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10992f62 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10992f65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992f68 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10992f6e push edx */
  push32((uint32_t)(EDX));
  /* 10992f6f call 0x10988cd0 */
  push32(0x10992f74u); f_10988cd0();
  /* 10992f74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992f77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10992f7a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10992f7e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10992f81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10992f84 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992f89 push eax */
  push32((uint32_t)(EAX));
  /* 10992f8a call 0x10985e80 */
  push32(0x10992f8fu); f_10985e80();
  /* 10992f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992f92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10992f95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992f99 je 0x109931b6 */
  if (C.zf) goto L_109931b6;
  /* 10992f9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10992fa2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10992fa5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10992fa8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992fae mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10992fb1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10992fb6 mov eax, dword ptr [0x109b0c98] */
  EAX = (r32((uint32_t)(0x109b0c98)));
  /* 10992fbb push eax */
  push32((uint32_t)(EAX));
  /* 10992fbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10992fbf push ecx */
  push32((uint32_t)(ECX));
  /* 10992fc0 call 0x1098c780 */
  push32(0x10992fc5u); f_1098c780();
  /* 10992fc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992fc8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10992fcf jmp 0x10992fda */
  goto L_10992fda;
L_10992fd1:;
  /* 10992fd1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992fd4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992fd7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10992fda:;
  /* 10992fda cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992fde jae 0x1099304e */
  if (!C.cf) goto L_1099304e;
  /* 10992fe0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992fe3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10992fe6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992fe9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10992fec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10992fef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992ff2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10992ff5 push edx */
  push32((uint32_t)(EDX));
  /* 10992ff6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10992ff9 push eax */
  push32((uint32_t)(EAX));
  /* 10992ffa call 0x10988e50 */
  push32(0x10992fffu); f_10988e50();
  /* 10992fff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993002 push eax */
  push32((uint32_t)(EAX));
  /* 10993003 call 0x10988cd0 */
  push32(0x10993008u); f_10988cd0();
  /* 10993008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099300b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1099300e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10993012 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10993015 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10993018 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1099301b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1099301e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10993022 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10993025 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993028 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1099302c push edx */
  push32((uint32_t)(EDX));
  /* 1099302d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993030 push eax */
  push32((uint32_t)(EAX));
  /* 10993031 call 0x10988e50 */
  push32(0x10993036u); f_10988e50();
  /* 10993036 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993039 push eax */
  push32((uint32_t)(EAX));
  /* 1099303a call 0x10988cd0 */
  push32(0x1099303fu); f_10988cd0();
  /* 1099303f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993042 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993045 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10993049 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1099304c jmp 0x10992fd1 */
  goto L_10992fd1;
L_1099304e:;
  /* 1099304e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10993055 jmp 0x10993060 */
  goto L_10993060;
L_10993057:;
  /* 10993057 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1099305a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099305d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10993060:;
  /* 10993060 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993064 jae 0x109930d6 */
  if (!C.cf) goto L_109930d6;
  /* 10993066 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10993069 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1099306c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1099306f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10993073 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10993076 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993079 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1099307d push eax */
  push32((uint32_t)(EAX));
  /* 1099307e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993081 push ecx */
  push32((uint32_t)(ECX));
  /* 10993082 call 0x10988e50 */
  push32(0x10993087u); f_10988e50();
  /* 10993087 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099308a push eax */
  push32((uint32_t)(EAX));
  /* 1099308b call 0x10988cd0 */
  push32(0x10993090u); f_10988cd0();
  /* 10993090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993093 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993096 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1099309a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1099309d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109930a0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109930a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109930a6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 109930aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109930ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109930b0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 109930b4 push eax */
  push32((uint32_t)(EAX));
  /* 109930b5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109930b8 push ecx */
  push32((uint32_t)(ECX));
  /* 109930b9 call 0x10988e50 */
  push32(0x109930beu); f_10988e50();
  /* 109930be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109930c1 push eax */
  push32((uint32_t)(EAX));
  /* 109930c2 call 0x10988cd0 */
  push32(0x109930c7u); f_10988cd0();
  /* 109930c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109930ca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109930cd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 109930d1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109930d4 jmp 0x10993057 */
  goto L_10993057;
L_109930d6:;
  /* 109930d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109930d9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109930dc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 109930e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109930e5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 109930eb push ecx */
  push32((uint32_t)(ECX));
  /* 109930ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109930ef push edx */
  push32((uint32_t)(EDX));
  /* 109930f0 call 0x10988e50 */
  push32(0x109930f5u); f_10988e50();
  /* 109930f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109930f8 push eax */
  push32((uint32_t)(EAX));
  /* 109930f9 call 0x10988cd0 */
  push32(0x109930feu); f_10988cd0();
  /* 109930fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993101 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993104 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10993108 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1099310b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1099310e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993111 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10993117 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099311a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10993120 push eax */
  push32((uint32_t)(EAX));
  /* 10993121 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993124 push ecx */
  push32((uint32_t)(ECX));
  /* 10993125 call 0x10988e50 */
  push32(0x1099312au); f_10988e50();
  /* 1099312a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099312d push eax */
  push32((uint32_t)(EAX));
  /* 1099312e call 0x10988cd0 */
  push32(0x10993133u); f_10988cd0();
  /* 10993133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993136 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993139 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1099313d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10993140 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10993143 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993146 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1099314c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099314f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10993155 push ecx */
  push32((uint32_t)(ECX));
  /* 10993156 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993159 push edx */
  push32((uint32_t)(EDX));
  /* 1099315a call 0x10988e50 */
  push32(0x1099315fu); f_10988e50();
  /* 1099315f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993162 push eax */
  push32((uint32_t)(EAX));
  /* 10993163 call 0x10988cd0 */
  push32(0x10993168u); f_10988cd0();
  /* 10993168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099316b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1099316e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10993172 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10993175 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10993178 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1099317b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10993181 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993184 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1099318a push eax */
  push32((uint32_t)(EAX));
  /* 1099318b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1099318e push ecx */
  push32((uint32_t)(ECX));
  /* 1099318f call 0x10988e50 */
  push32(0x10993194u); f_10988e50();
  /* 10993194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993197 push eax */
  push32((uint32_t)(EAX));
  /* 10993198 call 0x10988cd0 */
  push32(0x1099319du); f_10988cd0();
  /* 1099319d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109931a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109931a3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 109931a7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109931aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109931ad mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109931b0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_109931b6:;
  /* 109931b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109931b9 pop esi */
  ESI = (pop32());
  /* 109931ba mov esp, ebp */
  ESP = (EBP);
  /* 109931bc pop ebp */
  EBP = (pop32());
  /* 109931bd ret  */
  ESPCHK(0x10992e50u, _esp0);
  ESP += 4; return;
}

/* FUN_100131c0 @ 0x109931c0 (31 bytes, 15 insns) */
void f_109931c0(void) {
  FTRACE(0x109931c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109931c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109931c1 mov ebp, esp */
  EBP = (ESP);
  /* 109931c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109931c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109931c8 push eax */
  push32((uint32_t)(EAX));
  /* 109931c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109931cc push ecx */
  push32((uint32_t)(ECX));
  /* 109931cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109931d0 push edx */
  push32((uint32_t)(EDX));
  /* 109931d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109931d4 push eax */
  push32((uint32_t)(EAX));
  /* 109931d5 call 0x109931e0 */
  push32(0x109931dau); f_109931e0();
  /* 109931da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109931dd pop ebp */
  EBP = (pop32());
  /* 109931de ret  */
  ESPCHK(0x109931c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131e0 @ 0x109931e0 (393 bytes, 123 insns) */
void f_109931e0(void) {
  FTRACE(0x109931e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109931e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109931e1 mov ebp, esp */
  EBP = (ESP);
  /* 109931e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109931e6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109931ea jne 0x109931f6 */
  if (!C.zf) goto L_109931f6;
  /* 109931ec mov eax, dword ptr [0x109b0c98] */
  EAX = (r32((uint32_t)(0x109b0c98)));
  /* 109931f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109931f4 jmp 0x109931fc */
  goto L_109931fc;
L_109931f6:;
  /* 109931f6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109931f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109931fc:;
  /* 109931fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109931ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10993202 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993205 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10993208 push 0x109b19dc */
  push32((uint32_t)(0x109b19dcu));
  /* 1099320d call dword ptr [0x109b4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4370))), 0x10993213u);
  /* 10993213 cmp dword ptr [0x109b19cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099321a je 0x1099323a */
  if (C.zf) goto L_1099323a;
  /* 1099321c push 0x109b19dc */
  push32((uint32_t)(0x109b19dcu));
  /* 10993221 call dword ptr [0x109b4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4360))), 0x10993227u);
  /* 10993227 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10993229 call 0x109898a0 */
  push32(0x1099322eu); f_109898a0();
  /* 1099322e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993231 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10993238 jmp 0x10993241 */
  goto L_10993241;
L_1099323a:;
  /* 1099323a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10993241:;
  /* 10993241 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993245 jbe 0x10993332 */
  if ((C.cf||C.zf)) goto L_10993332;
  /* 1099324b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099324e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10993250 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10993253 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10993257 je 0x10993261 */
  if (C.zf) goto L_10993261;
  /* 10993259 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1099325d je 0x10993266 */
  if (C.zf) goto L_10993266;
  /* 1099325f jmp 0x109932c0 */
  goto L_109932c0;
L_10993261:;
  /* 10993261 jmp 0x10993332 */
  goto L_10993332;
L_10993266:;
  /* 10993266 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993269 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099326c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1099326f mov dword ptr [0x109b19b8], 0 */
  w32((uint32_t)(0x109b19b8), (0x0u));
  /* 10993279 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099327c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1099327f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993282 jne 0x10993297 */
  if (!C.zf) goto L_10993297;
  /* 10993284 mov dword ptr [0x109b19b8], 1 */
  w32((uint32_t)(0x109b19b8), (0x1u));
  /* 1099328e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993291 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993294 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10993297:;
  /* 10993297 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099329a push ecx */
  push32((uint32_t)(ECX));
  /* 1099329b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1099329e push edx */
  push32((uint32_t)(EDX));
  /* 1099329f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 109932a2 push eax */
  push32((uint32_t)(EAX));
  /* 109932a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109932a6 push ecx */
  push32((uint32_t)(ECX));
  /* 109932a7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109932aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109932ac push eax */
  push32((uint32_t)(EAX));
  /* 109932ad call 0x10993370 */
  push32(0x109932b2u); f_10993370();
  /* 109932b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109932b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109932b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109932bb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109932be jmp 0x1099332d */
  goto L_1099332d;
L_109932c0:;
  /* 109932c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109932c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109932c5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109932c7 mov ecx, dword ptr [0x109afc98] */
  ECX = (r32((uint32_t)(0x109afc98)));
  /* 109932cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109932cf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109932d3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 109932d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109932db je 0x10993308 */
  if (C.zf) goto L_10993308;
  /* 109932dd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109932e1 jbe 0x10993308 */
  if ((C.cf||C.zf)) goto L_10993308;
  /* 109932e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109932e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109932e9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109932eb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109932ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109932f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109932f3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109932f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109932f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109932fc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109932ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993302 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993305 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10993308:;
  /* 10993308 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099330b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099330e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10993310 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10993312 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993315 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993318 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1099331b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099331e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993321 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10993324 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993327 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1099332a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1099332d:;
  /* 1099332d jmp 0x10993241 */
  goto L_10993241;
L_10993332:;
  /* 10993332 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993336 je 0x10993344 */
  if (C.zf) goto L_10993344;
  /* 10993338 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1099333a call 0x10989940 */
  push32(0x1099333fu); f_10989940();
  /* 1099333f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993342 jmp 0x1099334f */
  goto L_1099334f;
L_10993344:;
  /* 10993344 push 0x109b19dc */
  push32((uint32_t)(0x109b19dcu));
  /* 10993349 call dword ptr [0x109b4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4360))), 0x1099334fu);
L_1099334f:;
  /* 1099334f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993353 jbe 0x10993363 */
  if ((C.cf||C.zf)) goto L_10993363;
  /* 10993355 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993358 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1099335b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099335e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993361 jmp 0x10993365 */
  goto L_10993365;
L_10993363:;
  /* 10993363 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10993365:;
  /* 10993365 mov esp, ebp */
  ESP = (EBP);
  /* 10993367 pop ebp */
  EBP = (pop32());
  /* 10993368 ret  */
  ESPCHK(0x109931e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013370 @ 0x10993370 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10993370(void) {
  FTRACE(0x10993370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10993370 push ebp */
  push32((uint32_t)(EBP));
  /* 10993371 mov ebp, esp */
  EBP = (ESP);
  /* 10993373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993376 push esi */
  push32((uint32_t)(ESI));
  /* 10993377 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1099337b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1099337e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993381 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993384 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10993387 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099338b ja 0x109938d8 */
  if ((!C.cf&&!C.zf)) goto L_109938d8;
  /* 10993391 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993394 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10993396 mov dl, byte ptr [eax + 0x10993939] */
  DL = (r8((uint32_t)(EAX + 0x10993939)));
  /* 1099339c jmp dword ptr [edx*4 + 0x109938dd] */
  switch (EDX) {
    case 0: goto L_109938b6;
    case 1: goto L_109933c5;
    case 2: goto L_1099340b;
    case 3: goto L_10993558;
    case 4: goto L_10993580;
    case 5: goto L_1099361f;
    case 6: goto L_1099368b;
    case 7: goto L_109936b4;
    case 8: goto L_109936f5;
    case 9: goto L_109937d7;
    case 10: goto L_1099383e;
    case 11: goto L_1099388b;
    case 12: goto L_109933a3;
    case 13: goto L_109933e8;
    case 14: goto L_1099342e;
    case 15: goto L_1099352e;
    case 16: goto L_109935c5;
    case 17: goto L_109935f2;
    case 18: goto L_10993647;
    case 19: goto L_109936cb;
    case 20: goto L_10993779;
    case 21: goto L_10993808;
    case 22: goto L_109938d8;
    default: x86_unimpl("switch@0x1099339c out of table"); return;
  }
L_109933a3:;
  /* 109933a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109933a6 push ecx */
  push32((uint32_t)(ECX));
  /* 109933a7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109933aa push edx */
  push32((uint32_t)(EDX));
  /* 109933ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109933ae mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 109933b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109933b4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 109933b7 push eax */
  push32((uint32_t)(EAX));
  /* 109933b8 call 0x10993990 */
  push32(0x109933bdu); f_10993990();
  /* 109933bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109933c0 jmp 0x109938d8 */
  goto L_109938d8;
L_109933c5:;
  /* 109933c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109933c8 push ecx */
  push32((uint32_t)(ECX));
  /* 109933c9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109933cc push edx */
  push32((uint32_t)(EDX));
  /* 109933cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109933d0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 109933d3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109933d6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 109933da push eax */
  push32((uint32_t)(EAX));
  /* 109933db call 0x10993990 */
  push32(0x109933e0u); f_10993990();
  /* 109933e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109933e3 jmp 0x109938d8 */
  goto L_109938d8;
L_109933e8:;
  /* 109933e8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109933eb push ecx */
  push32((uint32_t)(ECX));
  /* 109933ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109933ef push edx */
  push32((uint32_t)(EDX));
  /* 109933f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109933f3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109933f6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109933f9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 109933fd push eax */
  push32((uint32_t)(EAX));
  /* 109933fe call 0x10993990 */
  push32(0x10993403u); f_10993990();
  /* 10993403 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993406 jmp 0x109938d8 */
  goto L_109938d8;
L_1099340b:;
  /* 1099340b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099340e push ecx */
  push32((uint32_t)(ECX));
  /* 1099340f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993412 push edx */
  push32((uint32_t)(EDX));
  /* 10993413 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993416 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10993419 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1099341c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10993420 push eax */
  push32((uint32_t)(EAX));
  /* 10993421 call 0x10993990 */
  push32(0x10993426u); f_10993990();
  /* 10993426 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993429 jmp 0x109938d8 */
  goto L_109938d8;
L_1099342e:;
  /* 1099342e cmp dword ptr [0x109b19b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993435 je 0x109934b6 */
  if (C.zf) goto L_109934b6;
  /* 10993437 mov dword ptr [0x109b19b8], 0 */
  w32((uint32_t)(0x109b19b8), (0x0u));
  /* 10993441 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10993444 push ecx */
  push32((uint32_t)(ECX));
  /* 10993445 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993448 push edx */
  push32((uint32_t)(EDX));
  /* 10993449 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099344c push eax */
  push32((uint32_t)(EAX));
  /* 1099344d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993450 push ecx */
  push32((uint32_t)(ECX));
  /* 10993451 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10993454 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1099345a push eax */
  push32((uint32_t)(EAX));
  /* 1099345b call 0x10993b40 */
  push32(0x10993460u); f_10993b40();
  /* 10993460 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993463 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993466 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993469 jne 0x10993470 */
  if (!C.zf) goto L_10993470;
  /* 1099346b jmp 0x109938d8 */
  goto L_109938d8;
L_10993470:;
  /* 10993470 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993473 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10993475 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10993478 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099347b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1099347d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993480 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993483 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10993485 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993488 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1099348a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1099348d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993490 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10993492 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10993495 push ecx */
  push32((uint32_t)(ECX));
  /* 10993496 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993499 push edx */
  push32((uint32_t)(EDX));
  /* 1099349a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099349d push eax */
  push32((uint32_t)(EAX));
  /* 1099349e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109934a1 push ecx */
  push32((uint32_t)(ECX));
  /* 109934a2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109934a5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 109934ab push eax */
  push32((uint32_t)(EAX));
  /* 109934ac call 0x10993b40 */
  push32(0x109934b1u); f_10993b40();
  /* 109934b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109934b4 jmp 0x10993529 */
  goto L_10993529;
L_109934b6:;
  /* 109934b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109934b9 push ecx */
  push32((uint32_t)(ECX));
  /* 109934ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109934bd push edx */
  push32((uint32_t)(EDX));
  /* 109934be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109934c1 push eax */
  push32((uint32_t)(EAX));
  /* 109934c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109934c5 push ecx */
  push32((uint32_t)(ECX));
  /* 109934c6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109934c9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 109934cf push eax */
  push32((uint32_t)(EAX));
  /* 109934d0 call 0x10993b40 */
  push32(0x109934d5u); f_10993b40();
  /* 109934d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109934d8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109934db cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109934de jne 0x109934e5 */
  if (!C.zf) goto L_109934e5;
  /* 109934e0 jmp 0x109938d8 */
  goto L_109938d8;
L_109934e5:;
  /* 109934e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109934e8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109934ea mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 109934ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109934f0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109934f2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109934f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109934f8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109934fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109934fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109934ff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993502 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993505 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10993507 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1099350a push ecx */
  push32((uint32_t)(ECX));
  /* 1099350b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099350e push edx */
  push32((uint32_t)(EDX));
  /* 1099350f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993512 push eax */
  push32((uint32_t)(EAX));
  /* 10993513 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993516 push ecx */
  push32((uint32_t)(ECX));
  /* 10993517 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1099351a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10993520 push eax */
  push32((uint32_t)(EAX));
  /* 10993521 call 0x10993b40 */
  push32(0x10993526u); f_10993b40();
  /* 10993526 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10993529:;
  /* 10993529 jmp 0x109938d8 */
  goto L_109938d8;
L_1099352e:;
  /* 1099352e mov ecx, dword ptr [0x109b19b8] */
  ECX = (r32((uint32_t)(0x109b19b8)));
  /* 10993534 mov dword ptr [0x109b19c8], ecx */
  w32((uint32_t)(0x109b19c8), (ECX));
  /* 1099353a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099353d push edx */
  push32((uint32_t)(EDX));
  /* 1099353e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993541 push eax */
  push32((uint32_t)(EAX));
  /* 10993542 push 2 */
  push32((uint32_t)(0x2u));
  /* 10993544 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993547 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1099354a push edx */
  push32((uint32_t)(EDX));
  /* 1099354b call 0x109939e0 */
  push32(0x10993550u); f_109939e0();
  /* 10993550 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993553 jmp 0x109938d8 */
  goto L_109938d8;
L_10993558:;
  /* 10993558 mov eax, dword ptr [0x109b19b8] */
  EAX = (r32((uint32_t)(0x109b19b8)));
  /* 1099355d mov dword ptr [0x109b19c8], eax */
  w32((uint32_t)(0x109b19c8), (EAX));
  /* 10993562 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993565 push ecx */
  push32((uint32_t)(ECX));
  /* 10993566 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993569 push edx */
  push32((uint32_t)(EDX));
  /* 1099356a push 2 */
  push32((uint32_t)(0x2u));
  /* 1099356c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099356f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10993572 push ecx */
  push32((uint32_t)(ECX));
  /* 10993573 call 0x109939e0 */
  push32(0x10993578u); f_109939e0();
  /* 10993578 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099357b jmp 0x109938d8 */
  goto L_109938d8;
L_10993580:;
  /* 10993580 mov edx, dword ptr [0x109b19b8] */
  EDX = (r32((uint32_t)(0x109b19b8)));
  /* 10993586 mov dword ptr [0x109b19c8], edx */
  w32((uint32_t)(0x109b19c8), (EDX));
  /* 1099358c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099358f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10993592 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10993593 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10993598 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1099359a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1099359d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109935a1 jne 0x109935aa */
  if (!C.zf) goto L_109935aa;
  /* 109935a3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_109935aa:;
  /* 109935aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109935ad push edx */
  push32((uint32_t)(EDX));
  /* 109935ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109935b1 push eax */
  push32((uint32_t)(EAX));
  /* 109935b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109935b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109935b7 push ecx */
  push32((uint32_t)(ECX));
  /* 109935b8 call 0x109939e0 */
  push32(0x109935bdu); f_109939e0();
  /* 109935bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109935c0 jmp 0x109938d8 */
  goto L_109938d8;
L_109935c5:;
  /* 109935c5 mov edx, dword ptr [0x109b19b8] */
  EDX = (r32((uint32_t)(0x109b19b8)));
  /* 109935cb mov dword ptr [0x109b19c8], edx */
  w32((uint32_t)(0x109b19c8), (EDX));
  /* 109935d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109935d4 push eax */
  push32((uint32_t)(EAX));
  /* 109935d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109935d8 push ecx */
  push32((uint32_t)(ECX));
  /* 109935d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 109935db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109935de mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 109935e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109935e4 push eax */
  push32((uint32_t)(EAX));
  /* 109935e5 call 0x109939e0 */
  push32(0x109935eau); f_109939e0();
  /* 109935ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109935ed jmp 0x109938d8 */
  goto L_109938d8;
L_109935f2:;
  /* 109935f2 mov ecx, dword ptr [0x109b19b8] */
  ECX = (r32((uint32_t)(0x109b19b8)));
  /* 109935f8 mov dword ptr [0x109b19c8], ecx */
  w32((uint32_t)(0x109b19c8), (ECX));
  /* 109935fe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993601 push edx */
  push32((uint32_t)(EDX));
  /* 10993602 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993605 push eax */
  push32((uint32_t)(EAX));
  /* 10993606 push 2 */
  push32((uint32_t)(0x2u));
  /* 10993608 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099360b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1099360e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993611 push edx */
  push32((uint32_t)(EDX));
  /* 10993612 call 0x109939e0 */
  push32(0x10993617u); f_109939e0();
  /* 10993617 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099361a jmp 0x109938d8 */
  goto L_109938d8;
L_1099361f:;
  /* 1099361f mov eax, dword ptr [0x109b19b8] */
  EAX = (r32((uint32_t)(0x109b19b8)));
  /* 10993624 mov dword ptr [0x109b19c8], eax */
  w32((uint32_t)(0x109b19c8), (EAX));
  /* 10993629 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099362c push ecx */
  push32((uint32_t)(ECX));
  /* 1099362d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993630 push edx */
  push32((uint32_t)(EDX));
  /* 10993631 push 2 */
  push32((uint32_t)(0x2u));
  /* 10993633 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993636 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10993639 push ecx */
  push32((uint32_t)(ECX));
  /* 1099363a call 0x109939e0 */
  push32(0x1099363fu); f_109939e0();
  /* 1099363f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993642 jmp 0x109938d8 */
  goto L_109938d8;
L_10993647:;
  /* 10993647 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099364a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099364e jg 0x1099366c */
  if ((!C.zf&&C.sf==C.of)) goto L_1099366c;
  /* 10993650 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993653 push eax */
  push32((uint32_t)(EAX));
  /* 10993654 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993657 push ecx */
  push32((uint32_t)(ECX));
  /* 10993658 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1099365b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10993661 push eax */
  push32((uint32_t)(EAX));
  /* 10993662 call 0x10993990 */
  push32(0x10993667u); f_10993990();
  /* 10993667 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099366a jmp 0x10993686 */
  goto L_10993686;
L_1099366c:;
  /* 1099366c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099366f push ecx */
  push32((uint32_t)(ECX));
  /* 10993670 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993673 push edx */
  push32((uint32_t)(EDX));
  /* 10993674 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10993677 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1099367d push ecx */
  push32((uint32_t)(ECX));
  /* 1099367e call 0x10993990 */
  push32(0x10993683u); f_10993990();
  /* 10993683 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10993686:;
  /* 10993686 jmp 0x109938d8 */
  goto L_109938d8;
L_1099368b:;
  /* 1099368b mov edx, dword ptr [0x109b19b8] */
  EDX = (r32((uint32_t)(0x109b19b8)));
  /* 10993691 mov dword ptr [0x109b19c8], edx */
  w32((uint32_t)(0x109b19c8), (EDX));
  /* 10993697 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099369a push eax */
  push32((uint32_t)(EAX));
  /* 1099369b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099369e push ecx */
  push32((uint32_t)(ECX));
  /* 1099369f push 2 */
  push32((uint32_t)(0x2u));
  /* 109936a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109936a4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109936a6 push eax */
  push32((uint32_t)(EAX));
  /* 109936a7 call 0x109939e0 */
  push32(0x109936acu); f_109939e0();
  /* 109936ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109936af jmp 0x109938d8 */
  goto L_109938d8;
L_109936b4:;
  /* 109936b4 mov ecx, dword ptr [0x109b19b8] */
  ECX = (r32((uint32_t)(0x109b19b8)));
  /* 109936ba mov dword ptr [0x109b19c8], ecx */
  w32((uint32_t)(0x109b19c8), (ECX));
  /* 109936c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109936c3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 109936c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109936c9 jmp 0x1099371d */
  goto L_1099371d;
L_109936cb:;
  /* 109936cb mov ecx, dword ptr [0x109b19b8] */
  ECX = (r32((uint32_t)(0x109b19b8)));
  /* 109936d1 mov dword ptr [0x109b19c8], ecx */
  w32((uint32_t)(0x109b19c8), (ECX));
  /* 109936d7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109936da push edx */
  push32((uint32_t)(EDX));
  /* 109936db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109936de push eax */
  push32((uint32_t)(EAX));
  /* 109936df push 1 */
  push32((uint32_t)(0x1u));
  /* 109936e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109936e4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 109936e7 push edx */
  push32((uint32_t)(EDX));
  /* 109936e8 call 0x109939e0 */
  push32(0x109936edu); f_109939e0();
  /* 109936ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109936f0 jmp 0x109938d8 */
  goto L_109938d8;
L_109936f5:;
  /* 109936f5 mov eax, dword ptr [0x109b19b8] */
  EAX = (r32((uint32_t)(0x109b19b8)));
  /* 109936fa mov dword ptr [0x109b19c8], eax */
  w32((uint32_t)(0x109b19c8), (EAX));
  /* 109936ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993702 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993706 jne 0x10993711 */
  if (!C.zf) goto L_10993711;
  /* 10993708 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1099370f jmp 0x1099371d */
  goto L_1099371d;
L_10993711:;
  /* 10993711 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993714 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10993717 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1099371a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1099371d:;
  /* 1099371d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993720 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10993723 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993726 jge 0x10993731 */
  if ((C.sf==C.of)) goto L_10993731;
  /* 10993728 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1099372f jmp 0x1099375e */
  goto L_1099375e;
L_10993731:;
  /* 10993731 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993734 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10993737 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10993738 mov ecx, 7 */
  ECX = (0x7u);
  /* 1099373d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1099373f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10993742 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993745 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10993748 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10993749 mov ecx, 7 */
  ECX = (0x7u);
  /* 1099374e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10993750 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993753 jl 0x1099375e */
  if ((C.sf!=C.of)) goto L_1099375e;
  /* 10993755 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993758 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099375b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1099375e:;
  /* 1099375e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993761 push eax */
  push32((uint32_t)(EAX));
  /* 10993762 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993765 push ecx */
  push32((uint32_t)(ECX));
  /* 10993766 push 2 */
  push32((uint32_t)(0x2u));
  /* 10993768 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099376b push edx */
  push32((uint32_t)(EDX));
  /* 1099376c call 0x109939e0 */
  push32(0x10993771u); f_109939e0();
  /* 10993771 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993774 jmp 0x109938d8 */
  goto L_109938d8;
L_10993779:;
  /* 10993779 cmp dword ptr [0x109b19b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993780 je 0x109937b0 */
  if (C.zf) goto L_109937b0;
  /* 10993782 mov dword ptr [0x109b19b8], 0 */
  w32((uint32_t)(0x109b19b8), (0x0u));
  /* 1099378c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1099378f push eax */
  push32((uint32_t)(EAX));
  /* 10993790 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993793 push ecx */
  push32((uint32_t)(ECX));
  /* 10993794 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993797 push edx */
  push32((uint32_t)(EDX));
  /* 10993798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099379b push eax */
  push32((uint32_t)(EAX));
  /* 1099379c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1099379f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 109937a5 push edx */
  push32((uint32_t)(EDX));
  /* 109937a6 call 0x10993b40 */
  push32(0x109937abu); f_10993b40();
  /* 109937ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109937ae jmp 0x109937d2 */
  goto L_109937d2;
L_109937b0:;
  /* 109937b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109937b3 push eax */
  push32((uint32_t)(EAX));
  /* 109937b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109937b7 push ecx */
  push32((uint32_t)(ECX));
  /* 109937b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109937bb push edx */
  push32((uint32_t)(EDX));
  /* 109937bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109937bf push eax */
  push32((uint32_t)(EAX));
  /* 109937c0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109937c3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 109937c9 push edx */
  push32((uint32_t)(EDX));
  /* 109937ca call 0x10993b40 */
  push32(0x109937cfu); f_10993b40();
  /* 109937cf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109937d2:;
  /* 109937d2 jmp 0x109938d8 */
  goto L_109938d8;
L_109937d7:;
  /* 109937d7 mov dword ptr [0x109b19b8], 0 */
  w32((uint32_t)(0x109b19b8), (0x0u));
  /* 109937e1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109937e4 push eax */
  push32((uint32_t)(EAX));
  /* 109937e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109937e8 push ecx */
  push32((uint32_t)(ECX));
  /* 109937e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109937ec push edx */
  push32((uint32_t)(EDX));
  /* 109937ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109937f0 push eax */
  push32((uint32_t)(EAX));
  /* 109937f1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109937f4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 109937fa push edx */
  push32((uint32_t)(EDX));
  /* 109937fb call 0x10993b40 */
  push32(0x10993800u); f_10993b40();
  /* 10993800 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993803 jmp 0x109938d8 */
  goto L_109938d8;
L_10993808:;
  /* 10993808 mov eax, dword ptr [0x109b19b8] */
  EAX = (r32((uint32_t)(0x109b19b8)));
  /* 1099380d mov dword ptr [0x109b19c8], eax */
  w32((uint32_t)(0x109b19c8), (EAX));
  /* 10993812 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993815 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10993818 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10993819 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1099381e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10993820 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10993823 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993826 push edx */
  push32((uint32_t)(EDX));
  /* 10993827 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099382a push eax */
  push32((uint32_t)(EAX));
  /* 1099382b push 2 */
  push32((uint32_t)(0x2u));
  /* 1099382d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993830 push ecx */
  push32((uint32_t)(ECX));
  /* 10993831 call 0x109939e0 */
  push32(0x10993836u); f_109939e0();
  /* 10993836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993839 jmp 0x109938d8 */
  goto L_109938d8;
L_1099383e:;
  /* 1099383e mov edx, dword ptr [0x109b19b8] */
  EDX = (r32((uint32_t)(0x109b19b8)));
  /* 10993844 mov dword ptr [0x109b19c8], edx */
  w32((uint32_t)(0x109b19c8), (EDX));
  /* 1099384a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099384d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10993850 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10993851 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10993856 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10993858 mov ecx, eax */
  ECX = (EAX);
  /* 1099385a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099385d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10993860 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993863 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10993866 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10993867 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1099386c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1099386e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993870 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10993873 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993876 push eax */
  push32((uint32_t)(EAX));
  /* 10993877 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099387a push ecx */
  push32((uint32_t)(ECX));
  /* 1099387b push 4 */
  push32((uint32_t)(0x4u));
  /* 1099387d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993880 push edx */
  push32((uint32_t)(EDX));
  /* 10993881 call 0x109939e0 */
  push32(0x10993886u); f_109939e0();
  /* 10993886 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993889 jmp 0x109938d8 */
  goto L_109938d8;
L_1099388b:;
  /* 1099388b call 0x109949a0 */
  push32(0x10993890u); f_109949a0();
  /* 10993890 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993893 push eax */
  push32((uint32_t)(EAX));
  /* 10993894 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993897 push ecx */
  push32((uint32_t)(ECX));
  /* 10993898 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099389b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099389d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109938a1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 109938a4 mov ecx, dword ptr [eax*4 + 0x109b0e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109b0e1c)));
  /* 109938ab push ecx */
  push32((uint32_t)(ECX));
  /* 109938ac call 0x10993990 */
  push32(0x109938b1u); f_10993990();
  /* 109938b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109938b4 jmp 0x109938d8 */
  goto L_109938d8;
L_109938b6:;
  /* 109938b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109938b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109938bb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 109938be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109938c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109938c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109938c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109938c9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109938cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109938ce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109938d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109938d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109938d6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109938d8:;
  /* 109938d8 pop esi */
  ESI = (pop32());
  /* 109938d9 mov esp, ebp */
  ESP = (EBP);
  /* 109938db pop ebp */
  EBP = (pop32());
  /* 109938dc ret  */
  ESPCHK(0x10993370u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10993990 (72 bytes, 30 insns) */
void f_10993990(void) {
  FTRACE(0x10993990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10993990 push ebp */
  push32((uint32_t)(EBP));
  /* 10993991 mov ebp, esp */
  EBP = (ESP);
L_10993993:;
  /* 10993993 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993996 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993999 je 0x109939d6 */
  if (C.zf) goto L_109939d6;
  /* 1099399b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099399e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109939a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109939a3 je 0x109939d6 */
  if (C.zf) goto L_109939d6;
  /* 109939a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109939a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109939aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109939ad mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109939af mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109939b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109939b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109939b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109939b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109939bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109939be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109939c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109939c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 109939c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109939ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109939cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109939cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109939d2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109939d4 jmp 0x10993993 */
  goto L_10993993;
L_109939d6:;
  /* 109939d6 pop ebp */
  EBP = (pop32());
  /* 109939d7 ret  */
  ESPCHK(0x10993990u, _esp0);
  ESP += 4; return;
}

/* FUN_100139e0 @ 0x109939e0 (173 bytes, 64 insns) */
void f_109939e0(void) {
  FTRACE(0x109939e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109939e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109939e1 mov ebp, esp */
  EBP = (ESP);
  /* 109939e3 push ecx */
  push32((uint32_t)(ECX));
  /* 109939e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109939eb cmp dword ptr [0x109b19c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109939f2 je 0x10993a0a */
  if (C.zf) goto L_10993a0a;
  /* 109939f4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109939f7 push eax */
  push32((uint32_t)(EAX));
  /* 109939f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109939fb push ecx */
  push32((uint32_t)(ECX));
  /* 109939fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109939ff push edx */
  push32((uint32_t)(EDX));
  /* 10993a00 call 0x10993a90 */
  push32(0x10993a05u); f_10993a90();
  /* 10993a05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993a08 jmp 0x10993a89 */
  goto L_10993a89;
L_10993a0a:;
  /* 10993a0a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993a0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993a10 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993a12 jae 0x10993a80 */
  if (!C.cf) goto L_10993a80;
  /* 10993a14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993a17 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993a1a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10993a1d jmp 0x10993a28 */
  goto L_10993a28;
L_10993a1f:;
  /* 10993a1f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993a22 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993a25 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10993a28:;
  /* 10993a28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993a2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993a2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10993a30 je 0x10993a64 */
  if (C.zf) goto L_10993a64;
  /* 10993a32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993a35 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10993a36 mov ecx, 0xa */
  ECX = (0xau);
  /* 10993a3b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10993a3d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993a40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993a43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993a45 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993a48 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10993a4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993a4e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10993a4f mov ecx, 0xa */
  ECX = (0xau);
  /* 10993a54 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10993a56 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10993a59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993a5c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993a5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10993a62 jmp 0x10993a1f */
  goto L_10993a1f;
L_10993a64:;
  /* 10993a64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993a67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993a69 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993a6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993a6f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10993a71 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993a74 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993a76 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993a79 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993a7c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10993a7e jmp 0x10993a89 */
  goto L_10993a89;
L_10993a80:;
  /* 10993a80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993a83 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10993a89:;
  /* 10993a89 mov esp, ebp */
  ESP = (EBP);
  /* 10993a8b pop ebp */
  EBP = (pop32());
  /* 10993a8c ret  */
  ESPCHK(0x109939e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10993a90 (172 bytes, 65 insns) */
void f_10993a90(void) {
  FTRACE(0x10993a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10993a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10993a91 mov ebp, esp */
  EBP = (ESP);
  /* 10993a93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993a96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993a99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993a9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10993a9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993aa1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993aa4 jbe 0x10993aeb */
  if ((C.cf||C.zf)) goto L_10993aeb;
L_10993aa6:;
  /* 10993aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993aa9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10993aaa mov ecx, 0xa */
  ECX = (0xau);
  /* 10993aaf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10993ab1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993ab4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993ab7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10993ab9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993abc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993abf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10993ac2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993ac5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10993ac7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993aca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993acd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10993acf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993ad2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10993ad3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10993ad8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10993ada mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10993add cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993ae1 jle 0x10993aeb */
  if ((C.zf||C.sf!=C.of)) goto L_10993aeb;
  /* 10993ae3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993ae6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993ae9 ja 0x10993aa6 */
  if ((!C.cf&&!C.zf)) goto L_10993aa6;
L_10993aeb:;
  /* 10993aeb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993aee mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993af0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10993af3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993af6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993af9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10993afb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993afe sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993b01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10993b04:;
  /* 10993b04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993b07 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10993b09 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10993b0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993b0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10993b12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10993b14 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10993b16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993b19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993b1c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10993b1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10993b22 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10993b25 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10993b27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10993b2a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993b2d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10993b30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10993b33 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993b36 jb 0x10993b04 */
  if (C.cf) goto L_10993b04;
  /* 10993b38 mov esp, ebp */
  ESP = (EBP);
  /* 10993b3a pop ebp */
  EBP = (pop32());
  /* 10993b3b ret  */
  ESPCHK(0x10993a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b40 @ 0x10993b40 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10993b40(void) {
  FTRACE(0x10993b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10993b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10993b41 mov ebp, esp */
  EBP = (ESP);
  /* 10993b43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10993b46:;
  /* 10993b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993b49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10993b4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10993b4e je 0x10993fbc */
  if (C.zf) goto L_10993fbc;
  /* 10993b54 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993b57 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993b5a je 0x10993fbc */
  if (C.zf) goto L_10993fbc;
  /* 10993b60 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10993b64 mov dword ptr [0x109b19c8], 0 */
  w32((uint32_t)(0x109b19c8), (0x0u));
  /* 10993b6e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10993b75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993b78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10993b7b jmp 0x10993b86 */
  goto L_10993b86;
L_10993b7d:;
  /* 10993b7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993b80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993b83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10993b86:;
  /* 10993b86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993b89 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10993b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993b8f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10993b92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993b95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993b98 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10993b9b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993b9d jne 0x10993ba1 */
  if (!C.zf) goto L_10993ba1;
  /* 10993b9f jmp 0x10993b7d */
  goto L_10993b7d;
L_10993ba1:;
  /* 10993ba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993ba4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993ba7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10993baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993bad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10993bb0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10993bb3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993bb6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993bb9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10993bbc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993bc0 ja 0x10993f10 */
  if ((!C.cf&&!C.zf)) goto L_10993f10;
  /* 10993bc6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10993bc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10993bcb mov al, byte ptr [ecx + 0x10993fec] */
  AL = (r8((uint32_t)(ECX + 0x10993fec)));
  /* 10993bd1 jmp dword ptr [eax*4 + 0x10993fc0] */
  switch (EAX) {
    case 0: goto L_10993e2f;
    case 1: goto L_10993d13;
    case 2: goto L_10993c9e;
    case 3: goto L_10993bd8;
    case 4: goto L_10993c16;
    case 5: goto L_10993c77;
    case 6: goto L_10993cc5;
    case 7: goto L_10993cec;
    case 8: goto L_10993d5a;
    case 9: goto L_10993c54;
    case 10: goto L_10993f10;
    default: x86_unimpl("switch@0x10993bd1 out of table"); return;
  }
L_10993bd8:;
  /* 10993bd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993bdb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10993bde mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10993be1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993be4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10993be7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993beb ja 0x10993c11 */
  if ((!C.cf&&!C.zf)) goto L_10993c11;
  /* 10993bed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10993bf0 jmp dword ptr [ecx*4 + 0x1099403f] */
  switch (ECX) {
    case 0: goto L_10993bf7;
    case 1: goto L_10993c01;
    case 2: goto L_10993c07;
    case 3: goto L_10993c0d;
    case 4: goto L_10993c35;
    case 5: goto L_10993c3f;
    case 6: goto L_10993c45;
    case 7: goto L_10993c4b;
    default: x86_unimpl("switch@0x10993bf0 out of table"); return;
  }
L_10993bf7:;
  /* 10993bf7 mov dword ptr [0x109b19c8], 1 */
  w32((uint32_t)(0x109b19c8), (0x1u));
L_10993c01:;
  /* 10993c01 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10993c05 jmp 0x10993c11 */
  goto L_10993c11;
L_10993c07:;
  /* 10993c07 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10993c0b jmp 0x10993c11 */
  goto L_10993c11;
L_10993c0d:;
  /* 10993c0d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10993c11:;
  /* 10993c11 jmp 0x10993f10 */
  goto L_10993f10;
L_10993c16:;
  /* 10993c16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993c19 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10993c1c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10993c1f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993c22 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10993c25 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993c29 ja 0x10993c4f */
  if ((!C.cf&&!C.zf)) goto L_10993c4f;
  /* 10993c2b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10993c2e jmp dword ptr [ecx*4 + 0x1099404f] */
  switch (ECX) {
    case 0: goto L_10993c35;
    case 1: goto L_10993c3f;
    case 2: goto L_10993c45;
    case 3: goto L_10993c4b;
    default: x86_unimpl("switch@0x10993c2e out of table"); return;
  }
L_10993c35:;
  /* 10993c35 mov dword ptr [0x109b19c8], 1 */
  w32((uint32_t)(0x109b19c8), (0x1u));
L_10993c3f:;
  /* 10993c3f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10993c43 jmp 0x10993c4f */
  goto L_10993c4f;
L_10993c45:;
  /* 10993c45 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10993c49 jmp 0x10993c4f */
  goto L_10993c4f;
L_10993c4b:;
  /* 10993c4b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10993c4f:;
  /* 10993c4f jmp 0x10993f10 */
  goto L_10993f10;
L_10993c54:;
  /* 10993c54 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993c57 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10993c5a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993c5e je 0x10993c68 */
  if (C.zf) goto L_10993c68;
  /* 10993c60 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993c64 je 0x10993c6e */
  if (C.zf) goto L_10993c6e;
  /* 10993c66 jmp 0x10993c72 */
  goto L_10993c72;
L_10993c68:;
  /* 10993c68 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10993c6c jmp 0x10993c72 */
  goto L_10993c72;
L_10993c6e:;
  /* 10993c6e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10993c72:;
  /* 10993c72 jmp 0x10993f10 */
  goto L_10993f10;
L_10993c77:;
  /* 10993c77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993c7a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10993c7d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993c81 je 0x10993c8b */
  if (C.zf) goto L_10993c8b;
  /* 10993c83 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993c87 je 0x10993c95 */
  if (C.zf) goto L_10993c95;
  /* 10993c89 jmp 0x10993c99 */
  goto L_10993c99;
L_10993c8b:;
  /* 10993c8b mov dword ptr [0x109b19c8], 1 */
  w32((uint32_t)(0x109b19c8), (0x1u));
L_10993c95:;
  /* 10993c95 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10993c99:;
  /* 10993c99 jmp 0x10993f10 */
  goto L_10993f10;
L_10993c9e:;
  /* 10993c9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993ca1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10993ca4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993ca8 je 0x10993cb2 */
  if (C.zf) goto L_10993cb2;
  /* 10993caa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993cae je 0x10993cbc */
  if (C.zf) goto L_10993cbc;
  /* 10993cb0 jmp 0x10993cc0 */
  goto L_10993cc0;
L_10993cb2:;
  /* 10993cb2 mov dword ptr [0x109b19c8], 1 */
  w32((uint32_t)(0x109b19c8), (0x1u));
L_10993cbc:;
  /* 10993cbc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10993cc0:;
  /* 10993cc0 jmp 0x10993f10 */
  goto L_10993f10;
L_10993cc5:;
  /* 10993cc5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993cc8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10993ccb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993ccf je 0x10993cd9 */
  if (C.zf) goto L_10993cd9;
  /* 10993cd1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993cd5 je 0x10993ce3 */
  if (C.zf) goto L_10993ce3;
  /* 10993cd7 jmp 0x10993ce7 */
  goto L_10993ce7;
L_10993cd9:;
  /* 10993cd9 mov dword ptr [0x109b19c8], 1 */
  w32((uint32_t)(0x109b19c8), (0x1u));
L_10993ce3:;
  /* 10993ce3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10993ce7:;
  /* 10993ce7 jmp 0x10993f10 */
  goto L_10993f10;
L_10993cec:;
  /* 10993cec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993cef mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10993cf2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993cf6 je 0x10993d00 */
  if (C.zf) goto L_10993d00;
  /* 10993cf8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993cfc je 0x10993d0a */
  if (C.zf) goto L_10993d0a;
  /* 10993cfe jmp 0x10993d0e */
  goto L_10993d0e;
L_10993d00:;
  /* 10993d00 mov dword ptr [0x109b19c8], 1 */
  w32((uint32_t)(0x109b19c8), (0x1u));
L_10993d0a:;
  /* 10993d0a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10993d0e:;
  /* 10993d0e jmp 0x10993f10 */
  goto L_10993f10;
L_10993d13:;
  /* 10993d13 push 0x109adbd4 */
  push32((uint32_t)(0x109adbd4u));
  /* 10993d18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993d1b push ecx */
  push32((uint32_t)(ECX));
  /* 10993d1c call 0x10994570 */
  push32(0x10993d21u); f_10994570();
  /* 10993d21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993d24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10993d26 jne 0x10993d33 */
  if (!C.zf) goto L_10993d33;
  /* 10993d28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993d2b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993d2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10993d31 jmp 0x10993d51 */
  goto L_10993d51;
L_10993d33:;
  /* 10993d33 push 0x109adbd0 */
  push32((uint32_t)(0x109adbd0u));
  /* 10993d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993d3b push eax */
  push32((uint32_t)(EAX));
  /* 10993d3c call 0x10994570 */
  push32(0x10993d41u); f_10994570();
  /* 10993d41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993d44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10993d46 jne 0x10993d51 */
  if (!C.zf) goto L_10993d51;
  /* 10993d48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993d4b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993d4e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10993d51:;
  /* 10993d51 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10993d55 jmp 0x10993f10 */
  goto L_10993f10;
L_10993d5a:;
  /* 10993d5a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993d5d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993d61 jg 0x10993d71 */
  if ((!C.zf&&C.sf==C.of)) goto L_10993d71;
  /* 10993d63 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10993d66 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10993d6c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10993d6f jmp 0x10993d7d */
  goto L_10993d7d;
L_10993d71:;
  /* 10993d71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10993d74 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10993d7a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10993d7d:;
  /* 10993d7d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993d81 jle 0x10993e24 */
  if ((C.zf||C.sf!=C.of)) goto L_10993e24;
  /* 10993d87 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993d8a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993d8d jbe 0x10993e24 */
  if ((C.cf||C.zf)) goto L_10993e24;
  /* 10993d93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10993d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10993d98 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10993d9a mov ecx, dword ptr [0x109afc98] */
  ECX = (r32((uint32_t)(0x109afc98)));
  /* 10993da0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10993da2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10993da6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10993dac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10993dae je 0x10993de7 */
  if (C.zf) goto L_10993de7;
  /* 10993db0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993db3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993db6 jbe 0x10993de7 */
  if ((C.cf||C.zf)) goto L_10993de7;
  /* 10993db8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993dbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10993dbd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10993dc0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10993dc2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10993dc4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993dc7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10993dc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993dcc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993dcf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10993dd1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10993dd4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993dd7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10993dda mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993ddd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993ddf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993de2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993de5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10993de7:;
  /* 10993de7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993dea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993dec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10993def mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10993df1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10993df3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993df6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10993df8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993dfb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993dfe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10993e00 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10993e03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993e06 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10993e09 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993e0c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10993e0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993e11 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993e14 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10993e16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993e19 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993e1c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10993e1f jmp 0x10993d7d */
  goto L_10993d7d;
L_10993e24:;
  /* 10993e24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993e27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10993e2a jmp 0x10993b46 */
  goto L_10993b46;
L_10993e2f:;
  /* 10993e2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10993e32 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10993e35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10993e37 je 0x10993f02 */
  if (C.zf) goto L_10993f02;
  /* 10993e3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993e40 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993e43 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10993e46:;
  /* 10993e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993e49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10993e4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10993e4e je 0x10993f00 */
  if (C.zf) goto L_10993f00;
  /* 10993e54 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993e57 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993e5a je 0x10993f00 */
  if (C.zf) goto L_10993f00;
  /* 10993e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993e63 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10993e66 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993e69 jne 0x10993e79 */
  if (!C.zf) goto L_10993e79;
  /* 10993e6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993e6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993e71 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10993e74 jmp 0x10993f00 */
  goto L_10993f00;
L_10993e79:;
  /* 10993e79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993e7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10993e7e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10993e80 mov edx, dword ptr [0x109afc98] */
  EDX = (r32((uint32_t)(0x109afc98)));
  /* 10993e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10993e88 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10993e8c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10993e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10993e93 je 0x10993ecc */
  if (C.zf) goto L_10993ecc;
  /* 10993e95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993e98 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10993e9b jbe 0x10993ecc */
  if ((C.cf||C.zf)) goto L_10993ecc;
  /* 10993e9d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993ea0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10993ea2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993ea5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10993ea7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10993ea9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993eac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993eae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993eb1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993eb4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10993eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993eb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993ebc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10993ebf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993ec2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10993ec4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993ec7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993eca mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10993ecc:;
  /* 10993ecc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993ecf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10993ed1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993ed4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10993ed6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10993ed8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993edb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10993edd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993ee0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993ee3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10993ee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993ee8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993eeb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10993eee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993ef1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993ef3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993ef6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993ef9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10993efb jmp 0x10993e46 */
  goto L_10993e46;
L_10993f00:;
  /* 10993f00 jmp 0x10993f0b */
  goto L_10993f0b;
L_10993f02:;
  /* 10993f02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993f05 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993f08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10993f0b:;
  /* 10993f0b jmp 0x10993b46 */
  goto L_10993b46;
L_10993f10:;
  /* 10993f10 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10993f14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10993f16 je 0x10993f3c */
  if (C.zf) goto L_10993f3c;
  /* 10993f18 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10993f1b push edx */
  push32((uint32_t)(EDX));
  /* 10993f1c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993f1f push eax */
  push32((uint32_t)(EAX));
  /* 10993f20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993f23 push ecx */
  push32((uint32_t)(ECX));
  /* 10993f24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10993f27 push edx */
  push32((uint32_t)(EDX));
  /* 10993f28 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10993f2b push eax */
  push32((uint32_t)(EAX));
  /* 10993f2c call 0x10993370 */
  push32(0x10993f31u); f_10993370();
  /* 10993f31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10993f34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10993f37 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10993f3a jmp 0x10993fb7 */
  goto L_10993fb7;
L_10993f3c:;
  /* 10993f3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10993f41 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10993f43 mov ecx, dword ptr [0x109afc98] */
  ECX = (r32((uint32_t)(0x109afc98)));
  /* 10993f49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10993f4b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10993f4f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10993f55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10993f57 je 0x10993f88 */
  if (C.zf) goto L_10993f88;
  /* 10993f59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993f5c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993f61 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10993f63 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10993f65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993f68 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10993f6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993f6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993f70 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10993f72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993f75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993f78 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10993f7b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993f7e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10993f80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993f83 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993f86 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10993f88:;
  /* 10993f88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993f8b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10993f8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993f90 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10993f92 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10993f94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993f97 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10993f99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993f9c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10993f9f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10993fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10993fa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10993fa7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10993faa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993fad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10993faf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10993fb2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10993fb5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10993fb7:;
  /* 10993fb7 jmp 0x10993b46 */
  goto L_10993b46;
L_10993fbc:;
  /* 10993fbc mov esp, ebp */
  ESP = (EBP);
  /* 10993fbe pop ebp */
  EBP = (pop32());
  /* 10993fbf ret  */
  ESPCHK(0x10993b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014060 @ 0x10994060 (650 bytes, 178 insns) */
void f_10994060(void) {
  FTRACE(0x10994060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10994060 push ebp */
  push32((uint32_t)(EBP));
  /* 10994061 mov ebp, esp */
  EBP = (ESP);
  /* 10994063 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10994069 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099406d jne 0x109941c9 */
  if (!C.zf) goto L_109941c9;
  /* 10994073 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10994076 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1099407c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10994082 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10994085 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1099408c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10994096 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994098 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1099409e push edx */
  push32((uint32_t)(EDX));
  /* 1099409f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109940a2 push eax */
  push32((uint32_t)(EAX));
  /* 109940a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109940a6 push ecx */
  push32((uint32_t)(ECX));
  /* 109940a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109940aa push edx */
  push32((uint32_t)(EDX));
  /* 109940ab call 0x10995480 */
  push32(0x109940b0u); f_10995480();
  /* 109940b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109940b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109940b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109940ba jne 0x1099414f */
  if (!C.zf) goto L_1099414f;
  /* 109940c0 call dword ptr [0x109b439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b439c))), 0x109940c6u);
  /* 109940c6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109940c9 je 0x109940d0 */
  if (C.zf) goto L_109940d0;
  /* 109940cb jmp 0x109941ad */
  goto L_109941ad;
L_109940d0:;
  /* 109940d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109940d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109940d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109940d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109940d9 push eax */
  push32((uint32_t)(EAX));
  /* 109940da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109940dd push ecx */
  push32((uint32_t)(ECX));
  /* 109940de call 0x10995480 */
  push32(0x109940e3u); f_10995480();
  /* 109940e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109940e6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 109940ec cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109940f3 jne 0x109940fa */
  if (!C.zf) goto L_109940fa;
  /* 109940f5 jmp 0x109941ad */
  goto L_109941ad;
L_109940fa:;
  /* 109940fa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 109940fc push 0x109adbdc */
  push32((uint32_t)(0x109adbdcu));
  /* 10994101 push 2 */
  push32((uint32_t)(0x2u));
  /* 10994103 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10994109 push edx */
  push32((uint32_t)(EDX));
  /* 1099410a call 0x10985ea0 */
  push32(0x1099410fu); f_10985ea0();
  /* 1099410f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994112 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10994115 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994119 jne 0x10994120 */
  if (!C.zf) goto L_10994120;
  /* 1099411b jmp 0x109941ad */
  goto L_109941ad;
L_10994120:;
  /* 10994120 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10994127 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994129 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1099412f push eax */
  push32((uint32_t)(EAX));
  /* 10994130 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994133 push ecx */
  push32((uint32_t)(ECX));
  /* 10994134 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10994137 push edx */
  push32((uint32_t)(EDX));
  /* 10994138 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099413b push eax */
  push32((uint32_t)(EAX));
  /* 1099413c call 0x10995480 */
  push32(0x10994141u); f_10995480();
  /* 10994141 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994144 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10994147 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099414b jne 0x1099414f */
  if (!C.zf) goto L_1099414f;
  /* 1099414d jmp 0x109941ad */
  goto L_109941ad;
L_1099414f:;
  /* 1099414f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10994151 push 0x109adbdc */
  push32((uint32_t)(0x109adbdcu));
  /* 10994156 push 2 */
  push32((uint32_t)(0x2u));
  /* 10994158 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099415b push ecx */
  push32((uint32_t)(ECX));
  /* 1099415c call 0x10985ea0 */
  push32(0x10994161u); f_10985ea0();
  /* 10994161 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994164 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1099416a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1099416c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10994172 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994175 jne 0x10994179 */
  if (!C.zf) goto L_10994179;
  /* 10994177 jmp 0x109941ad */
  goto L_109941ad;
L_10994179:;
  /* 10994179 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099417c push ecx */
  push32((uint32_t)(ECX));
  /* 1099417d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994180 push edx */
  push32((uint32_t)(EDX));
  /* 10994181 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10994187 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10994189 push ecx */
  push32((uint32_t)(ECX));
  /* 1099418a call 0x109896c0 */
  push32(0x1099418fu); f_109896c0();
  /* 1099418f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994192 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994196 je 0x109941a6 */
  if (C.zf) goto L_109941a6;
  /* 10994198 push 2 */
  push32((uint32_t)(0x2u));
  /* 1099419a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099419d push edx */
  push32((uint32_t)(EDX));
  /* 1099419e call 0x10986930 */
  push32(0x109941a3u); f_10986930();
  /* 109941a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109941a6:;
  /* 109941a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109941a8 jmp 0x109942e6 */
  goto L_109942e6;
L_109941ad:;
  /* 109941ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109941b1 je 0x109941c1 */
  if (C.zf) goto L_109941c1;
  /* 109941b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109941b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109941b8 push eax */
  push32((uint32_t)(EAX));
  /* 109941b9 call 0x10986930 */
  push32(0x109941beu); f_10986930();
  /* 109941be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109941c1:;
  /* 109941c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109941c4 jmp 0x109942e6 */
  goto L_109942e6;
L_109941c9:;
  /* 109941c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109941cd jne 0x109942e3 */
  if (!C.zf) goto L_109942e3;
  /* 109941d3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 109941dd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109941e0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 109941e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109941e8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 109941ee push edx */
  push32((uint32_t)(EDX));
  /* 109941ef push 0x109b18e0 */
  push32((uint32_t)(0x109b18e0u));
  /* 109941f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109941f7 push eax */
  push32((uint32_t)(EAX));
  /* 109941f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109941fb push ecx */
  push32((uint32_t)(ECX));
  /* 109941fc call 0x109952e0 */
  push32(0x10994201u); f_109952e0();
  /* 10994201 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10994206 jne 0x10994210 */
  if (!C.zf) goto L_10994210;
  /* 10994208 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1099420b jmp 0x109942e6 */
  goto L_109942e6;
L_10994210:;
  /* 10994210 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10994216 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10994219 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10994223 jmp 0x10994234 */
  goto L_10994234;
L_10994225:;
  /* 10994225 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1099422b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099422e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10994234:;
  /* 10994234 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099423b jge 0x109942df */
  if ((C.sf==C.of)) goto L_109942df;
  /* 10994241 cmp dword ptr [0x109afea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109afea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994248 jle 0x1099427b */
  if ((C.zf||C.sf!=C.of)) goto L_1099427b;
  /* 1099424a push 4 */
  push32((uint32_t)(0x4u));
  /* 1099424c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10994252 mov dl, byte ptr [ecx*2 + 0x109b18e0] */
  DL = (r8((uint32_t)(ECX*2 + 0x109b18e0)));
  /* 10994259 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1099425f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10994265 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1099426a push eax */
  push32((uint32_t)(EAX));
  /* 1099426b call 0x1098beb0 */
  push32(0x10994270u); f_1098beb0();
  /* 10994270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994273 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10994279 jmp 0x109942ae */
  goto L_109942ae;
L_1099427b:;
  /* 1099427b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10994281 mov dl, byte ptr [ecx*2 + 0x109b18e0] */
  DL = (r8((uint32_t)(ECX*2 + 0x109b18e0)));
  /* 10994288 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1099428e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10994294 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10994299 mov ecx, dword ptr [0x109afc98] */
  ECX = (r32((uint32_t)(0x109afc98)));
  /* 1099429f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109942a1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109942a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109942a8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_109942ae:;
  /* 109942ae cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109942b5 je 0x109942d8 */
  if (C.zf) goto L_109942d8;
  /* 109942b7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109942bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109942c0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109942c3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 109942ca lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 109942ce mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109942d4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109942d6 jmp 0x109942da */
  goto L_109942da;
L_109942d8:;
  /* 109942d8 jmp 0x109942df */
  goto L_109942df;
L_109942da:;
  /* 109942da jmp 0x10994225 */
  goto L_10994225;
L_109942df:;
  /* 109942df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109942e1 jmp 0x109942e6 */
  goto L_109942e6;
L_109942e3:;
  /* 109942e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_109942e6:;
  /* 109942e6 mov esp, ebp */
  ESP = (EBP);
  /* 109942e8 pop ebp */
  EBP = (pop32());
  /* 109942e9 ret  */
  ESPCHK(0x10994060u, _esp0);
  ESP += 4; return;
}

/* FUN_100142f0 @ 0x109942f0 (10 bytes, 5 insns) */
void f_109942f0(void) {
  FTRACE(0x109942f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109942f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109942f1 mov ebp, esp */
  EBP = (ESP);
  /* 109942f3 mov eax, dword ptr [0x109b0d88] */
  EAX = (r32((uint32_t)(0x109b0d88)));
  /* 109942f8 pop ebp */
  EBP = (pop32());
  /* 109942f9 ret  */
  ESPCHK(0x109942f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014300 @ 0x10994300 (575 bytes, 196 insns) */
void f_10994300(void) {
  FTRACE(0x10994300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10994300 push ebp */
  push32((uint32_t)(EBP));
  /* 10994301 mov ebp, esp */
  EBP = (ESP);
  /* 10994303 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10994305 push 0x109adbe8 */
  push32((uint32_t)(0x109adbe8u));
  /* 1099430a push 0x1098efa8 */
  push32((uint32_t)(0x1098efa8u));
  /* 1099430f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10994315 push eax */
  push32((uint32_t)(EAX));
  /* 10994316 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1099431d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994320 push ebx */
  push32((uint32_t)(EBX));
  /* 10994321 push esi */
  push32((uint32_t)(ESI));
  /* 10994322 push edi */
  push32((uint32_t)(EDI));
  /* 10994323 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10994326 cmp dword ptr [0x109b18ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099432d jne 0x1099437e */
  if (!C.zf) goto L_1099437e;
  /* 1099432f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10994332 push eax */
  push32((uint32_t)(EAX));
  /* 10994333 push 1 */
  push32((uint32_t)(0x1u));
  /* 10994335 push 0x109ad31c */
  push32((uint32_t)(0x109ad31cu));
  /* 1099433a push 1 */
  push32((uint32_t)(0x1u));
  /* 1099433c call dword ptr [0x109b4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4300))), 0x10994342u);
  /* 10994342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10994344 je 0x10994352 */
  if (C.zf) goto L_10994352;
  /* 10994346 mov dword ptr [0x109b18ec], 1 */
  w32((uint32_t)(0x109b18ec), (0x1u));
  /* 10994350 jmp 0x1099437e */
  goto L_1099437e;
L_10994352:;
  /* 10994352 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10994355 push ecx */
  push32((uint32_t)(ECX));
  /* 10994356 push 1 */
  push32((uint32_t)(0x1u));
  /* 10994358 push 0x109ad318 */
  push32((uint32_t)(0x109ad318u));
  /* 1099435d push 1 */
  push32((uint32_t)(0x1u));
  /* 1099435f push 0 */
  push32((uint32_t)(0x0u));
  /* 10994361 call dword ptr [0x109b4304] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4304))), 0x10994367u);
  /* 10994367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10994369 je 0x10994377 */
  if (C.zf) goto L_10994377;
  /* 1099436b mov dword ptr [0x109b18ec], 2 */
  w32((uint32_t)(0x109b18ec), (0x2u));
  /* 10994375 jmp 0x1099437e */
  goto L_1099437e;
L_10994377:;
  /* 10994377 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994379 jmp 0x10994559 */
  goto L_10994559;
L_1099437e:;
  /* 1099437e cmp dword ptr [0x109b18ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b18ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994385 jne 0x109943a2 */
  if (!C.zf) goto L_109943a2;
  /* 10994387 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099438a push edx */
  push32((uint32_t)(EDX));
  /* 1099438b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099438e push eax */
  push32((uint32_t)(EAX));
  /* 1099438f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10994392 push ecx */
  push32((uint32_t)(ECX));
  /* 10994393 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994396 push edx */
  push32((uint32_t)(EDX));
  /* 10994397 call dword ptr [0x109b4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4300))), 0x1099439du);
  /* 1099439d jmp 0x10994559 */
  goto L_10994559;
L_109943a2:;
  /* 109943a2 cmp dword ptr [0x109b18ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109b18ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109943a9 jne 0x10994557 */
  if (!C.zf) goto L_10994557;
  /* 109943af cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109943b3 jne 0x109943bd */
  if (!C.zf) goto L_109943bd;
  /* 109943b5 mov eax, dword ptr [0x109b1860] */
  EAX = (r32((uint32_t)(0x109b1860)));
  /* 109943ba mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_109943bd:;
  /* 109943bd push 0 */
  push32((uint32_t)(0x0u));
  /* 109943bf push 0 */
  push32((uint32_t)(0x0u));
  /* 109943c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109943c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109943c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109943c8 push ecx */
  push32((uint32_t)(ECX));
  /* 109943c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109943cc push edx */
  push32((uint32_t)(EDX));
  /* 109943cd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109943d2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109943d5 push eax */
  push32((uint32_t)(EAX));
  /* 109943d6 call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x109943dcu);
  /* 109943dc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109943df cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109943e3 jne 0x109943ec */
  if (!C.zf) goto L_109943ec;
  /* 109943e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109943e7 jmp 0x10994559 */
  goto L_10994559;
L_109943ec:;
  /* 109943ec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109943f3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109943f6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109943f9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109943fb call 0x10989040 */
  push32(0x10994400u); f_10989040();
  /* 10994400 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10994403 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10994406 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10994409 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1099440c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1099440f push edx */
  push32((uint32_t)(EDX));
  /* 10994410 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994412 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10994415 push eax */
  push32((uint32_t)(EAX));
  /* 10994416 call 0x10989c10 */
  push32(0x1099441bu); f_10989c10();
  /* 1099441b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099441e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10994425 jmp 0x1099443e */
  goto L_1099443e;
  /* 10994427 mov eax, 1 */
  EAX = (0x1u);
  /* 1099442c ret  */
  ESPCHK(0x10994300u, _esp0);
  ESP += 4; return;
  /* 1099442d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10994430 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10994437 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1099443e:;
  /* 1099443e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994442 jne 0x1099444b */
  if (!C.zf) goto L_1099444b;
  /* 10994444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994446 jmp 0x10994559 */
  goto L_10994559;
L_1099444b:;
  /* 1099444b push 0 */
  push32((uint32_t)(0x0u));
  /* 1099444d push 0 */
  push32((uint32_t)(0x0u));
  /* 1099444f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10994452 push ecx */
  push32((uint32_t)(ECX));
  /* 10994453 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10994456 push edx */
  push32((uint32_t)(EDX));
  /* 10994457 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099445a push eax */
  push32((uint32_t)(EAX));
  /* 1099445b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099445e push ecx */
  push32((uint32_t)(ECX));
  /* 1099445f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10994464 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10994467 push edx */
  push32((uint32_t)(EDX));
  /* 10994468 call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x1099446eu);
  /* 1099446e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10994470 jne 0x10994479 */
  if (!C.zf) goto L_10994479;
  /* 10994472 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994474 jmp 0x10994559 */
  goto L_10994559;
L_10994479:;
  /* 10994479 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10994480 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10994483 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10994487 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099448a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1099448c call 0x10989040 */
  push32(0x10994491u); f_10989040();
  /* 10994491 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10994494 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10994497 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1099449a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1099449d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109944a4 jmp 0x109944bd */
  goto L_109944bd;
  /* 109944a6 mov eax, 1 */
  EAX = (0x1u);
  /* 109944ab ret  */
  ESPCHK(0x10994300u, _esp0);
  ESP += 4; return;
  /* 109944ac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109944af mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 109944b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109944bd:;
  /* 109944bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109944c1 jne 0x109944ca */
  if (!C.zf) goto L_109944ca;
  /* 109944c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109944c5 jmp 0x10994559 */
  goto L_10994559;
L_109944ca:;
  /* 109944ca cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109944ce jne 0x109944d9 */
  if (!C.zf) goto L_109944d9;
  /* 109944d0 mov edx, dword ptr [0x109b1850] */
  EDX = (r32((uint32_t)(0x109b1850)));
  /* 109944d6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_109944d9:;
  /* 109944d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109944dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109944df mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 109944e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109944e8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109944eb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 109944f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109944f5 push ecx */
  push32((uint32_t)(ECX));
  /* 109944f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109944f9 push edx */
  push32((uint32_t)(EDX));
  /* 109944fa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109944fd push eax */
  push32((uint32_t)(EAX));
  /* 109944fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994501 push ecx */
  push32((uint32_t)(ECX));
  /* 10994502 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10994505 push edx */
  push32((uint32_t)(EDX));
  /* 10994506 call dword ptr [0x109b4304] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4304))), 0x1099450cu);
  /* 1099450c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1099450f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10994512 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10994515 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994517 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1099451c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994522 je 0x10994538 */
  if (C.zf) goto L_10994538;
  /* 10994524 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10994527 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1099452a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1099452c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10994530 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994536 je 0x1099453c */
  if (C.zf) goto L_1099453c;
L_10994538:;
  /* 10994538 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099453a jmp 0x10994559 */
  goto L_10994559;
L_1099453c:;
  /* 1099453c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099453f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10994541 push eax */
  push32((uint32_t)(EAX));
  /* 10994542 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10994545 push ecx */
  push32((uint32_t)(ECX));
  /* 10994546 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10994549 push edx */
  push32((uint32_t)(EDX));
  /* 1099454a call 0x1098dd90 */
  push32(0x1099454fu); f_1098dd90();
  /* 1099454f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994552 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10994555 jmp 0x10994559 */
  goto L_10994559;
L_10994557:;
  /* 10994557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10994559:;
  /* 10994559 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1099455c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1099455f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10994566 pop edi */
  EDI = (pop32());
  /* 10994567 pop esi */
  ESI = (pop32());
  /* 10994568 pop ebx */
  EBX = (pop32());
  /* 10994569 mov esp, ebp */
  ESP = (EBP);
  /* 1099456b pop ebp */
  EBP = (pop32());
  /* 1099456c ret  */
  ESPCHK(0x10994300u, _esp0);
  ESP += 4; return;
}

/* FUN_10014570 @ 0x10994570 (208 bytes, 85 insns) */
void f_10994570(void) {
  FTRACE(0x10994570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10994570 push ebp */
  push32((uint32_t)(EBP));
  /* 10994571 mov ebp, esp */
  EBP = (ESP);
  /* 10994573 push edi */
  push32((uint32_t)(EDI));
  /* 10994574 push esi */
  push32((uint32_t)(ESI));
  /* 10994575 push ebx */
  push32((uint32_t)(EBX));
  /* 10994576 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10994579 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1099457c lea eax, [0x109b1848] */
  EAX = ((uint32_t)(0x109b1848));
  /* 10994582 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994586 jne 0x109945c3 */
  if (!C.zf) goto L_109945c3;
  /* 10994588 mov al, 0xff */
  AL = (0xffu);
  /* 1099458a mov edi, edi */
  EDI = (EDI);
L_1099458c:;
  /* 1099458c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1099458e je 0x109945be */
  if (C.zf) goto L_109945be;
  /* 10994590 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10994592 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10994593 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10994595 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10994596 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10994598 je 0x1099458c */
  if (C.zf) goto L_1099458c;
  /* 1099459a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1099459c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1099459e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109945a0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 109945a3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109945a5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109945a7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 109945a9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109945ab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109945ad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109945af and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 109945b2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109945b4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109945b6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109945b8 je 0x1099458c */
  if (C.zf) goto L_1099458c;
  /* 109945ba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109945bc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_109945be:;
  /* 109945be movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 109945c1 jmp 0x1099463b */
  goto L_1099463b;
L_109945c3:;
  /* 109945c3 lock inc dword ptr [0x109b19dc] */
  x86_unimpl("lock inc @ 0x109945c3");
  /* 109945ca cmp dword ptr [0x109b19cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109945d1 jg 0x109945d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_109945d7;
  /* 109945d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109945d5 jmp 0x109945ec */
  goto L_109945ec;
L_109945d7:;
  /* 109945d7 lock dec dword ptr [0x109b19dc] */
  x86_unimpl("lock dec @ 0x109945d7");
  /* 109945de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109945e0 call 0x109898a0 */
  push32(0x109945e5u); f_109898a0();
  /* 109945e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_109945ec:;
  /* 109945ec mov eax, 0xff */
  EAX = (0xffu);
  /* 109945f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109945f3 nop  */
  /* nop */
L_109945f4:;
  /* 109945f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109945f6 je 0x1099461f */
  if (C.zf) goto L_1099461f;
  /* 109945f8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109945fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109945fb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 109945fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109945fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10994600 je 0x109945f4 */
  if (C.zf) goto L_109945f4;
  /* 10994602 push eax */
  push32((uint32_t)(EAX));
  /* 10994603 push ebx */
  push32((uint32_t)(EBX));
  /* 10994604 call 0x109956e0 */
  push32(0x10994609u); f_109956e0();
  /* 10994609 mov ebx, eax */
  EBX = (EAX);
  /* 1099460b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099460e call 0x109956e0 */
  push32(0x10994613u); f_109956e0();
  /* 10994613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994616 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10994618 je 0x109945f4 */
  if (C.zf) goto L_109945f4;
  /* 1099461a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1099461c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1099461f:;
  /* 1099461f mov ebx, eax */
  EBX = (EAX);
  /* 10994621 pop eax */
  EAX = (pop32());
  /* 10994622 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994624 jne 0x1099462f */
  if (!C.zf) goto L_1099462f;
  /* 10994626 lock dec dword ptr [0x109b19dc] */
  x86_unimpl("lock dec @ 0x10994626");
  /* 1099462d jmp 0x10994639 */
  goto L_10994639;
L_1099462f:;
  /* 1099462f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10994631 call 0x10989940 */
  push32(0x10994636u); f_10989940();
  /* 10994636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10994639:;
  /* 10994639 mov eax, ebx */
  EAX = (EBX);
L_1099463b:;
  /* 1099463b pop ebx */
  EBX = (pop32());
  /* 1099463c pop esi */
  ESI = (pop32());
  /* 1099463d pop edi */
  EDI = (pop32());
  /* 1099463e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1099463f ret  */
  ESPCHK(0x10994570u, _esp0);
  ESP += 4; return;
}

/* FUN_10014640 @ 0x10994640 (257 bytes, 103 insns) */
void f_10994640(void) {
  FTRACE(0x10994640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10994640 push ebp */
  push32((uint32_t)(EBP));
  /* 10994641 mov ebp, esp */
  EBP = (ESP);
  /* 10994643 push edi */
  push32((uint32_t)(EDI));
  /* 10994644 push esi */
  push32((uint32_t)(ESI));
  /* 10994645 push ebx */
  push32((uint32_t)(EBX));
  /* 10994646 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10994649 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1099464b je 0x1099473a */
  if (C.zf) goto L_1099473a;
  /* 10994651 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10994654 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10994657 lea eax, [0x109b1848] */
  EAX = ((uint32_t)(0x109b1848));
  /* 1099465d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994661 jne 0x109946b1 */
  if (!C.zf) goto L_109946b1;
  /* 10994663 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10994665 mov bl, 0x5a */
  BL = (0x5au);
  /* 10994667 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10994669 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1099466c:;
  /* 1099466c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1099466e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10994670 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10994672 je 0x10994695 */
  if (C.zf) goto L_10994695;
  /* 10994674 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10994676 je 0x10994695 */
  if (C.zf) goto L_10994695;
  /* 10994678 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10994679 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1099467a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1099467c jb 0x10994684 */
  if (C.cf) goto L_10994684;
  /* 1099467e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10994680 ja 0x10994684 */
  if ((!C.cf&&!C.zf)) goto L_10994684;
  /* 10994682 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10994684:;
  /* 10994684 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10994686 jb 0x1099468e */
  if (C.cf) goto L_1099468e;
  /* 10994688 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1099468a ja 0x1099468e */
  if ((!C.cf&&!C.zf)) goto L_1099468e;
  /* 1099468c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1099468e:;
  /* 1099468e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10994690 jne 0x1099469f */
  if (!C.zf) goto L_1099469f;
  /* 10994692 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10994693 jne 0x1099466c */
  if (!C.zf) goto L_1099466c;
L_10994695:;
  /* 10994695 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994697 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10994699 je 0x1099473a */
  if (C.zf) goto L_1099473a;
L_1099469f:;
  /* 1099469f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 109946a4 jb 0x1099473a */
  if (C.cf) goto L_1099473a;
  /* 109946aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109946ac jmp 0x1099473a */
  goto L_1099473a;
L_109946b1:;
  /* 109946b1 lock inc dword ptr [0x109b19dc] */
  x86_unimpl("lock inc @ 0x109946b1");
  /* 109946b8 cmp dword ptr [0x109b19cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109946bf jg 0x109946c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_109946c5;
  /* 109946c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109946c3 jmp 0x109946de */
  goto L_109946de;
L_109946c5:;
  /* 109946c5 lock dec dword ptr [0x109b19dc] */
  x86_unimpl("lock dec @ 0x109946c5");
  /* 109946cc mov ebx, ecx */
  EBX = (ECX);
  /* 109946ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109946d0 call 0x109898a0 */
  push32(0x109946d5u); f_109898a0();
  /* 109946d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 109946dc mov ecx, ebx */
  ECX = (EBX);
L_109946de:;
  /* 109946de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109946e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109946e2 mov edi, edi */
  EDI = (EDI);
L_109946e4:;
  /* 109946e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109946e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109946e8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 109946ea je 0x1099470f */
  if (C.zf) goto L_1099470f;
  /* 109946ec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109946ee je 0x1099470f */
  if (C.zf) goto L_1099470f;
  /* 109946f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109946f1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109946f2 push ecx */
  push32((uint32_t)(ECX));
  /* 109946f3 push eax */
  push32((uint32_t)(EAX));
  /* 109946f4 push ebx */
  push32((uint32_t)(EBX));
  /* 109946f5 call 0x109956e0 */
  push32(0x109946fau); f_109956e0();
  /* 109946fa mov ebx, eax */
  EBX = (EAX);
  /* 109946fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109946ff call 0x109956e0 */
  push32(0x10994704u); f_109956e0();
  /* 10994704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994707 pop ecx */
  ECX = (pop32());
  /* 10994708 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099470a jne 0x10994715 */
  if (!C.zf) goto L_10994715;
  /* 1099470c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1099470d jne 0x109946e4 */
  if (!C.zf) goto L_109946e4;
L_1099470f:;
  /* 1099470f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994711 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994713 je 0x1099471e */
  if (C.zf) goto L_1099471e;
L_10994715:;
  /* 10994715 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1099471a jb 0x1099471e */
  if (C.cf) goto L_1099471e;
  /* 1099471c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1099471e:;
  /* 1099471e pop eax */
  EAX = (pop32());
  /* 1099471f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994721 jne 0x1099472c */
  if (!C.zf) goto L_1099472c;
  /* 10994723 lock dec dword ptr [0x109b19dc] */
  x86_unimpl("lock dec @ 0x10994723");
  /* 1099472a jmp 0x1099473a */
  goto L_1099473a;
L_1099472c:;
  /* 1099472c mov ebx, ecx */
  EBX = (ECX);
  /* 1099472e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10994730 call 0x10989940 */
  push32(0x10994735u); f_10989940();
  /* 10994735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994738 mov ecx, ebx */
  ECX = (EBX);
L_1099473a:;
  /* 1099473a mov eax, ecx */
  EAX = (ECX);
  /* 1099473c pop ebx */
  EBX = (pop32());
  /* 1099473d pop esi */
  ESI = (pop32());
  /* 1099473e pop edi */
  EDI = (pop32());
  /* 1099473f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10994740 ret  */
  ESPCHK(0x10994640u, _esp0);
  ESP += 4; return;
}

/* FUN_10014750 @ 0x10994750 (255 bytes, 88 insns) */
void f_10994750(void) {
  FTRACE(0x10994750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10994750 push ebp */
  push32((uint32_t)(EBP));
  /* 10994751 mov ebp, esp */
  EBP = (ESP);
  /* 10994753 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10994756:;
  /* 10994756 cmp dword ptr [0x109afea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109afea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099475d jle 0x10994776 */
  if ((C.zf||C.sf!=C.of)) goto L_10994776;
  /* 1099475f push 8 */
  push32((uint32_t)(0x8u));
  /* 10994761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994764 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994766 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10994768 push ecx */
  push32((uint32_t)(ECX));
  /* 10994769 call 0x1098beb0 */
  push32(0x1099476eu); f_1098beb0();
  /* 1099476e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994771 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10994774 jmp 0x1099478f */
  goto L_1099478f;
L_10994776:;
  /* 10994776 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099477b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1099477d mov ecx, dword ptr [0x109afc98] */
  ECX = (r32((uint32_t)(0x109afc98)));
  /* 10994783 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994785 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10994789 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1099478c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1099478f:;
  /* 1099478f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994793 je 0x109947a0 */
  if (C.zf) goto L_109947a0;
  /* 10994795 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994798 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099479b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1099479e jmp 0x10994756 */
  goto L_10994756;
L_109947a0:;
  /* 109947a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109947a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109947a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109947a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109947aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109947ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109947b0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109947b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109947b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109947b9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109947bd je 0x109947c5 */
  if (C.zf) goto L_109947c5;
  /* 109947bf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109947c3 jne 0x109947d8 */
  if (!C.zf) goto L_109947d8;
L_109947c5:;
  /* 109947c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109947c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109947ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109947cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109947cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109947d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109947d5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_109947d8:;
  /* 109947d8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109947df:;
  /* 109947df cmp dword ptr [0x109afea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109afea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109947e6 jle 0x109947fb */
  if ((C.zf||C.sf!=C.of)) goto L_109947fb;
  /* 109947e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 109947ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109947ed push edx */
  push32((uint32_t)(EDX));
  /* 109947ee call 0x1098beb0 */
  push32(0x109947f3u); f_1098beb0();
  /* 109947f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109947f6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109947f9 jmp 0x10994810 */
  goto L_10994810;
L_109947fb:;
  /* 109947fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109947fe mov ecx, dword ptr [0x109afc98] */
  ECX = (r32((uint32_t)(0x109afc98)));
  /* 10994804 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994806 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1099480a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1099480d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10994810:;
  /* 10994810 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994814 je 0x1099483b */
  if (C.zf) goto L_1099483b;
  /* 10994816 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10994819 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099481c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099481f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10994823 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10994826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994829 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1099482b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1099482d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10994830 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994833 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994836 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10994839 jmp 0x109947df */
  goto L_109947df;
L_1099483b:;
  /* 1099483b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099483f jne 0x10994848 */
  if (!C.zf) goto L_10994848;
  /* 10994841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10994844 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10994846 jmp 0x1099484b */
  goto L_1099484b;
L_10994848:;
  /* 10994848 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1099484b:;
  /* 1099484b mov esp, ebp */
  ESP = (EBP);
  /* 1099484d pop ebp */
  EBP = (pop32());
  /* 1099484e ret  */
  ESPCHK(0x10994750u, _esp0);
  ESP += 4; return;
}

/* FUN_10014850 @ 0x10994850 (17 bytes, 8 insns) */
void f_10994850(void) {
  FTRACE(0x10994850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10994850 push ebp */
  push32((uint32_t)(EBP));
  /* 10994851 mov ebp, esp */
  EBP = (ESP);
  /* 10994853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994856 push eax */
  push32((uint32_t)(EAX));
  /* 10994857 call 0x10994750 */
  push32(0x1099485cu); f_10994750();
  /* 1099485c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099485f pop ebp */
  EBP = (pop32());
  /* 10994860 ret  */
  ESPCHK(0x10994850u, _esp0);
  ESP += 4; return;
}

/* FUN_10014870 @ 0x10994870 (297 bytes, 106 insns) */
void f_10994870(void) {
  FTRACE(0x10994870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10994870 push ebp */
  push32((uint32_t)(EBP));
  /* 10994871 mov ebp, esp */
  EBP = (ESP);
  /* 10994873 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10994876 push esi */
  push32((uint32_t)(ESI));
L_10994877:;
  /* 10994877 cmp dword ptr [0x109afea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109afea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099487e jle 0x10994897 */
  if ((C.zf||C.sf!=C.of)) goto L_10994897;
  /* 10994880 push 8 */
  push32((uint32_t)(0x8u));
  /* 10994882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994885 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994887 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10994889 push ecx */
  push32((uint32_t)(ECX));
  /* 1099488a call 0x1098beb0 */
  push32(0x1099488fu); f_1098beb0();
  /* 1099488f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994892 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10994895 jmp 0x109948b0 */
  goto L_109948b0;
L_10994897:;
  /* 10994897 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099489a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099489c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1099489e mov ecx, dword ptr [0x109afc98] */
  ECX = (r32((uint32_t)(0x109afc98)));
  /* 109948a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109948a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109948aa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 109948ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_109948b0:;
  /* 109948b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109948b4 je 0x109948c1 */
  if (C.zf) goto L_109948c1;
  /* 109948b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109948b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109948bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109948bf jmp 0x10994877 */
  goto L_10994877;
L_109948c1:;
  /* 109948c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109948c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109948c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109948c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109948cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109948ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109948d1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109948d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109948d7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109948da cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109948de je 0x109948e6 */
  if (C.zf) goto L_109948e6;
  /* 109948e0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109948e4 jne 0x109948f9 */
  if (!C.zf) goto L_109948f9;
L_109948e6:;
  /* 109948e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109948e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109948eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109948ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109948f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109948f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109948f6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_109948f9:;
  /* 109948f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10994900 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10994907:;
  /* 10994907 cmp dword ptr [0x109afea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109afea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099490e jle 0x10994923 */
  if ((C.zf||C.sf!=C.of)) goto L_10994923;
  /* 10994910 push 4 */
  push32((uint32_t)(0x4u));
  /* 10994912 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10994915 push edx */
  push32((uint32_t)(EDX));
  /* 10994916 call 0x1098beb0 */
  push32(0x1099491bu); f_1098beb0();
  /* 1099491b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099491e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10994921 jmp 0x10994938 */
  goto L_10994938;
L_10994923:;
  /* 10994923 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10994926 mov ecx, dword ptr [0x109afc98] */
  ECX = (r32((uint32_t)(0x109afc98)));
  /* 1099492c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1099492e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10994932 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10994935 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10994938:;
  /* 10994938 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099493c je 0x10994979 */
  if (C.zf) goto L_10994979;
  /* 1099493e push 0 */
  push32((uint32_t)(0x0u));
  /* 10994940 push 0xa */
  push32((uint32_t)(0xau));
  /* 10994942 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10994945 push eax */
  push32((uint32_t)(EAX));
  /* 10994946 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994949 push ecx */
  push32((uint32_t)(ECX));
  /* 1099494a call 0x10995810 */
  push32(0x1099494fu); f_10995810();
  /* 1099494f mov ecx, eax */
  ECX = (EAX);
  /* 10994951 mov esi, edx */
  ESI = (EDX);
  /* 10994953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10994956 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10994959 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1099495a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099495c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1099495e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10994961 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10994964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994967 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994969 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1099496b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1099496e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994971 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994974 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10994977 jmp 0x10994907 */
  goto L_10994907;
L_10994979:;
  /* 10994979 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099497d jne 0x1099498e */
  if (!C.zf) goto L_1099498e;
  /* 1099497f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994982 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10994984 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10994987 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099498a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1099498c jmp 0x10994994 */
  goto L_10994994;
L_1099498e:;
  /* 1099498e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994991 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10994994:;
  /* 10994994 pop esi */
  ESI = (pop32());
  /* 10994995 mov esp, ebp */
  ESP = (EBP);
  /* 10994997 pop ebp */
  EBP = (pop32());
  /* 10994998 ret  */
  ESPCHK(0x10994870u, _esp0);
  ESP += 4; return;
}

/* FUN_100149a0 @ 0x109949a0 (61 bytes, 18 insns) */
void f_109949a0(void) {
  FTRACE(0x109949a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109949a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109949a1 mov ebp, esp */
  EBP = (ESP);
  /* 109949a3 cmp dword ptr [0x109b19a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109949aa jne 0x109949db */
  if (!C.zf) goto L_109949db;
  /* 109949ac push 0xb */
  push32((uint32_t)(0xbu));
  /* 109949ae call 0x109898a0 */
  push32(0x109949b3u); f_109898a0();
  /* 109949b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109949b6 cmp dword ptr [0x109b19a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109949bd jne 0x109949d1 */
  if (!C.zf) goto L_109949d1;
  /* 109949bf call 0x10994a00 */
  push32(0x109949c4u); f_10994a00();
  /* 109949c4 mov eax, dword ptr [0x109b19a8] */
  EAX = (r32((uint32_t)(0x109b19a8)));
  /* 109949c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109949cc mov dword ptr [0x109b19a8], eax */
  w32((uint32_t)(0x109b19a8), (EAX));
L_109949d1:;
  /* 109949d1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109949d3 call 0x10989940 */
  push32(0x109949d8u); f_10989940();
  /* 109949d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109949db:;
  /* 109949db pop ebp */
  EBP = (pop32());
  /* 109949dc ret  */
  ESPCHK(0x109949a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100149e0 @ 0x109949e0 (30 bytes, 11 insns) */
void f_109949e0(void) {
  FTRACE(0x109949e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109949e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109949e1 mov ebp, esp */
  EBP = (ESP);
  /* 109949e3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109949e5 call 0x109898a0 */
  push32(0x109949eau); f_109898a0();
  /* 109949ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109949ed call 0x10994a00 */
  push32(0x109949f2u); f_10994a00();
  /* 109949f2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109949f4 call 0x10989940 */
  push32(0x109949f9u); f_10989940();
  /* 109949f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109949fc pop ebp */
  EBP = (pop32());
  /* 109949fd ret  */
  ESPCHK(0x109949e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a00 @ 0x10994a00 (939 bytes, 266 insns) */
void f_10994a00(void) {
  FTRACE(0x10994a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10994a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10994a01 mov ebp, esp */
  EBP = (ESP);
  /* 10994a03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10994a06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10994a0d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10994a0f call 0x109898a0 */
  push32(0x10994a14u); f_109898a0();
  /* 10994a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994a17 mov dword ptr [0x109b18f0], 0 */
  w32((uint32_t)(0x109b18f0), (0x0u));
  /* 10994a21 mov dword ptr [0x109b0e38], 0xffffffff */
  w32((uint32_t)(0x109b0e38), (0xffffffffu));
  /* 10994a2b mov eax, dword ptr [0x109b0e38] */
  EAX = (r32((uint32_t)(0x109b0e38)));
  /* 10994a30 mov dword ptr [0x109b0e28], eax */
  w32((uint32_t)(0x109b0e28), (EAX));
  /* 10994a35 push 0x109adc48 */
  push32((uint32_t)(0x109adc48u));
  /* 10994a3a call 0x10995880 */
  push32(0x10994a3fu); f_10995880();
  /* 10994a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994a42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10994a45 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994a49 jne 0x10994b83 */
  if (!C.zf) goto L_10994b83;
  /* 10994a4f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10994a51 call 0x10989940 */
  push32(0x10994a56u); f_10989940();
  /* 10994a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994a59 push 0x109b18f8 */
  push32((uint32_t)(0x109b18f8u));
  /* 10994a5e call dword ptr [0x109b42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42c4))), 0x10994a64u);
  /* 10994a64 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994a67 je 0x10994b7e */
  if (C.zf) goto L_10994b7e;
  /* 10994a6d mov dword ptr [0x109b18f0], 1 */
  w32((uint32_t)(0x109b18f0), (0x1u));
  /* 10994a77 mov ecx, dword ptr [0x109b18f8] */
  ECX = (r32((uint32_t)(0x109b18f8)));
  /* 10994a7d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10994a80 mov dword ptr [0x109b0d90], ecx */
  w32((uint32_t)(0x109b0d90), (ECX));
  /* 10994a86 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994a88 mov dx, word ptr [0x109b193e] */
  DX = (r16((uint32_t)(0x109b193e)));
  /* 10994a8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10994a91 je 0x10994aa9 */
  if (C.zf) goto L_10994aa9;
  /* 10994a93 mov eax, dword ptr [0x109b194c] */
  EAX = (r32((uint32_t)(0x109b194c)));
  /* 10994a98 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10994a9b mov ecx, dword ptr [0x109b0d90] */
  ECX = (r32((uint32_t)(0x109b0d90)));
  /* 10994aa1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994aa3 mov dword ptr [0x109b0d90], ecx */
  w32((uint32_t)(0x109b0d90), (ECX));
L_10994aa9:;
  /* 10994aa9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994aab mov dx, word ptr [0x109b1992] */
  DX = (r16((uint32_t)(0x109b1992)));
  /* 10994ab2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10994ab4 je 0x10994ade */
  if (C.zf) goto L_10994ade;
  /* 10994ab6 cmp dword ptr [0x109b19a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994abd je 0x10994ade */
  if (C.zf) goto L_10994ade;
  /* 10994abf mov dword ptr [0x109b0d94], 1 */
  w32((uint32_t)(0x109b0d94), (0x1u));
  /* 10994ac9 mov eax, dword ptr [0x109b19a0] */
  EAX = (r32((uint32_t)(0x109b19a0)));
  /* 10994ace sub eax, dword ptr [0x109b194c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b194c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10994ad4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10994ad7 mov dword ptr [0x109b0d98], eax */
  w32((uint32_t)(0x109b0d98), (EAX));
  /* 10994adc jmp 0x10994af2 */
  goto L_10994af2;
L_10994ade:;
  /* 10994ade mov dword ptr [0x109b0d94], 0 */
  w32((uint32_t)(0x109b0d94), (0x0u));
  /* 10994ae8 mov dword ptr [0x109b0d98], 0 */
  w32((uint32_t)(0x109b0d98), (0x0u));
L_10994af2:;
  /* 10994af2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10994af5 push ecx */
  push32((uint32_t)(ECX));
  /* 10994af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994af8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10994afa mov edx, dword ptr [0x109b0e1c] */
  EDX = (r32((uint32_t)(0x109b0e1c)));
  /* 10994b00 push edx */
  push32((uint32_t)(EDX));
  /* 10994b01 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10994b03 push 0x109b18fc */
  push32((uint32_t)(0x109b18fcu));
  /* 10994b08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10994b0d mov eax, dword ptr [0x109b1860] */
  EAX = (r32((uint32_t)(0x109b1860)));
  /* 10994b12 push eax */
  push32((uint32_t)(EAX));
  /* 10994b13 call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x10994b19u);
  /* 10994b19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10994b1b je 0x10994b2f */
  if (C.zf) goto L_10994b2f;
  /* 10994b1d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994b21 jne 0x10994b2f */
  if (!C.zf) goto L_10994b2f;
  /* 10994b23 mov ecx, dword ptr [0x109b0e1c] */
  ECX = (r32((uint32_t)(0x109b0e1c)));
  /* 10994b29 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10994b2d jmp 0x10994b38 */
  goto L_10994b38;
L_10994b2f:;
  /* 10994b2f mov edx, dword ptr [0x109b0e1c] */
  EDX = (r32((uint32_t)(0x109b0e1c)));
  /* 10994b35 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10994b38:;
  /* 10994b38 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10994b3b push eax */
  push32((uint32_t)(EAX));
  /* 10994b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10994b3e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10994b40 mov ecx, dword ptr [0x109b0e20] */
  ECX = (r32((uint32_t)(0x109b0e20)));
  /* 10994b46 push ecx */
  push32((uint32_t)(ECX));
  /* 10994b47 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10994b49 push 0x109b1950 */
  push32((uint32_t)(0x109b1950u));
  /* 10994b4e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10994b53 mov edx, dword ptr [0x109b1860] */
  EDX = (r32((uint32_t)(0x109b1860)));
  /* 10994b59 push edx */
  push32((uint32_t)(EDX));
  /* 10994b5a call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x10994b60u);
  /* 10994b60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10994b62 je 0x10994b75 */
  if (C.zf) goto L_10994b75;
  /* 10994b64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994b68 jne 0x10994b75 */
  if (!C.zf) goto L_10994b75;
  /* 10994b6a mov eax, dword ptr [0x109b0e20] */
  EAX = (r32((uint32_t)(0x109b0e20)));
  /* 10994b6f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10994b73 jmp 0x10994b7e */
  goto L_10994b7e;
L_10994b75:;
  /* 10994b75 mov ecx, dword ptr [0x109b0e20] */
  ECX = (r32((uint32_t)(0x109b0e20)));
  /* 10994b7b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10994b7e:;
  /* 10994b7e jmp 0x10994da7 */
  goto L_10994da7;
L_10994b83:;
  /* 10994b83 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994b86 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10994b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10994b8b je 0x10994bad */
  if (C.zf) goto L_10994bad;
  /* 10994b8d cmp dword ptr [0x109b19a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994b94 je 0x10994bbc */
  if (C.zf) goto L_10994bbc;
  /* 10994b96 mov ecx, dword ptr [0x109b19a4] */
  ECX = (r32((uint32_t)(0x109b19a4)));
  /* 10994b9c push ecx */
  push32((uint32_t)(ECX));
  /* 10994b9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994ba0 push edx */
  push32((uint32_t)(EDX));
  /* 10994ba1 call 0x10991b30 */
  push32(0x10994ba6u); f_10991b30();
  /* 10994ba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994ba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10994bab jne 0x10994bbc */
  if (!C.zf) goto L_10994bbc;
L_10994bad:;
  /* 10994bad push 0xc */
  push32((uint32_t)(0xcu));
  /* 10994baf call 0x10989940 */
  push32(0x10994bb4u); f_10989940();
  /* 10994bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994bb7 jmp 0x10994da7 */
  goto L_10994da7;
L_10994bbc:;
  /* 10994bbc push 2 */
  push32((uint32_t)(0x2u));
  /* 10994bbe mov eax, dword ptr [0x109b19a4] */
  EAX = (r32((uint32_t)(0x109b19a4)));
  /* 10994bc3 push eax */
  push32((uint32_t)(EAX));
  /* 10994bc4 call 0x10986930 */
  push32(0x10994bc9u); f_10986930();
  /* 10994bc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994bcc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10994bd1 push 0x109adc40 */
  push32((uint32_t)(0x109adc40u));
  /* 10994bd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10994bd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994bdb push ecx */
  push32((uint32_t)(ECX));
  /* 10994bdc call 0x10988cd0 */
  push32(0x10994be1u); f_10988cd0();
  /* 10994be1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994be4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994be7 push eax */
  push32((uint32_t)(EAX));
  /* 10994be8 call 0x10985ea0 */
  push32(0x10994bedu); f_10985ea0();
  /* 10994bed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994bf0 mov dword ptr [0x109b19a4], eax */
  w32((uint32_t)(0x109b19a4), (EAX));
  /* 10994bf5 cmp dword ptr [0x109b19a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994bfc jne 0x10994c0d */
  if (!C.zf) goto L_10994c0d;
  /* 10994bfe push 0xc */
  push32((uint32_t)(0xcu));
  /* 10994c00 call 0x10989940 */
  push32(0x10994c05u); f_10989940();
  /* 10994c05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994c08 jmp 0x10994da7 */
  goto L_10994da7;
L_10994c0d:;
  /* 10994c0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994c10 push edx */
  push32((uint32_t)(EDX));
  /* 10994c11 mov eax, dword ptr [0x109b19a4] */
  EAX = (r32((uint32_t)(0x109b19a4)));
  /* 10994c16 push eax */
  push32((uint32_t)(EAX));
  /* 10994c17 call 0x10988e50 */
  push32(0x10994c1cu); f_10988e50();
  /* 10994c1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994c1f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10994c21 call 0x10989940 */
  push32(0x10994c26u); f_10989940();
  /* 10994c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994c29 push 3 */
  push32((uint32_t)(0x3u));
  /* 10994c2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994c2e push ecx */
  push32((uint32_t)(ECX));
  /* 10994c2f mov edx, dword ptr [0x109b0e1c] */
  EDX = (r32((uint32_t)(0x109b0e1c)));
  /* 10994c35 push edx */
  push32((uint32_t)(EDX));
  /* 10994c36 call 0x109896c0 */
  push32(0x10994c3bu); f_109896c0();
  /* 10994c3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994c3e mov eax, dword ptr [0x109b0e1c] */
  EAX = (r32((uint32_t)(0x109b0e1c)));
  /* 10994c43 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10994c47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994c4a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994c4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10994c50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994c53 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10994c56 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994c59 jne 0x10994c6d */
  if (!C.zf) goto L_10994c6d;
  /* 10994c5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10994c5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994c61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10994c64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994c67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994c6a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10994c6d:;
  /* 10994c6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994c70 push eax */
  push32((uint32_t)(EAX));
  /* 10994c71 call 0x10994750 */
  push32(0x10994c76u); f_10994750();
  /* 10994c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994c79 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10994c7f mov dword ptr [0x109b0d90], eax */
  w32((uint32_t)(0x109b0d90), (EAX));
L_10994c84:;
  /* 10994c84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994c87 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10994c8a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994c8d je 0x10994ca5 */
  if (C.zf) goto L_10994ca5;
  /* 10994c8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994c92 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10994c95 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994c98 jl 0x10994cb0 */
  if ((C.sf!=C.of)) goto L_10994cb0;
  /* 10994c9a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994c9d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10994ca0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994ca3 jg 0x10994cb0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10994cb0;
L_10994ca5:;
  /* 10994ca5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994ca8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994cab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10994cae jmp 0x10994c84 */
  goto L_10994c84;
L_10994cb0:;
  /* 10994cb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994cb3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10994cb6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994cb9 jne 0x10994d55 */
  if (!C.zf) goto L_10994d55;
  /* 10994cbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994cc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994cc5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10994cc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994ccb push edx */
  push32((uint32_t)(EDX));
  /* 10994ccc call 0x10994750 */
  push32(0x10994cd1u); f_10994750();
  /* 10994cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994cd4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10994cd7 mov ecx, dword ptr [0x109b0d90] */
  ECX = (r32((uint32_t)(0x109b0d90)));
  /* 10994cdd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994cdf mov dword ptr [0x109b0d90], ecx */
  w32((uint32_t)(0x109b0d90), (ECX));
L_10994ce5:;
  /* 10994ce5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994ce8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10994ceb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994cee jl 0x10994d06 */
  if ((C.sf!=C.of)) goto L_10994d06;
  /* 10994cf0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994cf3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10994cf6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994cf9 jg 0x10994d06 */
  if ((!C.zf&&C.sf==C.of)) goto L_10994d06;
  /* 10994cfb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994cfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994d01 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10994d04 jmp 0x10994ce5 */
  goto L_10994ce5;
L_10994d06:;
  /* 10994d06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994d09 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10994d0c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994d0f jne 0x10994d55 */
  if (!C.zf) goto L_10994d55;
  /* 10994d11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994d14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994d17 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10994d1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994d1d push ecx */
  push32((uint32_t)(ECX));
  /* 10994d1e call 0x10994750 */
  push32(0x10994d23u); f_10994750();
  /* 10994d23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994d26 mov edx, dword ptr [0x109b0d90] */
  EDX = (r32((uint32_t)(0x109b0d90)));
  /* 10994d2c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994d2e mov dword ptr [0x109b0d90], edx */
  w32((uint32_t)(0x109b0d90), (EDX));
L_10994d34:;
  /* 10994d34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994d37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10994d3a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994d3d jl 0x10994d55 */
  if ((C.sf!=C.of)) goto L_10994d55;
  /* 10994d3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994d42 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10994d45 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994d48 jg 0x10994d55 */
  if ((!C.zf&&C.sf==C.of)) goto L_10994d55;
  /* 10994d4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994d4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10994d50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10994d53 jmp 0x10994d34 */
  goto L_10994d34;
L_10994d55:;
  /* 10994d55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994d59 je 0x10994d69 */
  if (C.zf) goto L_10994d69;
  /* 10994d5b mov edx, dword ptr [0x109b0d90] */
  EDX = (r32((uint32_t)(0x109b0d90)));
  /* 10994d61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10994d63 mov dword ptr [0x109b0d90], edx */
  w32((uint32_t)(0x109b0d90), (EDX));
L_10994d69:;
  /* 10994d69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994d6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10994d6f mov dword ptr [0x109b0d94], ecx */
  w32((uint32_t)(0x109b0d94), (ECX));
  /* 10994d75 cmp dword ptr [0x109b0d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b0d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994d7c je 0x10994d9e */
  if (C.zf) goto L_10994d9e;
  /* 10994d7e push 3 */
  push32((uint32_t)(0x3u));
  /* 10994d80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10994d83 push edx */
  push32((uint32_t)(EDX));
  /* 10994d84 mov eax, dword ptr [0x109b0e20] */
  EAX = (r32((uint32_t)(0x109b0e20)));
  /* 10994d89 push eax */
  push32((uint32_t)(EAX));
  /* 10994d8a call 0x109896c0 */
  push32(0x10994d8fu); f_109896c0();
  /* 10994d8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994d92 mov ecx, dword ptr [0x109b0e20] */
  ECX = (r32((uint32_t)(0x109b0e20)));
  /* 10994d98 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10994d9c jmp 0x10994da7 */
  goto L_10994da7;
L_10994d9e:;
  /* 10994d9e mov edx, dword ptr [0x109b0e20] */
  EDX = (r32((uint32_t)(0x109b0e20)));
  /* 10994da4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10994da7:;
  /* 10994da7 mov esp, ebp */
  ESP = (EBP);
  /* 10994da9 pop ebp */
  EBP = (pop32());
  /* 10994daa ret  */
  ESPCHK(0x10994a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014db0 @ 0x10994db0 (46 bytes, 18 insns) */
void f_10994db0(void) {
  FTRACE(0x10994db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10994db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10994db1 mov ebp, esp */
  EBP = (ESP);
  /* 10994db3 push ecx */
  push32((uint32_t)(ECX));
  /* 10994db4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10994db6 call 0x109898a0 */
  push32(0x10994dbbu); f_109898a0();
  /* 10994dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994dbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994dc1 push eax */
  push32((uint32_t)(EAX));
  /* 10994dc2 call 0x10994de0 */
  push32(0x10994dc7u); f_10994de0();
  /* 10994dc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994dca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10994dcd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10994dcf call 0x10989940 */
  push32(0x10994dd4u); f_10989940();
  /* 10994dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994dd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10994dda mov esp, ebp */
  ESP = (EBP);
  /* 10994ddc pop ebp */
  EBP = (pop32());
  /* 10994ddd ret  */
  ESPCHK(0x10994db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014de0 @ 0x10994de0 (762 bytes, 246 insns) */
void f_10994de0(void) {
  FTRACE(0x10994de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10994de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10994de1 mov ebp, esp */
  EBP = (ESP);
  /* 10994de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10994de4 cmp dword ptr [0x109b0d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b0d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994deb jne 0x10994df4 */
  if (!C.zf) goto L_10994df4;
  /* 10994ded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994def jmp 0x109950d6 */
  goto L_109950d6;
L_10994df4:;
  /* 10994df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994df7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10994dfa cmp ecx, dword ptr [0x109b0e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b0e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994e00 jne 0x10994e14 */
  if (!C.zf) goto L_10994e14;
  /* 10994e02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994e05 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10994e08 cmp eax, dword ptr [0x109b0e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b0e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994e0e je 0x10994fdb */
  if (C.zf) goto L_10994fdb;
L_10994e14:;
  /* 10994e14 cmp dword ptr [0x109b18f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994e1b je 0x10994f95 */
  if (C.zf) goto L_10994f95;
  /* 10994e21 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994e23 mov cx, word ptr [0x109b1990] */
  CX = (r16((uint32_t)(0x109b1990)));
  /* 10994e2a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10994e2c jne 0x10994e89 */
  if (!C.zf) goto L_10994e89;
  /* 10994e2e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994e30 mov dx, word ptr [0x109b199e] */
  DX = (r16((uint32_t)(0x109b199e)));
  /* 10994e37 push edx */
  push32((uint32_t)(EDX));
  /* 10994e38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994e3a mov ax, word ptr [0x109b199c] */
  AX = (r16((uint32_t)(0x109b199c)));
  /* 10994e40 push eax */
  push32((uint32_t)(EAX));
  /* 10994e41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994e43 mov cx, word ptr [0x109b199a] */
  CX = (r16((uint32_t)(0x109b199a)));
  /* 10994e4a push ecx */
  push32((uint32_t)(ECX));
  /* 10994e4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994e4d mov dx, word ptr [0x109b1998] */
  DX = (r16((uint32_t)(0x109b1998)));
  /* 10994e54 push edx */
  push32((uint32_t)(EDX));
  /* 10994e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994e59 mov ax, word ptr [0x109b1994] */
  AX = (r16((uint32_t)(0x109b1994)));
  /* 10994e5f push eax */
  push32((uint32_t)(EAX));
  /* 10994e60 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994e62 mov cx, word ptr [0x109b1996] */
  CX = (r16((uint32_t)(0x109b1996)));
  /* 10994e69 push ecx */
  push32((uint32_t)(ECX));
  /* 10994e6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994e6c mov dx, word ptr [0x109b1992] */
  DX = (r16((uint32_t)(0x109b1992)));
  /* 10994e73 push edx */
  push32((uint32_t)(EDX));
  /* 10994e74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994e77 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10994e7a push ecx */
  push32((uint32_t)(ECX));
  /* 10994e7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10994e7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10994e7f call 0x109950e0 */
  push32(0x10994e84u); f_109950e0();
  /* 10994e84 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994e87 jmp 0x10994eda */
  goto L_10994eda;
L_10994e89:;
  /* 10994e89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994e8b mov dx, word ptr [0x109b199e] */
  DX = (r16((uint32_t)(0x109b199e)));
  /* 10994e92 push edx */
  push32((uint32_t)(EDX));
  /* 10994e93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994e95 mov ax, word ptr [0x109b199c] */
  AX = (r16((uint32_t)(0x109b199c)));
  /* 10994e9b push eax */
  push32((uint32_t)(EAX));
  /* 10994e9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994e9e mov cx, word ptr [0x109b199a] */
  CX = (r16((uint32_t)(0x109b199a)));
  /* 10994ea5 push ecx */
  push32((uint32_t)(ECX));
  /* 10994ea6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994ea8 mov dx, word ptr [0x109b1998] */
  DX = (r16((uint32_t)(0x109b1998)));
  /* 10994eaf push edx */
  push32((uint32_t)(EDX));
  /* 10994eb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994eb2 mov ax, word ptr [0x109b1996] */
  AX = (r16((uint32_t)(0x109b1996)));
  /* 10994eb8 push eax */
  push32((uint32_t)(EAX));
  /* 10994eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 10994ebd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994ebf mov cx, word ptr [0x109b1992] */
  CX = (r16((uint32_t)(0x109b1992)));
  /* 10994ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 10994ec7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994eca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10994ecd push eax */
  push32((uint32_t)(EAX));
  /* 10994ece push 0 */
  push32((uint32_t)(0x0u));
  /* 10994ed0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10994ed2 call 0x109950e0 */
  push32(0x10994ed7u); f_109950e0();
  /* 10994ed7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10994eda:;
  /* 10994eda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994edc mov cx, word ptr [0x109b193c] */
  CX = (r16((uint32_t)(0x109b193c)));
  /* 10994ee3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10994ee5 jne 0x10994f42 */
  if (!C.zf) goto L_10994f42;
  /* 10994ee7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994ee9 mov dx, word ptr [0x109b194a] */
  DX = (r16((uint32_t)(0x109b194a)));
  /* 10994ef0 push edx */
  push32((uint32_t)(EDX));
  /* 10994ef1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994ef3 mov ax, word ptr [0x109b1948] */
  AX = (r16((uint32_t)(0x109b1948)));
  /* 10994ef9 push eax */
  push32((uint32_t)(EAX));
  /* 10994efa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994efc mov cx, word ptr [0x109b1946] */
  CX = (r16((uint32_t)(0x109b1946)));
  /* 10994f03 push ecx */
  push32((uint32_t)(ECX));
  /* 10994f04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994f06 mov dx, word ptr [0x109b1944] */
  DX = (r16((uint32_t)(0x109b1944)));
  /* 10994f0d push edx */
  push32((uint32_t)(EDX));
  /* 10994f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10994f10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994f12 mov ax, word ptr [0x109b1940] */
  AX = (r16((uint32_t)(0x109b1940)));
  /* 10994f18 push eax */
  push32((uint32_t)(EAX));
  /* 10994f19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994f1b mov cx, word ptr [0x109b1942] */
  CX = (r16((uint32_t)(0x109b1942)));
  /* 10994f22 push ecx */
  push32((uint32_t)(ECX));
  /* 10994f23 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994f25 mov dx, word ptr [0x109b193e] */
  DX = (r16((uint32_t)(0x109b193e)));
  /* 10994f2c push edx */
  push32((uint32_t)(EDX));
  /* 10994f2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994f30 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10994f33 push ecx */
  push32((uint32_t)(ECX));
  /* 10994f34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10994f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994f38 call 0x109950e0 */
  push32(0x10994f3du); f_109950e0();
  /* 10994f3d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994f40 jmp 0x10994f93 */
  goto L_10994f93;
L_10994f42:;
  /* 10994f42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994f44 mov dx, word ptr [0x109b194a] */
  DX = (r16((uint32_t)(0x109b194a)));
  /* 10994f4b push edx */
  push32((uint32_t)(EDX));
  /* 10994f4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994f4e mov ax, word ptr [0x109b1948] */
  AX = (r16((uint32_t)(0x109b1948)));
  /* 10994f54 push eax */
  push32((uint32_t)(EAX));
  /* 10994f55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994f57 mov cx, word ptr [0x109b1946] */
  CX = (r16((uint32_t)(0x109b1946)));
  /* 10994f5e push ecx */
  push32((uint32_t)(ECX));
  /* 10994f5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10994f61 mov dx, word ptr [0x109b1944] */
  DX = (r16((uint32_t)(0x109b1944)));
  /* 10994f68 push edx */
  push32((uint32_t)(EDX));
  /* 10994f69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10994f6b mov ax, word ptr [0x109b1942] */
  AX = (r16((uint32_t)(0x109b1942)));
  /* 10994f71 push eax */
  push32((uint32_t)(EAX));
  /* 10994f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994f76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10994f78 mov cx, word ptr [0x109b193e] */
  CX = (r16((uint32_t)(0x109b193e)));
  /* 10994f7f push ecx */
  push32((uint32_t)(ECX));
  /* 10994f80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994f83 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10994f86 push eax */
  push32((uint32_t)(EAX));
  /* 10994f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994f8b call 0x109950e0 */
  push32(0x10994f90u); f_109950e0();
  /* 10994f90 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10994f93:;
  /* 10994f93 jmp 0x10994fdb */
  goto L_10994fdb;
L_10994f95:;
  /* 10994f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994f9b push 2 */
  push32((uint32_t)(0x2u));
  /* 10994f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10994f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10994fa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10994fa3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10994fa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994fa8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10994fab push edx */
  push32((uint32_t)(EDX));
  /* 10994fac push 1 */
  push32((uint32_t)(0x1u));
  /* 10994fae push 1 */
  push32((uint32_t)(0x1u));
  /* 10994fb0 call 0x109950e0 */
  push32(0x10994fb5u); f_109950e0();
  /* 10994fb5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10994fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994fba push 0 */
  push32((uint32_t)(0x0u));
  /* 10994fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10994fbe push 2 */
  push32((uint32_t)(0x2u));
  /* 10994fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994fc4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10994fc6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10994fc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994fcb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10994fce push ecx */
  push32((uint32_t)(ECX));
  /* 10994fcf push 1 */
  push32((uint32_t)(0x1u));
  /* 10994fd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10994fd3 call 0x109950e0 */
  push32(0x10994fd8u); f_109950e0();
  /* 10994fd8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10994fdb:;
  /* 10994fdb mov edx, dword ptr [0x109b0e2c] */
  EDX = (r32((uint32_t)(0x109b0e2c)));
  /* 10994fe1 cmp edx, dword ptr [0x109b0e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109b0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994fe7 jge 0x10995034 */
  if ((C.sf==C.of)) goto L_10995034;
  /* 10994fe9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994fec mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10994fef cmp ecx, dword ptr [0x109b0e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10994ff5 jl 0x10995005 */
  if ((C.sf!=C.of)) goto L_10995005;
  /* 10994ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10994ffa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10994ffd cmp eax, dword ptr [0x109b0e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995003 jle 0x1099500c */
  if ((C.zf||C.sf!=C.of)) goto L_1099500c;
L_10995005:;
  /* 10995005 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995007 jmp 0x109950d6 */
  goto L_109950d6;
L_1099500c:;
  /* 1099500c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099500f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10995012 cmp edx, dword ptr [0x109b0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109b0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995018 jle 0x10995032 */
  if ((C.zf||C.sf!=C.of)) goto L_10995032;
  /* 1099501a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099501d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10995020 cmp ecx, dword ptr [0x109b0e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995026 jge 0x10995032 */
  if ((C.sf==C.of)) goto L_10995032;
  /* 10995028 mov eax, 1 */
  EAX = (0x1u);
  /* 1099502d jmp 0x109950d6 */
  goto L_109950d6;
L_10995032:;
  /* 10995032 jmp 0x10995077 */
  goto L_10995077;
L_10995034:;
  /* 10995034 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995037 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1099503a cmp eax, dword ptr [0x109b0e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995040 jl 0x10995050 */
  if ((C.sf!=C.of)) goto L_10995050;
  /* 10995042 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995045 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10995048 cmp edx, dword ptr [0x109b0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109b0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099504e jle 0x10995057 */
  if ((C.zf||C.sf!=C.of)) goto L_10995057;
L_10995050:;
  /* 10995050 mov eax, 1 */
  EAX = (0x1u);
  /* 10995055 jmp 0x109950d6 */
  goto L_109950d6;
L_10995057:;
  /* 10995057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099505a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1099505d cmp ecx, dword ptr [0x109b0e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b0e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995063 jle 0x10995077 */
  if ((C.zf||C.sf!=C.of)) goto L_10995077;
  /* 10995065 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995068 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1099506b cmp eax, dword ptr [0x109b0e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995071 jge 0x10995077 */
  if ((C.sf==C.of)) goto L_10995077;
  /* 10995073 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995075 jmp 0x109950d6 */
  goto L_109950d6;
L_10995077:;
  /* 10995077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099507a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1099507d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10995080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995083 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10995085 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995087 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099508a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1099508d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10995093 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995095 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099509b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1099509e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109950a1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 109950a4 cmp edx, dword ptr [0x109b0e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109b0e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109950aa jne 0x109950c2 */
  if (!C.zf) goto L_109950c2;
  /* 109950ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109950af cmp eax, dword ptr [0x109b0e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b0e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109950b5 jl 0x109950be */
  if ((C.sf!=C.of)) goto L_109950be;
  /* 109950b7 mov eax, 1 */
  EAX = (0x1u);
  /* 109950bc jmp 0x109950d6 */
  goto L_109950d6;
L_109950be:;
  /* 109950be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109950c0 jmp 0x109950d6 */
  goto L_109950d6;
L_109950c2:;
  /* 109950c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109950c5 cmp ecx, dword ptr [0x109b0e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b0e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109950cb jge 0x109950d4 */
  if ((C.sf==C.of)) goto L_109950d4;
  /* 109950cd mov eax, 1 */
  EAX = (0x1u);
  /* 109950d2 jmp 0x109950d6 */
  goto L_109950d6;
L_109950d4:;
  /* 109950d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109950d6:;
  /* 109950d6 mov esp, ebp */
  ESP = (EBP);
  /* 109950d8 pop ebp */
  EBP = (pop32());
  /* 109950d9 ret  */
  ESPCHK(0x10994de0u, _esp0);
  ESP += 4; return;
}

/* FUN_100150e0 @ 0x109950e0 (504 bytes, 145 insns) */
void f_109950e0(void) {
  FTRACE(0x109950e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109950e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109950e1 mov ebp, esp */
  EBP = (ESP);
  /* 109950e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109950e6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109950ea jne 0x109951bc */
  if (!C.zf) goto L_109951bc;
  /* 109950f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109950f3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109950f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109950f8 jne 0x10995109 */
  if (!C.zf) goto L_10995109;
  /* 109950fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109950fd mov edx, dword ptr [ecx*4 + 0x109b0e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109b0e4c)));
  /* 10995104 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10995107 jmp 0x10995116 */
  goto L_10995116;
L_10995109:;
  /* 10995109 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099510c mov ecx, dword ptr [eax*4 + 0x109b0e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109b0e80)));
  /* 10995113 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10995116:;
  /* 10995116 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10995119 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099511c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1099511f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995122 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995125 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099512b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099512e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995130 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995133 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995136 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10995139 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1099513d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1099513e mov ecx, 7 */
  ECX = (0x7u);
  /* 10995143 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10995145 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10995148 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099514b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099514e jge 0x10995169 */
  if ((C.sf==C.of)) goto L_10995169;
  /* 10995150 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10995153 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995156 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995159 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1099515c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099515f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995162 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995164 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10995167 jmp 0x1099517d */
  goto L_1099517d;
L_10995169:;
  /* 10995169 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1099516c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1099516f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995172 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10995175 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995178 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099517a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1099517d:;
  /* 1099517d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995181 jne 0x109951ba */
  if (!C.zf) goto L_109951ba;
  /* 10995183 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995186 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10995189 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1099518b jne 0x1099519c */
  if (!C.zf) goto L_1099519c;
  /* 1099518d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10995190 mov eax, dword ptr [edx*4 + 0x109b0e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109b0e50)));
  /* 10995197 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1099519a jmp 0x109951a9 */
  goto L_109951a9;
L_1099519c:;
  /* 1099519c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099519f mov edx, dword ptr [ecx*4 + 0x109b0e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109b0e84)));
  /* 109951a6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_109951a9:;
  /* 109951a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109951ac cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109951af jle 0x109951ba */
  if ((C.zf||C.sf!=C.of)) goto L_109951ba;
  /* 109951b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109951b4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109951b7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109951ba:;
  /* 109951ba jmp 0x109951f1 */
  goto L_109951f1;
L_109951bc:;
  /* 109951bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109951bf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109951c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109951c4 jne 0x109951d5 */
  if (!C.zf) goto L_109951d5;
  /* 109951c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109951c9 mov ecx, dword ptr [eax*4 + 0x109b0e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109b0e4c)));
  /* 109951d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109951d3 jmp 0x109951e2 */
  goto L_109951e2;
L_109951d5:;
  /* 109951d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109951d8 mov eax, dword ptr [edx*4 + 0x109b0e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109b0e80)));
  /* 109951df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_109951e2:;
  /* 109951e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109951e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109951e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109951eb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109951ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_109951f1:;
  /* 109951f1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109951f5 jne 0x10995231 */
  if (!C.zf) goto L_10995231;
  /* 109951f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109951fa mov dword ptr [0x109b0e2c], eax */
  w32((uint32_t)(0x109b0e2c), (EAX));
  /* 109951ff mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10995202 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10995205 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10995208 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099520a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099520d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10995210 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995212 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10995218 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1099521b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099521d mov dword ptr [0x109b0e30], ecx */
  w32((uint32_t)(0x109b0e30), (ECX));
  /* 10995223 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995226 mov dword ptr [0x109b0e28], edx */
  w32((uint32_t)(0x109b0e28), (EDX));
  /* 1099522c jmp 0x109952d4 */
  goto L_109952d4;
L_10995231:;
  /* 10995231 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10995234 mov dword ptr [0x109b0e3c], eax */
  w32((uint32_t)(0x109b0e3c), (EAX));
  /* 10995239 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1099523c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099523f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10995242 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995244 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10995247 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1099524a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099524c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10995252 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10995255 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995257 mov dword ptr [0x109b0e40], ecx */
  w32((uint32_t)(0x109b0e40), (ECX));
  /* 1099525d mov edx, dword ptr [0x109b0d98] */
  EDX = (r32((uint32_t)(0x109b0d98)));
  /* 10995263 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10995269 mov eax, dword ptr [0x109b0e40] */
  EAX = (r32((uint32_t)(0x109b0e40)));
  /* 1099526e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995270 mov dword ptr [0x109b0e40], eax */
  w32((uint32_t)(0x109b0e40), (EAX));
  /* 10995275 cmp dword ptr [0x109b0e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b0e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099527c jge 0x109952a1 */
  if ((C.sf==C.of)) goto L_109952a1;
  /* 1099527e mov ecx, dword ptr [0x109b0e40] */
  ECX = (r32((uint32_t)(0x109b0e40)));
  /* 10995284 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099528a mov dword ptr [0x109b0e40], ecx */
  w32((uint32_t)(0x109b0e40), (ECX));
  /* 10995290 mov edx, dword ptr [0x109b0e3c] */
  EDX = (r32((uint32_t)(0x109b0e3c)));
  /* 10995296 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995299 mov dword ptr [0x109b0e3c], edx */
  w32((uint32_t)(0x109b0e3c), (EDX));
  /* 1099529f jmp 0x109952cb */
  goto L_109952cb;
L_109952a1:;
  /* 109952a1 cmp dword ptr [0x109b0e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x109b0e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109952ab jl 0x109952cb */
  if ((C.sf!=C.of)) goto L_109952cb;
  /* 109952ad mov eax, dword ptr [0x109b0e40] */
  EAX = (r32((uint32_t)(0x109b0e40)));
  /* 109952b2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109952b7 mov dword ptr [0x109b0e40], eax */
  w32((uint32_t)(0x109b0e40), (EAX));
  /* 109952bc mov ecx, dword ptr [0x109b0e3c] */
  ECX = (r32((uint32_t)(0x109b0e3c)));
  /* 109952c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109952c5 mov dword ptr [0x109b0e3c], ecx */
  w32((uint32_t)(0x109b0e3c), (ECX));
L_109952cb:;
  /* 109952cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109952ce mov dword ptr [0x109b0e38], edx */
  w32((uint32_t)(0x109b0e38), (EDX));
L_109952d4:;
  /* 109952d4 mov esp, ebp */
  ESP = (EBP);
  /* 109952d6 pop ebp */
  EBP = (pop32());
  /* 109952d7 ret  */
  ESPCHK(0x109950e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100152e0 @ 0x109952e0 (382 bytes, 135 insns) */
void f_109952e0(void) {
  FTRACE(0x109952e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109952e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109952e1 mov ebp, esp */
  EBP = (ESP);
  /* 109952e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109952e5 push 0x109adc50 */
  push32((uint32_t)(0x109adc50u));
  /* 109952ea push 0x1098efa8 */
  push32((uint32_t)(0x1098efa8u));
  /* 109952ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109952f5 push eax */
  push32((uint32_t)(EAX));
  /* 109952f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109952fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995300 push ebx */
  push32((uint32_t)(EBX));
  /* 10995301 push esi */
  push32((uint32_t)(ESI));
  /* 10995302 push edi */
  push32((uint32_t)(EDI));
  /* 10995303 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10995306 cmp dword ptr [0x109b19ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099530d jne 0x10995352 */
  if (!C.zf) goto L_10995352;
  /* 1099530f push 0 */
  push32((uint32_t)(0x0u));
  /* 10995311 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995313 push 1 */
  push32((uint32_t)(0x1u));
  /* 10995315 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995317 call dword ptr [0x109b42c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42c0))), 0x1099531du);
  /* 1099531d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099531f je 0x1099532d */
  if (C.zf) goto L_1099532d;
  /* 10995321 mov dword ptr [0x109b19ac], 1 */
  w32((uint32_t)(0x109b19ac), (0x1u));
  /* 1099532b jmp 0x10995352 */
  goto L_10995352;
L_1099532d:;
  /* 1099532d push 0 */
  push32((uint32_t)(0x0u));
  /* 1099532f push 0 */
  push32((uint32_t)(0x0u));
  /* 10995331 push 1 */
  push32((uint32_t)(0x1u));
  /* 10995333 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995335 call dword ptr [0x109b42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42d8))), 0x1099533bu);
  /* 1099533b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099533d je 0x1099534b */
  if (C.zf) goto L_1099534b;
  /* 1099533f mov dword ptr [0x109b19ac], 2 */
  w32((uint32_t)(0x109b19ac), (0x2u));
  /* 10995349 jmp 0x10995352 */
  goto L_10995352;
L_1099534b:;
  /* 1099534b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099534d jmp 0x10995461 */
  goto L_10995461;
L_10995352:;
  /* 10995352 cmp dword ptr [0x109b19ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b19ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995359 jne 0x10995376 */
  if (!C.zf) goto L_10995376;
  /* 1099535b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099535e push eax */
  push32((uint32_t)(EAX));
  /* 1099535f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995362 push ecx */
  push32((uint32_t)(ECX));
  /* 10995363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10995366 push edx */
  push32((uint32_t)(EDX));
  /* 10995367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099536a push eax */
  push32((uint32_t)(EAX));
  /* 1099536b call dword ptr [0x109b42c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42c0))), 0x10995371u);
  /* 10995371 jmp 0x10995461 */
  goto L_10995461;
L_10995376:;
  /* 10995376 cmp dword ptr [0x109b19ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109b19ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099537d jne 0x1099545f */
  if (!C.zf) goto L_1099545f;
  /* 10995383 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995387 jne 0x10995392 */
  if (!C.zf) goto L_10995392;
  /* 10995389 mov ecx, dword ptr [0x109b1860] */
  ECX = (r32((uint32_t)(0x109b1860)));
  /* 1099538f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10995392:;
  /* 10995392 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995394 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995396 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10995399 push edx */
  push32((uint32_t)(EDX));
  /* 1099539a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099539d push eax */
  push32((uint32_t)(EAX));
  /* 1099539e call dword ptr [0x109b42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42d8))), 0x109953a4u);
  /* 109953a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109953a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109953ab jne 0x109953b4 */
  if (!C.zf) goto L_109953b4;
  /* 109953ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109953af jmp 0x10995461 */
  goto L_10995461;
L_109953b4:;
  /* 109953b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109953bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109953be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109953c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109953c3 call 0x10989040 */
  push32(0x109953c8u); f_10989040();
  /* 109953c8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 109953cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109953ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109953d1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 109953d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109953db jmp 0x109953f4 */
  goto L_109953f4;
  /* 109953dd mov eax, 1 */
  EAX = (0x1u);
  /* 109953e2 ret  */
  ESPCHK(0x109952e0u, _esp0);
  ESP += 4; return;
  /* 109953e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109953e6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 109953ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109953f4:;
  /* 109953f4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109953f8 jne 0x109953fe */
  if (!C.zf) goto L_109953fe;
  /* 109953fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109953fc jmp 0x10995461 */
  goto L_10995461;
L_109953fe:;
  /* 109953fe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10995401 push edx */
  push32((uint32_t)(EDX));
  /* 10995402 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10995405 push eax */
  push32((uint32_t)(EAX));
  /* 10995406 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10995409 push ecx */
  push32((uint32_t)(ECX));
  /* 1099540a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099540d push edx */
  push32((uint32_t)(EDX));
  /* 1099540e call dword ptr [0x109b42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42d8))), 0x10995414u);
  /* 10995414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10995416 jne 0x1099541c */
  if (!C.zf) goto L_1099541c;
  /* 10995418 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099541a jmp 0x10995461 */
  goto L_10995461;
L_1099541c:;
  /* 1099541c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995420 jne 0x1099543d */
  if (!C.zf) goto L_1099543d;
  /* 10995422 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995426 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10995428 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1099542b push eax */
  push32((uint32_t)(EAX));
  /* 1099542c push 1 */
  push32((uint32_t)(0x1u));
  /* 1099542e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995431 push ecx */
  push32((uint32_t)(ECX));
  /* 10995432 call dword ptr [0x109b4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4308))), 0x10995438u);
  /* 10995438 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1099543b jmp 0x1099545a */
  goto L_1099545a;
L_1099543d:;
  /* 1099543d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10995440 push edx */
  push32((uint32_t)(EDX));
  /* 10995441 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995444 push eax */
  push32((uint32_t)(EAX));
  /* 10995445 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10995447 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1099544a push ecx */
  push32((uint32_t)(ECX));
  /* 1099544b push 1 */
  push32((uint32_t)(0x1u));
  /* 1099544d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995450 push edx */
  push32((uint32_t)(EDX));
  /* 10995451 call dword ptr [0x109b4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4308))), 0x10995457u);
  /* 10995457 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1099545a:;
  /* 1099545a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1099545d jmp 0x10995461 */
  goto L_10995461;
L_1099545f:;
  /* 1099545f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10995461:;
  /* 10995461 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10995464 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10995467 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1099546e pop edi */
  EDI = (pop32());
  /* 1099546f pop esi */
  ESI = (pop32());
  /* 10995470 pop ebx */
  EBX = (pop32());
  /* 10995471 mov esp, ebp */
  ESP = (EBP);
  /* 10995473 pop ebp */
  EBP = (pop32());
  /* 10995474 ret  */
  ESPCHK(0x109952e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015480 @ 0x10995480 (398 bytes, 140 insns) */
void f_10995480(void) {
  FTRACE(0x10995480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10995480 push ebp */
  push32((uint32_t)(EBP));
  /* 10995481 mov ebp, esp */
  EBP = (ESP);
  /* 10995483 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10995485 push 0x109adc60 */
  push32((uint32_t)(0x109adc60u));
  /* 1099548a push 0x1098efa8 */
  push32((uint32_t)(0x1098efa8u));
  /* 1099548f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10995495 push eax */
  push32((uint32_t)(EAX));
  /* 10995496 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1099549d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109954a0 push ebx */
  push32((uint32_t)(EBX));
  /* 109954a1 push esi */
  push32((uint32_t)(ESI));
  /* 109954a2 push edi */
  push32((uint32_t)(EDI));
  /* 109954a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109954a6 cmp dword ptr [0x109b19b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109954ad jne 0x109954f2 */
  if (!C.zf) goto L_109954f2;
  /* 109954af push 0 */
  push32((uint32_t)(0x0u));
  /* 109954b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109954b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109954b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109954b7 call dword ptr [0x109b42c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42c0))), 0x109954bdu);
  /* 109954bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109954bf je 0x109954cd */
  if (C.zf) goto L_109954cd;
  /* 109954c1 mov dword ptr [0x109b19b0], 1 */
  w32((uint32_t)(0x109b19b0), (0x1u));
  /* 109954cb jmp 0x109954f2 */
  goto L_109954f2;
L_109954cd:;
  /* 109954cd push 0 */
  push32((uint32_t)(0x0u));
  /* 109954cf push 0 */
  push32((uint32_t)(0x0u));
  /* 109954d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109954d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109954d5 call dword ptr [0x109b42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42d8))), 0x109954dbu);
  /* 109954db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109954dd je 0x109954eb */
  if (C.zf) goto L_109954eb;
  /* 109954df mov dword ptr [0x109b19b0], 2 */
  w32((uint32_t)(0x109b19b0), (0x2u));
  /* 109954e9 jmp 0x109954f2 */
  goto L_109954f2;
L_109954eb:;
  /* 109954eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109954ed jmp 0x10995611 */
  goto L_10995611;
L_109954f2:;
  /* 109954f2 cmp dword ptr [0x109b19b0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109b19b0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109954f9 jne 0x10995516 */
  if (!C.zf) goto L_10995516;
  /* 109954fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109954fe push eax */
  push32((uint32_t)(EAX));
  /* 109954ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995502 push ecx */
  push32((uint32_t)(ECX));
  /* 10995503 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10995506 push edx */
  push32((uint32_t)(EDX));
  /* 10995507 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099550a push eax */
  push32((uint32_t)(EAX));
  /* 1099550b call dword ptr [0x109b42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42d8))), 0x10995511u);
  /* 10995511 jmp 0x10995611 */
  goto L_10995611;
L_10995516:;
  /* 10995516 cmp dword ptr [0x109b19b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b19b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099551d jne 0x1099560f */
  if (!C.zf) goto L_1099560f;
  /* 10995523 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995527 jne 0x10995532 */
  if (!C.zf) goto L_10995532;
  /* 10995529 mov ecx, dword ptr [0x109b1860] */
  ECX = (r32((uint32_t)(0x109b1860)));
  /* 1099552f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10995532:;
  /* 10995532 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995534 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995536 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10995539 push edx */
  push32((uint32_t)(EDX));
  /* 1099553a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099553d push eax */
  push32((uint32_t)(EAX));
  /* 1099553e call dword ptr [0x109b42c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42c0))), 0x10995544u);
  /* 10995544 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10995547 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099554b jne 0x10995554 */
  if (!C.zf) goto L_10995554;
  /* 1099554d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099554f jmp 0x10995611 */
  goto L_10995611;
L_10995554:;
  /* 10995554 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1099555b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1099555e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10995560 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995563 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10995565 call 0x10989040 */
  push32(0x1099556au); f_10989040();
  /* 1099556a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1099556d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10995570 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10995573 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10995576 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1099557d jmp 0x10995596 */
  goto L_10995596;
  /* 1099557f mov eax, 1 */
  EAX = (0x1u);
  /* 10995584 ret  */
  ESPCHK(0x10995480u, _esp0);
  ESP += 4; return;
  /* 10995585 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10995588 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1099558f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10995596:;
  /* 10995596 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099559a jne 0x109955a0 */
  if (!C.zf) goto L_109955a0;
  /* 1099559c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099559e jmp 0x10995611 */
  goto L_10995611;
L_109955a0:;
  /* 109955a0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109955a3 push edx */
  push32((uint32_t)(EDX));
  /* 109955a4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109955a7 push eax */
  push32((uint32_t)(EAX));
  /* 109955a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109955ab push ecx */
  push32((uint32_t)(ECX));
  /* 109955ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109955af push edx */
  push32((uint32_t)(EDX));
  /* 109955b0 call dword ptr [0x109b42c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42c0))), 0x109955b6u);
  /* 109955b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109955b8 jne 0x109955be */
  if (!C.zf) goto L_109955be;
  /* 109955ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109955bc jmp 0x10995611 */
  goto L_10995611;
L_109955be:;
  /* 109955be cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109955c2 jne 0x109955e6 */
  if (!C.zf) goto L_109955e6;
  /* 109955c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109955c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109955c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109955ca push 0 */
  push32((uint32_t)(0x0u));
  /* 109955cc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109955ce mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109955d1 push eax */
  push32((uint32_t)(EAX));
  /* 109955d2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109955d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109955da push ecx */
  push32((uint32_t)(ECX));
  /* 109955db call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x109955e1u);
  /* 109955e1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109955e4 jmp 0x1099560a */
  goto L_1099560a;
L_109955e6:;
  /* 109955e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109955e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109955ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109955ed push edx */
  push32((uint32_t)(EDX));
  /* 109955ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109955f1 push eax */
  push32((uint32_t)(EAX));
  /* 109955f2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109955f4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109955f7 push ecx */
  push32((uint32_t)(ECX));
  /* 109955f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109955fd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995600 push edx */
  push32((uint32_t)(EDX));
  /* 10995601 call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x10995607u);
  /* 10995607 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1099560a:;
  /* 1099560a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1099560d jmp 0x10995611 */
  goto L_10995611;
L_1099560f:;
  /* 1099560f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10995611:;
  /* 10995611 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10995614 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10995617 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1099561e pop edi */
  EDI = (pop32());
  /* 1099561f pop esi */
  ESI = (pop32());
  /* 10995620 pop ebx */
  EBX = (pop32());
  /* 10995621 mov esp, ebp */
  ESP = (EBP);
  /* 10995623 pop ebp */
  EBP = (pop32());
  /* 10995624 ret  */
  ESPCHK(0x10995480u, _esp0);
  ESP += 4; return;
}

/* FUN_10015630 @ 0x10995630 (11 bytes, 6 insns) */
void f_10995630(void) {
  FTRACE(0x10995630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10995630 push ebp */
  push32((uint32_t)(EBP));
  /* 10995631 mov ebp, esp */
  EBP = (ESP);
  /* 10995633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995636 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995639 pop ebp */
  EBP = (pop32());
  /* 1099563a ret  */
  ESPCHK(0x10995630u, _esp0);
  ESP += 4; return;
}

/* FUN_10015640 @ 0x10995640 (147 bytes, 43 insns) */
void f_10995640(void) {
  FTRACE(0x10995640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10995640 push ebp */
  push32((uint32_t)(EBP));
  /* 10995641 mov ebp, esp */
  EBP = (ESP);
  /* 10995643 push ecx */
  push32((uint32_t)(ECX));
  /* 10995644 cmp dword ptr [0x109b1850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099564b jne 0x10995667 */
  if (!C.zf) goto L_10995667;
  /* 1099564d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995651 jl 0x10995662 */
  if ((C.sf!=C.of)) goto L_10995662;
  /* 10995653 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995657 jg 0x10995662 */
  if ((!C.zf&&C.sf==C.of)) goto L_10995662;
  /* 10995659 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099565c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099565f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10995662:;
  /* 10995662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995665 jmp 0x109956cf */
  goto L_109956cf;
L_10995667:;
  /* 10995667 push 0x109b19dc */
  push32((uint32_t)(0x109b19dcu));
  /* 1099566c call dword ptr [0x109b4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4370))), 0x10995672u);
  /* 10995672 cmp dword ptr [0x109b19cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995679 je 0x10995699 */
  if (C.zf) goto L_10995699;
  /* 1099567b push 0x109b19dc */
  push32((uint32_t)(0x109b19dcu));
  /* 10995680 call dword ptr [0x109b4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4360))), 0x10995686u);
  /* 10995686 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10995688 call 0x109898a0 */
  push32(0x1099568du); f_109898a0();
  /* 1099568d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995690 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10995697 jmp 0x109956a0 */
  goto L_109956a0;
L_10995699:;
  /* 10995699 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109956a0:;
  /* 109956a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109956a3 push ecx */
  push32((uint32_t)(ECX));
  /* 109956a4 call 0x109956e0 */
  push32(0x109956a9u); f_109956e0();
  /* 109956a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109956ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109956af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109956b3 je 0x109956c1 */
  if (C.zf) goto L_109956c1;
  /* 109956b5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109956b7 call 0x10989940 */
  push32(0x109956bcu); f_10989940();
  /* 109956bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109956bf jmp 0x109956cc */
  goto L_109956cc;
L_109956c1:;
  /* 109956c1 push 0x109b19dc */
  push32((uint32_t)(0x109b19dcu));
  /* 109956c6 call dword ptr [0x109b4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4360))), 0x109956ccu);
L_109956cc:;
  /* 109956cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_109956cf:;
  /* 109956cf mov esp, ebp */
  ESP = (EBP);
  /* 109956d1 pop ebp */
  EBP = (pop32());
  /* 109956d2 ret  */
  ESPCHK(0x10995640u, _esp0);
  ESP += 4; return;
}

/* FUN_100156e0 @ 0x109956e0 (299 bytes, 91 insns) */
void f_109956e0(void) {
  FTRACE(0x109956e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109956e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109956e1 mov ebp, esp */
  EBP = (ESP);
  /* 109956e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109956e6 cmp dword ptr [0x109b1850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109956ed jne 0x1099570c */
  if (!C.zf) goto L_1099570c;
  /* 109956ef cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109956f3 jl 0x10995704 */
  if ((C.sf!=C.of)) goto L_10995704;
  /* 109956f5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109956f9 jg 0x10995704 */
  if ((!C.zf&&C.sf==C.of)) goto L_10995704;
  /* 109956fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109956fe add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995701 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10995704:;
  /* 10995704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995707 jmp 0x10995807 */
  goto L_10995807;
L_1099570c:;
  /* 1099570c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995713 jge 0x10995753 */
  if ((C.sf==C.of)) goto L_10995753;
  /* 10995715 cmp dword ptr [0x109afea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109afea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099571c jle 0x10995731 */
  if ((C.zf||C.sf!=C.of)) goto L_10995731;
  /* 1099571e push 1 */
  push32((uint32_t)(0x1u));
  /* 10995720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995723 push ecx */
  push32((uint32_t)(ECX));
  /* 10995724 call 0x1098beb0 */
  push32(0x10995729u); f_1098beb0();
  /* 10995729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099572c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1099572f jmp 0x10995745 */
  goto L_10995745;
L_10995731:;
  /* 10995731 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995734 mov eax, dword ptr [0x109afc98] */
  EAX = (r32((uint32_t)(0x109afc98)));
  /* 10995739 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1099573b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1099573f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10995742 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10995745:;
  /* 10995745 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995749 jne 0x10995753 */
  if (!C.zf) goto L_10995753;
  /* 1099574b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099574e jmp 0x10995807 */
  goto L_10995807;
L_10995753:;
  /* 10995753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995756 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10995759 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1099575f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10995765 mov eax, dword ptr [0x109afc98] */
  EAX = (r32((uint32_t)(0x109afc98)));
  /* 1099576a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1099576c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10995770 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10995776 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10995778 je 0x1099579c */
  if (C.zf) goto L_1099579c;
  /* 1099577a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099577d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10995780 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10995786 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10995789 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1099578c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1099578f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10995793 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1099579a jmp 0x109957ad */
  goto L_109957ad;
L_1099579c:;
  /* 1099579c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1099579f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 109957a2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 109957a6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_109957ad:;
  /* 109957ad push 1 */
  push32((uint32_t)(0x1u));
  /* 109957af push 0 */
  push32((uint32_t)(0x0u));
  /* 109957b1 push 3 */
  push32((uint32_t)(0x3u));
  /* 109957b3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 109957b6 push edx */
  push32((uint32_t)(EDX));
  /* 109957b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109957ba push eax */
  push32((uint32_t)(EAX));
  /* 109957bb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 109957be push ecx */
  push32((uint32_t)(ECX));
  /* 109957bf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109957c4 mov edx, dword ptr [0x109b1850] */
  EDX = (r32((uint32_t)(0x109b1850)));
  /* 109957ca push edx */
  push32((uint32_t)(EDX));
  /* 109957cb call 0x1098e290 */
  push32(0x109957d0u); f_1098e290();
  /* 109957d0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109957d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109957d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109957da jne 0x109957e1 */
  if (!C.zf) goto L_109957e1;
  /* 109957dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109957df jmp 0x10995807 */
  goto L_10995807;
L_109957e1:;
  /* 109957e1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109957e5 jne 0x109957f1 */
  if (!C.zf) goto L_109957f1;
  /* 109957e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109957ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109957ef jmp 0x10995807 */
  goto L_10995807;
L_109957f1:;
  /* 109957f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109957f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109957f9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 109957fc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10995802 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10995805 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10995807:;
  /* 10995807 mov esp, ebp */
  ESP = (EBP);
  /* 10995809 pop ebp */
  EBP = (pop32());
  /* 1099580a ret  */
  ESPCHK(0x109956e0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10995810 (52 bytes, 19 insns) */
void f_10995810(void) {
  FTRACE(0x10995810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10995810 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10995814 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10995818 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099581a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1099581e jne 0x10995829 */
  if (!C.zf) goto L_10995829;
  /* 10995820 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10995824 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10995826 ret 0x10 */
  ESPCHK(0x10995810u, _esp0);
  ESP += 20; return;
L_10995829:;
  /* 10995829 push ebx */
  push32((uint32_t)(EBX));
  /* 1099582a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1099582c mov ebx, eax */
  EBX = (EAX);
  /* 1099582e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10995832 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10995836 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995838 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1099583c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1099583e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995840 pop ebx */
  EBX = (pop32());
  /* 10995841 ret 0x10 */
  ESPCHK(0x10995810u, _esp0);
  ESP += 20; return;
}

/* FUN_10015850 @ 0x10995850 (46 bytes, 18 insns) */
void f_10995850(void) {
  FTRACE(0x10995850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10995850 push ebp */
  push32((uint32_t)(EBP));
  /* 10995851 mov ebp, esp */
  EBP = (ESP);
  /* 10995853 push ecx */
  push32((uint32_t)(ECX));
  /* 10995854 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10995856 call 0x109898a0 */
  push32(0x1099585bu); f_109898a0();
  /* 1099585b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099585e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995861 push eax */
  push32((uint32_t)(EAX));
  /* 10995862 call 0x10995880 */
  push32(0x10995867u); f_10995880();
  /* 10995867 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099586a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1099586d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1099586f call 0x10989940 */
  push32(0x10995874u); f_10989940();
  /* 10995874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099587a mov esp, ebp */
  ESP = (EBP);
  /* 1099587c pop ebp */
  EBP = (pop32());
  /* 1099587d ret  */
  ESPCHK(0x10995850u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10995880 (198 bytes, 69 insns) */
void f_10995880(void) {
  FTRACE(0x10995880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10995880 push ebp */
  push32((uint32_t)(EBP));
  /* 10995881 mov ebp, esp */
  EBP = (ESP);
  /* 10995883 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995886 mov eax, dword ptr [0x109b1670] */
  EAX = (r32((uint32_t)(0x109b1670)));
  /* 1099588b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1099588e cmp dword ptr [0x109b3160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b3160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995895 jne 0x1099589e */
  if (!C.zf) goto L_1099589e;
  /* 10995897 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995899 jmp 0x10995942 */
  goto L_10995942;
L_1099589e:;
  /* 1099589e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109958a2 jne 0x109958c6 */
  if (!C.zf) goto L_109958c6;
  /* 109958a4 cmp dword ptr [0x109b1678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109958ab je 0x109958c6 */
  if (C.zf) goto L_109958c6;
  /* 109958ad call 0x109959a0 */
  push32(0x109958b2u); f_109959a0();
  /* 109958b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109958b4 je 0x109958bd */
  if (C.zf) goto L_109958bd;
  /* 109958b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109958b8 jmp 0x10995942 */
  goto L_10995942;
L_109958bd:;
  /* 109958bd mov ecx, dword ptr [0x109b1670] */
  ECX = (r32((uint32_t)(0x109b1670)));
  /* 109958c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109958c6:;
  /* 109958c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109958ca je 0x10995940 */
  if (C.zf) goto L_10995940;
  /* 109958cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109958d0 je 0x10995940 */
  if (C.zf) goto L_10995940;
  /* 109958d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109958d5 push edx */
  push32((uint32_t)(EDX));
  /* 109958d6 call 0x10988cd0 */
  push32(0x109958dbu); f_10988cd0();
  /* 109958db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109958de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109958e1:;
  /* 109958e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109958e4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109958e7 je 0x10995940 */
  if (C.zf) goto L_10995940;
  /* 109958e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109958ec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109958ee push edx */
  push32((uint32_t)(EDX));
  /* 109958ef call 0x10988cd0 */
  push32(0x109958f4u); f_10988cd0();
  /* 109958f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109958f7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109958fa jbe 0x10995935 */
  if ((C.cf||C.zf)) goto L_10995935;
  /* 109958fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109958ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10995901 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10995904 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10995908 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099590b jne 0x10995935 */
  if (!C.zf) goto L_10995935;
  /* 1099590d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10995910 push ecx */
  push32((uint32_t)(ECX));
  /* 10995911 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995914 push edx */
  push32((uint32_t)(EDX));
  /* 10995915 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10995918 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1099591a push ecx */
  push32((uint32_t)(ECX));
  /* 1099591b call 0x10995950 */
  push32(0x10995920u); f_10995950();
  /* 10995920 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10995925 jne 0x10995935 */
  if (!C.zf) goto L_10995935;
  /* 10995927 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099592a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1099592c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099592f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10995933 jmp 0x10995942 */
  goto L_10995942;
L_10995935:;
  /* 10995935 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10995938 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099593b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1099593e jmp 0x109958e1 */
  goto L_109958e1;
L_10995940:;
  /* 10995940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10995942:;
  /* 10995942 mov esp, ebp */
  ESP = (EBP);
  /* 10995944 pop ebp */
  EBP = (pop32());
  /* 10995945 ret  */
  ESPCHK(0x10995880u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10995950 (79 bytes, 32 insns) */
void f_10995950(void) {
  FTRACE(0x10995950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10995950 push ebp */
  push32((uint32_t)(EBP));
  /* 10995951 mov ebp, esp */
  EBP = (ESP);
  /* 10995953 push ecx */
  push32((uint32_t)(ECX));
  /* 10995954 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995958 jne 0x1099595e */
  if (!C.zf) goto L_1099595e;
  /* 1099595a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099595c jmp 0x1099599b */
  goto L_1099599b;
L_1099595e:;
  /* 1099595e mov eax, dword ptr [0x109b2d24] */
  EAX = (r32((uint32_t)(0x109b2d24)));
  /* 10995963 push eax */
  push32((uint32_t)(EAX));
  /* 10995964 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995967 push ecx */
  push32((uint32_t)(ECX));
  /* 10995968 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099596b push edx */
  push32((uint32_t)(EDX));
  /* 1099596c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099596f push eax */
  push32((uint32_t)(EAX));
  /* 10995970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995973 push ecx */
  push32((uint32_t)(ECX));
  /* 10995974 push 1 */
  push32((uint32_t)(0x1u));
  /* 10995976 mov edx, dword ptr [0x109b2fc4] */
  EDX = (r32((uint32_t)(0x109b2fc4)));
  /* 1099597c push edx */
  push32((uint32_t)(EDX));
  /* 1099597d call 0x10995a50 */
  push32(0x10995982u); f_10995a50();
  /* 10995982 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995985 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10995988 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099598c jne 0x10995995 */
  if (!C.zf) goto L_10995995;
  /* 1099598e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10995993 jmp 0x1099599b */
  goto L_1099599b;
L_10995995:;
  /* 10995995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10995998 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1099599b:;
  /* 1099599b mov esp, ebp */
  ESP = (EBP);
  /* 1099599d pop ebp */
  EBP = (pop32());
  /* 1099599e ret  */
  ESPCHK(0x10995950u, _esp0);
  ESP += 4; return;
}

/* FUN_100159a0 @ 0x109959a0 (174 bytes, 66 insns) */
void f_109959a0(void) {
  FTRACE(0x109959a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109959a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109959a1 mov ebp, esp */
  EBP = (ESP);
  /* 109959a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109959a6 mov eax, dword ptr [0x109b1678] */
  EAX = (r32((uint32_t)(0x109b1678)));
  /* 109959ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109959ae:;
  /* 109959ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109959b1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109959b4 je 0x10995a48 */
  if (C.zf) goto L_10995a48;
  /* 109959ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109959bc push 0 */
  push32((uint32_t)(0x0u));
  /* 109959be push 0 */
  push32((uint32_t)(0x0u));
  /* 109959c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109959c2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109959c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109959c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109959c9 push eax */
  push32((uint32_t)(EAX));
  /* 109959ca push 0 */
  push32((uint32_t)(0x0u));
  /* 109959cc push 1 */
  push32((uint32_t)(0x1u));
  /* 109959ce call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x109959d4u);
  /* 109959d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109959d7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109959db jne 0x109959e2 */
  if (!C.zf) goto L_109959e2;
  /* 109959dd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109959e0 jmp 0x10995a4a */
  goto L_10995a4a;
L_109959e2:;
  /* 109959e2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 109959e4 push 0x109adc6c */
  push32((uint32_t)(0x109adc6cu));
  /* 109959e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109959eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109959ee push ecx */
  push32((uint32_t)(ECX));
  /* 109959ef call 0x10985ea0 */
  push32(0x109959f4u); f_10985ea0();
  /* 109959f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109959f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109959fa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109959fe jne 0x10995a05 */
  if (!C.zf) goto L_10995a05;
  /* 10995a00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10995a03 jmp 0x10995a4a */
  goto L_10995a4a;
L_10995a05:;
  /* 10995a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995a09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10995a0c push edx */
  push32((uint32_t)(EDX));
  /* 10995a0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10995a10 push eax */
  push32((uint32_t)(EAX));
  /* 10995a11 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10995a13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10995a16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10995a18 push edx */
  push32((uint32_t)(EDX));
  /* 10995a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995a1b push 1 */
  push32((uint32_t)(0x1u));
  /* 10995a1d call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x10995a23u);
  /* 10995a23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10995a25 jne 0x10995a2c */
  if (!C.zf) goto L_10995a2c;
  /* 10995a27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10995a2a jmp 0x10995a4a */
  goto L_10995a4a;
L_10995a2c:;
  /* 10995a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10995a2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10995a31 push eax */
  push32((uint32_t)(EAX));
  /* 10995a32 call 0x10995ea0 */
  push32(0x10995a37u); f_10995ea0();
  /* 10995a37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10995a3d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995a40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10995a43 jmp 0x109959ae */
  goto L_109959ae;
L_10995a48:;
  /* 10995a48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10995a4a:;
  /* 10995a4a mov esp, ebp */
  ESP = (EBP);
  /* 10995a4c pop ebp */
  EBP = (pop32());
  /* 10995a4d ret  */
  ESPCHK(0x109959a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a50 @ 0x10995a50 (970 bytes, 340 insns) */
void f_10995a50(void) {
  FTRACE(0x10995a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10995a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10995a51 mov ebp, esp */
  EBP = (ESP);
  /* 10995a53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10995a55 push 0x109adcc0 */
  push32((uint32_t)(0x109adcc0u));
  /* 10995a5a push 0x1098efa8 */
  push32((uint32_t)(0x1098efa8u));
  /* 10995a5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10995a65 push eax */
  push32((uint32_t)(EAX));
  /* 10995a66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10995a6d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995a70 push ebx */
  push32((uint32_t)(EBX));
  /* 10995a71 push esi */
  push32((uint32_t)(ESI));
  /* 10995a72 push edi */
  push32((uint32_t)(EDI));
  /* 10995a73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10995a76 cmp dword ptr [0x109b19b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995a7d jne 0x10995ad6 */
  if (!C.zf) goto L_10995ad6;
  /* 10995a7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10995a81 push 0x109ad31c */
  push32((uint32_t)(0x109ad31cu));
  /* 10995a86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10995a88 push 0x109ad31c */
  push32((uint32_t)(0x109ad31cu));
  /* 10995a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10995a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10995a91 call dword ptr [0x109b42b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42b8))), 0x10995a97u);
  /* 10995a97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10995a99 je 0x10995aa7 */
  if (C.zf) goto L_10995aa7;
  /* 10995a9b mov dword ptr [0x109b19b4], 1 */
  w32((uint32_t)(0x109b19b4), (0x1u));
  /* 10995aa5 jmp 0x10995ad6 */
  goto L_10995ad6;
L_10995aa7:;
  /* 10995aa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10995aa9 push 0x109ad318 */
  push32((uint32_t)(0x109ad318u));
  /* 10995aae push 1 */
  push32((uint32_t)(0x1u));
  /* 10995ab0 push 0x109ad318 */
  push32((uint32_t)(0x109ad318u));
  /* 10995ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995ab9 call dword ptr [0x109b42bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42bc))), 0x10995abfu);
  /* 10995abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10995ac1 je 0x10995acf */
  if (C.zf) goto L_10995acf;
  /* 10995ac3 mov dword ptr [0x109b19b4], 2 */
  w32((uint32_t)(0x109b19b4), (0x2u));
  /* 10995acd jmp 0x10995ad6 */
  goto L_10995ad6;
L_10995acf:;
  /* 10995acf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995ad1 jmp 0x10995e34 */
  goto L_10995e34;
L_10995ad6:;
  /* 10995ad6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995ada jle 0x10995aef */
  if ((C.zf||C.sf!=C.of)) goto L_10995aef;
  /* 10995adc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10995adf push eax */
  push32((uint32_t)(EAX));
  /* 10995ae0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10995ae4 call 0x10995e50 */
  push32(0x10995ae9u); f_10995e50();
  /* 10995ae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995aec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10995aef:;
  /* 10995aef cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995af3 jle 0x10995b08 */
  if ((C.zf||C.sf!=C.of)) goto L_10995b08;
  /* 10995af5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10995af8 push edx */
  push32((uint32_t)(EDX));
  /* 10995af9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995afc push eax */
  push32((uint32_t)(EAX));
  /* 10995afd call 0x10995e50 */
  push32(0x10995b02u); f_10995e50();
  /* 10995b02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995b05 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10995b08:;
  /* 10995b08 cmp dword ptr [0x109b19b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109b19b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995b0f jne 0x10995b34 */
  if (!C.zf) goto L_10995b34;
  /* 10995b11 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10995b14 push ecx */
  push32((uint32_t)(ECX));
  /* 10995b15 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995b18 push edx */
  push32((uint32_t)(EDX));
  /* 10995b19 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10995b1c push eax */
  push32((uint32_t)(EAX));
  /* 10995b1d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995b20 push ecx */
  push32((uint32_t)(ECX));
  /* 10995b21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10995b24 push edx */
  push32((uint32_t)(EDX));
  /* 10995b25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995b28 push eax */
  push32((uint32_t)(EAX));
  /* 10995b29 call dword ptr [0x109b42bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42bc))), 0x10995b2fu);
  /* 10995b2f jmp 0x10995e34 */
  goto L_10995e34;
L_10995b34:;
  /* 10995b34 cmp dword ptr [0x109b19b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b19b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995b3b jne 0x10995e32 */
  if (!C.zf) goto L_10995e32;
  /* 10995b41 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995b45 jne 0x10995b50 */
  if (!C.zf) goto L_10995b50;
  /* 10995b47 mov ecx, dword ptr [0x109b1860] */
  ECX = (r32((uint32_t)(0x109b1860)));
  /* 10995b4d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10995b50:;
  /* 10995b50 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995b54 je 0x10995b60 */
  if (C.zf) goto L_10995b60;
  /* 10995b56 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995b5a jne 0x10995cdc */
  if (!C.zf) goto L_10995cdc;
L_10995b60:;
  /* 10995b60 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10995b63 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995b66 jne 0x10995b72 */
  if (!C.zf) goto L_10995b72;
  /* 10995b68 mov eax, 2 */
  EAX = (0x2u);
  /* 10995b6d jmp 0x10995e34 */
  goto L_10995e34;
L_10995b72:;
  /* 10995b72 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995b76 jle 0x10995b82 */
  if ((C.zf||C.sf!=C.of)) goto L_10995b82;
  /* 10995b78 mov eax, 1 */
  EAX = (0x1u);
  /* 10995b7d jmp 0x10995e34 */
  goto L_10995e34;
L_10995b82:;
  /* 10995b82 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995b86 jle 0x10995b92 */
  if ((C.zf||C.sf!=C.of)) goto L_10995b92;
  /* 10995b88 mov eax, 3 */
  EAX = (0x3u);
  /* 10995b8d jmp 0x10995e34 */
  goto L_10995e34;
L_10995b92:;
  /* 10995b92 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10995b95 push eax */
  push32((uint32_t)(EAX));
  /* 10995b96 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10995b99 push ecx */
  push32((uint32_t)(ECX));
  /* 10995b9a call dword ptr [0x109b4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4314))), 0x10995ba0u);
  /* 10995ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10995ba2 jne 0x10995bab */
  if (!C.zf) goto L_10995bab;
  /* 10995ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995ba6 jmp 0x10995e34 */
  goto L_10995e34;
L_10995bab:;
  /* 10995bab cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995baf jne 0x10995bb7 */
  if (!C.zf) goto L_10995bb7;
  /* 10995bb1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995bb5 je 0x10995be4 */
  if (C.zf) goto L_10995be4;
L_10995bb7:;
  /* 10995bb7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995bbb jne 0x10995bc3 */
  if (!C.zf) goto L_10995bc3;
  /* 10995bbd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995bc1 je 0x10995be4 */
  if (C.zf) goto L_10995be4;
L_10995bc3:;
  /* 10995bc3 push 0x109adc80 */
  push32((uint32_t)(0x109adc80u));
  /* 10995bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10995bca push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10995bcf push 0x109adc78 */
  push32((uint32_t)(0x109adc78u));
  /* 10995bd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10995bd6 call 0x10984f60 */
  push32(0x10995bdbu); f_10984f60();
  /* 10995bdb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995bde cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995be1 jne 0x10995be4 */
  if (!C.zf) goto L_10995be4;
  /* 10995be3 int3  */
  x86_unimpl("int3 @ 0x10995be3");
L_10995be4:;
  /* 10995be4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10995be6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10995be8 jne 0x10995bab */
  if (!C.zf) goto L_10995bab;
  /* 10995bea cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995bee jle 0x10995c63 */
  if ((C.zf||C.sf!=C.of)) goto L_10995c63;
  /* 10995bf0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995bf4 jae 0x10995c00 */
  if (!C.cf) goto L_10995c00;
  /* 10995bf6 mov eax, 3 */
  EAX = (0x3u);
  /* 10995bfb jmp 0x10995e34 */
  goto L_10995e34;
L_10995c00:;
  /* 10995c00 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10995c03 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10995c06 jmp 0x10995c11 */
  goto L_10995c11;
L_10995c08:;
  /* 10995c08 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10995c0b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995c0e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10995c11:;
  /* 10995c11 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10995c14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995c16 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10995c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10995c1a je 0x10995c59 */
  if (C.zf) goto L_10995c59;
  /* 10995c1c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10995c1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10995c21 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10995c24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10995c26 je 0x10995c59 */
  if (C.zf) goto L_10995c59;
  /* 10995c28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995c2b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10995c2d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10995c2f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10995c32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995c34 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10995c36 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995c38 jl 0x10995c57 */
  if ((C.sf!=C.of)) goto L_10995c57;
  /* 10995c3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995c3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10995c3f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10995c41 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10995c44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10995c46 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10995c49 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995c4b jg 0x10995c57 */
  if ((!C.zf&&C.sf==C.of)) goto L_10995c57;
  /* 10995c4d mov eax, 2 */
  EAX = (0x2u);
  /* 10995c52 jmp 0x10995e34 */
  goto L_10995e34;
L_10995c57:;
  /* 10995c57 jmp 0x10995c08 */
  goto L_10995c08;
L_10995c59:;
  /* 10995c59 mov eax, 3 */
  EAX = (0x3u);
  /* 10995c5e jmp 0x10995e34 */
  goto L_10995e34;
L_10995c63:;
  /* 10995c63 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995c67 jle 0x10995cdc */
  if ((C.zf||C.sf!=C.of)) goto L_10995cdc;
  /* 10995c69 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995c6d jae 0x10995c79 */
  if (!C.cf) goto L_10995c79;
  /* 10995c6f mov eax, 1 */
  EAX = (0x1u);
  /* 10995c74 jmp 0x10995e34 */
  goto L_10995e34;
L_10995c79:;
  /* 10995c79 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10995c7c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10995c7f jmp 0x10995c8a */
  goto L_10995c8a;
L_10995c81:;
  /* 10995c81 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10995c84 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995c87 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10995c8a:;
  /* 10995c8a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10995c8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10995c8f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10995c91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10995c93 je 0x10995cd2 */
  if (C.zf) goto L_10995cd2;
  /* 10995c95 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10995c98 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10995c9a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10995c9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10995c9f je 0x10995cd2 */
  if (C.zf) goto L_10995cd2;
  /* 10995ca1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995ca6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10995ca8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10995cab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10995cad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10995caf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995cb1 jl 0x10995cd0 */
  if ((C.sf!=C.of)) goto L_10995cd0;
  /* 10995cb3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995cb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10995cb8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10995cba mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10995cbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995cbf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10995cc2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995cc4 jg 0x10995cd0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10995cd0;
  /* 10995cc6 mov eax, 2 */
  EAX = (0x2u);
  /* 10995ccb jmp 0x10995e34 */
  goto L_10995e34;
L_10995cd0:;
  /* 10995cd0 jmp 0x10995c81 */
  goto L_10995c81;
L_10995cd2:;
  /* 10995cd2 mov eax, 1 */
  EAX = (0x1u);
  /* 10995cd7 jmp 0x10995e34 */
  goto L_10995e34;
L_10995cdc:;
  /* 10995cdc push 0 */
  push32((uint32_t)(0x0u));
  /* 10995cde push 0 */
  push32((uint32_t)(0x0u));
  /* 10995ce0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10995ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10995ce4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995ce7 push edx */
  push32((uint32_t)(EDX));
  /* 10995ce8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10995cea mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10995ced push eax */
  push32((uint32_t)(EAX));
  /* 10995cee call dword ptr [0x109b4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4308))), 0x10995cf4u);
  /* 10995cf4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10995cf7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995cfb jne 0x10995d04 */
  if (!C.zf) goto L_10995d04;
  /* 10995cfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995cff jmp 0x10995e34 */
  goto L_10995e34;
L_10995d04:;
  /* 10995d04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10995d0b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10995d0e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10995d10 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995d13 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10995d15 call 0x10989040 */
  push32(0x10995d1au); f_10989040();
  /* 10995d1a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10995d1d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10995d20 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10995d23 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10995d26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10995d2d jmp 0x10995d46 */
  goto L_10995d46;
  /* 10995d2f mov eax, 1 */
  EAX = (0x1u);
  /* 10995d34 ret  */
  ESPCHK(0x10995a50u, _esp0);
  ESP += 4; return;
  /* 10995d35 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10995d38 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10995d3f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10995d46:;
  /* 10995d46 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995d4a jne 0x10995d53 */
  if (!C.zf) goto L_10995d53;
  /* 10995d4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995d4e jmp 0x10995e34 */
  goto L_10995e34;
L_10995d53:;
  /* 10995d53 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10995d56 push edx */
  push32((uint32_t)(EDX));
  /* 10995d57 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10995d5a push eax */
  push32((uint32_t)(EAX));
  /* 10995d5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10995d5e push ecx */
  push32((uint32_t)(ECX));
  /* 10995d5f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10995d62 push edx */
  push32((uint32_t)(EDX));
  /* 10995d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10995d65 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10995d68 push eax */
  push32((uint32_t)(EAX));
  /* 10995d69 call dword ptr [0x109b4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4308))), 0x10995d6fu);
  /* 10995d6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10995d71 jne 0x10995d7a */
  if (!C.zf) goto L_10995d7a;
  /* 10995d73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995d75 jmp 0x10995e34 */
  goto L_10995e34;
L_10995d7a:;
  /* 10995d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10995d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10995d7e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10995d81 push ecx */
  push32((uint32_t)(ECX));
  /* 10995d82 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995d85 push edx */
  push32((uint32_t)(EDX));
  /* 10995d86 push 9 */
  push32((uint32_t)(0x9u));
  /* 10995d88 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10995d8b push eax */
  push32((uint32_t)(EAX));
  /* 10995d8c call dword ptr [0x109b4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4308))), 0x10995d92u);
  /* 10995d92 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10995d95 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995d99 jne 0x10995da2 */
  if (!C.zf) goto L_10995da2;
  /* 10995d9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995d9d jmp 0x10995e34 */
  goto L_10995e34;
L_10995da2:;
  /* 10995da2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10995da9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10995dac shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10995dae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995db1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10995db3 call 0x10989040 */
  push32(0x10995db8u); f_10989040();
  /* 10995db8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10995dbb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10995dbe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10995dc1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10995dc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10995dcb jmp 0x10995de4 */
  goto L_10995de4;
  /* 10995dcd mov eax, 1 */
  EAX = (0x1u);
  /* 10995dd2 ret  */
  ESPCHK(0x10995a50u, _esp0);
  ESP += 4; return;
  /* 10995dd3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10995dd6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10995ddd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10995de4:;
  /* 10995de4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995de8 jne 0x10995dee */
  if (!C.zf) goto L_10995dee;
  /* 10995dea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995dec jmp 0x10995e34 */
  goto L_10995e34;
L_10995dee:;
  /* 10995dee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10995df1 push edx */
  push32((uint32_t)(EDX));
  /* 10995df2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10995df5 push eax */
  push32((uint32_t)(EAX));
  /* 10995df6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10995df9 push ecx */
  push32((uint32_t)(ECX));
  /* 10995dfa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10995dfd push edx */
  push32((uint32_t)(EDX));
  /* 10995dfe push 1 */
  push32((uint32_t)(0x1u));
  /* 10995e00 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10995e03 push eax */
  push32((uint32_t)(EAX));
  /* 10995e04 call dword ptr [0x109b4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4308))), 0x10995e0au);
  /* 10995e0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10995e0c jne 0x10995e12 */
  if (!C.zf) goto L_10995e12;
  /* 10995e0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995e10 jmp 0x10995e34 */
  goto L_10995e34;
L_10995e12:;
  /* 10995e12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10995e15 push ecx */
  push32((uint32_t)(ECX));
  /* 10995e16 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10995e19 push edx */
  push32((uint32_t)(EDX));
  /* 10995e1a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10995e1d push eax */
  push32((uint32_t)(EAX));
  /* 10995e1e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10995e21 push ecx */
  push32((uint32_t)(ECX));
  /* 10995e22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10995e25 push edx */
  push32((uint32_t)(EDX));
  /* 10995e26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995e29 push eax */
  push32((uint32_t)(EAX));
  /* 10995e2a call dword ptr [0x109b42b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42b8))), 0x10995e30u);
  /* 10995e30 jmp 0x10995e34 */
  goto L_10995e34;
L_10995e32:;
  /* 10995e32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10995e34:;
  /* 10995e34 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10995e37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10995e3a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10995e41 pop edi */
  EDI = (pop32());
  /* 10995e42 pop esi */
  ESI = (pop32());
  /* 10995e43 pop ebx */
  EBX = (pop32());
  /* 10995e44 mov esp, ebp */
  ESP = (EBP);
  /* 10995e46 pop ebp */
  EBP = (pop32());
  /* 10995e47 ret  */
  ESPCHK(0x10995a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e50 @ 0x10995e50 (80 bytes, 32 insns) */
void f_10995e50(void) {
  FTRACE(0x10995e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10995e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10995e51 mov ebp, esp */
  EBP = (ESP);
  /* 10995e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995e56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10995e59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10995e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995e5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10995e62:;
  /* 10995e62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10995e65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10995e68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995e6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10995e6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10995e70 je 0x10995e87 */
  if (C.zf) goto L_10995e87;
  /* 10995e72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10995e75 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10995e78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10995e7a je 0x10995e87 */
  if (C.zf) goto L_10995e87;
  /* 10995e7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10995e7f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10995e82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10995e85 jmp 0x10995e62 */
  goto L_10995e62;
L_10995e87:;
  /* 10995e87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10995e8a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10995e8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10995e8f jne 0x10995e99 */
  if (!C.zf) goto L_10995e99;
  /* 10995e91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10995e94 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995e97 jmp 0x10995e9c */
  goto L_10995e9c;
L_10995e99:;
  /* 10995e99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10995e9c:;
  /* 10995e9c mov esp, ebp */
  ESP = (EBP);
  /* 10995e9e pop ebp */
  EBP = (pop32());
  /* 10995e9f ret  */
  ESPCHK(0x10995e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ea0 @ 0x10995ea0 (736 bytes, 224 insns) */
void f_10995ea0(void) {
  FTRACE(0x10995ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10995ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10995ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10995ea3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995ea6 push esi */
  push32((uint32_t)(ESI));
  /* 10995ea7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995eab je 0x10995ecc */
  if (C.zf) goto L_10995ecc;
  /* 10995ead push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10995eaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995eb2 push eax */
  push32((uint32_t)(EAX));
  /* 10995eb3 call 0x109962f0 */
  push32(0x10995eb8u); f_109962f0();
  /* 10995eb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995ebb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10995ebe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995ec2 je 0x10995ecc */
  if (C.zf) goto L_10995ecc;
  /* 10995ec4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995ec7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995eca jne 0x10995ed4 */
  if (!C.zf) goto L_10995ed4;
L_10995ecc:;
  /* 10995ecc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10995ecf jmp 0x1099617b */
  goto L_1099617b;
L_10995ed4:;
  /* 10995ed4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10995ed7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10995edb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10995edd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995edf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10995ee0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10995ee3 mov ecx, dword ptr [0x109b1670] */
  ECX = (r32((uint32_t)(0x109b1670)));
  /* 10995ee9 cmp ecx, dword ptr [0x109b1674] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b1674))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995eef jne 0x10995f05 */
  if (!C.zf) goto L_10995f05;
  /* 10995ef1 mov edx, dword ptr [0x109b1670] */
  EDX = (r32((uint32_t)(0x109b1670)));
  /* 10995ef7 push edx */
  push32((uint32_t)(EDX));
  /* 10995ef8 call 0x10996200 */
  push32(0x10995efdu); f_10996200();
  /* 10995efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995f00 mov dword ptr [0x109b1670], eax */
  w32((uint32_t)(0x109b1670), (EAX));
L_10995f05:;
  /* 10995f05 cmp dword ptr [0x109b1670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995f0c jne 0x10995fc5 */
  if (!C.zf) goto L_10995fc5;
  /* 10995f12 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995f16 je 0x10995f37 */
  if (C.zf) goto L_10995f37;
  /* 10995f18 cmp dword ptr [0x109b1678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995f1f je 0x10995f37 */
  if (C.zf) goto L_10995f37;
  /* 10995f21 call 0x109959a0 */
  push32(0x10995f26u); f_109959a0();
  /* 10995f26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10995f28 je 0x10995f32 */
  if (C.zf) goto L_10995f32;
  /* 10995f2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10995f2d jmp 0x1099617b */
  goto L_1099617b;
L_10995f32:;
  /* 10995f32 jmp 0x10995fc5 */
  goto L_10995fc5;
L_10995f37:;
  /* 10995f37 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995f3b je 0x10995f44 */
  if (C.zf) goto L_10995f44;
  /* 10995f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10995f3f jmp 0x1099617b */
  goto L_1099617b;
L_10995f44:;
  /* 10995f44 cmp dword ptr [0x109b1670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995f4b jne 0x10995f84 */
  if (!C.zf) goto L_10995f84;
  /* 10995f4d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10995f52 push 0x109adcd8 */
  push32((uint32_t)(0x109adcd8u));
  /* 10995f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 10995f59 push 4 */
  push32((uint32_t)(0x4u));
  /* 10995f5b call 0x10985ea0 */
  push32(0x10995f60u); f_10985ea0();
  /* 10995f60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995f63 mov dword ptr [0x109b1670], eax */
  w32((uint32_t)(0x109b1670), (EAX));
  /* 10995f68 cmp dword ptr [0x109b1670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995f6f jne 0x10995f79 */
  if (!C.zf) goto L_10995f79;
  /* 10995f71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10995f74 jmp 0x1099617b */
  goto L_1099617b;
L_10995f79:;
  /* 10995f79 mov eax, dword ptr [0x109b1670] */
  EAX = (r32((uint32_t)(0x109b1670)));
  /* 10995f7e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10995f84:;
  /* 10995f84 cmp dword ptr [0x109b1678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995f8b jne 0x10995fc5 */
  if (!C.zf) goto L_10995fc5;
  /* 10995f8d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10995f92 push 0x109adcd8 */
  push32((uint32_t)(0x109adcd8u));
  /* 10995f97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10995f99 push 4 */
  push32((uint32_t)(0x4u));
  /* 10995f9b call 0x10985ea0 */
  push32(0x10995fa0u); f_10985ea0();
  /* 10995fa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995fa3 mov dword ptr [0x109b1678], eax */
  w32((uint32_t)(0x109b1678), (EAX));
  /* 10995fa8 cmp dword ptr [0x109b1678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995faf jne 0x10995fb9 */
  if (!C.zf) goto L_10995fb9;
  /* 10995fb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10995fb4 jmp 0x1099617b */
  goto L_1099617b;
L_10995fb9:;
  /* 10995fb9 mov ecx, dword ptr [0x109b1678] */
  ECX = (r32((uint32_t)(0x109b1678)));
  /* 10995fbf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10995fc5:;
  /* 10995fc5 mov edx, dword ptr [0x109b1670] */
  EDX = (r32((uint32_t)(0x109b1670)));
  /* 10995fcb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10995fce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10995fd1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10995fd4 push eax */
  push32((uint32_t)(EAX));
  /* 10995fd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10995fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10995fd9 call 0x10996180 */
  push32(0x10995fdeu); f_10996180();
  /* 10995fde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10995fe1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10995fe4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995fe8 jl 0x10996081 */
  if ((C.sf!=C.of)) goto L_10996081;
  /* 10995fee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10995ff1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995ff4 je 0x10996081 */
  if (C.zf) goto L_10996081;
  /* 10995ffa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10995ffe je 0x10996073 */
  if (C.zf) goto L_10996073;
  /* 10996000 push 2 */
  push32((uint32_t)(0x2u));
  /* 10996002 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10996005 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10996008 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1099600b push edx */
  push32((uint32_t)(EDX));
  /* 1099600c call 0x10986930 */
  push32(0x10996011u); f_10986930();
  /* 10996011 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10996014 jmp 0x1099601f */
  goto L_1099601f;
L_10996016:;
  /* 10996016 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10996019 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099601c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1099601f:;
  /* 1099601f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10996022 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10996025 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10996029 je 0x10996040 */
  if (C.zf) goto L_10996040;
  /* 1099602b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099602e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10996031 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10996034 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10996037 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1099603b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1099603e jmp 0x10996016 */
  goto L_10996016;
L_10996040:;
  /* 10996040 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10996045 push 0x109adcd8 */
  push32((uint32_t)(0x109adcd8u));
  /* 1099604a push 2 */
  push32((uint32_t)(0x2u));
  /* 1099604c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099604f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10996052 push eax */
  push32((uint32_t)(EAX));
  /* 10996053 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10996056 push ecx */
  push32((uint32_t)(ECX));
  /* 10996057 call 0x10986330 */
  push32(0x1099605cu); f_10986330();
  /* 1099605c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099605f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10996062 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10996066 je 0x10996071 */
  if (C.zf) goto L_10996071;
  /* 10996068 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099606b mov dword ptr [0x109b1670], edx */
  w32((uint32_t)(0x109b1670), (EDX));
L_10996071:;
  /* 10996071 jmp 0x1099607f */
  goto L_1099607f;
L_10996073:;
  /* 10996073 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10996076 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10996079 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099607c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1099607f:;
  /* 1099607f jmp 0x109960f4 */
  goto L_109960f4;
L_10996081:;
  /* 10996081 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10996085 jne 0x109960ed */
  if (!C.zf) goto L_109960ed;
  /* 10996087 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099608b jge 0x10996095 */
  if ((C.sf==C.of)) goto L_10996095;
  /* 1099608d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10996090 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10996092 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10996095:;
  /* 10996095 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1099609a push 0x109adcd8 */
  push32((uint32_t)(0x109adcd8u));
  /* 1099609f push 2 */
  push32((uint32_t)(0x2u));
  /* 109960a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109960a4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 109960ab push edx */
  push32((uint32_t)(EDX));
  /* 109960ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109960af push eax */
  push32((uint32_t)(EAX));
  /* 109960b0 call 0x10986330 */
  push32(0x109960b5u); f_10986330();
  /* 109960b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109960b8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109960bb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109960bf jne 0x109960c9 */
  if (!C.zf) goto L_109960c9;
  /* 109960c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109960c4 jmp 0x1099617b */
  goto L_1099617b;
L_109960c9:;
  /* 109960c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109960cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109960cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109960d2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 109960d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109960d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109960db mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 109960e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109960e6 mov dword ptr [0x109b1670], eax */
  w32((uint32_t)(0x109b1670), (EAX));
  /* 109960eb jmp 0x109960f4 */
  goto L_109960f4;
L_109960ed:;
  /* 109960ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109960ef jmp 0x1099617b */
  goto L_1099617b;
L_109960f4:;
  /* 109960f4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109960f8 je 0x10996179 */
  if (C.zf) goto L_10996179;
  /* 109960fa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 109960ff push 0x109adcd8 */
  push32((uint32_t)(0x109adcd8u));
  /* 10996104 push 2 */
  push32((uint32_t)(0x2u));
  /* 10996106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10996109 push ecx */
  push32((uint32_t)(ECX));
  /* 1099610a call 0x10988cd0 */
  push32(0x1099610fu); f_10988cd0();
  /* 1099610f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10996112 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10996115 push eax */
  push32((uint32_t)(EAX));
  /* 10996116 call 0x10985ea0 */
  push32(0x1099611bu); f_10985ea0();
  /* 1099611b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099611e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10996121 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10996125 je 0x10996179 */
  if (C.zf) goto L_10996179;
  /* 10996127 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099612a push edx */
  push32((uint32_t)(EDX));
  /* 1099612b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1099612e push eax */
  push32((uint32_t)(EAX));
  /* 1099612f call 0x10988e50 */
  push32(0x10996134u); f_10988e50();
  /* 10996134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10996137 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1099613a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1099613d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10996140 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10996142 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10996145 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10996148 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1099614b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099614e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10996151 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10996154 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10996157 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10996159 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1099615b not edx */
  EDX = (~(EDX));
  /* 1099615d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10996160 push edx */
  push32((uint32_t)(EDX));
  /* 10996161 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10996164 push eax */
  push32((uint32_t)(EAX));
  /* 10996165 call dword ptr [0x109b42b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42b4))), 0x1099616bu);
  /* 1099616b push 2 */
  push32((uint32_t)(0x2u));
  /* 1099616d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10996170 push ecx */
  push32((uint32_t)(ECX));
  /* 10996171 call 0x10986930 */
  push32(0x10996176u); f_10986930();
  /* 10996176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10996179:;
  /* 10996179 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1099617b:;
  /* 1099617b pop esi */
  ESI = (pop32());
  /* 1099617c mov esp, ebp */
  ESP = (EBP);
  /* 1099617e pop ebp */
  EBP = (pop32());
  /* 1099617f ret  */
  ESPCHK(0x10995ea0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10996180 (124 bytes, 47 insns) */
void f_10996180(void) {
  FTRACE(0x10996180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10996180 push ebp */
  push32((uint32_t)(EBP));
  /* 10996181 mov ebp, esp */
  EBP = (ESP);
  /* 10996183 push ecx */
  push32((uint32_t)(ECX));
  /* 10996184 mov eax, dword ptr [0x109b1670] */
  EAX = (r32((uint32_t)(0x109b1670)));
  /* 10996189 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1099618c jmp 0x10996197 */
  goto L_10996197;
L_1099618e:;
  /* 1099618e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10996191 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10996194 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10996197:;
  /* 10996197 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099619a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099619d je 0x109961ea */
  if (C.zf) goto L_109961ea;
  /* 1099619f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109961a2 push eax */
  push32((uint32_t)(EAX));
  /* 109961a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109961a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109961a8 push edx */
  push32((uint32_t)(EDX));
  /* 109961a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109961ac push eax */
  push32((uint32_t)(EAX));
  /* 109961ad call 0x10995950 */
  push32(0x109961b2u); f_10995950();
  /* 109961b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109961b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109961b7 jne 0x109961e8 */
  if (!C.zf) goto L_109961e8;
  /* 109961b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109961bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109961be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109961c1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 109961c5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109961c8 je 0x109961da */
  if (C.zf) goto L_109961da;
  /* 109961ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109961cd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109961cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109961d2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 109961d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109961d8 jne 0x109961e8 */
  if (!C.zf) goto L_109961e8;
L_109961da:;
  /* 109961da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109961dd sub eax, dword ptr [0x109b1670] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b1670))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109961e3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 109961e6 jmp 0x109961f8 */
  goto L_109961f8;
L_109961e8:;
  /* 109961e8 jmp 0x1099618e */
  goto L_1099618e;
L_109961ea:;
  /* 109961ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109961ed sub eax, dword ptr [0x109b1670] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b1670))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109961f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 109961f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_109961f8:;
  /* 109961f8 mov esp, ebp */
  ESP = (EBP);
  /* 109961fa pop ebp */
  EBP = (pop32());
  /* 109961fb ret  */
  ESPCHK(0x10996180u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10996200 (238 bytes, 80 insns) */
void f_10996200(void) {
  FTRACE(0x10996200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10996200 push ebp */
  push32((uint32_t)(EBP));
  /* 10996201 mov ebp, esp */
  EBP = (ESP);
  /* 10996203 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10996206 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1099620d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10996210 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10996213 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10996217 jne 0x10996220 */
  if (!C.zf) goto L_10996220;
  /* 10996219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099621b jmp 0x109962ea */
  goto L_109962ea;
L_10996220:;
  /* 10996220 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10996223 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10996225 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10996228 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099622b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1099622e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10996230 je 0x1099623d */
  if (C.zf) goto L_1099623d;
  /* 10996232 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10996235 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10996238 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1099623b jmp 0x10996220 */
  goto L_10996220;
L_1099623d:;
  /* 1099623d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10996242 push 0x109adcd8 */
  push32((uint32_t)(0x109adcd8u));
  /* 10996247 push 2 */
  push32((uint32_t)(0x2u));
  /* 10996249 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1099624c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10996253 push eax */
  push32((uint32_t)(EAX));
  /* 10996254 call 0x10985ea0 */
  push32(0x10996259u); f_10985ea0();
  /* 10996259 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099625c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1099625f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10996262 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10996265 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10996269 jne 0x10996275 */
  if (!C.zf) goto L_10996275;
  /* 1099626b push 9 */
  push32((uint32_t)(0x9u));
  /* 1099626d call 0x10984e10 */
  push32(0x10996272u); f_10984e10();
  /* 10996272 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10996275:;
  /* 10996275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10996278 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1099627b:;
  /* 1099627b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099627e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10996281 je 0x109962de */
  if (C.zf) goto L_109962de;
  /* 10996283 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10996288 push 0x109adcd8 */
  push32((uint32_t)(0x109adcd8u));
  /* 1099628d push 2 */
  push32((uint32_t)(0x2u));
  /* 1099628f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10996292 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10996294 push edx */
  push32((uint32_t)(EDX));
  /* 10996295 call 0x10988cd0 */
  push32(0x1099629au); f_10988cd0();
  /* 1099629a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099629d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109962a0 push eax */
  push32((uint32_t)(EAX));
  /* 109962a1 call 0x10985ea0 */
  push32(0x109962a6u); f_10985ea0();
  /* 109962a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109962a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109962ac mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109962ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109962b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109962b4 je 0x109962ca */
  if (C.zf) goto L_109962ca;
  /* 109962b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109962b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109962bb push ecx */
  push32((uint32_t)(ECX));
  /* 109962bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109962bf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109962c1 push eax */
  push32((uint32_t)(EAX));
  /* 109962c2 call 0x10988e50 */
  push32(0x109962c7u); f_10988e50();
  /* 109962c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109962ca:;
  /* 109962ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109962cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109962d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109962d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109962d6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109962d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109962dc jmp 0x1099627b */
  goto L_1099627b;
L_109962de:;
  /* 109962de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109962e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109962e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109962ea:;
  /* 109962ea mov esp, ebp */
  ESP = (EBP);
  /* 109962ec pop ebp */
  EBP = (pop32());
  /* 109962ed ret  */
  ESPCHK(0x10996200u, _esp0);
  ESP += 4; return;
}

/* FUN_100162f0 @ 0x109962f0 (237 bytes, 81 insns) */
void f_109962f0(void) {
  FTRACE(0x109962f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109962f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109962f1 mov ebp, esp */
  EBP = (ESP);
  /* 109962f3 push ecx */
  push32((uint32_t)(ECX));
  /* 109962f4 cmp dword ptr [0x109b2dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b2dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109962fb jne 0x10996312 */
  if (!C.zf) goto L_10996312;
  /* 109962fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10996300 push eax */
  push32((uint32_t)(EAX));
  /* 10996301 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10996304 push ecx */
  push32((uint32_t)(ECX));
  /* 10996305 call 0x109963f0 */
  push32(0x1099630au); f_109963f0();
  /* 1099630a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099630d jmp 0x109963d9 */
  goto L_109963d9;
L_10996312:;
  /* 10996312 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10996314 call 0x109898a0 */
  push32(0x10996319u); f_109898a0();
  /* 10996319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099631c jmp 0x10996327 */
  goto L_10996327;
L_1099631e:;
  /* 1099631e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10996321 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10996324 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10996327:;
  /* 10996327 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099632a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1099632e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10996332 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10996335 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1099633b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1099633d je 0x109963bb */
  if (C.zf) goto L_109963bb;
  /* 1099633f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10996342 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10996347 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10996349 mov cl, byte ptr [eax + 0x109b2ec1] */
  CL = (r8((uint32_t)(EAX + 0x109b2ec1)));
  /* 1099634f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10996352 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10996354 je 0x109963a6 */
  if (C.zf) goto L_109963a6;
  /* 10996356 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10996359 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099635c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1099635f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10996362 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10996364 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10996366 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10996368 jne 0x10996378 */
  if (!C.zf) goto L_10996378;
  /* 1099636a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1099636c call 0x10989940 */
  push32(0x10996371u); f_10989940();
  /* 10996371 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10996374 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10996376 jmp 0x109963d9 */
  goto L_109963d9;
L_10996378:;
  /* 10996378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099637b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10996381 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10996384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10996387 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10996389 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1099638b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1099638d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10996390 jne 0x109963a4 */
  if (!C.zf) goto L_109963a4;
  /* 10996392 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10996394 call 0x10989940 */
  push32(0x10996399u); f_10989940();
  /* 10996399 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099639c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099639f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109963a2 jmp 0x109963d9 */
  goto L_109963d9;
L_109963a4:;
  /* 109963a4 jmp 0x109963b6 */
  goto L_109963b6;
L_109963a6:;
  /* 109963a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109963a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109963af cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109963b2 jne 0x109963b6 */
  if (!C.zf) goto L_109963b6;
  /* 109963b4 jmp 0x109963bb */
  goto L_109963bb;
L_109963b6:;
  /* 109963b6 jmp 0x1099631e */
  goto L_1099631e;
L_109963bb:;
  /* 109963bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109963bd call 0x10989940 */
  push32(0x109963c2u); f_10989940();
  /* 109963c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109963c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109963c8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109963cd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109963d0 jne 0x109963d7 */
  if (!C.zf) goto L_109963d7;
  /* 109963d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109963d5 jmp 0x109963d9 */
  goto L_109963d9;
L_109963d7:;
  /* 109963d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109963d9:;
  /* 109963d9 mov esp, ebp */
  ESP = (EBP);
  /* 109963db pop ebp */
  EBP = (pop32());
  /* 109963dc ret  */
  ESPCHK(0x109962f0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x109963f0 (193 bytes, 87 insns) */
void f_109963f0(void) {
  FTRACE(0x109963f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109963f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109963f2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 109963f6 push ebx */
  push32((uint32_t)(EBX));
  /* 109963f7 mov ebx, eax */
  EBX = (EAX);
  /* 109963f9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 109963fc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10996400 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10996406 je 0x1099641b */
  if (C.zf) goto L_1099641b;
L_10996408:;
  /* 10996408 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1099640a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1099640b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1099640d je 0x109963e0 */
  if (C.zf) { jmp_ind(0x109963e0u); return; }
  /* 1099640f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10996411 je 0x10996464 */
  if (C.zf) goto L_10996464;
  /* 10996413 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10996419 jne 0x10996408 */
  if (!C.zf) goto L_10996408;
L_1099641b:;
  /* 1099641b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1099641d push edi */
  push32((uint32_t)(EDI));
  /* 1099641e mov eax, ebx */
  EAX = (EBX);
  /* 10996420 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10996423 push esi */
  push32((uint32_t)(ESI));
  /* 10996424 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10996426:;
  /* 10996426 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10996428 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1099642d mov eax, ecx */
  EAX = (ECX);
  /* 1099642f mov esi, edi */
  ESI = (EDI);
  /* 10996431 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10996433 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10996435 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10996437 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1099643a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1099643d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1099643f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10996441 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10996444 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1099644a jne 0x10996468 */
  if (!C.zf) goto L_10996468;
  /* 1099644c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10996451 je 0x10996426 */
  if (C.zf) goto L_10996426;
  /* 10996453 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10996458 jne 0x10996462 */
  if (!C.zf) goto L_10996462;
  /* 1099645a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10996460 jne 0x10996426 */
  if (!C.zf) goto L_10996426;
L_10996462:;
  /* 10996462 pop esi */
  ESI = (pop32());
  /* 10996463 pop edi */
  EDI = (pop32());
L_10996464:;
  /* 10996464 pop ebx */
  EBX = (pop32());
  /* 10996465 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10996467 ret  */
  ESPCHK(0x109963f0u, _esp0);
  ESP += 4; return;
L_10996468:;
  /* 10996468 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1099646b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1099646d je 0x109964a5 */
  if (C.zf) goto L_109964a5;
  /* 1099646f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10996471 je 0x10996462 */
  if (C.zf) goto L_10996462;
  /* 10996473 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10996475 je 0x1099649e */
  if (C.zf) goto L_1099649e;
  /* 10996477 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10996479 je 0x10996462 */
  if (C.zf) goto L_10996462;
  /* 1099647b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1099647e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10996480 je 0x10996497 */
  if (C.zf) goto L_10996497;
  /* 10996482 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10996484 je 0x10996462 */
  if (C.zf) goto L_10996462;
  /* 10996486 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10996488 je 0x10996490 */
  if (C.zf) goto L_10996490;
  /* 1099648a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1099648c je 0x10996462 */
  if (C.zf) goto L_10996462;
  /* 1099648e jmp 0x10996426 */
  goto L_10996426;
L_10996490:;
  /* 10996490 pop esi */
  ESI = (pop32());
  /* 10996491 pop edi */
  EDI = (pop32());
  /* 10996492 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10996495 pop ebx */
  EBX = (pop32());
  /* 10996496 ret  */
  ESPCHK(0x109963f0u, _esp0);
  ESP += 4; return;
L_10996497:;
  /* 10996497 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1099649a pop esi */
  ESI = (pop32());
  /* 1099649b pop edi */
  EDI = (pop32());
  /* 1099649c pop ebx */
  EBX = (pop32());
  /* 1099649d ret  */
  ESPCHK(0x109963f0u, _esp0);
  ESP += 4; return;
L_1099649e:;
  /* 1099649e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 109964a1 pop esi */
  ESI = (pop32());
  /* 109964a2 pop edi */
  EDI = (pop32());
  /* 109964a3 pop ebx */
  EBX = (pop32());
  /* 109964a4 ret  */
  ESPCHK(0x109963f0u, _esp0);
  ESP += 4; return;
L_109964a5:;
  /* 109964a5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 109964a8 pop esi */
  ESI = (pop32());
  /* 109964a9 pop edi */
  EDI = (pop32());
  /* 109964aa pop ebx */
  EBX = (pop32());
  /* 109964ab ret  */
  ESPCHK(0x109963f0u, _esp0);
  ESP += 4; return;
  /* 109964ac jmp dword ptr [0x109b434c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x109b434c)))); return;
}

/* RtlUnwind @ 0x109965fc (6 bytes, 1 insns) */
void f_109965fc(void) {
  FTRACE(0x109965fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109965fc jmp dword ptr [0x109b42f0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x109b42f0)))); return;
}

